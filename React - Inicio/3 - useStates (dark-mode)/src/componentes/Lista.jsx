import React, { useState } from "react";

function ListaDinamica() {
	const [items, setItems] = useState([]);
	const [text, setText] = useState("");

	const addItem = () => {
		setItems([...items, text]); //sintaxe Spread
		setText("");
	};

	return (
		<>
			<input
				type="text"
				value={text}
				onChange={(e) => setText(e.target.value)}
			/>
			<button onClick={addItem}>Adicionar</button>
			<ul>
				{items.map((item, index) => (
					<li key={index}>{item}</li>
				))}
			</ul>
		</>
	);
}

export default ListaDinamica;
