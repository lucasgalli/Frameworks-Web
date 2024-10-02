import React, { useState } from "react";
import { Navigate } from "react-router-dom";
import Cookies from "js-cookie";

const Admin = () => {
	const [usuario, setUsuario] = useState("");
	const [senha, setSenha] = useState("");
	const [login, setLogin] = useState(false);

	const submitForm = (e) => {
		e.preventDefault();
		if (usuario == "Lucas" && senha == "1234") {
			console.log(usuario);
			setLogin(true);
			setSenha(true);
			Cookies.set("usuario", usuario, { expires: 7 });
		}
	};

	if (login) {
		return <Navigate to="/adiciona-enquete" />;
	}

	return (
		<>
			<section>
				<form onSubmit={submitForm}>
					<label>Usuario</label>
					<br />
					<input
						className="usuario"
						type="text"
						value={usuario}
						onChange={(e) => setUsuario(e.target.value)}
					/>
					<br />
					<br />
					<label>Senha</label>
					<br />
					<input
						className="senha"
						type="text"
						value={senha}
						onChange={(e) => setSenha(e.target.value)}
					/>

					<br />

					<button type="submit">Acessar</button>
				</form>
			</section>
		</>
	);
};

export default Admin;
