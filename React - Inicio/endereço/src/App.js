import './App.css';
import React, { useState } from "react";

function App() {

	const[nome, setNome] = useState('Lucas');
	const[ocultar, setOcultar] = useState(true);
	const[escrita, setEscrita] = useState('');
	const[endereco, setEndereco] = useState({});

	function buscaEndereco(evento){

		const cep = evento.target.value;

		setEndereco({
			cep 
		});

		if(cep && cep.length === 8){
			fetch(`https://viacep.com.br/ws/${cep}/json`)
			.then(resposta => resposta.json())
			.then(dados => {
				setEndereco({
					cep: cep,
					rua: dados.logradouro,
					bairro: dados.bairro,
					cidade: dados.localidade,
					estado: dados.uf
				})
			})
		}
	}

	return (
		<>
			<div>Eu sou o {nome}</div>
			<button onClick={() => setNome('Prof. Lucas')}>Trocar de nome</button>
			<p></p>
			<div className={ocultar?'show':'hide'}>
				conteúdo para esconder
			</div>
			<button onClick={() => setOcultar(!ocultar)}>Esconder conteudo</button>
			<p></p>
			<input type="text" onChange={evento => setEscrita(evento.target.value)}/>
			<div>O que esta sendo digitado:{escrita}</div>
			<p></p>
			<input type="text" onChange={buscaEndereco}/>
			<div>cep:{endereco.cep}</div>
			<div>rua:{endereco.rua}</div>
			<div>bairro:{endereco.bairro}</div>
			<div>cidade:{endereco.cidade}</div>
			<div>estado:{endereco.estado}</div>
		</>
	);
}

export default App;
