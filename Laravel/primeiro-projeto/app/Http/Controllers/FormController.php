<?php

namespace App\Http\Controllers;

use Illuminate\Http\Request;

class FormController extends Controller
{
    public function submitForm(Request $request)
    {
        // Validação dos dados
        $request->validate([
            'name' => 'required|max:255',
            'email' => 'required|email|max:255',
        ]);

        // Processar os dados, como salvar no banco de dados ou enviar um e-mail

        // Retornar uma resposta, como redirecionamento ou uma mensagem de sucesso
        return redirect('/contact')->with('success', 'Formulário enviado com sucesso!');
    }
}

