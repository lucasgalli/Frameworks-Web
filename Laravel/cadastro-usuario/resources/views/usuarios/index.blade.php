<!DOCTYPE html>
<html>
<head>
    <title>Lista de Usuários</title>
</head>
<body>
    <header>
        <h1>Usuários Cadastrados</h1>
        <nav>
            <a href="{{ route('rotaUsuarios.cadastrar') }}">Cadastrar Novo Usuário</a>
        </nav>
    </header>

    <main>
        @if (count($listaUsuarios))
            <ul>
                @foreach ($listaUsuarios as $usuario)
                    <li>{{ $usuario['nome'] }} - {{ $usuario['idade'] }} anos - {{ $usuario['email'] }}</li>
                @endforeach
            </ul>
        @else
            <p>Nenhum usuário cadastrado.</p>
        @endif
    </main>

    <footer>
        <p>&copy; {{ date('Y') }} Meu Projeto</p>
    </footer>
</body>
</html>
