#pragma once
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h> 

namespace KartaPostaci_Projekt {

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
private: System::Windows::Forms::Label^  labelWyczucieKierunku;

private: System::Windows::Forms::Label^  labelWyczuciePobudek;

private: System::Windows::Forms::Label^  labelWspinaczka;

private: System::Windows::Forms::Label^  labelWrozenie;

private: System::Windows::Forms::Label^  labelUpadki;

private: System::Windows::Forms::Label^  labelUnieszkodliwanie;

private: System::Windows::Forms::Label^  labelUkrywanie;

private: System::Windows::Forms::Label^  labelTajniki;

private: System::Windows::Forms::Label^  labelSzacowanie;

private: System::Windows::Forms::Label^  labelStosowanieMeg;

private: System::Windows::Forms::Label^  labelStosowanieLiny;

private: System::Windows::Forms::Label^  labelPostepowanie;

private: System::Windows::Forms::Label^  labelKoncetracja;

private: System::Windows::Forms::Label^  labelZastraszanie;

private: System::Windows::Forms::Label^  labelJezdziectwo;

private: System::Windows::Forms::Label^  labelSkakanie;

private: System::Windows::Forms::Label^  labelRownowaga;

private: System::Windows::Forms::Label^  labelPrzeszukiwania;

private: System::Windows::Forms::Label^  labelPrzebieranie;

private: System::Windows::Forms::Label^  labelPolslowka;

private: System::Windows::Forms::Label^  labelOtwieranieZamkow;

private: System::Windows::Forms::Label^  labelOdcyfrowanieapisow;

private: System::Windows::Forms::Label^  labelNasluchwianie;

private: System::Windows::Forms::Label^  labelLeczenie;

private: System::Windows::Forms::Label^  labelKradzieszKieszonkowa;

private: System::Windows::Forms::Label^  labelFalszerstwo;

private: System::Windows::Forms::Label^  labelDyplomacja;

private: System::Windows::Forms::Label^  labelCzytanieZWarg;

private: System::Windows::Forms::Label^  labelCzarostwo;

private: System::Windows::Forms::Label^  labelCichePoruszanie;

private: System::Windows::Forms::Label^  labelBlefowanie;

private: System::Windows::Forms::Label^  labelAchemia;

private: System::Windows::Forms::Button^  buttonUmiejetnoscUaktualnij;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::CheckBox^  checkBoxCzarostwo;

private: System::Windows::Forms::CheckBox^  checkBoxCichePoruszanie;

private: System::Windows::Forms::CheckBox^  checkBoxBlefowanie;

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
private: System::Windows::Forms::Label^  labelWartoscDyplomacja;

private: System::Windows::Forms::Label^  labelWartoscCzytanieZWarg;

private: System::Windows::Forms::Label^  labelWartoscCzarostwo;

private: System::Windows::Forms::Label^  labelWartoscCichePoruszanie;

private: System::Windows::Forms::Label^  labelWartoscBlefowanie;

private: System::Windows::Forms::Label^  labelWartoscAlchemia;

private: System::Windows::Forms::Label^  label86;
private: System::Windows::Forms::Label^  label87;
private: System::Windows::Forms::Label^  label88;
private: System::Windows::Forms::Label^  labelInt9;
private: System::Windows::Forms::Label^  labelZr7;


private: System::Windows::Forms::Label^  labelInt8;
private: System::Windows::Forms::Label^  labelZr6;


private: System::Windows::Forms::Label^  label93;
private: System::Windows::Forms::Label^  labelInt7;
private: System::Windows::Forms::Label^  labelCha6;
private: System::Windows::Forms::Label^  labelZr5;



private: System::Windows::Forms::Label^  labelCha5;

private: System::Windows::Forms::Label^  label98;
private: System::Windows::Forms::Label^  labelCha4;


private: System::Windows::Forms::Label^  label100;
private: System::Windows::Forms::Label^  label101;
private: System::Windows::Forms::Label^  labelZr4;

private: System::Windows::Forms::Label^  labelInt6;
private: System::Windows::Forms::Label^  labelCha3;


private: System::Windows::Forms::Label^  label105;
private: System::Windows::Forms::Label^  labelZr3;

private: System::Windows::Forms::Label^  labelInt5;

private: System::Windows::Forms::Label^  label108;
private: System::Windows::Forms::Label^  label109;
private: System::Windows::Forms::Label^  labelZr2;

private: System::Windows::Forms::Label^  labelInt4;
private: System::Windows::Forms::Label^  labelCha2;


private: System::Windows::Forms::Label^  labelInt3;

private: System::Windows::Forms::Label^  labelInt2;
private: System::Windows::Forms::Label^  labelZr1;


private: System::Windows::Forms::Label^  labelCha1;

private: System::Windows::Forms::Label^  labelInt1;

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
private: System::Windows::Forms::CheckBox^  checkBoxWyczucieKierunku;
private: System::Windows::Forms::CheckBox^  checkBoxWyczuciePobudek;
private: System::Windows::Forms::CheckBox^  checkBoxWspinaczka;
private: System::Windows::Forms::CheckBox^  checkBoxWrozenie;
private: System::Windows::Forms::CheckBox^  checkBoxUpadki;
private: System::Windows::Forms::CheckBox^  checkBoxUnieszkodliwianie;
private: System::Windows::Forms::CheckBox^  checkBoxUkrywanie;
private: System::Windows::Forms::CheckBox^  checkBoxTajnikiDziczy;
private: System::Windows::Forms::CheckBox^  th;

private: System::Windows::Forms::CheckBox^  checkBoxStosowanieMagRzeczy;
private: System::Windows::Forms::CheckBox^  checkBoxStosowanieLiny;
private: System::Windows::Forms::CheckBox^  checkBoxPostepowanieZeZwier;












private: System::Windows::Forms::CheckBox^  checkBoxKoncetracja;

private: System::Windows::Forms::CheckBox^  checkBoxZastraszanie;

private: System::Windows::Forms::CheckBox^  checkBoxJezdziectwo;

private: System::Windows::Forms::CheckBox^  checkBoxSkakanie;

private: System::Windows::Forms::CheckBox^  checkBoxRównowaga;

private: System::Windows::Forms::CheckBox^  checkBoxPrzeszukiwanie;

private: System::Windows::Forms::CheckBox^  checkBoxPrzebieranie;

private: System::Windows::Forms::CheckBox^  checkBoxPo³slowka;

private: System::Windows::Forms::CheckBox^  checkBoxOtwieranieZamkow;

private: System::Windows::Forms::CheckBox^  checkBoxOdcyforwywanieZapisow;

private: System::Windows::Forms::CheckBox^  checkBoxNasluchiwanie;

private: System::Windows::Forms::CheckBox^  checkBoxLeczenie;

private: System::Windows::Forms::CheckBox^  checkBoxKradzieszKieszonkowa;

private: System::Windows::Forms::CheckBox^  checkBoxFalszerstwo;

private: System::Windows::Forms::CheckBox^  checkBoxDyplomacja;

private: System::Windows::Forms::CheckBox^  checkBoxCzytanieZWarg;

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
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox39;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox40;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBox41;
private: System::Windows::Forms::Label^  label261;
private: System::Windows::Forms::Label^  label262;
private: System::Windows::Forms::Label^  label263;
private: System::Windows::Forms::Label^  label264;
private: System::Windows::Forms::Label^  label265;
private: System::Windows::Forms::Label^  label266;
private: System::Windows::Forms::Label^  label267;
private: System::Windows::Forms::Label^  label268;
private: System::Windows::Forms::Label^  label269;
private: System::Windows::Forms::Label^  label270;
private: System::Windows::Forms::Label^  label271;
private: System::Windows::Forms::Label^  label272;
private: System::Windows::Forms::Label^  labelCha7;


private: System::Windows::Forms::Label^  label274;
private: System::Windows::Forms::Label^  labelZr8;

private: System::Windows::Forms::Label^  label276;
private: System::Windows::Forms::Label^  label277;
private: System::Windows::Forms::Label^  label278;
private: System::Windows::Forms::CheckBox^  checkBoxZbieranieInformacji;
private: System::Windows::Forms::CheckBox^  checkBoxZauwazanie;
private: System::Windows::Forms::CheckBox^  checkBoxWyzwalanie;
private: System::Windows::Forms::Label^  labelZbieranieInf;

//private: System::Windows::Forms::SaveFileDialog^ KartaPostaci_Projekt::dodajKarteFroms::saveFileDialog1;


private: System::Windows::Forms::Label^  labelZauwazanie;

private: System::Windows::Forms::Label^  labelWyzwalanie;

private: System::Windows::Forms::MaskedTextBox^  maskedTextBox42;
private: System::Windows::Forms::Label^  label282;
private: System::Windows::Forms::Label^  label283;
private: System::Windows::Forms::Label^  label284;
private: System::Windows::Forms::Label^  label285;
private: System::Windows::Forms::Label^  labelCha8;

private: System::Windows::Forms::Label^  label287;
private: System::Windows::Forms::CheckBox^  checkBoxZwierzecaEmpatia;
private: System::Windows::Forms::Label^  labelZwierzecaEmpatia;


private: System::Windows::Forms::GroupBox^  groupBoxAtaki;
private: System::Windows::Forms::Label^  labelMozliweAtaki;
private: System::Windows::Forms::Label^  label289;
private: System::Windows::Forms::GroupBox^  groupBoxBronG;
private: System::Windows::Forms::GroupBox^  groupBoxBronPoboczna;
private: System::Windows::Forms::GroupBox^  groupBoxZbroja;
private: System::Windows::Forms::GroupBox^  groupBoxTarcza;
private: System::Windows::Forms::Label^  labelAtaki;
private: System::Windows::Forms::MaskedTextBox^  maskedTextBoxInneInicjatywa;
private: System::Windows::Forms::Label^  labelInicjatywa;

private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  labelPoziom;
private: System::Windows::Forms::Button^  buttonSave;
private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
private: System::Windows::Forms::Label^  labelwartoscAtakow;
private: System::Windows::Forms::Button^  buttonAtakiUaktualnij;









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
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBoxKarnacja = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->labelPoziom = (gcnew System::Windows::Forms::Label());
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
			this->maskedTextBox42 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label282 = (gcnew System::Windows::Forms::Label());
			this->label283 = (gcnew System::Windows::Forms::Label());
			this->label284 = (gcnew System::Windows::Forms::Label());
			this->label285 = (gcnew System::Windows::Forms::Label());
			this->labelCha8 = (gcnew System::Windows::Forms::Label());
			this->label287 = (gcnew System::Windows::Forms::Label());
			this->checkBoxZwierzecaEmpatia = (gcnew System::Windows::Forms::CheckBox());
			this->labelZwierzecaEmpatia = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox39 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox40 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox41 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label261 = (gcnew System::Windows::Forms::Label());
			this->label262 = (gcnew System::Windows::Forms::Label());
			this->label263 = (gcnew System::Windows::Forms::Label());
			this->label264 = (gcnew System::Windows::Forms::Label());
			this->label265 = (gcnew System::Windows::Forms::Label());
			this->label266 = (gcnew System::Windows::Forms::Label());
			this->label267 = (gcnew System::Windows::Forms::Label());
			this->label268 = (gcnew System::Windows::Forms::Label());
			this->label269 = (gcnew System::Windows::Forms::Label());
			this->label270 = (gcnew System::Windows::Forms::Label());
			this->label271 = (gcnew System::Windows::Forms::Label());
			this->label272 = (gcnew System::Windows::Forms::Label());
			this->labelCha7 = (gcnew System::Windows::Forms::Label());
			this->label274 = (gcnew System::Windows::Forms::Label());
			this->labelZr8 = (gcnew System::Windows::Forms::Label());
			this->label276 = (gcnew System::Windows::Forms::Label());
			this->label277 = (gcnew System::Windows::Forms::Label());
			this->label278 = (gcnew System::Windows::Forms::Label());
			this->checkBoxZbieranieInformacji = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxZauwazanie = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxWyzwalanie = (gcnew System::Windows::Forms::CheckBox());
			this->labelZbieranieInf = (gcnew System::Windows::Forms::Label());
			this->labelZauwazanie = (gcnew System::Windows::Forms::Label());
			this->labelWyzwalanie = (gcnew System::Windows::Forms::Label());
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
			this->maskedTextBox9 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox10 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox11 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox12 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox13 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox14 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox15 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox16 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox5 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox6 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox7 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox8 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label236 = (gcnew System::Windows::Forms::Label());
			this->label237 = (gcnew System::Windows::Forms::Label());
			this->label238 = (gcnew System::Windows::Forms::Label());
			this->label239 = (gcnew System::Windows::Forms::Label());
			this->label240 = (gcnew System::Windows::Forms::Label());
			this->label241 = (gcnew System::Windows::Forms::Label());
			this->label242 = (gcnew System::Windows::Forms::Label());
			this->label243 = (gcnew System::Windows::Forms::Label());
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
			this->label188 = (gcnew System::Windows::Forms::Label());
			this->label189 = (gcnew System::Windows::Forms::Label());
			this->label190 = (gcnew System::Windows::Forms::Label());
			this->label191 = (gcnew System::Windows::Forms::Label());
			this->label192 = (gcnew System::Windows::Forms::Label());
			this->label193 = (gcnew System::Windows::Forms::Label());
			this->label194 = (gcnew System::Windows::Forms::Label());
			this->label195 = (gcnew System::Windows::Forms::Label());
			this->label184 = (gcnew System::Windows::Forms::Label());
			this->label185 = (gcnew System::Windows::Forms::Label());
			this->label186 = (gcnew System::Windows::Forms::Label());
			this->label187 = (gcnew System::Windows::Forms::Label());
			this->label182 = (gcnew System::Windows::Forms::Label());
			this->label183 = (gcnew System::Windows::Forms::Label());
			this->label181 = (gcnew System::Windows::Forms::Label());
			this->label180 = (gcnew System::Windows::Forms::Label());
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
			this->label156 = (gcnew System::Windows::Forms::Label());
			this->label157 = (gcnew System::Windows::Forms::Label());
			this->label158 = (gcnew System::Windows::Forms::Label());
			this->label159 = (gcnew System::Windows::Forms::Label());
			this->label160 = (gcnew System::Windows::Forms::Label());
			this->label161 = (gcnew System::Windows::Forms::Label());
			this->label162 = (gcnew System::Windows::Forms::Label());
			this->label163 = (gcnew System::Windows::Forms::Label());
			this->label152 = (gcnew System::Windows::Forms::Label());
			this->label153 = (gcnew System::Windows::Forms::Label());
			this->label154 = (gcnew System::Windows::Forms::Label());
			this->label155 = (gcnew System::Windows::Forms::Label());
			this->label150 = (gcnew System::Windows::Forms::Label());
			this->label151 = (gcnew System::Windows::Forms::Label());
			this->label134 = (gcnew System::Windows::Forms::Label());
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
			this->labelWartoscDyplomacja = (gcnew System::Windows::Forms::Label());
			this->labelWartoscCzytanieZWarg = (gcnew System::Windows::Forms::Label());
			this->labelWartoscCzarostwo = (gcnew System::Windows::Forms::Label());
			this->labelWartoscCichePoruszanie = (gcnew System::Windows::Forms::Label());
			this->labelWartoscBlefowanie = (gcnew System::Windows::Forms::Label());
			this->labelWartoscAlchemia = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->labelInt9 = (gcnew System::Windows::Forms::Label());
			this->labelZr7 = (gcnew System::Windows::Forms::Label());
			this->labelInt8 = (gcnew System::Windows::Forms::Label());
			this->labelZr6 = (gcnew System::Windows::Forms::Label());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->labelInt7 = (gcnew System::Windows::Forms::Label());
			this->labelCha6 = (gcnew System::Windows::Forms::Label());
			this->labelZr5 = (gcnew System::Windows::Forms::Label());
			this->labelCha5 = (gcnew System::Windows::Forms::Label());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->labelCha4 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->labelZr4 = (gcnew System::Windows::Forms::Label());
			this->labelInt6 = (gcnew System::Windows::Forms::Label());
			this->labelCha3 = (gcnew System::Windows::Forms::Label());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->labelZr3 = (gcnew System::Windows::Forms::Label());
			this->labelInt5 = (gcnew System::Windows::Forms::Label());
			this->label108 = (gcnew System::Windows::Forms::Label());
			this->label109 = (gcnew System::Windows::Forms::Label());
			this->labelZr2 = (gcnew System::Windows::Forms::Label());
			this->labelInt4 = (gcnew System::Windows::Forms::Label());
			this->labelCha2 = (gcnew System::Windows::Forms::Label());
			this->labelInt3 = (gcnew System::Windows::Forms::Label());
			this->labelInt2 = (gcnew System::Windows::Forms::Label());
			this->labelZr1 = (gcnew System::Windows::Forms::Label());
			this->labelCha1 = (gcnew System::Windows::Forms::Label());
			this->labelInt1 = (gcnew System::Windows::Forms::Label());
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
			this->checkBoxWyczucieKierunku = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxWyczuciePobudek = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxWspinaczka = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxWrozenie = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxUpadki = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxUnieszkodliwianie = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxUkrywanie = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxTajnikiDziczy = (gcnew System::Windows::Forms::CheckBox());
			this->th = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxStosowanieMagRzeczy = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxStosowanieLiny = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxPostepowanieZeZwier = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxKoncetracja = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxZastraszanie = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxJezdziectwo = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxSkakanie = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxRównowaga = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxPrzeszukiwanie = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxPrzebieranie = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxPo³slowka = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxOtwieranieZamkow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxOdcyforwywanieZapisow = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxNasluchiwanie = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxLeczenie = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxKradzieszKieszonkowa = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxFalszerstwo = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxDyplomacja = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxCzytanieZWarg = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxCzarostwo = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxCichePoruszanie = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxBlefowanie = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxAlchemia = (gcnew System::Windows::Forms::CheckBox());
			this->labelWyczucieKierunku = (gcnew System::Windows::Forms::Label());
			this->labelWyczuciePobudek = (gcnew System::Windows::Forms::Label());
			this->labelWspinaczka = (gcnew System::Windows::Forms::Label());
			this->labelWrozenie = (gcnew System::Windows::Forms::Label());
			this->labelUpadki = (gcnew System::Windows::Forms::Label());
			this->labelUnieszkodliwanie = (gcnew System::Windows::Forms::Label());
			this->labelUkrywanie = (gcnew System::Windows::Forms::Label());
			this->labelTajniki = (gcnew System::Windows::Forms::Label());
			this->labelSzacowanie = (gcnew System::Windows::Forms::Label());
			this->labelStosowanieMeg = (gcnew System::Windows::Forms::Label());
			this->labelStosowanieLiny = (gcnew System::Windows::Forms::Label());
			this->labelPostepowanie = (gcnew System::Windows::Forms::Label());
			this->labelKoncetracja = (gcnew System::Windows::Forms::Label());
			this->labelZastraszanie = (gcnew System::Windows::Forms::Label());
			this->labelJezdziectwo = (gcnew System::Windows::Forms::Label());
			this->labelSkakanie = (gcnew System::Windows::Forms::Label());
			this->labelRownowaga = (gcnew System::Windows::Forms::Label());
			this->labelPrzeszukiwania = (gcnew System::Windows::Forms::Label());
			this->labelPrzebieranie = (gcnew System::Windows::Forms::Label());
			this->labelPolslowka = (gcnew System::Windows::Forms::Label());
			this->labelOtwieranieZamkow = (gcnew System::Windows::Forms::Label());
			this->labelOdcyfrowanieapisow = (gcnew System::Windows::Forms::Label());
			this->labelNasluchwianie = (gcnew System::Windows::Forms::Label());
			this->labelLeczenie = (gcnew System::Windows::Forms::Label());
			this->labelKradzieszKieszonkowa = (gcnew System::Windows::Forms::Label());
			this->labelFalszerstwo = (gcnew System::Windows::Forms::Label());
			this->labelDyplomacja = (gcnew System::Windows::Forms::Label());
			this->labelCzytanieZWarg = (gcnew System::Windows::Forms::Label());
			this->labelCzarostwo = (gcnew System::Windows::Forms::Label());
			this->labelCichePoruszanie = (gcnew System::Windows::Forms::Label());
			this->labelBlefowanie = (gcnew System::Windows::Forms::Label());
			this->labelAchemia = (gcnew System::Windows::Forms::Label());
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
			this->labelwartoscAtakow = (gcnew System::Windows::Forms::Label());
			this->labelAtaki = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxInneInicjatywa = (gcnew System::Windows::Forms::MaskedTextBox());
			this->labelInicjatywa = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label260 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox36 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox37 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox38 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox33 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label259 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox34 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label256 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox35 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label257 = (gcnew System::Windows::Forms::Label());
			this->label258 = (gcnew System::Windows::Forms::Label());
			this->label255 = (gcnew System::Windows::Forms::Label());
			this->label252 = (gcnew System::Windows::Forms::Label());
			this->label253 = (gcnew System::Windows::Forms::Label());
			this->label254 = (gcnew System::Windows::Forms::Label());
			this->label251 = (gcnew System::Windows::Forms::Label());
			this->label250 = (gcnew System::Windows::Forms::Label());
			this->label249 = (gcnew System::Windows::Forms::Label());
			this->label248 = (gcnew System::Windows::Forms::Label());
			this->label247 = (gcnew System::Windows::Forms::Label());
			this->label246 = (gcnew System::Windows::Forms::Label());
			this->label245 = (gcnew System::Windows::Forms::Label());
			this->label244 = (gcnew System::Windows::Forms::Label());
			this->groupBoxAtaki = (gcnew System::Windows::Forms::GroupBox());
			this->labelMozliweAtaki = (gcnew System::Windows::Forms::Label());
			this->label289 = (gcnew System::Windows::Forms::Label());
			this->groupBoxBronG = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxBronPoboczna = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxZbroja = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxTarcza = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->buttonAtakiUaktualnij = (gcnew System::Windows::Forms::Button());
			this->Nazewnictwo->SuspendLayout();
			this->Atrybuty->SuspendLayout();
			this->hpNPancerz->SuspendLayout();
			this->groupBoxUmiejetnosc->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBoxAtaki->SuspendLayout();
			this->SuspendLayout();
			// 
			// Nazewnictwo
			// 
			this->Nazewnictwo->Controls->Add(this->label22);
			this->Nazewnictwo->Controls->Add(this->textBoxKarnacja);
			this->Nazewnictwo->Controls->Add(this->label23);
			this->Nazewnictwo->Controls->Add(this->labelPoziom);
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
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(432, 76);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(10, 13);
			this->label22->TabIndex = 340;
			this->label22->Text = L"-";
			this->label22->Click += gcnew System::EventHandler(this, &dodajKarteFroms::label22_Click);
			// 
			// textBoxKarnacja
			// 
			this->textBoxKarnacja->Location = System::Drawing::Point(178, 73);
			this->textBoxKarnacja->Name = L"textBoxKarnacja";
			this->textBoxKarnacja->Size = System::Drawing::Size(82, 20);
			this->textBoxKarnacja->TabIndex = 14;
			this->textBoxKarnacja->Text = L"Karnacja";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(396, 76);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(13, 13);
			this->label23->TabIndex = 339;
			this->label23->Text = L"+";
			this->label23->Click += gcnew System::EventHandler(this, &dodajKarteFroms::label23_Click);
			// 
			// labelPoziom
			// 
			this->labelPoziom->AutoSize = true;
			this->labelPoziom->Location = System::Drawing::Point(412, 76);
			this->labelPoziom->Name = L"labelPoziom";
			this->labelPoziom->Size = System::Drawing::Size(13, 13);
			this->labelPoziom->TabIndex = 338;
			this->labelPoziom->Text = L"1";
			// 
			// textBoxW³osy
			// 
			this->textBoxW³osy->Location = System::Drawing::Point(91, 73);
			this->textBoxW³osy->Name = L"textBoxW³osy";
			this->textBoxW³osy->Size = System::Drawing::Size(81, 20);
			this->textBoxW³osy->TabIndex = 13;
			this->textBoxW³osy->Text = L"W³osy";
			// 
			// textBoxOczy
			// 
			this->textBoxOczy->Location = System::Drawing::Point(6, 73);
			this->textBoxOczy->Name = L"textBoxOczy";
			this->textBoxOczy->Size = System::Drawing::Size(79, 20);
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
			this->comboBoxKlasy->SelectedIndexChanged += gcnew System::EventHandler(this, &dodajKarteFroms::comboBoxKlasy_SelectedIndexChanged);
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
			this->textBoxGracza->Location = System::Drawing::Point(267, 73);
			this->textBoxGracza->Name = L"textBoxGracza";
			this->textBoxGracza->Size = System::Drawing::Size(123, 20);
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
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox42);
			this->groupBoxUmiejetnosc->Controls->Add(this->label282);
			this->groupBoxUmiejetnosc->Controls->Add(this->label283);
			this->groupBoxUmiejetnosc->Controls->Add(this->label284);
			this->groupBoxUmiejetnosc->Controls->Add(this->label285);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelCha8);
			this->groupBoxUmiejetnosc->Controls->Add(this->label287);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxZwierzecaEmpatia);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelZwierzecaEmpatia);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox39);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox40);
			this->groupBoxUmiejetnosc->Controls->Add(this->maskedTextBox41);
			this->groupBoxUmiejetnosc->Controls->Add(this->label261);
			this->groupBoxUmiejetnosc->Controls->Add(this->label262);
			this->groupBoxUmiejetnosc->Controls->Add(this->label263);
			this->groupBoxUmiejetnosc->Controls->Add(this->label264);
			this->groupBoxUmiejetnosc->Controls->Add(this->label265);
			this->groupBoxUmiejetnosc->Controls->Add(this->label266);
			this->groupBoxUmiejetnosc->Controls->Add(this->label267);
			this->groupBoxUmiejetnosc->Controls->Add(this->label268);
			this->groupBoxUmiejetnosc->Controls->Add(this->label269);
			this->groupBoxUmiejetnosc->Controls->Add(this->label270);
			this->groupBoxUmiejetnosc->Controls->Add(this->label271);
			this->groupBoxUmiejetnosc->Controls->Add(this->label272);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelCha7);
			this->groupBoxUmiejetnosc->Controls->Add(this->label274);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelZr8);
			this->groupBoxUmiejetnosc->Controls->Add(this->label276);
			this->groupBoxUmiejetnosc->Controls->Add(this->label277);
			this->groupBoxUmiejetnosc->Controls->Add(this->label278);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxZbieranieInformacji);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxZauwazanie);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxWyzwalanie);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelZbieranieInf);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelZauwazanie);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelWyzwalanie);
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
			this->groupBoxUmiejetnosc->Controls->Add(this->labelWartoscDyplomacja);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelWartoscCzytanieZWarg);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelWartoscCzarostwo);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelWartoscCichePoruszanie);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelWartoscBlefowanie);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelWartoscAlchemia);
			this->groupBoxUmiejetnosc->Controls->Add(this->label86);
			this->groupBoxUmiejetnosc->Controls->Add(this->label87);
			this->groupBoxUmiejetnosc->Controls->Add(this->label88);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelInt9);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelZr7);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelInt8);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelZr6);
			this->groupBoxUmiejetnosc->Controls->Add(this->label93);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelInt7);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelCha6);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelZr5);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelCha5);
			this->groupBoxUmiejetnosc->Controls->Add(this->label98);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelCha4);
			this->groupBoxUmiejetnosc->Controls->Add(this->label100);
			this->groupBoxUmiejetnosc->Controls->Add(this->label101);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelZr4);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelInt6);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelCha3);
			this->groupBoxUmiejetnosc->Controls->Add(this->label105);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelZr3);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelInt5);
			this->groupBoxUmiejetnosc->Controls->Add(this->label108);
			this->groupBoxUmiejetnosc->Controls->Add(this->label109);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelZr2);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelInt4);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelCha2);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelInt3);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelInt2);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelZr1);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelCha1);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelInt1);
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
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxWyczucieKierunku);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxWyczuciePobudek);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxWspinaczka);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxWrozenie);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxUpadki);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxUnieszkodliwianie);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxUkrywanie);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxTajnikiDziczy);
			this->groupBoxUmiejetnosc->Controls->Add(this->th);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxStosowanieMagRzeczy);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxStosowanieLiny);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxPostepowanieZeZwier);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxKoncetracja);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxZastraszanie);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxJezdziectwo);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxSkakanie);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxRównowaga);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxPrzeszukiwanie);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxPrzebieranie);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxPo³slowka);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxOtwieranieZamkow);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxOdcyforwywanieZapisow);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxNasluchiwanie);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxLeczenie);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxKradzieszKieszonkowa);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxFalszerstwo);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxDyplomacja);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxCzytanieZWarg);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxCzarostwo);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxCichePoruszanie);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxBlefowanie);
			this->groupBoxUmiejetnosc->Controls->Add(this->checkBoxAlchemia);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelWyczucieKierunku);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelWyczuciePobudek);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelWspinaczka);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelWrozenie);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelUpadki);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelUnieszkodliwanie);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelUkrywanie);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelTajniki);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelSzacowanie);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelStosowanieMeg);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelStosowanieLiny);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelPostepowanie);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelKoncetracja);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelZastraszanie);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelJezdziectwo);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelSkakanie);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelRownowaga);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelPrzeszukiwania);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelPrzebieranie);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelPolslowka);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelOtwieranieZamkow);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelOdcyfrowanieapisow);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelNasluchwianie);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelLeczenie);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelKradzieszKieszonkowa);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelFalszerstwo);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelDyplomacja);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelCzytanieZWarg);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelCzarostwo);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelCichePoruszanie);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelBlefowanie);
			this->groupBoxUmiejetnosc->Controls->Add(this->labelAchemia);
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
			this->groupBoxUmiejetnosc->Size = System::Drawing::Size(462, 798);
			this->groupBoxUmiejetnosc->TabIndex = 3;
			this->groupBoxUmiejetnosc->TabStop = false;
			this->groupBoxUmiejetnosc->Text = L"Umiejêtnoœci";
			// 
			// maskedTextBox42
			// 
			this->maskedTextBox42->Location = System::Drawing::Point(340, 769);
			this->maskedTextBox42->Mask = L"00";
			this->maskedTextBox42->Name = L"maskedTextBox42";
			this->maskedTextBox42->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox42->TabIndex = 337;
			this->maskedTextBox42->Text = L"0";
			this->maskedTextBox42->ValidatingType = System::Int32::typeid;
			// 
			// label282
			// 
			this->label282->AutoSize = true;
			this->label282->Location = System::Drawing::Point(405, 770);
			this->label282->Name = L"label282";
			this->label282->Size = System::Drawing::Size(13, 13);
			this->label282->TabIndex = 336;
			this->label282->Text = L"0";
			// 
			// label283
			// 
			this->label283->AutoSize = true;
			this->label283->Location = System::Drawing::Point(300, 770);
			this->label283->Name = L"label283";
			this->label283->Size = System::Drawing::Size(10, 13);
			this->label283->TabIndex = 335;
			this->label283->Text = L"-";
			// 
			// label284
			// 
			this->label284->AutoSize = true;
			this->label284->Location = System::Drawing::Point(255, 770);
			this->label284->Name = L"label284";
			this->label284->Size = System::Drawing::Size(13, 13);
			this->label284->TabIndex = 334;
			this->label284->Text = L"+";
			// 
			// label285
			// 
			this->label285->AutoSize = true;
			this->label285->Location = System::Drawing::Point(277, 770);
			this->label285->Name = L"label285";
			this->label285->Size = System::Drawing::Size(13, 13);
			this->label285->TabIndex = 333;
			this->label285->Text = L"0";
			// 
			// labelCha8
			// 
			this->labelCha8->AutoSize = true;
			this->labelCha8->Location = System::Drawing::Point(217, 770);
			this->labelCha8->Name = L"labelCha8";
			this->labelCha8->Size = System::Drawing::Size(13, 13);
			this->labelCha8->TabIndex = 332;
			this->labelCha8->Text = L"0";
			// 
			// label287
			// 
			this->label287->AutoSize = true;
			this->label287->Location = System::Drawing::Point(170, 770);
			this->label287->Name = L"label287";
			this->label287->Size = System::Drawing::Size(26, 13);
			this->label287->TabIndex = 331;
			this->label287->Text = L"Cha";
			// 
			// checkBoxZwierzecaEmpatia
			// 
			this->checkBoxZwierzecaEmpatia->AutoSize = true;
			this->checkBoxZwierzecaEmpatia->Location = System::Drawing::Point(30, 770);
			this->checkBoxZwierzecaEmpatia->Name = L"checkBoxZwierzecaEmpatia";
			this->checkBoxZwierzecaEmpatia->Size = System::Drawing::Size(116, 17);
			this->checkBoxZwierzecaEmpatia->TabIndex = 330;
			this->checkBoxZwierzecaEmpatia->Text = L"Zwierzêca Empatia";
			this->checkBoxZwierzecaEmpatia->UseVisualStyleBackColor = true;
			// 
			// labelZwierzecaEmpatia
			// 
			this->labelZwierzecaEmpatia->AutoSize = true;
			this->labelZwierzecaEmpatia->Location = System::Drawing::Point(9, 770);
			this->labelZwierzecaEmpatia->Name = L"labelZwierzecaEmpatia";
			this->labelZwierzecaEmpatia->Size = System::Drawing::Size(12, 13);
			this->labelZwierzecaEmpatia->TabIndex = 329;
			this->labelZwierzecaEmpatia->Text = L"x";
			// 
			// maskedTextBox39
			// 
			this->maskedTextBox39->Location = System::Drawing::Point(340, 749);
			this->maskedTextBox39->Mask = L"00";
			this->maskedTextBox39->Name = L"maskedTextBox39";
			this->maskedTextBox39->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox39->TabIndex = 328;
			this->maskedTextBox39->Text = L"0";
			this->maskedTextBox39->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox40
			// 
			this->maskedTextBox40->Location = System::Drawing::Point(340, 730);
			this->maskedTextBox40->Mask = L"00";
			this->maskedTextBox40->Name = L"maskedTextBox40";
			this->maskedTextBox40->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox40->TabIndex = 327;
			this->maskedTextBox40->Text = L"0";
			this->maskedTextBox40->ValidatingType = System::Int32::typeid;
			// 
			// maskedTextBox41
			// 
			this->maskedTextBox41->Location = System::Drawing::Point(340, 710);
			this->maskedTextBox41->Mask = L"00";
			this->maskedTextBox41->Name = L"maskedTextBox41";
			this->maskedTextBox41->Size = System::Drawing::Size(20, 20);
			this->maskedTextBox41->TabIndex = 326;
			this->maskedTextBox41->Text = L"0";
			this->maskedTextBox41->ValidatingType = System::Int32::typeid;
			// 
			// label261
			// 
			this->label261->AutoSize = true;
			this->label261->Location = System::Drawing::Point(405, 750);
			this->label261->Name = L"label261";
			this->label261->Size = System::Drawing::Size(13, 13);
			this->label261->TabIndex = 325;
			this->label261->Text = L"0";
			// 
			// label262
			// 
			this->label262->AutoSize = true;
			this->label262->Location = System::Drawing::Point(405, 730);
			this->label262->Name = L"label262";
			this->label262->Size = System::Drawing::Size(13, 13);
			this->label262->TabIndex = 324;
			this->label262->Text = L"0";
			// 
			// label263
			// 
			this->label263->AutoSize = true;
			this->label263->Location = System::Drawing::Point(405, 710);
			this->label263->Name = L"label263";
			this->label263->Size = System::Drawing::Size(13, 13);
			this->label263->TabIndex = 323;
			this->label263->Text = L"0";
			// 
			// label264
			// 
			this->label264->AutoSize = true;
			this->label264->Location = System::Drawing::Point(300, 750);
			this->label264->Name = L"label264";
			this->label264->Size = System::Drawing::Size(10, 13);
			this->label264->TabIndex = 322;
			this->label264->Text = L"-";
			// 
			// label265
			// 
			this->label265->AutoSize = true;
			this->label265->Location = System::Drawing::Point(300, 730);
			this->label265->Name = L"label265";
			this->label265->Size = System::Drawing::Size(10, 13);
			this->label265->TabIndex = 321;
			this->label265->Text = L"-";
			// 
			// label266
			// 
			this->label266->AutoSize = true;
			this->label266->Location = System::Drawing::Point(300, 710);
			this->label266->Name = L"label266";
			this->label266->Size = System::Drawing::Size(10, 13);
			this->label266->TabIndex = 320;
			this->label266->Text = L"-";
			// 
			// label267
			// 
			this->label267->AutoSize = true;
			this->label267->Location = System::Drawing::Point(255, 750);
			this->label267->Name = L"label267";
			this->label267->Size = System::Drawing::Size(13, 13);
			this->label267->TabIndex = 319;
			this->label267->Text = L"+";
			// 
			// label268
			// 
			this->label268->AutoSize = true;
			this->label268->Location = System::Drawing::Point(255, 730);
			this->label268->Name = L"label268";
			this->label268->Size = System::Drawing::Size(13, 13);
			this->label268->TabIndex = 318;
			this->label268->Text = L"+";
			// 
			// label269
			// 
			this->label269->AutoSize = true;
			this->label269->Location = System::Drawing::Point(255, 710);
			this->label269->Name = L"label269";
			this->label269->Size = System::Drawing::Size(13, 13);
			this->label269->TabIndex = 317;
			this->label269->Text = L"+";
			// 
			// label270
			// 
			this->label270->AutoSize = true;
			this->label270->Location = System::Drawing::Point(277, 750);
			this->label270->Name = L"label270";
			this->label270->Size = System::Drawing::Size(13, 13);
			this->label270->TabIndex = 316;
			this->label270->Text = L"0";
			// 
			// label271
			// 
			this->label271->AutoSize = true;
			this->label271->Location = System::Drawing::Point(277, 730);
			this->label271->Name = L"label271";
			this->label271->Size = System::Drawing::Size(13, 13);
			this->label271->TabIndex = 315;
			this->label271->Text = L"0";
			// 
			// label272
			// 
			this->label272->AutoSize = true;
			this->label272->Location = System::Drawing::Point(277, 710);
			this->label272->Name = L"label272";
			this->label272->Size = System::Drawing::Size(13, 13);
			this->label272->TabIndex = 314;
			this->label272->Text = L"0";
			// 
			// labelCha7
			// 
			this->labelCha7->AutoSize = true;
			this->labelCha7->Location = System::Drawing::Point(217, 750);
			this->labelCha7->Name = L"labelCha7";
			this->labelCha7->Size = System::Drawing::Size(13, 13);
			this->labelCha7->TabIndex = 313;
			this->labelCha7->Text = L"0";
			// 
			// label274
			// 
			this->label274->AutoSize = true;
			this->label274->Location = System::Drawing::Point(217, 730);
			this->label274->Name = L"label274";
			this->label274->Size = System::Drawing::Size(13, 13);
			this->label274->TabIndex = 312;
			this->label274->Text = L"0";
			// 
			// labelZr8
			// 
			this->labelZr8->AutoSize = true;
			this->labelZr8->Location = System::Drawing::Point(217, 710);
			this->labelZr8->Name = L"labelZr8";
			this->labelZr8->Size = System::Drawing::Size(13, 13);
			this->labelZr8->TabIndex = 311;
			this->labelZr8->Text = L"0";
			// 
			// label276
			// 
			this->label276->AutoSize = true;
			this->label276->Location = System::Drawing::Point(170, 750);
			this->label276->Name = L"label276";
			this->label276->Size = System::Drawing::Size(26, 13);
			this->label276->TabIndex = 310;
			this->label276->Text = L"Cha";
			// 
			// label277
			// 
			this->label277->AutoSize = true;
			this->label277->Location = System::Drawing::Point(170, 730);
			this->label277->Name = L"label277";
			this->label277->Size = System::Drawing::Size(22, 13);
			this->label277->TabIndex = 309;
			this->label277->Text = L"Md";
			// 
			// label278
			// 
			this->label278->AutoSize = true;
			this->label278->Location = System::Drawing::Point(170, 710);
			this->label278->Name = L"label278";
			this->label278->Size = System::Drawing::Size(17, 13);
			this->label278->TabIndex = 308;
			this->label278->Text = L"Zr";
			// 
			// checkBoxZbieranieInformacji
			// 
			this->checkBoxZbieranieInformacji->AutoSize = true;
			this->checkBoxZbieranieInformacji->Location = System::Drawing::Point(30, 750);
			this->checkBoxZbieranieInformacji->Name = L"checkBoxZbieranieInformacji";
			this->checkBoxZbieranieInformacji->Size = System::Drawing::Size(118, 17);
			this->checkBoxZbieranieInformacji->TabIndex = 307;
			this->checkBoxZbieranieInformacji->Text = L"Zbieranie Informacji";
			this->checkBoxZbieranieInformacji->UseVisualStyleBackColor = true;
			// 
			// checkBoxZauwazanie
			// 
			this->checkBoxZauwazanie->AutoSize = true;
			this->checkBoxZauwazanie->Location = System::Drawing::Point(30, 730);
			this->checkBoxZauwazanie->Name = L"checkBoxZauwazanie";
			this->checkBoxZauwazanie->Size = System::Drawing::Size(84, 17);
			this->checkBoxZauwazanie->TabIndex = 306;
			this->checkBoxZauwazanie->Text = L"Zauwa¿anie";
			this->checkBoxZauwazanie->UseVisualStyleBackColor = true;
			// 
			// checkBoxWyzwalanie
			// 
			this->checkBoxWyzwalanie->AutoSize = true;
			this->checkBoxWyzwalanie->Location = System::Drawing::Point(30, 710);
			this->checkBoxWyzwalanie->Name = L"checkBoxWyzwalanie";
			this->checkBoxWyzwalanie->Size = System::Drawing::Size(83, 17);
			this->checkBoxWyzwalanie->TabIndex = 305;
			this->checkBoxWyzwalanie->Text = L"Wyzwalanie";
			this->checkBoxWyzwalanie->UseVisualStyleBackColor = true;
			// 
			// labelZbieranieInf
			// 
			this->labelZbieranieInf->AutoSize = true;
			this->labelZbieranieInf->Location = System::Drawing::Point(9, 750);
			this->labelZbieranieInf->Name = L"labelZbieranieInf";
			this->labelZbieranieInf->Size = System::Drawing::Size(12, 13);
			this->labelZbieranieInf->TabIndex = 304;
			this->labelZbieranieInf->Text = L"x";
			// 
			// labelZauwazanie
			// 
			this->labelZauwazanie->AutoSize = true;
			this->labelZauwazanie->Location = System::Drawing::Point(9, 730);
			this->labelZauwazanie->Name = L"labelZauwazanie";
			this->labelZauwazanie->Size = System::Drawing::Size(12, 13);
			this->labelZauwazanie->TabIndex = 303;
			this->labelZauwazanie->Text = L"x";
			// 
			// labelWyzwalanie
			// 
			this->labelWyzwalanie->AutoSize = true;
			this->labelWyzwalanie->Location = System::Drawing::Point(9, 710);
			this->labelWyzwalanie->Name = L"labelWyzwalanie";
			this->labelWyzwalanie->Size = System::Drawing::Size(12, 13);
			this->labelWyzwalanie->TabIndex = 302;
			this->labelWyzwalanie->Text = L"x";
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
			// label181
			// 
			this->label181->AutoSize = true;
			this->label181->Location = System::Drawing::Point(300, 90);
			this->label181->Name = L"label181";
			this->label181->Size = System::Drawing::Size(10, 13);
			this->label181->TabIndex = 207;
			this->label181->Text = L"-";
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
			// label134
			// 
			this->label134->AutoSize = true;
			this->label134->Location = System::Drawing::Point(255, 90);
			this->label134->Name = L"label134";
			this->label134->Size = System::Drawing::Size(13, 13);
			this->label134->TabIndex = 175;
			this->label134->Text = L"+";
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
			// labelWartoscDyplomacja
			// 
			this->labelWartoscDyplomacja->AutoSize = true;
			this->labelWartoscDyplomacja->Location = System::Drawing::Point(277, 170);
			this->labelWartoscDyplomacja->Name = L"labelWartoscDyplomacja";
			this->labelWartoscDyplomacja->Size = System::Drawing::Size(13, 13);
			this->labelWartoscDyplomacja->TabIndex = 145;
			this->labelWartoscDyplomacja->Text = L"0";
			// 
			// labelWartoscCzytanieZWarg
			// 
			this->labelWartoscCzytanieZWarg->AutoSize = true;
			this->labelWartoscCzytanieZWarg->Location = System::Drawing::Point(277, 150);
			this->labelWartoscCzytanieZWarg->Name = L"labelWartoscCzytanieZWarg";
			this->labelWartoscCzytanieZWarg->Size = System::Drawing::Size(13, 13);
			this->labelWartoscCzytanieZWarg->TabIndex = 144;
			this->labelWartoscCzytanieZWarg->Text = L"0";
			// 
			// labelWartoscCzarostwo
			// 
			this->labelWartoscCzarostwo->AutoSize = true;
			this->labelWartoscCzarostwo->Location = System::Drawing::Point(277, 130);
			this->labelWartoscCzarostwo->Name = L"labelWartoscCzarostwo";
			this->labelWartoscCzarostwo->Size = System::Drawing::Size(13, 13);
			this->labelWartoscCzarostwo->TabIndex = 143;
			this->labelWartoscCzarostwo->Text = L"0";
			// 
			// labelWartoscCichePoruszanie
			// 
			this->labelWartoscCichePoruszanie->AutoSize = true;
			this->labelWartoscCichePoruszanie->Location = System::Drawing::Point(277, 110);
			this->labelWartoscCichePoruszanie->Name = L"labelWartoscCichePoruszanie";
			this->labelWartoscCichePoruszanie->Size = System::Drawing::Size(13, 13);
			this->labelWartoscCichePoruszanie->TabIndex = 142;
			this->labelWartoscCichePoruszanie->Text = L"0";
			// 
			// labelWartoscBlefowanie
			// 
			this->labelWartoscBlefowanie->AutoSize = true;
			this->labelWartoscBlefowanie->Location = System::Drawing::Point(277, 90);
			this->labelWartoscBlefowanie->Name = L"labelWartoscBlefowanie";
			this->labelWartoscBlefowanie->Size = System::Drawing::Size(13, 13);
			this->labelWartoscBlefowanie->TabIndex = 141;
			this->labelWartoscBlefowanie->Text = L"0";
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
			// labelInt9
			// 
			this->labelInt9->AutoSize = true;
			this->labelInt9->Location = System::Drawing::Point(217, 630);
			this->labelInt9->Name = L"labelInt9";
			this->labelInt9->Size = System::Drawing::Size(13, 13);
			this->labelInt9->TabIndex = 136;
			this->labelInt9->Text = L"0";
			// 
			// labelZr7
			// 
			this->labelZr7->AutoSize = true;
			this->labelZr7->Location = System::Drawing::Point(217, 610);
			this->labelZr7->Name = L"labelZr7";
			this->labelZr7->Size = System::Drawing::Size(13, 13);
			this->labelZr7->TabIndex = 135;
			this->labelZr7->Text = L"0";
			// 
			// labelInt8
			// 
			this->labelInt8->AutoSize = true;
			this->labelInt8->Location = System::Drawing::Point(217, 590);
			this->labelInt8->Name = L"labelInt8";
			this->labelInt8->Size = System::Drawing::Size(13, 13);
			this->labelInt8->TabIndex = 134;
			this->labelInt8->Text = L"0";
			// 
			// labelZr6
			// 
			this->labelZr6->AutoSize = true;
			this->labelZr6->Location = System::Drawing::Point(217, 570);
			this->labelZr6->Name = L"labelZr6";
			this->labelZr6->Size = System::Drawing::Size(13, 13);
			this->labelZr6->TabIndex = 133;
			this->labelZr6->Text = L"0";
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
			// labelInt7
			// 
			this->labelInt7->AutoSize = true;
			this->labelInt7->Location = System::Drawing::Point(217, 530);
			this->labelInt7->Name = L"labelInt7";
			this->labelInt7->Size = System::Drawing::Size(13, 13);
			this->labelInt7->TabIndex = 131;
			this->labelInt7->Text = L"0";
			// 
			// labelCha6
			// 
			this->labelCha6->AutoSize = true;
			this->labelCha6->Location = System::Drawing::Point(217, 510);
			this->labelCha6->Name = L"labelCha6";
			this->labelCha6->Size = System::Drawing::Size(13, 13);
			this->labelCha6->TabIndex = 130;
			this->labelCha6->Text = L"0";
			// 
			// labelZr5
			// 
			this->labelZr5->AutoSize = true;
			this->labelZr5->Location = System::Drawing::Point(217, 490);
			this->labelZr5->Name = L"labelZr5";
			this->labelZr5->Size = System::Drawing::Size(13, 13);
			this->labelZr5->TabIndex = 129;
			this->labelZr5->Text = L"0";
			// 
			// labelCha5
			// 
			this->labelCha5->AutoSize = true;
			this->labelCha5->Location = System::Drawing::Point(217, 470);
			this->labelCha5->Name = L"labelCha5";
			this->labelCha5->Size = System::Drawing::Size(13, 13);
			this->labelCha5->TabIndex = 128;
			this->labelCha5->Text = L"0";
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
			// labelCha4
			// 
			this->labelCha4->AutoSize = true;
			this->labelCha4->Location = System::Drawing::Point(217, 430);
			this->labelCha4->Name = L"labelCha4";
			this->labelCha4->Size = System::Drawing::Size(13, 13);
			this->labelCha4->TabIndex = 126;
			this->labelCha4->Text = L"0";
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
			// labelZr4
			// 
			this->labelZr4->AutoSize = true;
			this->labelZr4->Location = System::Drawing::Point(217, 370);
			this->labelZr4->Name = L"labelZr4";
			this->labelZr4->Size = System::Drawing::Size(13, 13);
			this->labelZr4->TabIndex = 123;
			this->labelZr4->Text = L"0";
			// 
			// labelInt6
			// 
			this->labelInt6->AutoSize = true;
			this->labelInt6->Location = System::Drawing::Point(217, 350);
			this->labelInt6->Name = L"labelInt6";
			this->labelInt6->Size = System::Drawing::Size(13, 13);
			this->labelInt6->TabIndex = 122;
			this->labelInt6->Text = L"0";
			// 
			// labelCha3
			// 
			this->labelCha3->AutoSize = true;
			this->labelCha3->Location = System::Drawing::Point(217, 330);
			this->labelCha3->Name = L"labelCha3";
			this->labelCha3->Size = System::Drawing::Size(13, 13);
			this->labelCha3->TabIndex = 121;
			this->labelCha3->Text = L"0";
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
			// labelZr3
			// 
			this->labelZr3->AutoSize = true;
			this->labelZr3->Location = System::Drawing::Point(217, 290);
			this->labelZr3->Name = L"labelZr3";
			this->labelZr3->Size = System::Drawing::Size(13, 13);
			this->labelZr3->TabIndex = 119;
			this->labelZr3->Text = L"0";
			// 
			// labelInt5
			// 
			this->labelInt5->AutoSize = true;
			this->labelInt5->Location = System::Drawing::Point(217, 270);
			this->labelInt5->Name = L"labelInt5";
			this->labelInt5->Size = System::Drawing::Size(13, 13);
			this->labelInt5->TabIndex = 118;
			this->labelInt5->Text = L"0";
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
			// labelZr2
			// 
			this->labelZr2->AutoSize = true;
			this->labelZr2->Location = System::Drawing::Point(217, 210);
			this->labelZr2->Name = L"labelZr2";
			this->labelZr2->Size = System::Drawing::Size(13, 13);
			this->labelZr2->TabIndex = 115;
			this->labelZr2->Text = L"0";
			// 
			// labelInt4
			// 
			this->labelInt4->AutoSize = true;
			this->labelInt4->Location = System::Drawing::Point(217, 190);
			this->labelInt4->Name = L"labelInt4";
			this->labelInt4->Size = System::Drawing::Size(13, 13);
			this->labelInt4->TabIndex = 114;
			this->labelInt4->Text = L"0";
			// 
			// labelCha2
			// 
			this->labelCha2->AutoSize = true;
			this->labelCha2->Location = System::Drawing::Point(217, 170);
			this->labelCha2->Name = L"labelCha2";
			this->labelCha2->Size = System::Drawing::Size(13, 13);
			this->labelCha2->TabIndex = 113;
			this->labelCha2->Text = L"0";
			// 
			// labelInt3
			// 
			this->labelInt3->AutoSize = true;
			this->labelInt3->Location = System::Drawing::Point(217, 150);
			this->labelInt3->Name = L"labelInt3";
			this->labelInt3->Size = System::Drawing::Size(13, 13);
			this->labelInt3->TabIndex = 112;
			this->labelInt3->Text = L"0";
			// 
			// labelInt2
			// 
			this->labelInt2->AutoSize = true;
			this->labelInt2->Location = System::Drawing::Point(217, 130);
			this->labelInt2->Name = L"labelInt2";
			this->labelInt2->Size = System::Drawing::Size(13, 13);
			this->labelInt2->TabIndex = 111;
			this->labelInt2->Text = L"0";
			// 
			// labelZr1
			// 
			this->labelZr1->AutoSize = true;
			this->labelZr1->Location = System::Drawing::Point(217, 110);
			this->labelZr1->Name = L"labelZr1";
			this->labelZr1->Size = System::Drawing::Size(13, 13);
			this->labelZr1->TabIndex = 110;
			this->labelZr1->Text = L"0";
			// 
			// labelCha1
			// 
			this->labelCha1->AutoSize = true;
			this->labelCha1->Location = System::Drawing::Point(217, 90);
			this->labelCha1->Name = L"labelCha1";
			this->labelCha1->Size = System::Drawing::Size(13, 13);
			this->labelCha1->TabIndex = 109;
			this->labelCha1->Text = L"0";
			// 
			// labelInt1
			// 
			this->labelInt1->AutoSize = true;
			this->labelInt1->Location = System::Drawing::Point(217, 70);
			this->labelInt1->Name = L"labelInt1";
			this->labelInt1->Size = System::Drawing::Size(13, 13);
			this->labelInt1->TabIndex = 108;
			this->labelInt1->Text = L"0";
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Location = System::Drawing::Point(170, 690);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(22, 13);
			this->label70->TabIndex = 107;
			this->label70->Text = L"Md";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Location = System::Drawing::Point(170, 670);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(22, 13);
			this->label71->TabIndex = 106;
			this->label71->Text = L"Md";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Location = System::Drawing::Point(170, 650);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(16, 13);
			this->label72->TabIndex = 105;
			this->label72->Text = L"Si";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Location = System::Drawing::Point(170, 630);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(19, 13);
			this->label73->TabIndex = 104;
			this->label73->Text = L"Int";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(170, 610);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(17, 13);
			this->label74->TabIndex = 103;
			this->label74->Text = L"Zr";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Location = System::Drawing::Point(170, 590);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(19, 13);
			this->label75->TabIndex = 102;
			this->label75->Text = L"Int";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Location = System::Drawing::Point(170, 570);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(17, 13);
			this->label76->TabIndex = 101;
			this->label76->Text = L"Zr";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Location = System::Drawing::Point(170, 550);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(22, 13);
			this->label77->TabIndex = 100;
			this->label77->Text = L"Md";
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Location = System::Drawing::Point(170, 530);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(19, 13);
			this->label78->TabIndex = 99;
			this->label78->Text = L"Int";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Location = System::Drawing::Point(170, 510);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(26, 13);
			this->label79->TabIndex = 98;
			this->label79->Text = L"Cha";
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Location = System::Drawing::Point(170, 490);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(17, 13);
			this->label80->TabIndex = 97;
			this->label80->Text = L"Zr";
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Location = System::Drawing::Point(170, 470);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(26, 13);
			this->label81->TabIndex = 96;
			this->label81->Text = L"Cha";
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Location = System::Drawing::Point(170, 450);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(22, 13);
			this->label82->TabIndex = 95;
			this->label82->Text = L"Md";
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Location = System::Drawing::Point(170, 430);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(26, 13);
			this->label83->TabIndex = 94;
			this->label83->Text = L"Cha";
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Location = System::Drawing::Point(170, 410);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(17, 13);
			this->label84->TabIndex = 93;
			this->label84->Text = L"Zr";
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Location = System::Drawing::Point(170, 390);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(16, 13);
			this->label85->TabIndex = 92;
			this->label85->Text = L"Si";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(170, 370);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(17, 13);
			this->label62->TabIndex = 91;
			this->label62->Text = L"Zr";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(170, 350);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(19, 13);
			this->label63->TabIndex = 90;
			this->label63->Text = L"Int";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(170, 330);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(26, 13);
			this->label64->TabIndex = 89;
			this->label64->Text = L"Cha";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(170, 310);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(22, 13);
			this->label65->TabIndex = 88;
			this->label65->Text = L"Md";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(170, 290);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(17, 13);
			this->label66->TabIndex = 87;
			this->label66->Text = L"Zr";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(170, 270);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(19, 13);
			this->label67->TabIndex = 86;
			this->label67->Text = L"Int";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Location = System::Drawing::Point(170, 250);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(22, 13);
			this->label68->TabIndex = 85;
			this->label68->Text = L"Md";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Location = System::Drawing::Point(170, 230);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(22, 13);
			this->label69->TabIndex = 84;
			this->label69->Text = L"Md";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(170, 210);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(17, 13);
			this->label58->TabIndex = 83;
			this->label58->Text = L"Zr";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(170, 190);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(19, 13);
			this->label59->TabIndex = 82;
			this->label59->Text = L"Int";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(170, 170);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(26, 13);
			this->label60->TabIndex = 81;
			this->label60->Text = L"Cha";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(170, 150);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(19, 13);
			this->label61->TabIndex = 80;
			this->label61->Text = L"Int";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(170, 130);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(19, 13);
			this->label56->TabIndex = 79;
			this->label56->Text = L"Int";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(170, 110);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(17, 13);
			this->label57->TabIndex = 78;
			this->label57->Text = L"Zr";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(170, 90);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(26, 13);
			this->label55->TabIndex = 77;
			this->label55->Text = L"Cha";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(170, 70);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(19, 13);
			this->label54->TabIndex = 76;
			this->label54->Text = L"Int";
			// 
			// checkBoxWyczucieKierunku
			// 
			this->checkBoxWyczucieKierunku->AutoSize = true;
			this->checkBoxWyczucieKierunku->Location = System::Drawing::Point(30, 690);
			this->checkBoxWyczucieKierunku->Name = L"checkBoxWyczucieKierunku";
			this->checkBoxWyczucieKierunku->Size = System::Drawing::Size(118, 17);
			this->checkBoxWyczucieKierunku->TabIndex = 75;
			this->checkBoxWyczucieKierunku->Text = L"Wyczucie Kierunku";
			this->checkBoxWyczucieKierunku->UseVisualStyleBackColor = true;
			// 
			// checkBoxWyczuciePobudek
			// 
			this->checkBoxWyczuciePobudek->AutoSize = true;
			this->checkBoxWyczuciePobudek->Location = System::Drawing::Point(30, 670);
			this->checkBoxWyczuciePobudek->Name = L"checkBoxWyczuciePobudek";
			this->checkBoxWyczuciePobudek->Size = System::Drawing::Size(119, 17);
			this->checkBoxWyczuciePobudek->TabIndex = 74;
			this->checkBoxWyczuciePobudek->Text = L"Wyczucie Pobudek";
			this->checkBoxWyczuciePobudek->UseVisualStyleBackColor = true;
			// 
			// checkBoxWspinaczka
			// 
			this->checkBoxWspinaczka->AutoSize = true;
			this->checkBoxWspinaczka->Location = System::Drawing::Point(30, 650);
			this->checkBoxWspinaczka->Name = L"checkBoxWspinaczka";
			this->checkBoxWspinaczka->Size = System::Drawing::Size(85, 17);
			this->checkBoxWspinaczka->TabIndex = 73;
			this->checkBoxWspinaczka->Text = L"Wspinaczka";
			this->checkBoxWspinaczka->UseVisualStyleBackColor = true;
			// 
			// checkBoxWrozenie
			// 
			this->checkBoxWrozenie->AutoSize = true;
			this->checkBoxWrozenie->Location = System::Drawing::Point(30, 630);
			this->checkBoxWrozenie->Name = L"checkBoxWrozenie";
			this->checkBoxWrozenie->Size = System::Drawing::Size(71, 17);
			this->checkBoxWrozenie->TabIndex = 72;
			this->checkBoxWrozenie->Text = L"Wró¿enie";
			this->checkBoxWrozenie->UseVisualStyleBackColor = true;
			// 
			// checkBoxUpadki
			// 
			this->checkBoxUpadki->AutoSize = true;
			this->checkBoxUpadki->Location = System::Drawing::Point(30, 610);
			this->checkBoxUpadki->Name = L"checkBoxUpadki";
			this->checkBoxUpadki->Size = System::Drawing::Size(60, 17);
			this->checkBoxUpadki->TabIndex = 71;
			this->checkBoxUpadki->Text = L"Upadki";
			this->checkBoxUpadki->UseVisualStyleBackColor = true;
			// 
			// checkBoxUnieszkodliwianie
			// 
			this->checkBoxUnieszkodliwianie->AutoSize = true;
			this->checkBoxUnieszkodliwianie->Location = System::Drawing::Point(30, 590);
			this->checkBoxUnieszkodliwianie->Name = L"checkBoxUnieszkodliwianie";
			this->checkBoxUnieszkodliwianie->Size = System::Drawing::Size(113, 17);
			this->checkBoxUnieszkodliwianie->TabIndex = 70;
			this->checkBoxUnieszkodliwianie->Text = L"Unieszkodliwianie ";
			this->checkBoxUnieszkodliwianie->UseVisualStyleBackColor = true;
			// 
			// checkBoxUkrywanie
			// 
			this->checkBoxUkrywanie->AutoSize = true;
			this->checkBoxUkrywanie->Location = System::Drawing::Point(30, 570);
			this->checkBoxUkrywanie->Name = L"checkBoxUkrywanie";
			this->checkBoxUkrywanie->Size = System::Drawing::Size(76, 17);
			this->checkBoxUkrywanie->TabIndex = 69;
			this->checkBoxUkrywanie->Text = L"Ukrywanie";
			this->checkBoxUkrywanie->UseVisualStyleBackColor = true;
			// 
			// checkBoxTajnikiDziczy
			// 
			this->checkBoxTajnikiDziczy->AutoSize = true;
			this->checkBoxTajnikiDziczy->Location = System::Drawing::Point(30, 550);
			this->checkBoxTajnikiDziczy->Name = L"checkBoxTajnikiDziczy";
			this->checkBoxTajnikiDziczy->Size = System::Drawing::Size(91, 17);
			this->checkBoxTajnikiDziczy->TabIndex = 68;
			this->checkBoxTajnikiDziczy->Text = L"Tajniki Dziczy";
			this->checkBoxTajnikiDziczy->UseVisualStyleBackColor = true;
			// 
			// th
			// 
			this->th->AutoSize = true;
			this->th->Location = System::Drawing::Point(30, 530);
			this->th->Name = L"th";
			this->th->Size = System::Drawing::Size(84, 17);
			this->th->TabIndex = 67;
			this->th->Text = L"Szacowanie";
			this->th->UseVisualStyleBackColor = true;
			// 
			// checkBoxStosowanieMagRzeczy
			// 
			this->checkBoxStosowanieMagRzeczy->AutoSize = true;
			this->checkBoxStosowanieMagRzeczy->Location = System::Drawing::Point(30, 510);
			this->checkBoxStosowanieMagRzeczy->Name = L"checkBoxStosowanieMagRzeczy";
			this->checkBoxStosowanieMagRzeczy->Size = System::Drawing::Size(137, 17);
			this->checkBoxStosowanieMagRzeczy->TabIndex = 66;
			this->checkBoxStosowanieMagRzeczy->Text = L"StosowanieMagRzeczy";
			this->checkBoxStosowanieMagRzeczy->UseVisualStyleBackColor = true;
			// 
			// checkBoxStosowanieLiny
			// 
			this->checkBoxStosowanieLiny->AutoSize = true;
			this->checkBoxStosowanieLiny->Location = System::Drawing::Point(30, 490);
			this->checkBoxStosowanieLiny->Name = L"checkBoxStosowanieLiny";
			this->checkBoxStosowanieLiny->Size = System::Drawing::Size(103, 17);
			this->checkBoxStosowanieLiny->TabIndex = 65;
			this->checkBoxStosowanieLiny->Text = L"Stosowanie Liny";
			this->checkBoxStosowanieLiny->UseVisualStyleBackColor = true;
			// 
			// checkBoxPostepowanieZeZwier
			// 
			this->checkBoxPostepowanieZeZwier->AutoSize = true;
			this->checkBoxPostepowanieZeZwier->Location = System::Drawing::Point(30, 470);
			this->checkBoxPostepowanieZeZwier->Name = L"checkBoxPostepowanieZeZwier";
			this->checkBoxPostepowanieZeZwier->Size = System::Drawing::Size(141, 17);
			this->checkBoxPostepowanieZeZwier->TabIndex = 64;
			this->checkBoxPostepowanieZeZwier->Text = L"Postêpowanie Ze Zwier.";
			this->checkBoxPostepowanieZeZwier->UseVisualStyleBackColor = true;
			// 
			// checkBoxKoncetracja
			// 
			this->checkBoxKoncetracja->AutoSize = true;
			this->checkBoxKoncetracja->Location = System::Drawing::Point(30, 450);
			this->checkBoxKoncetracja->Name = L"checkBoxKoncetracja";
			this->checkBoxKoncetracja->Size = System::Drawing::Size(83, 17);
			this->checkBoxKoncetracja->TabIndex = 63;
			this->checkBoxKoncetracja->Text = L"Koncetracja";
			this->checkBoxKoncetracja->UseVisualStyleBackColor = true;
			// 
			// checkBoxZastraszanie
			// 
			this->checkBoxZastraszanie->AutoSize = true;
			this->checkBoxZastraszanie->Location = System::Drawing::Point(30, 430);
			this->checkBoxZastraszanie->Name = L"checkBoxZastraszanie";
			this->checkBoxZastraszanie->Size = System::Drawing::Size(86, 17);
			this->checkBoxZastraszanie->TabIndex = 62;
			this->checkBoxZastraszanie->Text = L"Zastraszanie";
			this->checkBoxZastraszanie->UseVisualStyleBackColor = true;
			// 
			// checkBoxJezdziectwo
			// 
			this->checkBoxJezdziectwo->AutoSize = true;
			this->checkBoxJezdziectwo->Location = System::Drawing::Point(30, 410);
			this->checkBoxJezdziectwo->Name = L"checkBoxJezdziectwo";
			this->checkBoxJezdziectwo->Size = System::Drawing::Size(84, 17);
			this->checkBoxJezdziectwo->TabIndex = 61;
			this->checkBoxJezdziectwo->Text = L"JeŸdziectwo";
			this->checkBoxJezdziectwo->UseVisualStyleBackColor = true;
			// 
			// checkBoxSkakanie
			// 
			this->checkBoxSkakanie->AutoSize = true;
			this->checkBoxSkakanie->Location = System::Drawing::Point(30, 390);
			this->checkBoxSkakanie->Name = L"checkBoxSkakanie";
			this->checkBoxSkakanie->Size = System::Drawing::Size(71, 17);
			this->checkBoxSkakanie->TabIndex = 60;
			this->checkBoxSkakanie->Text = L"Skakanie";
			this->checkBoxSkakanie->UseVisualStyleBackColor = true;
			// 
			// checkBoxRównowaga
			// 
			this->checkBoxRównowaga->AutoSize = true;
			this->checkBoxRównowaga->Location = System::Drawing::Point(30, 370);
			this->checkBoxRównowaga->Name = L"checkBoxRównowaga";
			this->checkBoxRównowaga->Size = System::Drawing::Size(86, 17);
			this->checkBoxRównowaga->TabIndex = 59;
			this->checkBoxRównowaga->Text = L"Równowaga";
			this->checkBoxRównowaga->UseVisualStyleBackColor = true;
			// 
			// checkBoxPrzeszukiwanie
			// 
			this->checkBoxPrzeszukiwanie->AutoSize = true;
			this->checkBoxPrzeszukiwanie->Location = System::Drawing::Point(30, 350);
			this->checkBoxPrzeszukiwanie->Name = L"checkBoxPrzeszukiwanie";
			this->checkBoxPrzeszukiwanie->Size = System::Drawing::Size(99, 17);
			this->checkBoxPrzeszukiwanie->TabIndex = 58;
			this->checkBoxPrzeszukiwanie->Text = L"Przeszukiwanie";
			this->checkBoxPrzeszukiwanie->UseVisualStyleBackColor = true;
			// 
			// checkBoxPrzebieranie
			// 
			this->checkBoxPrzebieranie->AutoSize = true;
			this->checkBoxPrzebieranie->Location = System::Drawing::Point(30, 330);
			this->checkBoxPrzebieranie->Name = L"checkBoxPrzebieranie";
			this->checkBoxPrzebieranie->Size = System::Drawing::Size(84, 17);
			this->checkBoxPrzebieranie->TabIndex = 57;
			this->checkBoxPrzebieranie->Text = L"Przebieranie";
			this->checkBoxPrzebieranie->UseVisualStyleBackColor = true;
			// 
			// checkBoxPo³slowka
			// 
			this->checkBoxPo³slowka->AutoSize = true;
			this->checkBoxPo³slowka->Location = System::Drawing::Point(30, 310);
			this->checkBoxPo³slowka->Name = L"checkBoxPo³slowka";
			this->checkBoxPo³slowka->Size = System::Drawing::Size(78, 17);
			this->checkBoxPo³slowka->TabIndex = 56;
			this->checkBoxPo³slowka->Text = L"Pó³s³ówka";
			this->checkBoxPo³slowka->UseVisualStyleBackColor = true;
			// 
			// checkBoxOtwieranieZamkow
			// 
			this->checkBoxOtwieranieZamkow->AutoSize = true;
			this->checkBoxOtwieranieZamkow->Location = System::Drawing::Point(30, 290);
			this->checkBoxOtwieranieZamkow->Name = L"checkBoxOtwieranieZamkow";
			this->checkBoxOtwieranieZamkow->Size = System::Drawing::Size(120, 17);
			this->checkBoxOtwieranieZamkow->TabIndex = 55;
			this->checkBoxOtwieranieZamkow->Text = L"Otwieranie Zamków";
			this->checkBoxOtwieranieZamkow->UseVisualStyleBackColor = true;
			// 
			// checkBoxOdcyforwywanieZapisow
			// 
			this->checkBoxOdcyforwywanieZapisow->AutoSize = true;
			this->checkBoxOdcyforwywanieZapisow->Location = System::Drawing::Point(30, 270);
			this->checkBoxOdcyforwywanieZapisow->Name = L"checkBoxOdcyforwywanieZapisow";
			this->checkBoxOdcyforwywanieZapisow->Size = System::Drawing::Size(147, 17);
			this->checkBoxOdcyforwywanieZapisow->TabIndex = 54;
			this->checkBoxOdcyforwywanieZapisow->Text = L"Odcyforwywanie Zapisów";
			this->checkBoxOdcyforwywanieZapisow->UseVisualStyleBackColor = true;
			// 
			// checkBoxNasluchiwanie
			// 
			this->checkBoxNasluchiwanie->AutoSize = true;
			this->checkBoxNasluchiwanie->Location = System::Drawing::Point(30, 250);
			this->checkBoxNasluchiwanie->Name = L"checkBoxNasluchiwanie";
			this->checkBoxNasluchiwanie->Size = System::Drawing::Size(97, 17);
			this->checkBoxNasluchiwanie->TabIndex = 53;
			this->checkBoxNasluchiwanie->Text = L"Nas³uchiwanie";
			this->checkBoxNasluchiwanie->UseVisualStyleBackColor = true;
			// 
			// checkBoxLeczenie
			// 
			this->checkBoxLeczenie->AutoSize = true;
			this->checkBoxLeczenie->Location = System::Drawing::Point(30, 230);
			this->checkBoxLeczenie->Name = L"checkBoxLeczenie";
			this->checkBoxLeczenie->Size = System::Drawing::Size(69, 17);
			this->checkBoxLeczenie->TabIndex = 52;
			this->checkBoxLeczenie->Text = L"Leczenie";
			this->checkBoxLeczenie->UseVisualStyleBackColor = true;
			// 
			// checkBoxKradzieszKieszonkowa
			// 
			this->checkBoxKradzieszKieszonkowa->AutoSize = true;
			this->checkBoxKradzieszKieszonkowa->Location = System::Drawing::Point(30, 210);
			this->checkBoxKradzieszKieszonkowa->Name = L"checkBoxKradzieszKieszonkowa";
			this->checkBoxKradzieszKieszonkowa->Size = System::Drawing::Size(137, 17);
			this->checkBoxKradzieszKieszonkowa->TabIndex = 51;
			this->checkBoxKradzieszKieszonkowa->Text = L"Kradziesz Kieszonkowa";
			this->checkBoxKradzieszKieszonkowa->UseVisualStyleBackColor = true;
			// 
			// checkBoxFalszerstwo
			// 
			this->checkBoxFalszerstwo->AutoSize = true;
			this->checkBoxFalszerstwo->Location = System::Drawing::Point(30, 190);
			this->checkBoxFalszerstwo->Name = L"checkBoxFalszerstwo";
			this->checkBoxFalszerstwo->Size = System::Drawing::Size(83, 17);
			this->checkBoxFalszerstwo->TabIndex = 50;
			this->checkBoxFalszerstwo->Text = L"Fa³szerstwo";
			this->checkBoxFalszerstwo->UseVisualStyleBackColor = true;
			// 
			// checkBoxDyplomacja
			// 
			this->checkBoxDyplomacja->AutoSize = true;
			this->checkBoxDyplomacja->Location = System::Drawing::Point(30, 170);
			this->checkBoxDyplomacja->Name = L"checkBoxDyplomacja";
			this->checkBoxDyplomacja->Size = System::Drawing::Size(81, 17);
			this->checkBoxDyplomacja->TabIndex = 49;
			this->checkBoxDyplomacja->Text = L"Dyplomacja";
			this->checkBoxDyplomacja->UseVisualStyleBackColor = true;
			// 
			// checkBoxCzytanieZWarg
			// 
			this->checkBoxCzytanieZWarg->AutoSize = true;
			this->checkBoxCzytanieZWarg->Location = System::Drawing::Point(30, 150);
			this->checkBoxCzytanieZWarg->Name = L"checkBoxCzytanieZWarg";
			this->checkBoxCzytanieZWarg->Size = System::Drawing::Size(105, 17);
			this->checkBoxCzytanieZWarg->TabIndex = 48;
			this->checkBoxCzytanieZWarg->Text = L"Czytanie Z Warg";
			this->checkBoxCzytanieZWarg->UseVisualStyleBackColor = true;
			// 
			// checkBoxCzarostwo
			// 
			this->checkBoxCzarostwo->AutoSize = true;
			this->checkBoxCzarostwo->Location = System::Drawing::Point(30, 130);
			this->checkBoxCzarostwo->Name = L"checkBoxCzarostwo";
			this->checkBoxCzarostwo->Size = System::Drawing::Size(75, 17);
			this->checkBoxCzarostwo->TabIndex = 47;
			this->checkBoxCzarostwo->Text = L"Czarostwo";
			this->checkBoxCzarostwo->UseVisualStyleBackColor = true;
			// 
			// checkBoxCichePoruszanie
			// 
			this->checkBoxCichePoruszanie->AutoSize = true;
			this->checkBoxCichePoruszanie->Location = System::Drawing::Point(30, 110);
			this->checkBoxCichePoruszanie->Name = L"checkBoxCichePoruszanie";
			this->checkBoxCichePoruszanie->Size = System::Drawing::Size(108, 17);
			this->checkBoxCichePoruszanie->TabIndex = 46;
			this->checkBoxCichePoruszanie->Text = L"Ciche Poruszanie";
			this->checkBoxCichePoruszanie->UseVisualStyleBackColor = true;
			// 
			// checkBoxBlefowanie
			// 
			this->checkBoxBlefowanie->AutoSize = true;
			this->checkBoxBlefowanie->Location = System::Drawing::Point(30, 90);
			this->checkBoxBlefowanie->Name = L"checkBoxBlefowanie";
			this->checkBoxBlefowanie->Size = System::Drawing::Size(78, 17);
			this->checkBoxBlefowanie->TabIndex = 45;
			this->checkBoxBlefowanie->Text = L"Blefowanie";
			this->checkBoxBlefowanie->UseVisualStyleBackColor = true;
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
			// labelWyczucieKierunku
			// 
			this->labelWyczucieKierunku->AutoSize = true;
			this->labelWyczucieKierunku->Location = System::Drawing::Point(9, 690);
			this->labelWyczucieKierunku->Name = L"labelWyczucieKierunku";
			this->labelWyczucieKierunku->Size = System::Drawing::Size(12, 13);
			this->labelWyczucieKierunku->TabIndex = 43;
			this->labelWyczucieKierunku->Text = L"x";
			// 
			// labelWyczuciePobudek
			// 
			this->labelWyczuciePobudek->AutoSize = true;
			this->labelWyczuciePobudek->Location = System::Drawing::Point(9, 670);
			this->labelWyczuciePobudek->Name = L"labelWyczuciePobudek";
			this->labelWyczuciePobudek->Size = System::Drawing::Size(12, 13);
			this->labelWyczuciePobudek->TabIndex = 42;
			this->labelWyczuciePobudek->Text = L"x";
			// 
			// labelWspinaczka
			// 
			this->labelWspinaczka->AutoSize = true;
			this->labelWspinaczka->Location = System::Drawing::Point(9, 650);
			this->labelWspinaczka->Name = L"labelWspinaczka";
			this->labelWspinaczka->Size = System::Drawing::Size(12, 13);
			this->labelWspinaczka->TabIndex = 41;
			this->labelWspinaczka->Text = L"x";
			// 
			// labelWrozenie
			// 
			this->labelWrozenie->AutoSize = true;
			this->labelWrozenie->Location = System::Drawing::Point(9, 630);
			this->labelWrozenie->Name = L"labelWrozenie";
			this->labelWrozenie->Size = System::Drawing::Size(12, 13);
			this->labelWrozenie->TabIndex = 40;
			this->labelWrozenie->Text = L"x";
			// 
			// labelUpadki
			// 
			this->labelUpadki->AutoSize = true;
			this->labelUpadki->Location = System::Drawing::Point(9, 610);
			this->labelUpadki->Name = L"labelUpadki";
			this->labelUpadki->Size = System::Drawing::Size(12, 13);
			this->labelUpadki->TabIndex = 39;
			this->labelUpadki->Text = L"x";
			// 
			// labelUnieszkodliwanie
			// 
			this->labelUnieszkodliwanie->AutoSize = true;
			this->labelUnieszkodliwanie->Location = System::Drawing::Point(9, 590);
			this->labelUnieszkodliwanie->Name = L"labelUnieszkodliwanie";
			this->labelUnieszkodliwanie->Size = System::Drawing::Size(12, 13);
			this->labelUnieszkodliwanie->TabIndex = 38;
			this->labelUnieszkodliwanie->Text = L"x";
			// 
			// labelUkrywanie
			// 
			this->labelUkrywanie->AutoSize = true;
			this->labelUkrywanie->Location = System::Drawing::Point(9, 570);
			this->labelUkrywanie->Name = L"labelUkrywanie";
			this->labelUkrywanie->Size = System::Drawing::Size(12, 13);
			this->labelUkrywanie->TabIndex = 37;
			this->labelUkrywanie->Text = L"x";
			// 
			// labelTajniki
			// 
			this->labelTajniki->AutoSize = true;
			this->labelTajniki->Location = System::Drawing::Point(9, 550);
			this->labelTajniki->Name = L"labelTajniki";
			this->labelTajniki->Size = System::Drawing::Size(12, 13);
			this->labelTajniki->TabIndex = 36;
			this->labelTajniki->Text = L"x";
			// 
			// labelSzacowanie
			// 
			this->labelSzacowanie->AutoSize = true;
			this->labelSzacowanie->Location = System::Drawing::Point(9, 530);
			this->labelSzacowanie->Name = L"labelSzacowanie";
			this->labelSzacowanie->Size = System::Drawing::Size(12, 13);
			this->labelSzacowanie->TabIndex = 35;
			this->labelSzacowanie->Text = L"x";
			// 
			// labelStosowanieMeg
			// 
			this->labelStosowanieMeg->AutoSize = true;
			this->labelStosowanieMeg->Location = System::Drawing::Point(9, 510);
			this->labelStosowanieMeg->Name = L"labelStosowanieMeg";
			this->labelStosowanieMeg->Size = System::Drawing::Size(12, 13);
			this->labelStosowanieMeg->TabIndex = 34;
			this->labelStosowanieMeg->Text = L"x";
			// 
			// labelStosowanieLiny
			// 
			this->labelStosowanieLiny->AutoSize = true;
			this->labelStosowanieLiny->Location = System::Drawing::Point(9, 490);
			this->labelStosowanieLiny->Name = L"labelStosowanieLiny";
			this->labelStosowanieLiny->Size = System::Drawing::Size(12, 13);
			this->labelStosowanieLiny->TabIndex = 33;
			this->labelStosowanieLiny->Text = L"x";
			// 
			// labelPostepowanie
			// 
			this->labelPostepowanie->AutoSize = true;
			this->labelPostepowanie->Location = System::Drawing::Point(9, 470);
			this->labelPostepowanie->Name = L"labelPostepowanie";
			this->labelPostepowanie->Size = System::Drawing::Size(12, 13);
			this->labelPostepowanie->TabIndex = 32;
			this->labelPostepowanie->Text = L"x";
			// 
			// labelKoncetracja
			// 
			this->labelKoncetracja->AutoSize = true;
			this->labelKoncetracja->Location = System::Drawing::Point(9, 450);
			this->labelKoncetracja->Name = L"labelKoncetracja";
			this->labelKoncetracja->Size = System::Drawing::Size(12, 13);
			this->labelKoncetracja->TabIndex = 31;
			this->labelKoncetracja->Text = L"x";
			// 
			// labelZastraszanie
			// 
			this->labelZastraszanie->AutoSize = true;
			this->labelZastraszanie->Location = System::Drawing::Point(9, 430);
			this->labelZastraszanie->Name = L"labelZastraszanie";
			this->labelZastraszanie->Size = System::Drawing::Size(12, 13);
			this->labelZastraszanie->TabIndex = 30;
			this->labelZastraszanie->Text = L"x";
			// 
			// labelJezdziectwo
			// 
			this->labelJezdziectwo->AutoSize = true;
			this->labelJezdziectwo->Location = System::Drawing::Point(9, 410);
			this->labelJezdziectwo->Name = L"labelJezdziectwo";
			this->labelJezdziectwo->Size = System::Drawing::Size(12, 13);
			this->labelJezdziectwo->TabIndex = 29;
			this->labelJezdziectwo->Text = L"x";
			// 
			// labelSkakanie
			// 
			this->labelSkakanie->AutoSize = true;
			this->labelSkakanie->Location = System::Drawing::Point(9, 390);
			this->labelSkakanie->Name = L"labelSkakanie";
			this->labelSkakanie->Size = System::Drawing::Size(12, 13);
			this->labelSkakanie->TabIndex = 28;
			this->labelSkakanie->Text = L"x";
			// 
			// labelRownowaga
			// 
			this->labelRownowaga->AutoSize = true;
			this->labelRownowaga->Location = System::Drawing::Point(9, 370);
			this->labelRownowaga->Name = L"labelRownowaga";
			this->labelRownowaga->Size = System::Drawing::Size(12, 13);
			this->labelRownowaga->TabIndex = 27;
			this->labelRownowaga->Text = L"x";
			// 
			// labelPrzeszukiwania
			// 
			this->labelPrzeszukiwania->AutoSize = true;
			this->labelPrzeszukiwania->Location = System::Drawing::Point(9, 350);
			this->labelPrzeszukiwania->Name = L"labelPrzeszukiwania";
			this->labelPrzeszukiwania->Size = System::Drawing::Size(12, 13);
			this->labelPrzeszukiwania->TabIndex = 26;
			this->labelPrzeszukiwania->Text = L"x";
			// 
			// labelPrzebieranie
			// 
			this->labelPrzebieranie->AutoSize = true;
			this->labelPrzebieranie->Location = System::Drawing::Point(9, 330);
			this->labelPrzebieranie->Name = L"labelPrzebieranie";
			this->labelPrzebieranie->Size = System::Drawing::Size(12, 13);
			this->labelPrzebieranie->TabIndex = 25;
			this->labelPrzebieranie->Text = L"x";
			// 
			// labelPolslowka
			// 
			this->labelPolslowka->AutoSize = true;
			this->labelPolslowka->Location = System::Drawing::Point(9, 310);
			this->labelPolslowka->Name = L"labelPolslowka";
			this->labelPolslowka->Size = System::Drawing::Size(12, 13);
			this->labelPolslowka->TabIndex = 24;
			this->labelPolslowka->Text = L"x";
			// 
			// labelOtwieranieZamkow
			// 
			this->labelOtwieranieZamkow->AutoSize = true;
			this->labelOtwieranieZamkow->Location = System::Drawing::Point(9, 290);
			this->labelOtwieranieZamkow->Name = L"labelOtwieranieZamkow";
			this->labelOtwieranieZamkow->Size = System::Drawing::Size(12, 13);
			this->labelOtwieranieZamkow->TabIndex = 23;
			this->labelOtwieranieZamkow->Text = L"x";
			// 
			// labelOdcyfrowanieapisow
			// 
			this->labelOdcyfrowanieapisow->AutoSize = true;
			this->labelOdcyfrowanieapisow->Location = System::Drawing::Point(9, 270);
			this->labelOdcyfrowanieapisow->Name = L"labelOdcyfrowanieapisow";
			this->labelOdcyfrowanieapisow->Size = System::Drawing::Size(12, 13);
			this->labelOdcyfrowanieapisow->TabIndex = 22;
			this->labelOdcyfrowanieapisow->Text = L"x";
			// 
			// labelNasluchwianie
			// 
			this->labelNasluchwianie->AutoSize = true;
			this->labelNasluchwianie->Location = System::Drawing::Point(9, 250);
			this->labelNasluchwianie->Name = L"labelNasluchwianie";
			this->labelNasluchwianie->Size = System::Drawing::Size(12, 13);
			this->labelNasluchwianie->TabIndex = 21;
			this->labelNasluchwianie->Text = L"x";
			// 
			// labelLeczenie
			// 
			this->labelLeczenie->AutoSize = true;
			this->labelLeczenie->Location = System::Drawing::Point(9, 230);
			this->labelLeczenie->Name = L"labelLeczenie";
			this->labelLeczenie->Size = System::Drawing::Size(12, 13);
			this->labelLeczenie->TabIndex = 20;
			this->labelLeczenie->Text = L"x";
			// 
			// labelKradzieszKieszonkowa
			// 
			this->labelKradzieszKieszonkowa->AutoSize = true;
			this->labelKradzieszKieszonkowa->Location = System::Drawing::Point(9, 210);
			this->labelKradzieszKieszonkowa->Name = L"labelKradzieszKieszonkowa";
			this->labelKradzieszKieszonkowa->Size = System::Drawing::Size(12, 13);
			this->labelKradzieszKieszonkowa->TabIndex = 19;
			this->labelKradzieszKieszonkowa->Text = L"x";
			// 
			// labelFalszerstwo
			// 
			this->labelFalszerstwo->AutoSize = true;
			this->labelFalszerstwo->Location = System::Drawing::Point(9, 190);
			this->labelFalszerstwo->Name = L"labelFalszerstwo";
			this->labelFalszerstwo->Size = System::Drawing::Size(12, 13);
			this->labelFalszerstwo->TabIndex = 18;
			this->labelFalszerstwo->Text = L"x";
			// 
			// labelDyplomacja
			// 
			this->labelDyplomacja->AutoSize = true;
			this->labelDyplomacja->Location = System::Drawing::Point(9, 170);
			this->labelDyplomacja->Name = L"labelDyplomacja";
			this->labelDyplomacja->Size = System::Drawing::Size(12, 13);
			this->labelDyplomacja->TabIndex = 17;
			this->labelDyplomacja->Text = L"x";
			// 
			// labelCzytanieZWarg
			// 
			this->labelCzytanieZWarg->AutoSize = true;
			this->labelCzytanieZWarg->Location = System::Drawing::Point(9, 150);
			this->labelCzytanieZWarg->Name = L"labelCzytanieZWarg";
			this->labelCzytanieZWarg->Size = System::Drawing::Size(12, 13);
			this->labelCzytanieZWarg->TabIndex = 16;
			this->labelCzytanieZWarg->Text = L"x";
			// 
			// labelCzarostwo
			// 
			this->labelCzarostwo->AutoSize = true;
			this->labelCzarostwo->Location = System::Drawing::Point(9, 130);
			this->labelCzarostwo->Name = L"labelCzarostwo";
			this->labelCzarostwo->Size = System::Drawing::Size(12, 13);
			this->labelCzarostwo->TabIndex = 15;
			this->labelCzarostwo->Text = L"x";
			// 
			// labelCichePoruszanie
			// 
			this->labelCichePoruszanie->AutoSize = true;
			this->labelCichePoruszanie->Location = System::Drawing::Point(9, 110);
			this->labelCichePoruszanie->Name = L"labelCichePoruszanie";
			this->labelCichePoruszanie->Size = System::Drawing::Size(12, 13);
			this->labelCichePoruszanie->TabIndex = 14;
			this->labelCichePoruszanie->Text = L"x";
			// 
			// labelBlefowanie
			// 
			this->labelBlefowanie->AutoSize = true;
			this->labelBlefowanie->Location = System::Drawing::Point(9, 90);
			this->labelBlefowanie->Name = L"labelBlefowanie";
			this->labelBlefowanie->Size = System::Drawing::Size(12, 13);
			this->labelBlefowanie->TabIndex = 13;
			this->labelBlefowanie->Text = L"x";
			// 
			// labelAchemia
			// 
			this->labelAchemia->AutoSize = true;
			this->labelAchemia->Location = System::Drawing::Point(9, 70);
			this->labelAchemia->Name = L"labelAchemia";
			this->labelAchemia->Size = System::Drawing::Size(12, 13);
			this->labelAchemia->TabIndex = 12;
			this->labelAchemia->Text = L"x";
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
			this->groupBox2->Controls->Add(this->buttonAtakiUaktualnij);
			this->groupBox2->Controls->Add(this->labelwartoscAtakow);
			this->groupBox2->Controls->Add(this->labelAtaki);
			this->groupBox2->Controls->Add(this->maskedTextBoxInneInicjatywa);
			this->groupBox2->Controls->Add(this->labelInicjatywa);
			this->groupBox2->Location = System::Drawing::Point(468, 14);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(152, 101);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Inicjatywa i Atak Bazowy";
			// 
			// labelwartoscAtakow
			// 
			this->labelwartoscAtakow->AutoSize = true;
			this->labelwartoscAtakow->Location = System::Drawing::Point(38, 41);
			this->labelwartoscAtakow->Name = L"labelwartoscAtakow";
			this->labelwartoscAtakow->Size = System::Drawing::Size(19, 13);
			this->labelwartoscAtakow->TabIndex = 3;
			this->labelwartoscAtakow->Text = L"+0";
			// 
			// labelAtaki
			// 
			this->labelAtaki->AutoSize = true;
			this->labelAtaki->Location = System::Drawing::Point(9, 20);
			this->labelAtaki->Name = L"labelAtaki";
			this->labelAtaki->Size = System::Drawing::Size(31, 13);
			this->labelAtaki->TabIndex = 2;
			this->labelAtaki->Text = L"Ataki";
			// 
			// maskedTextBoxInneInicjatywa
			// 
			this->maskedTextBoxInneInicjatywa->Location = System::Drawing::Point(109, 73);
			this->maskedTextBoxInneInicjatywa->Mask = L"00";
			this->maskedTextBoxInneInicjatywa->Name = L"maskedTextBoxInneInicjatywa";
			this->maskedTextBoxInneInicjatywa->Size = System::Drawing::Size(18, 20);
			this->maskedTextBoxInneInicjatywa->TabIndex = 1;
			this->maskedTextBoxInneInicjatywa->Text = L"0";
			// 
			// labelInicjatywa
			// 
			this->labelInicjatywa->AutoSize = true;
			this->labelInicjatywa->Location = System::Drawing::Point(6, 76);
			this->labelInicjatywa->Name = L"labelInicjatywa";
			this->labelInicjatywa->Size = System::Drawing::Size(97, 13);
			this->labelInicjatywa->TabIndex = 0;
			this->labelInicjatywa->Text = L"Inicjatywa: 0 = Zr +";
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
			// label260
			// 
			this->label260->AutoSize = true;
			this->label260->Location = System::Drawing::Point(280, 10);
			this->label260->Name = L"label260";
			this->label260->Size = System::Drawing::Size(28, 13);
			this->label260->TabIndex = 308;
			this->label260->Text = L"Inne";
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
			// label259
			// 
			this->label259->AutoSize = true;
			this->label259->Location = System::Drawing::Point(219, 10);
			this->label259->Name = L"label259";
			this->label259->Size = System::Drawing::Size(55, 13);
			this->label259->TabIndex = 15;
			this->label259->Text = L"Mod Mag.";
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
			// label256
			// 
			this->label256->AutoSize = true;
			this->label256->Location = System::Drawing::Point(184, 90);
			this->label256->Name = L"label256";
			this->label256->Size = System::Drawing::Size(13, 13);
			this->label256->TabIndex = 14;
			this->label256->Text = L"0";
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
			// label255
			// 
			this->label255->AutoSize = true;
			this->label255->Location = System::Drawing::Point(185, 9);
			this->label255->Name = L"label255";
			this->label255->Size = System::Drawing::Size(28, 13);
			this->label255->TabIndex = 11;
			this->label255->Text = L"Mod";
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
			// label251
			// 
			this->label251->AutoSize = true;
			this->label251->Location = System::Drawing::Point(130, 9);
			this->label251->Name = L"label251";
			this->label251->Size = System::Drawing::Size(45, 13);
			this->label251->TabIndex = 7;
			this->label251->Text = L"Bazowa";
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
			// label249
			// 
			this->label249->AutoSize = true;
			this->label249->Location = System::Drawing::Point(94, 60);
			this->label249->Name = L"label249";
			this->label249->Size = System::Drawing::Size(13, 13);
			this->label249->TabIndex = 5;
			this->label249->Text = L"0";
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
			// label247
			// 
			this->label247->AutoSize = true;
			this->label247->Location = System::Drawing::Point(90, 9);
			this->label247->Name = L"label247";
			this->label247->Size = System::Drawing::Size(34, 13);
			this->label247->TabIndex = 3;
			this->label247->Text = L"Suma";
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
			// label245
			// 
			this->label245->AutoSize = true;
			this->label245->Location = System::Drawing::Point(10, 60);
			this->label245->Name = L"label245";
			this->label245->Size = System::Drawing::Size(43, 13);
			this->label245->TabIndex = 1;
			this->label245->Text = L"Refleks";
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
			// groupBoxAtaki
			// 
			this->groupBoxAtaki->Controls->Add(this->labelMozliweAtaki);
			this->groupBoxAtaki->Controls->Add(this->label289);
			this->groupBoxAtaki->Location = System::Drawing::Point(13, 374);
			this->groupBoxAtaki->Name = L"groupBoxAtaki";
			this->groupBoxAtaki->Size = System::Drawing::Size(607, 103);
			this->groupBoxAtaki->TabIndex = 6;
			this->groupBoxAtaki->TabStop = false;
			this->groupBoxAtaki->Text = L"Ataki";
			// 
			// labelMozliweAtaki
			// 
			this->labelMozliweAtaki->AutoSize = true;
			this->labelMozliweAtaki->Location = System::Drawing::Point(518, 16);
			this->labelMozliweAtaki->Name = L"labelMozliweAtaki";
			this->labelMozliweAtaki->Size = System::Drawing::Size(13, 13);
			this->labelMozliweAtaki->TabIndex = 1;
			this->labelMozliweAtaki->Text = L"0";
			// 
			// label289
			// 
			this->label289->AutoSize = true;
			this->label289->Location = System::Drawing::Point(437, 16);
			this->label289->Name = L"label289";
			this->label289->Size = System::Drawing::Size(72, 13);
			this->label289->TabIndex = 0;
			this->label289->Text = L"Mo¿liwe Ataki";
			// 
			// groupBoxBronG
			// 
			this->groupBoxBronG->Location = System::Drawing::Point(13, 484);
			this->groupBoxBronG->Name = L"groupBoxBronG";
			this->groupBoxBronG->Size = System::Drawing::Size(298, 159);
			this->groupBoxBronG->TabIndex = 7;
			this->groupBoxBronG->TabStop = false;
			this->groupBoxBronG->Text = L"Broñ G³ówna";
			// 
			// groupBoxBronPoboczna
			// 
			this->groupBoxBronPoboczna->Location = System::Drawing::Point(318, 484);
			this->groupBoxBronPoboczna->Name = L"groupBoxBronPoboczna";
			this->groupBoxBronPoboczna->Size = System::Drawing::Size(303, 159);
			this->groupBoxBronPoboczna->TabIndex = 8;
			this->groupBoxBronPoboczna->TabStop = false;
			this->groupBoxBronPoboczna->Text = L"Broñ Poboczna";
			// 
			// groupBoxZbroja
			// 
			this->groupBoxZbroja->Location = System::Drawing::Point(13, 649);
			this->groupBoxZbroja->Name = L"groupBoxZbroja";
			this->groupBoxZbroja->Size = System::Drawing::Size(298, 134);
			this->groupBoxZbroja->TabIndex = 9;
			this->groupBoxZbroja->TabStop = false;
			this->groupBoxZbroja->Text = L"Zbroja";
			// 
			// groupBoxTarcza
			// 
			this->groupBoxTarcza->Location = System::Drawing::Point(318, 649);
			this->groupBoxTarcza->Name = L"groupBoxTarcza";
			this->groupBoxTarcza->Size = System::Drawing::Size(296, 134);
			this->groupBoxTarcza->TabIndex = 10;
			this->groupBoxTarcza->TabStop = false;
			this->groupBoxTarcza->Text = L"Tarcza";
			// 
			// buttonSave
			// 
			this->buttonSave->Location = System::Drawing::Point(551, 789);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(75, 23);
			this->buttonSave->TabIndex = 11;
			this->buttonSave->Text = L"Save";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &dodajKarteFroms::buttonSave_Click);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &dodajKarteFroms::saveFileDialog1_FileOk_1);
			// 
			// buttonAtakiUaktualnij
			// 
			this->buttonAtakiUaktualnij->Location = System::Drawing::Point(68, 20);
			this->buttonAtakiUaktualnij->Name = L"buttonAtakiUaktualnij";
			this->buttonAtakiUaktualnij->Size = System::Drawing::Size(75, 23);
			this->buttonAtakiUaktualnij->TabIndex = 4;
			this->buttonAtakiUaktualnij->Text = L"Uaktualnij";
			this->buttonAtakiUaktualnij->UseVisualStyleBackColor = true;
			this->buttonAtakiUaktualnij->Click += gcnew System::EventHandler(this, &dodajKarteFroms::buttonAtakiUaktualnij_Click);
			// 
			// dodajKarteFroms
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1096, 812);
			this->Controls->Add(this->buttonSave);
			this->Controls->Add(this->groupBoxTarcza);
			this->Controls->Add(this->groupBoxZbroja);
			this->Controls->Add(this->groupBoxBronPoboczna);
			this->Controls->Add(this->groupBoxBronG);
			this->Controls->Add(this->groupBoxAtaki);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBoxUmiejetnosc);
			this->Controls->Add(this->hpNPancerz);
			this->Controls->Add(this->Atrybuty);
			this->Controls->Add(this->Nazewnictwo);
			this->Name = L"dodajKarteFroms";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Dodaj Now¹ Kartê";
			this->Nazewnictwo->ResumeLayout(false);
			this->Nazewnictwo->PerformLayout();
			this->Atrybuty->ResumeLayout(false);
			this->Atrybuty->PerformLayout();
			this->hpNPancerz->ResumeLayout(false);
			this->hpNPancerz->PerformLayout();
			this->groupBoxUmiejetnosc->ResumeLayout(false);
			this->groupBoxUmiejetnosc->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBoxAtaki->ResumeLayout(false);
			this->groupBoxAtaki->PerformLayout();
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
	labelInicjatywa->Text = "Inicjatywa: " + ( ((int::Parse(labelWartoscZr->Text) + int::Parse(labelRasaZr->Text) - 10) / 2) + int::Parse(maskedTextBoxInneInicjatywa->Text)).ToString() +" = " + ((int::Parse(labelWartoscZr->Text) + int::Parse(labelRasaZr->Text) - 10) / 2).ToString();
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

