#pragma once


namespace KartaPostaci_Projekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^  buttonZaładuj;


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
			
			this->buttonZaładuj = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
		
		
			// 
			// buttonZaładuj
			// 
			this->buttonZaładuj->Location = System::Drawing::Point(348, 770);
			this->buttonZaładuj->Name = L"buttonZaładuj";
			this->buttonZaładuj->Size = System::Drawing::Size(303, 23);
			this->buttonZaładuj->TabIndex = 1;
			this->buttonZaładuj->Text = L"Załaduj";
			this->buttonZaładuj->UseVisualStyleBackColor = true;
			this->buttonZaładuj->Click += gcnew System::EventHandler(this, &WczytanaKarta::buttonZaładuj_Click);
			// 
			// WczytanaKarta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1092, 805);
			this->Controls->Add(this->buttonZaładuj);
			this->Name = L"WczytanaKarta";
			this->Text = L"WczytanaKarta";
			this->ResumeLayout(false);
			this->PerformLayout();


			

		}
#pragma endregion


private: System::Void buttonZaładuj_Click(System::Object^  sender, System::EventArgs^  e) {

	buttonZaładuj->Hide();
}
};
}
