import React from "react";
import { Route, Routes } from "react-router-dom";
import EnqueteProvider from "../context/EnqueteContext";

import AdicionaEnquete from "../pages/AdicionaEnquete";
import ListaEnquete from "../pages/ListaEnquete";
import Home from "../pages/Home";
import Sobre from "../pages/sobre";
import Admin from "../pages/Admin";

function Rotas() {
	return (
		<EnqueteProvider>
			<Routes>
				<Route path="/lista-enquete" element={<ListaEnquete />} />
				<Route path="/adiciona-enquete" element={<AdicionaEnquete />} />
				<Route path="/sobre" element={<Sobre />} />
				<Route path="/admin" element={<Admin />} />
				<Route path="/" element={<Home />} />
			</Routes>
		</EnqueteProvider>
	);
}

export default Rotas;
