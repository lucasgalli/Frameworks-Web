import React, { useState } from "react";
import ListaDinamica from "./Lista";
import Cookies from "js-cookie";

function Input() {
	const [text, setText] = useState("");

	const handleChange = (event) => {
		setText(event.target.value);
	};

	return (
		<div>
			<div>
				<input type="text" value={text} onChange={handleChange} />
				<p>O texto digitado é: {text}</p>
			</div>
		</div>
	);
}

export default Input;
