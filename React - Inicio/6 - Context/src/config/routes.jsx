import React from "react";
import { Route, Routes } from "react-router-dom";
import ListPosts from "../pages/ListPosts";
import Home from "../pages/Home";
import AddPost from "../pages/AddPost";

const Rotas = () => {
	return (
		<Routes>
			<Route path="/" element={<Home />}></Route>
			<Route path="/listposts" element={<ListPosts />}></Route>
			<Route path="/addpost" element={<AddPost />}></Route>
		</Routes>
	)
}

export default Rotas;