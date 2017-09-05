#pragma once

namespace studentenverwaltung {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Zusammenfassung für neu
	/// </summary>
	public ref class neu : public System::Windows::Forms::Form
	{
	public:
		neu(void)
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
		~neu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox23;

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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;

	protected:



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(284, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcher Datensatz soll angelegt werden \?";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Student", L"Praxispartner" });
			this->comboBox1->Location = System::Drawing::Point(15, 50);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(119, 21);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &neu::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(75, 107);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(101, 15);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Matrikelnummer:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(116, 133);
			this->label3->Name = L"label3";
			this->label3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label3->Size = System::Drawing::Size(60, 15);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Vorname:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(105, 159);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label4->Size = System::Drawing::Size(71, 15);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Nachname:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(116, 185);
			this->label5->Name = L"label5";
			this->label5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label5->Size = System::Drawing::Size(56, 15);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Startjahr:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(126, 211);
			this->label6->Name = L"label6";
			this->label6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label6->Size = System::Drawing::Size(46, 15);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Straße:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(86, 237);
			this->label7->Name = L"label7";
			this->label7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label7->Size = System::Drawing::Size(86, 15);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Hausnummer:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(101, 263);
			this->label8->Name = L"label8";
			this->label8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label8->Size = System::Drawing::Size(71, 15);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Postleitzahl:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(146, 289);
			this->label9->Name = L"label9";
			this->label9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label9->Size = System::Drawing::Size(26, 15);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Ort:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(84, 315);
			this->label10->Name = L"label10";
			this->label10->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label10->Size = System::Drawing::Size(88, 15);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Mobilnummer:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(116, 341);
			this->label11->Name = L"label11";
			this->label11->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label11->Size = System::Drawing::Size(56, 15);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Festnetz:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(126, 367);
			this->label12->Name = L"label12";
			this->label12->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label12->Size = System::Drawing::Size(46, 15);
			this->label12->TabIndex = 16;
			this->label12->Text = L"E-Mail:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(93, 394);
			this->label13->Name = L"label13";
			this->label13->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label13->Size = System::Drawing::Size(83, 15);
			this->label13->TabIndex = 17;
			this->label13->Text = L"Praxispartner:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(189, 106);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(136, 20);
			this->textBox1->TabIndex = 18;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(189, 132);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(136, 20);
			this->textBox2->TabIndex = 19;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(189, 158);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(136, 20);
			this->textBox3->TabIndex = 20;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(189, 184);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(136, 20);
			this->textBox4->TabIndex = 21;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(189, 210);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(136, 20);
			this->textBox5->TabIndex = 22;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(189, 236);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(136, 20);
			this->textBox6->TabIndex = 23;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(189, 262);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(136, 20);
			this->textBox7->TabIndex = 24;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(189, 288);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(136, 20);
			this->textBox8->TabIndex = 25;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(189, 314);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(136, 20);
			this->textBox9->TabIndex = 26;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(189, 340);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(136, 20);
			this->textBox10->TabIndex = 27;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(189, 366);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(136, 20);
			this->textBox11->TabIndex = 28;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(189, 393);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(136, 20);
			this->textBox12->TabIndex = 29;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(189, 106);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(136, 20);
			this->textBox13->TabIndex = 53;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(189, 132);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(136, 20);
			this->textBox14->TabIndex = 52;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(189, 159);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(136, 20);
			this->textBox15->TabIndex = 51;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(189, 185);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(136, 20);
			this->textBox16->TabIndex = 50;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(189, 211);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(136, 20);
			this->textBox17->TabIndex = 49;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(189, 237);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(136, 20);
			this->textBox18->TabIndex = 48;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(189, 263);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(136, 20);
			this->textBox19->TabIndex = 47;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(189, 289);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(136, 20);
			this->textBox20->TabIndex = 46;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(189, 315);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(136, 20);
			this->textBox21->TabIndex = 45;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(189, 341);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(136, 20);
			this->textBox22->TabIndex = 44;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(189, 367);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(136, 20);
			this->textBox23->TabIndex = 43;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(89, 106);
			this->label14->Name = L"label14";
			this->label14->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label14->Size = System::Drawing::Size(83, 15);
			this->label14->TabIndex = 41;
			this->label14->Text = L"Praxispartner:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(126, 132);
			this->label15->Name = L"label15";
			this->label15->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label15->Size = System::Drawing::Size(46, 15);
			this->label15->TabIndex = 40;
			this->label15->Text = L"Straße:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(86, 159);
			this->label16->Name = L"label16";
			this->label16->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label16->Size = System::Drawing::Size(86, 15);
			this->label16->TabIndex = 39;
			this->label16->Text = L"Hausnummer:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(99, 185);
			this->label17->Name = L"label17";
			this->label17->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label17->Size = System::Drawing::Size(73, 15);
			this->label17->TabIndex = 38;
			this->label17->Text = L"Postleitzahl:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(146, 211);
			this->label18->Name = L"label18";
			this->label18->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label18->Size = System::Drawing::Size(26, 15);
			this->label18->TabIndex = 37;
			this->label18->Text = L"Ort:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(19, 237);
			this->label19->Name = L"label19";
			this->label19->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label19->Size = System::Drawing::Size(153, 15);
			this->label19->TabIndex = 36;
			this->label19->Text = L"Ansprechpartner Vorname:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(8, 263);
			this->label20->Name = L"label20";
			this->label20->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label20->Size = System::Drawing::Size(164, 15);
			this->label20->TabIndex = 35;
			this->label20->Text = L"Ansprechpartner Nachname:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(118, 289);
			this->label21->Name = L"label21";
			this->label21->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label21->Size = System::Drawing::Size(54, 15);
			this->label21->TabIndex = 34;
			this->label21->Text = L"Position:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(131, 315);
			this->label22->Name = L"label22";
			this->label22->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label22->Size = System::Drawing::Size(41, 15);
			this->label22->TabIndex = 33;
			this->label22->Text = L"Mobil:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(116, 341);
			this->label23->Name = L"label23";
			this->label23->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label23->Size = System::Drawing::Size(56, 15);
			this->label23->TabIndex = 32;
			this->label23->Text = L"Festnetz:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(126, 367);
			this->label24->Name = L"label24";
			this->label24->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label24->Size = System::Drawing::Size(46, 15);
			this->label24->TabIndex = 31;
			this->label24->Text = L"E-Mail:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(7, 439);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 41);
			this->button1->TabIndex = 54;
			this->button1->Text = L"Speichern";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &neu::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(115, 439);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 41);
			this->button2->TabIndex = 55;
			this->button2->Text = L"Verwerfen ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &neu::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(223, 439);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 41);
			this->button3->TabIndex = 56;
			this->button3->Text = L"Schließen";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &neu::button3_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(224, 88);
			this->label25->Name = L"label25";
			this->label25->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label25->Size = System::Drawing::Size(101, 15);
			this->label25->TabIndex = 57;
			this->label25->Text = L"Eingabe Student:";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(193, 88);
			this->label26->Name = L"label26";
			this->label26->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label26->Size = System::Drawing::Size(132, 15);
			this->label26->TabIndex = 58;
			this->label26->Text = L"Eingabe Praxispartner:";
			// 
			// neu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(342, 486);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox23);
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
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"neu";
			this->Text = L"neu";
			this->Load += gcnew System::EventHandler(this, &neu::neu_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	String^ cbb = Convert::ToString(comboBox1->Text);
	if (cbb == "Praxispartner") {

		//Eingabe Student deaktivieren

		this->label2->Enabled = false;
		this->label2->Visible = false;
		this->textBox1->Enabled = false;
		this->textBox1->Visible = false;

		this->label3->Enabled = false;
		this->label3->Visible = false;
		this->textBox2->Enabled = false;
		this->textBox2->Visible = false;

		this->label4->Enabled = false;
		this->label4->Visible = false;
		this->textBox3->Enabled = false;
		this->textBox3->Visible = false;

		this->label5->Enabled = false;
		this->label5->Visible = false;
		this->textBox4->Enabled = false;
		this->textBox4->Visible = false;

		this->label6->Enabled = false;
		this->label6->Visible = false;
		this->textBox5->Enabled = false;
		this->textBox5->Visible = false;

		this->label7->Enabled = false;
		this->label7->Visible = false;
		this->textBox6->Enabled = false;
		this->textBox6->Visible = false;

		this->label8->Enabled = false;
		this->label8->Visible = false;
		this->textBox7->Enabled = false;
		this->textBox7->Visible = false;

		this->label9->Enabled = false;
		this->label9->Visible = false;
		this->textBox8->Enabled = false;
		this->textBox8->Visible = false;

		this->label10->Enabled = false;
		this->label10->Visible = false;
		this->textBox9->Enabled = false;
		this->textBox9->Visible = false;

		this->label11->Enabled = false;
		this->label11->Visible = false;
		this->textBox10->Enabled = false;
		this->textBox10->Visible = false;

		this->label12->Enabled = false;
		this->label12->Visible = false;
		this->textBox11->Enabled = false;
		this->textBox11->Visible = false;

		this->label13->Enabled = false;
		this->label13->Visible = false;
		this->textBox12->Enabled = false;
		this->textBox12->Visible = false;

		this->label25->Enabled = false;
		this->label25->Visible = false;


		//Eingabe Praxispartner aktivieren
		this->label26->Enabled = true;
		this->label26->Visible = true;

		this->label14->Enabled = true;
		this->label14->Visible = true;
		this->textBox13->Enabled = true;
		this->textBox13->Visible = true;
		
		this->label15->Enabled = true;
		this->label15->Visible = true;
		this->textBox14->Enabled = true;
		this->textBox14->Visible = true; 
		
		this->label16->Enabled = true;
		this->label16->Visible = true;
		this->textBox15->Enabled = true;
		this->textBox15->Visible = true;
		
		this->label17->Enabled = true;
		this->label17->Visible = true;
		this->textBox16->Enabled = true;
		this->textBox16->Visible = true;
		
		this->label18->Enabled = true;
		this->label18->Visible = true;
		this->textBox17->Enabled = true;
		this->textBox17->Visible = true;
		
		this->label19->Enabled = true;
		this->label19->Visible = true;
		this->textBox18->Enabled = true;
		this->textBox18->Visible = true;
		
		this->label20->Enabled = true;
		this->label20->Visible = true;
		this->textBox19->Enabled = true;
		this->textBox19->Visible = true;
		
		this->label21->Enabled = true;
		this->label21->Visible = true;
		this->textBox20->Enabled = true;
		this->textBox20->Visible = true;
		
		this->label22->Enabled = true;
		this->label22->Visible = true;
		this->textBox21->Enabled = true;
		this->textBox21->Visible = true;
		
		this->label23->Enabled = true;
		this->label23->Visible = true;
		this->textBox22->Enabled = true;
		this->textBox22->Visible = true;
		
		this->label24->Enabled = true;
		this->label24->Visible = true;
		this->textBox23->Enabled = true;
		this->textBox23->Visible = true;

		
		
	}
	if (cbb == "Student") {
		

		//Eingabe Praxispartner deaktivieren
		this->label26->Enabled = false;
		this->label26->Visible = false;

		this->label14->Enabled = false;
		this->label14->Visible = false;
		this->textBox13->Enabled = false;
		this->textBox13->Visible = false;

		this->label15->Enabled = false;
		this->label15->Visible = false;
		this->textBox14->Enabled = false;
		this->textBox14->Visible = false;

		this->label16->Enabled = false;
		this->label16->Visible = false;
		this->textBox15->Enabled = false;
		this->textBox15->Visible = false;

		this->label17->Enabled = false;
		this->label17->Visible = false;
		this->textBox16->Enabled = false;
		this->textBox16->Visible = false;

		this->label18->Enabled = false;
		this->label18->Visible = false;
		this->textBox17->Enabled = false;
		this->textBox17->Visible = false;

		this->label19->Enabled = false;
		this->label19->Visible = false;
		this->textBox18->Enabled = false;
		this->textBox18->Visible = false;

		this->label20->Enabled = false;
		this->label20->Visible = false;
		this->textBox19->Enabled = false;
		this->textBox19->Visible = false;

		this->label21->Enabled = false;
		this->label21->Visible = false;
		this->textBox20->Enabled = false;
		this->textBox20->Visible = false;

		this->label22->Enabled = false;
		this->label22->Visible = false;
		this->textBox21->Enabled = false;
		this->textBox21->Visible = false;

		this->label23->Enabled = false;
		this->label23->Visible = false;
		this->textBox22->Enabled = false;
		this->textBox22->Visible = false;

		this->label24->Enabled = false;
		this->label24->Visible = false;
		this->textBox23->Enabled = false;
		this->textBox23->Visible = false;

		//Eingabe Student aktivieren
		this->label2->Enabled = true;
		this->label2->Visible = true;
		this->textBox1->Enabled = true;
		this->textBox1->Visible = true;

		this->label3->Enabled = true;
		this->label3->Visible = true;
		this->textBox2->Enabled = true;
		this->textBox2->Visible = true;

		this->label4->Enabled = true;
		this->label4->Visible = true;
		this->textBox3->Enabled = true;
		this->textBox3->Visible = true;

		this->label5->Enabled = true;
		this->label5->Visible = true;
		this->textBox4->Enabled = true;
		this->textBox4->Visible = true;

		this->label6->Enabled = true;
		this->label6->Visible = true;
		this->textBox5->Enabled = true;
		this->textBox5->Visible = true;

		this->label7->Enabled = true;
		this->label7->Visible = true;
		this->textBox6->Enabled = true;
		this->textBox6->Visible = true;

		this->label8->Enabled = true;
		this->label8->Visible = true;
		this->textBox7->Enabled = true;
		this->textBox7->Visible = true;

		this->label9->Enabled = true;
		this->label9->Visible = true;
		this->textBox8->Enabled = true;
		this->textBox8->Visible = true;

		this->label10->Enabled = true;
		this->label10->Visible = true;
		this->textBox9->Enabled = true;
		this->textBox9->Visible = true;

		this->label11->Enabled = true;
		this->label11->Visible = true;
		this->textBox10->Enabled = true;
		this->textBox10->Visible = true;

		this->label12->Enabled = true;
		this->label12->Visible = true;
		this->textBox11->Enabled = true;
		this->textBox11->Visible = true;

		this->label13->Enabled = true;
		this->label13->Visible = true;
		this->textBox12->Enabled = true;
		this->textBox12->Visible = true;

		this->label25->Enabled = true;
		this->label25->Visible = true;
	}

}
private: System::Void neu_Load(System::Object^  sender, System::EventArgs^  e) {
	//Eingabe Student deaktivieren

	this->label2->Enabled = false;
	this->label2->Visible = false;
	this->textBox1->Enabled = false;
	this->textBox1->Visible = false;

	this->label3->Enabled = false;
	this->label3->Visible = false;
	this->textBox2->Enabled = false;
	this->textBox2->Visible = false;

	this->label4->Enabled = false;
	this->label4->Visible = false;
	this->textBox3->Enabled = false;
	this->textBox3->Visible = false;

	this->label5->Enabled = false;
	this->label5->Visible = false;
	this->textBox4->Enabled = false;
	this->textBox4->Visible = false;

	this->label6->Enabled = false;
	this->label6->Visible = false;
	this->textBox5->Enabled = false;
	this->textBox5->Visible = false;

	this->label7->Enabled = false;
	this->label7->Visible = false;
	this->textBox6->Enabled = false;
	this->textBox6->Visible = false;

	this->label8->Enabled = false;
	this->label8->Visible = false;
	this->textBox7->Enabled = false;
	this->textBox7->Visible = false;

	this->label9->Enabled = false;
	this->label9->Visible = false;
	this->textBox8->Enabled = false;
	this->textBox8->Visible = false;

	this->label10->Enabled = false;
	this->label10->Visible = false;
	this->textBox9->Enabled = false;
	this->textBox9->Visible = false;

	this->label11->Enabled = false;
	this->label11->Visible = false;
	this->textBox10->Enabled = false;
	this->textBox10->Visible = false;

	this->label12->Enabled = false;
	this->label12->Visible = false;
	this->textBox11->Enabled = false;
	this->textBox11->Visible = false;

	this->label13->Enabled = false;
	this->label13->Visible = false;
	this->textBox12->Enabled = false;
	this->textBox12->Visible = false;

	this->label25->Enabled = false;
	this->label25->Visible = false;


	//Eingabe Praxispartner deaktivieren
	this->label14->Enabled = false;
	this->label14->Visible = false;
	this->textBox13->Enabled = false;
	this->textBox13->Visible = false;

	this->label15->Enabled = false;
	this->label15->Visible = false;
	this->textBox14->Enabled = false;
	this->textBox14->Visible = false;

	this->label16->Enabled = false;
	this->label16->Visible = false;
	this->textBox15->Enabled = false;
	this->textBox15->Visible = false;

	this->label17->Enabled = false;
	this->label17->Visible = false;
	this->textBox16->Enabled = false;
	this->textBox16->Visible = false;

	this->label18->Enabled = false;
	this->label18->Visible = false;
	this->textBox17->Enabled = false;
	this->textBox17->Visible = false;

	this->label19->Enabled = false;
	this->label19->Visible = false;
	this->textBox18->Enabled = false;
	this->textBox18->Visible = false;

	this->label20->Enabled = false;
	this->label20->Visible = false;
	this->textBox19->Enabled = false;
	this->textBox19->Visible = false;

	this->label21->Enabled = false;
	this->label21->Visible = false;
	this->textBox20->Enabled = false;
	this->textBox20->Visible = false;

	this->label22->Enabled = false;
	this->label22->Visible = false;
	this->textBox21->Enabled = false;
	this->textBox21->Visible = false;

	this->label23->Enabled = false;
	this->label23->Visible = false;
	this->textBox22->Enabled = false;
	this->textBox22->Visible = false;

	this->label24->Enabled = false;
	this->label24->Visible = false;
	this->textBox23->Enabled = false;
	this->textBox23->Visible = false;

	this->label26->Enabled = false;
	this->label26->Visible = false;




}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//Eingabe Verwerefn
	
	if (MessageBox::Show("Wollen Sie die Eingabe verwerfen?", "Verwerfen", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		MessageBox::Show("Die Eingabe wurde verworfen!", "Verwerfen");
		
		this->textBox1->Text = "";

		this->textBox2->Text = "";

		this->textBox3->Text = "";

		this->textBox4->Text = "";

		this->textBox5->Text = "";

		this->textBox6->Text = "";

		this->textBox7->Text = "";

		this->textBox8->Text = "";

		this->textBox9->Text = "";

		this->textBox10->Text = "";

		this->textBox11->Text = "";

		this->textBox12->Text = "";

		this->textBox13->Text = "";

		this->textBox14->Text = "";

		this->textBox15->Text = "";

		this->textBox16->Text = "";

		this->textBox17->Text = "";

		this->textBox18->Text = "";

		this->textBox19->Text = "";

		this->textBox20->Text = "";

		this->textBox21->Text = "";

		this->textBox22->Text = "";
		
		this->textBox23->Text = "";

	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (MessageBox::Show("Wollen Sie die Eingabe speichern?", "Speichern", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		MessageBox::Show("Die Eingabe wurde gespeichert!", "Speichern");
		//Speichern Einfügen
		String^ cbb = Convert::ToString(comboBox1->Text);
		if (cbb == "Praxispartner") {
			//Speichern der Praxispartnerdaten
			/*What*/MessageBox::Show("WHAT??!", "Speichern");/*What*/
		}
		if (cbb == "Student") {


			student stud[120];
			firma f[120];
		
			String^ Matrikelnummer = textBox1 -> Text;
			string matr = msclr::interop::marshal_as<std::string>(Matrikelnummer);

			String^ Vorname = textBox2->Text;
			string vorn = msclr::interop::marshal_as<std::string>(Vorname);
			
			String^ Nachname = textBox3->Text;
			string nach = msclr::interop::marshal_as<std::string>(Nachname);

			String^ Startjahr = textBox4->Text;
			string star = msclr::interop::marshal_as<std::string>(Startjahr);

			String^ Strasse = textBox5->Text;
			string stra = msclr::interop::marshal_as<std::string>(Strasse);

			String^ Hausnummer = textBox6->Text;
			string haus = msclr::interop::marshal_as<std::string>(Hausnummer);

			String^ Postleitzahl = textBox7->Text;
			string post = msclr::interop::marshal_as<std::string>(Postleitzahl);

			String^ Ort = textBox8->Text;
			string ort = msclr::interop::marshal_as<std::string>(Ort);

			String^ Mobilnummer = textBox9->Text;
			string mobil = msclr::interop::marshal_as<std::string>(Mobilnummer);

			String^ Festnetz = textBox10->Text;
			string fest = msclr::interop::marshal_as<std::string>(Festnetz);

			String^ EMail = textBox11->Text;
			string email = msclr::interop::marshal_as<std::string>(EMail);

			String^ Praxispartner = textBox12->Text;
			string prax = msclr::interop::marshal_as<std::string>(Praxispartner);

			ofstream studenten;
			studenten.open ("test.csv");
			studenten << matr << ";" << vorn << ";" << nach << ";" << star << ";" << stra << ";" << haus << ";" << post << ";" << ort << ";" << mobil << ";" << fest << ";" << email << ";" << prax << ";" << endl;

			studenten.close;
			cout << matr;

			//stud[12].matr = Matrikelnummer;
				/*
			this->textBox2->Text = "";

			this->textBox3->Text = "";

			this->textBox4->Text = "";

			this->textBox5->Text = "";

			this->textBox6->Text = "";

			this->textBox7->Text = "";

			this->textBox8->Text = "";

			this->textBox9->Text = "";

			this->textBox10->Text = "";

			this->textBox11->Text = "";

			this->textBox12->Text = "";
*/		
			
			
			
			
			
			
			
			
			//Speichern der Studentendaten
			///*What*/MessageBox::Show("WHAT??!", "Speichern");/*What*/
		}
	}
}
};
}
