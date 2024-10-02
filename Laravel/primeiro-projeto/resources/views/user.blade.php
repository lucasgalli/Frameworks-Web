<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Perfil do Usuário</title>
</head>
<body>
    <header>
        <h1>Perfil do Usuário</h1>
    </header>

    <main>
        <section>
            <h2>Informações do Usuário</h2>
            <p><strong>Nome:</strong> {{ $nome }}</p>
            <p><strong>Idade:</strong> {{ $idade }}</p>
            <p><strong>Email:</strong> {{ $email }}</p>
        </section>
    </main>

    <footer>
        <p>&copy; 2024 Perfil do Usuário</p>
    </footer>
</body>
</html>
