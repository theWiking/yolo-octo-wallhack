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
		String^ labelTestowyqqq;
		
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
	private: System::Windows::Forms::Label^  label1testowy;
	private: System::Windows::Forms::Button^  buttonZa³aduj;




















































































































































































































































































































































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
			this->label1testowy = (gcnew System::Windows::Forms::Label());
			this->buttonZa³aduj = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1testowy
			// 
			this->label1testowy->AutoSize = true;
			this->label1testowy->Location = System::Drawing::Point(12, 20);
			this->label1testowy->Name = L"label1testowy";
			this->label1testowy->Size = System::Drawing::Size(71, 13);
			this->label1testowy->TabIndex = 0;
			this->label1testowy->Text = L"label1testowy";
			// 
			// buttonZa³aduj
			// 
			this->buttonZa³aduj->Location = System::Drawing::Point(348, 770);
			this->buttonZa³aduj->Name = L"buttonZa³aduj";
			this->buttonZa³aduj->Size = System::Drawing::Size(303, 23);
			this->buttonZa³aduj->TabIndex = 1;
			this->buttonZa³aduj->Text = L"Za³aduj";
			this->buttonZa³aduj->UseVisualStyleBackColor = true;
			this->buttonZa³aduj->Click += gcnew System::EventHandler(this, &WczytanaKarta::buttonZa³aduj_Click);
			// 
			// WczytanaKarta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1092, 805);
			this->Controls->Add(this->buttonZa³aduj);
			this->Controls->Add(this->label1testowy);
			this->Name = L"WczytanaKarta";
			this->Text = L"WczytanaKarta";
			this->ResumeLayout(false);
			this->PerformLayout();


			

		}
#pragma endregion
	public:
		
		void funkcja(){
			label1testowy->Text = labelTestowyqqq;
			
			
			label1testowy->Refresh();
		}

private: System::Void buttonZa³aduj_Click(System::Object^  sender, System::EventArgs^  e) {
	funkcja();
	buttonZa³aduj->Hide();
}
};
}
