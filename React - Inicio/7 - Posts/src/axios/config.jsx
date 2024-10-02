import React from "react";
import axios from "axios";

const urlPlaceHolder = axios.create({
	baseURL: "https://jsonplaceholder.typicode.com",
	headers: {
		"Content-Type": "application/json"
	}
})

export default urlPlaceHolder;