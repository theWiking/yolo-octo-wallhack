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
	private: System::Windows::Forms::Button^  buttonZa�aduj;


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
			
			this->buttonZa�aduj = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
		
		
			// 
			// buttonZa�aduj
			// 
			this->buttonZa�aduj->Location = System::Drawing::Point(348, 770);
			this->buttonZa�aduj->Name = L"buttonZa�aduj";
			this->buttonZa�aduj->Size = System::Drawing::Size(303, 23);
			this->buttonZa�aduj->TabIndex = 1;
			this->buttonZa�aduj->Text = L"Za�aduj";
			this->buttonZa�aduj->UseVisualStyleBackColor = true;
			this->buttonZa�aduj->Click += gcnew System::EventHandler(this, &WczytanaKarta::buttonZa�aduj_Click);
			// 
			// WczytanaKarta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1092, 805);
			this->Controls->Add(this->buttonZa�aduj);
			this->Name = L"WczytanaKarta";
			this->Text = L"WczytanaKarta";
			this->ResumeLayout(false);
			this->PerformLayout();


			

		}
#pragma endregion


private: System::Void buttonZa�aduj_Click(System::Object^  sender, System::EventArgs^  e) {

	buttonZa�aduj->Hide();
}
};
}
