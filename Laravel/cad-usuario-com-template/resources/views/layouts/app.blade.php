<!DOCTYPE html>
<html>

	<head>
		{{-- é uma diretiva Blade usada para definir uma seção de conteúdo que pode ser sobrescrita em outras views que estendam a layout principal --}}
		<title>@yield('title', 'Meu Projeto')</title> {{-- se não definir title em outras páginas, fica "Meu projeto" por padrão --}}

		<link rel="stylesheet" href="{{ asset('css/app.css') }}"><!-- Incluir o JavaScript que também processa o CSS -->
	</head>

	<body>
		<header>
			<h1>Meu Projeto de Cadastro de Usuários</h1>
			<nav>
				<a href="{{ route('rotaUsuarios.index') }}">Lista de Usuários</a> |
				<a href="{{ route('rotaUsuarios.cadastrar') }}">Cadastrar Novo Usuário</a>
			</nav>
		</header>

		<main>
			@yield('main')
		</main>

		<footer>
			<p>&copy; {{ date('Y') }} Meu Projeto</p>
		</footer>
	</body>

</html>
