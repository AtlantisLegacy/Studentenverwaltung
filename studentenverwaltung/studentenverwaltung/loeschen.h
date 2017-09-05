#pragma once

namespace studentenverwaltung {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für loeschen
	/// </summary>
	public ref class loeschen : public System::Windows::Forms::Form
	{
	public:
		loeschen(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~loeschen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  radioButton2;
	protected:
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(189, 46);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(14, 13);
			this->radioButton2->TabIndex = 173;
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &loeschen::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(7, 46);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(14, 13);
			this->radioButton1->TabIndex = 172;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &loeschen::radioButton1_CheckedChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Datenbank auslesen" });
			this->comboBox2->Location = System::Drawing::Point(205, 43);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(119, 21);
			this->comboBox2->TabIndex = 171;
			this->comboBox2->Text = L"Praxispartnerdaten";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Datenbank auslesen" });
			this->comboBox1->Location = System::Drawing::Point(22, 43);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(119, 21);
			this->comboBox1->TabIndex = 170;
			this->comboBox1->Text = L"Studentendaten";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(285, 18);
			this->label1->TabIndex = 169;
			this->label1->Text = L"Welcher Datensatz soll gelöscht werden \?";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(222, 111);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 41);
			this->button3->TabIndex = 175;
			this->button3->Text = L"Schließen";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &loeschen::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(7, 111);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 41);
			this->button2->TabIndex = 174;
			this->button2->Text = L"Löschen";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &loeschen::button2_Click);
			// 
			// loeschen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(335, 160);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"loeschen";
			this->Text = L"loeschen";
			this->Load += gcnew System::EventHandler(this, &loeschen::loeschen_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			
		if (MessageBox::Show("Wollen Sie diesen Datensatz Löschen?", "Löschen", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				MessageBox::Show("Der Datensatz wurde gelöscht!", "Löschen");
				/*What*/MessageBox::Show("WHAT??!", "Speichern");/*What*/
			}
			
		}
	
private: System::Void loeschen_Load(System::Object^  sender, System::EventArgs^  e) {
	//Datensätze auslesen und in die comboboxen eintragen 
	comboBox1->Enabled = false;
	comboBox2->Enabled = false;

}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	comboBox1->Enabled = true;
	comboBox2->Enabled = false;
}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	comboBox1->Enabled = false;
	comboBox2->Enabled = true;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
};
}
