<?php
namespace App\Http\Controllers; 
// Define o namespace da classe, que é App\Http\Controllers, para organizar as classes em diretórios e evitar conflitos de nomes.

use Illuminate\Http\Request; 
// Importa a classe Request do Laravel para lidar com dados de requisições HTTP, como formulários.

class UserController extends Controller 
// Declara a classe UserController, que herda de Controller para acessar funcionalidades comuns fornecidas pelo Laravel.
{
    private $users; 
	/*
	Privada restringe o acesso direto, só pode ser modificada dentro da própria classe "UserController";
	Pública pode acessar ou modificar diretamente a propriedade a partir de qualquer lugar. 
	*/
    // Declara uma propriedade privada $users que armazenará os dados fictícios dos usuários.

    public function __construct() 
    // Método construtor que é executado automaticamente ao criar uma instância da classe UserController.
    {
        // Inicializa a propriedade $users com uma coleção de dados fictícios de usuários.
        $this->users = collect([
            ['id' => 1, 'name' => 'John Doe', 'email' => 'john@example.com'],
            ['id' => 2, 'name' => 'Jane Smith', 'email' => 'jane@example.com'],
            ['id' => 3, 'name' => 'Bob Johnson', 'email' => 'bob@example.com'],
        ]);
    }

    public function index() 
    // Método público index que será chamado para listar todos os usuários.
    {
        // Retorna a view 'users.index' passando a coleção de usuários para que a view possa exibi-los.
        return view('users.index', ['users' => $this->users]);
    }

    public function show($id) 
    // Método público show que recebe um parâmetro $id e será chamado para exibir os detalhes de um único usuário.
    {
        // Procura o primeiro usuário na coleção $users cujo id corresponda ao $id fornecido.
        $user = $this->users->firstWhere('id', $id);

        if ($user) {
            // Se o usuário foi encontrado, retorna a view 'users.show' passando os dados do usuário.
            return view('users.show', ['user' => $user]);
        } else {
            // Se o usuário não for encontrado, retorna um erro 404 com a mensagem 'User not found'.
            return abort(404, 'User not found');
        }
    }
}


