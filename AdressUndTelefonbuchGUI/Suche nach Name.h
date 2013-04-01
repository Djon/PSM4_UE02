#pragma once

namespace AdressUndTelefonbuchGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SuchenachName
	/// </summary>
	public ref class SuchenachName : public System::Windows::Forms::Form
	{
	public:
		SuchenachName(void)
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
		~SuchenachName()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	protected: 
	private: System::Windows::Forms::Button^  button1;






	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Adresse;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Telefonnummer1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Telefonnummer2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Telefonnummer3;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Adresse = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefonnummer1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefonnummer2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefonnummer3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(412, 332);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 41);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Abrrechen";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(229, 332);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 41);
			this->button1->TabIndex = 23;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Name";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(82, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(170, 20);
			this->textBox1->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 13);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Suchergebnisse";
			this->label2->Click += gcnew System::EventHandler(this, &SuchenachName::label2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(282, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(155, 41);
			this->button3->TabIndex = 26;
			this->button3->Text = L"Suche";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &SuchenachName::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->Name, this->Adresse, 
				this->Telefonnummer1, this->Telefonnummer2, this->Telefonnummer3});
			this->dataGridView1->Location = System::Drawing::Point(23, 109);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(544, 199);
			this->dataGridView1->TabIndex = 27;
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
			// SuchenachName
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(602, 393);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"SuchenachName";
			this->Text = L"SuchenachName";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
