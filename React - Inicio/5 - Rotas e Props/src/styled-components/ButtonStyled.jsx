import React from "react";
import styled from 'styled-components';

//background-color: ${props => props.estilo === 'primary' ? '#006f9b' : 'red'};

const StyledButton = styled.button`
	background-color: ${props => {
		switch (props.className) {
			case 'primary':
				return '#006f9b';
			case 'second':
				return 'red';
			default:
				return 'green';
		}
	}};
	color: #fff;
	font-size: 16px;
	padding: 10px 20px;
	border: none;
	border-radius: 5px;
	cursor: pointer;

	&:hover {
	background-color: #0056b3;
	}

	&:disabled {
	opacity: 0.5;
	cursor: not-allowed;
	}
`;

// Componente de botão reutilizável
const Button = ({ type, titulo, onClick, disabled, className }) => (
	<StyledButton className={className} type={type} onClick={onClick} disabled={disabled}>
		{titulo}
	</StyledButton>
);

export default Button;