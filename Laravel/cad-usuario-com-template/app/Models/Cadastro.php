<?php

namespace App\Models;

use Illuminate\Database\Eloquent\Factories\HasFactory;
use Illuminate\Database\Eloquent\Model;

class Cadastro extends Model
{
    use HasFactory;

    // Definindo a tabela
    protected $table = 'cadastros';

    // Definindo os campos que podem ser preenchidos
    protected $fillable = [
        'nome',
        'email',
        'idade',
        'senha'
    ];
}

