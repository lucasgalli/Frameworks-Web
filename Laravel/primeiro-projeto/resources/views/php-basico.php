<?php

$nome = "Lucas";
$idade = 33;
$altura = 1.56;
$seVerdade = true;

if($idade >= 18){
	echo "Você é maior de idade";
}
else{
	echo "você é menor de idade";
}

echo "<br />";

$contador = 0;
while($contador < 5){
	echo "Contador: ".$contador;
	echo "<br />";
	$contador++;
}

for($i=0; $i<5; $i++){
	echo "<br />";
	echo "Valor for: ".$i;
}

$nomes = ["Lucas", "Mateus", "Fernando"];
foreach($nomes as $nom){
	echo "<br />";
	echo "Nome: ".$nom;
}
echo "<br />";echo "<br />";

/** 
 * Tag comentários
 * mais de
 * uma linha
 */

//funcão simples
function nomeFuncao(){
	echo "Primeira função PHP";
}
nomeFuncao();
function funcaoParametro($parametro){
	echo $parametro; echo "<br>";
}

$parametro = "Essa função é com parâmetro";
funcaoParametro($parametro);
?>