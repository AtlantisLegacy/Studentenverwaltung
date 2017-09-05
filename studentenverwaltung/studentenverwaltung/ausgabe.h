#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "msclr\marshal_cppstd.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <sstream>

namespace studentenverwaltung {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Zusammenfassung für ausgabe
	/// </summary>
	public ref class ausgabe : public System::Windows::Forms::Form
	{
	public:
		ausgabe(void)
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
		~ausgabe()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Button^  button3;











	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;

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
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label27;


	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;

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
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
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
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(281, 82);
			this->label26->Name = L"label26";
			this->label26->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label26->Size = System::Drawing::Size(134, 15);
			this->label26->TabIndex = 165;
			this->label26->Text = L"Ausgabe Praxispartner:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(297, 82);
			this->label25->Name = L"label25";
			this->label25->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label25->Size = System::Drawing::Size(103, 15);
			this->label25->TabIndex = 164;
			this->label25->Text = L"Ausgabe Student:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(355, 484);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 44);
			this->button3->TabIndex = 163;
			this->button3->Text = L"Schließen";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ausgabe::button3_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(139, 100);
			this->label14->Name = L"label14";
			this->label14->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label14->Size = System::Drawing::Size(83, 15);
			this->label14->TabIndex = 151;
			this->label14->Text = L"Praxispartner:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(176, 126);
			this->label15->Name = L"label15";
			this->label15->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label15->Size = System::Drawing::Size(46, 15);
			this->label15->TabIndex = 150;
			this->label15->Text = L"Straße:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(136, 153);
			this->label16->Name = L"label16";
			this->label16->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label16->Size = System::Drawing::Size(86, 15);
			this->label16->TabIndex = 149;
			this->label16->Text = L"Hausnummer:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(149, 179);
			this->label17->Name = L"label17";
			this->label17->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label17->Size = System::Drawing::Size(73, 15);
			this->label17->TabIndex = 148;
			this->label17->Text = L"Postleitzahl:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(196, 205);
			this->label18->Name = L"label18";
			this->label18->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label18->Size = System::Drawing::Size(26, 15);
			this->label18->TabIndex = 147;
			this->label18->Text = L"Ort:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(69, 231);
			this->label19->Name = L"label19";
			this->label19->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label19->Size = System::Drawing::Size(153, 15);
			this->label19->TabIndex = 146;
			this->label19->Text = L"Ansprechpartner Vorname:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(58, 257);
			this->label20->Name = L"label20";
			this->label20->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label20->Size = System::Drawing::Size(164, 15);
			this->label20->TabIndex = 145;
			this->label20->Text = L"Ansprechpartner Nachname:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(168, 283);
			this->label21->Name = L"label21";
			this->label21->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label21->Size = System::Drawing::Size(54, 15);
			this->label21->TabIndex = 144;
			this->label21->Text = L"Position:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(181, 309);
			this->label22->Name = L"label22";
			this->label22->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label22->Size = System::Drawing::Size(41, 15);
			this->label22->TabIndex = 143;
			this->label22->Text = L"Mobil:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(166, 335);
			this->label23->Name = L"label23";
			this->label23->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label23->Size = System::Drawing::Size(56, 15);
			this->label23->TabIndex = 142;
			this->label23->Text = L"Festnetz:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(176, 361);
			this->label24->Name = L"label24";
			this->label24->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label24->Size = System::Drawing::Size(46, 15);
			this->label24->TabIndex = 141;
			this->label24->Text = L"E-Mail:";
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::Window;
			this->textBox11->Location = System::Drawing::Point(239, 360);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(218, 20);
			this->textBox11->TabIndex = 139;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::Window;
			this->textBox10->Location = System::Drawing::Point(239, 334);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(218, 20);
			this->textBox10->TabIndex = 138;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::Window;
			this->textBox9->Location = System::Drawing::Point(239, 308);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(218, 20);
			this->textBox9->TabIndex = 137;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::Window;
			this->textBox8->Location = System::Drawing::Point(239, 282);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(218, 20);
			this->textBox8->TabIndex = 136;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::Window;
			this->textBox7->Location = System::Drawing::Point(239, 256);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(218, 20);
			this->textBox7->TabIndex = 135;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::Window;
			this->textBox6->Location = System::Drawing::Point(239, 230);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(218, 20);
			this->textBox6->TabIndex = 134;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Window;
			this->textBox5->Location = System::Drawing::Point(239, 204);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(218, 20);
			this->textBox5->TabIndex = 133;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Window;
			this->textBox4->Location = System::Drawing::Point(239, 178);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(218, 20);
			this->textBox4->TabIndex = 132;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Window;
			this->textBox3->Location = System::Drawing::Point(239, 152);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(218, 20);
			this->textBox3->TabIndex = 131;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Window;
			this->textBox2->Location = System::Drawing::Point(239, 126);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(218, 20);
			this->textBox2->TabIndex = 130;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(239, 100);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(218, 20);
			this->textBox1->TabIndex = 129;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(139, 388);
			this->label13->Name = L"label13";
			this->label13->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label13->Size = System::Drawing::Size(83, 15);
			this->label13->TabIndex = 128;
			this->label13->Text = L"Praxispartner:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(176, 361);
			this->label12->Name = L"label12";
			this->label12->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label12->Size = System::Drawing::Size(46, 15);
			this->label12->TabIndex = 127;
			this->label12->Text = L"E-Mail:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(166, 335);
			this->label11->Name = L"label11";
			this->label11->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label11->Size = System::Drawing::Size(56, 15);
			this->label11->TabIndex = 126;
			this->label11->Text = L"Festnetz:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(134, 309);
			this->label10->Name = L"label10";
			this->label10->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label10->Size = System::Drawing::Size(88, 15);
			this->label10->TabIndex = 125;
			this->label10->Text = L"Mobilnummer:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(196, 283);
			this->label9->Name = L"label9";
			this->label9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label9->Size = System::Drawing::Size(26, 15);
			this->label9->TabIndex = 124;
			this->label9->Text = L"Ort:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(149, 257);
			this->label8->Name = L"label8";
			this->label8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label8->Size = System::Drawing::Size(73, 15);
			this->label8->TabIndex = 123;
			this->label8->Text = L"Postleitzahl:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(136, 231);
			this->label7->Name = L"label7";
			this->label7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label7->Size = System::Drawing::Size(86, 15);
			this->label7->TabIndex = 122;
			this->label7->Text = L"Hausnummer:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(176, 205);
			this->label6->Name = L"label6";
			this->label6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label6->Size = System::Drawing::Size(46, 15);
			this->label6->TabIndex = 121;
			this->label6->Text = L"Straße:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(166, 179);
			this->label5->Name = L"label5";
			this->label5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label5->Size = System::Drawing::Size(56, 15);
			this->label5->TabIndex = 120;
			this->label5->Text = L"Startjahr:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(151, 153);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label4->Size = System::Drawing::Size(71, 15);
			this->label4->TabIndex = 119;
			this->label4->Text = L"Nachname:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(162, 127);
			this->label3->Name = L"label3";
			this->label3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label3->Size = System::Drawing::Size(60, 15);
			this->label3->TabIndex = 118;
			this->label3->Text = L"Vorname:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(121, 101);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(101, 15);
			this->label2->TabIndex = 117;
			this->label2->Text = L"Matrikelnummer:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(309, 18);
			this->label1->TabIndex = 115;
			this->label1->Text = L"Welcher Datensatz soll ausgegeben werden \?";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(101, 442);
			this->label28->Name = L"label28";
			this->label28->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label28->Size = System::Drawing::Size(121, 15);
			this->label28->TabIndex = 176;
			this->label28->Text = L"Nachname Betreuer:";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(112, 416);
			this->label27->Name = L"label27";
			this->label27->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label27->Size = System::Drawing::Size(110, 15);
			this->label27->TabIndex = 175;
			this->label27->Text = L"Vorname Betreuer:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(40, 42);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(193, 21);
			this->comboBox1->TabIndex = 177;
			this->comboBox1->Text = L"Studentendaten";
			this->comboBox1->SelectionChangeCommitted += gcnew System::EventHandler(this, &ausgabe::comboBox1_SelectionChangeCommitted);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(264, 42);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(193, 21);
			this->comboBox2->TabIndex = 178;
			this->comboBox2->Text = L"Praxispartnerdaten";
			this->comboBox2->SelectionChangeCommitted += gcnew System::EventHandler(this, &ausgabe::comboBox2_SelectionChangeCommitted);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(20, 45);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(14, 13);
			this->radioButton1->TabIndex = 179;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &ausgabe::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(244, 45);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(14, 13);
			this->radioButton2->TabIndex = 180;
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &ausgabe::radioButton2_CheckedChanged);
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::SystemColors::Window;
			this->textBox12->Location = System::Drawing::Point(239, 388);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(218, 20);
			this->textBox12->TabIndex = 181;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::SystemColors::Window;
			this->textBox13->Location = System::Drawing::Point(239, 416);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(218, 20);
			this->textBox13->TabIndex = 182;
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::SystemColors::Window;
			this->textBox14->Location = System::Drawing::Point(239, 442);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(218, 20);
			this->textBox14->TabIndex = 183;
			// 
			// ausgabe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(471, 540);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
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
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
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
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"ausgabe";
			this->Text = L"Ausgabe";
			this->Load += gcnew System::EventHandler(this, &ausgabe::ausgabe_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void ausgabe_Load(System::Object^  sender, System::EventArgs^  e) {
		//Eingabe Student deaktivieren

		//this->label2->Enabled = false;
		//this->label2->Visible = false;
		//this->textBox1->Enabled = false;
		//this->textBox1->Visible = false;

		//this->label3->Enabled = false;
		//this->label3->Visible = false;
		//this->textBox2->Enabled = false;
		//this->textBox2->Visible = false;

		//this->label4->Enabled = false;
		//this->label4->Visible = false;
		//this->textBox3->Enabled = false;
		//this->textBox3->Visible = false;

		//this->label5->Enabled = false;
		//this->label5->Visible = false;
		//this->textBox4->Enabled = false;
		//this->textBox4->Visible = false;

		//this->label6->Enabled = false;
		//this->label6->Visible = false;
		//this->textBox5->Enabled = false;
		//this->textBox5->Visible = false;

		//this->label7->Enabled = false;
		//this->label7->Visible = false;
		//this->textBox6->Enabled = false;
		//this->textBox6->Visible = false;

		//this->label8->Enabled = false;
		//this->label8->Visible = false;
		//this->textBox7->Enabled = false;
		//this->textBox7->Visible = false;

		//this->label9->Enabled = false;
		//this->label9->Visible = false;
		//this->textBox8->Enabled = false;
		//this->textBox8->Visible = false;

		//this->label10->Enabled = false;
		//this->label10->Visible = false;
		//this->textBox9->Enabled = false;
		//this->textBox9->Visible = false;

		//this->label11->Enabled = false;
		//this->label11->Visible = false;
		//this->textBox10->Enabled = false;
		//this->textBox10->Visible = false;

		//this->label12->Enabled = false;
		//this->label12->Visible = false;
		//this->textBox11->Enabled = false;
		//this->textBox11->Visible = false;

		//this->label13->Enabled = false;
		//this->label13->Visible = false;
		//this->textBox12->Enabled = false;
		//this->textBox12->Visible = false;

		//this->label25->Enabled = false;
		//this->label25->Visible = false;


		////Eingabe Praxispartner deaktivieren
		//this->label14->Enabled = false;
		//this->label14->Visible = false;
		//this->textBox13->Enabled = false;
		//this->textBox13->Visible = false;

		//this->label15->Enabled = false;
		//this->label15->Visible = false;
		//this->textBox14->Enabled = false;
		//this->textBox14->Visible = false;

		//this->label16->Enabled = false;
		//this->label16->Visible = false;
		//this->textBox15->Enabled = false;
		//this->textBox15->Visible = false;

		//this->label17->Enabled = false;
		//this->label17->Visible = false;
		//this->textBox16->Enabled = false;
		//this->textBox16->Visible = false;

		//this->label18->Enabled = false;
		//this->label18->Visible = false;
		//this->textBox17->Enabled = false;
		//this->textBox17->Visible = false;

		//this->label19->Enabled = false;
		//this->label19->Visible = false;
		//this->textBox18->Enabled = false;
		//this->textBox18->Visible = false;

		//this->label20->Enabled = false;
		//this->label20->Visible = false;
		//this->textBox19->Enabled = false;
		//this->textBox19->Visible = false;

		//this->label21->Enabled = false;
		//this->label21->Visible = false;
		//this->textBox20->Enabled = false;
		//this->textBox20->Visible = false;

		//this->label22->Enabled = false;
		//this->label22->Visible = false;
		//this->textBox21->Enabled = false;
		//this->textBox21->Visible = false;

		//this->label23->Enabled = false;
		//this->label23->Visible = false;
		//this->textBox22->Enabled = false;
		//this->textBox22->Visible = false;

		//this->label24->Enabled = false;
		//this->label24->Visible = false;
		//this->textBox23->Enabled = false;
		//this->textBox23->Visible = false;

		//this->label26->Enabled = false;
		//this->label26->Visible = false;
	}


private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}



private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	// ComboBox leeren und beschreiben
	comboBox1->Items->Clear();
	comboBox1->Text = "Studenten auswählen";
	comboBox2->Text = "Praxispartner auswählen";
	
	
	// Textboxen von Studenten aktivieren
	textBox12->Visible = true;
	textBox13->Visible = true;
	textBox14->Visible = true;

