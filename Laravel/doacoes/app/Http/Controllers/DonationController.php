<?php
namespace App\Http\Controllers;

use App\Models\Donation;
use Illuminate\Http\Request;

class DonationController extends Controller
{
    public function index()
    {
        $donations = Donation::all();
        return view('donations.index', compact('donations'));
    }

    public function create()
    {
        return view('donations.create');
    }

    public function store(Request $request)
    {
        $validated = $request->validate([
            'item_name' => 'required|min:3',
            'description' => 'nullable',
            'item_type' => 'required',
            'donation_date' => 'required|date',
        ]);

        Donation::create($validated);

        return redirect('/donations')->with('success', 'Doação criada com sucesso!');
    }

    public function show(Donation $donation)
    {
        return view('donations.show', compact('donation'));
    }

    public function updateStatus(Donation $donation)
    {
        $donation->update(['status' => 'received']);
        return redirect('/donations')->with('success', 'Doação marcada como recebida!');
    }
}