private: System::Void labelAlechemiaPlus_Click(System::Object^  sender, System::EventArgs^  e) {
	labelWartoscAlchemia->Text = (int::Parse(labelWartoscAlchemia->Text) + 1).ToString();
}

private: System::Void comboBoxKlasy_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBoxKlasy->Text == "Mag"){
		///Umiejetnosci///
		labelAchemia->Text = "*";
		labelBlefowanie->Text = ".";
		labelCichePoruszanie->Text = ".";
		labelCzarostwo->Text = "*";
		labelCzytanieZWarg->Text = "X";
		labelDyplomacja->Text = ".";
		labelFalszerstwo->Text = ".";
		labelJezdziectwo->Text = ".";
		labelKoncetracja->Text = "*";
		labelKradzieszKieszonkowa->Text = ".";
		labelLeczenie->Text = ".";
		labelNasluchwianie->Text = ".";
		labelOdcyfrowanieapisow->Text = "X";
		labelOtwieranieZamkow->Text = ".";
		labelPostepowanie->Text = ".";
		labelPolslowka->Text = ".";
		labelPrzebieranie->Text = ".";
		labelPrzeszukiwania->Text = ".";
		labelRownowaga->Text = ".";
		labelSkakanie->Text = ".";
		labelStosowanieLiny->Text = ".";
		labelStosowanieMeg->Text = "X";
		labelSzacowanie->Text = ".";
		labelTajniki->Text = ".";
		labelUkrywanie->Text = ".";
		labelUnieszkodliwanie->Text = ".";
		labelUpadki->Text = ".";
		labelWrozenie->Text = "*";
		labelWspinaczka->Text = ".";
		labelWyczucieKierunku->Text = ".";
		labelWyczuciePobudek->Text = ".";
		labelWyzwalanie->Text = ".";
		labelZastraszanie->Text = ".";
		labelZauwazanie->Text = ".";
		labelZbieranieInf->Text = ".";
		labelZwierzecaEmpatia->Text = "X";
		///Ataki//

	}
	else if (comboBoxKlasy->Text == "Zaklinacz"){
		///Umiejetnosci///
		labelAchemia->Text = "*";
		labelBlefowanie->Text = ".";
		labelCichePoruszanie->Text = ".";
		labelCzarostwo->Text = "*";
		labelCzytanieZWarg->Text = "X";
		labelDyplomacja->Text = ".";
		labelFalszerstwo->Text = ".";
		labelJezdziectwo->Text = ".";
		labelKoncetracja->Text = "*";
		labelKradzieszKieszonkowa->Text = ".";
		labelLeczenie->Text = ".";
		labelNasluchwianie->Text = ".";
		labelOdcyfrowanieapisow->Text = "X";
		labelOtwieranieZamkow->Text = ".";
		labelPostepowanie->Text = ".";
		labelPolslowka->Text = ".";
		labelPrzebieranie->Text = ".";
		labelPrzeszukiwania->Text = ".";
		labelRownowaga->Text = ".";
		labelSkakanie->Text = ".";
		labelStosowanieLiny->Text = ".";
		labelStosowanieMeg->Text = "X";
		labelSzacowanie->Text = ".";
		labelTajniki->Text = ".";
		labelUkrywanie->Text = ".";
		labelUnieszkodliwanie->Text = ".";
		labelUpadki->Text = ".";
		labelWrozenie->Text = "*";
		labelWspinaczka->Text = ".";
		labelWyczucieKierunku->Text = ".";
		labelWyczuciePobudek->Text = ".";
		labelWyzwalanie->Text = ".";
		labelZastraszanie->Text = ".";
		labelZauwazanie->Text = ".";
		labelZbieranieInf->Text = ".";
		labelZwierzecaEmpatia->Text = "X";
		///Ataki//

	}
	else if (comboBoxKlasy->Text == "£otrzyk"){
		///Umiejetnosci///
		labelAchemia->Text = ".";
		labelBlefowanie->Text = "*";
		labelCichePoruszanie->Text = "*";
		labelCzarostwo->Text = ".";
		labelCzytanieZWarg->Text = "*";
		labelDyplomacja->Text = "*";
		labelFalszerstwo->Text = "*";
		labelJezdziectwo->Text = ".";
		labelKoncetracja->Text = ".";
		labelKradzieszKieszonkowa->Text = "*";
		labelLeczenie->Text = ".";
		labelNasluchwianie->Text = "*";
		labelOdcyfrowanieapisow->Text = "*";
		labelOtwieranieZamkow->Text = "*";
		labelPostepowanie->Text = ".";
		labelPolslowka->Text = "*";
		labelPrzebieranie->Text = "*";
		labelPrzeszukiwania->Text = "*";
		labelRownowaga->Text = "*";
		labelSkakanie->Text = "*";
		labelStosowanieLiny->Text = "*";
		labelStosowanieMeg->Text = "*";
		labelSzacowanie->Text = "*";
		labelTajniki->Text = ".";
		labelUkrywanie->Text = "*";
		labelUnieszkodliwanie->Text = "*";
		labelUpadki->Text = "*";
		labelWrozenie->Text = "X";
		labelWspinaczka->Text = "*";
		labelWyczucieKierunku->Text = "*";
		labelWyczuciePobudek->Text = "*";
		labelWyzwalanie->Text = "*";
		labelZastraszanie->Text = "*";
		labelZauwazanie->Text = "*";
		labelZbieranieInf->Text = "*";
		labelZwierzecaEmpatia->Text = "X";
		///Ataki//

	}
	else if (comboBoxKlasy->Text == "Mnich"){
		///Umiejetnosci///
		labelAchemia->Text = ".";
		labelBlefowanie->Text = ".";
		labelCichePoruszanie->Text = "*";
		labelCzarostwo->Text = ".";
		labelCzytanieZWarg->Text = "X";
		labelDyplomacja->Text = "*";
		labelFalszerstwo->Text = ".";
		labelJezdziectwo->Text = ".";
		labelKoncetracja->Text = "*";
		labelKradzieszKieszonkowa->Text = ".";
		labelLeczenie->Text = ".";
		labelNasluchwianie->Text = "*";
		labelOdcyfrowanieapisow->Text = "X";
		labelOtwieranieZamkow->Text = ".";
		labelPostepowanie->Text = ".";
		labelPolslowka->Text = ".";
		labelPrzebieranie->Text = ".";
		labelPrzeszukiwania->Text = ".";
		labelRownowaga->Text = "*";
		labelSkakanie->Text = "*";
		labelStosowanieLiny->Text = ".";
		labelStosowanieMeg->Text = "X";
		labelSzacowanie->Text = ".";
		labelTajniki->Text = ".";
		labelUkrywanie->Text = "*";
		labelUnieszkodliwanie->Text = ".";
		labelUpadki->Text = "*";
		labelWrozenie->Text = ".";
		labelWspinaczka->Text = "*";
		labelWyczucieKierunku->Text = ".";
		labelWyczuciePobudek->Text = ".";
		labelWyzwalanie->Text = "*";
		labelZastraszanie->Text = ".";
		labelZauwazanie->Text = ".";
		labelZbieranieInf->Text = ".";
		labelZwierzecaEmpatia->Text = ".";
		///Ataki//

	}
	else if (comboBoxKlasy->Text == "Wojownik"){
		///Umiejetnosci///
		labelAchemia->Text = ".";
		labelBlefowanie->Text = ".";
		labelCichePoruszanie->Text = ".";
		labelCzarostwo->Text = ".";
		labelCzytanieZWarg->Text = "X";
		labelDyplomacja->Text = ".";
		labelFalszerstwo->Text = "*";
		labelJezdziectwo->Text = ".";
		labelKoncetracja->Text = ".";
		labelKradzieszKieszonkowa->Text = ".";
		labelLeczenie->Text = ".";
		labelNasluchwianie->Text = ".";
		labelOdcyfrowanieapisow->Text = "X";
		labelOtwieranieZamkow->Text = ".";
		labelPostepowanie->Text = "*";
		labelPolslowka->Text = ".";
		labelPrzebieranie->Text = ".";
		labelPrzeszukiwania->Text = ".";
		labelRownowaga->Text = ".";
		labelSkakanie->Text = "*";
		labelStosowanieLiny->Text = ".";
		labelStosowanieMeg->Text = "X";
		labelSzacowanie->Text = ".";
		labelTajniki->Text = ".";
		labelUkrywanie->Text = ".";
		labelUnieszkodliwanie->Text = ".";
		labelUpadki->Text = ".";
		labelWrozenie->Text = ".";
		labelWspinaczka->Text = "*";
		labelWyczucieKierunku->Text = ".";
		labelWyczuciePobudek->Text = ".";
		labelWyzwalanie->Text = ".";
		labelZastraszanie->Text = ".";
		labelZauwazanie->Text = ".";
		labelZbieranieInf->Text = ".";
		labelZwierzecaEmpatia->Text = "X";
		///Ataki//

	}
	else if (comboBoxKlasy->Text == "Barba¿yñca"){
		///Umiejetnosci///
		labelAchemia->Text = ".";
		labelBlefowanie->Text = ".";
		labelCichePoruszanie->Text = ".";
		labelCzarostwo->Text = ".";
		labelCzytanieZWarg->Text = "X";
		labelDyplomacja->Text = ".";
		labelFalszerstwo->Text = ".";
		labelJezdziectwo->Text = "*";
		labelKoncetracja->Text = ".";
		labelKradzieszKieszonkowa->Text = ".";
		labelLeczenie->Text = ".";
		labelNasluchwianie->Text = "*";
		labelOdcyfrowanieapisow->Text = "X";
		labelOtwieranieZamkow->Text = ".";
		labelPostepowanie->Text = "*";
		labelPolslowka->Text = ".";
		labelPrzebieranie->Text = ".";
		labelPrzeszukiwania->Text = ".";
		labelRownowaga->Text = ".";
		labelSkakanie->Text = "*";
		labelStosowanieLiny->Text = ".";
		labelStosowanieMeg->Text = "X";
		labelSzacowanie->Text = ".";
		labelTajniki->Text = "*";
		labelUkrywanie->Text = ".";
		labelUnieszkodliwanie->Text = ".";
		labelUpadki->Text = ".";
		labelWrozenie->Text = "X";
		labelWspinaczka->Text = "*";
		labelWyczucieKierunku->Text = "*";
		labelWyczuciePobudek->Text = ".";
		labelWyzwalanie->Text = ".";
		labelZastraszanie->Text = "*";
		labelZauwazanie->Text = ".";
		labelZbieranieInf->Text = ".";
		labelZwierzecaEmpatia->Text = "X";
		///Ataki//

	}
	else if (comboBoxKlasy->Text == "Kap³an"){
		///Umiejetnosci///
		labelAchemia->Text = ".";
		labelBlefowanie->Text = ".";
		labelCichePoruszanie->Text = ".";
		labelCzarostwo->Text = "*";
		labelCzytanieZWarg->Text = "X";
		labelDyplomacja->Text = "*";
		labelFalszerstwo->Text = ".";
		labelJezdziectwo->Text = ".";
		labelKoncetracja->Text = "*";
		labelKradzieszKieszonkowa->Text = ".";
		labelLeczenie->Text = "*";
		labelNasluchwianie->Text = ".";
		labelOdcyfrowanieapisow->Text = "X";
		labelOtwieranieZamkow->Text = ".";
		labelPostepowanie->Text = ".";
		labelPolslowka->Text = ".";
		labelPrzebieranie->Text = ".";
		labelPrzeszukiwania->Text = ".";
		labelRownowaga->Text = ".";
		labelSkakanie->Text = ".";
		labelStosowanieLiny->Text = ".";
		labelStosowanieMeg->Text = "X";
		labelSzacowanie->Text = ".";
		labelTajniki->Text = ".";
		labelUkrywanie->Text = ".";
		labelUnieszkodliwanie->Text = ".";
		labelUpadki->Text = ".";
		labelWrozenie->Text = "*";
		labelWspinaczka->Text = ".";
		labelWyczucieKierunku->Text = ".";
		labelWyczuciePobudek->Text = ".";
		labelWyzwalanie->Text = ".";
		labelZastraszanie->Text = ".";
		labelZauwazanie->Text = ".";
		labelZbieranieInf->Text = ".";
		labelZwierzecaEmpatia->Text = "X";
		///Ataki//

	}
	else if (comboBoxKlasy->Text == "Palladyn"){
		///Umiejetnosci///
		labelAchemia->Text = ".";
		labelBlefowanie->Text = ".";
		labelCichePoruszanie->Text = ".";
		labelCzarostwo->Text = ".";
		labelCzytanieZWarg->Text = "X";
		labelDyplomacja->Text = "*";
		labelFalszerstwo->Text = ".";
		labelJezdziectwo->Text = "*";
		labelKoncetracja->Text = "*";
		labelKradzieszKieszonkowa->Text = ".";
		labelLeczenie->Text = "*";
		labelNasluchwianie->Text = ".";
		labelOdcyfrowanieapisow->Text = "X";
		labelOtwieranieZamkow->Text = ".";
		labelPostepowanie->Text = "*";
		labelPolslowka->Text = ".";
		labelPrzebieranie->Text = ".";
		labelPrzeszukiwania->Text = ".";
		labelRownowaga->Text = ".";
		labelSkakanie->Text = ".";
		labelStosowanieLiny->Text = ".";
		labelStosowanieMeg->Text = "X";
		labelSzacowanie->Text = ".";
		labelTajniki->Text = ".";
		labelUkrywanie->Text = ".";
		labelUnieszkodliwanie->Text = ".";
		labelUpadki->Text = ".";
		labelWrozenie->Text = "X";
		labelWspinaczka->Text = ".";
		labelWyczucieKierunku->Text = ".";
		labelWyczuciePobudek->Text = ".";
		labelWyzwalanie->Text = ".";
		labelZastraszanie->Text = ".";
		labelZauwazanie->Text = ".";
		labelZbieranieInf->Text = ".";
		labelZwierzecaEmpatia->Text = "X";
		///Ataki//
		

	}
	//L"Palladyn"
}
private: System::Void label23_Click(System::Object^  sender, System::EventArgs^  e) {
	labelPoziom->Text = (Double::Parse(labelPoziom->Text) + 1).ToString();
}
private: System::Void label22_Click(System::Object^  sender, System::EventArgs^  e) {
	labelPoziom->Text = (Double::Parse(labelPoziom->Text) - 1).ToString();
}
private: System::Void saveFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
private: System::Void buttonSave_Click(System::Object^  sender, System::EventArgs^  e) {
	
	SaveFileDialog ^ saveFileDialog1 = gcnew SaveFileDialog();
	saveFileDialog1->Filter =
		"Wikingowy format|*.wikingtxt";
	saveFileDialog1->Title = "Save an WikingText File";
	saveFileDialog1->RestoreDirectory = true;
	saveFileDialog1->ShowDialog();
	if (saveFileDialog1->FileName != ""){
		IO::File::WriteAllText(saveFileDialog1->FileName, textBoxImie->Text+Environment::NewLine);
		IO::File::AppendAllText(saveFileDialog1->FileName, textBoxGracza->Text + Environment::NewLine);
		IO::File::AppendAllText(saveFileDialog1->FileName, labelPoziom->Text + Environment::NewLine);
		///TO DO 
	}
}




