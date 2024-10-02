<?php

namespace App\Http\Controllers\Admin;

use App\Http\Controllers\Controller;
use Illuminate\Http\Request;

class DashboardController extends Controller
{
	public function index(){
        return view('admin.dashboard'); // Certifique-se de ter essa view ou mude para a que você deseja retornar
    }
}
