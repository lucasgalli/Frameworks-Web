<?php

use Illuminate\Support\Facades\Route;

use App\Http\Controllers\UserController;

Route::get('/', function () {
    return view('welcome');
});

// Define a rota para exibir a lista de usuários. Usa o método 'index' do UserController.
Route::get('/', [UserController::class, 'index'])->name('rotaUsuarios.index'); //nome da rota - identificação apenas, não corresponde a nada além da rota

// Define a rota para exibir o formulário de cadastro de usuários. Usa o método 'cadastrar' do UserController.
Route::get('/cadastrar', [UserController::class, 'cadastrar'])->name('rotaUsuarios.cadastrar');

// Define a rota para processar o envio do formulário de cadastro. Usa o método 'store' do UserController.
Route::post('/store', [UserController::class, 'store'])->name('rotaUsuarios.store');
