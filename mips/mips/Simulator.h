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
	private: System::Windows::Forms::RichTextBox^  ParsingResults;

	private: System::Windows::Forms::Button^  CodeBrowse;
	private: System::Windows::Forms::Button^  RegexBrowse;
	private: System::Windows::Forms::RichTextBox^  AssemblySource;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::GroupBox^  RegistersGroupBox;






































	private: System::Windows::Forms::TextBox^  textBox34;
	private: System::Windows::Forms::TextBox^  textBox33;
	private: System::Windows::Forms::TextBox^  textBox32;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::TextBox^  Reg8;

	private: System::Windows::Forms::TextBox^  Reg7;

	private: System::Windows::Forms::TextBox^  Reg6;

	private: System::Windows::Forms::TextBox^  Reg5;

	private: System::Windows::Forms::TextBox^  Reg4;

	private: System::Windows::Forms::TextBox^  Reg2;

	private: System::Windows::Forms::TextBox^  Reg1;

	private: System::Windows::Forms::TextBox^  Reg0;

	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::TextBox^  Reg3;
private: System::Windows::Forms::GroupBox^  memGroupBox;
private: System::Windows::Forms::GroupBox^  stackBox;
private: System::Windows::Forms::TextBox^  Stack0;
private: System::Windows::Forms::TextBox^  Stack3;






private: System::Windows::Forms::TextBox^  Stack2;

private: System::Windows::Forms::TextBox^  Stack1;














