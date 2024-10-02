import React, { createContext, useContext, useState } from "react";

/*
Cria um novo contexto chamado PostContext. 
Este contexto será usado para compartilhar o estado dos posts entre componentes da aplicação.
*/
const PostContext = createContext();

export const usePosts = () => useContext(PostContext); //hook personalizado
/*
Exporta uma função chamada usePosts, que utiliza o hook useContext do React para acessar o contexto PostContext. 
Isso permite que outros componentes da aplicação obtenham acesso ao estado dos posts.
*/

export const PostProvider = ({ children }) => {
	//PostProvider será chamado no app.js
	/* 
	Este componente será responsável por fornecer o contexto PostContext para os componentes filhos.
	*/
	const [novoPost, setPosts] = useState([]);

	const AddPost = (post) => {
		setPosts([...novoPost, post]);
	};

	return (
		<PostContext.Provider value={{ novoPost, AddPost }}>
			{children}
		</PostContext.Provider>
	);
};
