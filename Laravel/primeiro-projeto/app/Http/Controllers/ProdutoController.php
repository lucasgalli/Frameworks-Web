<?php

namespace App\Http\Controllers;

use App\Http\Controllers\Controller;
use Illuminate\Http\Request;

class ProdutoController extends Controller
{
	public function index() {
		$produtos = ['Produto 1', 'Produto 2', 'Produto 3'];
		return view('produtos.index', compact('produtos'));// Passar array para view 
	}
		
}
