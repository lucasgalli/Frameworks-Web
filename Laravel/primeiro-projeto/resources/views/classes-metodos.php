<?php

/*

O que é uma Classe?
Ela define um conjunto de características (dados) e comportamentos (funções) que os objetos criados a partir dela podem ter
*/

//por convenção deve começar com maiuscula
class MinhaClasse {

	//Uma função dentro de uma classe é chamada de método
    public function saudacao() { // saudacao é o nome do método
        echo "Olá, Mundo!";
    }

	//public indica que essa função pode ser acessada de fora da classe, ou seja, qualquer código fora da classe pode chamar essa função.
}

//Um objeto é uma instância de uma classe. Pense na classe como um molde, e o objeto é o produto criado a partir desse molde.
// cria um novo objeto da classe MinhaClasse. Esse objeto tem todas as características e comportamentos definidos pela classe
$objeto = new MinhaClasse(); //a variável representa um objeto do tipo MinhaClasse
//acessa o método de um objeto
//seta é usada em PHP para acessar métodos e propriedades de um objeto
$objeto->saudacao(); //executa o código que está dentro do método

echo '<br>';
echo '<br>';

class Carro0 {
    // Propriedade para armazenar a marca do carro
    public $marca;
    public $preco;

    // Método para definir a marca do carro
    public function definirMarca($nomeMarca) {
        $this->marca = $nomeMarca; //nome da propriedade
	}  
	
	// Método para definir a marca do carro
    public function definirPreco($preco) {
        $this->preco = $preco; //nome da propriedade
	}

    // Método para exibir a marca do carro
    public function mostrarMarca() {
        echo "A marca do carro é: " . $this->marca;
    }
    // Método para exibir a marca do carro
    public function mostrarPreco() {
        echo "O preço é: " . $this->preco;
    }
}

// Criando um objeto da classe Carro
$carro1 = new Carro0();
$carro2 = new Carro0();

// Definindo a marca do carro usando o método definirMarca
$carro1->definirMarca("Toyota <br>");
$carro1->definirPreco("R$ 150.000 <br>");

$carro2->definirMarca("VW <br>");
$carro2->definirPreco("R$ 70.000 <br>");

// Exibindo a marca do carro usando o método mostrarMarca
$carro1->mostrarMarca();
$carro1->mostrarPreco();

$carro2->mostrarMarca();
$carro2->mostrarPreco();

echo '<br><br>';

//Clareza e Separação de Responsabilidades:
//Método 1
/*
class Carro {
    // Atributos
    public $marca;
    public $modelo;
    // Método
    public function dirigir() {
        echo "Dirigindo o carro ".$this->marca." modelo ".$this->modelo;
    }
}
$meuCarro = new Carro();  // Criação de um objeto
$meuCarro->marca = "Toyota";
$meuCarro->modelo = "Corolla";
$meuCarro->dirigir();  // Chama o método dirigir()
echo '<br><br>';
//Método 2
class Carro2 {
    // Atributos
    public $marca;
    public $modelo;
    // Método
    public function dirigir($marca, $modelo) {
		$this->marca = $marca;
		$this->modelo = $modelo;
    }
	public function mostrarInfo() {
        echo "O carro que estou dirigindo é: " . $this->marca." modelo ".$this->modelo;
    }
}
$meuCarro2 = new Carro2();  // Criação de um objeto
$meuCarro2->dirigir("Toyota", "Corolla");  // Chama o método dirigir()
$meuCarro2->mostrarInfo();  // Chama o método dirigir()
*/
echo '<br><br>';


//ATIVIDADE
class Pessoa {
	public $nome;
	public $idade;

	public function definirInfoPessoa($nome, $idade){
		$this->nome = $nome;
		$this->idade = $idade;
	}

	public function mostrarInfoPessoa(){
		echo "Nome: ".$this->nome;
		echo "idade: ".$this->idade;
	}
}

