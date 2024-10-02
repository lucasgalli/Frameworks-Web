import React from "react";
import styled from "styled-components";

const StyledInput = styled.input`
	padding: 10px;
	font-size: 16px;
	border: 1px solid #ccc;
	border-radius: 5px;
`;

const Input = ({ onChange, value }) => {
	return <StyledInput placeholder="Digite aqui" onChange={onChange} value={value} />;
};

export default Input;