	// Beschriftungen neben den Textboxten (Labels) für die Praxispartnern deaktvieren
	label2->Visible = true;
	label3->Visible = true;
	label4->Visible = true;
	label5->Visible = true;
	label6->Visible = true;
	label7->Visible = true;
	label8->Visible = true;
	label9->Visible = true;
	label10->Visible = true;
	label11->Visible = true;
	label12->Visible = true;
	label13->Visible = true;
	label27->Visible = true;
	label28->Visible = true;
	label25->Visible = true;

	// Beschriftungen neben den Textboxten (Labels) für die Studenten aktivieren
	label14->Visible = false;
	label15->Visible = false;
	label16->Visible = false;
	label17->Visible = false;
	label18->Visible = false;
	label19->Visible = false;
	label20->Visible = false;
	label21->Visible = false;
	label22->Visible = false;
	label23->Visible = false;
	label24->Visible = false;
	label26->Visible = false;

	// Leeren der Textboxen, bevor ein Studentendatensatz ausgewählt wird
	textBox1->Text = " ";
	textBox2->Text = " ";
	textBox3->Text = " ";
	textBox4->Text = " ";
	textBox5->Text = " ";
	textBox6->Text = " ";
	textBox7->Text = " ";
	textBox8->Text = " ";
	textBox9->Text = " ";
	textBox10->Text = " ";
	textBox11->Text = " ";
	textBox12->Text = " ";
	textBox13->Text = " ";
	textBox14->Text = " ";

