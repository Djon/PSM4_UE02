#pragma once

namespace AdressUndTelefonbuchGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Import
	/// </summary>
	public ref class Import : public System::Windows::Forms::Form
	{
	public:
		Import(void)
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
		~Import()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Dateipfad;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Adresse;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Telefonnummer1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Telefonnummer2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Telefonnummer3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

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
			this->Dateipfad = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Adresse = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefonnummer1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefonnummer2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefonnummer3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// Dateipfad
			// 
			this->Dateipfad->AutoSize = true;
			this->Dateipfad->Location = System::Drawing::Point(18, 35);
			this->Dateipfad->Name = L"Dateipfad";
			this->Dateipfad->Size = System::Drawing::Size(53, 13);
			this->Dateipfad->TabIndex = 6;
			this->Dateipfad->Text = L"Dateipfad";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(80, 32);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(304, 20);
			this->textBox2->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(427, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 41);
			this->button1->TabIndex = 12;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->Name, this->Adresse, 
				this->Telefonnummer1, this->Telefonnummer2, this->Telefonnummer3});
			this->dataGridView1->Location = System::Drawing::Point(21, 108);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(543, 199);
			this->dataGridView1->TabIndex = 37;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Name";
			this->Name->Name = L"Name";
			// 
			// Adresse
			// 
			this->Adresse->HeaderText = L"Adresse";
			this->Adresse->Name = L"Adresse";
			// 
			// Telefonnummer1
			// 
			this->Telefonnummer1->HeaderText = L"Telefonnummer1";
			this->Telefonnummer1->Name = L"Telefonnummer1";
			// 
			// Telefonnummer2
			// 
			this->Telefonnummer2->HeaderText = L"Telefonnummer2";
			this->Telefonnummer2->Name = L"Telefonnummer2";
			// 
			// Telefonnummer3
			// 
			this->Telefonnummer3->HeaderText = L"Telefonnummer3";
			this->Telefonnummer3->Name = L"Telefonnummer3";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 13);
			this->label1->TabIndex = 38;
			this->label1->Text = L"Einträge auswählen:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(409, 327);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 41);
			this->button2->TabIndex = 40;
			this->button2->Text = L"Abrrechen";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(248, 327);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(155, 41);
			this->button3->TabIndex = 39;
			this->button3->Text = L"OK";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// Import
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(595, 383);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Dateipfad);
			this->Controls->Add(this->textBox2);
			this->Name = L"Import";
			this->Text = L"Import";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
