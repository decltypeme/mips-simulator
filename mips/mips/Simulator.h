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
	private: System::Windows::Forms::TextBox^  Reg16;







































	private: System::Windows::Forms::TextBox^  Reg15;

	private: System::Windows::Forms::TextBox^  Reg14;


	private: System::Windows::Forms::TextBox^  Reg13;

	private: System::Windows::Forms::TextBox^  Reg12;

	private: System::Windows::Forms::TextBox^  Reg11;

	private: System::Windows::Forms::TextBox^  Reg10;

	private: System::Windows::Forms::TextBox^  Reg9;

	private: System::Windows::Forms::TextBox^  Reg8;

	private: System::Windows::Forms::TextBox^  Reg7;

	private: System::Windows::Forms::TextBox^  Reg6;

	private: System::Windows::Forms::TextBox^  Reg5;

	private: System::Windows::Forms::TextBox^  Reg4;

	private: System::Windows::Forms::TextBox^  Reg2;

	private: System::Windows::Forms::TextBox^  Reg1;

	private: System::Windows::Forms::TextBox^  Reg0;
private: System::Windows::Forms::TextBox^  Reg31;


private: System::Windows::Forms::TextBox^  Reg30;

private: System::Windows::Forms::TextBox^  Reg29;

private: System::Windows::Forms::TextBox^  Reg28;

private: System::Windows::Forms::TextBox^  Reg27;

private: System::Windows::Forms::TextBox^  Reg26;

private: System::Windows::Forms::TextBox^  Reg25;

private: System::Windows::Forms::TextBox^  Reg24;

private: System::Windows::Forms::TextBox^  Reg23;

private: System::Windows::Forms::TextBox^  Reg22;

private: System::Windows::Forms::TextBox^  Reg21;

private: System::Windows::Forms::TextBox^  Reg20;


private: System::Windows::Forms::TextBox^  Reg19;

private: System::Windows::Forms::TextBox^  Reg18;

private: System::Windows::Forms::TextBox^  Reg17;

private: System::Windows::Forms::TextBox^  Reg3;
private: System::Windows::Forms::GroupBox^  memGroupBox;
private: System::Windows::Forms::GroupBox^  stackBox;
private: System::Windows::Forms::TextBox^  Stack0;
private: System::Windows::Forms::TextBox^  Stack3;






private: System::Windows::Forms::TextBox^  Stack2;

private: System::Windows::Forms::TextBox^  Stack1;
private: System::Windows::Forms::TextBox^  Mem15;















private: System::Windows::Forms::TextBox^  Mem4;
private: System::Windows::Forms::TextBox^  Mem14;


private: System::Windows::Forms::TextBox^  Mem3;
private: System::Windows::Forms::TextBox^  Mem13;


private: System::Windows::Forms::TextBox^  Mem0;
private: System::Windows::Forms::TextBox^  Mem12;


private: System::Windows::Forms::TextBox^  Mem1;
private: System::Windows::Forms::TextBox^  Mem11;


private: System::Windows::Forms::TextBox^  Mem2;
private: System::Windows::Forms::TextBox^  Mem10;


private: System::Windows::Forms::TextBox^  Mem5;
private: System::Windows::Forms::TextBox^  Mem9;


private: System::Windows::Forms::TextBox^  Mem6;
private: System::Windows::Forms::TextBox^  Mem8;


private: System::Windows::Forms::TextBox^  Mem7;

private: System::Windows::Forms::Label^  baseLabel;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::ComboBox^  base_choice;
private: System::Windows::Forms::GroupBox^  pcGroupBox;
private: System::Windows::Forms::TextBox^  PC;
private: System::Windows::Forms::GroupBox^  pipelineGroup;
private: System::Windows::Forms::TextBox^  p11Inst;
private: System::Windows::Forms::TextBox^  p12Inst;


private: System::Windows::Forms::TextBox^  p6Inst;
private: System::Windows::Forms::TextBox^  p8Inst;
private: System::Windows::Forms::TextBox^  p9Inst;
private: System::Windows::Forms::TextBox^  p10Inst;




private: System::Windows::Forms::TextBox^  p7Inst;

private: System::Windows::Forms::TextBox^  p4Inst;
private: System::Windows::Forms::TextBox^  p5Inst;


private: System::Windows::Forms::TextBox^  p2Inst;
private: System::Windows::Forms::TextBox^  p3Inst;

