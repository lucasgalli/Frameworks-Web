import React, { useState } from "react";
import { useEnquetes } from "../context/EnqueteContext";

const ListaEnquete = ({ enquete, opcoes }) => {
	const { enquetes } = useEnquetes();
	const [votes, setVotes] = useState([]);

	//enquetes.map((enquete, index) => console.log(enquete));

	const submitVote = (index) => {
		const updatedVotes = [...votes];
		updatedVotes[index] = (updatedVotes[index] || 0) + 1;
		setVotes(updatedVotes);
	};

	return (
		<section>
			<h2>Enquetes</h2>
			{enquetes.map((enquete, index) => (
				<div key={index}>
					<h3>{enquete.enquete}</h3>
					<ul>
						{enquete.opcoes.map((opcao, index) => (
							//Devesse colocar array function para não chamar ao entrar na página
							<li key={index} onClick={() => submitVote(index)}>
								{opcao} - Votos: {votes[index] || 0}
							</li>
						))}
					</ul>
				</div>
			))}
		</section>
	);
};

export default ListaEnquete;
