import React from "react";
import { Link } from "react-router-dom";
import styled from "styled-components"

const Nav = styled.nav`
	display: flex;
	align-items: center;
	justify-content: space-between;
	padding: 0 20px;
`
const Ul = styled.ul`
	display: flex;
	gap: 20px;
`
const H2 = styled.h2`
	color: #FFF
`

const Header = () => {
	return (
		<Nav>
			<H2>Meus Posts</H2>
			<Ul>
				<li>
					<Link to="/">Home</Link>
				</li>
				<li>
					<Link to="/listposts">Lista posts</Link>
				</li>
				<li>
					<Link to="/addpost">Adiciona post</Link>
				</li>
			</Ul>
		</Nav>
	);
}

export default Header;