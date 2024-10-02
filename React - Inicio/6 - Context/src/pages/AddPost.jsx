import React, { useState } from "react";
import { usePosts } from "../config/context";

const AdicionaPost = () => {
	const { AddPost } = usePosts();
	const [title, setTitle] = useState("");
	const [body, setBody] = useState("");

	const enviaPost = (e) => {
		e.preventDefault();

		AddPost({ title, body });
		setTitle("");
		setBody("");
	};

	return (
		<main>
			<form onSubmit={enviaPost}>
				<label>Post</label>
				<br />
				<input
					type="text"
					value={title}
					onChange={(e) => setTitle(e.target.value)}
				/>
				<br />
				<br />
				<label>Descrição</label>
				<br />
				<textarea
					value={body}
					onChange={(e) => setBody(e.target.value)}
				/>
				<br />
				<button type="submit">Salva Post</button>
			</form>
		</main>
	);
};

export default AdicionaPost;
