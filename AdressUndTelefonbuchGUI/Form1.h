#pragma once

namespace AdressUndTelefonbuchGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}




	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;


	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(30, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 47);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Erstellen";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(215, 40);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 47);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Suche nach Name";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(30, 139);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 47);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Bearbeiten";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(215, 139);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(121, 47);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Anzeigen";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(30, 242);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(121, 47);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Anzeige exportieren (HTML)";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(390, 139);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(121, 47);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Import";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(390, 242);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(121, 47);
			this->button7->TabIndex = 11;
			this->button7->Text = L"Software aktualisieren";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(390, 40);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(121, 47);
			this->button8->TabIndex = 12;
			this->button8->Text = L"Suche nach Adresse";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(215, 242);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(121, 47);
			this->button9->TabIndex = 13;
			this->button9->Text = L"Anzeige exportieren (ASCII)";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(560, 331);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Adress und Telefonbuch";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}

