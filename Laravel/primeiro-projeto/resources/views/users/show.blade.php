@extends('layouts.app')

@section('content')
    <h1>{{ $user['name'] }}</h1>
    <p>Email: {{ $user['email'] }}</p>
    <a href="{{ url('/users') }}">Back to users</a>
@endsection
