import React from "react";
import axios from "axios";

export const urlViaCep = axios.create({
	baseURL: "https://viacep.com.br/ws/",
	timeout: 1000,
	headers: {
		"Content-Type": "application/json",
	},
});