private: System::Void saveFileDialog1_FileOk_1(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
private: System::Void buttonAtakiUaktualnij_Click(System::Object^  sender, System::EventArgs^  e) {
	//Inicjatywa
	labelInicjatywa->Text = "Inicjatywa: " + (((int::Parse(labelWartoscZr->Text) + int::Parse(labelRasaZr->Text) - 10) / 2) + int::Parse(maskedTextBoxInneInicjatywa->Text)).ToString() + " = " + ((int::Parse(labelWartoscZr->Text) + int::Parse(labelRasaZr->Text) - 10) / 2).ToString()+" + ";
	//Ataki
	if (comboBoxKlasy->Text == "Barba¿yñca" || comboBoxKlasy->Text == "Wojownik" || comboBoxKlasy->Text == "Palladyn"){
		switch (int::Parse(labelPoziom->Text)){
		case 1: {
			labelwartoscAtakow->Text = "+1";
			break;
		}
		case 2: {
			labelwartoscAtakow->Text = "+2";
			break;
		}
		case 3: {
			labelwartoscAtakow->Text = "+3";
			break;
		}
		case 4: {
			labelwartoscAtakow->Text = "+4";
			break;
		}
		case 5: {
			labelwartoscAtakow->Text = "+5";
			break;
		}
		case 6: {
			labelwartoscAtakow->Text = "+6/+1";
			break;
		}
		case 7: {
			labelwartoscAtakow->Text = "+7/+2";
			break;
		}
		case 8: {
			labelwartoscAtakow->Text = "+8/+3";
			break;
		}
		case 9: {
			labelwartoscAtakow->Text = "+9/+4";
			break;
		}
		case 10: {
			labelwartoscAtakow->Text = "+10/+5";
			break;
		}
		case 11: {
			labelwartoscAtakow->Text = "+11/+6/+1";
			break;
		}
		case 12: {
			labelwartoscAtakow->Text = "+12/+7/+2";
			break;
		}
		case 13: {
			labelwartoscAtakow->Text = "+13/+8/+3";
			break;
		}
		case 14: {
			labelwartoscAtakow->Text = "+14/+9/+4";
			break;
		}
		case 15: {
			labelwartoscAtakow->Text = "+15/+10/+5";
			break;
		}
		case 16: {
			labelwartoscAtakow->Text = "+16/+11/+6/+1";
			break;
		}
		case 17: {
			labelwartoscAtakow->Text = "+17/+12/+7/+2";
			break;
		}
		case 18: {
			labelwartoscAtakow->Text = "+18/+13/+8/+3";
			break;
		}
		case 19: {
			labelwartoscAtakow->Text = "+19/+14/+9/+4";
			break;
		}
		case 20: {
			labelwartoscAtakow->Text = "+20/+15/+10/+5";
			break;
		}

		}

	}
	else if (comboBoxKlasy->Text == "Kap³an" || comboBoxKlasy->Text == "Palladyn" || comboBoxKlasy->Text == "£otrzyk" || comboBoxKlasy->Text == "Mnich"){
		switch (int::Parse(labelPoziom->Text)){
		case 1: {
			labelwartoscAtakow->Text = "+0";
			break;
		}
		case 2: {
			labelwartoscAtakow->Text = "+1";
			break;
		}
		case 3: {
			labelwartoscAtakow->Text = "+2";
			break;
		}
		case 4: {
			labelwartoscAtakow->Text = "+3";
			break;
		}
		case 5: {
			labelwartoscAtakow->Text = "+3";
			break;
		}
		case 6: {
			labelwartoscAtakow->Text = "+4";
			break;
		}
		case 7: {
			labelwartoscAtakow->Text = "+5";
			break;
		}
		case 8: {
			labelwartoscAtakow->Text = "+6/+1";
			break;
		}
		case 9: {
			labelwartoscAtakow->Text = "+6/+1";
			break;
		}
		case 10: {
			labelwartoscAtakow->Text = "+7/+2";
			break;
		}
		case 11: {
			labelwartoscAtakow->Text = "+8/+3";
			break;
		}
		case 12: {
			labelwartoscAtakow->Text = "+9/+4";
			break;
		}
		case 13: {
			labelwartoscAtakow->Text = "+9/+4";
			break;
		}
		case 14: {
			labelwartoscAtakow->Text = "+10/+5";
			break;
		}
		case 15: {
			labelwartoscAtakow->Text = "+11/+6/+1";
			break;
		}
		case 16: {
			labelwartoscAtakow->Text = "+12/+7/+2";
			break;
		}
		case 17: {
			labelwartoscAtakow->Text = "+12/+7/+2";
			break;
		}
		case 18: {
			labelwartoscAtakow->Text = "+13/+8/+3";
			break;
		}
		case 19: {
			labelwartoscAtakow->Text = "+14/+9/+4";
			break;
		}
		case 20: {
			labelwartoscAtakow->Text = "+15/+10/+5";
			break;
		}

		}
	}
	else if (comboBoxKlasy->Text == "Zaklinacz" || comboBoxKlasy->Text == "Mag"){
		switch (int::Parse(labelPoziom->Text)){
		case 1: {
			labelwartoscAtakow->Text = "+0";
			break;
		}
		case 2: {
			labelwartoscAtakow->Text = "+1";
			break;
		}
		case 3: {
			labelwartoscAtakow->Text = "+1";
			break;
		}
		case 4: {
			labelwartoscAtakow->Text = "+2";
			break;
		}
		case 5: {
			labelwartoscAtakow->Text = "+2";
			break;
		}
		case 6: {
			labelwartoscAtakow->Text = "+3";
			break;
		}
		case 7: {
			labelwartoscAtakow->Text = "+3";
			break;
		}
		case 8: {
			labelwartoscAtakow->Text = "+4";
			break;
		}
		case 9: {
			labelwartoscAtakow->Text = "+4";
			break;
		}
		case 10: {
			labelwartoscAtakow->Text = "+5";
			break;
		}
		case 11: {
			labelwartoscAtakow->Text = "+5";
			break;
		}
		case 12: {
			labelwartoscAtakow->Text = "+6/+1";
			break;
		}
		case 13: {
			labelwartoscAtakow->Text = "+6/+1";
			break;
		}
		case 14: {
			labelwartoscAtakow->Text = "+7/+2";
			break;
		}
		case 15: {
			labelwartoscAtakow->Text = "+7/+2";
			break;
		}
		case 16: {
			labelwartoscAtakow->Text = "+8/+3";
			break;
		}
		case 17: {
			labelwartoscAtakow->Text = "+8/+3";
			break;
		}
		case 18: {
			labelwartoscAtakow->Text = "+9/+4";
			break;
		}
		case 19: {
			labelwartoscAtakow->Text = "+9/+4";
			break;
		}
		case 20: {
			labelwartoscAtakow->Text = "+10/+5";
			break;
		}

		}
	}
}
};
}
