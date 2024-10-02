<?php

namespace App\Http\Controllers;

use App\Http\Controllers\Controller;
use Illuminate\Http\Request;

class TemplateController extends Controller
{
	public function index()
    {
        // Lógica de negócio
        $name = 'Lucas';
		$isAdmin = false; //testar cenário diferente

        // Passa os dados para a view 'home'
        return view('template-blade.template-blade', compact('name', 'isAdmin'));
    }
}
