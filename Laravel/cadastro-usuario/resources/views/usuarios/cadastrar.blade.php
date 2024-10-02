<!DOCTYPE html>
<html>
<head>
    <title>Cadastrar Usuário</title>
</head>
<body>
    <header>
        <h1>Cadastrar Novo Usuário</h1>
        <nav>
            <a href="{{ route('rotaUsuarios.index') }}">Voltar para a lista</a>
        </nav>
    </header>

    <main>
        <form action="{{ route('rotaUsuarios.store') }}" method="POST">
            @csrf
            <label for="nome">Nome:</label>
            <input type="text" id="nome" name="nome" required>
            <br>
            <label for="idade">Idade:</label>
            <input type="number" id="idade" name="idade" required>
            <br>
            <label for="email">Email:</label>
            <input type="email" id="email" name="email" required>
            <br>
            <button type="submit">Cadastrar</button>
        </form>
    </main>

    <footer>
        <p>&copy; {{ date('Y') }} Meu Projeto</p>
    </footer>
</body>
</html>