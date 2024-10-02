import React from "react";
import Header from "./componentes/Header";
import Content from "./componentes/Conteudo";
import Contador from "./componentes/Contador";

function App() {
	return (
		<div className="box">
			<Header />
			<Content />
			<Contador />
		</div>
	);
}

export default App;
