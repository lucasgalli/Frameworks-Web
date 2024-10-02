<?php

namespace App\Http\Controllers;

use Illuminate\Http\Request;

class UserController extends Controller
{
    // Método para exibir a lista de usuários
    public function index()
    {
        // Obtém a lista de usuários da sessão, ou um array vazio se não houver dados
        $listaUsuarios = session()->get('dadosUsuarios', []);
        // Retorna a view 'usuarios.index' e passa a lista de usuários para ela
        return view('usuarios.index', ['listaUsuarios' => $listaUsuarios]);
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

        // Cria um array com os dados do novo usuário
        $novoUsuario = [
            'nome' => $request->input('nome'),
            'idade' => $request->input('idade'),
            'email' => $request->input('email'),
        ];

        // Obtém a lista de usuários da sessão, ou um array vazio se não houver dados
        $listaUsuarios = session()->get('dadosUsuarios', []);
        // Adiciona o novo usuário à lista existente
        $listaUsuarios[] = $novoUsuario;
        // Armazena a lista atualizada de volta na sessão
        session()->put('dadosUsuarios', $listaUsuarios);

        // Redireciona para a lista de usuários
        return redirect()->route('rotaUsuarios.index');
    }
}
