import React from "react";
import { useState, useEffect } from "react";
import urlPlaceHolder from "../axios/config";
import { usePosts } from "../config/context";
import { Link } from "react-router-dom";

const Home = () => {
	const { novoPost } = usePosts([]);
	const [posts, setPosts] = useState([]);

	const allPosts = posts.concat(novoPost);

	console.log(allPosts);

	const getPosts = async () => {
		try {
			const response = await urlPlaceHolder.get("/posts");
			const data = response.data;
			setPosts(data);
		} catch (error) {
			console.log(error);
		}
	};

	useEffect(() => {
		getPosts();
	}, []);

	if (posts.length == 0) {
		return <>Não há posts</>;
	}

	return (
		<div>
			<h1>Lista de posts</h1>
			{allPosts.reverse().map((post, index) => {
				return (
					<div key={index}>
						<section>
							<h2>{post.title}</h2>
							<p>{post.body}</p>
							<Link to={`/post/${index}`}>Ver mais</Link>
						</section>
						<hr />
					</div>
				);
			})}
		</div>
	);
};

export default Home;
