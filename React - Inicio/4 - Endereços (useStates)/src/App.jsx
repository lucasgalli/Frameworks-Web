import "./App.css";
import React, { useState } from "react";
import { urlViaCep } from "./axios/config";

function App() {
	const [endereco, setEndereco] = useState({ cep: "" });
	const [msgErro, setMsgErro] = useState("");

	function buscaEndereco(evento) {
		const cep = evento.target.value.replace(/\D/g, "");

		console.log(cep);
		setEndereco({
			cep,
		});

		if (cep && cep.length === 8) {
			try {
				urlViaCep.get(`${cep}/json`).then(function (response) {
					const dados = response.data;
					if (!dados.erro) {
						setEndereco({
							cep: cep,
							rua: dados.logradouro,
							bairro: dados.bairro,
							cidade: dados.localidade,
							estado: dados.uf,
						});
					} else {
						setMsgErro("Não achou o cep");
					}
				});
			} catch (error) {
				console.log(error);
			}
		}
	}

	return (
		<>
			<input
				type="text"
				onChange={buscaEndereco}
				value={endereco.cep}
				maxLength={8}
			/>
			<div>{msgErro}</div>
			<div>cep:{endereco.cep}</div>
			<div>rua:{endereco.rua}</div>
			<div>bairro:{endereco.bairro}</div>
			<div>cidade:{endereco.cidade}</div>
			<div>estado:{endereco.estado}</div>
		</>
	);
}

export default App;
