<?php

namespace App\Http\Controllers;

use App\Models\Cadastro;

use Illuminate\Http\Request;

class UserController extends Controller
{
    // Método para exibir a lista de usuários
    public function index()
    {
		$listaUsuarios = Cadastro::all(); //nome no modelo
        // Retorna a view 'usuarios.index' e passa a lista de usuários para ela
        return view('usuarios.index', compact('listaUsuarios'));
    }

    // Método para exibir o formulário de cadastro de usuários
    public function cadastrar()
    {
        // Retorna a view 'usuarios.cadastrar' com o formulário de cadastro
        return view('usuarios.cadastrar');
    }

    // Método para processar o envio do formulário e armazenar um novo usuário
    public function store(Request $request)
    {
        // Valida os dados do formulário
        /*$request->validate([
            'nome' => 'required|string|max:255',
            'idade' => 'required|integer',
            'email' => 'required|email',
        ]);*/

		/*$user = new User();
        $user->name = $request->input('nome');
        $user->email = $request->input('email');
        $user->idade = $request->input('idade');
        $user->password = $request->bcrypt(input('senha')); // Sempre use hash para senhas
        $user->save();*/

		Cadastro::create([
            'nome' => $request->input('nome'),
            'email' => $request->input('email'),
            'idade' => $request->input('idade'),
            'senha' => bcrypt($request->input('senha')),
        ]);
		
        // Redireciona para a lista de usuários
        return redirect()->route('rotaUsuarios.index');
    }
}
