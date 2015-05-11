#pragma once

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
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  labelWartoscAtrybutuCha;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  labelWartoscCha;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  labelWartoscAtrybutuMd;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  labelWartoscMd;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  labelWartoscAtrybutuInt;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  labelWartoscInt;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  labelInt;
	private: System::Windows::Forms::Label^  labelModyfikator;
	private: System::Windows::Forms::Label^  labelWartosc;
	private: System::Windows::Forms::Label^  labelAtrybut;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  labelWartoscAtrybutuBd;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  labelWartoscBd;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  labelBd;
	private: System::Windows::Forms::Label^  labelWartoscAtrybutuZr;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  labelWartoscZr;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  labelZr;
	private: System::Windows::Forms::Label^  labelWartoscAtrybutuSi;
	private: System::Windows::Forms::Button^  buttonSilaMinus;
	private: System::Windows::Forms::Label^  labelWartoscSila;
	private: System::Windows::Forms::Button^  buttonSilaPlus;
	private: System::Windows::Forms::Button^  losujAtrybuty;
	private: System::Windows::Forms::Label^  labelSila;
	private: System::Windows::Forms::GroupBox^  hpNPancerz;
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
			this->Atrybuty = (gcnew System::Windows::Forms::GroupBox());
			this->hpNPancerz = (gcnew System::Windows::Forms::GroupBox());
			this->labelSila = (gcnew System::Windows::Forms::Label());
			this->losujAtrybuty = (gcnew System::Windows::Forms::Button());
			this->buttonSilaPlus = (gcnew System::Windows::Forms::Button());
			this->labelWartoscSila = (gcnew System::Windows::Forms::Label());
			this->buttonSilaMinus = (gcnew System::Windows::Forms::Button());
			this->labelWartoscAtrybutuSi = (gcnew System::Windows::Forms::Label());
			this->labelWartoscAtrybutuZr = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelWartoscZr = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->labelZr = (gcnew System::Windows::Forms::Label());
			this->labelWartoscAtrybutuBd = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->labelWartoscBd = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->labelBd = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->labelAtrybut = (gcnew System::Windows::Forms::Label());
			this->labelWartosc = (gcnew System::Windows::Forms::Label());
			this->labelModyfikator = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelWartoscAtrybutuInt = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->labelWartoscInt = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->labelInt = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->labelWartoscAtrybutuMd = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->labelWartoscMd = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->labelWartoscAtrybutuCha = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->labelWartoscCha = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->Atrybuty->SuspendLayout();
			this->SuspendLayout();
			// 
			// Nazewnictwo
			// 
			this->Nazewnictwo->Location = System::Drawing::Point(13, 13);
			this->Nazewnictwo->Name = L"Nazewnictwo";
			this->Nazewnictwo->Size = System::Drawing::Size(515, 135);
			this->Nazewnictwo->TabIndex = 0;
			this->Nazewnictwo->TabStop = false;
			this->Nazewnictwo->Text = L"Nazewnictwo";
			this->Nazewnictwo->Enter += gcnew System::EventHandler(this, &dodajKarteFroms::groupBox1_Enter);
			// 
			// Atrybuty
			// 
			this->Atrybuty->Controls->Add(this->label12);
			this->Atrybuty->Controls->Add(this->labelWartoscAtrybutuCha);
			this->Atrybuty->Controls->Add(this->button9);
			this->Atrybuty->Controls->Add(this->labelWartoscCha);
			this->Atrybuty->Controls->Add(this->button10);
			this->Atrybuty->Controls->Add(this->label15);
			this->Atrybuty->Controls->Add(this->label6);
			this->Atrybuty->Controls->Add(this->labelWartoscAtrybutuMd);
			this->Atrybuty->Controls->Add(this->button7);
			this->Atrybuty->Controls->Add(this->labelWartoscMd);
			this->Atrybuty->Controls->Add(this->button8);
			this->Atrybuty->Controls->Add(this->label11);
			this->Atrybuty->Controls->Add(this->label1);
			this->Atrybuty->Controls->Add(this->labelWartoscAtrybutuInt);
			this->Atrybuty->Controls->Add(this->button5);
			this->Atrybuty->Controls->Add(this->labelWartoscInt);
			this->Atrybuty->Controls->Add(this->button6);
			this->Atrybuty->Controls->Add(this->labelInt);
			this->Atrybuty->Controls->Add(this->labelModyfikator);
			this->Atrybuty->Controls->Add(this->labelWartosc);
			this->Atrybuty->Controls->Add(this->labelAtrybut);
			this->Atrybuty->Controls->Add(this->label8);
			this->Atrybuty->Controls->Add(this->label7);
			this->Atrybuty->Controls->Add(this->label3);
			this->Atrybuty->Controls->Add(this->labelWartoscAtrybutuBd);
			this->Atrybuty->Controls->Add(this->button3);
			this->Atrybuty->Controls->Add(this->labelWartoscBd);
			this->Atrybuty->Controls->Add(this->button4);
			this->Atrybuty->Controls->Add(this->labelBd);
			this->Atrybuty->Controls->Add(this->labelWartoscAtrybutuZr);
			this->Atrybuty->Controls->Add(this->button1);
			this->Atrybuty->Controls->Add(this->labelWartoscZr);
			this->Atrybuty->Controls->Add(this->button2);
			this->Atrybuty->Controls->Add(this->labelZr);
			this->Atrybuty->Controls->Add(this->labelWartoscAtrybutuSi);
			this->Atrybuty->Controls->Add(this->buttonSilaMinus);
			this->Atrybuty->Controls->Add(this->labelWartoscSila);
			this->Atrybuty->Controls->Add(this->buttonSilaPlus);
			this->Atrybuty->Controls->Add(this->losujAtrybuty);
			this->Atrybuty->Controls->Add(this->labelSila);
			this->Atrybuty->Location = System::Drawing::Point(13, 154);
			this->Atrybuty->Name = L"Atrybuty";
			this->Atrybuty->Size = System::Drawing::Size(199, 253);
			this->Atrybuty->TabIndex = 1;
			this->Atrybuty->TabStop = false;
			this->Atrybuty->Text = L"Atrybuty";
			// 
			// hpNPancerz
			// 
			this->hpNPancerz->Location = System::Drawing::Point(534, 14);
			this->hpNPancerz->Name = L"hpNPancerz";
			this->hpNPancerz->Size = System::Drawing::Size(389, 100);
			this->hpNPancerz->TabIndex = 2;
			this->hpNPancerz->TabStop = false;
			this->hpNPancerz->Text = L"HP i pancerz";
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
			// losujAtrybuty
			// 
			this->losujAtrybuty->Location = System::Drawing::Point(10, 224);
			this->losujAtrybuty->Name = L"losujAtrybuty";
			this->losujAtrybuty->Size = System::Drawing::Size(75, 23);
			this->losujAtrybuty->TabIndex = 1;
			this->losujAtrybuty->Text = L"Losuj Atrybuty";
			this->losujAtrybuty->UseVisualStyleBackColor = true;
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
			// buttonSilaMinus
			// 
			this->buttonSilaMinus->Location = System::Drawing::Point(103, 44);
			this->buttonSilaMinus->Name = L"buttonSilaMinus";
			this->buttonSilaMinus->Size = System::Drawing::Size(23, 23);
			this->buttonSilaMinus->TabIndex = 4;
			this->buttonSilaMinus->Text = L"-";
			this->buttonSilaMinus->UseVisualStyleBackColor = true;
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(103, 67);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(23, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"-";
			this->button1->UseVisualStyleBackColor = true;
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
			// button2
			// 
			this->button2->Location = System::Drawing::Point(46, 67);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(23, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = true;
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
			// button3
			// 
			this->button3->Location = System::Drawing::Point(103, 90);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(23, 23);
			this->button3->TabIndex = 14;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = true;
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
			// button4
			// 
			this->button4->Location = System::Drawing::Point(46, 90);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(23, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = true;
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(180, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(180, 72);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(180, 95);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"0";
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
			// labelWartosc
			// 
			this->labelWartosc->AutoSize = true;
			this->labelWartosc->Location = System::Drawing::Point(63, 20);
			this->labelWartosc->Name = L"labelWartosc";
			this->labelWartosc->Size = System::Drawing::Size(47, 13);
			this->labelWartosc->TabIndex = 20;
			this->labelWartosc->Text = L"Wartosc";
			// 
			// labelModyfikator
			// 
			this->labelModyfikator->AutoSize = true;
			this->labelModyfikator->Location = System::Drawing::Point(116, 20);
			this->labelModyfikator->Name = L"labelModyfikator";
			this->labelModyfikator->Size = System::Drawing::Size(62, 13);
			this->labelModyfikator->TabIndex = 21;
			this->labelModyfikator->Text = L"Modyfikator";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(180, 120);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 27;
			this->label1->Text = L"0";
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
			// button5
			// 
			this->button5->Location = System::Drawing::Point(103, 115);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(23, 23);
			this->button5->TabIndex = 25;
			this->button5->Text = L"-";
			this->button5->UseVisualStyleBackColor = true;
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
			// button6
			// 
			this->button6->Location = System::Drawing::Point(46, 115);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(23, 23);
			this->button6->TabIndex = 23;
			this->button6->Text = L"+";
			this->button6->UseVisualStyleBackColor = true;
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
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(180, 146);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 33;
			this->label6->Text = L"0";
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
			// button7
			// 
			this->button7->Location = System::Drawing::Point(103, 141);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(23, 23);
			this->button7->TabIndex = 31;
			this->button7->Text = L"-";
			this->button7->UseVisualStyleBackColor = true;
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
			// button8
			// 
			this->button8->Location = System::Drawing::Point(46, 141);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(23, 23);
			this->button8->TabIndex = 29;
			this->button8->Text = L"+";
			this->button8->UseVisualStyleBackColor = true;
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
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(180, 172);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(13, 13);
			this->label12->TabIndex = 39;
			this->label12->Text = L"0";
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
			// button9
			// 
			this->button9->Location = System::Drawing::Point(103, 167);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(23, 23);
			this->button9->TabIndex = 37;
			this->button9->Text = L"-";
			this->button9->UseVisualStyleBackColor = true;
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
			// button10
			// 
			this->button10->Location = System::Drawing::Point(46, 167);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(23, 23);
			this->button10->TabIndex = 35;
			this->button10->Text = L"+";
			this->button10->UseVisualStyleBackColor = true;
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
			// dodajKarteFroms
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1122, 599);
			this->Controls->Add(this->hpNPancerz);
			this->Controls->Add(this->Atrybuty);
			this->Controls->Add(this->Nazewnictwo);
			this->Name = L"dodajKarteFroms";
			this->Text = L"dodajKarteFroms";
			this->Atrybuty->ResumeLayout(false);
			this->Atrybuty->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void buttonSilaPlus_Click(System::Object^  sender, System::EventArgs^  e) {

	}
};
}
