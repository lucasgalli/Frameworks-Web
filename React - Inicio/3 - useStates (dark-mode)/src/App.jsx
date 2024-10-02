import React, { useState } from "react";
import ListaDinamica from "./componentes/Lista";
import DarkMode from "./componentes/Input";
import Header from "./componentes/Header";
import Cookies from "js-cookie";

function App() {
	//const [darkMode, setDarkMode] = useState(false);

	const [darkMode, setDarkMode] = useState(
		//operador ternário
		Cookies.get("dark-mode") === "true" ? true : false
	);

	const toggleDarkMode = () => {
		setDarkMode(!darkMode);

		if (darkMode === false) {
			Cookies.set("dark-mode", true);
		} else {
			Cookies.set("dark-mode", false);
		}
	};

	return (
		<main className={`main ${darkMode ? "dark-mode" : ""}`}>
			<Header />
			<DarkMode />
			<ListaDinamica />

			<h1>Alterar cor de fundo</h1>
			<button onClick={toggleDarkMode}>
				{darkMode ? "Modo Claro" : "Modo Escuro"}
			</button>
		</main>
	);
}

export default App;
