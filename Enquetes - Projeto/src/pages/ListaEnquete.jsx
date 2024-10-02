import React, { useState } from "react";
import { useEnquetes } from "../context/EnqueteContext";
import { FontAwesomeIcon } from "@fortawesome/react-fontawesome";
import { faFolderOpen } from "@fortawesome/free-solid-svg-icons";

const ListaEnquete = ({ enquete, opcoes }) => {
	const { enquetes } = useEnquetes();
	const [votes, setVotes] = useState([]);
	const [votedItems, setVotedItems] = useState([]);
	//enquetes.map((enquete, index) => console.log(enquete));

	const submitVote = (index) => {
		const updatedVotes = [...votes]; //cria uma cópia do estado votes usando o spread operator (...).

		const params = new URLSearchParams();
		params.append("id_opcao", index);

		//verifica se o índice já está presente no estado votedItems, que armazena os índices das opções em que o usuário já votou
		if (!votedItems.includes(index)) {
			params.append("incremento", 1);

			//Incrementa o voto para essa opção em 1 na cópia do estado.
			updatedVotes[index] = (updatedVotes[index] || 0) + 1; //a primeira vez retorna indefinido, caso seja indefinido a opcao é tratado como 0
			setVotes(updatedVotes); //Atualiza o estado 'votes' com a nova cópia
			setVotedItems([...votedItems, index]); //Adiciona o índice ao estado votedItems.
		} else {
			params.append("incremento", 0);

			/* DECREMENTE O VOTO CASO ELE JÁ TENHA VOTADO */
			updatedVotes[index] -= 1; //decrementa
			setVotes(updatedVotes);

			//filter faz a remoção do index desejado, irá criar novamente o array com todos os item diferentes do index que foi clicado/supostamente apagado
			setVotedItems(votedItems.filter((item) => item !== index));
		}

		fetch("http://localhost/enquete/api/teste-votos.php", {
			method: "POST",
			headers: {
				"Content-Type": "application/x-www-form-urlencoded",
			},
			body: params.toString(), //string de URL codificada, formato acima obriga
		})
			.then((response) => response.json())
			.then((data) => {
				if (data.success) {
					console.log("ok");
				} else {
					console.error("Erro ao salvar o voto:", data.error);
				}
			})
			.catch((error) => {
				console.error("Erro:", error);
			});
	};

	/*
	No React, para atualizar o estado de um array, é uma prática recomendada criar um novo array (ou objeto) em vez de mutar diretamente o estado existente. Isso ocorre porque a mutação direta do estado não é detectada corretamente pelo mecanismo de renderização do React, o que pode levar a problemas com a atualização da interface do usuário.
	*/

	const BoxEnquetes = () => {
		if (enquetes.length == 0) {
			return (
				<div className="box-enquete-vazio">
					<FontAwesomeIcon icon={faFolderOpen} /> Não há enquetes
				</div>
			);
		}

		return (
			<>
				{enquetes.map((enquete, index) => (
					<div className="box-enquete" key={index}>
						<h3>{enquete.enquete}</h3>
						<ul>
							{enquete.opcoes.map((opcao, segundoIndex) => (
								//Devesse colocar array function para não chamar ao entrar na página
								<li
									key={index + 1 + "" + segundoIndex}
									onClick={(e) =>
										submitVote(
											index + 1 + "" + segundoIndex
										)
									}
								>
									{opcao} - Votos:{" "}
									{votes[index + 1 + "" + segundoIndex] || 0}
								</li>
							))}
						</ul>
					</div>
				))}
			</>
		);
	};

	return (
		<section className="box-enquetes">
			<BoxEnquetes />
		</section>
	);
};

export default ListaEnquete;
