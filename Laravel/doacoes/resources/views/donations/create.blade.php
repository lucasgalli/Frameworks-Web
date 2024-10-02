@extends('layout')

@section('content')
<h1>Cadastrar Nova Doação</h1>

<form action="/donations" method="POST">
    @csrf
    <div class="form-group">
        <label for="item_name">Nome do Item</label>
        <input type="text" name="item_name" class="form-control" required>
    </div>
    <div class="form-group">
        <label for="item_type">Tipo do Item</label>
        <input type="text" name="item_type" class="form-control" required>
    </div>
    <div class="form-group">
        <label for="description">Descrição</label>
        <textarea name="description" class="form-control"></textarea>
    </div>
    <div class="form-group">
        <label for="donation_date">Data da Doação</label>
        <input type="date" name="donation_date" class="form-control" required>
    </div>
    <button type="submit" class="btn btn-primary mt-3">Salvar Doação</button>
</form>
@endsection
