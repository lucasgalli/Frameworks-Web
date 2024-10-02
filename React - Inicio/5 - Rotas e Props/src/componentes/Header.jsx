import React from "react";
import { Link } from "react-router-dom";
import styled from "styled-components";

const HeaderStyled = styled.div`
	display: flex;
	justify-content: space-around;
	padding: 20px 0;
	background-color: #006f9b;
`;

const StyledLink = styled(Link)`
	color: #fff;
	text-decoration: none;
`;

const Header = () => {
	return (
		<HeaderStyled>
			<StyledLink to="/">Home</StyledLink>
			<StyledLink to="/add">Adiciona Dados</StyledLink>
			<StyledLink to="/perfil">Perfil</StyledLink>
		</HeaderStyled>
	);
};

/*const Header = () => {

	return (
		<header>
			<Link to="/">Home</Link>
			<Link to="/add">Adiciona Dados</Link>
			<Link to="/perfil">Perfil</Link>
		</header>
	);
}*/

export default Header;
