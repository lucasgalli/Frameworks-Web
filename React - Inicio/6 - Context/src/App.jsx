import React from "react";
import "./App.css";
import Header from "./componentes/Header";
import Rotas from "./config/routes";
import { PostProvider } from "./config/context";

function App() {
	return (
		<>
			<PostProvider>
				<Header />
				<Rotas />
			</PostProvider>
		</>
	);
}

export default App;