	textBox12->Visible = true;
	textBox13->Visible = true;
	textBox14->Visible = true;

	ifstream InputFile("studenten.csv");

	string line;
	string matr;
	string vorname;
	string nachname;
	string startdatum;
	string strasse;
	string hausnr;
	string plz;
	string ort;
	string telmobil;
	string telfest;
	string mail;
	string firma;
	string betreuervor;
	string betreuernach;

	String^ matr_1;
	String^ vorname_1;
	String^ nachname_1;
	String^ startdatum_1;
	String^ strasse_1;
	String^ hausnr_1;
	String^ plz_1;
	String^ ort_1;
	String^ telmobil_1;
	String^ telfest_1;
	String^ mail_1;
	String^ firma_1;
	String^ betreuervor_1;
	String^ betreuernach_1;

	while (getline(InputFile, line)) {

		stringstream linestream(line);

		getline(linestream, matr, ';');
		getline(linestream, vorname, ';');
		getline(linestream, nachname, ';');
		getline(linestream, startdatum, ';');
		getline(linestream, strasse, ';');
		getline(linestream, hausnr, ';');
		getline(linestream, plz, ';');
		getline(linestream, ort, ';');
		getline(linestream, telmobil, ';');
		getline(linestream, telfest, ';');
		getline(linestream, mail, ';');
		getline(linestream, firma, ';');
		getline(linestream, betreuervor, ';');
		getline(linestream, betreuernach, ';');

		matr_1 = gcnew String(matr.c_str());
		vorname_1 = gcnew String(vorname.c_str());
		nachname_1 = gcnew String(nachname.c_str());
		startdatum_1 = gcnew String(startdatum.c_str());
		strasse_1 = gcnew String(strasse.c_str());
		hausnr_1 = gcnew String(hausnr.c_str());
		plz_1 = gcnew String(plz.c_str());
		ort_1 = gcnew String(ort.c_str());
		telmobil_1 = gcnew String(telmobil.c_str());
		telfest_1 = gcnew String(telfest.c_str());
		mail_1 = gcnew String(mail.c_str());
		firma_1 = gcnew String(firma.c_str());
		betreuervor_1 = gcnew String(betreuervor.c_str());
		betreuernach_1 = gcnew String(betreuernach.c_str());

		comboBox1->Items->Add(matr_1 + ", " + vorname_1 + ", " + nachname_1);

	}
	//comboBox1->SelectedIndex = 0;		// Damit bei Öffnen erster Datensatz in ComboBox steht


}

