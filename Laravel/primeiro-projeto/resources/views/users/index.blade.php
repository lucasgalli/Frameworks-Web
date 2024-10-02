@extends('layouts.app')

@section('content')
    <h1>Lista Usuários</h1>
    <ul>
        @foreach ($users as $user)
            <li><a href="{{ url('/users/' . $user['id']) }}">{{ $user['name'] }}</a></li>
        @endforeach
    </ul>
@endsection
