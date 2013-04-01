#pragma once

namespace AdressUndTelefonbuchGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Bearbeiten
	/// </summary>
	public ref class Bearbeiten : public System::Windows::Forms::Form
	{
	public:
		Bearbeiten(void)
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
		~Bearbeiten()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected: 
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Adresse;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Telefonnummer1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Telefonnummer2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Telefonnummer3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;












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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Adresse = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefonnummer1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefonnummer2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefonnummer3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->Name, this->Adresse, 
				this->Telefonnummer1, this->Telefonnummer2, this->Telefonnummer3});
			this->dataGridView1->Location = System::Drawing::Point(37, 55);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(544, 199);
			this->dataGridView1->TabIndex = 29;
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 13);
			this->label2->TabIndex = 28;
			this->label2->Text = L"Auswahl des Elements:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(101, 320);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(170, 20);
			this->textBox1->TabIndex = 30;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(101, 366);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(170, 20);
			this->textBox2->TabIndex = 31;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(172, 421);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(170, 20);
			this->textBox3->TabIndex = 32;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(39, 323);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 33;
			this->label6->Text = L"Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 369);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 34;
			this->label1->Text = L"Adresse";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(39, 424);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 13);
			this->label3->TabIndex = 35;
			this->label3->Text = L"Telefonnummer 1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(39, 459);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 13);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Telefonnummer 2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(39, 489);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 13);
			this->label5->TabIndex = 37;
			this->label5->Text = L"Telefonnummer 3";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(172, 456);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(170, 20);
			this->textBox4->TabIndex = 38;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(172, 486);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(170, 20);
			this->textBox5->TabIndex = 39;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(39, 291);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(68, 13);
			this->label7->TabIndex = 40;
			this->label7->Text = L"Neue Daten:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(448, 533);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 41);
			this->button2->TabIndex = 42;
			this->button2->Text = L"Abrrechen";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(267, 533);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 41);
			this->button1->TabIndex = 41;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// Bearbeiten
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(615, 586);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Name = L"Bearbeiten";
			this->Text = L"Bearbeiten";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
