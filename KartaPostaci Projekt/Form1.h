#pragma once
#include "stdAfx.h"
#include "dodajKarteFroms.h"
namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  loadingscreen;
	protected:

	protected:
	private: System::Windows::Forms::Button^  zakoncz;
	private: System::Windows::Forms::Button^  dodajAtuty;
	private: System::Windows::Forms::Button^  dodajRasy;
	private: System::Windows::Forms::Button^  dodajCzary;
	private: System::Windows::Forms::Button^  dodajBron;
	private: System::Windows::Forms::Button^  wczytaj;
	private: System::Windows::Forms::Button^  nowaKarta;
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->loadingscreen = (gcnew System::Windows::Forms::GroupBox());
			this->zakoncz = (gcnew System::Windows::Forms::Button());
			this->dodajAtuty = (gcnew System::Windows::Forms::Button());
			this->dodajRasy = (gcnew System::Windows::Forms::Button());
			this->dodajCzary = (gcnew System::Windows::Forms::Button());
			this->dodajBron = (gcnew System::Windows::Forms::Button());
			this->wczytaj = (gcnew System::Windows::Forms::Button());
			this->nowaKarta = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->loadingscreen->SuspendLayout();
			this->SuspendLayout();
			// 
			// loadingscreen
			// 
			this->loadingscreen->Controls->Add(this->zakoncz);
			this->loadingscreen->Controls->Add(this->dodajAtuty);
			this->loadingscreen->Controls->Add(this->dodajRasy);
			this->loadingscreen->Controls->Add(this->dodajCzary);
			this->loadingscreen->Controls->Add(this->dodajBron);
			this->loadingscreen->Controls->Add(this->wczytaj);
			this->loadingscreen->Controls->Add(this->nowaKarta);
			this->loadingscreen->Location = System::Drawing::Point(51, 79);
			this->loadingscreen->Name = L"loadingscreen";
			this->loadingscreen->Size = System::Drawing::Size(200, 294);
			this->loadingscreen->TabIndex = 0;
			this->loadingscreen->TabStop = false;
			// 
			// zakoncz
			// 
			this->zakoncz->Location = System::Drawing::Point(37, 249);
			this->zakoncz->Name = L"zakoncz";
			this->zakoncz->Size = System::Drawing::Size(127, 23);
			this->zakoncz->TabIndex = 6;
			this->zakoncz->Text = L"Zakoñcz";
			this->zakoncz->UseVisualStyleBackColor = true;
			this->zakoncz->Click += gcnew System::EventHandler(this, &Form1::zakoncz_Click);
			// 
			// dodajAtuty
			// 
			this->dodajAtuty->Location = System::Drawing::Point(37, 156);
			this->dodajAtuty->Name = L"dodajAtuty";
			this->dodajAtuty->Size = System::Drawing::Size(127, 23);
			this->dodajAtuty->TabIndex = 5;
			this->dodajAtuty->Text = L"Dodaj Atuty";
			this->dodajAtuty->UseVisualStyleBackColor = true;
			// 
			// dodajRasy
			// 
			this->dodajRasy->Location = System::Drawing::Point(37, 185);
			this->dodajRasy->Name = L"dodajRasy";
			this->dodajRasy->Size = System::Drawing::Size(127, 23);
			this->dodajRasy->TabIndex = 4;
			this->dodajRasy->Text = L"Dodaj Rasy";
			this->dodajRasy->UseVisualStyleBackColor = true;
			// 
			// dodajCzary
			// 
			this->dodajCzary->Location = System::Drawing::Point(37, 126);
			this->dodajCzary->Name = L"dodajCzary";
			this->dodajCzary->Size = System::Drawing::Size(127, 23);
			this->dodajCzary->TabIndex = 3;
			this->dodajCzary->Text = L"Dodaj Czary";
			this->dodajCzary->UseVisualStyleBackColor = true;
			// 
			// dodajBron
			// 
			this->dodajBron->Location = System::Drawing::Point(37, 96);
			this->dodajBron->Name = L"dodajBron";
			this->dodajBron->Size = System::Drawing::Size(127, 23);
			this->dodajBron->TabIndex = 2;
			this->dodajBron->Text = L"Dodaj Ekwipunek";
			this->dodajBron->UseVisualStyleBackColor = true;
			// 
			// wczytaj
			// 
			this->wczytaj->Location = System::Drawing::Point(37, 67);
			this->wczytaj->Name = L"wczytaj";
			this->wczytaj->Size = System::Drawing::Size(127, 22);
			this->wczytaj->TabIndex = 1;
			this->wczytaj->Text = L"Wczytaj";
			this->wczytaj->UseVisualStyleBackColor = true;
			// 
			// nowaKarta
			// 
			this->nowaKarta->Location = System::Drawing::Point(37, 38);
			this->nowaKarta->Name = L"nowaKarta";
			this->nowaKarta->Size = System::Drawing::Size(127, 23);
			this->nowaKarta->TabIndex = 0;
			this->nowaKarta->Text = L"Nowa Karta";
			this->nowaKarta->UseVisualStyleBackColor = true;
			this->nowaKarta->Click += gcnew System::EventHandler(this, &Form1::nowaKarta_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(85, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Karta Postaci do D&D 3.5";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(302, 449);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->loadingscreen);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->loadingscreen->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void zakoncz_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
private: System::Void nowaKarta_Click(System::Object^  sender, System::EventArgs^  e) {
	
	KartaPostaci_Projekt::dodajKarteFroms^  dodaj = gcnew KartaPostaci_Projekt::dodajKarteFroms;
	dodaj->ShowDialog();
}
};
}

