#pragma once

namespace mips {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Simulator
	/// </summary>
	public ref class Simulator : public System::Windows::Forms::Form
	{
	public:
		Simulator(void)
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
		~Simulator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  CodeFileLabel;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  ParsingLabel;
	private: System::Windows::Forms::Button^  LoadSourceCodeButton;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  CodeBrowse;
	private: System::Windows::Forms::Button^  RegexBrowse;


	protected:

	protected:

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
			this->CodeFileLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->ParsingLabel = (gcnew System::Windows::Forms::Label());
			this->LoadSourceCodeButton = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->CodeBrowse = (gcnew System::Windows::Forms::Button());
			this->RegexBrowse = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// CodeFileLabel
			// 
			this->CodeFileLabel->AutoSize = true;
			this->CodeFileLabel->Location = System::Drawing::Point(8, 9);
			this->CodeFileLabel->Name = L"CodeFileLabel";
			this->CodeFileLabel->Size = System::Drawing::Size(119, 13);
			this->CodeFileLabel->TabIndex = 0;
			this->CodeFileLabel->Text = L"Assembly Source Code:";
			this->CodeFileLabel->Click += gcnew System::EventHandler(this, &Simulator::label1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ISA Regex Syntax File:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(133, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(191, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(133, 35);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(191, 20);
			this->textBox2->TabIndex = 3;
			// 
			// ParsingLabel
			// 
			this->ParsingLabel->AutoSize = true;
			this->ParsingLabel->Location = System::Drawing::Point(12, 96);
			this->ParsingLabel->Name = L"ParsingLabel";
			this->ParsingLabel->Size = System::Drawing::Size(102, 13);
			this->ParsingLabel->TabIndex = 4;
			this->ParsingLabel->Text = L"File Parsing Results:";
			this->ParsingLabel->Click += gcnew System::EventHandler(this, &Simulator::label2_Click);
			// 
			// LoadSourceCodeButton
			// 
			this->LoadSourceCodeButton->Location = System::Drawing::Point(101, 61);
			this->LoadSourceCodeButton->Name = L"LoadSourceCodeButton";
			this->LoadSourceCodeButton->Size = System::Drawing::Size(75, 23);
			this->LoadSourceCodeButton->TabIndex = 5;
			this->LoadSourceCodeButton->Text = L"Load Source Code";
			this->LoadSourceCodeButton->UseVisualStyleBackColor = true;
			this->LoadSourceCodeButton->Click += gcnew System::EventHandler(this, &Simulator::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(15, 128);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(220, 242);
			this->richTextBox1->TabIndex = 6;
			this->richTextBox1->Text = L"";
			// 
			// CodeBrowse
			// 
			this->CodeBrowse->Location = System::Drawing::Point(331, 6);
			this->CodeBrowse->Name = L"CodeBrowse";
			this->CodeBrowse->Size = System::Drawing::Size(75, 23);
			this->CodeBrowse->TabIndex = 7;
			this->CodeBrowse->Text = L"Browse";
			this->CodeBrowse->UseVisualStyleBackColor = true;
			// 
			// RegexBrowse
			// 
			this->RegexBrowse->Location = System::Drawing::Point(331, 33);
			this->RegexBrowse->Name = L"RegexBrowse";
			this->RegexBrowse->Size = System::Drawing::Size(75, 23);
			this->RegexBrowse->TabIndex = 8;
			this->RegexBrowse->Text = L"Browse";
			this->RegexBrowse->UseVisualStyleBackColor = true;
			// 
			// Simulator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1284, 661);
			this->Controls->Add(this->RegexBrowse);
			this->Controls->Add(this->CodeBrowse);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->LoadSourceCodeButton);
			this->Controls->Add(this->ParsingLabel);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->CodeFileLabel);
			this->Name = L"Simulator";
			this->Text = L"Simulator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
