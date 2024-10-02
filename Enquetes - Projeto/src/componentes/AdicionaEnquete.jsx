import React, { useState } from "react";
import { useEnquetes } from "../context/EnqueteContext";

const AdicionarEnquete = () => {
	//Estado para armazenar os valores
	const { addEnquete } = useEnquetes(); //Primeiro deve criar o context e então importar acima
	const [enquete, setEnquete] = useState("");
	const [opcoes, setOpcoes] = useState([]);

	const addOpcao = () => {
		setOpcoes([...opcoes, ""]); //spread operator - pegar todos os elementos do array 'opcoes' e adicionar mais um array vazio toda vez que clica. obs: o "" no final serve para zerar o campo
	};

	const handleOpcaoChange = (e, index) => {
		const newOpcoes = [...opcoes];
		newOpcoes[index] = e.target.value;
		setOpcoes(newOpcoes);
	};

	const submitForm = (e) => {
		e.preventDefault();

		for (let i = 0; i < opcoes.length; i++) {
			if (!opcoes[i]) {
				return false; // Retorna false se encontrar uma opção vazia
			}
		}

		addEnquete({ enquete, opcoes });
		setEnquete("");
		setOpcoes([""]);
	};

	//opcoes.map((option, index) => console.log(index));

	return (
		<section>
			<form onSubmit={submitForm}>
				<label>Qual o título da enquete?</label>
				<br />
				<input
					autoFocus
					className="titulo-enquete"
					type="text"
					value={enquete}
					onChange={(e) => setEnquete(e.target.value)}
				/>
				{opcoes.map((option, index) => (
					<div key={index}>
						<label>{`Opção ${index + 1}:`}</label>
						<input
							type="text"
							value={option}
							onChange={(e) => handleOpcaoChange(e, index)}
						/>
					</div>
				))}

				<br />

				{enquete ? (
					<button type="button" onClick={addOpcao}>
						Adicionar Opção
					</button>
				) : (
					""
				)}

				{opcoes.length > 0 ? <button type="submit">Salvar</button> : ""}
			</form>
			<div>
				<h2>{enquete}</h2>
				<ul>
					{opcoes.map((option, index) => (
						<li key={index}>{option}</li>
					))}
				</ul>
			</div>
		</section>
	);
};

export default AdicionarEnquete;
