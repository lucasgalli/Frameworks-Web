import React, { useState } from "react";
import Button from "../styled-components/ButtonStyled";
import Input from "../styled-components/InputStyled";
import { useDados } from "../context/context";

function AdicionaDados() {

	const { addDados } = useDados(); //Primeiro deve criar o context e então importar acima
	const [dados, setDados] = useState("")

	const submitForm = (e) => {
		e.preventDefault();
		addDados(dados);
		setDados("");
	};

	return (
		<main>
			<h2>Escreve algo campo abaixo</h2>
			<form onSubmit={submitForm}>
				<Input
					value={dados}
					onChange={(e) => setDados(e.target.value)}
				/>
				<br />
				<br />
				<Button type="submit" titulo="Clique aqui" className="primary" />
			</form>
		</main>
	);
}

export default AdicionaDados;