private: System::Windows::Forms::TextBox^  p1Inst;







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
			this->Reg16 = (gcnew System::Windows::Forms::TextBox());
			this->Reg15 = (gcnew System::Windows::Forms::TextBox());
			this->Reg14 = (gcnew System::Windows::Forms::TextBox());
			this->Reg13 = (gcnew System::Windows::Forms::TextBox());
			this->Reg12 = (gcnew System::Windows::Forms::TextBox());
			this->Reg11 = (gcnew System::Windows::Forms::TextBox());
			this->Reg10 = (gcnew System::Windows::Forms::TextBox());
			this->Reg9 = (gcnew System::Windows::Forms::TextBox());
			this->Reg8 = (gcnew System::Windows::Forms::TextBox());
			this->Reg7 = (gcnew System::Windows::Forms::TextBox());
			this->Reg6 = (gcnew System::Windows::Forms::TextBox());
			this->Reg5 = (gcnew System::Windows::Forms::TextBox());
			this->Reg4 = (gcnew System::Windows::Forms::TextBox());
			this->Reg2 = (gcnew System::Windows::Forms::TextBox());
			this->Reg1 = (gcnew System::Windows::Forms::TextBox());
			this->Reg0 = (gcnew System::Windows::Forms::TextBox());
			this->Reg31 = (gcnew System::Windows::Forms::TextBox());
			this->Reg30 = (gcnew System::Windows::Forms::TextBox());
			this->Reg29 = (gcnew System::Windows::Forms::TextBox());
			this->Reg28 = (gcnew System::Windows::Forms::TextBox());
			this->Reg27 = (gcnew System::Windows::Forms::TextBox());
			this->Reg26 = (gcnew System::Windows::Forms::TextBox());
			this->Reg25 = (gcnew System::Windows::Forms::TextBox());
			this->Reg24 = (gcnew System::Windows::Forms::TextBox());
			this->Reg23 = (gcnew System::Windows::Forms::TextBox());
			this->Reg22 = (gcnew System::Windows::Forms::TextBox());
			this->Reg21 = (gcnew System::Windows::Forms::TextBox());
			this->Reg20 = (gcnew System::Windows::Forms::TextBox());
			this->Reg19 = (gcnew System::Windows::Forms::TextBox());
			this->Reg18 = (gcnew System::Windows::Forms::TextBox());
			this->Reg17 = (gcnew System::Windows::Forms::TextBox());
			this->Reg3 = (gcnew System::Windows::Forms::TextBox());
			this->memGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->Mem15 = (gcnew System::Windows::Forms::TextBox());
			this->Mem4 = (gcnew System::Windows::Forms::TextBox());
			this->Mem14 = (gcnew System::Windows::Forms::TextBox());
			this->Mem3 = (gcnew System::Windows::Forms::TextBox());
			this->Mem13 = (gcnew System::Windows::Forms::TextBox());
			this->Mem0 = (gcnew System::Windows::Forms::TextBox());
			this->Mem12 = (gcnew System::Windows::Forms::TextBox());
			this->Mem1 = (gcnew System::Windows::Forms::TextBox());
			this->Mem11 = (gcnew System::Windows::Forms::TextBox());
			this->Mem2 = (gcnew System::Windows::Forms::TextBox());
			this->Mem10 = (gcnew System::Windows::Forms::TextBox());
			this->Mem5 = (gcnew System::Windows::Forms::TextBox());
			this->Mem9 = (gcnew System::Windows::Forms::TextBox());
			this->Mem6 = (gcnew System::Windows::Forms::TextBox());
			this->Mem8 = (gcnew System::Windows::Forms::TextBox());
			this->Mem7 = (gcnew System::Windows::Forms::TextBox());
			this->stackBox = (gcnew System::Windows::Forms::GroupBox());
			this->Stack0 = (gcnew System::Windows::Forms::TextBox());
			this->Stack3 = (gcnew System::Windows::Forms::TextBox());
			this->Stack2 = (gcnew System::Windows::Forms::TextBox());
			this->Stack1 = (gcnew System::Windows::Forms::TextBox());
			this->baseLabel = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->base_choice = (gcnew System::Windows::Forms::ComboBox());
			this->pcGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->PC = (gcnew System::Windows::Forms::TextBox());
			this->pipelineGroup = (gcnew System::Windows::Forms::GroupBox());
			this->p7Inst = (gcnew System::Windows::Forms::TextBox());
			this->p4Inst = (gcnew System::Windows::Forms::TextBox());
			this->p5Inst = (gcnew System::Windows::Forms::TextBox());
			this->p2Inst = (gcnew System::Windows::Forms::TextBox());
			this->p3Inst = (gcnew System::Windows::Forms::TextBox());
			this->p1Inst = (gcnew System::Windows::Forms::TextBox());
			this->p10Inst = (gcnew System::Windows::Forms::TextBox());
			this->p9Inst = (gcnew System::Windows::Forms::TextBox());
			this->p8Inst = (gcnew System::Windows::Forms::TextBox());
			this->p6Inst = (gcnew System::Windows::Forms::TextBox());
			this->p12Inst = (gcnew System::Windows::Forms::TextBox());
			this->p11Inst = (gcnew System::Windows::Forms::TextBox());
			this->RegistersGroupBox->SuspendLayout();
			this->memGroupBox->SuspendLayout();
			this->stackBox->SuspendLayout();
			this->pcGroupBox->SuspendLayout();
			this->pipelineGroup->SuspendLayout();
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
			this->ParsingResults->Enabled = false;
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
			this->AssemblySource->Enabled = false;
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
			this->RegistersGroupBox->Controls->Add(this->Reg16);
			this->RegistersGroupBox->Controls->Add(this->Reg15);
			this->RegistersGroupBox->Controls->Add(this->Reg14);
			this->RegistersGroupBox->Controls->Add(this->Reg13);
			this->RegistersGroupBox->Controls->Add(this->Reg12);
			this->RegistersGroupBox->Controls->Add(this->Reg11);
			this->RegistersGroupBox->Controls->Add(this->Reg10);
			this->RegistersGroupBox->Controls->Add(this->Reg9);
			this->RegistersGroupBox->Controls->Add(this->Reg8);
			this->RegistersGroupBox->Controls->Add(this->Reg7);
			this->RegistersGroupBox->Controls->Add(this->Reg6);
			this->RegistersGroupBox->Controls->Add(this->Reg5);
			this->RegistersGroupBox->Controls->Add(this->Reg4);
			this->RegistersGroupBox->Controls->Add(this->Reg2);
			this->RegistersGroupBox->Controls->Add(this->Reg1);
			this->RegistersGroupBox->Controls->Add(this->Reg0);
			this->RegistersGroupBox->Controls->Add(this->Reg31);
			this->RegistersGroupBox->Controls->Add(this->Reg30);
			this->RegistersGroupBox->Controls->Add(this->Reg29);
			this->RegistersGroupBox->Controls->Add(this->Reg28);
			this->RegistersGroupBox->Controls->Add(this->Reg27);
			this->RegistersGroupBox->Controls->Add(this->Reg26);
			this->RegistersGroupBox->Controls->Add(this->Reg25);
			this->RegistersGroupBox->Controls->Add(this->Reg24);
			this->RegistersGroupBox->Controls->Add(this->Reg23);
			this->RegistersGroupBox->Controls->Add(this->Reg22);
			this->RegistersGroupBox->Controls->Add(this->Reg21);
			this->RegistersGroupBox->Controls->Add(this->Reg20);
			this->RegistersGroupBox->Controls->Add(this->Reg19);
			this->RegistersGroupBox->Controls->Add(this->Reg18);
			this->RegistersGroupBox->Controls->Add(this->Reg17);
			this->RegistersGroupBox->Controls->Add(this->Reg3);
			this->RegistersGroupBox->Location = System::Drawing::Point(305, 62);
			this->RegistersGroupBox->Name = L"RegistersGroupBox";
			this->RegistersGroupBox->Size = System::Drawing::Size(162, 668);
			this->RegistersGroupBox->TabIndex = 14;
			this->RegistersGroupBox->TabStop = false;
			this->RegistersGroupBox->Text = L"Registers";
			this->RegistersGroupBox->Enter += gcnew System::EventHandler(this, &Simulator::RegistersGroupBox_Enter);
			// 
			// Reg16
			// 
			this->Reg16->Enabled = false;
			this->Reg16->Location = System::Drawing::Point(27, 337);
			this->Reg16->Name = L"Reg16";
			this->Reg16->Size = System::Drawing::Size(109, 20);
			this->Reg16->TabIndex = 62;
			// 
			// Reg15
			// 
			this->Reg15->Enabled = false;
			this->Reg15->Location = System::Drawing::Point(27, 317);
			this->Reg15->Name = L"Reg15";
			this->Reg15->Size = System::Drawing::Size(109, 20);
			this->Reg15->TabIndex = 61;
			// 
			// Reg14
			// 
			this->Reg14->Enabled = false;
			this->Reg14->Location = System::Drawing::Point(27, 297);
			this->Reg14->Name = L"Reg14";
			this->Reg14->Size = System::Drawing::Size(109, 20);
			this->Reg14->TabIndex = 60;
			// 
			// Reg13
			// 
			this->Reg13->Enabled = false;
			this->Reg13->Location = System::Drawing::Point(27, 277);
			this->Reg13->Name = L"Reg13";
			this->Reg13->Size = System::Drawing::Size(109, 20);
			this->Reg13->TabIndex = 59;
			// 
			// Reg12
			// 
			this->Reg12->Enabled = false;
			this->Reg12->Location = System::Drawing::Point(27, 257);
			this->Reg12->Name = L"Reg12";
			this->Reg12->Size = System::Drawing::Size(109, 20);
			this->Reg12->TabIndex = 58;
			// 
			// Reg11
			// 
			this->Reg11->Enabled = false;
			this->Reg11->Location = System::Drawing::Point(27, 237);
			this->Reg11->Name = L"Reg11";
			this->Reg11->Size = System::Drawing::Size(109, 20);
			this->Reg11->TabIndex = 57;
			// 
			// Reg10
			// 
			this->Reg10->Enabled = false;
			this->Reg10->Location = System::Drawing::Point(27, 217);
			this->Reg10->Name = L"Reg10";
			this->Reg10->Size = System::Drawing::Size(109, 20);
			this->Reg10->TabIndex = 56;
			// 
			// Reg9
			// 
			this->Reg9->Enabled = false;
			this->Reg9->Location = System::Drawing::Point(27, 197);
			this->Reg9->Name = L"Reg9";
			this->Reg9->Size = System::Drawing::Size(109, 20);
			this->Reg9->TabIndex = 55;
			// 
			// Reg8
			// 
			this->Reg8->Enabled = false;
			this->Reg8->Location = System::Drawing::Point(27, 177);
			this->Reg8->Name = L"Reg8";
			this->Reg8->Size = System::Drawing::Size(109, 20);
			this->Reg8->TabIndex = 54;
			// 
			// Reg7
			// 
			this->Reg7->Enabled = false;
			this->Reg7->Location = System::Drawing::Point(27, 157);
			this->Reg7->Name = L"Reg7";
			this->Reg7->Size = System::Drawing::Size(109, 20);
			this->Reg7->TabIndex = 53;
			// 
			// Reg6
			// 
			this->Reg6->Enabled = false;
			this->Reg6->Location = System::Drawing::Point(27, 137);
			this->Reg6->Name = L"Reg6";
			this->Reg6->Size = System::Drawing::Size(109, 20);
			this->Reg6->TabIndex = 52;
			// 
			// Reg5
			// 
			this->Reg5->Enabled = false;
			this->Reg5->Location = System::Drawing::Point(27, 117);
			this->Reg5->Name = L"Reg5";
			this->Reg5->Size = System::Drawing::Size(109, 20);
			this->Reg5->TabIndex = 51;
			// 
			// Reg4
			// 
			this->Reg4->Enabled = false;
			this->Reg4->Location = System::Drawing::Point(27, 97);
			this->Reg4->Name = L"Reg4";
			this->Reg4->Size = System::Drawing::Size(109, 20);
			this->Reg4->TabIndex = 50;
			// 
			// Reg2
			// 
			this->Reg2->Enabled = false;
			this->Reg2->Location = System::Drawing::Point(27, 57);
			this->Reg2->Name = L"Reg2";
			this->Reg2->Size = System::Drawing::Size(109, 20);
			this->Reg2->TabIndex = 49;
			// 
			// Reg1
			// 
			this->Reg1->Enabled = false;
			this->Reg1->Location = System::Drawing::Point(27, 37);
			this->Reg1->Name = L"Reg1";
			this->Reg1->Size = System::Drawing::Size(109, 20);
			this->Reg1->TabIndex = 48;
			// 
			// Reg0
			// 
			this->Reg0->Enabled = false;
			this->Reg0->Location = System::Drawing::Point(27, 17);
			this->Reg0->Name = L"Reg0";
			this->Reg0->Size = System::Drawing::Size(109, 20);
			this->Reg0->TabIndex = 47;
			// 
			// Reg31
			// 
			this->Reg31->Enabled = false;
			this->Reg31->Location = System::Drawing::Point(27, 637);
			this->Reg31->Name = L"Reg31";
			this->Reg31->Size = System::Drawing::Size(109, 20);
			this->Reg31->TabIndex = 46;
			// 
			// Reg30
			// 
			this->Reg30->Enabled = false;
			this->Reg30->Location = System::Drawing::Point(27, 617);
			this->Reg30->Name = L"Reg30";
			this->Reg30->Size = System::Drawing::Size(109, 20);
			this->Reg30->TabIndex = 45;
			// 
			// Reg29
			// 
			this->Reg29->Enabled = false;
			this->Reg29->Location = System::Drawing::Point(27, 597);
			this->Reg29->Name = L"Reg29";
			this->Reg29->Size = System::Drawing::Size(109, 20);
			this->Reg29->TabIndex = 44;
			// 
			// Reg28
			// 
			this->Reg28->Enabled = false;
			this->Reg28->Location = System::Drawing::Point(27, 577);
			this->Reg28->Name = L"Reg28";
			this->Reg28->Size = System::Drawing::Size(109, 20);
			this->Reg28->TabIndex = 43;
			// 
			// Reg27
			// 
			this->Reg27->Enabled = false;
			this->Reg27->Location = System::Drawing::Point(27, 557);
			this->Reg27->Name = L"Reg27";
			this->Reg27->Size = System::Drawing::Size(109, 20);
			this->Reg27->TabIndex = 42;
			// 
			// Reg26
			// 
			this->Reg26->Enabled = false;
			this->Reg26->Location = System::Drawing::Point(27, 537);
			this->Reg26->Name = L"Reg26";
			this->Reg26->Size = System::Drawing::Size(109, 20);
			this->Reg26->TabIndex = 41;
			// 
			// Reg25
			// 
			this->Reg25->Enabled = false;
			this->Reg25->Location = System::Drawing::Point(27, 517);
			this->Reg25->Name = L"Reg25";
			this->Reg25->Size = System::Drawing::Size(109, 20);
			this->Reg25->TabIndex = 40;
			// 
			// Reg24
			// 
			this->Reg24->Enabled = false;
			this->Reg24->Location = System::Drawing::Point(27, 497);
			this->Reg24->Name = L"Reg24";
			this->Reg24->Size = System::Drawing::Size(109, 20);
			this->Reg24->TabIndex = 39;
			// 
			// Reg23
			// 
			this->Reg23->Enabled = false;
			this->Reg23->Location = System::Drawing::Point(27, 477);
			this->Reg23->Name = L"Reg23";
			this->Reg23->Size = System::Drawing::Size(109, 20);
			this->Reg23->TabIndex = 38;
			// 
			// Reg22
			// 
			this->Reg22->Enabled = false;
			this->Reg22->Location = System::Drawing::Point(27, 457);
			this->Reg22->Name = L"Reg22";
			this->Reg22->Size = System::Drawing::Size(109, 20);
			this->Reg22->TabIndex = 37;
			// 
			// Reg21
			// 
			this->Reg21->Enabled = false;
			this->Reg21->Location = System::Drawing::Point(27, 437);
			this->Reg21->Name = L"Reg21";
			this->Reg21->Size = System::Drawing::Size(109, 20);
			this->Reg21->TabIndex = 36;
			// 
			// Reg20
			// 
			this->Reg20->Enabled = false;
			this->Reg20->Location = System::Drawing::Point(27, 417);
			this->Reg20->Name = L"Reg20";
			this->Reg20->Size = System::Drawing::Size(109, 20);
			this->Reg20->TabIndex = 35;
			// 
			// Reg19
			// 
			this->Reg19->Enabled = false;
			this->Reg19->Location = System::Drawing::Point(27, 397);
			this->Reg19->Name = L"Reg19";
			this->Reg19->Size = System::Drawing::Size(109, 20);
			this->Reg19->TabIndex = 34;
			this->Reg19->TextChanged += gcnew System::EventHandler(this, &Simulator::Reg19_TextChanged);
			// 
			// Reg18
			// 
			this->Reg18->Enabled = false;
			this->Reg18->Location = System::Drawing::Point(27, 377);
			this->Reg18->Name = L"Reg18";
			this->Reg18->Size = System::Drawing::Size(109, 20);
			this->Reg18->TabIndex = 33;
			// 
			// Reg17
			// 
			this->Reg17->Enabled = false;
			this->Reg17->Location = System::Drawing::Point(27, 357);
			this->Reg17->Name = L"Reg17";
			this->Reg17->Size = System::Drawing::Size(109, 20);
			this->Reg17->TabIndex = 32;
			// 
			// Reg3
			// 
			this->Reg3->Enabled = false;
			this->Reg3->Location = System::Drawing::Point(27, 77);
			this->Reg3->Name = L"Reg3";
			this->Reg3->Size = System::Drawing::Size(109, 20);
			this->Reg3->TabIndex = 16;
			// 
			// memGroupBox
			// 
			this->memGroupBox->Controls->Add(this->Mem15);
			this->memGroupBox->Controls->Add(this->Mem4);
			this->memGroupBox->Controls->Add(this->Mem14);
			this->memGroupBox->Controls->Add(this->Mem3);
			this->memGroupBox->Controls->Add(this->Mem13);
			this->memGroupBox->Controls->Add(this->Mem0);
			this->memGroupBox->Controls->Add(this->Mem12);
			this->memGroupBox->Controls->Add(this->Mem1);
			this->memGroupBox->Controls->Add(this->Mem11);
			this->memGroupBox->Controls->Add(this->Mem2);
			this->memGroupBox->Controls->Add(this->Mem10);
			this->memGroupBox->Controls->Add(this->Mem5);
			this->memGroupBox->Controls->Add(this->Mem9);
			this->memGroupBox->Controls->Add(this->Mem6);
			this->memGroupBox->Controls->Add(this->Mem8);
			this->memGroupBox->Controls->Add(this->Mem7);
			this->memGroupBox->Location = System::Drawing::Point(473, 64);
			this->memGroupBox->Name = L"memGroupBox";
			this->memGroupBox->Size = System::Drawing::Size(140, 355);
			this->memGroupBox->TabIndex = 15;
			this->memGroupBox->TabStop = false;
			this->memGroupBox->Text = L"Memory";
			// 
			// Mem15
			// 
			this->Mem15->Enabled = false;
			this->Mem15->Location = System::Drawing::Point(16, 317);
			this->Mem15->Name = L"Mem15";
			this->Mem15->Size = System::Drawing::Size(109, 20);
			this->Mem15->TabIndex = 78;
			// 
			// Mem4
			// 
			this->Mem4->Enabled = false;
			this->Mem4->Location = System::Drawing::Point(16, 97);
			this->Mem4->Name = L"Mem4";
			this->Mem4->Size = System::Drawing::Size(109, 20);
			this->Mem4->TabIndex = 67;
			// 
			// Mem14
			// 
			this->Mem14->Enabled = false;
			this->Mem14->Location = System::Drawing::Point(16, 297);
			this->Mem14->Name = L"Mem14";
			this->Mem14->Size = System::Drawing::Size(109, 20);
			this->Mem14->TabIndex = 77;
			// 
			// Mem3
			// 
			this->Mem3->Enabled = false;
			this->Mem3->Location = System::Drawing::Point(16, 77);
			this->Mem3->Name = L"Mem3";
			this->Mem3->Size = System::Drawing::Size(109, 20);
			this->Mem3->TabIndex = 63;
			// 
			// Mem13
			// 
			this->Mem13->Enabled = false;
			this->Mem13->Location = System::Drawing::Point(16, 277);
			this->Mem13->Name = L"Mem13";
			this->Mem13->Size = System::Drawing::Size(109, 20);
			this->Mem13->TabIndex = 76;
			// 
			// Mem0
			// 
			this->Mem0->Enabled = false;
			this->Mem0->Location = System::Drawing::Point(16, 17);
			this->Mem0->Name = L"Mem0";
			this->Mem0->Size = System::Drawing::Size(109, 20);
			this->Mem0->TabIndex = 64;
			// 
			// Mem12
			// 
			this->Mem12->Enabled = false;
			this->Mem12->Location = System::Drawing::Point(16, 257);
			this->Mem12->Name = L"Mem12";
			this->Mem12->Size = System::Drawing::Size(109, 20);
			this->Mem12->TabIndex = 75;
			// 
			// Mem1
			// 
			this->Mem1->Enabled = false;
			this->Mem1->Location = System::Drawing::Point(16, 37);
			this->Mem1->Name = L"Mem1";
			this->Mem1->Size = System::Drawing::Size(109, 20);
			this->Mem1->TabIndex = 65;
			// 
			// Mem11
			// 
			this->Mem11->Enabled = false;
			this->Mem11->Location = System::Drawing::Point(16, 237);
			this->Mem11->Name = L"Mem11";
			this->Mem11->Size = System::Drawing::Size(109, 20);
			this->Mem11->TabIndex = 74;
			// 
			// Mem2
			// 
			this->Mem2->Enabled = false;
			this->Mem2->Location = System::Drawing::Point(16, 57);
			this->Mem2->Name = L"Mem2";
			this->Mem2->Size = System::Drawing::Size(109, 20);
			this->Mem2->TabIndex = 66;
			// 
			// Mem10
			// 
			this->Mem10->Enabled = false;
			this->Mem10->Location = System::Drawing::Point(16, 217);
			this->Mem10->Name = L"Mem10";
			this->Mem10->Size = System::Drawing::Size(109, 20);
			this->Mem10->TabIndex = 73;
			// 
			// Mem5
			// 
			this->Mem5->Enabled = false;
			this->Mem5->Location = System::Drawing::Point(16, 117);
			this->Mem5->Name = L"Mem5";
			this->Mem5->Size = System::Drawing::Size(109, 20);
			this->Mem5->TabIndex = 68;
			// 
			// Mem9
			// 
			this->Mem9->Enabled = false;
			this->Mem9->Location = System::Drawing::Point(16, 197);
			this->Mem9->Name = L"Mem9";
			this->Mem9->Size = System::Drawing::Size(109, 20);
			this->Mem9->TabIndex = 72;
			// 
			// Mem6
			// 
			this->Mem6->Enabled = false;
			this->Mem6->Location = System::Drawing::Point(16, 137);
			this->Mem6->Name = L"Mem6";
			this->Mem6->Size = System::Drawing::Size(109, 20);
			this->Mem6->TabIndex = 69;
			// 
			// Mem8
			// 
			this->Mem8->Enabled = false;
			this->Mem8->Location = System::Drawing::Point(16, 177);
			this->Mem8->Name = L"Mem8";
			this->Mem8->Size = System::Drawing::Size(109, 20);
			this->Mem8->TabIndex = 71;
			// 
			// Mem7
			// 
			this->Mem7->Enabled = false;
			this->Mem7->Location = System::Drawing::Point(16, 157);
			this->Mem7->Name = L"Mem7";
			this->Mem7->Size = System::Drawing::Size(109, 20);
			this->Mem7->TabIndex = 70;
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
			this->Stack0->Enabled = false;
			this->Stack0->Location = System::Drawing::Point(16, 77);
			this->Stack0->Name = L"Stack0";
			this->Stack0->Size = System::Drawing::Size(109, 20);
			this->Stack0->TabIndex = 63;
			// 
			// Stack3
			// 
			this->Stack3->Enabled = false;
			this->Stack3->Location = System::Drawing::Point(16, 17);
			this->Stack3->Name = L"Stack3";
			this->Stack3->Size = System::Drawing::Size(109, 20);
			this->Stack3->TabIndex = 64;
			// 
			// Stack2
			// 
			this->Stack2->Enabled = false;
			this->Stack2->Location = System::Drawing::Point(16, 37);
			this->Stack2->Name = L"Stack2";
			this->Stack2->Size = System::Drawing::Size(109, 20);
			this->Stack2->TabIndex = 65;
			// 
			// Stack1
			// 
			this->Stack1->Enabled = false;
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
			// pcGroupBox
			// 
			this->pcGroupBox->Controls->Add(this->PC);
			this->pcGroupBox->Location = System::Drawing::Point(473, 559);
			this->pcGroupBox->Name = L"pcGroupBox";
			this->pcGroupBox->Size = System::Drawing::Size(140, 60);
			this->pcGroupBox->TabIndex = 80;
			this->pcGroupBox->TabStop = false;
			this->pcGroupBox->Text = L"PC";
			// 
			// PC
			// 
			this->PC->Enabled = false;
			this->PC->Location = System::Drawing::Point(16, 17);
			this->PC->Name = L"PC";
			this->PC->Size = System::Drawing::Size(109, 20);
			this->PC->TabIndex = 64;
			// 
			// pipelineGroup
			// 
			this->pipelineGroup->Controls->Add(this->p11Inst);
			this->pipelineGroup->Controls->Add(this->p12Inst);
			this->pipelineGroup->Controls->Add(this->p6Inst);
			this->pipelineGroup->Controls->Add(this->p8Inst);
			this->pipelineGroup->Controls->Add(this->p9Inst);
			this->pipelineGroup->Controls->Add(this->p10Inst);
			this->pipelineGroup->Controls->Add(this->p7Inst);
			this->pipelineGroup->Controls->Add(this->p4Inst);
			this->pipelineGroup->Controls->Add(this->p5Inst);
			this->pipelineGroup->Controls->Add(this->p2Inst);
			this->pipelineGroup->Controls->Add(this->p3Inst);
			this->pipelineGroup->Controls->Add(this->p1Inst);
			this->pipelineGroup->Location = System::Drawing::Point(634, 64);
			this->pipelineGroup->Name = L"pipelineGroup";
			this->pipelineGroup->Size = System::Drawing::Size(610, 555);
			this->pipelineGroup->TabIndex = 90;
			this->pipelineGroup->TabStop = false;
			this->pipelineGroup->Text = L"Pipeline";
			// 
			// p7Inst
			// 
			this->p7Inst->Location = System::Drawing::Point(6, 301);
			this->p7Inst->Name = L"p7Inst";
			this->p7Inst->Size = System::Drawing::Size(100, 20);
			this->p7Inst->TabIndex = 95;
			// 
			// p4Inst
			// 
			this->p4Inst->Location = System::Drawing::Point(6, 175);
			this->p4Inst->Name = L"p4Inst";
			this->p4Inst->Size = System::Drawing::Size(100, 20);
			this->p4Inst->TabIndex = 94;
			// 
			// p5Inst
			// 
			this->p5Inst->Location = System::Drawing::Point(6, 217);
			this->p5Inst->Name = L"p5Inst";
			this->p5Inst->Size = System::Drawing::Size(100, 20);
			this->p5Inst->TabIndex = 93;
			// 
			// p2Inst
			// 
			this->p2Inst->Location = System::Drawing::Point(6, 91);
			this->p2Inst->Name = L"p2Inst";
			this->p2Inst->Size = System::Drawing::Size(100, 20);
			this->p2Inst->TabIndex = 92;
			// 
			// p3Inst
			// 
			this->p3Inst->Location = System::Drawing::Point(6, 133);
			this->p3Inst->Name = L"p3Inst";
			this->p3Inst->Size = System::Drawing::Size(100, 20);
			this->p3Inst->TabIndex = 91;
			// 
			// p1Inst
			// 
			this->p1Inst->Location = System::Drawing::Point(6, 49);
			this->p1Inst->Name = L"p1Inst";
			this->p1Inst->Size = System::Drawing::Size(100, 20);
			this->p1Inst->TabIndex = 90;
			// 
			// p10Inst
			// 
			this->p10Inst->Location = System::Drawing::Point(6, 427);
			this->p10Inst->Name = L"p10Inst";
			this->p10Inst->Size = System::Drawing::Size(100, 20);
			this->p10Inst->TabIndex = 96;
			// 
			// p9Inst
			// 
			this->p9Inst->Location = System::Drawing::Point(6, 385);
			this->p9Inst->Name = L"p9Inst";
			this->p9Inst->Size = System::Drawing::Size(100, 20);
			this->p9Inst->TabIndex = 97;
			// 
			// p8Inst
			// 
			this->p8Inst->Location = System::Drawing::Point(6, 343);
			this->p8Inst->Name = L"p8Inst";
			this->p8Inst->Size = System::Drawing::Size(100, 20);
			this->p8Inst->TabIndex = 98;
			// 
			// p6Inst
			// 
			this->p6Inst->Location = System::Drawing::Point(6, 259);
			this->p6Inst->Name = L"p6Inst";
			this->p6Inst->Size = System::Drawing::Size(100, 20);
			this->p6Inst->TabIndex = 99;
			// 
			// p12Inst
			// 
			this->p12Inst->Location = System::Drawing::Point(6, 511);
			this->p12Inst->Name = L"p12Inst";
			this->p12Inst->Size = System::Drawing::Size(100, 20);
			this->p12Inst->TabIndex = 100;
			// 
			// p11Inst
			// 
			this->p11Inst->Location = System::Drawing::Point(6, 469);
			this->p11Inst->Name = L"p11Inst";
			this->p11Inst->Size = System::Drawing::Size(100, 20);
			this->p11Inst->TabIndex = 101;
			// 
			// Simulator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1284, 742);
			this->Controls->Add(this->pipelineGroup);
			this->Controls->Add(this->pcGroupBox);
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
			this->pcGroupBox->ResumeLayout(false);
			this->pcGroupBox->PerformLayout();
			this->pipelineGroup->ResumeLayout(false);
			this->pipelineGroup->PerformLayout();
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
private: System::Void Reg19_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
