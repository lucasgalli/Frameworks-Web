@if (session('success'))
    <div style="color: green;">
        {{ session('success') }}
    </div>
@endif

<form action="{{ url('/submit-form') }}" method="POST">
    @csrf
    <div>
        <label for="name">Nome:</label>
        <input type="text" id="name" name="name">
    </div>
    <div>
        <label for="email">Email:</label>
        <input type="email" id="email" name="email">
    </div>
    <button type="submit">Enviar</button>
</form>
