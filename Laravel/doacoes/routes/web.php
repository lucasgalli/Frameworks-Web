<?php

use Illuminate\Support\Facades\Route;
use App\Http\Controllers\DonationController;

Route::get('/', function () {
    return view('welcome');
});

Route::get('/donations', [DonationController::class, 'index']);
Route::get('/donations/create', [DonationController::class, 'create']);
Route::post('/donations', [DonationController::class, 'store']);
Route::get('/donations/{donation}', [DonationController::class, 'show']);
Route::post('/donations/{donation}/status', [DonationController::class, 'updateStatus']);
