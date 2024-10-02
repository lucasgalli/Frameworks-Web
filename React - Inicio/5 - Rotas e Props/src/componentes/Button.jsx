import React from 'react';

function Button(props) {
	const buttonStyle = {
		backgroundColor: props.tipo === 'primary' ? 'blue' : 'green',
		color: props.tipo === 'primary' ? '#FFF' : '#000',
		padding: '10px 20px',
		border: 'none',
		borderRadius: '5px',
		cursor: 'pointer'
	};

	return (
		<button style={buttonStyle}>{props.titulo}</button>
	);
}

export default Button;
