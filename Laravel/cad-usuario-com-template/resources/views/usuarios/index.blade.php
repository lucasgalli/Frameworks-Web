	@extends('layouts.app') {{-- nome da pasta seguido do nome do arquivo --}}

	@section('title', 'Lista de Usuários')

	@section('main')
		<h2>Usuários Cadastrados</h2>
		@if (count($listaUsuarios))
			<ul>
				@foreach ($listaUsuarios as $usuario)
					<li>{{ $usuario['nome'] }} - {{ $usuario['idade'] }} anos - {{ $usuario['email'] }}</li>
				@endforeach
			</ul>
		@else
			<p>Nenhum usuário cadastrado.</p>
		@endif
	@endsection
