#pragma once
#include "neu.h"
#include "ausgabe.h"
#include "suche.h"
#include "bearbeiten.h"
#include "loeschen.h"
#include "head.h"



namespace studentenverwaltung {
	
	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(42, 85);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Datensatz anlegen";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(42, 138);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 47);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Datensatz ausgeben";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(9, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(340, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Studentendatenbank - Hauptmenü";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(42, 191);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 47);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Suchen";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(206, 85);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(108, 47);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Datensatz ändern";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(206, 138);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(108, 47);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Datensatz Löschen";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(206, 191);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(108, 47);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Beenden";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(358, 257);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
// neuer Datensatz 
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	neu^ Neu = gcnew neu();
	Neu->ShowDialog();
}
		 
// Ausgabe Datensätze
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	student stud[120];
	firma f[120];

	einlesen_student(stud);
	einlesen_firma(f);

	csv_student(stud);
	csv_firma(f);
	
	ausgabe^ Ausgabe = gcnew ausgabe();
	Ausgabe->ShowDialog();
}
		 
// Suche
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	suche^ Suche = gcnew suche();
	Suche->ShowDialog();
}
		 
//Ändern
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	bearbeiten^ Bearbeiten = gcnew bearbeiten();
	Bearbeiten->ShowDialog();
}
		 
// Löschen
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	loeschen^ Loeschen = gcnew loeschen();
	Loeschen ->ShowDialog();
}
		 
//Schließen
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}


};
}
