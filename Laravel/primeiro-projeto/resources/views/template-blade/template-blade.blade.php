<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
	<meta http-equiv="X-UA-Compatible" content="ie=edge">
	<title>Document</title>
</head>
<body>
	<h1>Introdução ao Blade</h1>
	<br>
	<h3>Bem-vindo, {{$name}}!</h3>
	@if ($isAdmin)
		<p>Você é um administrador.</p>
	@else
		<p>Você é um usuário comum.</p>
	@endif
</body>
</html>