private: System::Windows::Forms::TextBox^  textBox3;
private: System::Windows::Forms::TextBox^  textBox37;
private: System::Windows::Forms::TextBox^  textBox19;
private: System::Windows::Forms::TextBox^  textBox41;
private: System::Windows::Forms::TextBox^  textBox20;
private: System::Windows::Forms::TextBox^  textBox40;
private: System::Windows::Forms::TextBox^  textBox21;
private: System::Windows::Forms::TextBox^  textBox39;
private: System::Windows::Forms::TextBox^  textBox22;
private: System::Windows::Forms::TextBox^  textBox38;
private: System::Windows::Forms::TextBox^  textBox23;
private: System::Windows::Forms::TextBox^  textBox36;
private: System::Windows::Forms::TextBox^  textBox24;
private: System::Windows::Forms::TextBox^  textBox35;
private: System::Windows::Forms::TextBox^  textBox25;
private: System::Windows::Forms::TextBox^  textBox26;
private: System::Windows::Forms::Label^  baseLabel;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::ComboBox^  base_choice;





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
			this->ParsingResults = (gcnew System::Windows::Forms::RichTextBox());
			this->CodeBrowse = (gcnew System::Windows::Forms::Button());
			this->RegexBrowse = (gcnew System::Windows::Forms::Button());
			this->AssemblySource = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->RegistersGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->Reg3 = (gcnew System::Windows::Forms::TextBox());
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
			this->Reg0 = (gcnew System::Windows::Forms::TextBox());
			this->Reg1 = (gcnew System::Windows::Forms::TextBox());
			this->Reg2 = (gcnew System::Windows::Forms::TextBox());
			this->Reg4 = (gcnew System::Windows::Forms::TextBox());
			this->Reg5 = (gcnew System::Windows::Forms::TextBox());
			this->Reg6 = (gcnew System::Windows::Forms::TextBox());
			this->Reg7 = (gcnew System::Windows::Forms::TextBox());
			this->Reg8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->memGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->stackBox = (gcnew System::Windows::Forms::GroupBox());
			this->Stack0 = (gcnew System::Windows::Forms::TextBox());
			this->Stack3 = (gcnew System::Windows::Forms::TextBox());
			this->Stack2 = (gcnew System::Windows::Forms::TextBox());
			this->Stack1 = (gcnew System::Windows::Forms::TextBox());
			this->baseLabel = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->base_choice = (gcnew System::Windows::Forms::ComboBox());
			this->RegistersGroupBox->SuspendLayout();
			this->memGroupBox->SuspendLayout();
			this->stackBox->SuspendLayout();
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
			this->ParsingLabel->Location = System::Drawing::Point(9, 479);
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
			// ParsingResults
			// 
			this->ParsingResults->Location = System::Drawing::Point(12, 504);
			this->ParsingResults->Name = L"ParsingResults";
			this->ParsingResults->Size = System::Drawing::Size(271, 145);
			this->ParsingResults->TabIndex = 6;
			this->ParsingResults->Text = L"";
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
			// AssemblySource
			// 
			this->AssemblySource->Location = System::Drawing::Point(12, 136);
			this->AssemblySource->Name = L"AssemblySource";
			this->AssemblySource->Size = System::Drawing::Size(271, 323);
			this->AssemblySource->TabIndex = 9;
			this->AssemblySource->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Assembly Source";
			this->label2->Click += gcnew System::EventHandler(this, &Simulator::label2_Click_1);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(101, 94);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Auto-Play";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(15, 94);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(182, 94);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(117, 23);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Advance One Step";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// RegistersGroupBox
			// 
			this->RegistersGroupBox->Controls->Add(this->textBox34);
			this->RegistersGroupBox->Controls->Add(this->textBox33);
			this->RegistersGroupBox->Controls->Add(this->textBox32);
			this->RegistersGroupBox->Controls->Add(this->textBox31);
			this->RegistersGroupBox->Controls->Add(this->textBox30);
			this->RegistersGroupBox->Controls->Add(this->textBox29);
			this->RegistersGroupBox->Controls->Add(this->textBox28);
			this->RegistersGroupBox->Controls->Add(this->textBox27);
			this->RegistersGroupBox->Controls->Add(this->Reg8);
			this->RegistersGroupBox->Controls->Add(this->Reg7);
			this->RegistersGroupBox->Controls->Add(this->Reg6);
			this->RegistersGroupBox->Controls->Add(this->Reg5);
			this->RegistersGroupBox->Controls->Add(this->Reg4);
			this->RegistersGroupBox->Controls->Add(this->Reg2);
			this->RegistersGroupBox->Controls->Add(this->Reg1);
			this->RegistersGroupBox->Controls->Add(this->Reg0);
			this->RegistersGroupBox->Controls->Add(this->textBox18);
			this->RegistersGroupBox->Controls->Add(this->textBox17);
			this->RegistersGroupBox->Controls->Add(this->textBox16);
			this->RegistersGroupBox->Controls->Add(this->textBox15);
			this->RegistersGroupBox->Controls->Add(this->textBox14);
			this->RegistersGroupBox->Controls->Add(this->textBox13);
			this->RegistersGroupBox->Controls->Add(this->textBox12);
			this->RegistersGroupBox->Controls->Add(this->textBox11);
			this->RegistersGroupBox->Controls->Add(this->textBox10);
			this->RegistersGroupBox->Controls->Add(this->textBox9);
			this->RegistersGroupBox->Controls->Add(this->textBox8);
			this->RegistersGroupBox->Controls->Add(this->textBox7);
			this->RegistersGroupBox->Controls->Add(this->textBox6);
			this->RegistersGroupBox->Controls->Add(this->textBox5);
			this->RegistersGroupBox->Controls->Add(this->textBox4);
			this->RegistersGroupBox->Controls->Add(this->Reg3);
			this->RegistersGroupBox->Location = System::Drawing::Point(305, 62);
			this->RegistersGroupBox->Name = L"RegistersGroupBox";
			this->RegistersGroupBox->Size = System::Drawing::Size(162, 668);
			this->RegistersGroupBox->TabIndex = 14;
			this->RegistersGroupBox->TabStop = false;
			this->RegistersGroupBox->Text = L"Registers";
			this->RegistersGroupBox->Enter += gcnew System::EventHandler(this, &Simulator::RegistersGroupBox_Enter);
			// 
			// Reg3
			// 
			this->Reg3->Location = System::Drawing::Point(27, 77);
			this->Reg3->Name = L"Reg3";
			this->Reg3->Size = System::Drawing::Size(109, 20);
			this->Reg3->TabIndex = 16;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(27, 357);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(109, 20);
			this->textBox4->TabIndex = 32;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(27, 377);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(109, 20);
			this->textBox5->TabIndex = 33;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(27, 397);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(109, 20);
			this->textBox6->TabIndex = 34;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(27, 417);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(109, 20);
			this->textBox7->TabIndex = 35;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(27, 437);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(109, 20);
			this->textBox8->TabIndex = 36;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(27, 457);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(109, 20);
			this->textBox9->TabIndex = 37;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(27, 477);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(109, 20);
			this->textBox10->TabIndex = 38;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(27, 497);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(109, 20);
			this->textBox11->TabIndex = 39;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(27, 517);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(109, 20);
			this->textBox12->TabIndex = 40;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(27, 537);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(109, 20);
			this->textBox13->TabIndex = 41;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(27, 557);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(109, 20);
			this->textBox14->TabIndex = 42;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(27, 577);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(109, 20);
			this->textBox15->TabIndex = 43;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(27, 597);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(109, 20);
			this->textBox16->TabIndex = 44;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(27, 617);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(109, 20);
			this->textBox17->TabIndex = 45;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(27, 637);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(109, 20);
			this->textBox18->TabIndex = 46;
			// 
			// Reg0
			// 
			this->Reg0->Location = System::Drawing::Point(27, 17);
			this->Reg0->Name = L"Reg0";
			this->Reg0->Size = System::Drawing::Size(109, 20);
			this->Reg0->TabIndex = 47;
			// 
			// Reg1
			// 
			this->Reg1->Location = System::Drawing::Point(27, 37);
			this->Reg1->Name = L"Reg1";
			this->Reg1->Size = System::Drawing::Size(109, 20);
			this->Reg1->TabIndex = 48;
			// 
			// Reg2
			// 
			this->Reg2->Location = System::Drawing::Point(27, 57);
			this->Reg2->Name = L"Reg2";
			this->Reg2->Size = System::Drawing::Size(109, 20);
			this->Reg2->TabIndex = 49;
			// 
			// Reg4
			// 
			this->Reg4->Location = System::Drawing::Point(27, 97);
			this->Reg4->Name = L"Reg4";
			this->Reg4->Size = System::Drawing::Size(109, 20);
			this->Reg4->TabIndex = 50;
			// 
			// Reg5
			// 
			this->Reg5->Location = System::Drawing::Point(27, 117);
			this->Reg5->Name = L"Reg5";
			this->Reg5->Size = System::Drawing::Size(109, 20);
			this->Reg5->TabIndex = 51;
			// 
			// Reg6
			// 
			this->Reg6->Location = System::Drawing::Point(27, 137);
			this->Reg6->Name = L"Reg6";
			this->Reg6->Size = System::Drawing::Size(109, 20);
			this->Reg6->TabIndex = 52;
			// 
			// Reg7
			// 
			this->Reg7->Location = System::Drawing::Point(27, 157);
			this->Reg7->Name = L"Reg7";
			this->Reg7->Size = System::Drawing::Size(109, 20);
			this->Reg7->TabIndex = 53;
			// 
			// Reg8
			// 
			this->Reg8->Location = System::Drawing::Point(27, 177);
			this->Reg8->Name = L"Reg8";
			this->Reg8->Size = System::Drawing::Size(109, 20);
			this->Reg8->TabIndex = 54;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(27, 197);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(109, 20);
			this->textBox27->TabIndex = 55;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(27, 217);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(109, 20);
			this->textBox28->TabIndex = 56;
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(27, 237);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(109, 20);
			this->textBox29->TabIndex = 57;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(27, 257);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(109, 20);
			this->textBox30->TabIndex = 58;
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(27, 277);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(109, 20);
			this->textBox31->TabIndex = 59;
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(27, 297);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(109, 20);
			this->textBox32->TabIndex = 60;
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(27, 317);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(109, 20);
			this->textBox33->TabIndex = 61;
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(27, 337);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(109, 20);
			this->textBox34->TabIndex = 62;
			// 
			// memGroupBox
			// 
			this->memGroupBox->Controls->Add(this->textBox3);
			this->memGroupBox->Controls->Add(this->textBox37);
			this->memGroupBox->Controls->Add(this->textBox19);
			this->memGroupBox->Controls->Add(this->textBox41);
			this->memGroupBox->Controls->Add(this->textBox20);
			this->memGroupBox->Controls->Add(this->textBox40);
			this->memGroupBox->Controls->Add(this->textBox21);
			this->memGroupBox->Controls->Add(this->textBox39);
			this->memGroupBox->Controls->Add(this->textBox22);
			this->memGroupBox->Controls->Add(this->textBox38);
			this->memGroupBox->Controls->Add(this->textBox23);
			this->memGroupBox->Controls->Add(this->textBox36);
			this->memGroupBox->Controls->Add(this->textBox24);
			this->memGroupBox->Controls->Add(this->textBox35);
			this->memGroupBox->Controls->Add(this->textBox25);
			this->memGroupBox->Controls->Add(this->textBox26);
			this->memGroupBox->Location = System::Drawing::Point(473, 64);
			this->memGroupBox->Name = L"memGroupBox";
			this->memGroupBox->Size = System::Drawing::Size(140, 355);
			this->memGroupBox->TabIndex = 15;
			this->memGroupBox->TabStop = false;
			this->memGroupBox->Text = L"Memory";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(16, 317);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(109, 20);
			this->textBox3->TabIndex = 78;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(16, 297);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(109, 20);
			this->textBox19->TabIndex = 77;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(16, 277);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(109, 20);
			this->textBox20->TabIndex = 76;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(16, 257);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(109, 20);
			this->textBox21->TabIndex = 75;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(16, 237);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(109, 20);
			this->textBox22->TabIndex = 74;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(16, 217);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(109, 20);
			this->textBox23->TabIndex = 73;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(16, 197);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(109, 20);
			this->textBox24->TabIndex = 72;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(16, 177);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(109, 20);
			this->textBox25->TabIndex = 71;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(16, 157);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(109, 20);
			this->textBox26->TabIndex = 70;
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(16, 137);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(109, 20);
			this->textBox35->TabIndex = 69;
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(16, 117);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(109, 20);
			this->textBox36->TabIndex = 68;
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(16, 97);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(109, 20);
			this->textBox37->TabIndex = 67;
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(16, 57);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(109, 20);
			this->textBox38->TabIndex = 66;
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(16, 37);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(109, 20);
			this->textBox39->TabIndex = 65;
			// 
			// textBox40
			// 
			this->textBox40->Enabled = false;
			this->textBox40->Location = System::Drawing::Point(16, 17);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(109, 20);
			this->textBox40->TabIndex = 64;
			// 
			// textBox41
			// 
			this->textBox41->Location = System::Drawing::Point(16, 77);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(109, 20);
			this->textBox41->TabIndex = 63;
			// 
			// stackBox
			// 
			this->stackBox->Controls->Add(this->Stack0);
			this->stackBox->Controls->Add(this->Stack3);
			this->stackBox->Controls->Add(this->Stack2);
			this->stackBox->Controls->Add(this->Stack1);
			this->stackBox->Location = System::Drawing::Point(473, 425);
			this->stackBox->Name = L"stackBox";
			this->stackBox->Size = System::Drawing::Size(140, 114);
			this->stackBox->TabIndex = 79;
			this->stackBox->TabStop = false;
			this->stackBox->Text = L"Call Stack";
			this->stackBox->Enter += gcnew System::EventHandler(this, &Simulator::groupBox1_Enter);
			// 
			// Stack0
			// 
			this->Stack0->Location = System::Drawing::Point(16, 77);
			this->Stack0->Name = L"Stack0";
			this->Stack0->Size = System::Drawing::Size(109, 20);
			this->Stack0->TabIndex = 63;
			// 
			// Stack3
			// 
			this->Stack3->Location = System::Drawing::Point(16, 17);
			this->Stack3->Name = L"Stack3";
			this->Stack3->Size = System::Drawing::Size(109, 20);
			this->Stack3->TabIndex = 64;
			// 
			// Stack2
			// 
			this->Stack2->Location = System::Drawing::Point(16, 37);
			this->Stack2->Name = L"Stack2";
			this->Stack2->Size = System::Drawing::Size(109, 20);
			this->Stack2->TabIndex = 65;
			// 
			// Stack1
			// 
			this->Stack1->Location = System::Drawing::Point(16, 57);
			this->Stack1->Name = L"Stack1";
			this->Stack1->Size = System::Drawing::Size(109, 20);
			this->Stack1->TabIndex = 66;
			// 
			// baseLabel
			// 
			this->baseLabel->AutoSize = true;
			this->baseLabel->Location = System::Drawing::Point(12, 679);
			this->baseLabel->Name = L"baseLabel";
			this->baseLabel->Size = System::Drawing::Size(31, 13);
			this->baseLabel->TabIndex = 80;
			this->baseLabel->Text = L"Base";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(80, 707);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(96, 23);
			this->button4->TabIndex = 81;
			this->button4->Text = L"Change Base";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// base_choice
			// 
			this->base_choice->FormattingEnabled = true;
			this->base_choice->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Decimal", L"Hexadecimal" });
			this->base_choice->Location = System::Drawing::Point(66, 676);
			this->base_choice->Name = L"base_choice";
			this->base_choice->Size = System::Drawing::Size(121, 21);
			this->base_choice->TabIndex = 82;
			// 
			// Simulator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1284, 742);
			this->Controls->Add(this->base_choice);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->baseLabel);
			this->Controls->Add(this->stackBox);
			this->Controls->Add(this->memGroupBox);
			this->Controls->Add(this->RegistersGroupBox);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->AssemblySource);
			this->Controls->Add(this->RegexBrowse);
			this->Controls->Add(this->CodeBrowse);
			this->Controls->Add(this->ParsingResults);
			this->Controls->Add(this->LoadSourceCodeButton);
			this->Controls->Add(this->ParsingLabel);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->CodeFileLabel);
			this->Name = L"Simulator";
			this->Text = L"Simulator";
			this->RegistersGroupBox->ResumeLayout(false);
			this->RegistersGroupBox->PerformLayout();
			this->memGroupBox->ResumeLayout(false);
			this->memGroupBox->PerformLayout();
			this->stackBox->ResumeLayout(false);
			this->stackBox->PerformLayout();
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
private: System::Void label2_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Reg2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label6_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void RegistersGroupBox_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
};
}
