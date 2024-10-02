@extends('layout')

@section('content')
<h1>Lista de Doações</h1>
<a href="/donations/create" class="btn btn-primary">Adicionar Nova Doação</a>

<table class="table mt-3">
    <thead>
        <tr>
            <th>Item</th>
            <th>Tipo</th>
            <th>Status</th>
            <th>Data de Doação</th>
            <th>Ação</th>
        </tr>
    </thead>
    <tbody>
        @foreach($donations as $donation)
        <tr>
            <td>{{ $donation->item_name }}</td>
            <td>{{ $donation->item_type }}</td>
            <td>{{ $donation->status }}</td>
            <td>{{ $donation->donation_date }}</td>
            <td>
                @if($donation->status == 'available')
                <form action="/donations/{{ $donation->id }}/status" method="POST">
                    @csrf
                    <button class="btn btn-success">Marcar como Recebido</button>
                </form>
                @endif
            </td>
        </tr>
        @endforeach
    </tbody>
</table>
@endsection
