import React, { createContext, useContext, useState } from "react";

const PostContext = createContext();

export const usePosts = () => useContext(PostContext);

export const PostProvider = ({ children }) => {
	const [novoPost, setPosts] = useState([]);

	const AddPost = (post) => {
		setPosts([...novoPost, post]);
	};

	return (
		<PostContext.Provider value={{ novoPost, AddPost }}>
			{children}
		</PostContext.Provider>
	);
};
