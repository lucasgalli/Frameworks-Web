import React, { createContext, useContext, useState } from "react";

/* Cria o contexto, vai compartilhar todos o estados que estiverem envolvidos*/
const EnqueteContext = createContext(); //depois de criar, deve criar o <EnqueteContext.Provider>

export const useEnquetes = () => useContext(EnqueteContext); //depois de criar, deve criar o <EnqueteContext.Provider>

//funcão que vai prover o contexto enquetes
const EnqueteProvider = ({ children }) => {
	//Children é as rotas do contexto
	const [enquetes, setEnquetes] = useState([]);

	const addEnquete = (enquete) => {
		//console.log(enquete);
		setEnquetes([...enquetes, enquete]); //sintaxe Spread ... para lista todas
	};

	return (
		// const EnqueteContext acima, O Provider é um componente fornecido pelo contexto
		//passar os props no value
		<EnqueteContext.Provider value={{ enquetes, addEnquete }}>
			{children}
		</EnqueteContext.Provider>
	);
};

export default EnqueteProvider;
