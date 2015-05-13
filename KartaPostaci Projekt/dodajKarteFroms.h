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
	private: System::Windows::Forms::GroupBox^  groupBoxUmiejetnosc;


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
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::Label^  label52;
private: System::Windows::Forms::Label^  label53;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Button^  buttonUmiejetnoscUaktualnij;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::CheckBox^  checkBox3;
private: System::Windows::Forms::CheckBox^  checkBox4;
private: System::Windows::Forms::CheckBox^  checkBox2;
private: System::Windows::Forms::CheckBox^  checkBoxAlchemia;



private: System::Windows::Forms::Label^  label135;
private: System::Windows::Forms::Label^  label136;
private: System::Windows::Forms::Label^  label137;
private: System::Windows::Forms::Label^  label138;
private: System::Windows::Forms::Label^  label139;
private: System::Windows::Forms::Label^  label140;
private: System::Windows::Forms::Label^  label141;
private: System::Windows::Forms::Label^  label142;
private: System::Windows::Forms::Label^  label143;
private: System::Windows::Forms::Label^  label144;
private: System::Windows::Forms::Label^  label145;
private: System::Windows::Forms::Label^  label146;
private: System::Windows::Forms::Label^  label147;
private: System::Windows::Forms::Label^  label148;
private: System::Windows::Forms::Label^  label149;
private: System::Windows::Forms::Label^  label118;
private: System::Windows::Forms::Label^  label119;
private: System::Windows::Forms::Label^  label120;
private: System::Windows::Forms::Label^  label121;
private: System::Windows::Forms::Label^  label122;
private: System::Windows::Forms::Label^  label123;
private: System::Windows::Forms::Label^  label124;
private: System::Windows::Forms::Label^  label125;
private: System::Windows::Forms::Label^  label126;
private: System::Windows::Forms::Label^  label127;
private: System::Windows::Forms::Label^  label128;
private: System::Windows::Forms::Label^  label129;
private: System::Windows::Forms::Label^  label130;
private: System::Windows::Forms::Label^  label131;
private: System::Windows::Forms::Label^  label132;
private: System::Windows::Forms::Label^  label133;
private: System::Windows::Forms::Label^  labelWartoscAlchemia;

