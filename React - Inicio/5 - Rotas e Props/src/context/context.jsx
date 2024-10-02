import React, { createContext, useContext, useState } from "react";

/* Cria o contexto, vai compartilhar todos o estados que estiverem envolvidos*/
//depois deve criar o componente que será exportado e então o <siteContext.Provider> dentro do return
const SiteContext = createContext();

export const useDados = () => useContext(SiteContext); //depois de criar, deve criar o <EnqueteContext.Provider>

/*
O children dentro do ContextProvider é uma propriedade especial do React que permite 
que outros componentes sejam aninhados dentro do componente ContextProvider e sejam renderizados dentro dele
*/
const ContextProvider = ({ children }) => { //é uma propriedade especial

	const [dados, setDados] = useState([]);

	const addDados = (dado) => {
		//Primeiro aqui, depois chama na página perfil
		//console.log(dado);
		setDados([...dados, dado]); //sintaxe Spread ... para lista todas
	};

	return (
		// const SiteContext acima, O Provider é um componente fornecido pelo contexto
		//passar os props no value
		<SiteContext.Provider value={{ dados, addDados }}>
			{children}
		</SiteContext.Provider>
	);
};

// DEVE IMPORTAR EM ROUTES
export default ContextProvider;