$pessoa = new Pessoa();
$pessoa->nome = "Lucas";
$pessoa->idade = 33;

$pessoa->mostrarInfoPessoa();

echo '<br>';
echo '<br>';

//ENCAPSULAMENTO

//usar um método para definir seu valor já é um passo em direção ao encapsulamento. Isso cria um ponto único de controle para modificar o atributo.
class Encapsulamento {
    private $velocidade = 0; // Atributo privado

    public function acelerar() {
        $this->velocidade += 10; // Incrementa a velocidade
    }

    public function getVelocidade() {
        return $this->velocidade; // Retorna a velocidade atual
    }
}

$objEncapsulamento = new Encapsulamento(); // Cria um novo objeto da classe Encapsulamento
$objEncapsulamento->acelerar(); // Chama o método acelerar, que incrementa a velocidade
echo "Velocidade: " . $objEncapsulamento->getVelocidade() . "\n"; // Exibe a velocidade atual

// Tentativa de modificação direta do atributo $velocidade
$objEncapsulamento->velocidade = 100; // Isso gerará um erro

echo "Velocidade após tentativa de modificação direta: " . $objEncapsulamento->getVelocidade();


class Carro2 {
    //Encapsulamento dos Atributos: Os atributos marca e preco foram alterados para private para proteger o estado interno da classe e evitar modificações diretas de fora da classe.
    private $marca;
    private $preco;

	//O objetivo principal de um construtor é inicializar o objeto, ou seja, definir valores iniciais para as propriedades
	//inicializar os atributos marca e preco no momento da criação do objeto
	public function __construct($marca = "", $preco = 0.0) {
		$this->definirMarca($marca);
		$this->definirPreco($preco);
	}

	//Validação de Dados: Validação nos métodos definirMarca e definirPreco para garantir que os valores atribuídos aos atributos sejam válidos.
	//a marca deve ser uma string não vazia, e o preço deve ser um número não negativo.
    public function definirMarca($nomeMarca) {
		if (is_string($nomeMarca) && !empty($nomeMarca)) {
        	$this->marca = $nomeMarca; //nome da propriedade
		}
		else{
			echo "Marca inválida.<br>";
		}
	}  
	
	// Método para definir a marca do carro
    public function definirPreco($preco) {
		if (is_numeric($preco) && $preco >= 0) {
			$this->preco = $preco; //nome da propriedade
		}
		else {
            echo "Preço inválido.<br>";
        }
	}

    // Método para exibir a marca do carro
    public function mostrarMarca() {
        echo "A marca do carro é: " . $this->marca."<br>";
    }
    // Método para exibir a marca do carro
    public function mostrarPreco() {
        echo "O preço é: " . $this->preco."<br>"; //number_format(, 2, ',', '.') //formatar o preço na saída, garantindo que ele seja exibido de maneira consistente com duas casas decimais e o separador de milhar correto.
    }
}

// Criando um objeto da classe Carro
$carro01 = new Carro2("Toyota", 150.000);
$carro02 = new Carro2("VW", 70.000);

// Exibindo a marca do carro usando o método mostrarMarca
$carro01->mostrarMarca();
$carro01->mostrarPreco();

$carro02->mostrarMarca();
$carro02->mostrarPreco();

/*
Explicação das Melhorias


Correção de Pequenos Erros: Corrigimos o nome da classe de Carro0 para Carro para evitar erros de sintaxe.

Benefícios das Melhorias
Melhor Encapsulamento e Segurança: Os atributos estão protegidos contra modificações externas não autorizadas.
Código Mais Limpo e Manutenível: Separação clara de responsabilidades e implementação de boas práticas de POO.
Validação e Controle: Adiciona uma camada de validação para garantir que apenas dados válidos sejam atribuídos aos atributos.
Consistência e Legibilidade: Melhorias na formatação de saída e nomenclatura tornam o código mais fácil de ler e entender

*/


?>
