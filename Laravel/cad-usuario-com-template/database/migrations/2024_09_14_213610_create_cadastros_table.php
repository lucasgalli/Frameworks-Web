<?php

use Illuminate\Database\Migrations\Migration;
use Illuminate\Database\Schema\Blueprint;
use Illuminate\Support\Facades\Schema;

return new class extends Migration
{
    /**
     * Run the migrations.
     */
    public function up(): void
    {
		Schema::create('cadastros', function (Blueprint $table) {
            $table->id();
            $table->string('nome');           // Coluna para o nome
            $table->string('email')->unique(); // Coluna para o email, com restrição de unicidade
            $table->integer('idade');         // Coluna para a idade
            $table->string('senha');          // Coluna para a senha
            $table->timestamps();             // Cria as colunas 'created_at' e 'updated_at'
        });
    }

    /**
     * Reverse the migrations.
     */
    public function down(): void
    {
        Schema::dropIfExists('cadastros');
    }
};
