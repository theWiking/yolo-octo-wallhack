#pragma once
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h> 
namespace KartaPostaci_Projekt  {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for dodajKarteFroms
	/// </summary>
	public ref class dodajKarteFroms : public System::Windows::Forms::Form
	{
	public:
		dodajKarteFroms(void)
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
		~dodajKarteFroms()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  Nazewnictwo;
	private: System::Windows::Forms::GroupBox^  Atrybuty;
	private: System::Windows::Forms::Label^  labelRasaCha;

	private: System::Windows::Forms::Label^  labelWartoscAtrybutuCha;
	private: System::Windows::Forms::Button^  buttonChaMinus;

	private: System::Windows::Forms::Label^  labelWartoscCha;
	private: System::Windows::Forms::Button^  buttonChaPlus;

	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  labelRasaMd;

	private: System::Windows::Forms::Label^  labelWartoscAtrybutuMd;
	private: System::Windows::Forms::Button^  buttonMdMinus;


	private: System::Windows::Forms::Label^  labelWartoscMd;
	private: System::Windows::Forms::Button^  buttonMdPlus;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  labelRasaInt;


	private: System::Windows::Forms::Label^  labelWartoscAtrybutuInt;
	private: System::Windows::Forms::Button^  buttonIntMinus;

	private: System::Windows::Forms::Label^  labelWartoscInt;
	private: System::Windows::Forms::Button^  buttonIntPlus;

	private: System::Windows::Forms::Label^  labelInt;
	private: System::Windows::Forms::Label^  labelModyfikator;
	private: System::Windows::Forms::Label^  labelWartosc;
	private: System::Windows::Forms::Label^  labelAtrybut;
	private: System::Windows::Forms::Label^  labelRasaBd;

	private: System::Windows::Forms::Label^  labelRasaZr;

	private: System::Windows::Forms::Label^  labelRasaSi;

	private: System::Windows::Forms::Label^  labelWartoscAtrybutuBd;
	private: System::Windows::Forms::Button^  buttonBdMinus;

	private: System::Windows::Forms::Label^  labelWartoscBd;
	private: System::Windows::Forms::Button^  buttonBdPlus;

	private: System::Windows::Forms::Label^  labelBd;
	private: System::Windows::Forms::Label^  labelWartoscAtrybutuZr;
	private: System::Windows::Forms::Button^  buttonZrMinus;

	private: System::Windows::Forms::Label^  labelWartoscZr;
	private: System::Windows::Forms::Button^  buttonZrPlus;

	private: System::Windows::Forms::Label^  labelZr;
	private: System::Windows::Forms::Label^  labelWartoscAtrybutuSi;
	private: System::Windows::Forms::Button^  buttonSilaMinus;
	private: System::Windows::Forms::Label^  labelWartoscSila;
	private: System::Windows::Forms::Button^  buttonSilaPlus;
	private: System::Windows::Forms::Button^  losujAtrybuty;
	private: System::Windows::Forms::Label^  labelSila;
	private: System::Windows::Forms::GroupBox^  hpNPancerz;
	private: System::Windows::Forms::ComboBox^  comboBoxRasy;
	private: System::Windows::Forms::TextBox^  textBoxGracza;
	private: System::Windows::Forms::TextBox^  textBoxImie;
	private: System::Windows::Forms::ComboBox^  comboBoxCharakter;

	private: System::Windows::Forms::ComboBox^  comboBoxKlasy;
	private: System::Windows::Forms::HelpProvider^  helpProvider1;
	private: System::Windows::Forms::ComboBox^  comboBoxRozmiar;
	private: System::Windows::Forms::TextBox^  textBoxWiara;
	private: System::Windows::Forms::TextBox^  textBoxKarnacja;
	private: System::Windows::Forms::TextBox^  textBoxW³osy;
	private: System::Windows::Forms::TextBox^  textBoxOczy;
	private: System::Windows::Forms::TextBox^  textBoxWaga;
	private: System::Windows::Forms::TextBox^  textBoxWzrost;
	private: System::Windows::Forms::TextBox^  textBoxWiek;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::Button^  buttonSprawdzRealneAtrybuty;
private: System::Windows::Forms::Label^  labelRMod;
private: System::Windows::Forms::TextBox^  textBoxKPNaturalna;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Label^  labelSumaKp;
private: System::Windows::Forms::TextBox^  textBoxKPInne;
private: System::Windows::Forms::Label^  labelKP4;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  labelKPRozmiar;
private: System::Windows::Forms::Label^  labelKP3;
private: System::Windows::Forms::Label^  labelKPZr;
private: System::Windows::Forms::Label^  labelKP2;
private: System::Windows::Forms::Label^  labelKPTarczy;
private: System::Windows::Forms::Label^  labelKP1;
private: System::Windows::Forms::Label^  labelKPZbroi;
private: System::Windows::Forms::Label^  labelKP;
private: System::Windows::Forms::Button^  buttonHPUaktualnij;


private: System::Windows::Forms::Label^  labelSumaHP;
private: System::Windows::Forms::TextBox^  textBoxTypKW;
private: System::Windows::Forms::Label^  labelK;

private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Button^  buttonHPLosuj;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBoxIloscKw;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBoxDomyœlnaWartoœæ;
private: System::Windows::Forms::Button^  buttonPodajWartosc;



	protected:

	protected:

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
			this->Nazewnictwo = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxKarnacja = (gcnew System::Windows::Forms::TextBox());
			this->textBoxW³osy = (gcnew System::Windows::Forms::TextBox());
			this->textBoxOczy = (gcnew System::Windows::Forms::TextBox());
			this->textBoxWaga = (gcnew System::Windows::Forms::TextBox());
			this->textBoxWzrost = (gcnew System::Windows::Forms::TextBox());
			this->textBoxWiek = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxRozmiar = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxWiara = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxCharakter = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxKlasy = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxRasy = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxGracza = (gcnew System::Windows::Forms::TextBox());
			this->textBoxImie = (gcnew System::Windows::Forms::TextBox());
			this->Atrybuty = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSprawdzRealneAtrybuty = (gcnew System::Windows::Forms::Button());
			this->labelRMod = (gcnew System::Windows::Forms::Label());
			this->labelRasaCha = (gcnew System::Windows::Forms::Label());
			this->labelWartoscAtrybutuCha = (gcnew System::Windows::Forms::Label());
			this->buttonChaMinus = (gcnew System::Windows::Forms::Button());
			this->labelWartoscCha = (gcnew System::Windows::Forms::Label());
			this->buttonChaPlus = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->labelRasaMd = (gcnew System::Windows::Forms::Label());
			this->labelWartoscAtrybutuMd = (gcnew System::Windows::Forms::Label());
			this->buttonMdMinus = (gcnew System::Windows::Forms::Button());
			this->labelWartoscMd = (gcnew System::Windows::Forms::Label());
			this->buttonMdPlus = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->labelRasaInt = (gcnew System::Windows::Forms::Label());
			this->labelWartoscAtrybutuInt = (gcnew System::Windows::Forms::Label());
			this->buttonIntMinus = (gcnew System::Windows::Forms::Button());
			this->labelWartoscInt = (gcnew System::Windows::Forms::Label());
			this->buttonIntPlus = (gcnew System::Windows::Forms::Button());
			this->labelInt = (gcnew System::Windows::Forms::Label());
			this->labelModyfikator = (gcnew System::Windows::Forms::Label());
			this->labelWartosc = (gcnew System::Windows::Forms::Label());
			this->labelAtrybut = (gcnew System::Windows::Forms::Label());
			this->labelRasaBd = (gcnew System::Windows::Forms::Label());
			this->labelRasaZr = (gcnew System::Windows::Forms::Label());
			this->labelRasaSi = (gcnew System::Windows::Forms::Label());
			this->labelWartoscAtrybutuBd = (gcnew System::Windows::Forms::Label());
			this->buttonBdMinus = (gcnew System::Windows::Forms::Button());
			this->labelWartoscBd = (gcnew System::Windows::Forms::Label());
			this->buttonBdPlus = (gcnew System::Windows::Forms::Button());
			this->labelBd = (gcnew System::Windows::Forms::Label());
			this->labelWartoscAtrybutuZr = (gcnew System::Windows::Forms::Label());
			this->buttonZrMinus = (gcnew System::Windows::Forms::Button());
			this->labelWartoscZr = (gcnew System::Windows::Forms::Label());
			this->buttonZrPlus = (gcnew System::Windows::Forms::Button());
			this->labelZr = (gcnew System::Windows::Forms::Label());
			this->labelWartoscAtrybutuSi = (gcnew System::Windows::Forms::Label());
			this->buttonSilaMinus = (gcnew System::Windows::Forms::Button());
			this->labelWartoscSila = (gcnew System::Windows::Forms::Label());
			this->buttonSilaPlus = (gcnew System::Windows::Forms::Button());
			this->losujAtrybuty = (gcnew System::Windows::Forms::Button());
			this->labelSila = (gcnew System::Windows::Forms::Label());
			this->hpNPancerz = (gcnew System::Windows::Forms::GroupBox());
			this->buttonPodajWartosc = (gcnew System::Windows::Forms::Button());
			this->maskedTextBoxDomyœlnaWartoœæ = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBoxIloscKw = (gcnew System::Windows::Forms::MaskedTextBox());
			this->buttonHPLosuj = (gcnew System::Windows::Forms::Button());
			this->textBoxKPNaturalna = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelSumaKp = (gcnew System::Windows::Forms::Label());
			this->textBoxKPInne = (gcnew System::Windows::Forms::TextBox());
			this->labelKP4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelKPRozmiar = (gcnew System::Windows::Forms::Label());
			this->labelKP3 = (gcnew System::Windows::Forms::Label());
			this->labelKPZr = (gcnew System::Windows::Forms::Label());
			this->labelKP2 = (gcnew System::Windows::Forms::Label());
			this->labelKPTarczy = (gcnew System::Windows::Forms::Label());
			this->labelKP1 = (gcnew System::Windows::Forms::Label());
			this->labelKPZbroi = (gcnew System::Windows::Forms::Label());
			this->labelKP = (gcnew System::Windows::Forms::Label());
			this->buttonHPUaktualnij = (gcnew System::Windows::Forms::Button());
			this->labelSumaHP = (gcnew System::Windows::Forms::Label());
			this->textBoxTypKW = (gcnew System::Windows::Forms::TextBox());
			this->labelK = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->helpProvider1 = (gcnew System::Windows::Forms::HelpProvider());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Nazewnictwo->SuspendLayout();
			this->Atrybuty->SuspendLayout();
			this->hpNPancerz->SuspendLayout();
			this->SuspendLayout();
			// 
			// Nazewnictwo
			// 
			this->Nazewnictwo->Controls->Add(this->textBoxKarnacja);
			this->Nazewnictwo->Controls->Add(this->textBoxW³osy);
			this->Nazewnictwo->Controls->Add(this->textBoxOczy);
			this->Nazewnictwo->Controls->Add(this->textBoxWaga);
			this->Nazewnictwo->Controls->Add(this->textBoxWzrost);
			this->Nazewnictwo->Controls->Add(this->textBoxWiek);
			this->Nazewnictwo->Controls->Add(this->comboBox1);
			this->Nazewnictwo->Controls->Add(this->comboBoxRozmiar);
			this->Nazewnictwo->Controls->Add(this->textBoxWiara);
			this->Nazewnictwo->Controls->Add(this->comboBoxCharakter);
			this->Nazewnictwo->Controls->Add(this->comboBoxKlasy);
			this->Nazewnictwo->Controls->Add(this->comboBoxRasy);
			this->Nazewnictwo->Controls->Add(this->textBoxGracza);
			this->Nazewnictwo->Controls->Add(this->textBoxImie);
			this->Nazewnictwo->Location = System::Drawing::Point(13, 14);
			this->Nazewnictwo->Name = L"Nazewnictwo";
			this->Nazewnictwo->Size = System::Drawing::Size(448, 101);
			this->Nazewnictwo->TabIndex = 0;
			this->Nazewnictwo->TabStop = false;
			this->Nazewnictwo->Text = L"Nazewnictwo";
			// 
			// textBoxKarnacja
			// 
			this->textBoxKarnacja->Location = System::Drawing::Point(218, 73);
			this->textBoxKarnacja->Name = L"textBoxKarnacja";
			this->textBoxKarnacja->Size = System::Drawing::Size(100, 20);
			this->textBoxKarnacja->TabIndex = 14;
			this->textBoxKarnacja->Text = L"Karnacja";
			// 
			// textBoxW³osy
			// 
			this->textBoxW³osy->Location = System::Drawing::Point(112, 73);
			this->textBoxW³osy->Name = L"textBoxW³osy";
			this->textBoxW³osy->Size = System::Drawing::Size(100, 20);
			this->textBoxW³osy->TabIndex = 13;
			this->textBoxW³osy->Text = L"W³osy";
			// 
			// textBoxOczy
			// 
			this->textBoxOczy->Location = System::Drawing::Point(6, 73);
			this->textBoxOczy->Name = L"textBoxOczy";
			this->textBoxOczy->Size = System::Drawing::Size(100, 20);
			this->textBoxOczy->TabIndex = 12;
			this->textBoxOczy->Text = L"Oczy";
			// 
			// textBoxWaga
			// 
			this->textBoxWaga->Location = System::Drawing::Point(315, 47);
			this->textBoxWaga->Name = L"textBoxWaga";
			this->textBoxWaga->Size = System::Drawing::Size(49, 20);
			this->textBoxWaga->TabIndex = 11;
			this->textBoxWaga->Text = L"Waga";
			// 
			// textBoxWzrost
			// 
			this->textBoxWzrost->Location = System::Drawing::Point(260, 47);
			this->textBoxWzrost->Name = L"textBoxWzrost";
			this->textBoxWzrost->Size = System::Drawing::Size(49, 20);
			this->textBoxWzrost->TabIndex = 10;
			this->textBoxWzrost->Text = L"Wzrost";
			// 
			// textBoxWiek
			// 
			this->textBoxWiek->Location = System::Drawing::Point(205, 46);
			this->textBoxWiek->Name = L"textBoxWiek";
			this->textBoxWiek->Size = System::Drawing::Size(49, 20);
			this->textBoxWiek->TabIndex = 9;
			this->textBoxWiek->Text = L"Wiek";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"On", L"Ona", L"Ono", L"Inne..." });
			this->comboBox1->Location = System::Drawing::Point(370, 46);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(71, 21);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->Text = L"P³eæ";
			// 
			// comboBoxRozmiar
			// 
			this->comboBoxRozmiar->FormattingEnabled = true;
			this->comboBoxRozmiar->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Filigramowy", L"Malutki", L"Ma³y ", L"Œredni",
					L"Du¿y", L"Wielki", L"Olbrzymi", L"Kolosalny"
			});
			this->comboBoxRozmiar->Location = System::Drawing::Point(112, 46);
			this->comboBoxRozmiar->Name = L"comboBoxRozmiar";
			this->comboBoxRozmiar->Size = System::Drawing::Size(87, 21);
			this->comboBoxRozmiar->TabIndex = 7;
			this->comboBoxRozmiar->Text = L"Rozmiar";
			// 
			// textBoxWiara
			// 
			this->textBoxWiara->Location = System::Drawing::Point(6, 46);
			this->textBoxWiara->Name = L"textBoxWiara";
			this->textBoxWiara->Size = System::Drawing::Size(100, 20);
			this->textBoxWiara->TabIndex = 6;
			this->textBoxWiara->Text = L"Wiara";
			// 
			// comboBoxCharakter
			// 
			this->comboBoxCharakter->FormattingEnabled = true;
			this->comboBoxCharakter->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Chaotycznie Dobry", L"Dobry", L"Praworz¹dnie Dobry",
					L"Chaotycznie Neutralny", L"Neturalny", L"Praworz¹dnie Neutralny", L"Chaotycznie Z³y", L"Z³y", L"Praworz¹dnie Z³y"
			});
			this->comboBoxCharakter->Location = System::Drawing::Point(295, 20);
			this->comboBoxCharakter->Name = L"comboBoxCharakter";
			this->comboBoxCharakter->Size = System::Drawing::Size(146, 21);
			this->comboBoxCharakter->TabIndex = 5;
			this->comboBoxCharakter->Text = L"Charakter";
			// 
			// comboBoxKlasy
			// 
			this->comboBoxKlasy->FormattingEnabled = true;
			this->comboBoxKlasy->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Mag", L"£otrzyk", L"Zaklinacz", L"Mnich",
					L"Wojownik", L"Barba¿yñca", L"Kap³an", L"Palladyn"
			});
			this->comboBoxKlasy->Location = System::Drawing::Point(112, 20);
			this->comboBoxKlasy->Name = L"comboBoxKlasy";
			this->comboBoxKlasy->Size = System::Drawing::Size(87, 21);
			this->comboBoxKlasy->TabIndex = 4;
			this->comboBoxKlasy->Text = L"Klasy";
			// 
			// comboBoxRasy
			// 
			this->comboBoxRasy->FormattingEnabled = true;
			this->comboBoxRasy->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Cz³owiek", L"Pó³elf", L"Pó³ork", L"Elf", L"Nizio³ek",
					L"Krasnolud", L"Gnom"
			});
			this->comboBoxRasy->Location = System::Drawing::Point(205, 20);
			this->comboBoxRasy->Name = L"comboBoxRasy";
			this->comboBoxRasy->Size = System::Drawing::Size(84, 21);
			this->comboBoxRasy->TabIndex = 3;
			this->comboBoxRasy->Text = L"Rasy";
			this->comboBoxRasy->SelectedIndexChanged += gcnew System::EventHandler(this, &dodajKarteFroms::comboBoxRasy_SelectedIndexChanged);
			// 
			// textBoxGracza
			// 
			this->textBoxGracza->Location = System::Drawing::Point(324, 75);
			this->textBoxGracza->Name = L"textBoxGracza";
			this->textBoxGracza->Size = System::Drawing::Size(117, 20);
			this->textBoxGracza->TabIndex = 1;
			this->textBoxGracza->Text = L"Imie Gracza";
			// 
			// textBoxImie
			// 
			this->textBoxImie->Location = System::Drawing::Point(6, 20);
			this->textBoxImie->Name = L"textBoxImie";
			this->textBoxImie->Size = System::Drawing::Size(100, 20);
			this->textBoxImie->TabIndex = 0;
			this->textBoxImie->Text = L"Imie Postaci";
			// 
			// Atrybuty
			// 
			this->Atrybuty->Controls->Add(this->buttonSprawdzRealneAtrybuty);
			this->Atrybuty->Controls->Add(this->labelRMod);
			this->Atrybuty->Controls->Add(this->labelRasaCha);
			this->Atrybuty->Controls->Add(this->labelWartoscAtrybutuCha);
			this->Atrybuty->Controls->Add(this->buttonChaMinus);
			this->Atrybuty->Controls->Add(this->labelWartoscCha);
			this->Atrybuty->Controls->Add(this->buttonChaPlus);
			this->Atrybuty->Controls->Add(this->label15);
			this->Atrybuty->Controls->Add(this->labelRasaMd);
			this->Atrybuty->Controls->Add(this->labelWartoscAtrybutuMd);
			this->Atrybuty->Controls->Add(this->buttonMdMinus);
			this->Atrybuty->Controls->Add(this->labelWartoscMd);
			this->Atrybuty->Controls->Add(this->buttonMdPlus);
			this->Atrybuty->Controls->Add(this->label11);
			this->Atrybuty->Controls->Add(this->labelRasaInt);
			this->Atrybuty->Controls->Add(this->labelWartoscAtrybutuInt);
			this->Atrybuty->Controls->Add(this->buttonIntMinus);
			this->Atrybuty->Controls->Add(this->labelWartoscInt);
			this->Atrybuty->Controls->Add(this->buttonIntPlus);
			this->Atrybuty->Controls->Add(this->labelInt);
			this->Atrybuty->Controls->Add(this->labelModyfikator);
			this->Atrybuty->Controls->Add(this->labelWartosc);
			this->Atrybuty->Controls->Add(this->labelAtrybut);
			this->Atrybuty->Controls->Add(this->labelRasaBd);
			this->Atrybuty->Controls->Add(this->labelRasaZr);
			this->Atrybuty->Controls->Add(this->labelRasaSi);
			this->Atrybuty->Controls->Add(this->labelWartoscAtrybutuBd);
			this->Atrybuty->Controls->Add(this->buttonBdMinus);
			this->Atrybuty->Controls->Add(this->labelWartoscBd);
			this->Atrybuty->Controls->Add(this->buttonBdPlus);
			this->Atrybuty->Controls->Add(this->labelBd);
			this->Atrybuty->Controls->Add(this->labelWartoscAtrybutuZr);
			this->Atrybuty->Controls->Add(this->buttonZrMinus);
			this->Atrybuty->Controls->Add(this->labelWartoscZr);
			this->Atrybuty->Controls->Add(this->buttonZrPlus);
			this->Atrybuty->Controls->Add(this->labelZr);
			this->Atrybuty->Controls->Add(this->labelWartoscAtrybutuSi);
			this->Atrybuty->Controls->Add(this->buttonSilaMinus);
			this->Atrybuty->Controls->Add(this->labelWartoscSila);
			this->Atrybuty->Controls->Add(this->buttonSilaPlus);
			this->Atrybuty->Controls->Add(this->losujAtrybuty);
			this->Atrybuty->Controls->Add(this->labelSila);
			this->Atrybuty->Location = System::Drawing::Point(13, 120);
			this->Atrybuty->Name = L"Atrybuty";
			this->Atrybuty->Size = System::Drawing::Size(212, 253);
			this->Atrybuty->TabIndex = 1;
			this->Atrybuty->TabStop = false;
			this->Atrybuty->Text = L"Atrybuty";
			// 
			// buttonSprawdzRealneAtrybuty
			// 
			this->buttonSprawdzRealneAtrybuty->Location = System::Drawing::Point(91, 224);
			this->buttonSprawdzRealneAtrybuty->Name = L"buttonSprawdzRealneAtrybuty";
			this->buttonSprawdzRealneAtrybuty->Size = System::Drawing::Size(115, 23);
			this->buttonSprawdzRealneAtrybuty->TabIndex = 41;
			this->buttonSprawdzRealneAtrybuty->Text = L"Realne Atrybuty";
			this->buttonSprawdzRealneAtrybuty->UseVisualStyleBackColor = true;
			this->buttonSprawdzRealneAtrybuty->Click += gcnew System::EventHandler(this, &dodajKarteFroms::buttonSprawdzRealneAtrybuty_Click);
			// 
			// labelRMod
			// 
			this->labelRMod->AutoSize = true;
			this->labelRMod->Location = System::Drawing::Point(143, 199);
			this->labelRMod->Name = L"labelRMod";
			this->labelRMod->Size = System::Drawing::Size(69, 13);
			this->labelRMod->TabIndex = 40;
			this->labelRMod->Text = L"Mod Rasowy";
			// 
			// labelRasaCha
			// 
			this->labelRasaCha->AutoSize = true;
			this->labelRasaCha->Location = System::Drawing::Point(180, 172);
			this->labelRasaCha->Name = L"labelRasaCha";
			this->labelRasaCha->Size = System::Drawing::Size(13, 13);
			this->labelRasaCha->TabIndex = 39;
			this->labelRasaCha->Text = L"0";
			// 
			// labelWartoscAtrybutuCha
			// 
			this->labelWartoscAtrybutuCha->AutoSize = true;
			this->labelWartoscAtrybutuCha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelWartoscAtrybutuCha->Location = System::Drawing::Point(132, 170);
			this->labelWartoscAtrybutuCha->Name = L"labelWartoscAtrybutuCha";
			this->labelWartoscAtrybutuCha->Size = System::Drawing::Size(15, 16);
			this->labelWartoscAtrybutuCha->TabIndex = 38;
			this->labelWartoscAtrybutuCha->Text = L"0";
			// 
			// buttonChaMinus
			// 
			this->buttonChaMinus->Location = System::Drawing::Point(103, 167);
			this->buttonChaMinus->Name = L"buttonChaMinus";
			this->buttonChaMinus->Size = System::Drawing::Size(23, 23);
			this->buttonChaMinus->TabIndex = 37;
			this->buttonChaMinus->Text = L"-";
			this->buttonChaMinus->UseVisualStyleBackColor = true;
			this->buttonChaMinus->Click += gcnew System::EventHandler(this, &dodajKarteFroms::buttonChaMinus_Click);
			// 
			// labelWartoscCha
			// 
			this->labelWartoscCha->AutoSize = true;
			this->labelWartoscCha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelWartoscCha->Location = System::Drawing::Point(75, 170);
			this->labelWartoscCha->Name = L"labelWartoscCha";
			this->labelWartoscCha->Size = System::Drawing::Size(22, 16);
			this->labelWartoscCha->TabIndex = 36;
			this->labelWartoscCha->Text = L"10";
			// 
			// buttonChaPlus
			// 
			this->buttonChaPlus->Location = System::Drawing::Point(46, 167);
			this->buttonChaPlus->Name = L"buttonChaPlus";
			this->buttonChaPlus->Size = System::Drawing::Size(23, 23);
			this->buttonChaPlus->TabIndex = 35;
			this->buttonChaPlus->Text = L"+";
			this->buttonChaPlus->UseVisualStyleBackColor = true;
			this->buttonChaPlus->Click += gcnew System::EventHandler(this, &dodajKarteFroms::buttonChaPlus_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label15->Location = System::Drawing::Point(6, 170);
			this->label15->Name = L"label15";
			this->label15->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label15->Size = System::Drawing::Size(32, 16);
			this->label15->TabIndex = 34;
			this->label15->Text = L"Cha";
			// 
			// labelRasaMd
			// 
			this->labelRasaMd->AutoSize = true;
			this->labelRasaMd->Location = System::Drawing::Point(180, 146);
			this->labelRasaMd->Name = L"labelRasaMd";
			this->labelRasaMd->Size = System::Drawing::Size(13, 13);
			this->labelRasaMd->TabIndex = 33;
			this->labelRasaMd->Text = L"0";
			// 
			// labelWartoscAtrybutuMd
			// 
			this->labelWartoscAtrybutuMd->AutoSize = true;
			this->labelWartoscAtrybutuMd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelWartoscAtrybutuMd->Location = System::Drawing::Point(132, 144);
			this->labelWartoscAtrybutuMd->Name = L"labelWartoscAtrybutuMd";
			this->labelWartoscAtrybutuMd->Size = System::Drawing::Size(15, 16);
			this->labelWartoscAtrybutuMd->TabIndex = 32;
			this->labelWartoscAtrybutuMd->Text = L"0";
			// 
			// buttonMdMinus
			// 
			this->buttonMdMinus->Location = System::Drawing::Point(103, 141);
			this->buttonMdMinus->Name = L"buttonMdMinus";
			this->buttonMdMinus->Size = System::Drawing::Size(23, 23);
			this->buttonMdMinus->TabIndex = 31;
			this->buttonMdMinus->Text = L"-";
			this->buttonMdMinus->UseVisualStyleBackColor = true;
			this->buttonMdMinus->Click += gcnew System::EventHandler(this, &dodajKarteFroms::buttonMdMinus_Click);
			// 
			// labelWartoscMd
			// 
			this->labelWartoscMd->AutoSize = true;
			this->labelWartoscMd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelWartoscMd->Location = System::Drawing::Point(75, 144);
			this->labelWartoscMd->Name = L"labelWartoscMd";
			this->labelWartoscMd->Size = System::Drawing::Size(22, 16);
			this->labelWartoscMd->TabIndex = 30;
			this->labelWartoscMd->Text = L"10";
			// 
			// buttonMdPlus
			// 
			this->buttonMdPlus->Location = System::Drawing::Point(46, 141);
			this->buttonMdPlus->Name = L"buttonMdPlus";
			this->buttonMdPlus->Size = System::Drawing::Size(23, 23);
			this->buttonMdPlus->TabIndex = 29;
			this->buttonMdPlus->Text = L"+";
			this->buttonMdPlus->UseVisualStyleBackColor = true;
			this->buttonMdPlus->Click += gcnew System::EventHandler(this, &dodajKarteFroms::buttonMdPlus_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label11->Location = System::Drawing::Point(6, 144);
			this->label11->Name = L"label11";
			this->label11->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label11->Size = System::Drawing::Size(27, 16);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Md";
			// 
			// labelRasaInt
			// 
			this->labelRasaInt->AutoSize = true;
			this->labelRasaInt->Location = System::Drawing::Point(180, 120);
			this->labelRasaInt->Name = L"labelRasaInt";
			this->labelRasaInt->Size = System::Drawing::Size(13, 13);
			this->labelRasaInt->TabIndex = 27;
			this->labelRasaInt->Text = L"0";
			// 
			// labelWartoscAtrybutuInt
			// 
			this->labelWartoscAtrybutuInt->AutoSize = true;
			this->labelWartoscAtrybutuInt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelWartoscAtrybutuInt->Location = System::Drawing::Point(132, 118);
			this->labelWartoscAtrybutuInt->Name = L"labelWartoscAtrybutuInt";
			this->labelWartoscAtrybutuInt->Size = System::Drawing::Size(15, 16);
			this->labelWartoscAtrybutuInt->TabIndex = 26;
			this->labelWartoscAtrybutuInt->Text = L"0";
			// 
			// buttonIntMinus
			// 
			this->buttonIntMinus->Location = System::Drawing::Point(103, 115);
			this->buttonIntMinus->Name = L"buttonIntMinus";
			this->buttonIntMinus->Size = System::Drawing::Size(23, 23);
			this->buttonIntMinus->TabIndex = 25;
			this->buttonIntMinus->Text = L"-";
			this->buttonIntMinus->UseVisualStyleBackColor = true;
			this->buttonIntMinus->Click += gcnew System::EventHandler(this, &dodajKarteFroms::buttonIntMinus_Click);
			// 
			// labelWartoscInt
			// 
			this->labelWartoscInt->AutoSize = true;
			this->labelWartoscInt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelWartoscInt->Location = System::Drawing::Point(75, 118);
			this->labelWartoscInt->Name = L"labelWartoscInt";
			this->labelWartoscInt->Size = System::Drawing::Size(22, 16);
			this->labelWartoscInt->TabIndex = 24;
			this->labelWartoscInt->Text = L"10";
			// 
			// buttonIntPlus
			// 
			this->buttonIntPlus->Location = System::Drawing::Point(46, 115);
			this->buttonIntPlus->Name = L"buttonIntPlus";
			this->buttonIntPlus->Size = System::Drawing::Size(23, 23);
			this->buttonIntPlus->TabIndex = 23;
			this->buttonIntPlus->Text = L"+";
			this->buttonIntPlus->UseVisualStyleBackColor = true;
			this->buttonIntPlus->Click += gcnew System::EventHandler(this, &dodajKarteFroms::buttonIntPlus_Click);
			// 
			// labelInt
			// 
			this->labelInt->AutoSize = true;
			this->labelInt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelInt->Location = System::Drawing::Point(6, 118);
			this->labelInt->Name = L"labelInt";
			this->labelInt->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->labelInt->Size = System::Drawing::Size(21, 16);
			this->labelInt->TabIndex = 22;
			this->labelInt->Text = L"Int";
			// 
			// labelModyfikator
			// 
			this->labelModyfikator->AutoSize = true;
			this->labelModyfikator->Location = System::Drawing::Point(100, 20);
			this->labelModyfikator->Name = L"labelModyfikator";
			this->labelModyfikator->Size = System::Drawing::Size(62, 13);
			this->labelModyfikator->TabIndex = 21;
			this->labelModyfikator->Text = L"Modyfikator";
			// 
			// labelWartosc
			// 
			this->labelWartosc->AutoSize = true;
			this->labelWartosc->Location = System::Drawing::Point(53, 20);
			this->labelWartosc->Name = L"labelWartosc";
			this->labelWartosc->Size = System::Drawing::Size(47, 13);
			this->labelWartosc->TabIndex = 20;
			this->labelWartosc->Text = L"Wartosc";
			// 
			// labelAtrybut
			// 
			this->labelAtrybut->AutoSize = true;
			this->labelAtrybut->Location = System::Drawing::Point(7, 20);
			this->labelAtrybut->Name = L"labelAtrybut";
			this->labelAtrybut->Size = System::Drawing::Size(40, 13);
			this->labelAtrybut->TabIndex = 19;
			this->labelAtrybut->Text = L"Atrybut";
			// 
			// labelRasaBd
			// 
			this->labelRasaBd->AutoSize = true;
			this->labelRasaBd->Location = System::Drawing::Point(180, 95);
			this->labelRasaBd->Name = L"labelRasaBd";
			this->labelRasaBd->Size = System::Drawing::Size(13, 13);
			this->labelRasaBd->TabIndex = 18;
			this->labelRasaBd->Text = L"0";
			// 
			// labelRasaZr
			// 
			this->labelRasaZr->AutoSize = true;
			this->labelRasaZr->Location = System::Drawing::Point(180, 72);
			this->labelRasaZr->Name = L"labelRasaZr";
			this->labelRasaZr->Size = System::Drawing::Size(13, 13);
			this->labelRasaZr->TabIndex = 17;
			this->labelRasaZr->Text = L"0";
			// 
			// labelRasaSi
			// 
			this->labelRasaSi->AutoSize = true;
			this->labelRasaSi->Location = System::Drawing::Point(180, 49);
			this->labelRasaSi->Name = L"labelRasaSi";
			this->labelRasaSi->Size = System::Drawing::Size(13, 13);
			this->labelRasaSi->TabIndex = 16;
			this->labelRasaSi->Text = L"0";
			// 
			// labelWartoscAtrybutuBd
			// 
			this->labelWartoscAtrybutuBd->AutoSize = true;
			this->labelWartoscAtrybutuBd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelWartoscAtrybutuBd->Location = System::Drawing::Point(132, 93);
			this->labelWartoscAtrybutuBd->Name = L"labelWartoscAtrybutuBd";
			this->labelWartoscAtrybutuBd->Size = System::Drawing::Size(15, 16);
			this->labelWartoscAtrybutuBd->TabIndex = 15;
			this->labelWartoscAtrybutuBd->Text = L"0";
			// 
			// buttonBdMinus
			// 
			this->buttonBdMinus->Location = System::Drawing::Point(103, 90);
			this->buttonBdMinus->Name = L"buttonBdMinus";
			this->buttonBdMinus->Size = System::Drawing::Size(23, 23);
			this->buttonBdMinus->TabIndex = 14;
			this->buttonBdMinus->Text = L"-";
			this->buttonBdMinus->UseVisualStyleBackColor = true;
			this->buttonBdMinus->Click += gcnew System::EventHandler(this, &dodajKarteFroms::buttonBdMinus_Click);
			// 
			// labelWartoscBd
			// 
			this->labelWartoscBd->AutoSize = true;
			this->labelWartoscBd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelWartoscBd->Location = System::Drawing::Point(75, 93);
			this->labelWartoscBd->Name = L"labelWartoscBd";
			this->labelWartoscBd->Size = System::Drawing::Size(22, 16);
			this->labelWartoscBd->TabIndex = 13;
			this->labelWartoscBd->Text = L"10";
			// 
			// buttonBdPlus
			// 
			this->buttonBdPlus->Location = System::Drawing::Point(46, 90);
			this->buttonBdPlus->Name = L"buttonBdPlus";
			this->buttonBdPlus->Size = System::Drawing::Size(23, 23);
			this->buttonBdPlus->TabIndex = 12;
			this->buttonBdPlus->Text = L"+";
			this->buttonBdPlus->UseVisualStyleBackColor = true;
			this->buttonBdPlus->Click += gcnew System::EventHandler(this, &dodajKarteFroms::buttonBdPlus_Click);
			// 
			// labelBd
			// 
			this->labelBd->AutoSize = true;
			this->labelBd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelBd->Location = System::Drawing::Point(6, 93);
			this->labelBd->Name = L"labelBd";
			this->labelBd->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->labelBd->Size = System::Drawing::Size(25, 16);
			this->labelBd->TabIndex = 11;
			this->labelBd->Text = L"Bd";
			// 
			// labelWartoscAtrybutuZr
			// 
			this->labelWartoscAtrybutuZr->AutoSize = true;
			this->labelWartoscAtrybutuZr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelWartoscAtrybutuZr->Location = System::Drawing::Point(132, 70);
			this->labelWartoscAtrybutuZr->Name = L"labelWartoscAtrybutuZr";
			this->labelWartoscAtrybutuZr->Size = System::Drawing::Size(15, 16);
			this->labelWartoscAtrybutuZr->TabIndex = 10;
			this->labelWartoscAtrybutuZr->Text = L"0";
			// 
			// buttonZrMinus
			// 
			this->buttonZrMinus->Location = System::Drawing::Point(103, 67);
			this->buttonZrMinus->Name = L"buttonZrMinus";
			this->buttonZrMinus->Size = System::Drawing::Size(23, 23);
			this->buttonZrMinus->TabIndex = 9;
			this->buttonZrMinus->Text = L"-";
			this->buttonZrMinus->UseVisualStyleBackColor = true;
			this->buttonZrMinus->Click += gcnew System::EventHandler(this, &dodajKarteFroms::buttonZrMinus_Click);
			// 
			// labelWartoscZr
			// 
			this->labelWartoscZr->AutoSize = true;
			this->labelWartoscZr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelWartoscZr->Location = System::Drawing::Point(75, 70);
			this->labelWartoscZr->Name = L"labelWartoscZr";
			this->labelWartoscZr->Size = System::Drawing::Size(22, 16);
			this->labelWartoscZr->TabIndex = 8;
			this->labelWartoscZr->Text = L"10";
			// 
			// buttonZrPlus
			// 
			this->buttonZrPlus->Location = System::Drawing::Point(46, 67);
			this->buttonZrPlus->Name = L"buttonZrPlus";
			this->buttonZrPlus->Size = System::Drawing::Size(23, 23);
			this->buttonZrPlus->TabIndex = 7;
			this->buttonZrPlus->Text = L"+";
			this->buttonZrPlus->UseVisualStyleBackColor = true;
			this->buttonZrPlus->Click += gcnew System::EventHandler(this, &dodajKarteFroms::button2_Click);
			// 
			// labelZr
			// 
			this->labelZr->AutoSize = true;
			this->labelZr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelZr->Location = System::Drawing::Point(6, 70);
			this->labelZr->Name = L"labelZr";
			this->labelZr->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->labelZr->Size = System::Drawing::Size(20, 16);
			this->labelZr->TabIndex = 6;
			this->labelZr->Text = L"Zr";
			// 
			// labelWartoscAtrybutuSi
			// 
			this->labelWartoscAtrybutuSi->AutoSize = true;
			this->labelWartoscAtrybutuSi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelWartoscAtrybutuSi->Location = System::Drawing::Point(132, 47);
			this->labelWartoscAtrybutuSi->Name = L"labelWartoscAtrybutuSi";
			this->labelWartoscAtrybutuSi->Size = System::Drawing::Size(15, 16);
			this->labelWartoscAtrybutuSi->TabIndex = 5;
			this->labelWartoscAtrybutuSi->Text = L"0";
			// 
			// buttonSilaMinus
			// 
			this->buttonSilaMinus->Location = System::Drawing::Point(103, 44);
			this->buttonSilaMinus->Name = L"buttonSilaMinus";
			this->buttonSilaMinus->Size = System::Drawing::Size(23, 23);
			this->buttonSilaMinus->TabIndex = 4;
			this->buttonSilaMinus->Text = L"-";
			this->buttonSilaMinus->UseVisualStyleBackColor = true;
			this->buttonSilaMinus->Click += gcnew System::EventHandler(this, &dodajKarteFroms::buttonSilaMinus_Click);
			// 
			// labelWartoscSila
			// 
			this->labelWartoscSila->AutoSize = true;
			this->labelWartoscSila->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelWartoscSila->Location = System::Drawing::Point(75, 47);
			this->labelWartoscSila->Name = L"labelWartoscSila";
			this->labelWartoscSila->Size = System::Drawing::Size(22, 16);
			this->labelWartoscSila->TabIndex = 3;
			this->labelWartoscSila->Text = L"10";
			// 
			// buttonSilaPlus
			// 
			this->buttonSilaPlus->Location = System::Drawing::Point(46, 44);
			this->buttonSilaPlus->Name = L"buttonSilaPlus";
			this->buttonSilaPlus->Size = System::Drawing::Size(23, 23);
			this->buttonSilaPlus->TabIndex = 2;
			this->buttonSilaPlus->Text = L"+";
			this->buttonSilaPlus->UseVisualStyleBackColor = true;
			this->buttonSilaPlus->Click += gcnew System::EventHandler(this, &dodajKarteFroms::buttonSilaPlus_Click);
			// 
			// losujAtrybuty
			// 
			this->losujAtrybuty->Location = System::Drawing::Point(10, 224);
			this->losujAtrybuty->Name = L"losujAtrybuty";
			this->losujAtrybuty->Size = System::Drawing::Size(75, 23);
			this->losujAtrybuty->TabIndex = 1;
			this->losujAtrybuty->Text = L"Losuj Atrybuty";
			this->losujAtrybuty->UseVisualStyleBackColor = true;
			this->losujAtrybuty->Click += gcnew System::EventHandler(this, &dodajKarteFroms::losujAtrybuty_Click);
			// 
			// labelSila
			// 
			this->labelSila->AutoSize = true;
			this->labelSila->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelSila->Location = System::Drawing::Point(6, 47);
			this->labelSila->Name = L"labelSila";
			this->labelSila->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->labelSila->Size = System::Drawing::Size(20, 16);
			this->labelSila->TabIndex = 0;
			this->labelSila->Text = L"SI";
			// 
			// hpNPancerz
			// 
			this->hpNPancerz->Controls->Add(this->buttonPodajWartosc);
			this->hpNPancerz->Controls->Add(this->maskedTextBoxDomyœlnaWartoœæ);
			this->hpNPancerz->Controls->Add(this->maskedTextBoxIloscKw);
			this->hpNPancerz->Controls->Add(this->buttonHPLosuj);
			this->hpNPancerz->Controls->Add(this->textBoxKPNaturalna);
			this->hpNPancerz->Controls->Add(this->label8);
			this->hpNPancerz->Controls->Add(this->label7);
			this->hpNPancerz->Controls->Add(this->label6);
			this->hpNPancerz->Controls->Add(this->label5);
			this->hpNPancerz->Controls->Add(this->label4);
			this->hpNPancerz->Controls->Add(this->label3);
			this->hpNPancerz->Controls->Add(this->button1);
			this->hpNPancerz->Controls->Add(this->labelSumaKp);
			this->hpNPancerz->Controls->Add(this->textBoxKPInne);
			this->hpNPancerz->Controls->Add(this->labelKP4);
			this->hpNPancerz->Controls->Add(this->label2);
			this->hpNPancerz->Controls->Add(this->labelKPRozmiar);
			this->hpNPancerz->Controls->Add(this->labelKP3);
			this->hpNPancerz->Controls->Add(this->labelKPZr);
			this->hpNPancerz->Controls->Add(this->labelKP2);
			this->hpNPancerz->Controls->Add(this->labelKPTarczy);
			this->hpNPancerz->Controls->Add(this->labelKP1);
			this->hpNPancerz->Controls->Add(this->labelKPZbroi);
			this->hpNPancerz->Controls->Add(this->labelKP);
			this->hpNPancerz->Controls->Add(this->buttonHPUaktualnij);
			this->hpNPancerz->Controls->Add(this->labelSumaHP);
			this->hpNPancerz->Controls->Add(this->textBoxTypKW);
			this->hpNPancerz->Controls->Add(this->labelK);
			this->hpNPancerz->Controls->Add(this->label1);
			this->hpNPancerz->Location = System::Drawing::Point(231, 129);
			this->hpNPancerz->Name = L"hpNPancerz";
			this->hpNPancerz->Size = System::Drawing::Size(389, 100);
			this->hpNPancerz->TabIndex = 2;
			this->hpNPancerz->TabStop = false;
			this->hpNPancerz->Text = L"HP i pancerz";
			// 
			// buttonPodajWartosc
			// 
			this->buttonPodajWartosc->Location = System::Drawing::Point(305, 15);
			this->buttonPodajWartosc->Name = L"buttonPodajWartosc";
			this->buttonPodajWartosc->Size = System::Drawing::Size(78, 23);
			this->buttonPodajWartosc->TabIndex = 32;
			this->buttonPodajWartosc->Text = L"Podaj War";
			this->buttonPodajWartosc->UseVisualStyleBackColor = true;
			this->buttonPodajWartosc->Click += gcnew System::EventHandler(this, &dodajKarteFroms::buttonPodajWartosc_Click);
			// 
			// maskedTextBoxDomyœlnaWartoœæ
			// 
			this->maskedTextBoxDomyœlnaWartoœæ->Location = System::Drawing::Point(265, 17);
			this->maskedTextBoxDomyœlnaWartoœæ->Mask = L"000000";
			this->maskedTextBoxDomyœlnaWartoœæ->Name = L"maskedTextBoxDomyœlnaWartoœæ";
			this->maskedTextBoxDomyœlnaWartoœæ->Size = System::Drawing::Size(34, 20);
			this->maskedTextBoxDomyœlnaWartoœæ->TabIndex = 31;
			this->maskedTextBoxDomyœlnaWartoœæ->Text = L"0";
			this->maskedTextBoxDomyœlnaWartoœæ->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBoxIloscKw
			// 
			this->maskedTextBoxIloscKw->Location = System::Drawing::Point(34, 17);
			this->maskedTextBoxIloscKw->Mask = L"000";
			this->maskedTextBoxIloscKw->Name = L"maskedTextBoxIloscKw";
			this->maskedTextBoxIloscKw->Size = System::Drawing::Size(33, 20);
			this->maskedTextBoxIloscKw->TabIndex = 4;
			this->maskedTextBoxIloscKw->Text = L"0";
			// 
			// buttonHPLosuj
			// 
			this->buttonHPLosuj->Location = System::Drawing::Point(207, 15);
			this->buttonHPLosuj->Name = L"buttonHPLosuj";
			this->buttonHPLosuj->Size = System::Drawing::Size(52, 23);
			this->buttonHPLosuj->TabIndex = 29;
			this->buttonHPLosuj->Text = L"Losuj";
			this->buttonHPLosuj->UseVisualStyleBackColor = true;
			this->buttonHPLosuj->Click += gcnew System::EventHandler(this, &dodajKarteFroms::buttonHPLosuj_Click);
			// 
			// textBoxKPNaturalna
			// 
			this->textBoxKPNaturalna->Location = System::Drawing::Point(219, 50);
			this->textBoxKPNaturalna->Name = L"textBoxKPNaturalna";
			this->textBoxKPNaturalna->Size = System::Drawing::Size(33, 20);
			this->textBoxKPNaturalna->TabIndex = 28;
			this->textBoxKPNaturalna->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(67, 73);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 27;
			this->label8->Text = L"zbroja";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(108, 73);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 13);
			this->label7->TabIndex = 26;
			this->label7->Text = L"tarcza";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(149, 73);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(17, 13);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Zr";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(175, 73);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 24;
			this->label5->Text = L"rozmiar";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(219, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 13);
			this->label4->TabIndex = 23;
			this->label4->Text = L"naturalna";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(272, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 13);
			this->label3->TabIndex = 22;
			this->label3->Text = L"inne";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(303, 71);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 23);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Uaktualnij KP";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &dodajKarteFroms::button1_Click);
			// 
			// labelSumaKp
			// 
			this->labelSumaKp->AutoSize = true;
			this->labelSumaKp->Location = System::Drawing::Point(317, 55);
			this->labelSumaKp->Name = L"labelSumaKp";
			this->labelSumaKp->Size = System::Drawing::Size(28, 13);
			this->labelSumaKp->TabIndex = 20;
			this->labelSumaKp->Text = L"= 10";
			// 
			// textBoxKPInne
			// 
			this->textBoxKPInne->Location = System::Drawing::Point(275, 50);
			this->textBoxKPInne->Name = L"textBoxKPInne";
			this->textBoxKPInne->Size = System::Drawing::Size(36, 20);
			this->textBoxKPInne->TabIndex = 19;
			this->textBoxKPInne->Text = L"0";
			// 
			// labelKP4
			// 
			this->labelKP4->AutoSize = true;
			this->labelKP4->Location = System::Drawing::Point(256, 53);
			this->labelKP4->Name = L"labelKP4";
			this->labelKP4->Size = System::Drawing::Size(13, 13);
			this->labelKP4->TabIndex = 18;
			this->labelKP4->Text = L"+";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(202, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"+";
			// 
			// labelKPRozmiar
			// 
			this->labelKPRozmiar->AutoSize = true;
			this->labelKPRozmiar->Location = System::Drawing::Point(184, 53);
			this->labelKPRozmiar->Name = L"labelKPRozmiar";
			this->labelKPRozmiar->Size = System::Drawing::Size(13, 13);
			this->labelKPRozmiar->TabIndex = 15;
			this->labelKPRozmiar->Text = L"0";
			// 
			// labelKP3
			// 
			this->labelKP3->AutoSize = true;
			this->labelKP3->Location = System::Drawing::Point(168, 53);
			this->labelKP3->Name = L"labelKP3";
			this->labelKP3->Size = System::Drawing::Size(13, 13);
			this->labelKP3->TabIndex = 14;
			this->labelKP3->Text = L"+";
			// 
			// labelKPZr
			// 
			this->labelKPZr->AutoSize = true;
			this->labelKPZr->Location = System::Drawing::Point(149, 53);
			this->labelKPZr->Name = L"labelKPZr";
			this->labelKPZr->Size = System::Drawing::Size(13, 13);
			this->labelKPZr->TabIndex = 13;
			this->labelKPZr->Text = L"0";
			// 
			// labelKP2
			// 
			this->labelKP2->AutoSize = true;
			this->labelKP2->Location = System::Drawing::Point(130, 53);
			this->labelKP2->Name = L"labelKP2";
			this->labelKP2->Size = System::Drawing::Size(13, 13);
			this->labelKP2->TabIndex = 12;
			this->labelKP2->Text = L"+";
			// 
			// labelKPTarczy
			// 
			this->labelKPTarczy->AutoSize = true;
			this->labelKPTarczy->Location = System::Drawing::Point(111, 53);
			this->labelKPTarczy->Name = L"labelKPTarczy";
			this->labelKPTarczy->Size = System::Drawing::Size(13, 13);
			this->labelKPTarczy->TabIndex = 11;
			this->labelKPTarczy->Text = L"0";
			// 
			// labelKP1
			// 
			this->labelKP1->AutoSize = true;
			this->labelKP1->Location = System::Drawing::Point(92, 53);
			this->labelKP1->Name = L"labelKP1";
			this->labelKP1->Size = System::Drawing::Size(13, 13);
			this->labelKP1->TabIndex = 10;
			this->labelKP1->Text = L"+";
			// 
			// labelKPZbroi
			// 
			this->labelKPZbroi->AutoSize = true;
			this->labelKPZbroi->Location = System::Drawing::Point(73, 53);
			this->labelKPZbroi->Name = L"labelKPZbroi";
			this->labelKPZbroi->Size = System::Drawing::Size(13, 13);
			this->labelKPZbroi->TabIndex = 9;
			this->labelKPZbroi->Text = L"0";
			// 
			// labelKP
			// 
			this->labelKP->AutoSize = true;
			this->labelKP->Location = System::Drawing::Point(10, 53);
			this->labelKP->Name = L"labelKP";
			this->labelKP->Size = System::Drawing::Size(57, 13);
			this->labelKP->TabIndex = 7;
			this->labelKP->Text = L"KP = 10  +";
			// 
			// buttonHPUaktualnij
			// 
			this->buttonHPUaktualnij->Location = System::Drawing::Point(139, 15);
			this->buttonHPUaktualnij->Name = L"buttonHPUaktualnij";
			this->buttonHPUaktualnij->Size = System::Drawing::Size(62, 23);
			this->buttonHPUaktualnij->TabIndex = 6;
			this->buttonHPUaktualnij->Text = L"Uaktualnij";
			this->buttonHPUaktualnij->UseVisualStyleBackColor = true;
			this->buttonHPUaktualnij->Click += gcnew System::EventHandler(this, &dodajKarteFroms::buttonLosujPodaj_Click);
			// 
			// labelSumaHP
			// 
			this->labelSumaHP->AutoSize = true;
			this->labelSumaHP->Location = System::Drawing::Point(103, 20);
			this->labelSumaHP->Name = L"labelSumaHP";
			this->labelSumaHP->Size = System::Drawing::Size(22, 13);
			this->labelSumaHP->TabIndex = 5;
			this->labelSumaHP->Text = L"= 0";
			// 
			// textBoxTypKW
			// 
			this->textBoxTypKW->Location = System::Drawing::Point(77, 17);
			this->textBoxTypKW->Name = L"textBoxTypKW";
			this->textBoxTypKW->Size = System::Drawing::Size(28, 20);
			this->textBoxTypKW->TabIndex = 3;
			this->textBoxTypKW->Text = L"4";
			// 
			// labelK
			// 
			this->labelK->AutoSize = true;
			this->labelK->Location = System::Drawing::Point(67, 20);
			this->labelK->Name = L"labelK";
			this->labelK->Size = System::Drawing::Size(13, 13);
			this->labelK->TabIndex = 2;
			this->labelK->Text = L"k";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"HP";
			// 
			// groupBox1
			// 
			this->groupBox1->Location = System::Drawing::Point(626, 34);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(342, 573);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Umiejêtnoœci";
			// 
			// dodajKarteFroms
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(980, 773);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->hpNPancerz);
			this->Controls->Add(this->Atrybuty);
			this->Controls->Add(this->Nazewnictwo);
			this->Name = L"dodajKarteFroms";
			this->Text = L"Dodaj Now¹ Kartê";
			this->Nazewnictwo->ResumeLayout(false);
			this->Nazewnictwo->PerformLayout();
			this->Atrybuty->ResumeLayout(false);
			this->Atrybuty->PerformLayout();
			this->hpNPancerz->ResumeLayout(false);
			this->hpNPancerz->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void buttonSilaPlus_Click(System::Object^  sender, System::EventArgs^  e) {
		labelWartoscSila->Text = (Double::Parse(labelWartoscSila->Text) + 1).ToString();
		labelWartoscAtrybutuSi->Text = ((int::Parse(labelWartoscSila->Text) - 10) / 2).ToString();
	}
	