private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	// ComboBox leeren und beschreiben
	comboBox2->Items->Clear();
	comboBox1->Text = "Studenten auswählen";
	comboBox2->Text = "Praxispartner auswählen";
	
	// Textboxen von Studenten deaktivieren
	textBox12->Visible = false;
	textBox13->Visible = false;
	textBox14->Visible = false;
	
	// Beschriftungen neben den Textboxten (Labels) für die Studenten deaktvieren
	label2->Visible = false;
	label3->Visible = false;
	label4->Visible = false;
	label5->Visible = false;
	label6->Visible = false;
	label7->Visible = false;
	label8->Visible = false;
	label9->Visible = false;
	label10->Visible = false;
	label11->Visible = false;
	label12->Visible = false;
	label13->Visible = false;
	label27->Visible = false;
	label28->Visible = false;
	label25->Visible = false;

	// Beschriftungen neben den Textboxten (Labels) für die Praxispartner aktivieren
	label14->Visible = true;
	label15->Visible = true;
	label16->Visible = true;
	label17->Visible = true;
	label18->Visible = true;
	label19->Visible = true;
	label20->Visible = true;
	label21->Visible = true;
	label22->Visible = true;
	label23->Visible = true;
	label24->Visible = true;
	label26->Visible = true;

	ifstream InputFile("firma.csv");

	string line;
	string firma;
	string strasse;
	string hausnr;
	string plz;
	string ort;
	string vorname;
	string nachname;
	string position;
	string telmobil;
	string telfest;
	string mail;

	String^ firma_1;
	String^ strasse_1;
	String^ hausnr_1;
	String^ plz_1;
	String^ ort_1;
	String^ vorname_1;
	String^ nachname_1;
	String^ position_1;
	String^ telmobil_1;
	String^ telfest_1;
	String^ mail_1;

	while (getline(InputFile, line)) {

		stringstream linestream(line);

		getline(linestream, firma, ';');
		getline(linestream, strasse, ';');
		getline(linestream, hausnr, ';');
		getline(linestream, plz, ';');
		getline(linestream, ort, ';');
		getline(linestream, vorname, ';');
		getline(linestream, nachname, ';');
		getline(linestream, position, ';');
		getline(linestream, telmobil, ';');
		getline(linestream, telfest, ';');
		getline(linestream, mail, ';');

		firma_1 = gcnew String(firma.c_str());
		strasse_1 = gcnew String(strasse.c_str());
		hausnr_1 = gcnew String(hausnr.c_str());
		plz_1 = gcnew String(plz.c_str());
		ort_1 = gcnew String(ort.c_str());
		vorname_1 = gcnew String(vorname.c_str());
		nachname_1 = gcnew String(nachname.c_str());
		position_1 = gcnew String(position.c_str());
		telmobil_1 = gcnew String(telmobil.c_str());
		telfest_1 = gcnew String(telfest.c_str());
		mail_1 = gcnew String(mail.c_str());


		comboBox2->Items->Add(firma_1 + ", " + ort_1);

	}
	//comboBox2->SelectedIndex = 0;		// Damit bei Öffnen erster Datensatz in ComboBox steht




}





