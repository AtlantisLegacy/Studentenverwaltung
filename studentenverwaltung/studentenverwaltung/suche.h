#pragma once

namespace studentenverwaltung {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für suche
	/// </summary>
	public ref class suche : public System::Windows::Forms::Form
	{
	public:
		suche(void)
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
		~suche()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label25;
	protected:
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label15;

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
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(155, 145);
			this->label25->Name = L"label25";
			this->label25->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label25->Size = System::Drawing::Size(103, 15);
			this->label25->TabIndex = 212;
			this->label25->Text = L"Ausgabe Student:";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(139, 450);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(136, 20);
			this->textBox12->TabIndex = 189;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(139, 423);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(136, 20);
			this->textBox11->TabIndex = 188;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(139, 397);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(136, 20);
			this->textBox10->TabIndex = 187;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(139, 371);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(136, 20);
			this->textBox9->TabIndex = 186;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(139, 345);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(136, 20);
			this->textBox8->TabIndex = 185;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(139, 319);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(136, 20);
			this->textBox7->TabIndex = 184;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(139, 293);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(136, 20);
			this->textBox6->TabIndex = 183;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(139, 267);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(136, 20);
			this->textBox5->TabIndex = 182;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(139, 241);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(136, 20);
			this->textBox4->TabIndex = 181;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(139, 215);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(136, 20);
			this->textBox3->TabIndex = 180;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(139, 189);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(136, 20);
			this->textBox2->TabIndex = 179;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(139, 163);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(136, 20);
			this->textBox1->TabIndex = 178;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(43, 451);
			this->label13->Name = L"label13";
			this->label13->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label13->Size = System::Drawing::Size(83, 15);
			this->label13->TabIndex = 177;
			this->label13->Text = L"Praxispartner:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(76, 424);
			this->label12->Name = L"label12";
			this->label12->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label12->Size = System::Drawing::Size(46, 15);
			this->label12->TabIndex = 176;
			this->label12->Text = L"E-Mail:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(66, 398);
			this->label11->Name = L"label11";
			this->label11->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label11->Size = System::Drawing::Size(56, 15);
			this->label11->TabIndex = 175;
			this->label11->Text = L"Festnetz:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(34, 372);
			this->label10->Name = L"label10";
			this->label10->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label10->Size = System::Drawing::Size(88, 15);
			this->label10->TabIndex = 174;
			this->label10->Text = L"Mobilnummer:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(96, 346);
			this->label9->Name = L"label9";
			this->label9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label9->Size = System::Drawing::Size(26, 15);
			this->label9->TabIndex = 173;
			this->label9->Text = L"Ort:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(51, 320);
			this->label8->Name = L"label8";
			this->label8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label8->Size = System::Drawing::Size(71, 15);
			this->label8->TabIndex = 172;
			this->label8->Text = L"Nachname:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(36, 294);
			this->label7->Name = L"label7";
			this->label7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label7->Size = System::Drawing::Size(86, 15);
			this->label7->TabIndex = 171;
			this->label7->Text = L"Hausnummer:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(76, 268);
			this->label6->Name = L"label6";
			this->label6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label6->Size = System::Drawing::Size(46, 15);
			this->label6->TabIndex = 170;
			this->label6->Text = L"Straße:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(66, 242);
			this->label5->Name = L"label5";
			this->label5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label5->Size = System::Drawing::Size(56, 15);
			this->label5->TabIndex = 169;
			this->label5->Text = L"Startjahr:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(55, 216);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label4->Size = System::Drawing::Size(71, 15);
			this->label4->TabIndex = 168;
			this->label4->Text = L"Nachname:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(66, 190);
			this->label3->Name = L"label3";
			this->label3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label3->Size = System::Drawing::Size(60, 15);
			this->label3->TabIndex = 167;
			this->label3->Text = L"Vorname:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(25, 164);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(101, 15);
			this->label2->TabIndex = 166;
			this->label2->Text = L"Matrikelnummer:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 213;
			this->label1->Text = L"label1";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(9, 15);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(197, 18);
			this->label14->TabIndex = 214;
			this->label14->Text = L"Wonach wollen Sie Suchen\?";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Matrikelnummer", L"Nachname", L"Praxispartner" });
			this->comboBox1->Location = System::Drawing::Point(12, 49);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 215;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &suche::comboBox1_SelectedIndexChanged);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(139, 49);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(136, 20);
			this->textBox13->TabIndex = 216;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(173, 502);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 41);
			this->button3->TabIndex = 218;
			this->button3->Text = L"Schließen";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &suche::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 502);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 41);
			this->button2->TabIndex = 217;
			this->button2->Text = L"Suchen";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &suche::button2_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Datensätze auslesen" });
			this->comboBox2->Location = System::Drawing::Point(12, 107);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 219;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &suche::comboBox2_SelectedIndexChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(12, 91);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(137, 13);
			this->label15->TabIndex = 220;
			this->label15->Text = L"Suchergebnisse auswählen";
			// 
			// suche
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(291, 550);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"suche";
			this->Text = L"suche";
			this->Load += gcnew System::EventHandler(this, &suche::suche_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	//Eingabe aktivieren wenn ein Suchkriterium ausgewählt wurde
	textBox13->Enabled = true;
}
private: System::Void suche_Load(System::Object^  sender, System::EventArgs^  e) {
	textBox13->Enabled = false;
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	//Ausgewählten Datensatz in die Textboxen eintragen
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//Suche Starten und Datensätze in die combobox laden
}
};
}
