<?php
class Livro {
    // Propriedades para armazenar as informações do livro
    public $titulo;
    public $autor;
    public $ano;
    public $preco;

    // Método para definir o título do livro
    public function definirTitulo($titulo) {
        $this->titulo = $titulo;
    }

    // Método para definir o autor do livro
    public function definirAutor($autor) {
        $this->autor = $autor;
    }

    // Método para definir o ano de publicação do livro
    public function definirAno($ano) {
        $this->ano = $ano;
    }

    // Método para definir o preço do livro
    public function definirPreco($preco) {
        $this->preco = $preco;
    }

    // Método para exibir todas as informações do livro
    public function mostrarInformacoes() {
        echo "Título: " . $this->titulo . "<br>";
        echo "Autor: " . $this->autor . "<br>";
        echo "Ano de Publicação: " . $this->ano . "<br>";
        echo "Preço: " . $this->preco . "<br><br>";
    }
}

// Criando objetos da classe Livro
$livro1 = new Livro();
$livro2 = new Livro();
$livro3 = new Livro();

// Definindo as informações de cada livro
$livro1->definirTitulo("O Senhor dos Anéis");
$livro1->definirAutor("J.R.R. Tolkien");
$livro1->definirAno(1954);
$livro1->definirPreco("R$ 60,00");

$livro2->definirTitulo("1984");
$livro2->definirAutor("George Orwell");
$livro2->definirAno(1949);
$livro2->definirPreco("R$ 45,00");

$livro3->definirTitulo("A Revolução dos Bichos");
$livro3->definirAutor("George Orwell");
$livro3->definirAno(1945);
$livro3->definirPreco("R$ 35,00");

// Exibindo as informações de cada livro
$livro1->mostrarInformacoes();
$livro2->mostrarInformacoes();
$livro3->mostrarInformacoes();
?>