private: System::Void comboBox1_SelectionChangeCommitted(System::Object^  sender, System::EventArgs^  e) {
	String^ temp_1 = Convert::ToString(comboBox1->SelectedItem);
	std::string temp = msclr::interop::marshal_as<std::string>(temp_1);
	string standard;
	string del = ",";

	int pos = temp.find(del);
	String^ substr = temp_1->Substring(0, pos);

	ifstream InputFile("studenten.csv");


	string line;
	string matr;
	string vorname;
	string nachname;
	string startdatum;
	string strasse;
	string hausnr;
	string plz;
	string ort;
	string telmobil;
	string telfest;
	string mail;
	string firma;
	string betreuervor;
	string betreuernach;
	bool a;

	//while (getline(InputFile, line)) {
	while (InputFile.good()) {

		getline(InputFile, line, '\n');
		String^ peter = gcnew String(line.c_str());
		a = peter->Contains(substr);
		if (a) {
			if (radioButton1->Checked) {
			stringstream linestream(line);

			getline(linestream, matr, ';');
			getline(linestream, vorname, ';');
			getline(linestream, nachname, ';');
			getline(linestream, startdatum, ';');
			getline(linestream, strasse, ';');
			getline(linestream, hausnr, ';');
			getline(linestream, plz, ';');
			getline(linestream, ort, ';');
			getline(linestream, telmobil, ';');
			getline(linestream, telfest, ';');
			getline(linestream, mail, ';');
			getline(linestream, firma, ';');
			getline(linestream, betreuervor, ';');
			getline(linestream, betreuernach, ';');

			
			textBox1->Text = gcnew String(matr.c_str());
			textBox2->Text = gcnew String(vorname.c_str());
			textBox3->Text = gcnew String(nachname.c_str());
			textBox4->Text = gcnew String(startdatum.c_str());
			textBox5->Text = gcnew String(strasse.c_str());
			textBox6->Text = gcnew String(hausnr.c_str());
			textBox7->Text = gcnew String(plz.c_str());
			textBox8->Text = gcnew String(ort.c_str());
			textBox9->Text = gcnew String(telmobil.c_str());
			textBox10->Text = gcnew String(telfest.c_str());
			textBox11->Text = gcnew String(mail.c_str());
			textBox12->Text = gcnew String(firma.c_str());
			textBox13->Text = gcnew String(betreuervor.c_str());
			textBox14->Text = gcnew String(betreuernach.c_str());
			}
			}

	}

}