private: System::Windows::Forms::Label^  label86;
private: System::Windows::Forms::Label^  label87;
private: System::Windows::Forms::Label^  label88;
private: System::Windows::Forms::Label^  label89;
private: System::Windows::Forms::Label^  label90;
private: System::Windows::Forms::Label^  label91;
private: System::Windows::Forms::Label^  label92;
private: System::Windows::Forms::Label^  label93;
private: System::Windows::Forms::Label^  label94;
private: System::Windows::Forms::Label^  label95;
private: System::Windows::Forms::Label^  label96;
private: System::Windows::Forms::Label^  label97;
private: System::Windows::Forms::Label^  label98;
private: System::Windows::Forms::Label^  label99;
private: System::Windows::Forms::Label^  label100;
private: System::Windows::Forms::Label^  label101;
private: System::Windows::Forms::Label^  label102;
private: System::Windows::Forms::Label^  label103;
private: System::Windows::Forms::Label^  label104;
private: System::Windows::Forms::Label^  label105;
private: System::Windows::Forms::Label^  label106;
private: System::Windows::Forms::Label^  label107;
private: System::Windows::Forms::Label^  label108;
private: System::Windows::Forms::Label^  label109;
private: System::Windows::Forms::Label^  label110;
private: System::Windows::Forms::Label^  label111;
private: System::Windows::Forms::Label^  label112;
private: System::Windows::Forms::Label^  label113;
private: System::Windows::Forms::Label^  label114;
private: System::Windows::Forms::Label^  label115;
private: System::Windows::Forms::Label^  label116;
private: System::Windows::Forms::Label^  label117;
private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::Label^  label71;
private: System::Windows::Forms::Label^  label72;
private: System::Windows::Forms::Label^  label73;
private: System::Windows::Forms::Label^  label74;
private: System::Windows::Forms::Label^  label75;
private: System::Windows::Forms::Label^  label76;
private: System::Windows::Forms::Label^  label77;
private: System::Windows::Forms::Label^  label78;
private: System::Windows::Forms::Label^  label79;
private: System::Windows::Forms::Label^  label80;
private: System::Windows::Forms::Label^  label81;
private: System::Windows::Forms::Label^  label82;
private: System::Windows::Forms::Label^  label83;
private: System::Windows::Forms::Label^  label84;
private: System::Windows::Forms::Label^  label85;
private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::Label^  label65;
private: System::Windows::Forms::Label^  label66;
private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::Label^  label69;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::Label^  label54;
private: System::Windows::Forms::CheckBox^  checkBox17;
private: System::Windows::Forms::CheckBox^  checkBox18;
private: System::Windows::Forms::CheckBox^  checkBox19;
private: System::Windows::Forms::CheckBox^  checkBox20;
private: System::Windows::Forms::CheckBox^  checkBox21;
private: System::Windows::Forms::CheckBox^  checkBox22;
private: System::Windows::Forms::CheckBox^  checkBox23;
private: System::Windows::Forms::CheckBox^  checkBox24;
private: System::Windows::Forms::CheckBox^  checkBox25;
private: System::Windows::Forms::CheckBox^  checkBox26;
private: System::Windows::Forms::CheckBox^  checkBox27;
private: System::Windows::Forms::CheckBox^  checkBox28;
private: System::Windows::Forms::CheckBox^  checkBox29;
private: System::Windows::Forms::CheckBox^  checkBox30;
private: System::Windows::Forms::CheckBox^  checkBox31;
private: System::Windows::Forms::CheckBox^  checkBox32;
private: System::Windows::Forms::CheckBox^  checkBox9;
private: System::Windows::Forms::CheckBox^  checkBox10;
private: System::Windows::Forms::CheckBox^  checkBox11;
private: System::Windows::Forms::CheckBox^  checkBox12;
private: System::Windows::Forms::CheckBox^  checkBox13;
private: System::Windows::Forms::CheckBox^  checkBox14;
private: System::Windows::Forms::CheckBox^  checkBox15;
private: System::Windows::Forms::CheckBox^  checkBox16;
private: System::Windows::Forms::CheckBox^  checkBox5;
private: System::Windows::Forms::CheckBox^  checkBox6;
private: System::Windows::Forms::CheckBox^  checkBox7;
private: System::Windows::Forms::CheckBox^  checkBox8;
private: System::Windows::Forms::Label^  labelAlechemiaPlus;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox17;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox18;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox19;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox20;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox21;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox22;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox23;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox24;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox25;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox26;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox27;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox28;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox29;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox30;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox31;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox32;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox9;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox10;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox11;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox12;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox13;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox14;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox15;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox16;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox5;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox6;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox7;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox8;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox3;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox4;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox2;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
private: System::Windows::Forms::Label^  label236;
private: System::Windows::Forms::Label^  label237;
private: System::Windows::Forms::Label^  label238;
private: System::Windows::Forms::Label^  label239;
private: System::Windows::Forms::Label^  label240;
private: System::Windows::Forms::Label^  label241;
private: System::Windows::Forms::Label^  label242;
private: System::Windows::Forms::Label^  label243;
private: System::Windows::Forms::Label^  label224;
private: System::Windows::Forms::Label^  label225;
private: System::Windows::Forms::Label^  label226;
private: System::Windows::Forms::Label^  label227;
private: System::Windows::Forms::Label^  label228;
private: System::Windows::Forms::Label^  label229;
private: System::Windows::Forms::Label^  label230;
private: System::Windows::Forms::Label^  label231;
private: System::Windows::Forms::Label^  label232;
private: System::Windows::Forms::Label^  label233;
private: System::Windows::Forms::Label^  label234;
private: System::Windows::Forms::Label^  label235;
private: System::Windows::Forms::Label^  label212;
private: System::Windows::Forms::Label^  label213;
private: System::Windows::Forms::Label^  label214;
private: System::Windows::Forms::Label^  label215;
private: System::Windows::Forms::Label^  label216;
private: System::Windows::Forms::Label^  label217;
private: System::Windows::Forms::Label^  label218;
private: System::Windows::Forms::Label^  label219;
private: System::Windows::Forms::Label^  label220;
private: System::Windows::Forms::Label^  label221;
private: System::Windows::Forms::Label^  label222;
private: System::Windows::Forms::Label^  label223;
private: System::Windows::Forms::Label^  label196;
private: System::Windows::Forms::Label^  label197;
private: System::Windows::Forms::Label^  label198;
private: System::Windows::Forms::Label^  label199;
private: System::Windows::Forms::Label^  label200;
private: System::Windows::Forms::Label^  label201;
private: System::Windows::Forms::Label^  label202;
private: System::Windows::Forms::Label^  label203;
private: System::Windows::Forms::Label^  label204;
private: System::Windows::Forms::Label^  label205;
private: System::Windows::Forms::Label^  label206;
private: System::Windows::Forms::Label^  label207;
private: System::Windows::Forms::Label^  label208;
private: System::Windows::Forms::Label^  label209;
private: System::Windows::Forms::Label^  label210;
private: System::Windows::Forms::Label^  label211;
private: System::Windows::Forms::Label^  label188;
private: System::Windows::Forms::Label^  label189;
private: System::Windows::Forms::Label^  label190;
private: System::Windows::Forms::Label^  label191;
private: System::Windows::Forms::Label^  label192;
private: System::Windows::Forms::Label^  label193;
private: System::Windows::Forms::Label^  label194;
private: System::Windows::Forms::Label^  label195;
private: System::Windows::Forms::Label^  label184;
private: System::Windows::Forms::Label^  label185;
private: System::Windows::Forms::Label^  label186;
private: System::Windows::Forms::Label^  label187;
private: System::Windows::Forms::Label^  label182;
private: System::Windows::Forms::Label^  label183;
private: System::Windows::Forms::Label^  label181;
private: System::Windows::Forms::Label^  label180;
private: System::Windows::Forms::Label^  label164;
private: System::Windows::Forms::Label^  label165;
private: System::Windows::Forms::Label^  label166;
private: System::Windows::Forms::Label^  label167;
private: System::Windows::Forms::Label^  label168;
private: System::Windows::Forms::Label^  label169;
private: System::Windows::Forms::Label^  label170;
private: System::Windows::Forms::Label^  label171;
private: System::Windows::Forms::Label^  label172;
private: System::Windows::Forms::Label^  label173;
private: System::Windows::Forms::Label^  label174;
private: System::Windows::Forms::Label^  label175;
private: System::Windows::Forms::Label^  label176;
private: System::Windows::Forms::Label^  label177;
private: System::Windows::Forms::Label^  label178;
private: System::Windows::Forms::Label^  label179;
private: System::Windows::Forms::Label^  label156;
private: System::Windows::Forms::Label^  label157;
private: System::Windows::Forms::Label^  label158;
private: System::Windows::Forms::Label^  label159;
private: System::Windows::Forms::Label^  label160;
private: System::Windows::Forms::Label^  label161;
private: System::Windows::Forms::Label^  label162;
private: System::Windows::Forms::Label^  label163;
private: System::Windows::Forms::Label^  label152;
private: System::Windows::Forms::Label^  label153;
private: System::Windows::Forms::Label^  label154;
private: System::Windows::Forms::Label^  label155;
private: System::Windows::Forms::Label^  label150;
private: System::Windows::Forms::Label^  label151;
private: System::Windows::Forms::Label^  label134;
private: System::Windows::Forms::Label^  label260;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox36;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox37;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox38;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox33;
private: System::Windows::Forms::Label^  label259;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox34;
private: System::Windows::Forms::Label^  label256;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox35;
private: System::Windows::Forms::Label^  label257;
private: System::Windows::Forms::Label^  label258;
private: System::Windows::Forms::Label^  label255;
private: System::Windows::Forms::Label^  label252;
private: System::Windows::Forms::Label^  label253;
private: System::Windows::Forms::Label^  label254;
private: System::Windows::Forms::Label^  label251;
private: System::Windows::Forms::Label^  label250;
private: System::Windows::Forms::Label^  label249;
private: System::Windows::Forms::Label^  label248;
private: System::Windows::Forms::Label^  label247;
private: System::Windows::Forms::Label^  label246;
private: System::Windows::Forms::Label^  label245;
private: System::Windows::Forms::Label^  label244;



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
			this->groupBoxUmiejetnosc = (gcnew System::Windows::Forms::GroupBox());
			this->labelAlechemiaPlus = (gcnew System::Windows::Forms::Label());
			this->label135 = (gcnew System::Windows::Forms::Label());
			this->label136 = (gcnew System::Windows::Forms::Label());
			this->label137 = (gcnew System::Windows::Forms::Label());
			this->label138 = (gcnew System::Windows::Forms::Label());
			this->label139 = (gcnew System::Windows::Forms::Label());
			this->label140 = (gcnew System::Windows::Forms::Label());
			this->label141 = (gcnew System::Windows::Forms::Label());
			this->label142 = (gcnew System::Windows::Forms::Label());
			this->label143 = (gcnew System::Windows::Forms::Label());
			this->label144 = (gcnew System::Windows::Forms::Label());
			this->label145 = (gcnew System::Windows::Forms::Label());
			this->label146 = (gcnew System::Windows::Forms::Label());
			this->label147 = (gcnew System::Windows::Forms::Label());
			this->label148 = (gcnew System::Windows::Forms::Label());
			this->label149 = (gcnew System::Windows::Forms::Label());
			this->label118 = (gcnew System::Windows::Forms::Label());
			this->label119 = (gcnew System::Windows::Forms::Label());
			this->label120 = (gcnew System::Windows::Forms::Label());
			this->label121 = (gcnew System::Windows::Forms::Label());
			this->label122 = (gcnew System::Windows::Forms::Label());
			this->label123 = (gcnew System::Windows::Forms::Label());
			this->label124 = (gcnew System::Windows::Forms::Label());
			this->label125 = (gcnew System::Windows::Forms::Label());
			this->label126 = (gcnew System::Windows::Forms::Label());
			this->label127 = (gcnew System::Windows::Forms::Label());
			this->label128 = (gcnew System::Windows::Forms::Label());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->label130 = (gcnew System::Windows::Forms::Label());
			this->label131 = (gcnew System::Windows::Forms::Label());
			this->label132 = (gcnew System::Windows::Forms::Label());
			this->label133 = (gcnew System::Windows::Forms::Label());
			this->labelWartoscAlchemia = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->label107 = (gcnew System::Windows::Forms::Label());
			this->label108 = (gcnew System::Windows::Forms::Label());
			this->label109 = (gcnew System::Windows::Forms::Label());
			this->label110 = (gcnew System::Windows::Forms::Label());
			this->label111 = (gcnew System::Windows::Forms::Label());
			this->label112 = (gcnew System::Windows::Forms::Label());
			this->label113 = (gcnew System::Windows::Forms::Label());
			this->label114 = (gcnew System::Windows::Forms::Label());
			this->label115 = (gcnew System::Windows::Forms::Label());
			this->label116 = (gcnew System::Windows::Forms::Label());
			this->label117 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox19 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox20 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox21 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox22 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox23 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox24 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox25 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox26 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox27 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox28 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox29 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox30 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox31 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox32 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxAlchemia = (gcnew System::Windows::Forms::CheckBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->buttonUmiejetnoscUaktualnij = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label134 = (gcnew System::Windows::Forms::Label());
			this->label150 = (gcnew System::Windows::Forms::Label());
			this->label151 = (gcnew System::Windows::Forms::Label());
			this->label152 = (gcnew System::Windows::Forms::Label());
			this->label153 = (gcnew System::Windows::Forms::Label());
			this->label154 = (gcnew System::Windows::Forms::Label());
			this->label155 = (gcnew System::Windows::Forms::Label());
			this->label156 = (gcnew System::Windows::Forms::Label());
			this->label157 = (gcnew System::Windows::Forms::Label());
			this->label158 = (gcnew System::Windows::Forms::Label());
			this->label159 = (gcnew System::Windows::Forms::Label());
			this->label160 = (gcnew System::Windows::Forms::Label());
			this->label161 = (gcnew System::Windows::Forms::Label());
			this->label162 = (gcnew System::Windows::Forms::Label());
			this->label163 = (gcnew System::Windows::Forms::Label());
			this->label164 = (gcnew System::Windows::Forms::Label());
			this->label165 = (gcnew System::Windows::Forms::Label());
			this->label166 = (gcnew System::Windows::Forms::Label());
			this->label167 = (gcnew System::Windows::Forms::Label());
			this->label168 = (gcnew System::Windows::Forms::Label());
			this->label169 = (gcnew System::Windows::Forms::Label());
			this->label170 = (gcnew System::Windows::Forms::Label());
			this->label171 = (gcnew System::Windows::Forms::Label());
			this->label172 = (gcnew System::Windows::Forms::Label());
			this->label173 = (gcnew System::Windows::Forms::Label());
			this->label174 = (gcnew System::Windows::Forms::Label());
			this->label175 = (gcnew System::Windows::Forms::Label());
			this->label176 = (gcnew System::Windows::Forms::Label());
			this->label177 = (gcnew System::Windows::Forms::Label());
			this->label178 = (gcnew System::Windows::Forms::Label());
			this->label179 = (gcnew System::Windows::Forms::Label());
			this->label180 = (gcnew System::Windows::Forms::Label());
			this->label181 = (gcnew System::Windows::Forms::Label());
			this->label182 = (gcnew System::Windows::Forms::Label());
			this->label183 = (gcnew System::Windows::Forms::Label());
			this->label184 = (gcnew System::Windows::Forms::Label());
			this->label185 = (gcnew System::Windows::Forms::Label());
			this->label186 = (gcnew System::Windows::Forms::Label());
			this->label187 = (gcnew System::Windows::Forms::Label());
			this->label188 = (gcnew System::Windows::Forms::Label());
			this->label189 = (gcnew System::Windows::Forms::Label());
			this->label190 = (gcnew System::Windows::Forms::Label());
			this->label191 = (gcnew System::Windows::Forms::Label());
			this->label192 = (gcnew System::Windows::Forms::Label());
			this->label193 = (gcnew System::Windows::Forms::Label());
			this->label194 = (gcnew System::Windows::Forms::Label());
			this->label195 = (gcnew System::Windows::Forms::Label());
			this->label196 = (gcnew System::Windows::Forms::Label());
			this->label197 = (gcnew System::Windows::Forms::Label());
			this->label198 = (gcnew System::Windows::Forms::Label());
			this->label199 = (gcnew System::Windows::Forms::Label());
			this->label200 = (gcnew System::Windows::Forms::Label());
			this->label201 = (gcnew System::Windows::Forms::Label());
			this->label202 = (gcnew System::Windows::Forms::Label());
			this->label203 = (gcnew System::Windows::Forms::Label());
			this->label204 = (gcnew System::Windows::Forms::Label());
			this->label205 = (gcnew System::Windows::Forms::Label());
			this->label206 = (gcnew System::Windows::Forms::Label());
			this->label207 = (gcnew System::Windows::Forms::Label());
			this->label208 = (gcnew System::Windows::Forms::Label());
			this->label209 = (gcnew System::Windows::Forms::Label());
			this->label210 = (gcnew System::Windows::Forms::Label());
			this->label211 = (gcnew System::Windows::Forms::Label());
			this->label212 = (gcnew System::Windows::Forms::Label());
			this->label213 = (gcnew System::Windows::Forms::Label());
			this->label214 = (gcnew System::Windows::Forms::Label());
			this->label215 = (gcnew System::Windows::Forms::Label());
			this->label216 = (gcnew System::Windows::Forms::Label());
			this->label217 = (gcnew System::Windows::Forms::Label());
			this->label218 = (gcnew System::Windows::Forms::Label());
			this->label219 = (gcnew System::Windows::Forms::Label());
			this->label220 = (gcnew System::Windows::Forms::Label());
			this->label221 = (gcnew System::Windows::Forms::Label());
			this->label222 = (gcnew System::Windows::Forms::Label());
			this->label223 = (gcnew System::Windows::Forms::Label());
			this->label224 = (gcnew System::Windows::Forms::Label());
			this->label225 = (gcnew System::Windows::Forms::Label());
			this->label226 = (gcnew System::Windows::Forms::Label());
			this->label227 = (gcnew System::Windows::Forms::Label());
			this->label228 = (gcnew System::Windows::Forms::Label());
			this->label229 = (gcnew System::Windows::Forms::Label());
			this->label230 = (gcnew System::Windows::Forms::Label());
			this->label231 = (gcnew System::Windows::Forms::Label());
			this->label232 = (gcnew System::Windows::Forms::Label());
			this->label233 = (gcnew System::Windows::Forms::Label());
			this->label234 = (gcnew System::Windows::Forms::Label());
			this->label235 = (gcnew System::Windows::Forms::Label());
			this->label236 = (gcnew System::Windows::Forms::Label());
			this->label237 = (gcnew System::Windows::Forms::Label());
			this->label238 = (gcnew System::Windows::Forms::Label());
			this->label239 = (gcnew System::Windows::Forms::Label());
			this->label240 = (gcnew System::Windows::Forms::Label());
			this->label241 = (gcnew System::Windows::Forms::Label());
			this->label242 = (gcnew System::Windows::Forms::Label());
			this->label243 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox5 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox6 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox7 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox8 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox9 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox10 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox11 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox12 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox13 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox14 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox15 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox16 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox17 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox18 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox19 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox20 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox21 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox22 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox23 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox24 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox25 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox26 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox27 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox28 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox29 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox30 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox31 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox32 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label244 = (gcnew System::Windows::Forms::Label());
			this->label245 = (gcnew System::Windows::Forms::Label());
			this->label246 = (gcnew System::Windows::Forms::Label());
			this->label247 = (gcnew System::Windows::Forms::Label());
			this->label248 = (gcnew System::Windows::Forms::Label());
			this->label249 = (gcnew System::Windows::Forms::Label());
			this->label250 = (gcnew System::Windows::Forms::Label());
			this->label251 = (gcnew System::Windows::Forms::Label());
			this->label252 = (gcnew System::Windows::Forms::Label());
			this->label253 = (gcnew System::Windows::Forms::Label());
			this->label254 = (gcnew System::Windows::Forms::Label());
			this->label255 = (gcnew System::Windows::Forms::Label());
			this->label256 = (gcnew System::Windows::Forms::Label());
			this->label257 = (gcnew System::Windows::Forms::Label());
			this->label258 = (gcnew System::Windows::Forms::Label());
			this->label259 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox33 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox34 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox35 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox36 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox37 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox38 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label260 = (gcnew System::Windows::Forms::Label());
			this->Nazewnictwo->SuspendLayout();
			this->Atrybuty->SuspendLayout();
			this->hpNPancerz->SuspendLayout();
			this->groupBoxUmiejetnosc->SuspendLayout();
			this->groupBox3->SuspendLayout();
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
			this->hpNPancerz->Location = System::Drawing::Point(231, 120);
			this->hpNPancerz->Name = L"hpNPancerz";
			this->hpNPancerz->Size = System::Drawing::Size(389, 109);
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
			// groupBoxUmiejetnosc
			// 
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox17);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox18);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox19);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox20);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox21);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox22);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox23);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox24);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox25);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox26);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox27);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox28);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox29);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox30);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox31);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox32);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox9);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox10);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox11);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox12);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox13);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox14);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox15);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox16);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox5);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox6);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox7);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox8);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox3);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox4);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox2);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox1);
			this->groupBoxUmiejetnosc->Controls->Add(this->label236);
			this->groupBoxUmiejetnosc->Controls->Add(this->label237);
			this->groupBoxUmiejetnosc->Controls->Add(this->label238);
			this->groupBoxUmiejetnosc->Controls->Add(this->label239);
			this->groupBoxUmiejetnosc->Controls->Add(this->label240);
			this->groupBoxUmiejetnosc->Controls->Add(this->label241);
			this->groupBoxUmiejetnosc->Controls->Add(this->label242);
			this->groupBoxUmiejetnosc->Controls->Add(this->label243);
			this->groupBoxUmiejetnosc->Controls->Add(this->label224);
			this->groupBoxUmiejetnosc->Controls->Add(this->label225);
			this->groupBoxUmiejetnosc->Controls->Add(this->label226);
			this->groupBoxUmiejetnosc->Controls->Add(this->label227);
			this->groupBoxUmiejetnosc->Controls->Add(this->label228);
			this->groupBoxUmiejetnosc->Controls->Add(this->label229);
			this->groupBoxUmiejetnosc->Controls->Add(this->label230);
			this->groupBoxUmiejetnosc->Controls->Add(this->label231);
			this->groupBoxUmiejetnosc->Controls->Add(this->label232);
			this->groupBoxUmiejetnosc->Controls->Add(this->label233);
			this->groupBoxUmiejetnosc->Controls->Add(this->label234);
			this->groupBoxUmiejetnosc->Controls->Add(this->label235);
			this->groupBoxUmiejetnosc->Controls->Add(this->label212);
			this->groupBoxUmiejetnosc->Controls->Add(this->label213);
			this->groupBoxUmiejetnosc->Controls->Add(this->label214);
			this->groupBoxUmiejetnosc->Controls->Add(this->label215);
			this->groupBoxUmiejetnosc->Controls->Add(this->label216);
			this->groupBoxUmiejetnosc->Controls->Add(this->label217);
			this->groupBoxUmiejetnosc->Controls->Add(this->label218);
			this->groupBoxUmiejetnosc->Controls->Add(this->label219);
			this->groupBoxUmiejetnosc->Controls->Add(this->label220);
			this->groupBoxUmiejetnosc->Controls->Add(this->label221);
			this->groupBoxUmiejetnosc->Controls->Add(this->label222);
			this->groupBoxUmiejetnosc->Controls->Add(this->label223);
			this->groupBoxUmiejetnosc->Controls->Add(this->label196);
			this->groupBoxUmiejetnosc->Controls->Add(this->label197);
			this->groupBoxUmiejetnosc->Controls->Add(this->label198);
			this->groupBoxUmiejetnosc->Controls->Add(this->label199);
			this->groupBoxUmiejetnosc->Controls->Add(this->label200);
			this->groupBoxUmiejetnosc->Controls->Add(this->label201);
			this->groupBoxUmiejetnosc->Controls->Add(this->label202);
			this->groupBoxUmiejetnosc->Controls->Add(this->label203);
			this->groupBoxUmiejetnosc->Controls->Add(this->label204);
			this->groupBoxUmiejetnosc->Controls->Add(this->label205);
			this->groupBoxUmiejetnosc->Controls->Add(this->label206);
			this->groupBoxUmiejetnosc->Controls->Add(this->label207);
			this->groupBoxUmiejetnosc->Controls->Add(this->label208);
			this->groupBoxUmiejetnosc->Controls->Add(this->label209);
			this->groupBoxUmiejetnosc->Controls->Add(this->label210);
			this->groupBoxUmiejetnosc->Controls->Add(this->label211);
			this->groupBoxUmiejetnosc->Controls->Add(this->label188);
			this->groupBoxUmiejetnosc->Controls->Add(this->label189);
			this->groupBoxUmiejetnosc->Controls->Add(this->label190);
			this->groupBoxUmiejetnosc->Controls->Add(this->label191);
			this->groupBoxUmiejetnosc->Controls->Add(this->label192);
			this->groupBoxUmiejetnosc->Controls->Add(this->label193);
			this->groupBoxUmiejetnosc->Controls->Add(this->label194);
			this->groupBoxUmiejetnosc->Controls->Add(this->label195);
			this->groupBoxUmiejetnosc->Controls->Add(this->label184);
			this->groupBoxUmiejetnosc->Controls->Add(this->label185);
			this->groupBoxUmiejetnosc->Controls->Add(this->label186);
			this->groupBoxUmiejetnosc->Controls->Add(this->label187);
			this->groupBoxUmiejetnosc->Controls->Add(this->label182);
			this->groupBoxUmiejetnosc->Controls->Add(this->label183);
			this->groupBoxUmiejetnosc->Controls->Add(this->label181);
			this->groupBoxUmiejetnosc->Controls->Add(this->label180);
			this->groupBoxUmiejetnosc->Controls->Add(this->label164);
			this->groupBoxUmiejetnosc->Controls->Add(this->label165);
			this->groupBoxUmiejetnosc->Controls->Add(this->label166);
			this->groupBoxUmiejetnosc->Controls->Add(this->label167);
			this->groupBoxUmiejetnosc->Controls->Add(this->label168);
			this->groupBoxUmiejetnosc->Controls->Add(this->label169);
			this->groupBoxUmiejetnosc->Controls->Add(this->label170);
			this->groupBoxUmiejetnosc->Controls->Add(this->label171);
			this->groupBoxUmiejetnosc->Controls->Add(this->label172);
			this->groupBoxUmiejetnosc->Controls->Add(this->label173);
			this->groupBoxUmiejetnosc->Controls->Add(this->label174);
			this->groupBoxUmiejetnosc->Controls->Add(this->label175);
			this->groupBoxUmiejetnosc->Controls->Add(this->label176);
			this->groupBoxUmiejetnosc->Controls->Add(this->label177);
			this->groupBoxUmiejetnosc->Controls->Add(this->label178);
			this->groupBoxUmiejetnosc->Controls->Add(this->label179);
			this->groupBoxUmiejetnosc->Controls->Add(this->label156);
			this->groupBoxUmiejetnosc->Controls->Add(this->label157);
			this->groupBoxUmiejetnosc->Controls->Add(this->label158);
			this->groupBoxUmiejetnosc->Controls->Add(this->label159);
			this->groupBoxUmiejetnosc->Controls->Add(this->label160);
			this->groupBoxUmiejetnosc->Controls->Add(this->label161);
			this->groupBoxUmiejetnosc->Controls->Add(this->label162);
			this->groupBoxUmiejetnosc->Controls->Add(this->label163);
			this->groupBoxUmiejetnosc->Controls->Add(this->label152);
			this->groupBoxUmiejetnosc->Controls->Add(this->label153);
			this->groupBoxUmiejetnosc->Controls->Add(this->label154);
			this->groupBoxUmiejetnosc->Controls->Add(this->label155);
			this->groupBoxUmiejetnosc->Controls->Add(this->label150);
			this->groupBoxUmiejetnosc->Controls->Add(this->label151);
			this->groupBoxUmiejetnosc->Controls->Add(this->label134);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelAlechemiaPlus);
			this->groupBoxUmiejetnosc->Controls->Add(this->label135);
			this->groupBoxUmiejetnosc->Controls->Add(this->label136);
			this->groupBoxUmiejetnosc->Controls->Add(this->label137);
			this->groupBoxUmiejetnosc->Controls->Add(this->label138);
			this->groupBoxUmiejetnosc->Controls->Add(this->label139);
			this->groupBoxUmiejetnosc->Controls->Add(this->label140);
			this->groupBoxUmiejetnosc->Controls->Add(this->label141);
			this->groupBoxUmiejetnosc->Controls->Add(this->label142);
			this->groupBoxUmiejetnosc->Controls->Add(this->label143);
			this->groupBoxUmiejetnosc->Controls->Add(this->label144);
			this->groupBoxUmiejetnosc->Controls->Add(this->label145);
			this->groupBoxUmiejetnosc->Controls->Add(this->label146);
			this->groupBoxUmiejetnosc->Controls->Add(this->label147);
			this->groupBoxUmiejetnosc->Controls->Add(this->label148);
			this->groupBoxUmiejetnosc->Controls->Add(this->label149);
			this->groupBoxUmiejetnosc->Controls->Add(this->label118);
			this->groupBoxUmiejetnosc->Controls->Add(this->label119);
			this->groupBoxUmiejetnosc->Controls->Add(this->label120);
			this->groupBoxUmiejetnosc->Controls->Add(this->label121);
			this->groupBoxUmiejetnosc->Controls->Add(this->label122);
			this->groupBoxUmiejetnosc->Controls->Add(this->label123);
			this->groupBoxUmiejetnosc->Controls->Add(this->label124);
			this->groupBoxUmiejetnosc->Controls->Add(this->label125);
			this->groupBoxUmiejetnosc->Controls->Add(this->label126);
			this->groupBoxUmiejetnosc->Controls->Add(this->label127);
			this->groupBoxUmiejetnosc->Controls->Add(this->label128);
			this->groupBoxUmiejetnosc->Controls->Add(this->label129);
			this->groupBoxUmiejetnosc->Controls->Add(this->label130);
			this->groupBoxUmiejetnosc->Controls->Add(this->label131);
			this->groupBoxUmiejetnosc->Controls->Add(this->label132);
			this->groupBoxUmiejetnosc->Controls->Add(this->label133);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelWartoscAlchemia);
			this->groupBoxUmiejetnosc->Controls->Add(this->label86);
			this->groupBoxUmiejetnosc->Controls->Add(this->label87);
			this->groupBoxUmiejetnosc->Controls->Add(this->label88);
			this->groupBoxUmiejetnosc->Controls->Add(this->label89);
			this->groupBoxUmiejetnosc->Controls->Add(this->label90);
			this->groupBoxUmiejetnosc->Controls->Add(this->label91);
			this->groupBoxUmiejetnosc->Controls->Add(this->label92);
			this->groupBoxUmiejetnosc->Controls->Add(this->label93);
			this->groupBoxUmiejetnosc->Controls->Add(this->label94);
			this->groupBoxUmiejetnosc->Controls->Add(this->label95);
			this->groupBoxUmiejetnosc->Controls->Add(this->label96);
			this->groupBoxUmiejetnosc->Controls->Add(this->label97);
			this->groupBoxUmiejetnosc->Controls->Add(this->label98);
			this->groupBoxUmiejetnosc->Controls->Add(this->label99);
			this->groupBoxUmiejetnosc->Controls->Add(this->label100);
			this->groupBoxUmiejetnosc->Controls->Add(this->label101);
			this->groupBoxUmiejetnosc->Controls->Add(this->label102);
			this->groupBoxUmiejetnosc->Controls->Add(this->label103);
			this->groupBoxUmiejetnosc->Controls->Add(this->label104);
			this->groupBoxUmiejetnosc->Controls->Add(this->label105);
			this->groupBoxUmiejetnosc->Controls->Add(this->label106);
			this->groupBoxUmiejetnosc->Controls->Add(this->label107);
			this->groupBoxUmiejetnosc->Controls->Add(this->label108);
			this->groupBoxUmiejetnosc->Controls->Add(this->label109);
			this->groupBoxUmiejetnosc->Controls->Add(this->label110);
			this->groupBoxUmiejetnosc->Controls->Add(this->label111);
			this->groupBoxUmiejetnosc->Controls->Add(this->label112);
			this->groupBoxUmiejetnosc->Controls->Add(this->label113);
			this->groupBoxUmiejetnosc->Controls->Add(this->label114);
			this->groupBoxUmiejetnosc->Controls->Add(this->label115);
			this->groupBoxUmiejetnosc->Controls->Add(this->label116);
			this->groupBoxUmiejetnosc->Controls->Add(this->label117);
			this->groupBoxUmiejetnosc->Controls->Add(this->label70);
			this->groupBoxUmiejetnosc->Controls->Add(this->label71);
			this->groupBoxUmiejetnosc->Controls->Add(this->label72);
			this->groupBoxUmiejetnosc->Controls->Add(this->label73);
			this->groupBoxUmiejetnosc->Controls->Add(this->label74);
			this->groupBoxUmiejetnosc->Controls->Add(this->label75);
			this->groupBoxUmiejetnosc->Controls->Add(this->label76);
			this->groupBoxUmiejetnosc->Controls->Add(this->label77);
			this->groupBoxUmiejetnosc->Controls->Add(this->label78);
			this->groupBoxUmiejetnosc->Controls->Add(this->label79);
			this->groupBoxUmiejetnosc->Controls->Add(this->label80);
			this->groupBoxUmiejetnosc->Controls->Add(this->label81);
			this->groupBoxUmiejetnosc->Controls->Add(this->label82);
			this->groupBoxUmiejetnosc->Controls->Add(this->label83);
			this->groupBoxUmiejetnosc->Controls->Add(this->label84);
			this->groupBoxUmiejetnosc->Controls->Add(this->label85);
			this->groupBoxUmiejetnosc->Controls->Add(this->label62);
			this->groupBoxUmiejetnosc->Controls->Add(this->label63);
			this->groupBoxUmiejetnosc->Controls->Add(this->label64);
			this->groupBoxUmiejetnosc->Controls->Add(this->label65);
			this->groupBoxUmiejetnosc->Controls->Add(this->label66);
			this->groupBoxUmiejetnosc->Controls->Add(this->label67);
			this->groupBoxUmiejetnosc->Controls->Add(this->label68);
			this->groupBoxUmiejetnosc->Controls->Add(this->label69);
			this->groupBoxUmiejetnosc->Controls->Add(this->label58);
			this->groupBoxUmiejetnosc->Controls->Add(this->label59);
			this->groupBoxUmiejetnosc->Controls->Add(this->label60);
			this->groupBoxUmiejetnosc->Controls->Add(this->label61);
			this->groupBoxUmiejetnosc->Controls->Add(this->label56);
			this->groupBoxUmiejetnosc->Controls->Add(this->label57);
			this->groupBoxUmiejetnosc->Controls->Add(this->label55);
			this->groupBoxUmiejetnosc->Controls->Add(this->label54);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox17);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox18);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox19);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox20);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox21);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox22);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox23);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox24);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox25);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox26);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox27);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox28);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox29);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox30);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox31);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox32);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox9);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox10);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox11);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox12);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox13);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox14);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox15);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox16);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox5);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox6);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox7);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox8);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox3);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox4);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBox2);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxAlchemia);
			this->groupBoxUmiejetnosc->Controls->Add(this->label38);
			this->groupBoxUmiejetnosc->Controls->Add(this->label39);
			this->groupBoxUmiejetnosc->Controls->Add(this->label40);
			this->groupBoxUmiejetnosc->Controls->Add(this->label41);
			this->groupBoxUmiejetnosc->Controls->Add(this->label42);
			this->groupBoxUmiejetnosc->Controls->Add(this->label43);
			this->groupBoxUmiejetnosc->Controls->Add(this->label44);
			this->groupBoxUmiejetnosc->Controls->Add(this->label45);
			this->groupBoxUmiejetnosc->Controls->Add(this->label46);
			this->groupBoxUmiejetnosc->Controls->Add(this->label47);
			this->groupBoxUmiejetnosc->Controls->Add(this->label48);
			this->groupBoxUmiejetnosc->Controls->Add(this->label49);
			this->groupBoxUmiejetnosc->Controls->Add(this->label50);
			this->groupBoxUmiejetnosc->Controls->Add(this->label51);
			this->groupBoxUmiejetnosc->Controls->Add(this->label52);
			this->groupBoxUmiejetnosc->Controls->Add(this->label53);
			this->groupBoxUmiejetnosc->Controls->Add(this->label30);
			this->groupBoxUmiejetnosc->Controls->Add(this->label31);
			this->groupBoxUmiejetnosc->Controls->Add(this->label32);
			this->groupBoxUmiejetnosc->Controls->Add(this->label33);
			this->groupBoxUmiejetnosc->Controls->Add(this->label34);
			this->groupBoxUmiejetnosc->Controls->Add(this->label35);
			this->groupBoxUmiejetnosc->Controls->Add(this->label36);
			this->groupBoxUmiejetnosc->Controls->Add(this->label37);
			this->groupBoxUmiejetnosc->Controls->Add(this->label26);
			this->groupBoxUmiejetnosc->Controls->Add(this->label27);
			this->groupBoxUmiejetnosc->Controls->Add(this->label28);
			this->groupBoxUmiejetnosc->Controls->Add(this->label29);
			this->groupBoxUmiejetnosc->Controls->Add(this->label25);
			this->groupBoxUmiejetnosc->Controls->Add(this->label24);
			this->groupBoxUmiejetnosc->Controls->Add(this->label23);
			this->groupBoxUmiejetnosc->Controls->Add(this->label22);
			this->groupBoxUmiejetnosc->Controls->Add(this->buttonUmiejetnoscUaktualnij);
			this->groupBoxUmiejetnosc->Controls->Add(this->label21);
			this->groupBoxUmiejetnosc->Controls->Add(this->label20);
			this->groupBoxUmiejetnosc->Controls->Add(this->label19);
			this->groupBoxUmiejetnosc->Controls->Add(this->label18);
			this->groupBoxUmiejetnosc->Controls->Add(this->label17);
			this->groupBoxUmiejetnosc->Controls->Add(this->label16);
			this->groupBoxUmiejetnosc->Controls->Add(this->label14);
			this->groupBoxUmiejetnosc->Controls->Add(this->label13);
			this->groupBoxUmiejetnosc->Controls->Add(this->label12);
			this->groupBoxUmiejetnosc->Controls->Add(this->label10);
			this->groupBoxUmiejetnosc->Controls->Add(this->label9);
			this->groupBoxUmiejetnosc->Location = System::Drawing::Point(626, 14);
			this->groupBoxUmiejetnosc->Name = L"groupBoxUmiejetnosc";
			this->groupBoxUmiejetnosc->Size = System::Drawing::Size(462, 726);
			this->groupBoxUmiejetnosc->TabIndex = 3;
			this->groupBoxUmiejetnosc->TabStop = false;
			this->groupBoxUmiejetnosc->Text = L"Umiejêtnoœci";
			this->groupBoxUmiejetnosc->Enter += gcnew System::EventHandler(this, &dodajKarteFroms::groupBoxUmiejetnosc_Enter);
			// 
			// labelAlechemiaPlus
			// 
			this->labelAlechemiaPlus->AutoSize = true;
			this->labelAlechemiaPlus->Location = System::Drawing::Point(255, 70);
			this->labelAlechemiaPlus->Name = L"labelAlechemiaPlus";
			this->labelAlechemiaPlus->Size = System::Drawing::Size(13, 13);
			this->labelAlechemiaPlus->TabIndex = 174;
			this->labelAlechemiaPlus->Text = L"+";
			this->labelAlechemiaPlus->Click += gcnew System::EventHandler(this, &dodajKarteFroms::labelAlechemiaPlus_Click);
			// 
			// label135
			// 
			this->label135->AutoSize = true;
			this->label135->Location = System::Drawing::Point(277, 690);
			this->label135->Name = L"label135";
			this->label135->Size = System::Drawing::Size(13, 13);
			this->label135->TabIndex = 173;
			this->label135->Text = L"0";
			// 
			// label136
			// 
			this->label136->AutoSize = true;
			this->label136->Location = System::Drawing::Point(277, 670);
			this->label136->Name = L"label136";
			this->label136->Size = System::Drawing::Size(13, 13);
			this->label136->TabIndex = 172;
			this->label136->Text = L"0";
			// 
			// label137
			// 
			this->label137->AutoSize = true;
			this->label137->Location = System::Drawing::Point(277, 650);
			this->label137->Name = L"label137";
			this->label137->Size = System::Drawing::Size(13, 13);
			this->label137->TabIndex = 171;
			this->label137->Text = L"0";
			// 
			// label138
			// 
			this->label138->AutoSize = true;
			this->label138->Location = System::Drawing::Point(277, 630);
			this->label138->Name = L"label138";
			this->label138->Size = System::Drawing::Size(13, 13);
			this->label138->TabIndex = 170;
			this->label138->Text = L"0";
			// 
			// label139
			// 
			this->label139->AutoSize = true;
			this->label139->Location = System::Drawing::Point(277, 610);
			this->label139->Name = L"label139";
			this->label139->Size = System::Drawing::Size(13, 13);
			this->label139->TabIndex = 169;
			this->label139->Text = L"0";
			// 
			// label140
			// 
			this->label140->AutoSize = true;
			this->label140->Location = System::Drawing::Point(277, 590);
			this->label140->Name = L"label140";
			this->label140->Size = System::Drawing::Size(13, 13);
			this->label140->TabIndex = 168;
			this->label140->Text = L"0";
			// 
			// label141
			// 
			this->label141->AutoSize = true;
			this->label141->Location = System::Drawing::Point(277, 570);
			this->label141->Name = L"label141";
			this->label141->Size = System::Drawing::Size(13, 13);
			this->label141->TabIndex = 167;
			this->label141->Text = L"0";
			// 
			// label142
			// 
			this->label142->AutoSize = true;
			this->label142->Location = System::Drawing::Point(277, 550);
			this->label142->Name = L"label142";
			this->label142->Size = System::Drawing::Size(13, 13);
			this->label142->TabIndex = 166;
			this->label142->Text = L"0";
			// 
			// label143
			// 
			this->label143->AutoSize = true;
			this->label143->Location = System::Drawing::Point(277, 530);
			this->label143->Name = L"label143";
			this->label143->Size = System::Drawing::Size(13, 13);
			this->label143->TabIndex = 165;
			this->label143->Text = L"0";
			// 
			// label144
			// 
			this->label144->AutoSize = true;
			this->label144->Location = System::Drawing::Point(277, 510);
			this->label144->Name = L"label144";
			this->label144->Size = System::Drawing::Size(13, 13);
			this->label144->TabIndex = 164;
			this->label144->Text = L"0";
			// 
			// label145
			// 
			this->label145->AutoSize = true;
			this->label145->Location = System::Drawing::Point(277, 490);
			this->label145->Name = L"label145";
			this->label145->Size = System::Drawing::Size(13, 13);
			this->label145->TabIndex = 163;
			this->label145->Text = L"0";
			// 
			// label146
			// 
			this->label146->AutoSize = true;
			this->label146->Location = System::Drawing::Point(277, 470);
			this->label146->Name = L"label146";
			this->label146->Size = System::Drawing::Size(13, 13);
			this->label146->TabIndex = 162;
			this->label146->Text = L"0";
			// 
			// label147
			// 
			this->label147->AutoSize = true;
			this->label147->Location = System::Drawing::Point(277, 450);
			this->label147->Name = L"label147";
			this->label147->Size = System::Drawing::Size(13, 13);
			this->label147->TabIndex = 161;
			this->label147->Text = L"0";
			// 
			// label148
			// 
			this->label148->AutoSize = true;
			this->label148->Location = System::Drawing::Point(277, 430);
			this->label148->Name = L"label148";
			this->label148->Size = System::Drawing::Size(13, 13);
			this->label148->TabIndex = 160;
			this->label148->Text = L"0";
			// 
			// label149
			// 
			this->label149->AutoSize = true;
			this->label149->Location = System::Drawing::Point(277, 410);
			this->label149->Name = L"label149";
			this->label149->Size = System::Drawing::Size(13, 13);
			this->label149->TabIndex = 159;
			this->label149->Text = L"0";
			// 
			// label118
			// 
			this->label118->AutoSize = true;
			this->label118->Location = System::Drawing::Point(277, 390);
			this->label118->Name = L"label118";
			this->label118->Size = System::Drawing::Size(13, 13);
			this->label118->TabIndex = 156;
			this->label118->Text = L"0";
			// 
			// label119
			// 
			this->label119->AutoSize = true;
			this->label119->Location = System::Drawing::Point(277, 370);
			this->label119->Name = L"label119";
			this->label119->Size = System::Drawing::Size(13, 13);
			this->label119->TabIndex = 155;
			this->label119->Text = L"0";
			// 
			// label120
			// 
			this->label120->AutoSize = true;
			this->label120->Location = System::Drawing::Point(277, 350);
			this->label120->Name = L"label120";
			this->label120->Size = System::Drawing::Size(13, 13);
			this->label120->TabIndex = 154;
			this->label120->Text = L"0";
			// 
			// label121
			// 
			this->label121->AutoSize = true;
			this->label121->Location = System::Drawing::Point(277, 330);
			this->label121->Name = L"label121";
			this->label121->Size = System::Drawing::Size(13, 13);
			this->label121->TabIndex = 153;
			this->label121->Text = L"0";
			// 
			// label122
			// 
			this->label122->AutoSize = true;
			this->label122->Location = System::Drawing::Point(277, 310);
			this->label122->Name = L"label122";
			this->label122->Size = System::Drawing::Size(13, 13);
			this->label122->TabIndex = 152;
			this->label122->Text = L"0";
			// 
			// label123
			// 
			this->label123->AutoSize = true;
			this->label123->Location = System::Drawing::Point(277, 290);
			this->label123->Name = L"label123";
			this->label123->Size = System::Drawing::Size(13, 13);
			this->label123->TabIndex = 151;
			this->label123->Text = L"0";
			// 
			// label124
			// 
			this->label124->AutoSize = true;
			this->label124->Location = System::Drawing::Point(277, 270);
			this->label124->Name = L"label124";
			this->label124->Size = System::Drawing::Size(13, 13);
			this->label124->TabIndex = 150;
			this->label124->Text = L"0";
			// 
			// label125
			// 
			this->label125->AutoSize = true;
			this->label125->Location = System::Drawing::Point(277, 250);
			this->label125->Name = L"label125";
			this->label125->Size = System::Drawing::Size(13, 13);
			this->label125->TabIndex = 149;
			this->label125->Text = L"0";
			// 
			// label126
			// 
			this->label126->AutoSize = true;
			this->label126->Location = System::Drawing::Point(277, 230);
			this->label126->Name = L"label126";
			this->label126->Size = System::Drawing::Size(13, 13);
			this->label126->TabIndex = 148;
			this->label126->Text = L"0";
			// 
			// label127
			// 
			this->label127->AutoSize = true;
			this->label127->Location = System::Drawing::Point(277, 210);
			this->label127->Name = L"label127";
			this->label127->Size = System::Drawing::Size(13, 13);
			this->label127->TabIndex = 147;
			this->label127->Text = L"0";
			// 
			// label128
			// 
			this->label128->AutoSize = true;
			this->label128->Location = System::Drawing::Point(277, 190);
			this->label128->Name = L"label128";
			this->label128->Size = System::Drawing::Size(13, 13);
			this->label128->TabIndex = 146;
			this->label128->Text = L"0";
			// 
			// label129
			// 
			this->label129->AutoSize = true;
			this->label129->Location = System::Drawing::Point(277, 170);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(13, 13);
			this->label129->TabIndex = 145;
			this->label129->Text = L"0";
			// 
			// label130
			// 
			this->label130->AutoSize = true;
			this->label130->Location = System::Drawing::Point(277, 150);
			this->label130->Name = L"label130";
			this->label130->Size = System::Drawing::Size(13, 13);
			this->label130->TabIndex = 144;
			this->label130->Text = L"0";
			// 
			// label131
			// 
			this->label131->AutoSize = true;
			this->label131->Location = System::Drawing::Point(277, 130);
			this->label131->Name = L"label131";
			this->label131->Size = System::Drawing::Size(13, 13);
			this->label131->TabIndex = 143;
			this->label131->Text = L"0";
			// 
			// label132
			// 
			this->label132->AutoSize = true;
			this->label132->Location = System::Drawing::Point(277, 110);
			this->label132->Name = L"label132";
			this->label132->Size = System::Drawing::Size(13, 13);
			this->label132->TabIndex = 142;
			this->label132->Text = L"0";
			// 
			// label133
			// 
			this->label133->AutoSize = true;
			this->label133->Location = System::Drawing::Point(277, 90);
			this->label133->Name = L"label133";
			this->label133->Size = System::Drawing::Size(13, 13);
			this->label133->TabIndex = 141;
			this->label133->Text = L"0";
			// 
			// labelWartoscAlchemia
			// 
			this->labelWartoscAlchemia->AutoSize = true;
			this->labelWartoscAlchemia->Location = System::Drawing::Point(277, 70);
			this->labelWartoscAlchemia->Name = L"labelWartoscAlchemia";
			this->labelWartoscAlchemia->Size = System::Drawing::Size(13, 13);
			this->labelWartoscAlchemia->TabIndex = 140;
			this->labelWartoscAlchemia->Text = L"0";
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->Location = System::Drawing::Point(217, 690);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(13, 13);
			this->label86->TabIndex = 139;
			this->label86->Text = L"0";
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->Location = System::Drawing::Point(217, 670);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(13, 13);
			this->label87->TabIndex = 138;
			this->label87->Text = L"0";
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->Location = System::Drawing::Point(217, 650);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(13, 13);
			this->label88->TabIndex = 137;
			this->label88->Text = L"0";
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->Location = System::Drawing::Point(217, 630);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(13, 13);
			this->label89->TabIndex = 136;
			this->label89->Text = L"0";
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->Location = System::Drawing::Point(217, 610);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(13, 13);
			this->label90->TabIndex = 135;
			this->label90->Text = L"0";
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->Location = System::Drawing::Point(217, 590);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(13, 13);
			this->label91->TabIndex = 134;
			this->label91->Text = L"0";
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->Location = System::Drawing::Point(217, 570);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(13, 13);
			this->label92->TabIndex = 133;
			this->label92->Text = L"0";
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->Location = System::Drawing::Point(217, 550);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(13, 13);
			this->label93->TabIndex = 132;
			this->label93->Text = L"0";
			// 
			// label94
			// 
			this->label94->AutoSize = true;
			this->label94->Location = System::Drawing::Point(217, 530);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(13, 13);
			this->label94->TabIndex = 131;
			this->label94->Text = L"0";
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->Location = System::Drawing::Point(217, 510);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(13, 13);
			this->label95->TabIndex = 130;
			this->label95->Text = L"0";
			// 
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->Location = System::Drawing::Point(217, 490);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(13, 13);
			this->label96->TabIndex = 129;
			this->label96->Text = L"0";
			// 
			// label97
			// 
			this->label97->AutoSize = true;
			this->label97->Location = System::Drawing::Point(217, 470);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(13, 13);
			this->label97->TabIndex = 128;
			this->label97->Text = L"0";
			// 
			// label98
			// 
			this->label98->AutoSize = true;
			this->label98->Location = System::Drawing::Point(217, 450);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(13, 13);
			this->label98->TabIndex = 127;
			this->label98->Text = L"0";
			// 
			// label99
			// 
			this->label99->AutoSize = true;
			this->label99->Location = System::Drawing::Point(217, 430);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(13, 13);
			this->label99->TabIndex = 126;
			this->label99->Text = L"0";
			// 
			// label100
			// 
			this->label100->AutoSize = true;
			this->label100->Location = System::Drawing::Point(217, 410);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(13, 13);
			this->label100->TabIndex = 125;
			this->label100->Text = L"0";
			// 
			// label101
			// 
			this->label101->AutoSize = true;
			this->label101->Location = System::Drawing::Point(217, 390);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(13, 13);
			this->label101->TabIndex = 124;
			this->label101->Text = L"0";
			// 
			// label102
			// 
			this->label102->AutoSize = true;
			this->label102->Location = System::Drawing::Point(217, 370);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(13, 13);
			this->label102->TabIndex = 123;
			this->label102->Text = L"0";
			// 
			// label103
			// 
			this->label103->AutoSize = true;
			this->label103->Location = System::Drawing::Point(217, 350);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(13, 13);
			this->label103->TabIndex = 122;
			this->label103->Text = L"0";
			// 
			// label104
			// 
			this->label104->AutoSize = true;
			this->label104->Location = System::Drawing::Point(217, 330);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(13, 13);
			this->label104->TabIndex = 121;
			this->label104->Text = L"0";
			// 
			// label105
			// 
			this->label105->AutoSize = true;
			this->label105->Location = System::Drawing::Point(217, 310);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(13, 13);
			this->label105->TabIndex = 120;
			this->label105->Text = L"0";
			// 
			// label106
			// 
			this->label106->AutoSize = true;
			this->label106->Location = System::Drawing::Point(217, 290);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(13, 13);
			this->label106->TabIndex = 119;
			this->label106->Text = L"0";
			// 
			// label107
			// 
			this->label107->AutoSize = true;
			this->label107->Location = System::Drawing::Point(217, 270);
			this->label107->Name = L"label107";
			this->label107->Size = System::Drawing::Size(13, 13);
			this->label107->TabIndex = 118;
			this->label107->Text = L"0";
			// 
			// label108
			// 
			this->label108->AutoSize = true;
			this->label108->Location = System::Drawing::Point(217, 250);
			this->label108->Name = L"label108";
			this->label108->Size = System::Drawing::Size(13, 13);
			this->label108->TabIndex = 117;
			this->label108->Text = L"0";
			// 
			// label109
			// 
			this->label109->AutoSize = true;
			this->label109->Location = System::Drawing::Point(217, 230);
			this->label109->Name = L"label109";
			this->label109->Size = System::Drawing::Size(13, 13);
			this->label109->TabIndex = 116;
			this->label109->Text = L"0";
			// 
			// label110
			// 
			this->label110->AutoSize = true;
			this->label110->Location = System::Drawing::Point(217, 210);
			this->label110->Name = L"label110";
			this->label110->Size = System::Drawing::Size(13, 13);
			this->label110->TabIndex = 115;
			this->label110->Text = L"0";
			// 
			// label111
			// 
			this->label111->AutoSize = true;
			this->label111->Location = System::Drawing::Point(217, 190);
			this->label111->Name = L"label111";
			this->label111->Size = System::Drawing::Size(13, 13);
			this->label111->TabIndex = 114;
			this->label111->Text = L"0";
			// 
			// label112
			// 
			this->label112->AutoSize = true;
			this->label112->Location = System::Drawing::Point(217, 170);
			this->label112->Name = L"label112";
			this->label112->Size = System::Drawing::Size(13, 13);
			this->label112->TabIndex = 113;
			this->label112->Text = L"0";
			// 
			// label113
			// 
			this->label113->AutoSize = true;
			this->label113->Location = System::Drawing::Point(217, 150);
			this->label113->Name = L"label113";
			this->label113->Size = System::Drawing::Size(13, 13);
			this->label113->TabIndex = 112;
			this->label113->Text = L"0";
			// 
			// label114
			// 
			this->label114->AutoSize = true;
			this->label114->Location = System::Drawing::Point(217, 130);
			this->label114->Name = L"label114";
			this->label114->Size = System::Drawing::Size(13, 13);
			this->label114->TabIndex = 111;
			this->label114->Text = L"0";
			// 
			// label115
			// 
			this->label115->AutoSize = true;
			this->label115->Location = System::Drawing::Point(217, 110);
			this->label115->Name = L"label115";
			this->label115->Size = System::Drawing::Size(13, 13);
			this->label115->TabIndex = 110;
			this->label115->Text = L"0";
			// 
			// label116
			// 
			this->label116->AutoSize = true;
			this->label116->Location = System::Drawing::Point(217, 90);
			this->label116->Name = L"label116";
			this->label116->Size = System::Drawing::Size(13, 13);
			this->label116->TabIndex = 109;
			this->label116->Text = L"0";
			// 
			// label117
			// 
			this->label117->AutoSize = true;
			this->label117->Location = System::Drawing::Point(217, 70);
			this->label117->Name = L"label117";
			this->label117->Size = System::Drawing::Size(13, 13);
			this->label117->TabIndex = 108;
			this->label117->Text = L"0";
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Location = System::Drawing::Point(170, 690);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(41, 13);
			this->label70->TabIndex = 107;
			this->label70->Text = L"label70";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Location = System::Drawing::Point(170, 670);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(41, 13);
			this->label71->TabIndex = 106;
			this->label71->Text = L"label71";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Location = System::Drawing::Point(170, 650);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(41, 13);
			this->label72->TabIndex = 105;
			this->label72->Text = L"label72";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Location = System::Drawing::Point(170, 630);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(41, 13);
			this->label73->TabIndex = 104;
			this->label73->Text = L"label73";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(170, 610);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(41, 13);
			this->label74->TabIndex = 103;
			this->label74->Text = L"label74";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Location = System::Drawing::Point(170, 590);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(41, 13);
			this->label75->TabIndex = 102;
			this->label75->Text = L"label75";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Location = System::Drawing::Point(170, 570);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(41, 13);
			this->label76->TabIndex = 101;
			this->label76->Text = L"label76";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Location = System::Drawing::Point(170, 550);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(41, 13);
			this->label77->TabIndex = 100;
			this->label77->Text = L"label77";
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Location = System::Drawing::Point(170, 530);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(41, 13);
			this->label78->TabIndex = 99;
			this->label78->Text = L"label78";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Location = System::Drawing::Point(170, 510);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(41, 13);
			this->label79->TabIndex = 98;
			this->label79->Text = L"label79";
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Location = System::Drawing::Point(170, 490);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(41, 13);
			this->label80->TabIndex = 97;
			this->label80->Text = L"label80";
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Location = System::Drawing::Point(170, 470);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(41, 13);
			this->label81->TabIndex = 96;
			this->label81->Text = L"label81";
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Location = System::Drawing::Point(170, 450);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(41, 13);
			this->label82->TabIndex = 95;
			this->label82->Text = L"label82";
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Location = System::Drawing::Point(170, 430);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(41, 13);
			this->label83->TabIndex = 94;
			this->label83->Text = L"label83";
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Location = System::Drawing::Point(170, 410);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(41, 13);
			this->label84->TabIndex = 93;
			this->label84->Text = L"label84";
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Location = System::Drawing::Point(170, 390);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(41, 13);
			this->label85->TabIndex = 92;
			this->label85->Text = L"label85";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(170, 370);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(41, 13);
			this->label62->TabIndex = 91;
			this->label62->Text = L"label62";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(170, 350);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(41, 13);
			this->label63->TabIndex = 90;
			this->label63->Text = L"label63";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(170, 330);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(41, 13);
			this->label64->TabIndex = 89;
			this->label64->Text = L"label64";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(170, 310);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(41, 13);
			this->label65->TabIndex = 88;
			this->label65->Text = L"label65";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(170, 290);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(41, 13);
			this->label66->TabIndex = 87;
			this->label66->Text = L"label66";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(170, 270);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(41, 13);
			this->label67->TabIndex = 86;
			this->label67->Text = L"label67";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Location = System::Drawing::Point(170, 250);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(41, 13);
			this->label68->TabIndex = 85;
			this->label68->Text = L"label68";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Location = System::Drawing::Point(170, 230);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(41, 13);
			this->label69->TabIndex = 84;
			this->label69->Text = L"label69";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(170, 210);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(41, 13);
			this->label58->TabIndex = 83;
			this->label58->Text = L"label58";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(170, 190);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(41, 13);
			this->label59->TabIndex = 82;
			this->label59->Text = L"label59";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(170, 170);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(41, 13);
			this->label60->TabIndex = 81;
			this->label60->Text = L"label60";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(170, 150);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(41, 13);
			this->label61->TabIndex = 80;
			this->label61->Text = L"label61";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(170, 130);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(41, 13);
			this->label56->TabIndex = 79;
			this->label56->Text = L"label56";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(170, 110);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(41, 13);
			this->label57->TabIndex = 78;
			this->label57->Text = L"label57";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(170, 90);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(41, 13);
			this->label55->TabIndex = 77;
			this->label55->Text = L"label55";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(170, 70);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(41, 13);
			this->label54->TabIndex = 76;
			this->label54->Text = L"label54";
			// 
			// checkBox17
			// 
			this->checkBox17->AutoSize = true;
			this->checkBox17->Location = System::Drawing::Point(30, 690);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(86, 17);
			this->checkBox17->TabIndex = 75;
			this->checkBox17->Text = L"checkBox17";
			this->checkBox17->UseVisualStyleBackColor = true;
			// 
			// checkBox18
			// 
			this->checkBox18->AutoSize = true;
			this->checkBox18->Location = System::Drawing::Point(30, 670);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(86, 17);
			this->checkBox18->TabIndex = 74;
			this->checkBox18->Text = L"checkBox18";
			this->checkBox18->UseVisualStyleBackColor = true;
			// 
			// checkBox19
			// 
			this->checkBox19->AutoSize = true;
			this->checkBox19->Location = System::Drawing::Point(30, 650);
			this->checkBox19->Name = L"checkBox19";
			this->checkBox19->Size = System::Drawing::Size(86, 17);
			this->checkBox19->TabIndex = 73;
			this->checkBox19->Text = L"checkBox19";
			this->checkBox19->UseVisualStyleBackColor = true;
			// 
			// checkBox20
			// 
			this->checkBox20->AutoSize = true;
			this->checkBox20->Location = System::Drawing::Point(30, 630);
			this->checkBox20->Name = L"checkBox20";
			this->checkBox20->Size = System::Drawing::Size(86, 17);
			this->checkBox20->TabIndex = 72;
			this->checkBox20->Text = L"checkBox20";
			this->checkBox20->UseVisualStyleBackColor = true;
			// 
			// checkBox21
			// 
			this->checkBox21->AutoSize = true;
			this->checkBox21->Location = System::Drawing::Point(30, 610);
			this->checkBox21->Name = L"checkBox21";
			this->checkBox21->Size = System::Drawing::Size(86, 17);
			this->checkBox21->TabIndex = 71;
			this->checkBox21->Text = L"checkBox21";
			this->checkBox21->UseVisualStyleBackColor = true;
			// 
			// checkBox22
			// 
			this->checkBox22->AutoSize = true;
			this->checkBox22->Location = System::Drawing::Point(30, 590);
			this->checkBox22->Name = L"checkBox22";
			this->checkBox22->Size = System::Drawing::Size(86, 17);
			this->checkBox22->TabIndex = 70;
			this->checkBox22->Text = L"checkBox22";
			this->checkBox22->UseVisualStyleBackColor = true;
			// 
			// checkBox23
			// 
			this->checkBox23->AutoSize = true;
			this->checkBox23->Location = System::Drawing::Point(30, 570);
			this->checkBox23->Name = L"checkBox23";
			this->checkBox23->Size = System::Drawing::Size(86, 17);
			this->checkBox23->TabIndex = 69;
			this->checkBox23->Text = L"checkBox23";
			this->checkBox23->UseVisualStyleBackColor = true;
			// 
			// checkBox24
			// 
			this->checkBox24->AutoSize = true;
			this->checkBox24->Location = System::Drawing::Point(30, 550);
			this->checkBox24->Name = L"checkBox24";
			this->checkBox24->Size = System::Drawing::Size(86, 17);
			this->checkBox24->TabIndex = 68;
			this->checkBox24->Text = L"checkBox24";
			this->checkBox24->UseVisualStyleBackColor = true;
			// 
			// checkBox25
			// 
			this->checkBox25->AutoSize = true;
			this->checkBox25->Location = System::Drawing::Point(30, 530);
			this->checkBox25->Name = L"checkBox25";
			this->checkBox25->Size = System::Drawing::Size(86, 17);
			this->checkBox25->TabIndex = 67;
			this->checkBox25->Text = L"checkBox25";
			this->checkBox25->UseVisualStyleBackColor = true;
			// 
			// checkBox26
			// 
			this->checkBox26->AutoSize = true;
			this->checkBox26->Location = System::Drawing::Point(30, 510);
			this->checkBox26->Name = L"checkBox26";
			this->checkBox26->Size = System::Drawing::Size(86, 17);
			this->checkBox26->TabIndex = 66;
			this->checkBox26->Text = L"checkBox26";
			this->checkBox26->UseVisualStyleBackColor = true;
			// 
			// checkBox27
			// 
			this->checkBox27->AutoSize = true;
			this->checkBox27->Location = System::Drawing::Point(30, 490);
			this->checkBox27->Name = L"checkBox27";
			this->checkBox27->Size = System::Drawing::Size(86, 17);
			this->checkBox27->TabIndex = 65;
			this->checkBox27->Text = L"checkBox27";
			this->checkBox27->UseVisualStyleBackColor = true;
			// 
			// checkBox28
			// 
			this->checkBox28->AutoSize = true;
			this->checkBox28->Location = System::Drawing::Point(30, 470);
			this->checkBox28->Name = L"checkBox28";
			this->checkBox28->Size = System::Drawing::Size(86, 17);
			this->checkBox28->TabIndex = 64;
			this->checkBox28->Text = L"checkBox28";
			this->checkBox28->UseVisualStyleBackColor = true;
			// 
			// checkBox29
			// 
			this->checkBox29->AutoSize = true;
			this->checkBox29->Location = System::Drawing::Point(30, 450);
			this->checkBox29->Name = L"checkBox29";
			this->checkBox29->Size = System::Drawing::Size(86, 17);
			this->checkBox29->TabIndex = 63;
			this->checkBox29->Text = L"checkBox29";
			this->checkBox29->UseVisualStyleBackColor = true;
			// 
			// checkBox30
			// 
			this->checkBox30->AutoSize = true;
			this->checkBox30->Location = System::Drawing::Point(30, 430);
			this->checkBox30->Name = L"checkBox30";
			this->checkBox30->Size = System::Drawing::Size(86, 17);
			this->checkBox30->TabIndex = 62;
			this->checkBox30->Text = L"checkBox30";
			this->checkBox30->UseVisualStyleBackColor = true;
			// 
			// checkBox31
			// 
			this->checkBox31->AutoSize = true;
			this->checkBox31->Location = System::Drawing::Point(30, 410);
			this->checkBox31->Name = L"checkBox31";
			this->checkBox31->Size = System::Drawing::Size(86, 17);
			this->checkBox31->TabIndex = 61;
			this->checkBox31->Text = L"checkBox31";
			this->checkBox31->UseVisualStyleBackColor = true;
			// 
			// checkBox32
			// 
			this->checkBox32->AutoSize = true;
			this->checkBox32->Location = System::Drawing::Point(30, 390);
			this->checkBox32->Name = L"checkBox32";
			this->checkBox32->Size = System::Drawing::Size(86, 17);
			this->checkBox32->TabIndex = 60;
			this->checkBox32->Text = L"checkBox32";
			this->checkBox32->UseVisualStyleBackColor = true;
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(30, 370);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(80, 17);
			this->checkBox9->TabIndex = 59;
			this->checkBox9->Text = L"checkBox9";
			this->checkBox9->UseVisualStyleBackColor = true;
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Location = System::Drawing::Point(30, 350);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(86, 17);
			this->checkBox10->TabIndex = 58;
			this->checkBox10->Text = L"checkBox10";
			this->checkBox10->UseVisualStyleBackColor = true;
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Location = System::Drawing::Point(30, 330);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(86, 17);
			this->checkBox11->TabIndex = 57;
			this->checkBox11->Text = L"checkBox11";
			this->checkBox11->UseVisualStyleBackColor = true;
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Location = System::Drawing::Point(30, 310);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(86, 17);
			this->checkBox12->TabIndex = 56;
			this->checkBox12->Text = L"checkBox12";
			this->checkBox12->UseVisualStyleBackColor = true;
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->Location = System::Drawing::Point(30, 290);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(86, 17);
			this->checkBox13->TabIndex = 55;
			this->checkBox13->Text = L"checkBox13";
			this->checkBox13->UseVisualStyleBackColor = true;
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->Location = System::Drawing::Point(30, 270);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(86, 17);
			this->checkBox14->TabIndex = 54;
			this->checkBox14->Text = L"checkBox14";
			this->checkBox14->UseVisualStyleBackColor = true;
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->Location = System::Drawing::Point(30, 250);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(86, 17);
			this->checkBox15->TabIndex = 53;
			this->checkBox15->Text = L"checkBox15";
			this->checkBox15->UseVisualStyleBackColor = true;
			// 
			// checkBox16
			// 
			this->checkBox16->AutoSize = true;
			this->checkBox16->Location = System::Drawing::Point(30, 230);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(86, 17);
			this->checkBox16->TabIndex = 52;
			this->checkBox16->Text = L"checkBox16";
			this->checkBox16->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(30, 210);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(80, 17);
			this->checkBox5->TabIndex = 51;
			this->checkBox5->Text = L"checkBox5";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(30, 190);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(80, 17);
			this->checkBox6->TabIndex = 50;
			this->checkBox6->Text = L"checkBox6";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(30, 170);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(80, 17);
			this->checkBox7->TabIndex = 49;
			this->checkBox7->Text = L"checkBox7";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(30, 150);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(80, 17);
			this->checkBox8->TabIndex = 48;
			this->checkBox8->Text = L"checkBox8";
			this->checkBox8->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(30, 130);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(80, 17);
			this->checkBox3->TabIndex = 47;
			this->checkBox3->Text = L"checkBox3";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &dodajKarteFroms::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(30, 110);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(80, 17);
			this->checkBox4->TabIndex = 46;
			this->checkBox4->Text = L"checkBox4";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &dodajKarteFroms::checkBox4_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(30, 90);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(80, 17);
			this->checkBox2->TabIndex = 45;
			this->checkBox2->Text = L"checkBox2";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBoxAlchemia
			// 
			this->checkBoxAlchemia->AutoSize = true;
			this->checkBoxAlchemia->Location = System::Drawing::Point(30, 70);
			this->checkBoxAlchemia->Name = L"checkBoxAlchemia";
			this->checkBoxAlchemia->Size = System::Drawing::Size(69, 17);
			this->checkBoxAlchemia->TabIndex = 44;
			this->checkBoxAlchemia->Text = L"Alchemia";
			this->checkBoxAlchemia->UseVisualStyleBackColor = true;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(9, 690);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(12, 13);
			this->label38->TabIndex = 43;
			this->label38->Text = L"x";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(9, 670);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(12, 13);
			this->label39->TabIndex = 42;
			this->label39->Text = L"x";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(9, 650);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(12, 13);
			this->label40->TabIndex = 41;
			this->label40->Text = L"x";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(9, 630);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(12, 13);
			this->label41->TabIndex = 40;
			this->label41->Text = L"x";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(9, 610);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(12, 13);
			this->label42->TabIndex = 39;
			this->label42->Text = L"x";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(9, 590);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(12, 13);
			this->label43->TabIndex = 38;
			this->label43->Text = L"x";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(9, 570);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(12, 13);
			this->label44->TabIndex = 37;
			this->label44->Text = L"x";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(9, 550);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(12, 13);
			this->label45->TabIndex = 36;
			this->label45->Text = L"x";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(9, 530);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(12, 13);
			this->label46->TabIndex = 35;
			this->label46->Text = L"x";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(9, 510);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(12, 13);
			this->label47->TabIndex = 34;
			this->label47->Text = L"x";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(9, 490);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(12, 13);
			this->label48->TabIndex = 33;
			this->label48->Text = L"x";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(9, 470);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(12, 13);
			this->label49->TabIndex = 32;
			this->label49->Text = L"x";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(9, 450);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(12, 13);
			this->label50->TabIndex = 31;
			this->label50->Text = L"x";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(9, 430);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(12, 13);
			this->label51->TabIndex = 30;
			this->label51->Text = L"x";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(9, 410);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(12, 13);
			this->label52->TabIndex = 29;
			this->label52->Text = L"x";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(9, 390);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(12, 13);
			this->label53->TabIndex = 28;
			this->label53->Text = L"x";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(9, 370);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(12, 13);
			this->label30->TabIndex = 27;
			this->label30->Text = L"x";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(9, 350);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(12, 13);
			this->label31->TabIndex = 26;
			this->label31->Text = L"x";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(9, 330);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(12, 13);
			this->label32->TabIndex = 25;
			this->label32->Text = L"x";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(9, 310);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(12, 13);
			this->label33->TabIndex = 24;
			this->label33->Text = L"x";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(9, 290);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(12, 13);
			this->label34->TabIndex = 23;
			this->label34->Text = L"x";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(9, 270);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(12, 13);
			this->label35->TabIndex = 22;
			this->label35->Text = L"x";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(9, 250);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(12, 13);
			this->label36->TabIndex = 21;
			this->label36->Text = L"x";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(9, 230);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(12, 13);
			this->label37->TabIndex = 20;
			this->label37->Text = L"x";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(9, 210);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(12, 13);
			this->label26->TabIndex = 19;
			this->label26->Text = L"x";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(9, 190);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(12, 13);
			this->label27->TabIndex = 18;
			this->label27->Text = L"x";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(9, 170);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(12, 13);
			this->label28->TabIndex = 17;
			this->label28->Text = L"x";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(9, 150);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(12, 13);
			this->label29->TabIndex = 16;
			this->label29->Text = L"x";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(9, 130);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(12, 13);
			this->label25->TabIndex = 15;
			this->label25->Text = L"x";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(9, 110);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(12, 13);
			this->label24->TabIndex = 14;
			this->label24->Text = L"x";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(9, 90);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(12, 13);
			this->label23->TabIndex = 13;
			this->label23->Text = L"x";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(9, 70);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(12, 13);
			this->label22->TabIndex = 12;
			this->label22->Text = L"x";
			// 
			// buttonUmiejetnoscUaktualnij
			// 
			this->buttonUmiejetnoscUaktualnij->Location = System::Drawing::Point(372, 41);
			this->buttonUmiejetnoscUaktualnij->Name = L"buttonUmiejetnoscUaktualnij";
			this->buttonUmiejetnoscUaktualnij->Size = System::Drawing::Size(84, 23);
			this->buttonUmiejetnoscUaktualnij->TabIndex = 11;
			this->buttonUmiejetnoscUaktualnij->Text = L"Uaktualnij";
			this->buttonUmiejetnoscUaktualnij->UseVisualStyleBackColor = true;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(338, 20);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(80, 13);
			this->label21->TabIndex = 10;
			this->label21->Text = L"Max Ranga = 0";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(313, 20);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(13, 13);
			this->label20->TabIndex = 9;
			this->label20->Text = L"0";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(201, 20);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(106, 13);
			this->label19->TabIndex = 8;
			this->label19->Text = L"/miedzy klasowych =";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(168, 20);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(13, 13);
			this->label18->TabIndex = 7;
			this->label18->Text = L"0";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(12, 20);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(159, 13);
			this->label17->TabIndex = 6;
			this->label17->Text = L"Punkty do wydania klasowych =";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(338, 46);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(28, 13);
			this->label16->TabIndex = 5;
			this->label16->Text = L"Inne";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(265, 46);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(39, 13);
			this->label14->TabIndex = 4;
			this->label14->Text = L"Ranga";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(212, 46);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(28, 13);
			this->label13->TabIndex = 3;
			this->label13->Text = L"Mod";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(168, 46);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(38, 13);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Cecha";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(59, 46);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(103, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Nazwa Umiejêtnoœci";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 46);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(47, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Klasowe";
			// 
			// groupBox2
			// 
			this->groupBox2->Location = System::Drawing::Point(468, 14);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(152, 101);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Inicjatywa i Atak Bazowy";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label260);
			this->groupBox3->Controls->Add(this->maskedTextBox36);
			this->groupBox3->Controls->Add(this->maskedTextBox37);
			this->groupBox3->Controls->Add(this->maskedTextBox38);
			this->groupBox3->Controls->Add(this->maskedTextBox33);
			this->groupBox3->Controls->Add(this->label259);
			this->groupBox3->Controls->Add(this->maskedTextBox34);
			this->groupBox3->Controls->Add(this->label256);
			this->groupBox3->Controls->Add(this->maskedTextBox35);
			this->groupBox3->Controls->Add(this->label257);
			this->groupBox3->Controls->Add(this->label258);
			this->groupBox3->Controls->Add(this->label255);
			this->groupBox3->Controls->Add(this->label252);
			this->groupBox3->Controls->Add(this->label253);
			this->groupBox3->Controls->Add(this->label254);
			this->groupBox3->Controls->Add(this->label251);
			this->groupBox3->Controls->Add(this->label250);
			this->groupBox3->Controls->Add(this->label249);
			this->groupBox3->Controls->Add(this->label248);
			this->groupBox3->Controls->Add(this->label247);
			this->groupBox3->Controls->Add(this->label246);
			this->groupBox3->Controls->Add(this->label245);
			this->groupBox3->Controls->Add(this->label244);
			this->groupBox3->Location = System::Drawing::Point(231, 235);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(389, 138);
			this->groupBox3->TabIndex = 5;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Rzuty Obronne";
			// 
			// label134
			// 
			this->label134->AutoSize = true;
			this->label134->Location = System::Drawing::Point(255, 90);
			this->label134->Name = L"label134";
			this->label134->Size = System::Drawing::Size(13, 13);
			this->label134->TabIndex = 175;
			this->label134->Text = L"+";
			// 
			// label150
			// 
			this->label150->AutoSize = true;
			this->label150->Location = System::Drawing::Point(255, 130);
			this->label150->Name = L"label150";
			this->label150->Size = System::Drawing::Size(13, 13);
			this->label150->TabIndex = 177;
			this->label150->Text = L"+";
			// 
			// label151
			// 
			this->label151->AutoSize = true;
			this->label151->Location = System::Drawing::Point(255, 110);
			this->label151->Name = L"label151";
			this->label151->Size = System::Drawing::Size(13, 13);
			this->label151->TabIndex = 176;
			this->label151->Text = L"+";
			// 
			// label152
			// 
			this->label152->AutoSize = true;
			this->label152->Location = System::Drawing::Point(255, 210);
			this->label152->Name = L"label152";
			this->label152->Size = System::Drawing::Size(13, 13);
			this->label152->TabIndex = 181;
			this->label152->Text = L"+";
			// 
			// label153
			// 
			this->label153->AutoSize = true;
			this->label153->Location = System::Drawing::Point(255, 190);
			this->label153->Name = L"label153";
			this->label153->Size = System::Drawing::Size(13, 13);
			this->label153->TabIndex = 180;
			this->label153->Text = L"+";
			// 
			// label154
			// 
			this->label154->AutoSize = true;
			this->label154->Location = System::Drawing::Point(255, 170);
			this->label154->Name = L"label154";
			this->label154->Size = System::Drawing::Size(13, 13);
			this->label154->TabIndex = 179;
			this->label154->Text = L"+";
			// 
			// label155
			// 
			this->label155->AutoSize = true;
			this->label155->Location = System::Drawing::Point(255, 150);
			this->label155->Name = L"label155";
			this->label155->Size = System::Drawing::Size(13, 13);
			this->label155->TabIndex = 178;
			this->label155->Text = L"+";
			// 
			// label156
			// 
			this->label156->AutoSize = true;
			this->label156->Location = System::Drawing::Point(255, 370);
			this->label156->Name = L"label156";
			this->label156->Size = System::Drawing::Size(13, 13);
			this->label156->TabIndex = 189;
			this->label156->Text = L"+";
			// 
			// label157
			// 
			this->label157->AutoSize = true;
			this->label157->Location = System::Drawing::Point(255, 350);
			this->label157->Name = L"label157";
			this->label157->Size = System::Drawing::Size(13, 13);
			this->label157->TabIndex = 188;
			this->label157->Text = L"+";
			// 
			// label158
			// 
			this->label158->AutoSize = true;
			this->label158->Location = System::Drawing::Point(255, 330);
			this->label158->Name = L"label158";
			this->label158->Size = System::Drawing::Size(13, 13);
			this->label158->TabIndex = 187;
			this->label158->Text = L"+";
			// 
			// label159
			// 
			this->label159->AutoSize = true;
			this->label159->Location = System::Drawing::Point(255, 310);
			this->label159->Name = L"label159";
			this->label159->Size = System::Drawing::Size(13, 13);
			this->label159->TabIndex = 186;
			this->label159->Text = L"+";
			// 
			// label160
			// 
			this->label160->AutoSize = true;
			this->label160->Location = System::Drawing::Point(255, 290);
			this->label160->Name = L"label160";
			this->label160->Size = System::Drawing::Size(13, 13);
			this->label160->TabIndex = 185;
			this->label160->Text = L"+";
			// 
			// label161
			// 
			this->label161->AutoSize = true;
			this->label161->Location = System::Drawing::Point(255, 270);
			this->label161->Name = L"label161";
			this->label161->Size = System::Drawing::Size(13, 13);
			this->label161->TabIndex = 184;
			this->label161->Text = L"+";
			// 
			// label162
			// 
			this->label162->AutoSize = true;
			this->label162->Location = System::Drawing::Point(255, 250);
			this->label162->Name = L"label162";
			this->label162->Size = System::Drawing::Size(13, 13);
			this->label162->TabIndex = 183;
			this->label162->Text = L"+";
			// 
			// label163
			// 
			this->label163->AutoSize = true;
			this->label163->Location = System::Drawing::Point(255, 230);
			this->label163->Name = L"label163";
			this->label163->Size = System::Drawing::Size(13, 13);
			this->label163->TabIndex = 182;
			this->label163->Text = L"+";
			// 
			// label164
			// 
			this->label164->AutoSize = true;
			this->label164->Location = System::Drawing::Point(255, 690);
			this->label164->Name = L"label164";
			this->label164->Size = System::Drawing::Size(13, 13);
			this->label164->TabIndex = 205;
			this->label164->Text = L"+";
			// 
			// label165
			// 
			this->label165->AutoSize = true;
			this->label165->Location = System::Drawing::Point(255, 670);
			this->label165->Name = L"label165";
			this->label165->Size = System::Drawing::Size(13, 13);
			this->label165->TabIndex = 204;
			this->label165->Text = L"+";
			// 
			// label166
			// 
			this->label166->AutoSize = true;
			this->label166->Location = System::Drawing::Point(255, 650);
			this->label166->Name = L"label166";
			this->label166->Size = System::Drawing::Size(13, 13);
			this->label166->TabIndex = 203;
			this->label166->Text = L"+";
			// 
			// label167
			// 
			this->label167->AutoSize = true;
			this->label167->Location = System::Drawing::Point(255, 630);
			this->label167->Name = L"label167";
			this->label167->Size = System::Drawing::Size(13, 13);
			this->label167->TabIndex = 202;
			this->label167->Text = L"+";
			// 
			// label168
			// 
			this->label168->AutoSize = true;
			this->label168->Location = System::Drawing::Point(255, 610);
			this->label168->Name = L"label168";
			this->label168->Size = System::Drawing::Size(13, 13);
			this->label168->TabIndex = 201;
			this->label168->Text = L"+";
			// 
			// label169
			// 
			this->label169->AutoSize = true;
			this->label169->Location = System::Drawing::Point(255, 590);
			this->label169->Name = L"label169";
			this->label169->Size = System::Drawing::Size(13, 13);
			this->label169->TabIndex = 200;
			this->label169->Text = L"+";
			// 
			// label170
			// 
			this->label170->AutoSize = true;
			this->label170->Location = System::Drawing::Point(255, 570);
			this->label170->Name = L"label170";
			this->label170->Size = System::Drawing::Size(13, 13);
			this->label170->TabIndex = 199;
			this->label170->Text = L"+";
			// 
			// label171
			// 
			this->label171->AutoSize = true;
			this->label171->Location = System::Drawing::Point(255, 550);
			this->label171->Name = L"label171";
			this->label171->Size = System::Drawing::Size(13, 13);
			this->label171->TabIndex = 198;
			this->label171->Text = L"+";
			// 
			// label172
			// 
			this->label172->AutoSize = true;
			this->label172->Location = System::Drawing::Point(255, 530);
			this->label172->Name = L"label172";
			this->label172->Size = System::Drawing::Size(13, 13);
			this->label172->TabIndex = 197;
			this->label172->Text = L"+";
			// 
			// label173
			// 
			this->label173->AutoSize = true;
			this->label173->Location = System::Drawing::Point(255, 510);
			this->label173->Name = L"label173";
			this->label173->Size = System::Drawing::Size(13, 13);
			this->label173->TabIndex = 196;
			this->label173->Text = L"+";
			// 
			// label174
			// 
			this->label174->AutoSize = true;
			this->label174->Location = System::Drawing::Point(255, 490);
			this->label174->Name = L"label174";
			this->label174->Size = System::Drawing::Size(13, 13);
			this->label174->TabIndex = 195;
			this->label174->Text = L"+";
			// 
			// label175
			// 
			this->label175->AutoSize = true;
			this->label175->Location = System::Drawing::Point(255, 470);
			this->label175->Name = L"label175";
			this->label175->Size = System::Drawing::Size(13, 13);
			this->label175->TabIndex = 194;
			this->label175->Text = L"+";
			// 
			// label176
			// 
			this->label176->AutoSize = true;
			this->label176->Location = System::Drawing::Point(255, 450);
			this->label176->Name = L"label176";
			this->label176->Size = System::Drawing::Size(13, 13);
			this->label176->TabIndex = 193;
			this->label176->Text = L"+";
			// 
			// label177
			// 
			this->label177->AutoSize = true;
			this->label177->Location = System::Drawing::Point(255, 430);
			this->label177->Name = L"label177";
			this->label177->Size = System::Drawing::Size(13, 13);
			this->label177->TabIndex = 192;
			this->label177->Text = L"+";
			// 
			// label178
			// 
			this->label178->AutoSize = true;
			this->label178->Location = System::Drawing::Point(255, 410);
			this->label178->Name = L"label178";
			this->label178->Size = System::Drawing::Size(13, 13);
			this->label178->TabIndex = 191;
			this->label178->Text = L"+";
			// 
			// label179
			// 
			this->label179->AutoSize = true;
			this->label179->Location = System::Drawing::Point(255, 390);
			this->label179->Name = L"label179";
			this->label179->Size = System::Drawing::Size(13, 13);
			this->label179->TabIndex = 190;
			this->label179->Text = L"+";
			// 
			// label180
			// 
			this->label180->AutoSize = true;
			this->label180->Location = System::Drawing::Point(300, 70);
			this->label180->Name = L"label180";
			this->label180->Size = System::Drawing::Size(10, 13);
			this->label180->TabIndex = 206;
			this->label180->Text = L"-";
			// 
			// label181
			// 
			this->label181->AutoSize = true;
			this->label181->Location = System::Drawing::Point(300, 90);
			this->label181->Name = L"label181";
			this->label181->Size = System::Drawing::Size(10, 13);
			this->label181->TabIndex = 207;
			this->label181->Text = L"-";
			// 
			// label182
			// 
			this->label182->AutoSize = true;
			this->label182->Location = System::Drawing::Point(300, 130);
			this->label182->Name = L"label182";
			this->label182->Size = System::Drawing::Size(10, 13);
			this->label182->TabIndex = 209;
			this->label182->Text = L"-";
			// 
			// label183
			// 
			this->label183->AutoSize = true;
			this->label183->Location = System::Drawing::Point(300, 110);
			this->label183->Name = L"label183";
			this->label183->Size = System::Drawing::Size(10, 13);
			this->label183->TabIndex = 208;
			this->label183->Text = L"-";
			// 
			// label184
			// 
			this->label184->AutoSize = true;
			this->label184->Location = System::Drawing::Point(300, 210);
			this->label184->Name = L"label184";
			this->label184->Size = System::Drawing::Size(10, 13);
			this->label184->TabIndex = 213;
			this->label184->Text = L"-";
			// 
			// label185
			// 
			this->label185->AutoSize = true;
			this->label185->Location = System::Drawing::Point(300, 190);
			this->label185->Name = L"label185";
			this->label185->Size = System::Drawing::Size(10, 13);
			this->label185->TabIndex = 212;
			this->label185->Text = L"-";
			// 
			// label186
			// 
			this->label186->AutoSize = true;
			this->label186->Location = System::Drawing::Point(300, 170);
			this->label186->Name = L"label186";
			this->label186->Size = System::Drawing::Size(10, 13);
			this->label186->TabIndex = 211;
			this->label186->Text = L"-";
			// 
			// label187
			// 
			this->label187->AutoSize = true;
			this->label187->Location = System::Drawing::Point(300, 150);
			this->label187->Name = L"label187";
			this->label187->Size = System::Drawing::Size(10, 13);
			this->label187->TabIndex = 210;
			this->label187->Text = L"-";
			// 
			// label188
			// 
			this->label188->AutoSize = true;
			this->label188->Location = System::Drawing::Point(300, 370);
			this->label188->Name = L"label188";
			this->label188->Size = System::Drawing::Size(10, 13);
			this->label188->TabIndex = 221;
			this->label188->Text = L"-";
			// 
			// label189
			// 
			this->label189->AutoSize = true;
			this->label189->Location = System::Drawing::Point(300, 350);
			this->label189->Name = L"label189";
			this->label189->Size = System::Drawing::Size(10, 13);
			this->label189->TabIndex = 220;
			this->label189->Text = L"-";
			// 
			// label190
			// 
			this->label190->AutoSize = true;
			this->label190->Location = System::Drawing::Point(300, 330);
			this->label190->Name = L"label190";
			this->label190->Size = System::Drawing::Size(10, 13);
			this->label190->TabIndex = 219;
			this->label190->Text = L"-";
			// 
			// label191
			// 
			this->label191->AutoSize = true;
			this->label191->Location = System::Drawing::Point(300, 310);
			this->label191->Name = L"label191";
			this->label191->Size = System::Drawing::Size(10, 13);
			this->label191->TabIndex = 218;
			this->label191->Text = L"-";
			// 
			// label192
			// 
			this->label192->AutoSize = true;
			this->label192->Location = System::Drawing::Point(300, 290);
			this->label192->Name = L"label192";
			this->label192->Size = System::Drawing::Size(10, 13);
			this->label192->TabIndex = 217;
			this->label192->Text = L"-";
			// 
			// label193
			// 
			this->label193->AutoSize = true;
			this->label193->Location = System::Drawing::Point(300, 270);
			this->label193->Name = L"label193";
			this->label193->Size = System::Drawing::Size(10, 13);
			this->label193->TabIndex = 216;
			this->label193->Text = L"-";
			// 
			// label194
			// 
			this->label194->AutoSize = true;
			this->label194->Location = System::Drawing::Point(300, 250);
			this->label194->Name = L"label194";
			this->label194->Size = System::Drawing::Size(10, 13);
			this->label194->TabIndex = 215;
			this->label194->Text = L"-";
			// 
			// label195
			// 
			this->label195->AutoSize = true;
			this->label195->Location = System::Drawing::Point(300, 230);
			this->label195->Name = L"label195";
			this->label195->Size = System::Drawing::Size(10, 13);
			this->label195->TabIndex = 214;
			this->label195->Text = L"-";
			// 
			// label196
			// 
			this->label196->AutoSize = true;
			this->label196->Location = System::Drawing::Point(300, 690);
			this->label196->Name = L"label196";
			this->label196->Size = System::Drawing::Size(10, 13);
			this->label196->TabIndex = 237;
			this->label196->Text = L"-";
			// 
			// label197
			// 
			this->label197->AutoSize = true;
			this->label197->Location = System::Drawing::Point(300, 670);
			this->label197->Name = L"label197";
			this->label197->Size = System::Drawing::Size(10, 13);
			this->label197->TabIndex = 236;
			this->label197->Text = L"-";
			// 
			// label198
			// 
			this->label198->AutoSize = true;
			this->label198->Location = System::Drawing::Point(300, 650);
			this->label198->Name = L"label198";
			this->label198->Size = System::Drawing::Size(10, 13);
			this->label198->TabIndex = 235;
			this->label198->Text = L"-";
			// 
			// label199
			// 
			this->label199->AutoSize = true;
			this->label199->Location = System::Drawing::Point(300, 630);
			this->label199->Name = L"label199";
			this->label199->Size = System::Drawing::Size(10, 13);
			this->label199->TabIndex = 234;
			this->label199->Text = L"-";
			// 
			// label200
			// 
			this->label200->AutoSize = true;
			this->label200->Location = System::Drawing::Point(300, 610);
			this->label200->Name = L"label200";
			this->label200->Size = System::Drawing::Size(10, 13);
			this->label200->TabIndex = 233;
			this->label200->Text = L"-";
			// 
			// label201
			// 
			this->label201->AutoSize = true;
			this->label201->Location = System::Drawing::Point(300, 590);
			this->label201->Name = L"label201";
			this->label201->Size = System::Drawing::Size(10, 13);
			this->label201->TabIndex = 232;
			this->label201->Text = L"-";
			// 
			// label202
			// 
			this->label202->AutoSize = true;
			this->label202->Location = System::Drawing::Point(300, 570);
			this->label202->Name = L"label202";
			this->label202->Size = System::Drawing::Size(10, 13);
			this->label202->TabIndex = 231;
			this->label202->Text = L"-";
			// 
			// label203
			// 
			this->label203->AutoSize = true;
			this->label203->Location = System::Drawing::Point(300, 550);
			this->label203->Name = L"label203";
			this->label203->Size = System::Drawing::Size(10, 13);
			this->label203->TabIndex = 230;
			this->label203->Text = L"-";
			// 
			// label204
			// 
			this->label204->AutoSize = true;
			this->label204->Location = System::Drawing::Point(300, 530);
			this->label204->Name = L"label204";
			this->label204->Size = System::Drawing::Size(10, 13);
			this->label204->TabIndex = 229;
			this->label204->Text = L"-";
			// 
			// label205
			// 
			this->label205->AutoSize = true;
			this->label205->Location = System::Drawing::Point(300, 510);
			this->label205->Name = L"label205";
			this->label205->Size = System::Drawing::Size(10, 13);
			this->label205->TabIndex = 228;
			this->label205->Text = L"-";
			// 
			// label206
			// 
			this->label206->AutoSize = true;
			this->label206->Location = System::Drawing::Point(300, 490);
			this->label206->Name = L"label206";
			this->label206->Size = System::Drawing::Size(10, 13);
			this->label206->TabIndex = 227;
			this->label206->Text = L"-";
			// 
			// label207
			// 
			this->label207->AutoSize = true;
			this->label207->Location = System::Drawing::Point(300, 470);
			this->label207->Name = L"label207";
			this->label207->Size = System::Drawing::Size(10, 13);
			this->label207->TabIndex = 226;
			this->label207->Text = L"-";
			// 
			// label208
			// 
			this->label208->AutoSize = true;
			this->label208->Location = System::Drawing::Point(300, 450);
			this->label208->Name = L"label208";
			this->label208->Size = System::Drawing::Size(10, 13);
			this->label208->TabIndex = 225;
			this->label208->Text = L"-";
			// 
			// label209
			// 
			this->label209->AutoSize = true;
			this->label209->Location = System::Drawing::Point(300, 430);
			this->label209->Name = L"label209";
			this->label209->Size = System::Drawing::Size(10, 13);
			this->label209->TabIndex = 224;
			this->label209->Text = L"-";
			// 
			// label210
			// 
			this->label210->AutoSize = true;
			this->label210->Location = System::Drawing::Point(300, 410);
			this->label210->Name = L"label210";
			this->label210->Size = System::Drawing::Size(10, 13);
			this->label210->TabIndex = 223;
			this->label210->Text = L"-";
			// 
			// label211
			// 
			this->label211->AutoSize = true;
			this->label211->Location = System::Drawing::Point(300, 390);
			this->label211->Name = L"label211";
			this->label211->Size = System::Drawing::Size(10, 13);
			this->label211->TabIndex = 222;
			this->label211->Text = L"-";
			// 
			// label212
			// 
			this->label212->AutoSize = true;
			this->label212->Location = System::Drawing::Point(405, 290);
			this->label212->Name = L"label212";
			this->label212->Size = System::Drawing::Size(13, 13);
			this->label212->TabIndex = 249;
			this->label212->Text = L"0";
			// 
			// label213
			// 
			this->label213->AutoSize = true;
			this->label213->Location = System::Drawing::Point(405, 270);
			this->label213->Name = L"label213";
			this->label213->Size = System::Drawing::Size(13, 13);
			this->label213->TabIndex = 248;
			this->label213->Text = L"0";
			// 
			// label214
			// 
			this->label214->AutoSize = true;
			this->label214->Location = System::Drawing::Point(405, 250);
			this->label214->Name = L"label214";
			this->label214->Size = System::Drawing::Size(13, 13);
			this->label214->TabIndex = 247;
			this->label214->Text = L"0";
			// 
			// label215
			// 
			this->label215->AutoSize = true;
			this->label215->Location = System::Drawing::Point(405, 230);
			this->label215->Name = L"label215";
			this->label215->Size = System::Drawing::Size(13, 13);
			this->label215->TabIndex = 246;
			this->label215->Text = L"0";
			// 
			// label216
			// 
			this->label216->AutoSize = true;
			this->label216->Location = System::Drawing::Point(405, 210);
			this->label216->Name = L"label216";
			this->label216->Size = System::Drawing::Size(13, 13);
			this->label216->TabIndex = 245;
			this->label216->Text = L"0";
			// 
			// label217
			// 
			this->label217->AutoSize = true;
			this->label217->Location = System::Drawing::Point(405, 190);
			this->label217->Name = L"label217";
			this->label217->Size = System::Drawing::Size(13, 13);
			this->label217->TabIndex = 244;
			this->label217->Text = L"0";
			// 
			// label218
			// 
			this->label218->AutoSize = true;
			this->label218->Location = System::Drawing::Point(405, 170);
			this->label218->Name = L"label218";
			this->label218->Size = System::Drawing::Size(13, 13);
			this->label218->TabIndex = 243;
			this->label218->Text = L"0";
			// 
			// label219
			// 
			this->label219->AutoSize = true;
			this->label219->Location = System::Drawing::Point(405, 150);
			this->label219->Name = L"label219";
			this->label219->Size = System::Drawing::Size(13, 13);
			this->label219->TabIndex = 242;
			this->label219->Text = L"0";
			// 
			// label220
			// 
			this->label220->AutoSize = true;
			this->label220->Location = System::Drawing::Point(405, 130);
			this->label220->Name = L"label220";
			this->label220->Size = System::Drawing::Size(13, 13);
			this->label220->TabIndex = 241;
			this->label220->Text = L"0";
			// 
			// label221
			// 
			this->label221->AutoSize = true;
			this->label221->Location = System::Drawing::Point(405, 110);
			this->label221->Name = L"label221";
			this->label221->Size = System::Drawing::Size(13, 13);
			this->label221->TabIndex = 240;
			this->label221->Text = L"0";
			// 
			// label222
			// 
			this->label222->AutoSize = true;
			this->label222->Location = System::Drawing::Point(405, 90);
			this->label222->Name = L"label222";
			this->label222->Size = System::Drawing::Size(13, 13);
			this->label222->TabIndex = 239;
			this->label222->Text = L"0";
			// 
			// label223
			// 
			this->label223->AutoSize = true;
			this->label223->Location = System::Drawing::Point(405, 70);
			this->label223->Name = L"label223";
			this->label223->Size = System::Drawing::Size(13, 13);
			this->label223->TabIndex = 238;
			this->label223->Text = L"0";
			// 
			// label224
			// 
			this->label224->AutoSize = true;
			this->label224->Location = System::Drawing::Point(405, 530);
			this->label224->Name = L"label224";
			this->label224->Size = System::Drawing::Size(13, 13);
			this->label224->TabIndex = 261;
			this->label224->Text = L"0";
			// 
			// label225
			// 
			this->label225->AutoSize = true;
			this->label225->Location = System::Drawing::Point(405, 510);
			this->label225->Name = L"label225";
			this->label225->Size = System::Drawing::Size(13, 13);
			this->label225->TabIndex = 260;
			this->label225->Text = L"0";
			// 
			// label226
			// 
			this->label226->AutoSize = true;
			this->label226->Location = System::Drawing::Point(405, 490);
			this->label226->Name = L"label226";
			this->label226->Size = System::Drawing::Size(13, 13);
			this->label226->TabIndex = 259;
			this->label226->Text = L"0";
			// 
			// label227
			// 
			this->label227->AutoSize = true;
			this->label227->Location = System::Drawing::Point(405, 470);
			this->label227->Name = L"label227";
			this->label227->Size = System::Drawing::Size(13, 13);
			this->label227->TabIndex = 258;
			this->label227->Text = L"0";
			// 
			// label228
			// 
			this->label228->AutoSize = true;
			this->label228->Location = System::Drawing::Point(405, 450);
			this->label228->Name = L"label228";
			this->label228->Size = System::Drawing::Size(13, 13);
			this->label228->TabIndex = 257;
			this->label228->Text = L"0";
			// 
			// label229
			// 
			this->label229->AutoSize = true;
			this->label229->Location = System::Drawing::Point(405, 430);
			this->label229->Name = L"label229";
			this->label229->Size = System::Drawing::Size(13, 13);
			this->label229->TabIndex = 256;
			this->label229->Text = L"0";
			// 
			// label230
			// 
			this->label230->AutoSize = true;
			this->label230->Location = System::Drawing::Point(405, 410);
			this->label230->Name = L"label230";
			this->label230->Size = System::Drawing::Size(13, 13);
			this->label230->TabIndex = 255;
			this->label230->Text = L"0";
			// 
			// label231
			// 
			this->label231->AutoSize = true;
			this->label231->Location = System::Drawing::Point(405, 390);
			this->label231->Name = L"label231";
			this->label231->Size = System::Drawing::Size(13, 13);
			this->label231->TabIndex = 254;
			this->label231->Text = L"0";
			// 
			// label232
			// 
			this->label232->AutoSize = true;
			this->label232->Location = System::Drawing::Point(405, 370);
			this->label232->Name = L"label232";
			this->label232->Size = System::Drawing::Size(13, 13);
			this->label232->TabIndex = 253;
			this->label232->Text = L"0";
			// 
			// label233
			// 
			this->label233->AutoSize = true;
			this->label233->Location = System::Drawing::Point(405, 350);
			this->label233->Name = L"label233";
			this->label233->Size = System::Drawing::Size(13, 13);
			this->label233->TabIndex = 252;
			this->label233->Text = L"0";
			// 
			// label234
			// 
			this->label234->AutoSize = true;
			this->label234->Location = System::Drawing::Point(405, 330);
			this->label234->Name = L"label234";
			this->label234->Size = System::Drawing::Size(13, 13);
			this->label234->TabIndex = 251;
			this->label234->Text = L"0";
			// 
			// label235
			// 
			this->label235->AutoSize = true;
			this->label235->Location = System::Drawing::Point(405, 310);
			this->label235->Name = L"label235";
			this->label235->Size = System::Drawing::Size(13, 13);
			this->label235->TabIndex = 250;
			this->label235->Text = L"0";
			// 
			// label236
			// 
			this->label236->AutoSize = true;
			this->label236->Location = System::Drawing::Point(405, 690);
			this->label236->Name = L"label236";
			this->label236->Size = System::Drawing::Size(13, 13);
			this->label236->TabIndex = 269;
			this->label236->Text = L"0";
			// 
			// label237
			// 
			this->label237->AutoSize = true;
			this->label237->Location = System::Drawing::Point(405, 670);
			this->label237->Name = L"label237";
			this->label237->Size = System::Drawing::Size(13, 13);
			this->label237->TabIndex = 268;
			this->label237->Text = L"0";
			// 
			// label238
			// 
			this->label238->AutoSize = true;
			this->label238->Location = System::Drawing::Point(405, 650);
			this->label238->Name = L"label238";
			this->label238->Size = System::Drawing::Size(13, 13);
			this->label238->TabIndex = 267;
			this->label238->Text = L"0";
			// 
			// label239
			// 
			this->label239->AutoSize = true;
			this->label239->Location = System::Drawing::Point(405, 630);
			this->label239->Name = L"label239";
			this->label239->Size = System::Drawing::Size(13, 13);
			this->label239->TabIndex = 266;
			this->label239->Text = L"0";
			// 
			// label240
			// 
			this->label240->AutoSize = true;
			this->label240->Location = System::Drawing::Point(405, 610);
			this->label240->Name = L"label240";
			this->label240->Size = System::Drawing::Size(13, 13);
			this->label240->TabIndex = 265;
			this->label240->Text = L"0";
			// 
			// label241
			// 
			this->label241->AutoSize = true;
			this->label241->Location = System::Drawing::Point(405, 590);
			this->label241->Name = L"label241";
			this->label241->Size = System::Drawing::Size(13, 13);
			this->label241->TabIndex = 264;
			this->label241->Text = L"0";
			// 
			// label242
			// 
			this->label242->AutoSize = true;
			this->label242->Location = System::Drawing::Point(405, 570);
			this->label242->Name = L"label242";
			this->label242->Size = System::Drawing::Size(13, 13);
			this->label242->TabIndex = 263;
			this->label242->Text = L"0";
			// 
			// label243
			// 
			this->label243->AutoSize = true;
			this->label243->Location = System::Drawing::Point(405, 550);
			this->label243->Name = L"label243";
			this->label243->Size = System::Drawing::Size(13, 13);
			this->label243->TabIndex = 262;
			this->label243->Text = L"0";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(340, 70);
			this->maskedTextBox1->Mask = L"00";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox1->TabIndex = 270;
			this->maskedTextBox1->Text = L"0";
			this->maskedTextBox1->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(340, 90);
			this->maskedTextBox2->Mask = L"00";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox2->TabIndex = 271;
			this->maskedTextBox2->Text = L"0";
			this->maskedTextBox2->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->Location = System::Drawing::Point(340, 129);
			this->maskedTextBox3->Mask = L"00";
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox3->TabIndex = 273;
			this->maskedTextBox3->Text = L"0";
			this->maskedTextBox3->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox4
			// 
			this->maskedTextBox4->Location = System::Drawing::Point(340, 110);
			this->maskedTextBox4->Mask = L"00";
			this->maskedTextBox4->Name = L"maskedTextBox4";
			this->maskedTextBox4->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox4->TabIndex = 272;
			this->maskedTextBox4->Text = L"0";
			this->maskedTextBox4->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox5
			// 
			this->maskedTextBox5->Location = System::Drawing::Point(340, 209);
			this->maskedTextBox5->Mask = L"00";
			this->maskedTextBox5->Name = L"maskedTextBox5";
			this->maskedTextBox5->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox5->TabIndex = 277;
			this->maskedTextBox5->Text = L"0";
			this->maskedTextBox5->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox6
			// 
			this->maskedTextBox6->Location = System::Drawing::Point(340, 190);
			this->maskedTextBox6->Mask = L"00";
			this->maskedTextBox6->Name = L"maskedTextBox6";
			this->maskedTextBox6->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox6->TabIndex = 276;
			this->maskedTextBox6->Text = L"0";
			this->maskedTextBox6->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox7
			// 
			this->maskedTextBox7->Location = System::Drawing::Point(340, 170);
			this->maskedTextBox7->Mask = L"00";
			this->maskedTextBox7->Name = L"maskedTextBox7";
			this->maskedTextBox7->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox7->TabIndex = 275;
			this->maskedTextBox7->Text = L"0";
			this->maskedTextBox7->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox8
			// 
			this->maskedTextBox8->Location = System::Drawing::Point(340, 150);
			this->maskedTextBox8->Mask = L"00";
			this->maskedTextBox8->Name = L"maskedTextBox8";
			this->maskedTextBox8->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox8->TabIndex = 274;
			this->maskedTextBox8->Text = L"0";
			this->maskedTextBox8->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox9
			// 
			this->maskedTextBox9->Location = System::Drawing::Point(340, 369);
			this->maskedTextBox9->Mask = L"00";
			this->maskedTextBox9->Name = L"maskedTextBox9";
			this->maskedTextBox9->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox9->TabIndex = 285;
			this->maskedTextBox9->Text = L"0";
			this->maskedTextBox9->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox10
			// 
			this->maskedTextBox10->Location = System::Drawing::Point(340, 350);
			this->maskedTextBox10->Mask = L"00";
			this->maskedTextBox10->Name = L"maskedTextBox10";
			this->maskedTextBox10->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox10->TabIndex = 284;
			this->maskedTextBox10->Text = L"0";
			this->maskedTextBox10->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox11
			// 
			this->maskedTextBox11->Location = System::Drawing::Point(340, 330);
			this->maskedTextBox11->Mask = L"00";
			this->maskedTextBox11->Name = L"maskedTextBox11";
			this->maskedTextBox11->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox11->TabIndex = 283;
			this->maskedTextBox11->Text = L"0";
			this->maskedTextBox11->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox12
			// 
			this->maskedTextBox12->Location = System::Drawing::Point(340, 310);
			this->maskedTextBox12->Mask = L"00";
			this->maskedTextBox12->Name = L"maskedTextBox12";
			this->maskedTextBox12->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox12->TabIndex = 282;
			this->maskedTextBox12->Text = L"0";
			this->maskedTextBox12->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox13
			// 
			this->maskedTextBox13->Location = System::Drawing::Point(340, 289);
			this->maskedTextBox13->Mask = L"00";
			this->maskedTextBox13->Name = L"maskedTextBox13";
			this->maskedTextBox13->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox13->TabIndex = 281;
			this->maskedTextBox13->Text = L"0";
			this->maskedTextBox13->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox14
			// 
			this->maskedTextBox14->Location = System::Drawing::Point(340, 270);
			this->maskedTextBox14->Mask = L"00";
			this->maskedTextBox14->Name = L"maskedTextBox14";
			this->maskedTextBox14->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox14->TabIndex = 280;
			this->maskedTextBox14->Text = L"0";
			this->maskedTextBox14->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox15
			// 
			this->maskedTextBox15->Location = System::Drawing::Point(340, 250);
			this->maskedTextBox15->Mask = L"00";
			this->maskedTextBox15->Name = L"maskedTextBox15";
			this->maskedTextBox15->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox15->TabIndex = 279;
			this->maskedTextBox15->Text = L"0";
			this->maskedTextBox15->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox16
			// 
			this->maskedTextBox16->Location = System::Drawing::Point(340, 230);
			this->maskedTextBox16->Mask = L"00";
			this->maskedTextBox16->Name = L"maskedTextBox16";
			this->maskedTextBox16->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox16->TabIndex = 278;
			this->maskedTextBox16->Text = L"0";
			this->maskedTextBox16->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox17
			// 
			this->maskedTextBox17->Location = System::Drawing::Point(340, 689);
			this->maskedTextBox17->Mask = L"00";
			this->maskedTextBox17->Name = L"maskedTextBox17";
			this->maskedTextBox17->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox17->TabIndex = 301;
			this->maskedTextBox17->Text = L"0";
			this->maskedTextBox17->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox18
			// 
			this->maskedTextBox18->Location = System::Drawing::Point(340, 670);
			this->maskedTextBox18->Mask = L"00";
			this->maskedTextBox18->Name = L"maskedTextBox18";
			this->maskedTextBox18->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox18->TabIndex = 300;
			this->maskedTextBox18->Text = L"0";
			this->maskedTextBox18->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox19
			// 
			this->maskedTextBox19->Location = System::Drawing::Point(340, 650);
			this->maskedTextBox19->Mask = L"00";
			this->maskedTextBox19->Name = L"maskedTextBox19";
			this->maskedTextBox19->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox19->TabIndex = 299;
			this->maskedTextBox19->Text = L"0";
			this->maskedTextBox19->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox20
			// 
			this->maskedTextBox20->Location = System::Drawing::Point(340, 630);
			this->maskedTextBox20->Mask = L"00";
			this->maskedTextBox20->Name = L"maskedTextBox20";
			this->maskedTextBox20->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox20->TabIndex = 298;
			this->maskedTextBox20->Text = L"0";
			this->maskedTextBox20->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox21
			// 
			this->maskedTextBox21->Location = System::Drawing::Point(340, 609);
			this->maskedTextBox21->Mask = L"00";
			this->maskedTextBox21->Name = L"maskedTextBox21";
			this->maskedTextBox21->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox21->TabIndex = 297;
			this->maskedTextBox21->Text = L"0";
			this->maskedTextBox21->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox22
			// 
			this->maskedTextBox22->Location = System::Drawing::Point(340, 590);
			this->maskedTextBox22->Mask = L"00";
			this->maskedTextBox22->Name = L"maskedTextBox22";
			this->maskedTextBox22->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox22->TabIndex = 296;
			this->maskedTextBox22->Text = L"0";
			this->maskedTextBox22->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox23
			// 
			this->maskedTextBox23->Location = System::Drawing::Point(340, 570);
			this->maskedTextBox23->Mask = L"00";
			this->maskedTextBox23->Name = L"maskedTextBox23";
			this->maskedTextBox23->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox23->TabIndex = 295;
			this->maskedTextBox23->Text = L"0";
			this->maskedTextBox23->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox24
			// 
			this->maskedTextBox24->Location = System::Drawing::Point(340, 550);
			this->maskedTextBox24->Mask = L"00";
			this->maskedTextBox24->Name = L"maskedTextBox24";
			this->maskedTextBox24->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox24->TabIndex = 294;
			this->maskedTextBox24->Text = L"0";
			this->maskedTextBox24->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox25
			// 
			this->maskedTextBox25->Location = System::Drawing::Point(340, 529);
			this->maskedTextBox25->Mask = L"00";
			this->maskedTextBox25->Name = L"maskedTextBox25";
			this->maskedTextBox25->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox25->TabIndex = 293;
			this->maskedTextBox25->Text = L"0";
			this->maskedTextBox25->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox26
			// 
			this->maskedTextBox26->Location = System::Drawing::Point(340, 510);
			this->maskedTextBox26->Mask = L"00";
			this->maskedTextBox26->Name = L"maskedTextBox26";
			this->maskedTextBox26->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox26->TabIndex = 292;
			this->maskedTextBox26->Text = L"0";
			this->maskedTextBox26->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox27
			// 
			this->maskedTextBox27->Location = System::Drawing::Point(340, 490);
			this->maskedTextBox27->Mask = L"00";
			this->maskedTextBox27->Name = L"maskedTextBox27";
			this->maskedTextBox27->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox27->TabIndex = 291;
			this->maskedTextBox27->Text = L"0";
			this->maskedTextBox27->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox28
			// 
			this->maskedTextBox28->Location = System::Drawing::Point(340, 470);
			this->maskedTextBox28->Mask = L"00";
			this->maskedTextBox28->Name = L"maskedTextBox28";
			this->maskedTextBox28->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox28->TabIndex = 290;
			this->maskedTextBox28->Text = L"0";
			this->maskedTextBox28->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox29
			// 
			this->maskedTextBox29->Location = System::Drawing::Point(340, 449);
			this->maskedTextBox29->Mask = L"00";
			this->maskedTextBox29->Name = L"maskedTextBox29";
			this->maskedTextBox29->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox29->TabIndex = 289;
			this->maskedTextBox29->Text = L"0";
			this->maskedTextBox29->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox30
			// 
			this->maskedTextBox30->Location = System::Drawing::Point(340, 430);
			this->maskedTextBox30->Mask = L"00";
			this->maskedTextBox30->Name = L"maskedTextBox30";
			this->maskedTextBox30->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox30->TabIndex = 288;
			this->maskedTextBox30->Text = L"0";
			this->maskedTextBox30->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox31
			// 
			this->maskedTextBox31->Location = System::Drawing::Point(340, 410);
			this->maskedTextBox31->Mask = L"00";
			this->maskedTextBox31->Name = L"maskedTextBox31";
			this->maskedTextBox31->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox31->TabIndex = 287;
			this->maskedTextBox31->Text = L"0";
			this->maskedTextBox31->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox32
			// 
			this->maskedTextBox32->Location = System::Drawing::Point(340, 390);
			this->maskedTextBox32->Mask = L"00";
			this->maskedTextBox32->Name = L"maskedTextBox32";
			this->maskedTextBox32->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox32->TabIndex = 286;
			this->maskedTextBox32->Text = L"0";
			this->maskedTextBox32->ValidatingType = System::Int32::typeid;
			// 
			// label244
			// 
			this->label244->AutoSize = true;
			this->label244->Location = System::Drawing::Point(10, 30);
			this->label244->Name = L"label244";
			this->label244->Size = System::Drawing::Size(64, 13);
			this->label244->TabIndex = 0;
			this->label244->Text = L"Wytrwa³oœæ";
			// 
			// label245
			// 
			this->label245->AutoSize = true;
			this->label245->Location = System::Drawing::Point(10, 60);
			this->label245->Name = L"label245";
			this->label245->Size = System::Drawing::Size(43, 13);
			this->label245->TabIndex = 1;
			this->label245->Text = L"Refleks";
			// 
			// label246
			// 
			this->label246->AutoSize = true;
			this->label246->Location = System::Drawing::Point(10, 90);
			this->label246->Name = L"label246";
			this->label246->Size = System::Drawing::Size(32, 13);
			this->label246->TabIndex = 2;
			this->label246->Text = L"Wola";
			// 
			// label247
			// 
			this->label247->AutoSize = true;
			this->label247->Location = System::Drawing::Point(90, 9);
			this->label247->Name = L"label247";
			this->label247->Size = System::Drawing::Size(34, 13);
			this->label247->TabIndex = 3;
			this->label247->Text = L"Suma";
			// 
			// label248
			// 
			this->label248->AutoSize = true;
			this->label248->Location = System::Drawing::Point(94, 30);
			this->label248->Name = L"label248";
			this->label248->Size = System::Drawing::Size(13, 13);
			this->label248->TabIndex = 4;
			this->label248->Text = L"0";
			// 
			// label249
			// 
			this->label249->AutoSize = true;
			this->label249->Location = System::Drawing::Point(94, 60);
			this->label249->Name = L"label249";
			this->label249->Size = System::Drawing::Size(13, 13);
			this->label249->TabIndex = 5;
			this->label249->Text = L"0";
			// 
			// label250
			// 
			this->label250->AutoSize = true;
			this->label250->Location = System::Drawing::Point(94, 90);
			this->label250->Name = L"label250";
			this->label250->Size = System::Drawing::Size(13, 13);
			this->label250->TabIndex = 6;
			this->label250->Text = L"0";
			// 
			// label251
			// 
			this->label251->AutoSize = true;
			this->label251->Location = System::Drawing::Point(130, 9);
			this->label251->Name = L"label251";
			this->label251->Size = System::Drawing::Size(45, 13);
			this->label251->TabIndex = 7;
			this->label251->Text = L"Bazowa";
			// 
			// label252
			// 
			this->label252->AutoSize = true;
			this->label252->Location = System::Drawing::Point(136, 90);
			this->label252->Name = L"label252";
			this->label252->Size = System::Drawing::Size(13, 13);
			this->label252->TabIndex = 10;
			this->label252->Text = L"0";
			// 
			// label253
			// 
			this->label253->AutoSize = true;
			this->label253->Location = System::Drawing::Point(136, 60);
			this->label253->Name = L"label253";
			this->label253->Size = System::Drawing::Size(13, 13);
			this->label253->TabIndex = 9;
			this->label253->Text = L"0";
			// 
			// label254
			// 
			this->label254->AutoSize = true;
			this->label254->Location = System::Drawing::Point(136, 30);
			this->label254->Name = L"label254";
			this->label254->Size = System::Drawing::Size(13, 13);
			this->label254->TabIndex = 8;
			this->label254->Text = L"0";
			// 
			// label255
			// 
			this->label255->AutoSize = true;
			this->label255->Location = System::Drawing::Point(185, 9);
			this->label255->Name = L"label255";
			this->label255->Size = System::Drawing::Size(28, 13);
			this->label255->TabIndex = 11;
			this->label255->Text = L"Mod";
			// 
			// label256
			// 
			this->label256->AutoSize = true;
			this->label256->Location = System::Drawing::Point(184, 90);
			this->label256->Name = L"label256";
			this->label256->Size = System::Drawing::Size(13, 13);
			this->label256->TabIndex = 14;
			this->label256->Text = L"0";
			// 
			// label257
			// 
			this->label257->AutoSize = true;
			this->label257->Location = System::Drawing::Point(184, 60);
			this->label257->Name = L"label257";
			this->label257->Size = System::Drawing::Size(13, 13);
			this->label257->TabIndex = 13;
			this->label257->Text = L"0";
			// 
			// label258
			// 
			this->label258->AutoSize = true;
			this->label258->Location = System::Drawing::Point(184, 30);
			this->label258->Name = L"label258";
			this->label258->Size = System::Drawing::Size(13, 13);
			this->label258->TabIndex = 12;
			this->label258->Text = L"0";
			// 
			// label259
			// 
			this->label259->AutoSize = true;
			this->label259->Location = System::Drawing::Point(219, 10);
			this->label259->Name = L"label259";
			this->label259->Size = System::Drawing::Size(55, 13);
			this->label259->TabIndex = 15;
			this->label259->Text = L"Mod Mag.";
			// 
			// maskedTextBox33
			// 
			this->maskedTextBox33->Location = System::Drawing::Point(232, 90);
			this->maskedTextBox33->Mask = L"00";
			this->maskedTextBox33->Name = L"maskedTextBox33";
			this->maskedTextBox33->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox33->TabIndex = 304;
			this->maskedTextBox33->Text = L"0";
			this->maskedTextBox33->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox34
			// 
			this->maskedTextBox34->Location = System::Drawing::Point(232, 60);
			this->maskedTextBox34->Mask = L"00";
			this->maskedTextBox34->Name = L"maskedTextBox34";
			this->maskedTextBox34->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox34->TabIndex = 303;
			this->maskedTextBox34->Text = L"0";
			this->maskedTextBox34->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox35
			// 
			this->maskedTextBox35->Location = System::Drawing::Point(232, 30);
			this->maskedTextBox35->Mask = L"00";
			this->maskedTextBox35->Name = L"maskedTextBox35";
			this->maskedTextBox35->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox35->TabIndex = 302;
			this->maskedTextBox35->Text = L"0";
			this->maskedTextBox35->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox36
			// 
			this->maskedTextBox36->Location = System::Drawing::Point(291, 90);
			this->maskedTextBox36->Mask = L"00";
			this->maskedTextBox36->Name = L"maskedTextBox36";
			this->maskedTextBox36->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox36->TabIndex = 307;
			this->maskedTextBox36->Text = L"0";
			this->maskedTextBox36->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox37
			// 
			this->maskedTextBox37->Location = System::Drawing::Point(291, 60);
			this->maskedTextBox37->Mask = L"00";
			this->maskedTextBox37->Name = L"maskedTextBox37";
			this->maskedTextBox37->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox37->TabIndex = 306;
			this->maskedTextBox37->Text = L"0";
			this->maskedTextBox37->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox38
			// 
			this->maskedTextBox38->Location = System::Drawing::Point(291, 30);
			this->maskedTextBox38->Mask = L"00";
			this->maskedTextBox38->Name = L"maskedTextBox38";
			this->maskedTextBox38->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox38->TabIndex = 305;
			this->maskedTextBox38->Text = L"0";
			this->maskedTextBox38->ValidatingType = System::Int32::typeid;
			// 
			// label260
			// 
			this->label260->AutoSize = true;
			this->label260->Location = System::Drawing::Point(280, 10);
			this->label260->Name = L"label260";
			this->label260->Size = System::Drawing::Size(28, 13);
			this->label260->TabIndex = 308;
			this->label260->Text = L"Inne";
			// 
			// dodajKarteFroms
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1096, 773);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBoxUmiejetnosc);
			this->Controls->Add(this->hpNPancerz);
			this->Controls->Add(this->Atrybuty);
			this->Controls->Add(this->Nazewnictwo);
			this->Name = L"dodajKarteFroms";
			this->Text = L"Dodaj Now¹ Kartê";
			this->Load += gcnew System::EventHandler(this, &dodajKarteFroms::dodajKarteFroms_Load);
			this->Nazewnictwo->ResumeLayout(false);
			this->Nazewnictwo->PerformLayout();
			this->Atrybuty->ResumeLayout(false);
			this->Atrybuty->PerformLayout();
			this->hpNPancerz->ResumeLayout(false);
			this->hpNPancerz->PerformLayout();
			this->groupBoxUmiejetnosc->ResumeLayout(false);
			this->groupBoxUmiejetnosc->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
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
private: System::Void groupBoxUmiejetnosc_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void labelAlechemiaPlus_Click(System::Object^  sender, System::EventArgs^  e) {
	labelWartoscAlchemia->Text = (int::Parse(labelWartoscAlchemia->Text) + 1).ToString();
}

};
}
