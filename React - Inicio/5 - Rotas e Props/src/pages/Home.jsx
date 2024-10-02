import React from "react";
import { useDados } from "../context/context";

const Home = () => {
	const { dados } = useDados();

	//dados.map((dado, index) => console.log(dado));

	if (dados.length == 0) {
		return <main><div>Não há dados</div></main>;
	}

	return (
		<main>
			<ul>
				{dados.map((dado, index) => (
					<li key={index}>{dado}</li>
				))}
			</ul>
		</main>
	);
};

export default Home;
