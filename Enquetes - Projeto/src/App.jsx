import React, { useState, useEffect } from "react";
import Header from "./componentes/Header";
import Footer from "./componentes/Footer";
import "./App.css";

import Rotas from "./config/routes";

function App() {
	//é acionado depois que o componente é exibido na tela. Isso é importante porque algumas operações, como a manipulação do DOM ou chamadas de API,
	useEffect(() => {
		/* cursor personalizado */
		const cursor = document.querySelector(".cursor");
		const trailElements = [];

		for (let i = 0; i < 30; i++) {
			//cria a div rastro
			const div = document.createElement("div");
			div.classList.add("trail");
			div.style.opacity = 2 - i * 0.1; // Ajusta a opacidade com base no índice
			document.body.appendChild(div);
			trailElements.push(div);
		}

		const handleMouseMove = (e) => {
			const mouseX = e.clientX / window.innerWidth - 1;
			const mouseY = e.clientY / window.innerHeight - 1;
			const moveX = (mouseX - 0.5) * 30;
			const moveY = (mouseY - 0.5) * 30;
			document.body.style.backgroundPosition = `${moveX}px ${moveY}px`;

			cursor.style.left = e.clientX + "px";
			cursor.style.top = e.clientY + "px";

			// Atualiza a posição das partículas
			trailElements.forEach((trail, index) => {
				setTimeout(() => {
					trail.style.left = e.clientX + "px";
					trail.style.top = e.clientY + "px";
				}, index * 10); // atraso em cascata para o rastro
			});
		};

		document.addEventListener("mousemove", handleMouseMove);

		return () => {
			document.removeEventListener("mousemove", handleMouseMove);

			trailElements.forEach((trail) => document.body.removeChild(trail));
		};
	}, []); //é uma boa prática incluir explicitamente a matriz de dependências para deixar claro que o efeito não depende de nenhuma variável externa

	return (
		<>
			<div className="cursor"></div>
			<Header />
			<main>
				<Rotas />
			</main>
			<Footer />
		</>
	);
}

export default App;
