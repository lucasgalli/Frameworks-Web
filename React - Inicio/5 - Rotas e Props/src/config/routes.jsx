import React from "react";
import { Route, Routes } from "react-router-dom";

import Home from "../pages/Home";
import AdicionaDados from "../pages/AdicionaDados";
import Perfil from "../pages/Perfil";
import ContextProvider from "../context/context";

/*
element: Este atributo é usado para renderizar um elemento React específico. 
Ele permite renderizar qualquer elemento React, incluindo componentes criados pelo desenvolvedor ou elementos JSX.

component: Este atributo é usado para renderizar um componente React específico quando a rota corresponde.

*/

function Rotas() {
	return (
		<ContextProvider>
			<Routes>
				<Route path="/" element={<Home />}></Route>
				<Route path="/add" element={<AdicionaDados />}></Route>
				<Route path="/perfil" element={<Perfil />}></Route>
			</Routes>
		</ContextProvider>
	);
}

export default Rotas;
