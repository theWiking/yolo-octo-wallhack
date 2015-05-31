#pragma once


namespace KartaPostaci_Projekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for WczytanaKarta
	/// </summary>
	public ref class WczytanaKarta : public System::Windows::Forms::Form
	{
	public:
		//// zmienne pomocnicze
		String^ label1testowy;
		
		WczytanaKarta(void)
		{
			InitializeComponent();
			

	
			
			//
			//TODO: Add the constructor code here
			//
			
		}
		//WczytanaKarta(String^ lel)
		//{
		//	InitializeComponent();
		//	label1testowy->Text = lel;
		//}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~WczytanaKarta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonZa³aduj;
	private: System::Windows::Forms::Label^  labelImiePostaci;
	private: System::Windows::Forms::Label^  labelKlasa;
	private: System::Windows::Forms::Label^  labelRasa;
	private: System::Windows::Forms::Label^  labelCharakter;
	private: System::Windows::Forms::Label^  labelWiara;
	private: System::Windows::Forms::Label^  labelWiek;
	private: System::Windows::Forms::Label^  labelWzrost;
	private: System::Windows::Forms::Label^  labelWaga;
	private: System::Windows::Forms::Label^  labelRozmiar;
	private: System::Windows::Forms::Label^  labelPlec;
	private: System::Windows::Forms::Label^  labelOczy;
	private: System::Windows::Forms::Label^  labelWlosy;
	private: System::Windows::Forms::Label^  labelKarnacja;
	private: System::Windows::Forms::Label^  labelImieGracza;
	private: System::Windows::Forms::Label^  labelPoziom;




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
			this->buttonZa³aduj = (gcnew System::Windows::Forms::Button());
			this->labelImiePostaci = (gcnew System::Windows::Forms::Label());
			this->labelKlasa = (gcnew System::Windows::Forms::Label());
			this->labelRasa = (gcnew System::Windows::Forms::Label());
			this->labelCharakter = (gcnew System::Windows::Forms::Label());
			this->labelWiara = (gcnew System::Windows::Forms::Label());
			this->labelWiek = (gcnew System::Windows::Forms::Label());
			this->labelWzrost = (gcnew System::Windows::Forms::Label());
			this->labelWaga = (gcnew System::Windows::Forms::Label());
			this->labelRozmiar = (gcnew System::Windows::Forms::Label());
			this->labelPlec = (gcnew System::Windows::Forms::Label());
			this->labelOczy = (gcnew System::Windows::Forms::Label());
			this->labelWlosy = (gcnew System::Windows::Forms::Label());
			this->labelKarnacja = (gcnew System::Windows::Forms::Label());
			this->labelImieGracza = (gcnew System::Windows::Forms::Label());
			this->labelPoziom = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonZa³aduj
			// 
			this->buttonZa³aduj->Location = System::Drawing::Point(359, 498);
			this->buttonZa³aduj->Name = L"buttonZa³aduj";
			this->buttonZa³aduj->Size = System::Drawing::Size(303, 182);
			this->buttonZa³aduj->TabIndex = 1;
			this->buttonZa³aduj->Text = L"Za³aduj";
			this->buttonZa³aduj->UseVisualStyleBackColor = true;
			this->buttonZa³aduj->Click += gcnew System::EventHandler(this, &WczytanaKarta::buttonZa³aduj_Click);
			// 
			// labelImiePostaci
			// 
			this->labelImiePostaci->AutoSize = true;
			this->labelImiePostaci->Location = System::Drawing::Point(13, 13);
			this->labelImiePostaci->Name = L"labelImiePostaci";
			this->labelImiePostaci->Size = System::Drawing::Size(0, 13);
			this->labelImiePostaci->TabIndex = 2;
			// 
			// labelKlasa
			// 
			this->labelKlasa->AutoSize = true;
			this->labelKlasa->Location = System::Drawing::Point(13, 33);
			this->labelKlasa->Name = L"labelKlasa";
			this->labelKlasa->Size = System::Drawing::Size(0, 13);
			this->labelKlasa->TabIndex = 3;
			// 
			// labelRasa
			// 
			this->labelRasa->AutoSize = true;
			this->labelRasa->Location = System::Drawing::Point(12, 60);
			this->labelRasa->Name = L"labelRasa";
			this->labelRasa->Size = System::Drawing::Size(0, 13);
			this->labelRasa->TabIndex = 4;
			// 
			// labelCharakter
			// 
			this->labelCharakter->AutoSize = true;
			this->labelCharakter->Location = System::Drawing::Point(12, 85);
			this->labelCharakter->Name = L"labelCharakter";
			this->labelCharakter->Size = System::Drawing::Size(0, 13);
			this->labelCharakter->TabIndex = 5;
			// 
			// labelWiara
			// 
			this->labelWiara->AutoSize = true;
			this->labelWiara->Location = System::Drawing::Point(12, 107);
			this->labelWiara->Name = L"labelWiara";
			this->labelWiara->Size = System::Drawing::Size(0, 13);
			this->labelWiara->TabIndex = 6;
			// 
			// labelWiek
			// 
			this->labelWiek->AutoSize = true;
			this->labelWiek->Location = System::Drawing::Point(15, 158);
			this->labelWiek->Name = L"labelWiek";
			this->labelWiek->Size = System::Drawing::Size(0, 13);
			this->labelWiek->TabIndex = 7;
			// 
			// labelWzrost
			// 
			this->labelWzrost->AutoSize = true;
			this->labelWzrost->Location = System::Drawing::Point(15, 179);
			this->labelWzrost->Name = L"labelWzrost";
			this->labelWzrost->Size = System::Drawing::Size(0, 13);
			this->labelWzrost->TabIndex = 8;
			// 
			// labelWaga
			// 
			this->labelWaga->AutoSize = true;
			this->labelWaga->Location = System::Drawing::Point(13, 202);
			this->labelWaga->Name = L"labelWaga";
			this->labelWaga->Size = System::Drawing::Size(0, 13);
			this->labelWaga->TabIndex = 9;
			// 
			// labelRozmiar
			// 
			this->labelRozmiar->AutoSize = true;
			this->labelRozmiar->Location = System::Drawing::Point(15, 135);
			this->labelRozmiar->Name = L"labelRozmiar";
			this->labelRozmiar->Size = System::Drawing::Size(0, 13);
			this->labelRozmiar->TabIndex = 10;
			// 
			// labelPlec
			// 
			this->labelPlec->AutoSize = true;
			this->labelPlec->Location = System::Drawing::Point(14, 225);
			this->labelPlec->Name = L"labelPlec";
			this->labelPlec->Size = System::Drawing::Size(0, 13);
			this->labelPlec->TabIndex = 11;
			// 
			// labelOczy
			// 
			this->labelOczy->AutoSize = true;
			this->labelOczy->Location = System::Drawing::Point(13, 252);
			this->labelOczy->Name = L"labelOczy";
			this->labelOczy->Size = System::Drawing::Size(0, 13);
			this->labelOczy->TabIndex = 12;
			// 
			// labelWlosy
			// 
			this->labelWlosy->AutoSize = true;
			this->labelWlosy->Location = System::Drawing::Point(12, 275);
			this->labelWlosy->Name = L"labelWlosy";
			this->labelWlosy->Size = System::Drawing::Size(0, 13);
			this->labelWlosy->TabIndex = 13;
			// 
			// labelKarnacja
			// 
			this->labelKarnacja->AutoSize = true;
			this->labelKarnacja->Location = System::Drawing::Point(13, 298);
			this->labelKarnacja->Name = L"labelKarnacja";
			this->labelKarnacja->Size = System::Drawing::Size(0, 13);
			this->labelKarnacja->TabIndex = 14;
			// 
			// labelImieGracza
			// 
			this->labelImieGracza->AutoSize = true;
			this->labelImieGracza->Location = System::Drawing::Point(12, 323);
			this->labelImieGracza->Name = L"labelImieGracza";
			this->labelImieGracza->Size = System::Drawing::Size(0, 13);
			this->labelImieGracza->TabIndex = 15;
			// 
			// labelPoziom
			// 
			this->labelPoziom->AutoSize = true;
			this->labelPoziom->Location = System::Drawing::Point(13, 346);
			this->labelPoziom->Name = L"labelPoziom";
			this->labelPoziom->Size = System::Drawing::Size(0, 13);
			this->labelPoziom->TabIndex = 16;
			// 
			// WczytanaKarta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1092, 805);
			this->Controls->Add(this->labelPoziom);
			this->Controls->Add(this->labelImieGracza);
			this->Controls->Add(this->labelKarnacja);
			this->Controls->Add(this->labelWlosy);
			this->Controls->Add(this->labelOczy);
			this->Controls->Add(this->labelPlec);
			this->Controls->Add(this->labelRozmiar);
			this->Controls->Add(this->labelWaga);
			this->Controls->Add(this->labelWzrost);
			this->Controls->Add(this->labelWiek);
			this->Controls->Add(this->labelWiara);
			this->Controls->Add(this->labelCharakter);
			this->Controls->Add(this->labelRasa);
			this->Controls->Add(this->labelKlasa);
			this->Controls->Add(this->labelImiePostaci);
			this->Controls->Add(this->buttonZa³aduj);
			this->Name = L"WczytanaKarta";
			this->Text = L"WczytanaKarta";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void buttonZa³aduj_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();


	openFileDialog1->Filter = "WikingTxt |*.wikingtxt";
	openFileDialog1->RestoreDirectory = true;
	//String cos = openFileDialog1->FileName();

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		//KartaPostaci_Projekt::WczytanaKarta^ otwarte = gcnew KartaPostaci_Projekt::WczytanaKarta;

		String^ str = openFileDialog1->FileName;
		StreamReader ^myStream = gcnew StreamReader(str);
		labelImiePostaci->Text ="Imie Postaci: "+ myStream->ReadLine();
		labelKlasa->Text ="Klasa: "+ myStream->ReadLine();
		labelRasa->Text = "Rasa: "+myStream->ReadLine();
		labelCharakter->Text = "Charakter "+myStream->ReadLine();
		labelWiara->Text ="Wiara: "+ myStream->ReadLine();
		labelRozmiar->Text = "Rozmiar: "+myStream->ReadLine();
		labelWiek->Text ="Wiek: "+ myStream->ReadLine();
		labelWzrost->Text = "Wzrost: "+myStream->ReadLine();
		labelWaga->Text = "Waga: "+myStream->ReadLine();
		labelPlec->Text = "Plec: "+myStream->ReadLine();
		labelOczy->Text = "Oczy: "+myStream->ReadLine();
		labelWlosy->Text = "Wlosy: "+myStream->ReadLine();
		labelKarnacja->Text = "Karnacja: "+myStream->ReadLine();
		labelImieGracza->Text = "Imie Gracza: "+myStream->ReadLine();
		labelPoziom->Text = "Poziom: "+myStream->ReadLine();

		//otwarte
		MessageBox::Show( "Wersja darmowa - W przyszlosci bedzie budowana wersja pelna + upleszenia graficzne");
		;

	}
	buttonZa³aduj->Hide();
}
};
}