private: System::Void buttonSilaMinus_Click(System::Object^  sender, System::EventArgs^  e) {
	labelWartoscSila->Text = (Double::Parse(labelWartoscSila->Text) - 1).ToString();
	labelWartoscAtrybutuSi->Text = ((int::Parse(labelWartoscSila->Text) - 10) / 2).ToString();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	labelWartoscZr->Text = (Double::Parse(labelWartoscZr->Text) + 1).ToString();
	labelWartoscAtrybutuZr->Text = ((int::Parse(labelWartoscZr->Text) - 10) / 2).ToString();
}
private: System::Void buttonZrMinus_Click(System::Object^  sender, System::EventArgs^  e) {
	labelWartoscZr->Text = (Double::Parse(labelWartoscZr->Text) - 1).ToString();
	labelWartoscAtrybutuZr->Text = ((int::Parse(labelWartoscZr->Text) - 10) / 2).ToString();
}
private: System::Void buttonBdPlus_Click(System::Object^  sender, System::EventArgs^  e) {
	labelWartoscBd->Text = (Double::Parse(labelWartoscBd->Text) + 1).ToString();
	labelWartoscAtrybutuBd->Text = ((int::Parse(labelWartoscBd->Text) - 10) / 2).ToString();
}
private: System::Void buttonBdMinus_Click(System::Object^  sender, System::EventArgs^  e) {
	labelWartoscBd->Text = (Double::Parse(labelWartoscBd->Text) - 1).ToString();
	labelWartoscAtrybutuBd->Text = ((int::Parse(labelWartoscBd->Text) - 10) / 2).ToString();
}
private: System::Void buttonIntPlus_Click(System::Object^  sender, System::EventArgs^  e) {
	labelWartoscInt->Text = (Double::Parse(labelWartoscInt->Text) + 1).ToString();
	labelWartoscAtrybutuInt->Text = ((int::Parse(labelWartoscInt->Text) - 10) / 2).ToString();
}
private: System::Void buttonIntMinus_Click(System::Object^  sender, System::EventArgs^  e) {
	labelWartoscInt->Text = (Double::Parse(labelWartoscInt->Text) - 1).ToString();
	labelWartoscAtrybutuInt->Text = ((int::Parse(labelWartoscInt->Text) - 10) / 2).ToString();
}
private: System::Void buttonMdPlus_Click(System::Object^  sender, System::EventArgs^  e) {
	labelWartoscMd->Text = (Double::Parse(labelWartoscMd->Text) + 1).ToString();
	labelWartoscAtrybutuMd->Text = ((int::Parse(labelWartoscMd->Text) - 10) / 2).ToString();
}
private: System::Void buttonMdMinus_Click(System::Object^  sender, System::EventArgs^  e) {
	labelWartoscMd->Text = (Double::Parse(labelWartoscMd->Text) - 1).ToString();
	labelWartoscAtrybutuMd->Text = ((int::Parse(labelWartoscMd->Text) - 10) / 2).ToString();
}
private: System::Void buttonChaPlus_Click(System::Object^  sender, System::EventArgs^  e) {
	labelWartoscCha->Text = (Double::Parse(labelWartoscCha->Text) + 1).ToString();
	labelWartoscAtrybutuCha->Text = ((int::Parse(labelWartoscCha->Text) - 10) / 2).ToString();
}
private: System::Void buttonChaMinus_Click(System::Object^  sender, System::EventArgs^  e) {
	labelWartoscCha->Text = (Double::Parse(labelWartoscCha->Text) - 1).ToString();
	labelWartoscAtrybutuCha->Text = ((int::Parse(labelWartoscCha->Text) - 10) / 2).ToString();
}
private: System::Void comboBoxRasy_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBoxRasy->Text == "Cz³owiek"||comboBoxRasy->Text == "Pó³elf"){
		labelRasaSi->Text = "0";
		labelRasaBd->Text = "0";
		labelRasaZr->Text = "0";
		labelRasaInt->Text = "0";
		labelRasaMd->Text = "0";
		labelRasaCha->Text = "0";
	}
	else if (comboBoxRasy->Text == "Elf"){
		labelRasaSi->Text = "0";
		labelRasaBd->Text = "-2";
		labelRasaZr->Text = "+2";
		labelRasaInt->Text = "0";
		labelRasaMd->Text = "0";
		labelRasaCha->Text = "0";
		
	}
	else if (comboBoxRasy->Text == "Krasnolud"){
		labelRasaSi->Text = "0";
		labelRasaBd->Text = "+2";
		labelRasaZr->Text = "0";
		labelRasaInt->Text = "0";
		labelRasaMd->Text = "0";
		labelRasaCha->Text = "-2";
	}
	else if (comboBoxRasy->Text == "Gnom"){
		labelRasaSi->Text = "-2";
		labelRasaBd->Text = "+2";
		labelRasaZr->Text = "0";
		labelRasaInt->Text = "0";
		labelRasaMd->Text = "0";
		labelRasaCha->Text = "0";
	}
	else if (comboBoxRasy->Text == "Pó³ork"){
		labelRasaSi->Text = "+2";
		labelRasaBd->Text = "0";
		labelRasaZr->Text = "0";
		labelRasaInt->Text = "-2";
		labelRasaMd->Text = "0";
		labelRasaCha->Text = "-2";
	}
	else if (comboBoxRasy->Text == "Nizio³ek"){
		labelRasaSi->Text = "-2";
		labelRasaBd->Text = "0";
		labelRasaZr->Text = "+2";
		labelRasaInt->Text = "0";
		labelRasaMd->Text = "0";
		labelRasaCha->Text = "0";
	}
}
private: System::Void buttonSprawdzRealneAtrybuty_Click(System::Object^  sender, System::EventArgs^  e) {
	Form^ RozlosowaneAtrybuty = gcnew Form;
	
	RozlosowaneAtrybuty->Width = 140;
	RozlosowaneAtrybuty->Height = 250;

	Label^ nMSi = gcnew Label;
	nMSi->Text = ((int::Parse(labelWartoscSila->Text) + int::Parse(labelRasaSi->Text) - 10) / 2).ToString();
	nMSi->Location = Point(90, 10);
	RozlosowaneAtrybuty->Controls->Add(nMSi);
	Label^ nMBd = gcnew Label;
	nMBd->Text = ((int::Parse(labelWartoscBd->Text) + int::Parse(labelRasaBd->Text) - 10) / 2).ToString();
	nMBd->Location = Point(90, 70);
	RozlosowaneAtrybuty->Controls->Add(nMBd);
	Label^ nMZr = gcnew Label;
	nMZr->Text = ((int::Parse(labelWartoscZr->Text) + int::Parse(labelRasaZr->Text) - 10) / 2).ToString();
	nMZr->Location = Point(90, 40);
	RozlosowaneAtrybuty->Controls->Add(nMZr);
	Label^ nMInt = gcnew Label;
	nMInt->Text = ((int::Parse(labelWartoscInt->Text) + int::Parse(labelRasaInt->Text) - 10) / 2).ToString();
	nMInt->Location = Point(90, 100);
	RozlosowaneAtrybuty->Controls->Add(nMInt);
	Label^ nMMd = gcnew Label;
	nMMd->Text = ((int::Parse(labelWartoscMd->Text) + int::Parse(labelRasaMd->Text) - 10) / 2).ToString();
	nMMd->Location = Point(90, 130);
	RozlosowaneAtrybuty->Controls->Add(nMMd);
	Label^ nMCha = gcnew Label;
	nMCha->Text = ((int::Parse(labelWartoscCha->Text) + int::Parse(labelRasaCha->Text) - 10) / 2).ToString();
	nMCha->Location = Point(90, 160);
	RozlosowaneAtrybuty->Controls->Add(nMCha);


	Label^ nWSi = gcnew Label;
	nWSi->Text = (int::Parse(labelWartoscSila->Text) + int::Parse(labelRasaSi->Text)).ToString();
	nWSi->Location = Point(50, 10);
	RozlosowaneAtrybuty->Controls->Add(nWSi);
	Label^ nWBd = gcnew Label;
	nWBd->Text = (int::Parse(labelWartoscBd->Text) + int::Parse(labelRasaBd->Text)).ToString();
	nWBd->Location = Point(50, 70);
	RozlosowaneAtrybuty->Controls->Add(nWBd);
	Label^ nWZr = gcnew Label;
	nWZr->Text = (int::Parse(labelWartoscZr->Text) + int::Parse(labelRasaZr->Text)).ToString();
	nWZr->Location = Point(50, 40);
	RozlosowaneAtrybuty->Controls->Add(nWZr);
	Label^ nWInt = gcnew Label;
	nWInt->Text = (int::Parse(labelWartoscInt->Text) + int::Parse(labelRasaInt->Text)).ToString();
	nWInt->Location = Point(50, 100);
	RozlosowaneAtrybuty->Controls->Add(nWInt);
	Label^ nWMd = gcnew Label;
	nWMd->Text = (int::Parse(labelWartoscMd->Text) + int::Parse(labelRasaMd->Text)).ToString();
	nWMd->Location = Point(50, 130);
	RozlosowaneAtrybuty->Controls->Add(nWMd);
	Label^ nWCha = gcnew Label;
	nWCha->Text = (int::Parse(labelWartoscCha->Text) + int::Parse(labelRasaCha->Text)).ToString();
	nWCha->Location = Point(50, 160);
	RozlosowaneAtrybuty->Controls->Add(nWCha);




	Label^ nSi = gcnew Label;
	nSi->Text = "Si";
	nSi->Location = Point(10, 10);
	RozlosowaneAtrybuty->Controls->Add(nSi);
	Label^ nBd = gcnew Label;
	nBd->Text = "Bd";
	nBd->Location = Point(10, 70);
	RozlosowaneAtrybuty->Controls->Add(nBd);
	Label^ nZr = gcnew Label;
	nZr->Text = "Zr";
	nZr->Location = Point(10, 40);
	RozlosowaneAtrybuty->Controls->Add(nZr);
	Label^ nInt = gcnew Label;
	nInt->Text = "Int";
	nInt->Location = Point(10, 100);
	RozlosowaneAtrybuty->Controls->Add(nInt);
	Label^ nMd = gcnew Label;
	nMd->Text = "Md";
	nMd->Location = Point(10, 130);
	RozlosowaneAtrybuty->Controls->Add(nMd);
	Label^ nCha = gcnew Label;
	nCha->Text = "Cha";
	nCha->Location = Point(10, 160);
	RozlosowaneAtrybuty->Controls->Add(nCha);

	

	RozlosowaneAtrybuty->ShowDialog();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//labelKPZbroi->Text=
		//labelKPTarczy->Text=
		labelKPZr->Text = ((int::Parse(labelWartoscZr->Text) + int::Parse(labelRasaZr->Text) - 10) / 2).ToString();
		//labelKPRozmiar->=
		labelSumaKp->Text = " = "+(int::Parse(labelKPZbroi->Text) + int::Parse(labelKPTarczy->Text) + int::Parse(labelKPZr->Text)+int::Parse(labelKPRozmiar->Text)+10+int::Parse(textBoxKPInne->Text)+int::Parse(textBoxKPNaturalna->Text)).ToString();
}
private: System::Void losujAtrybuty_Click(System::Object^  sender, System::EventArgs^  e) {
	srand(time(NULL));

	labelWartoscSila->Text = (rand() % 6 + 1 + rand() % 6 + 1 + rand() % 6 + 1).ToString();
	labelWartoscAtrybutuSi->Text = ((int::Parse(labelWartoscSila->Text) - 10) / 2).ToString();

	labelWartoscZr->Text = (rand() % 6 + 1 + rand() % 6 + 1 + rand() % 6 + 1).ToString();
	labelWartoscAtrybutuZr->Text = ((int::Parse(labelWartoscZr->Text) - 10) / 2).ToString();

	labelWartoscBd->Text = (rand() % 6 + 1 + rand() % 6 + 1 + rand() % 6 + 1).ToString();
	labelWartoscAtrybutuBd->Text = ((int::Parse(labelWartoscBd->Text) - 10) / 2).ToString();

	labelWartoscInt->Text = (rand() % 6 + 1 + rand() % 6 + 1 + rand() % 6 + 1).ToString();
	labelWartoscAtrybutuInt->Text = ((int::Parse(labelWartoscInt->Text) - 10) / 2).ToString();

	labelWartoscMd->Text = (rand() % 6 + 1 + rand() % 6 + 1 + rand() % 6 + 1).ToString();
	labelWartoscAtrybutuMd->Text = ((int::Parse(labelWartoscMd->Text) - 10) / 2).ToString();

	labelWartoscCha->Text = (rand() % 6 + 1 + rand() % 6 + 1 + rand() % 6 + 1).ToString();
	labelWartoscAtrybutuCha->Text = ((int::Parse(labelWartoscCha->Text) - 10) / 2).ToString();
}
private: System::Void buttonLosujPodaj_Click(System::Object^  sender, System::EventArgs^  e) {

	if (int::Parse(textBoxTypKW->Text) == 4 || textBoxTypKW->Text == "6" || textBoxTypKW->Text == "8" || textBoxTypKW->Text == "12" || textBoxTypKW->Text == "20" || textBoxTypKW->Text == "10"){
		
		labelSumaHP->Text = "= "+(int::Parse(textBoxTypKW->Text)*int::Parse(maskedTextBoxIloscKw->Text)).ToString();
	}
	else {
		MessageBox::Show("Popraw koœæ wytrzyma³oœci");
	}
	
}
private: System::Void buttonHPLosuj_Click(System::Object^  sender, System::EventArgs^  e) {
	srand(time(NULL));
	if (textBoxTypKW->Text == "4" || textBoxTypKW->Text == "6" || textBoxTypKW->Text == "8" || textBoxTypKW->Text == "12" || textBoxTypKW->Text == "20" || textBoxTypKW->Text == "10"){
		int wartosc = 0;
		for (int i = int::Parse(maskedTextBoxIloscKw->Text); i>0; i--)
			wartosc += rand() % int::Parse(textBoxTypKW->Text) + 1;
		labelSumaHP->Text = wartosc.ToString();
	}
	else {
		MessageBox::Show("Popraw koœæ wytrzyma³oœci");
		
	}
		
}
private: System::Void buttonPodajWartosc_Click(System::Object^  sender, System::EventArgs^  e) {
	labelSumaHP->Text = "= "+maskedTextBoxDomyœlnaWartoœæ->Text;
}
};
}
