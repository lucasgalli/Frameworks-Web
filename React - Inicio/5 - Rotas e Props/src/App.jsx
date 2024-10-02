import React from "react";
import Header from "./componentes/Header";
import Footer from "./componentes/Footer";
import Rotas from "./config/routes";
import GlobalStyle from "./styled-components/GlobalStyle";

//npm install styled-components

function App() {
	return (
		<>
			<Header />
			<Rotas />
			<Footer />
			<GlobalStyle />
		</>
	);
}

export default App;
