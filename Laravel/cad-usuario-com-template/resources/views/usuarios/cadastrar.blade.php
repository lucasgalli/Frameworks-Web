@extends('layouts.app')

@section('title', 'Cadastrar Usuário')

@section('main')
	<h2>Cadastrar Novo Usuário</h2>
	<form action="{{ route('rotaUsuarios.store') }}" method="POST">
		@csrf
		<label for="nome">Nome:</label>
		<input type="text" id="nome" name="nome" required>
		<br>
		<label for="email">Email:</label>
		<input type="email" id="email" name="email" required>
		<br>
		<label for="idade">Idade:</label>
		<input type="number" id="idade" name="idade" required>
		<br>
		<label for="senha">Senha:</label>
		<input type="text" id="senha" name="senha" required>
		<br>
		<button type="submit">Cadastrar</button>
		{{-- todo componente do templade blade começa com x- --}}
		<x-button>Cadastrar</x-button>
	</form>
	<a href="{{ route('rotaUsuarios.index') }}">Voltar para a lista</a>
@endsection
