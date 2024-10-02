<?php

use Illuminate\Support\Facades\Route;

//criados com comando maker
use App\Http\Controllers\FormController;
use App\Http\Controllers\Admin\DashboardController;
use App\Http\Controllers\UserController;

//letra maiuscula App se refere a pasta app (minuscula), O namespace (definido no composer.json) App é definido na raiz do projeto Laravel e representa o diretório app/ 
//apenas para seguir padrões de escrita de código (coding standards) aceitos pela comunidade PHP
use App\Http\Controllers\TemplateController;
use App\Http\Controllers\ProdutoController;

Route::get('/', function () {
    return view('welcome');
});

Route::get('/php', function () {
    return view('php-basico2');
});

Route::get('/classes', function () {
    return view('classes-metodos');
});

Route::get('/biblioteca', function () {
    return view('biblioteca');
});

Route::get('/contact', function () {
    return view('contact'); //deve haver uma página em html na pasta views
});

//rota simples com parâmetro Obrigatório
/*Route::get('/user/{id}', function ($id) {
   return "Usuário de ID: " . $id;
});*/

//rota com view, deve conter uma arquivo com nome user na pasta views user.blade.php
/*Route::get('/user/{name}', function ($name) {
    return view('user', ['name' => $name]);
});*/

// Parâmetros Opcionais
Route::get('/user/{name?}', function ($name = 'Visitante') {
    return "Olá, " . $name;
});


// rotas com prefixo, para acessar páginas administrativas
Route::prefix('admin')->group(function () {

	Route::get('/', function () {
        return 'Login admin.';
    });

    Route::get('/dashboard', function () {
        //return 'Painel de Administração';
        return view('admin.painel-admin');
    });

    Route::get('/users', function () {
        return 'Gestão de Usuários';
    });
});

//rotas com vários parâmetros
Route::get('/userinfo', function () {
    $nome = 'Lucas Galli';
    $idade = 33;
    $email = 'lucasgalli@prof.unipar.br';

    return view('user', [
        'nome' => $nome,
        'idade' => $idade,
        'email' => $email
    ]);
});

//ATIVIDADES
Route::prefix('painel')->group(function () {
	Route::get('/', function () {
		return "Olá, bem vindo ao painel";
	});

	Route::get('/usuarios', function () {
		return view('painel.usuarios');
	});

	Route::get('/adicionar', function () {
		return view('painel.adicionar-usuario');
	});

});

//controlador criado
Route::get('/users', [UserController::class, 'index']);//Post ou get?

//funciona clicando no link criado no arquivo de lista os usuarios
Route::get('/users/{id}', [UserController::class, 'show']);//Post ou get?

Route::post('/submit-form', [FormController::class, 'submitForm']);//Post ou get?

//Route::get('/produtos', [ProdutoController::class, 'index']);

Route::get('/produtos', function () {
    // Lógica para buscar produtos do banco de dados
    $produtos = ['Produto 1', 'Produto 2', 'Produto 3'];
    
    // Retornar a vista com os produtos
    return view('produtos.index', compact('produtos'));
});

//Template blade introdução

Route::get('/template', [TemplateController::class, 'index']); //Post ou get?

/*Route::get('/template', function () {
    $name = 'Prof. Lucas Galli';
    return view('template-blade.template-blade', compact('name')); // ou ['name' => $name]
});*/