private: System::Void comboBox2_SelectionChangeCommitted(System::Object^  sender, System::EventArgs^  e) {
	String^ temp_1 = Convert::ToString(comboBox2->SelectedItem);
	std::string temp = msclr::interop::marshal_as<std::string>(temp_1);
	string standard;
	string del = ",";

	int pos = temp.find(del);
	String^ substr = temp_1->Substring(0, pos);

	ifstream InputFile("firma.csv");


	string line;
	string firma;
	string strasse;
	string hausnr;
	string plz;
	string ort;
	string vorname;
	string nachname;
	string position;
	string telmobil;
	string telfest;
	string mail;
	bool a;

	//while (getline(InputFile, line)) {
	while (InputFile.good()) {

		getline(InputFile, line, '\n');
		String^ peter = gcnew String(line.c_str());
		a = peter->Contains(substr);
		if (a) {
			if (radioButton2->Checked){
			stringstream linestream(line);

			getline(linestream, firma, ';');
			getline(linestream, strasse, ';');
			getline(linestream, hausnr, ';');
			getline(linestream, plz, ';');
			getline(linestream, ort, ';');
			getline(linestream, vorname, ';');
			getline(linestream, nachname, ';');
			getline(linestream, position, ';');
			getline(linestream, telmobil, ';');
			getline(linestream, telfest, ';');
			getline(linestream, mail, ';');

			textBox1->Text = gcnew String(firma.c_str());
			textBox2->Text = gcnew String(strasse.c_str());
			textBox3->Text = gcnew String(hausnr.c_str());
			textBox4->Text = gcnew String(plz.c_str());
			textBox5->Text = gcnew String(ort.c_str());
			textBox6->Text = gcnew String(vorname.c_str());
			textBox7->Text = gcnew String(nachname.c_str());
			textBox8->Text = gcnew String(position.c_str());
			textBox9->Text = gcnew String(telmobil.c_str());
			textBox10->Text = gcnew String(telfest.c_str());
			textBox11->Text = gcnew String(mail.c_str());
			}
		}

	}


}
};
}
