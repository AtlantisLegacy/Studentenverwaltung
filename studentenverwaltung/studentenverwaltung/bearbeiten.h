#pragma once

namespace studentenverwaltung {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für bearbeiten
	/// </summary>
	public ref class bearbeiten : public System::Windows::Forms::Form
	{
	public:
		bearbeiten(void)
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
		~bearbeiten()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label26;
	protected:
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
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
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(180, 81);
			this->label26->Name = L"label26";
			this->label26->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label26->Size = System::Drawing::Size(145, 15);
			this->label26->TabIndex = 111;
			this->label26->Text = L"Praxispartner bearbeiten:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(211, 81);
			this->label25->Name = L"label25";
			this->label25->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label25->Size = System::Drawing::Size(114, 15);
			this->label25->TabIndex = 110;
			this->label25->Text = L"Student bearbeiten:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(223, 432);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 41);
			this->button3->TabIndex = 109;
			this->button3->Text = L"Schließen";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &bearbeiten::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(115, 432);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 41);
			this->button2->TabIndex = 108;
			this->button2->Text = L"Verwerfen ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &bearbeiten::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(7, 432);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 41);
			this->button1->TabIndex = 107;
			this->button1->Text = L"Speichern";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &bearbeiten::button1_Click);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(189, 99);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(136, 20);
			this->textBox13->TabIndex = 106;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(189, 125);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(136, 20);
			this->textBox14->TabIndex = 105;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(189, 152);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(136, 20);
			this->textBox15->TabIndex = 104;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(189, 178);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(136, 20);
			this->textBox16->TabIndex = 103;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(189, 204);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(136, 20);
			this->textBox17->TabIndex = 102;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(189, 230);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(136, 20);
			this->textBox18->TabIndex = 101;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(189, 256);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(136, 20);
			this->textBox19->TabIndex = 100;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(189, 282);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(136, 20);
			this->textBox20->TabIndex = 99;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(189, 308);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(136, 20);
			this->textBox21->TabIndex = 98;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(189, 334);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(136, 20);
			this->textBox22->TabIndex = 97;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(189, 360);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(136, 20);
			this->textBox23->TabIndex = 96;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(89, 99);
			this->label14->Name = L"label14";
			this->label14->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label14->Size = System::Drawing::Size(83, 15);
			this->label14->TabIndex = 95;
			this->label14->Text = L"Praxispartner:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(126, 125);
			this->label15->Name = L"label15";
			this->label15->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label15->Size = System::Drawing::Size(46, 15);
			this->label15->TabIndex = 94;
			this->label15->Text = L"Straße:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(86, 152);
			this->label16->Name = L"label16";
			this->label16->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label16->Size = System::Drawing::Size(86, 15);
			this->label16->TabIndex = 93;
			this->label16->Text = L"Hausnummer:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(99, 178);
			this->label17->Name = L"label17";
			this->label17->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label17->Size = System::Drawing::Size(73, 15);
			this->label17->TabIndex = 92;
			this->label17->Text = L"Postleitzahl:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(146, 204);
			this->label18->Name = L"label18";
			this->label18->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label18->Size = System::Drawing::Size(26, 15);
			this->label18->TabIndex = 91;
			this->label18->Text = L"Ort:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(19, 230);
			this->label19->Name = L"label19";
			this->label19->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label19->Size = System::Drawing::Size(153, 15);
			this->label19->TabIndex = 90;
			this->label19->Text = L"Ansprechpartner Vorname:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(8, 256);
			this->label20->Name = L"label20";
			this->label20->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label20->Size = System::Drawing::Size(164, 15);
			this->label20->TabIndex = 89;
			this->label20->Text = L"Ansprechpartner Nachname:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(118, 282);
			this->label21->Name = L"label21";
			this->label21->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label21->Size = System::Drawing::Size(54, 15);
			this->label21->TabIndex = 88;
			this->label21->Text = L"Position:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(131, 308);
			this->label22->Name = L"label22";
			this->label22->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label22->Size = System::Drawing::Size(41, 15);
			this->label22->TabIndex = 87;
			this->label22->Text = L"Mobil:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(116, 334);
			this->label23->Name = L"label23";
			this->label23->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label23->Size = System::Drawing::Size(56, 15);
			this->label23->TabIndex = 86;
			this->label23->Text = L"Festnetz:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(126, 360);
			this->label24->Name = L"label24";
			this->label24->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label24->Size = System::Drawing::Size(46, 15);
			this->label24->TabIndex = 85;
			this->label24->Text = L"E-Mail:";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(189, 386);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(136, 20);
			this->textBox12->TabIndex = 84;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(189, 359);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(136, 20);
			this->textBox11->TabIndex = 83;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(189, 333);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(136, 20);
			this->textBox10->TabIndex = 82;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(189, 307);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(136, 20);
			this->textBox9->TabIndex = 81;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(189, 281);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(136, 20);
			this->textBox8->TabIndex = 80;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(189, 255);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(136, 20);
			this->textBox7->TabIndex = 79;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(189, 229);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(136, 20);
			this->textBox6->TabIndex = 78;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(189, 203);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(136, 20);
			this->textBox5->TabIndex = 77;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(189, 177);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(136, 20);
			this->textBox4->TabIndex = 76;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(189, 151);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(136, 20);
			this->textBox3->TabIndex = 75;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(189, 125);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(136, 20);
			this->textBox2->TabIndex = 74;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(189, 99);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(136, 20);
			this->textBox1->TabIndex = 73;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(93, 387);
			this->label13->Name = L"label13";
			this->label13->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label13->Size = System::Drawing::Size(83, 15);
			this->label13->TabIndex = 72;
			this->label13->Text = L"Praxispartner:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(126, 360);
			this->label12->Name = L"label12";
			this->label12->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label12->Size = System::Drawing::Size(46, 15);
			this->label12->TabIndex = 71;
			this->label12->Text = L"E-Mail:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(116, 334);
			this->label11->Name = L"label11";
			this->label11->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label11->Size = System::Drawing::Size(56, 15);
			this->label11->TabIndex = 70;
			this->label11->Text = L"Festnetz:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(84, 308);
			this->label10->Name = L"label10";
			this->label10->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label10->Size = System::Drawing::Size(88, 15);
			this->label10->TabIndex = 69;
			this->label10->Text = L"Mobilnummer:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(146, 282);
			this->label9->Name = L"label9";
			this->label9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label9->Size = System::Drawing::Size(26, 15);
			this->label9->TabIndex = 68;
			this->label9->Text = L"Ort:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(101, 256);
			this->label8->Name = L"label8";
			this->label8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label8->Size = System::Drawing::Size(71, 15);
			this->label8->TabIndex = 67;
			this->label8->Text = L"Nachname:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(86, 230);
			this->label7->Name = L"label7";
			this->label7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label7->Size = System::Drawing::Size(86, 15);
			this->label7->TabIndex = 66;
			this->label7->Text = L"Hausnummer:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(126, 204);
			this->label6->Name = L"label6";
			this->label6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label6->Size = System::Drawing::Size(46, 15);
			this->label6->TabIndex = 65;
			this->label6->Text = L"Straße:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(116, 178);
			this->label5->Name = L"label5";
			this->label5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label5->Size = System::Drawing::Size(56, 15);
			this->label5->TabIndex = 64;
			this->label5->Text = L"Startjahr:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(105, 152);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label4->Size = System::Drawing::Size(71, 15);
			this->label4->TabIndex = 63;
			this->label4->Text = L"Nachname:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(116, 126);
			this->label3->Name = L"label3";
			this->label3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label3->Size = System::Drawing::Size(60, 15);
			this->label3->TabIndex = 62;
			this->label3->Text = L"Vorname:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(75, 100);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(101, 15);
			this->label2->TabIndex = 61;
			this->label2->Text = L"Matrikelnummer:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Datenbank auslesen" });
			this->comboBox1->Location = System::Drawing::Point(22, 43);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(119, 21);
			this->comboBox1->TabIndex = 60;
			this->comboBox1->Text = L"Studentendaten";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &bearbeiten::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(286, 18);
			this->label1->TabIndex = 59;
			this->label1->Text = L"Welcher Datensatz soll geändert werden \?";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Datenbank auslesen" });
			this->comboBox2->Location = System::Drawing::Point(205, 43);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(119, 21);
			this->comboBox2->TabIndex = 112;
			this->comboBox2->Text = L"Praxispartnerdaten";
			this->comboBox2->SelectedValueChanged += gcnew System::EventHandler(this, &bearbeiten::comboBox2_SelectedValueChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(7, 46);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(14, 13);
			this->radioButton1->TabIndex = 113;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &bearbeiten::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(189, 46);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(14, 13);
			this->radioButton2->TabIndex = 114;
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &bearbeiten::radioButton2_CheckedChanged);
			// 
			// bearbeiten
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(336, 480);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->comboBox2);
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
			this->Name = L"bearbeiten";
			this->Text = L"bearbeiten";
			this->Load += gcnew System::EventHandler(this, &bearbeiten::bearbeiten_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		//Aktivieren der Auswahl für Studenten und der cbb zur auswahl des Datensatz Datensätze in csv datei Speichern => einfacheres auslesen
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
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	//Aktivieren der Auswahl für Praxispartner und der cbb zur auswahl des Datensatz Datensätze in csv datei Speichern => einfacheres auslesen
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
private: System::Void bearbeiten_Load(System::Object^  sender, System::EventArgs^  e) {
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
	//Alle eingaben verwerfen
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
	//Eingabe speichern
	//Abfrage ob etwas eingetragen ist
	if (MessageBox::Show("Wollen Sie die Eingabe speichern?", "Speichern", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		MessageBox::Show("Die Eingabe wurde gespeichert!", "Speichern");
		//Speichern Einfügen
		if (radioButton1->Checked) {
			//Speichern der Praxispartnerdaten
			/*What*/MessageBox::Show("WHAT??!", "Speichern");/*What*/
		}
		if (radioButton2->Checked) {
			//Speichern der Studentendaten
			/*What*/MessageBox::Show("WHAT??!", "Speichern");/*What*/
		}
	}
}
private: System::Void comboBox2_SelectedValueChanged(System::Object^  sender, System::EventArgs^  e) {
	//Eintragen des Datensatzes in die Textboxen Praxispartner
	//Datensätze in ein Array auslesen und den Textboxen zuorden
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	//Eintragen des Datensatzes in die Textboxen Student
	//Datensätze in ein Array auslesen und den Textboxen zuorden

}
};
}
