#pragma once
#include <array>
#include "Parser.h"
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <string>

using namespace std;


namespace mips {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for Simulator
	/// </summary>
	public ref class Simulator : public System::Windows::Forms::Form
	{
	public:
		Simulator(void)
		{
			InitializeComponent();
			this->base_choice->SelectedIndex = 0;
			time = 1;
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
	private: System::Windows::Forms::TextBox^  sourceTextBox;
	private: System::Windows::Forms::TextBox^  isaTextBox;
			 int time;

	private: System::Windows::Forms::Label^  ParsingLabel;
	private: System::Windows::Forms::Button^  LoadSourceCodeButton;
	public: System::Windows::Forms::RichTextBox^  ParsingResults;

	private: System::Windows::Forms::Button^  CodeBrowse;
	private: System::Windows::Forms::Button^  RegexBrowse;
	private: System::Windows::Forms::RichTextBox^  AssemblySource;

	private: System::Windows::Forms::Label^  label2;

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
	private: System::Windows::Forms::TextBox^  PC_Show;

	private: System::Windows::Forms::GroupBox^  pipelineGroup;
private: System::Windows::Forms::TextBox^ Inst2p1;

private: System::Windows::Forms::TextBox^ Inst3p1;

private: System::Windows::Forms::TextBox^ Inst1p1;

	private: System::Windows::Forms::OpenFileDialog^  sourceFile;
	private: System::Windows::Forms::OpenFileDialog^  isaFile;
private: System::Windows::Forms::TextBox^ Inst0p1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::TextBox^ InstFp10;
private: System::Windows::Forms::TextBox^ Inst0p10;
private: System::Windows::Forms::TextBox^ Inst2p10;
private: System::Windows::Forms::TextBox^ Inst3p10;
private: System::Windows::Forms::TextBox^ Inst1p10;

private: System::Windows::Forms::TextBox^ InstFp9;
private: System::Windows::Forms::TextBox^ Inst0p9;
private: System::Windows::Forms::TextBox^ Inst2p9;
private: System::Windows::Forms::TextBox^ Inst3p9;






private: System::Windows::Forms::TextBox^ Inst1p9;

private: System::Windows::Forms::TextBox^ InstFp8;
private: System::Windows::Forms::TextBox^ Inst0p8;
private: System::Windows::Forms::TextBox^ Inst2p8;
private: System::Windows::Forms::TextBox^ Inst3p8;




private: System::Windows::Forms::TextBox^ Inst1p8;

private: System::Windows::Forms::TextBox^ InstFp7;
private: System::Windows::Forms::TextBox^ Inst0p7;
private: System::Windows::Forms::TextBox^ Inst2p7;
private: System::Windows::Forms::TextBox^ Inst3p7;




private: System::Windows::Forms::TextBox^ Inst1p7;

private: System::Windows::Forms::TextBox^ InstFp6;
private: System::Windows::Forms::TextBox^ Inst0p6;
private: System::Windows::Forms::TextBox^ Inst2p6;
private: System::Windows::Forms::TextBox^ Inst3p6;




private: System::Windows::Forms::TextBox^ Inst1p6;

private: System::Windows::Forms::TextBox^ InstFp5;
private: System::Windows::Forms::TextBox^ Inst0p5;
private: System::Windows::Forms::TextBox^ Inst2p5;
private: System::Windows::Forms::TextBox^ Inst3p5;




private: System::Windows::Forms::TextBox^ Inst1p5;

private: System::Windows::Forms::TextBox^ InstFp4;
private: System::Windows::Forms::TextBox^ Inst0p4;
private: System::Windows::Forms::TextBox^ Inst2p4;
private: System::Windows::Forms::TextBox^ Inst3p4;




private: System::Windows::Forms::TextBox^ Inst1p4;

private: System::Windows::Forms::TextBox^ InstFp3;

private: System::Windows::Forms::TextBox^ Inst0p3;

private: System::Windows::Forms::TextBox^ Inst2p3;

private: System::Windows::Forms::TextBox^ Inst3p3;
private: System::Windows::Forms::TextBox^ Inst1p3;


private: System::Windows::Forms::TextBox^ InstFp2;
private: System::Windows::Forms::TextBox^ Inst0p2;
private: System::Windows::Forms::TextBox^ Inst2p2;
private: System::Windows::Forms::TextBox^ Inst3p2;





private: System::Windows::Forms::TextBox^ Inst1p2;

private: System::Windows::Forms::TextBox^ InstFp1;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::RichTextBox^  BoxH3;
private: System::Windows::Forms::RichTextBox^  BoxH2;
private: System::Windows::Forms::RichTextBox^  BoxH1;
private: System::Windows::Forms::Label^ LabelH3 ;
private: System::Windows::Forms::Label^ LabelH2 ;
private: System::Windows::Forms::Label^ LabelH1 ;
		 int base;
#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>

			 string fromContentToString(int input)
			 {
				 string toReturn;
				 if (base == 16)
				 {
					 char* charArray = new char[100];
					 sprintf(charArray, "%x\0", input);
					 toReturn = string(charArray);
					 delete[] charArray;
				 }
				 else
					 toReturn = to_string(input);
				 return toReturn;
			 }
			 void resetTheSimEnv()
			 {
				 {
					 ___resetAllPipeline(1)
						 ___resetAllPipeline(2)
						 ___resetAllPipeline(3)
						 ___resetAllPipeline(4)
						 ___resetAllPipeline(5)
						 ___resetAllPipeline(6)
						 ___resetAllPipeline(7)
						 ___resetAllPipeline(8)
						 ___resetAllPipeline(9)
						 ___resetAllPipeline(10)
				 }
				 initialize();
				 fetch();
				 _GUI_updatePC();
				 _GUI_updateDataMemory();
				 _GUI_updateRegisterFile();
				 _GUI_updateStack();
				 time = 1;
			 }
			 void _GUI_updateStack()
			 {
				 ___updateStackField(0)
					 ___updateStackField(1)
					 ___updateStackField(2)
					 ___updateStackField(3)
			 }
			 void _GUI_updateRegisterFile() {
				 Reg0->Text = gcnew String(("00: " + fromContentToString(readRegister(0))).c_str());
				 Reg1->Text = gcnew String(("01: " + fromContentToString(readRegister(1))).c_str());
				 Reg2->Text = gcnew String(("02: " + fromContentToString(readRegister(2))).c_str());
				 Reg3->Text = gcnew String(("03: " + fromContentToString(readRegister(3))).c_str());
				 Reg4->Text = gcnew String(("04: " + fromContentToString(readRegister(4))).c_str());
				 Reg5->Text = gcnew String(("05: " + fromContentToString(readRegister(5))).c_str());
				 Reg6->Text = gcnew String(("06: " + fromContentToString(readRegister(6))).c_str());
				 Reg7->Text = gcnew String(("07: " + fromContentToString(readRegister(7))).c_str());
				 Reg8->Text = gcnew String(("08: " + fromContentToString(readRegister(8))).c_str());
				 Reg9->Text = gcnew String(("09: " + fromContentToString(readRegister(9))).c_str());
				 Reg10->Text = gcnew String(("10: " + fromContentToString(readRegister(10))).c_str());
				 Reg11->Text = gcnew String(("11: " + fromContentToString(readRegister(11))).c_str());
				 Reg12->Text = gcnew String(("12: " + fromContentToString(readRegister(12))).c_str());
				 Reg13->Text = gcnew String(("13: " + fromContentToString(readRegister(13))).c_str());
				 Reg14->Text = gcnew String(("14: " + fromContentToString(readRegister(14))).c_str());
				 Reg15->Text = gcnew String(("15: " + fromContentToString(readRegister(15))).c_str());
				 Reg16->Text = gcnew String(("16: " + fromContentToString(readRegister(16))).c_str());
				 Reg17->Text = gcnew String(("17: " + fromContentToString(readRegister(17))).c_str());
				 Reg18->Text = gcnew String(("18: " + fromContentToString(readRegister(18))).c_str());
				 Reg19->Text = gcnew String(("19: " + fromContentToString(readRegister(19))).c_str());
				 Reg20->Text = gcnew String(("20: " + fromContentToString(readRegister(20))).c_str());
				 Reg21->Text = gcnew String(("21: " + fromContentToString(readRegister(21))).c_str());
				 Reg22->Text = gcnew String(("22: " + fromContentToString(readRegister(22))).c_str());
				 Reg23->Text = gcnew String(("23: " + fromContentToString(readRegister(23))).c_str());
				 Reg24->Text = gcnew String(("24: " + fromContentToString(readRegister(24))).c_str());
				 Reg25->Text = gcnew String(("25: " + fromContentToString(readRegister(25))).c_str());
				 Reg26->Text = gcnew String(("26: " + fromContentToString(readRegister(26))).c_str());
				 Reg27->Text = gcnew String(("27: " + fromContentToString(readRegister(27))).c_str());
				 Reg28->Text = gcnew String(("28: " + fromContentToString(readRegister(28))).c_str());
				 Reg29->Text = gcnew String(("29: " + fromContentToString(readRegister(29))).c_str());
				 Reg30->Text = gcnew String(("30: " + fromContentToString(readRegister(30))).c_str());
				 Reg31->Text = gcnew String(("31: " + fromContentToString(readRegister(31))).c_str());
			 }
			 void _GUI_updateDataMemory()
			 {
				 Mem0->Text = gcnew String(("00: " + fromContentToString(readDataMem(0))).c_str());
				 Mem1->Text = gcnew String(("01: " + fromContentToString(readDataMem(1))).c_str());
				 Mem2->Text = gcnew String(("02: " + fromContentToString(readDataMem(2))).c_str());
				 Mem3->Text = gcnew String(("03: " + fromContentToString(readDataMem(3))).c_str());
				 Mem4->Text = gcnew String(("04: " + fromContentToString(readDataMem(4))).c_str());
				 Mem5->Text = gcnew String(("05: " + fromContentToString(readDataMem(5))).c_str());
				 Mem6->Text = gcnew String(("06: " + fromContentToString(readDataMem(6))).c_str());
				 Mem7->Text = gcnew String(("07: " + fromContentToString(readDataMem(7))).c_str());
				 Mem8->Text = gcnew String(("08: " + fromContentToString(readDataMem(8))).c_str());
				 Mem9->Text = gcnew String(("09: " + fromContentToString(readDataMem(9))).c_str());
				 Mem10->Text = gcnew String(("10: " + fromContentToString(readDataMem(10))).c_str());
				 Mem11->Text = gcnew String(("11: " + fromContentToString(readDataMem(11))).c_str());
				 Mem12->Text = gcnew String(("12: " + fromContentToString(readDataMem(12))).c_str());
				 Mem13->Text = gcnew String(("13: " + fromContentToString(readDataMem(13))).c_str());
				 Mem14->Text = gcnew String(("14: " + fromContentToString(readDataMem(14))).c_str());
				 Mem15->Text = gcnew String(("15: " + fromContentToString(readDataMem(15))).c_str());

			 }
			 void _GUI_updateFourBoxes() {
				 switch (time)
				 {
				 case 1:
				 {
					 ___print_Inst_TextBox(1)
						 break;
				 }
				 case 2:
				 {
					 ___print_Inst_TextBox(2)
						 break;
				 }
				 case 3:
				 {
					 ___print_Inst_TextBox(3)
						 break;
				 }
				 case 4:
				 {
					 ___print_Inst_TextBox(4)
						 break;
				 }
				 case 5:
				 {
					 ___print_Inst_TextBox(5)
						 break;
				 }
				 case 6:
				 {
					 ___print_Inst_TextBox(6)
						 break;
				 }
				 case 7:
				 {
					 ___print_Inst_TextBox(7)
						 break;
				 }
				 case 8:
				 {
					 ___print_Inst_TextBox(8)
						 break;
				 }
				 case 9:
				 {
					 ___print_Inst_TextBox(9)
						 break;
				 }
				 case 10:
				 {
					 ___print_Inst_TextBox(10)
						 break;
				 }

				 }
			 }
			 void _GUI_updateFetchBox()
			 {
				 switch (time)
				 {
				 case 1:
				 {
					 ___printFetchBox(1)
						 break;
				 }
				 case 2:
				 {
					 ___printFetchBox(2)
						 break;
				 }
				 case 3:
				 {
					 ___printFetchBox(3)
						 break;
				 }
				 case 4:
				 {
					 ___printFetchBox(4)
						 break;
				 }
				 case 5:
				 {
					 ___printFetchBox(5)
						 break;
				 }
				 case 6:
				 {
					 ___printFetchBox(6)
						 break;
				 }
				 case 7:
				 {
					 ___printFetchBox(7)
						 break;
				 }
				 case 8:
				 {
					 ___printFetchBox(8)
						 break;
				 }
				 case 9:
				 {
					 ___printFetchBox(9)
						 break;
				 }
				 case 10:
				 {
					 ___printFetchBox(10)
						 break;
				 }

				 }
			 }
			 void _GUI_updatePC()
			 {
				 PC_Show->Text = gcnew System::String((to_string(PC*4)).c_str());
			 }
			 void _GUI_updateHazardMsgs()
			 {
				___HAZARD_DISPLAY(1)
				___HAZARD_DISPLAY(2)
				___HAZARD_DISPLAY(3)
			 }
			 void InitializeComponent(void)
			 {
				 this->CodeFileLabel = (gcnew System::Windows::Forms::Label());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->sourceTextBox = (gcnew System::Windows::Forms::TextBox());
				 this->isaTextBox = (gcnew System::Windows::Forms::TextBox());
				 this->ParsingLabel = (gcnew System::Windows::Forms::Label());
				 this->LoadSourceCodeButton = (gcnew System::Windows::Forms::Button());
				 this->ParsingResults = (gcnew System::Windows::Forms::RichTextBox());
				 this->CodeBrowse = (gcnew System::Windows::Forms::Button());
				 this->RegexBrowse = (gcnew System::Windows::Forms::Button());
				 this->AssemblySource = (gcnew System::Windows::Forms::RichTextBox());
				 this->label2 = (gcnew System::Windows::Forms::Label());
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
				 this->PC_Show = (gcnew System::Windows::Forms::TextBox());
				 this->pipelineGroup = (gcnew System::Windows::Forms::GroupBox());
				 this->label7 = (gcnew System::Windows::Forms::Label());
				 this->label6 = (gcnew System::Windows::Forms::Label());
				 this->label5 = (gcnew System::Windows::Forms::Label());
				 this->label4 = (gcnew System::Windows::Forms::Label());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->InstFp10= (gcnew System::Windows::Forms::TextBox());
				 this->Inst0p10= (gcnew System::Windows::Forms::TextBox());
				 this->Inst2p10= (gcnew System::Windows::Forms::TextBox());
				 this->Inst3p10= (gcnew System::Windows::Forms::TextBox());
				 this->Inst1p10= (gcnew System::Windows::Forms::TextBox());
				 this->InstFp9= (gcnew System::Windows::Forms::TextBox());
				 this->Inst0p9= (gcnew System::Windows::Forms::TextBox());
				 this->Inst2p9= (gcnew System::Windows::Forms::TextBox());
				 this->Inst3p9= (gcnew System::Windows::Forms::TextBox());
				 this->Inst1p9= (gcnew System::Windows::Forms::TextBox());
				 this->InstFp8= (gcnew System::Windows::Forms::TextBox());
				 this->Inst0p8= (gcnew System::Windows::Forms::TextBox());
				 this->Inst2p8= (gcnew System::Windows::Forms::TextBox());
				 this->Inst3p8= (gcnew System::Windows::Forms::TextBox());
				 this->Inst1p8= (gcnew System::Windows::Forms::TextBox());
				 this->InstFp7= (gcnew System::Windows::Forms::TextBox());
				 this->Inst0p7= (gcnew System::Windows::Forms::TextBox());
				 this->Inst2p7= (gcnew System::Windows::Forms::TextBox());
				 this->Inst3p7= (gcnew System::Windows::Forms::TextBox());
				 this->Inst1p7= (gcnew System::Windows::Forms::TextBox());
				 this->InstFp6= (gcnew System::Windows::Forms::TextBox());
				 this->Inst0p6= (gcnew System::Windows::Forms::TextBox());
				 this->Inst2p6= (gcnew System::Windows::Forms::TextBox());
				 this->Inst3p6= (gcnew System::Windows::Forms::TextBox());
				 this->Inst1p6= (gcnew System::Windows::Forms::TextBox());
				 this->InstFp5= (gcnew System::Windows::Forms::TextBox());
				 this->Inst0p5= (gcnew System::Windows::Forms::TextBox());
				 this->Inst2p5= (gcnew System::Windows::Forms::TextBox());
				 this->Inst3p5= (gcnew System::Windows::Forms::TextBox());
				 this->Inst1p5= (gcnew System::Windows::Forms::TextBox());
				 this->InstFp4= (gcnew System::Windows::Forms::TextBox());
				 this->Inst0p4= (gcnew System::Windows::Forms::TextBox());
				 this->Inst2p4= (gcnew System::Windows::Forms::TextBox());
				 this->Inst3p4= (gcnew System::Windows::Forms::TextBox());
				 this->Inst1p4= (gcnew System::Windows::Forms::TextBox());
				 this->InstFp3= (gcnew System::Windows::Forms::TextBox());
				 this->Inst0p3= (gcnew System::Windows::Forms::TextBox());
				 this->Inst2p3= (gcnew System::Windows::Forms::TextBox());
				 this->Inst3p3= (gcnew System::Windows::Forms::TextBox());
				 this->Inst1p3= (gcnew System::Windows::Forms::TextBox());
				 this->InstFp2= (gcnew System::Windows::Forms::TextBox());
				 this->Inst0p2= (gcnew System::Windows::Forms::TextBox());
				 this->Inst2p2= (gcnew System::Windows::Forms::TextBox());
				 this->Inst3p2= (gcnew System::Windows::Forms::TextBox());
				 this->Inst1p2= (gcnew System::Windows::Forms::TextBox());
				 this->InstFp1= (gcnew System::Windows::Forms::TextBox());
				 this->Inst0p1= (gcnew System::Windows::Forms::TextBox());
				 this->Inst2p1= (gcnew System::Windows::Forms::TextBox());
				 this->Inst3p1= (gcnew System::Windows::Forms::TextBox());
				 this->Inst1p1= (gcnew System::Windows::Forms::TextBox());
				 this->sourceFile = (gcnew System::Windows::Forms::OpenFileDialog());
				 this->isaFile = (gcnew System::Windows::Forms::OpenFileDialog());
				 this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
				 this->BoxH3 = (gcnew System::Windows::Forms::RichTextBox());
				 this->BoxH2 = (gcnew System::Windows::Forms::RichTextBox());
				 this->BoxH1 = (gcnew System::Windows::Forms::RichTextBox());
				 this->LabelH3 = (gcnew System::Windows::Forms::Label());
				 this->LabelH2 = (gcnew System::Windows::Forms::Label());
				 this->LabelH1 = (gcnew System::Windows::Forms::Label());
				 this->RegistersGroupBox->SuspendLayout();
				 this->memGroupBox->SuspendLayout();
				 this->stackBox->SuspendLayout();
				 this->pcGroupBox->SuspendLayout();
				 this->pipelineGroup->SuspendLayout();
				 this->groupBox1->SuspendLayout();
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
				 // sourceTextBox
				 // 
				 this->sourceTextBox->Location = System::Drawing::Point(133, 6);
				 this->sourceTextBox->Name = L"sourceTextBox";
				 this->sourceTextBox->Size = System::Drawing::Size(191, 20);
				 this->sourceTextBox->TabIndex = 2;
				 // 
				 // isaTextBox
				 // 
				 this->isaTextBox->Location = System::Drawing::Point(133, 35);
				 this->isaTextBox->Name = L"isaTextBox";
				 this->isaTextBox->Size = System::Drawing::Size(191, 20);
				 this->isaTextBox->TabIndex = 3;
				 // 
				 // ParsingLabel
				 // 
				 this->ParsingLabel->AutoSize = true;
				 this->ParsingLabel->Location = System::Drawing::Point(9, 479);
				 this->ParsingLabel->Name = L"ParsingLabel";
				 this->ParsingLabel->Size = System::Drawing::Size(58, 13);
				 this->ParsingLabel->TabIndex = 4;
				 this->ParsingLabel->Text = L"Messages:";
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
				 this->ParsingResults->ReadOnly = true;
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
				 this->CodeBrowse->Click += gcnew System::EventHandler(this, &Simulator::CodeBrowse_Click);
				 // 
				 // RegexBrowse
				 // 
				 this->RegexBrowse->Location = System::Drawing::Point(331, 33);
				 this->RegexBrowse->Name = L"RegexBrowse";
				 this->RegexBrowse->Size = System::Drawing::Size(75, 23);
				 this->RegexBrowse->TabIndex = 8;
				 this->RegexBrowse->Text = L"Browse";
				 this->RegexBrowse->UseVisualStyleBackColor = true;
				 this->RegexBrowse->Click += gcnew System::EventHandler(this, &Simulator::RegexBrowse_Click);
				 // 
				 // AssemblySource
				 // 
				 this->AssemblySource->Location = System::Drawing::Point(12, 136);
				 this->AssemblySource->Name = L"AssemblySource";
				 this->AssemblySource->ReadOnly = true;
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
				 // button2
				 // 
				 this->button2->Location = System::Drawing::Point(15, 94);
				 this->button2->Name = L"button2";
				 this->button2->Size = System::Drawing::Size(75, 23);
				 this->button2->TabIndex = 12;
				 this->button2->Text = L"Reset";
				 this->button2->UseVisualStyleBackColor = true;
				 this->button2->Click += gcnew System::EventHandler(this, &Simulator::button2_Click);
				 // 
				 // button3
				 // 
				 this->button3->Location = System::Drawing::Point(133, 96);
				 this->button3->Name = L"button3";
				 this->button3->Size = System::Drawing::Size(117, 23);
				 this->button3->TabIndex = 13;
				 this->button3->Text = L"Advance One Step";
				 this->button3->UseVisualStyleBackColor = true;
				 this->button3->Click += gcnew System::EventHandler(this, &Simulator::button3_Click);
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
				 this->Reg16->Location = System::Drawing::Point(27, 337);
				 this->Reg16->Name = L"Reg16";
				 this->Reg16->ReadOnly = true;
				 this->Reg16->Size = System::Drawing::Size(109, 20);
				 this->Reg16->TabIndex = 62;
				 // 
				 // Reg15
				 // 
				 this->Reg15->Location = System::Drawing::Point(27, 317);
				 this->Reg15->Name = L"Reg15";
				 this->Reg15->ReadOnly = true;
				 this->Reg15->Size = System::Drawing::Size(109, 20);
				 this->Reg15->TabIndex = 61;
				 // 
				 // Reg14
				 // 
				 this->Reg14->Location = System::Drawing::Point(27, 297);
				 this->Reg14->Name = L"Reg14";
				 this->Reg14->ReadOnly = true;
				 this->Reg14->Size = System::Drawing::Size(109, 20);
				 this->Reg14->TabIndex = 60;
				 // 
				 // Reg13
				 // 
				 this->Reg13->Location = System::Drawing::Point(27, 277);
				 this->Reg13->Name = L"Reg13";
				 this->Reg13->ReadOnly = true;
				 this->Reg13->Size = System::Drawing::Size(109, 20);
				 this->Reg13->TabIndex = 59;
				 // 
				 // Reg12
				 // 
				 this->Reg12->Location = System::Drawing::Point(27, 257);
				 this->Reg12->Name = L"Reg12";
				 this->Reg12->ReadOnly = true;
				 this->Reg12->Size = System::Drawing::Size(109, 20);
				 this->Reg12->TabIndex = 58;
				 // 
				 // Reg11
				 // 
				 this->Reg11->Location = System::Drawing::Point(27, 237);
				 this->Reg11->Name = L"Reg11";
				 this->Reg11->ReadOnly = true;
				 this->Reg11->Size = System::Drawing::Size(109, 20);
				 this->Reg11->TabIndex = 57;
				 // 
				 // Reg10
				 // 
				 this->Reg10->Location = System::Drawing::Point(27, 217);
				 this->Reg10->Name = L"Reg10";
				 this->Reg10->ReadOnly = true;
				 this->Reg10->Size = System::Drawing::Size(109, 20);
				 this->Reg10->TabIndex = 56;
				 // 
				 // Reg9
				 // 
				 this->Reg9->Location = System::Drawing::Point(27, 197);
				 this->Reg9->Name = L"Reg9";
				 this->Reg9->ReadOnly = true;
				 this->Reg9->Size = System::Drawing::Size(109, 20);
				 this->Reg9->TabIndex = 55;
				 // 
				 // Reg8
				 // 
				 this->Reg8->Location = System::Drawing::Point(27, 177);
				 this->Reg8->Name = L"Reg8";
				 this->Reg8->ReadOnly = true;
				 this->Reg8->Size = System::Drawing::Size(109, 20);
				 this->Reg8->TabIndex = 54;
				 // 
				 // Reg7
				 // 
				 this->Reg7->Location = System::Drawing::Point(27, 157);
				 this->Reg7->Name = L"Reg7";
				 this->Reg7->ReadOnly = true;
				 this->Reg7->Size = System::Drawing::Size(109, 20);
				 this->Reg7->TabIndex = 53;
				 // 
				 // Reg6
				 // 
				 this->Reg6->Location = System::Drawing::Point(27, 137);
				 this->Reg6->Name = L"Reg6";
				 this->Reg6->ReadOnly = true;
				 this->Reg6->Size = System::Drawing::Size(109, 20);
				 this->Reg6->TabIndex = 52;
				 // 
				 // Reg5
				 // 
				 this->Reg5->Location = System::Drawing::Point(27, 117);
				 this->Reg5->Name = L"Reg5";
				 this->Reg5->ReadOnly = true;
				 this->Reg5->Size = System::Drawing::Size(109, 20);
				 this->Reg5->TabIndex = 51;
				 // 
				 // Reg4
				 // 
				 this->Reg4->Location = System::Drawing::Point(27, 97);
				 this->Reg4->Name = L"Reg4";
				 this->Reg4->ReadOnly = true;
				 this->Reg4->Size = System::Drawing::Size(109, 20);
				 this->Reg4->TabIndex = 50;
				 // 
				 // Reg2
				 // 
				 this->Reg2->Location = System::Drawing::Point(27, 57);
				 this->Reg2->Name = L"Reg2";
				 this->Reg2->ReadOnly = true;
				 this->Reg2->Size = System::Drawing::Size(109, 20);
				 this->Reg2->TabIndex = 49;
				 // 
				 // Reg1
				 // 
				 this->Reg1->Location = System::Drawing::Point(27, 37);
				 this->Reg1->Name = L"Reg1";
				 this->Reg1->ReadOnly = true;
				 this->Reg1->Size = System::Drawing::Size(109, 20);
				 this->Reg1->TabIndex = 48;
				 // 
				 // Reg0
				 // 
				 this->Reg0->Location = System::Drawing::Point(27, 17);
				 this->Reg0->Name = L"Reg0";
				 this->Reg0->ReadOnly = true;
				 this->Reg0->Size = System::Drawing::Size(109, 20);
				 this->Reg0->TabIndex = 47;
				 // 
				 // Reg31
				 // 
				 this->Reg31->Location = System::Drawing::Point(27, 637);
				 this->Reg31->Name = L"Reg31";
				 this->Reg31->ReadOnly = true;
				 this->Reg31->Size = System::Drawing::Size(109, 20);
				 this->Reg31->TabIndex = 46;
				 // 
				 // Reg30
				 // 
				 this->Reg30->Location = System::Drawing::Point(27, 617);
				 this->Reg30->Name = L"Reg30";
				 this->Reg30->ReadOnly = true;
				 this->Reg30->Size = System::Drawing::Size(109, 20);
				 this->Reg30->TabIndex = 45;
				 // 
				 // Reg29
				 // 
				 this->Reg29->Location = System::Drawing::Point(27, 597);
				 this->Reg29->Name = L"Reg29";
				 this->Reg29->ReadOnly = true;
				 this->Reg29->Size = System::Drawing::Size(109, 20);
				 this->Reg29->TabIndex = 44;
				 // 
				 // Reg28
				 // 
				 this->Reg28->Location = System::Drawing::Point(27, 577);
				 this->Reg28->Name = L"Reg28";
				 this->Reg28->ReadOnly = true;
				 this->Reg28->Size = System::Drawing::Size(109, 20);
				 this->Reg28->TabIndex = 43;
				 // 
				 // Reg27
				 // 
				 this->Reg27->Location = System::Drawing::Point(27, 557);
				 this->Reg27->Name = L"Reg27";
				 this->Reg27->ReadOnly = true;
				 this->Reg27->Size = System::Drawing::Size(109, 20);
				 this->Reg27->TabIndex = 42;
				 // 
				 // Reg26
				 // 
				 this->Reg26->Location = System::Drawing::Point(27, 537);
				 this->Reg26->Name = L"Reg26";
				 this->Reg26->ReadOnly = true;
				 this->Reg26->Size = System::Drawing::Size(109, 20);
				 this->Reg26->TabIndex = 41;
				 // 
				 // Reg25
				 // 
				 this->Reg25->Location = System::Drawing::Point(27, 517);
				 this->Reg25->Name = L"Reg25";
				 this->Reg25->ReadOnly = true;
				 this->Reg25->Size = System::Drawing::Size(109, 20);
				 this->Reg25->TabIndex = 40;
				 // 
				 // Reg24
				 // 
				 this->Reg24->Location = System::Drawing::Point(27, 497);
				 this->Reg24->Name = L"Reg24";
				 this->Reg24->ReadOnly = true;
				 this->Reg24->Size = System::Drawing::Size(109, 20);
				 this->Reg24->TabIndex = 39;
				 // 
				 // Reg23
				 // 
				 this->Reg23->Location = System::Drawing::Point(27, 477);
				 this->Reg23->Name = L"Reg23";
				 this->Reg23->ReadOnly = true;
				 this->Reg23->Size = System::Drawing::Size(109, 20);
				 this->Reg23->TabIndex = 38;
				 // 
				 // Reg22
				 // 
				 this->Reg22->Location = System::Drawing::Point(27, 457);
				 this->Reg22->Name = L"Reg22";
				 this->Reg22->ReadOnly = true;
				 this->Reg22->Size = System::Drawing::Size(109, 20);
				 this->Reg22->TabIndex = 37;
				 // 
				 // Reg21
				 // 
				 this->Reg21->Location = System::Drawing::Point(27, 437);
				 this->Reg21->Name = L"Reg21";
				 this->Reg21->ReadOnly = true;
				 this->Reg21->Size = System::Drawing::Size(109, 20);
				 this->Reg21->TabIndex = 36;
				 // 
				 // Reg20
				 // 
				 this->Reg20->Location = System::Drawing::Point(27, 417);
				 this->Reg20->Name = L"Reg20";
				 this->Reg20->ReadOnly = true;
				 this->Reg20->Size = System::Drawing::Size(109, 20);
				 this->Reg20->TabIndex = 35;
				 // 
				 // Reg19
				 // 
				 this->Reg19->Location = System::Drawing::Point(27, 397);
				 this->Reg19->Name = L"Reg19";
				 this->Reg19->ReadOnly = true;
				 this->Reg19->Size = System::Drawing::Size(109, 20);
				 this->Reg19->TabIndex = 34;
				 this->Reg19->TextChanged += gcnew System::EventHandler(this, &Simulator::Reg19_TextChanged);
				 // 
				 // Reg18
				 // 
				 this->Reg18->Location = System::Drawing::Point(27, 377);
				 this->Reg18->Name = L"Reg18";
				 this->Reg18->ReadOnly = true;
				 this->Reg18->Size = System::Drawing::Size(109, 20);
				 this->Reg18->TabIndex = 33;
				 // 
				 // Reg17
				 // 
				 this->Reg17->Location = System::Drawing::Point(27, 357);
				 this->Reg17->Name = L"Reg17";
				 this->Reg17->ReadOnly = true;
				 this->Reg17->Size = System::Drawing::Size(109, 20);
				 this->Reg17->TabIndex = 32;
				 // 
				 // Reg3
				 // 
				 this->Reg3->Location = System::Drawing::Point(27, 77);
				 this->Reg3->Name = L"Reg3";
				 this->Reg3->ReadOnly = true;
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
				 this->Mem15->Location = System::Drawing::Point(16, 317);
				 this->Mem15->Name = L"Mem15";
				 this->Mem15->ReadOnly = true;
				 this->Mem15->Size = System::Drawing::Size(109, 20);
				 this->Mem15->TabIndex = 78;
				 // 
				 // Mem4
				 // 
				 this->Mem4->Location = System::Drawing::Point(16, 97);
				 this->Mem4->Name = L"Mem4";
				 this->Mem4->ReadOnly = true;
				 this->Mem4->Size = System::Drawing::Size(109, 20);
				 this->Mem4->TabIndex = 67;
				 // 
				 // Mem14
				 // 
				 this->Mem14->Location = System::Drawing::Point(16, 297);
				 this->Mem14->Name = L"Mem14";
				 this->Mem14->ReadOnly = true;
				 this->Mem14->Size = System::Drawing::Size(109, 20);
				 this->Mem14->TabIndex = 77;
				 // 
				 // Mem3
				 // 
				 this->Mem3->Location = System::Drawing::Point(16, 77);
				 this->Mem3->Name = L"Mem3";
				 this->Mem3->ReadOnly = true;
				 this->Mem3->Size = System::Drawing::Size(109, 20);
				 this->Mem3->TabIndex = 63;
				 // 
				 // Mem13
				 // 
				 this->Mem13->Location = System::Drawing::Point(16, 277);
				 this->Mem13->Name = L"Mem13";
				 this->Mem13->ReadOnly = true;
				 this->Mem13->Size = System::Drawing::Size(109, 20);
				 this->Mem13->TabIndex = 76;
				 // 
				 // Mem0
				 // 
				 this->Mem0->Location = System::Drawing::Point(16, 17);
				 this->Mem0->Name = L"Mem0";
				 this->Mem0->ReadOnly = true;
				 this->Mem0->Size = System::Drawing::Size(109, 20);
				 this->Mem0->TabIndex = 64;
				 // 
				 // Mem12
				 // 
				 this->Mem12->Location = System::Drawing::Point(16, 257);
				 this->Mem12->Name = L"Mem12";
				 this->Mem12->ReadOnly = true;
				 this->Mem12->Size = System::Drawing::Size(109, 20);
				 this->Mem12->TabIndex = 75;
				 // 
				 // Mem1
				 // 
				 this->Mem1->Location = System::Drawing::Point(16, 37);
				 this->Mem1->Name = L"Mem1";
				 this->Mem1->ReadOnly = true;
				 this->Mem1->Size = System::Drawing::Size(109, 20);
				 this->Mem1->TabIndex = 65;
				 // 
				 // Mem11
				 // 
				 this->Mem11->Location = System::Drawing::Point(16, 237);
				 this->Mem11->Name = L"Mem11";
				 this->Mem11->ReadOnly = true;
				 this->Mem11->Size = System::Drawing::Size(109, 20);
				 this->Mem11->TabIndex = 74;
				 // 
				 // Mem2
				 // 
				 this->Mem2->Location = System::Drawing::Point(16, 57);
				 this->Mem2->Name = L"Mem2";
				 this->Mem2->ReadOnly = true;
				 this->Mem2->Size = System::Drawing::Size(109, 20);
				 this->Mem2->TabIndex = 66;
				 // 
				 // Mem10
				 // 
				 this->Mem10->Location = System::Drawing::Point(16, 217);
				 this->Mem10->Name = L"Mem10";
				 this->Mem10->ReadOnly = true;
				 this->Mem10->Size = System::Drawing::Size(109, 20);
				 this->Mem10->TabIndex = 73;
				 // 
				 // Mem5
				 // 
				 this->Mem5->Location = System::Drawing::Point(16, 117);
				 this->Mem5->Name = L"Mem5";
				 this->Mem5->ReadOnly = true;
				 this->Mem5->Size = System::Drawing::Size(109, 20);
				 this->Mem5->TabIndex = 68;
				 // 
				 // Mem9
				 // 
				 this->Mem9->Location = System::Drawing::Point(16, 197);
				 this->Mem9->Name = L"Mem9";
				 this->Mem9->ReadOnly = true;
				 this->Mem9->Size = System::Drawing::Size(109, 20);
				 this->Mem9->TabIndex = 72;
				 // 
				 // Mem6
				 // 
				 this->Mem6->Location = System::Drawing::Point(16, 137);
				 this->Mem6->Name = L"Mem6";
				 this->Mem6->ReadOnly = true;
				 this->Mem6->Size = System::Drawing::Size(109, 20);
				 this->Mem6->TabIndex = 69;
				 // 
				 // Mem8
				 // 
				 this->Mem8->Location = System::Drawing::Point(16, 177);
				 this->Mem8->Name = L"Mem8";
				 this->Mem8->ReadOnly = true;
				 this->Mem8->Size = System::Drawing::Size(109, 20);
				 this->Mem8->TabIndex = 71;
				 // 
				 // Mem7
				 // 
				 this->Mem7->Location = System::Drawing::Point(16, 157);
				 this->Mem7->Name = L"Mem7";
				 this->Mem7->ReadOnly = true;
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
				 this->Stack0->Location = System::Drawing::Point(16, 77);
				 this->Stack0->Name = L"Stack0";
				 this->Stack0->ReadOnly = true;
				 this->Stack0->Size = System::Drawing::Size(109, 20);
				 this->Stack0->TabIndex = 63;
				 // 
				 // Stack3
				 // 
				 this->Stack3->Location = System::Drawing::Point(16, 17);
				 this->Stack3->Name = L"Stack3";
				 this->Stack3->ReadOnly = true;
				 this->Stack3->Size = System::Drawing::Size(109, 20);
				 this->Stack3->TabIndex = 64;
				 // 
				 // Stack2
				 // 
				 this->Stack2->Location = System::Drawing::Point(16, 37);
				 this->Stack2->Name = L"Stack2";
				 this->Stack2->ReadOnly = true;
				 this->Stack2->Size = System::Drawing::Size(109, 20);
				 this->Stack2->TabIndex = 65;
				 // 
				 // Stack1
				 // 
				 this->Stack1->Location = System::Drawing::Point(16, 57);
				 this->Stack1->Name = L"Stack1";
				 this->Stack1->ReadOnly = true;
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
				 this->button4->Click += gcnew System::EventHandler(this, &Simulator::button4_Click);
				 // 
				 // base_choice
				 // 
				 this->base_choice->AllowDrop = true;
				 this->base_choice->DisplayMember = L"0";
				 this->base_choice->FormattingEnabled = true;
				 this->base_choice->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Decimal", L"Hexadecimal" });
				 this->base_choice->Location = System::Drawing::Point(66, 676);
				 this->base_choice->Name = L"base_choice";
				 this->base_choice->Size = System::Drawing::Size(121, 21);
				 this->base_choice->TabIndex = 82;
				 this->base_choice->ValueMember = L"0";
				 // 
				 // pcGroupBox
				 // 
				 this->pcGroupBox->Controls->Add(this->PC_Show);
				 this->pcGroupBox->Location = System::Drawing::Point(473, 559);
				 this->pcGroupBox->Name = L"pcGroupBox";
				 this->pcGroupBox->Size = System::Drawing::Size(140, 60);
				 this->pcGroupBox->TabIndex = 80;
				 this->pcGroupBox->TabStop = false;
				 this->pcGroupBox->Text = L"PC";
				 // 
				 // PC_Show
				 // 
				 this->PC_Show->Location = System::Drawing::Point(16, 17);
				 this->PC_Show->Name = L"PC_Show";
				 this->PC_Show->ReadOnly = true;
				 this->PC_Show->Size = System::Drawing::Size(109, 20);
				 this->PC_Show->TabIndex = 64;
				 // 
				 // pipelineGroup
				 // 
				 this->pipelineGroup->Controls->Add(this->label7);
				 this->pipelineGroup->Controls->Add(this->label6);
				 this->pipelineGroup->Controls->Add(this->label5);
				 this->pipelineGroup->Controls->Add(this->label4);
				 this->pipelineGroup->Controls->Add(this->label3);
				 this->pipelineGroup->Controls->Add(this->InstFp10);
				 this->pipelineGroup->Controls->Add(this->Inst0p10);
				 this->pipelineGroup->Controls->Add(this->Inst2p10);
				 this->pipelineGroup->Controls->Add(this->Inst3p10);
				 this->pipelineGroup->Controls->Add(this->Inst1p10);
				 this->pipelineGroup->Controls->Add(this->InstFp9);
				 this->pipelineGroup->Controls->Add(this->Inst0p9);
				 this->pipelineGroup->Controls->Add(this->Inst2p9);
				 this->pipelineGroup->Controls->Add(this->Inst3p9);
				 this->pipelineGroup->Controls->Add(this->Inst1p9);
				 this->pipelineGroup->Controls->Add(this->InstFp8);
				 this->pipelineGroup->Controls->Add(this->Inst0p8);
				 this->pipelineGroup->Controls->Add(this->Inst2p8);
				 this->pipelineGroup->Controls->Add(this->Inst3p8);
				 this->pipelineGroup->Controls->Add(this->Inst1p8);
				 this->pipelineGroup->Controls->Add(this->InstFp7);
				 this->pipelineGroup->Controls->Add(this->Inst0p7);
				 this->pipelineGroup->Controls->Add(this->Inst2p7);
				 this->pipelineGroup->Controls->Add(this->Inst3p7);
				 this->pipelineGroup->Controls->Add(this->Inst1p7);
				 this->pipelineGroup->Controls->Add(this->InstFp6);
				 this->pipelineGroup->Controls->Add(this->Inst0p6);
				 this->pipelineGroup->Controls->Add(this->Inst2p6);
				 this->pipelineGroup->Controls->Add(this->Inst3p6);
				 this->pipelineGroup->Controls->Add(this->Inst1p6);
				 this->pipelineGroup->Controls->Add(this->InstFp5);
				 this->pipelineGroup->Controls->Add(this->Inst0p5);
				 this->pipelineGroup->Controls->Add(this->Inst2p5);
				 this->pipelineGroup->Controls->Add(this->Inst3p5);
				 this->pipelineGroup->Controls->Add(this->Inst1p5);
				 this->pipelineGroup->Controls->Add(this->InstFp4);
				 this->pipelineGroup->Controls->Add(this->Inst0p4);
				 this->pipelineGroup->Controls->Add(this->Inst2p4);
				 this->pipelineGroup->Controls->Add(this->Inst3p4);
				 this->pipelineGroup->Controls->Add(this->Inst1p4);
				 this->pipelineGroup->Controls->Add(this->InstFp3);
				 this->pipelineGroup->Controls->Add(this->Inst0p3);
				 this->pipelineGroup->Controls->Add(this->Inst2p3);
				 this->pipelineGroup->Controls->Add(this->Inst3p3);
				 this->pipelineGroup->Controls->Add(this->Inst1p3);
				 this->pipelineGroup->Controls->Add(this->InstFp2);
				 this->pipelineGroup->Controls->Add(this->Inst0p2);
				 this->pipelineGroup->Controls->Add(this->Inst2p2);
				 this->pipelineGroup->Controls->Add(this->Inst3p2);
				 this->pipelineGroup->Controls->Add(this->Inst1p2);
				 this->pipelineGroup->Controls->Add(this->InstFp1);
				 this->pipelineGroup->Controls->Add(this->Inst0p1);
				 this->pipelineGroup->Controls->Add(this->Inst2p1);
				 this->pipelineGroup->Controls->Add(this->Inst3p1);
				 this->pipelineGroup->Controls->Add(this->Inst1p1);
				 this->pipelineGroup->Location = System::Drawing::Point(634, 64);
				 this->pipelineGroup->Name = L"pipelineGroup";
				 this->pipelineGroup->Size = System::Drawing::Size(610, 495);
				 this->pipelineGroup->TabIndex = 90;
				 this->pipelineGroup->TabStop = false;
				 this->pipelineGroup->Text = L"Pipeline";
				 // 
				 // label7
				 // 
				 this->label7->AutoSize = true;
				 this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
				 this->label7->Location = System::Drawing::Point(511, 30);
				 this->label7->Name = L"label7";
				 this->label7->Size = System::Drawing::Size(79, 17);
				 this->label7->TabIndex = 154;
				 this->label7->Text = L"WB Stage";
				 // 
				 // label6
				 // 
				 this->label6->AutoSize = true;
				 this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
				 this->label6->Location = System::Drawing::Point(375, 30);
				 this->label6->Name = L"label6";
				 this->label6->Size = System::Drawing::Size(111, 17);
				 this->label6->TabIndex = 153;
				 this->label6->Text = L"Memory Stage";
				 // 
				 // label5
				 // 
				 this->label5->AutoSize = true;
				 this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
				 this->label5->Location = System::Drawing::Point(251, 30);
				 this->label5->Name = L"label5";
				 this->label5->Size = System::Drawing::Size(112, 17);
				 this->label5->TabIndex = 152;
				 this->label5->Text = L"Execute Stage";
				 // 
				 // label4
				 // 
				 this->label4->AutoSize = true;
				 this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
				 this->label4->Location = System::Drawing::Point(128, 30);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(110, 17);
				 this->label4->TabIndex = 151;
				 this->label4->Text = L"Decode Stage";
				 this->label4->Click += gcnew System::EventHandler(this, &Simulator::label4_Click_1);
				 // 
				 // label3
				 // 
				 this->label3->AutoSize = true;
				 this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
				 this->label3->Location = System::Drawing::Point(6, 30);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(95, 17);
				 this->label3->TabIndex = 150;
				 this->label3->Text = L"Fetch Stage";
				 this->label3->Click += gcnew System::EventHandler(this, &Simulator::label3_Click_2);
				 // 
				 //InstFp10
				 // 
				 this->InstFp10->Location = System::Drawing::Point(6, 455);
				 this->InstFp10->Name = L"InstFp10";
				 this->InstFp10->ReadOnly = true;
				 this->InstFp10->Size = System::Drawing::Size(100, 20);
				 this->InstFp10->TabIndex = 149;
				 // 
				 //Inst0p10
				 // 
				 this->Inst0p10->Location = System::Drawing::Point(130, 455);
				 this->Inst0p10->Name = L"Inst0p10";
				 this->Inst0p10->ReadOnly = true;
				 this->Inst0p10->Size = System::Drawing::Size(100, 20);
				 this->Inst0p10->TabIndex = 148;
				 // 
				 //Inst2p10
				 // 
				 this->Inst2p10->Location = System::Drawing::Point(378, 455);
				 this->Inst2p10->Name = L"Inst2p10";
				 this->Inst2p10->ReadOnly = true;
				 this->Inst2p10->Size = System::Drawing::Size(100, 20);
				 this->Inst2p10->TabIndex = 147;
				 // 
				 //Inst3p10
				 // 
				 this->Inst3p10->Location = System::Drawing::Point(502, 455);
				 this->Inst3p10->Name = L"Inst3p10";
				 this->Inst3p10->ReadOnly = true;
				 this->Inst3p10->Size = System::Drawing::Size(100, 20);
				 this->Inst3p10->TabIndex = 146;
				 // 
				 //Inst1p10
				 // 
				 this->Inst1p10->Location = System::Drawing::Point(254, 455);
				 this->Inst1p10->Name = L"Inst1p10";
				 this->Inst1p10->ReadOnly = true;
				 this->Inst1p10->Size = System::Drawing::Size(100, 20);
				 this->Inst1p10->TabIndex = 145;
				 // 
				 //InstFp9
				 // 
				 this->InstFp9->Location = System::Drawing::Point(6, 412);
				 this->InstFp9->Name = L"InstFp9";
				 this->InstFp9->ReadOnly = true;
				 this->InstFp9->Size = System::Drawing::Size(100, 20);
				 this->InstFp9->TabIndex = 144;
				 // 
				 //Inst0p9
				 // 
				 this->Inst0p9->Location = System::Drawing::Point(130, 412);
				 this->Inst0p9->Name = L"Inst0p9";
				 this->Inst0p9->ReadOnly = true;
				 this->Inst0p9->Size = System::Drawing::Size(100, 20);
				 this->Inst0p9->TabIndex = 143;
				 // 
				 //Inst2p9
				 // 
				 this->Inst2p9->Location = System::Drawing::Point(378, 412);
				 this->Inst2p9->Name = L"Inst2p9";
				 this->Inst2p9->ReadOnly = true;
				 this->Inst2p9->Size = System::Drawing::Size(100, 20);
				 this->Inst2p9->TabIndex = 142;
				 // 
				 //Inst3p9
				 // 
				 this->Inst3p9->Location = System::Drawing::Point(502, 412);
				 this->Inst3p9->Name = L"Inst3p9";
				 this->Inst3p9->ReadOnly = true;
				 this->Inst3p9->Size = System::Drawing::Size(100, 20);
				 this->Inst3p9->TabIndex = 141;
				 // 
				 //Inst1p9
				 // 
				 this->Inst1p9->Location = System::Drawing::Point(254, 412);
				 this->Inst1p9->Name = L"Inst1p9";
				 this->Inst1p9->ReadOnly = true;
				 this->Inst1p9->Size = System::Drawing::Size(100, 20);
				 this->Inst1p9->TabIndex = 140;
				 // 
				 //InstFp8
				 // 
				 this->InstFp8->Location = System::Drawing::Point(7, 361);
				 this->InstFp8->Name = L"InstFp8";
				 this->InstFp8->ReadOnly = true;
				 this->InstFp8->Size = System::Drawing::Size(100, 20);
				 this->InstFp8->TabIndex = 139;
				 // 
				 //Inst0p8
				 // 
				 this->Inst0p8->Location = System::Drawing::Point(131, 361);
				 this->Inst0p8->Name = L"Inst0p8";
				 this->Inst0p8->ReadOnly = true;
				 this->Inst0p8->Size = System::Drawing::Size(100, 20);
				 this->Inst0p8->TabIndex = 138;
				 // 
				 //Inst2p8
				 // 
				 this->Inst2p8->Location = System::Drawing::Point(379, 361);
				 this->Inst2p8->Name = L"Inst2p8";
				 this->Inst2p8->ReadOnly = true;
				 this->Inst2p8->Size = System::Drawing::Size(100, 20);
				 this->Inst2p8->TabIndex = 137;
				 // 
				 //Inst3p8
				 // 
				 this->Inst3p8->Location = System::Drawing::Point(503, 361);
				 this->Inst3p8->Name = L"Inst3p8";
				 this->Inst3p8->ReadOnly = true;
				 this->Inst3p8->Size = System::Drawing::Size(100, 20);
				 this->Inst3p8->TabIndex = 136;
				 // 
				 //Inst1p8
				 // 
				 this->Inst1p8->Location = System::Drawing::Point(255, 361);
				 this->Inst1p8->Name = L"Inst1p8";
				 this->Inst1p8->ReadOnly = true;
				 this->Inst1p8->Size = System::Drawing::Size(100, 20);
				 this->Inst1p8->TabIndex = 135;
				 // 
				 //InstFp7
				 // 
				 this->InstFp7->Location = System::Drawing::Point(8, 317);
				 this->InstFp7->Name = L"InstFp7";
				 this->InstFp7->ReadOnly = true;
				 this->InstFp7->Size = System::Drawing::Size(100, 20);
				 this->InstFp7->TabIndex = 134;
				 // 
				 //Inst0p7
				 // 
				 this->Inst0p7->Location = System::Drawing::Point(132, 317);
				 this->Inst0p7->Name = L"Inst0p7";
				 this->Inst0p7->ReadOnly = true;
				 this->Inst0p7->Size = System::Drawing::Size(100, 20);
				 this->Inst0p7->TabIndex = 133;
				 // 
				 //Inst2p7
				 // 
				 this->Inst2p7->Location = System::Drawing::Point(380, 317);
				 this->Inst2p7->Name = L"Inst2p7";
				 this->Inst2p7->ReadOnly = true;
				 this->Inst2p7->Size = System::Drawing::Size(100, 20);
				 this->Inst2p7->TabIndex = 132;
				 // 
				 //Inst3p7
				 // 
				 this->Inst3p7->Location = System::Drawing::Point(504, 317);
				 this->Inst3p7->Name = L"Inst3p7";
				 this->Inst3p7->ReadOnly = true;
				 this->Inst3p7->Size = System::Drawing::Size(100, 20);
				 this->Inst3p7->TabIndex = 131;
				 // 
				 //Inst1p7
				 // 
				 this->Inst1p7->Location = System::Drawing::Point(256, 317);
				 this->Inst1p7->Name = L"Inst1p7";
				 this->Inst1p7->ReadOnly = true;
				 this->Inst1p7->Size = System::Drawing::Size(100, 20);
				 this->Inst1p7->TabIndex = 130;
				 // 
				 //InstFp6
				 // 
				 this->InstFp6->Location = System::Drawing::Point(7, 267);
				 this->InstFp6->Name = L"InstFp6";
				 this->InstFp6->ReadOnly = true;
				 this->InstFp6->Size = System::Drawing::Size(100, 20);
				 this->InstFp6->TabIndex = 129;
				 // 
				 //Inst0p6
				 // 
				 this->Inst0p6->Location = System::Drawing::Point(131, 267);
				 this->Inst0p6->Name = L"Inst0p6";
				 this->Inst0p6->ReadOnly = true;
				 this->Inst0p6->Size = System::Drawing::Size(100, 20);
				 this->Inst0p6->TabIndex = 128;
				 // 
				 //Inst2p6
				 // 
				 this->Inst2p6->Location = System::Drawing::Point(379, 267);
				 this->Inst2p6->Name = L"Inst2p6";
				 this->Inst2p6->ReadOnly = true;
				 this->Inst2p6->Size = System::Drawing::Size(100, 20);
				 this->Inst2p6->TabIndex = 127;
				 // 
				 //Inst3p6
				 // 
				 this->Inst3p6->Location = System::Drawing::Point(503, 267);
				 this->Inst3p6->Name = L"Inst3p6";
				 this->Inst3p6->ReadOnly = true;
				 this->Inst3p6->Size = System::Drawing::Size(100, 20);
				 this->Inst3p6->TabIndex = 126;
				 // 
				 //Inst1p6
				 // 
				 this->Inst1p6->Location = System::Drawing::Point(255, 267);
				 this->Inst1p6->Name = L"Inst1p6";
				 this->Inst1p6->ReadOnly = true;
				 this->Inst1p6->Size = System::Drawing::Size(100, 20);
				 this->Inst1p6->TabIndex = 125;
				 // 
				 //InstFp5
				 // 
				 this->InstFp5->Location = System::Drawing::Point(6, 215);
				 this->InstFp5->Name = L"InstFp5";
				 this->InstFp5->ReadOnly = true;
				 this->InstFp5->Size = System::Drawing::Size(100, 20);
				 this->InstFp5->TabIndex = 124;
				 // 
				 //Inst0p5
				 // 
				 this->Inst0p5->Location = System::Drawing::Point(130, 215);
				 this->Inst0p5->Name = L"Inst0p5";
				 this->Inst0p5->ReadOnly = true;
				 this->Inst0p5->Size = System::Drawing::Size(100, 20);
				 this->Inst0p5->TabIndex = 123;
				 // 
				 //Inst2p5
				 // 
				 this->Inst2p5->Location = System::Drawing::Point(378, 215);
				 this->Inst2p5->Name = L"Inst2p5";
				 this->Inst2p5->ReadOnly = true;
				 this->Inst2p5->Size = System::Drawing::Size(100, 20);
				 this->Inst2p5->TabIndex = 122;
				 // 
				 //Inst3p5
				 // 
				 this->Inst3p5->Location = System::Drawing::Point(502, 215);
				 this->Inst3p5->Name = L"Inst3p5";
				 this->Inst3p5->ReadOnly = true;
				 this->Inst3p5->Size = System::Drawing::Size(100, 20);
				 this->Inst3p5->TabIndex = 121;
				 // 
				 //Inst1p5
				 // 
				 this->Inst1p5->Location = System::Drawing::Point(254, 215);
				 this->Inst1p5->Name = L"Inst1p5";
				 this->Inst1p5->ReadOnly = true;
				 this->Inst1p5->Size = System::Drawing::Size(100, 20);
				 this->Inst1p5->TabIndex = 120;
				 // 
				 //InstFp4
				 // 
				 this->InstFp4->Location = System::Drawing::Point(6, 175);
				 this->InstFp4->Name = L"InstFp4";
				 this->InstFp4->ReadOnly = true;
				 this->InstFp4->Size = System::Drawing::Size(100, 20);
				 this->InstFp4->TabIndex = 119;
				 // 
				 //Inst0p4
				 // 
				 this->Inst0p4->Location = System::Drawing::Point(130, 175);
				 this->Inst0p4->Name = L"Inst0p4";
				 this->Inst0p4->ReadOnly = true;
				 this->Inst0p4->Size = System::Drawing::Size(100, 20);
				 this->Inst0p4->TabIndex = 118;
				 // 
				 //Inst2p4
				 // 
				 this->Inst2p4->Location = System::Drawing::Point(378, 175);
				 this->Inst2p4->Name = L"Inst2p4";
				 this->Inst2p4->ReadOnly = true;
				 this->Inst2p4->Size = System::Drawing::Size(100, 20);
				 this->Inst2p4->TabIndex = 117;
				 // 
				 //Inst3p4
				 // 
				 this->Inst3p4->Location = System::Drawing::Point(502, 175);
				 this->Inst3p4->Name = L"Inst3p4";
				 this->Inst3p4->ReadOnly = true;
				 this->Inst3p4->Size = System::Drawing::Size(100, 20);
				 this->Inst3p4->TabIndex = 116;
				 // 
				 //Inst1p4
				 // 
				 this->Inst1p4->Location = System::Drawing::Point(254, 175);
				 this->Inst1p4->Name = L"Inst1p4";
				 this->Inst1p4->ReadOnly = true;
				 this->Inst1p4->Size = System::Drawing::Size(100, 20);
				 this->Inst1p4->TabIndex = 115;
				 // 
				 //InstFp3
				 // 
				 this->InstFp3->Location = System::Drawing::Point(6, 137);
				 this->InstFp3->Name = L"InstFp3";
				 this->InstFp3->ReadOnly = true;
				 this->InstFp3->Size = System::Drawing::Size(100, 20);
				 this->InstFp3->TabIndex = 114;
				 // 
				 //Inst0p3
				 // 
				 this->Inst0p3->Location = System::Drawing::Point(130, 137);
				 this->Inst0p3->Name = L"Inst0p3";
				 this->Inst0p3->ReadOnly = true;
				 this->Inst0p3->Size = System::Drawing::Size(100, 20);
				 this->Inst0p3->TabIndex = 113;
				 // 
				 //Inst2p3
				 // 
				 this->Inst2p3->Location = System::Drawing::Point(378, 137);
				 this->Inst2p3->Name = L"Inst2p3";
				 this->Inst2p3->ReadOnly = true;
				 this->Inst2p3->Size = System::Drawing::Size(100, 20);
				 this->Inst2p3->TabIndex = 112;
				 // 
				 //Inst3p3
				 // 
				 this->Inst3p3->Location = System::Drawing::Point(502, 137);
				 this->Inst3p3->Name = L"Inst3p3";
				 this->Inst3p3->ReadOnly = true;
				 this->Inst3p3->Size = System::Drawing::Size(100, 20);
				 this->Inst3p3->TabIndex = 111;
				 // 
				 //Inst1p3
				 // 
				 this->Inst1p3->Location = System::Drawing::Point(254, 137);
				 this->Inst1p3->Name = L"Inst1p3";
				 this->Inst1p3->ReadOnly = true;
				 this->Inst1p3->Size = System::Drawing::Size(100, 20);
				 this->Inst1p3->TabIndex = 110;
				 // 
				 //InstFp2
				 // 
				 this->InstFp2->Location = System::Drawing::Point(6, 97);
				 this->InstFp2->Name = L"InstFp2";
				 this->InstFp2->ReadOnly = true;
				 this->InstFp2->Size = System::Drawing::Size(100, 20);
				 this->InstFp2->TabIndex = 109;
				 // 
				 //Inst0p2
				 // 
				 this->Inst0p2->Location = System::Drawing::Point(130, 97);
				 this->Inst0p2->Name = L"Inst0p2";
				 this->Inst0p2->ReadOnly = true;
				 this->Inst0p2->Size = System::Drawing::Size(100, 20);
				 this->Inst0p2->TabIndex = 108;
				 // 
				 //Inst2p2
				 // 
				 this->Inst2p2->Location = System::Drawing::Point(378, 97);
				 this->Inst2p2->Name = L"Inst2p2";
				 this->Inst2p2->ReadOnly = true;
				 this->Inst2p2->Size = System::Drawing::Size(100, 20);
				 this->Inst2p2->TabIndex = 107;
				 // 
				 //Inst3p2
				 // 
				 this->Inst3p2->Location = System::Drawing::Point(502, 97);
				 this->Inst3p2->Name = L"Inst3p2";
				 this->Inst3p2->ReadOnly = true;
				 this->Inst3p2->Size = System::Drawing::Size(100, 20);
				 this->Inst3p2->TabIndex = 106;
				 // 
				 //Inst1p2
				 // 
				 this->Inst1p2->Location = System::Drawing::Point(254, 97);
				 this->Inst1p2->Name = L"Inst1p2";
				 this->Inst1p2->ReadOnly = true;
				 this->Inst1p2->Size = System::Drawing::Size(100, 20);
				 this->Inst1p2->TabIndex = 105;
				 // 
				 //InstFp1
				 // 
				 this->InstFp1->Location = System::Drawing::Point(6, 57);
				 this->InstFp1->Name = L"InstFp1";
				 this->InstFp1->ReadOnly = true;
				 this->InstFp1->Size = System::Drawing::Size(100, 20);
				 this->InstFp1->TabIndex = 104;
				 // 
				 //Inst0p1
				 // 
				 this->Inst0p1->Location = System::Drawing::Point(130, 57);
				 this->Inst0p1->Name = L"Inst0p1";
				 this->Inst0p1->ReadOnly = true;
				 this->Inst0p1->Size = System::Drawing::Size(100, 20);
				 this->Inst0p1->TabIndex = 103;
				 // 
				 //Inst2p1
				 // 
				 this->Inst2p1->Location = System::Drawing::Point(378, 57);
				 this->Inst2p1->Name = L"Inst2p1";
				 this->Inst2p1->ReadOnly = true;
				 this->Inst2p1->Size = System::Drawing::Size(100, 20);
				 this->Inst2p1->TabIndex = 92;
				 // 
				 //Inst3p1
				 // 
				 this->Inst3p1->Location = System::Drawing::Point(502, 57);
				 this->Inst3p1->Name = L"Inst3p1";
				 this->Inst3p1->ReadOnly = true;
				 this->Inst3p1->Size = System::Drawing::Size(100, 20);
				 this->Inst3p1->TabIndex = 91;
				 // 
				 //Inst1p1
				 // 
				 this->Inst1p1->Location = System::Drawing::Point(254, 57);
				 this->Inst1p1->Name = L"Inst1p1";
				 this->Inst1p1->ReadOnly = true;
				 this->Inst1p1->Size = System::Drawing::Size(100, 20);
				 this->Inst1p1->TabIndex = 90;
				 // 
				 // sourceFile
				 // 
				 this->sourceFile->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Simulator::sourceFile_FileOk);
				 // 
				 // isaFile
				 // 
				 this->isaFile->FileName = L"openFileDialog1";
				 this->isaFile->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Simulator::isaFile_FileOk);
				 // 
				 // groupBox1
				 // 
				 this->groupBox1->Controls->Add(this->BoxH3);
				 this->groupBox1->Controls->Add(this->BoxH2);
				 this->groupBox1->Controls->Add(this->BoxH1);
				 this->groupBox1->Controls->Add(this->LabelH3);
				 this->groupBox1->Controls->Add(this->LabelH2);
				 this->groupBox1->Controls->Add(this->LabelH1);
				 this->groupBox1->Location = System::Drawing::Point(634, 576);
				 this->groupBox1->Name = L"groupBox1";
				 this->groupBox1->Size = System::Drawing::Size(619, 162);
				 this->groupBox1->TabIndex = 91;
				 this->groupBox1->TabStop = false;
				 this->groupBox1->Text = L"Hazards\?\?!!";
				 // 
				 // BoxH3
				 // 
				 this->BoxH3->Location = System::Drawing::Point(115, 123);
				 this->BoxH3->Name = L"BoxH3";
				 this->BoxH3->Size = System::Drawing::Size(486, 39);
				 this->BoxH3->TabIndex = 5;
				 this->BoxH3->Text = L"";
				 // 
				 // BoxH2
				 // 
				 this->BoxH2->Location = System::Drawing::Point(114, 73);
				 this->BoxH2->Name = L"BoxH2";
				 this->BoxH2->Size = System::Drawing::Size(487, 43);
				 this->BoxH2->TabIndex = 4;
				 this->BoxH2->Text = L"";
				 // 
				 // BoxH1
				 // 
				 this->BoxH1->Location = System::Drawing::Point(114, 19);
				 this->BoxH1->Name = L"BoxH1";
				 this->BoxH1->Size = System::Drawing::Size(487, 43);
				 this->BoxH1->TabIndex = 3;
				 this->BoxH1->Text = L"";
				 // 
				 //LabelH3 
				 // 
				 this->LabelH3->AutoSize = true;
				 this->LabelH3->Location = System::Drawing::Point(7, 131);
				 this->LabelH3->Name = L"H3Label";
				 this->LabelH3->Size = System::Drawing::Size(99, 13);
				 this->LabelH3->TabIndex = 2;
				 this->LabelH3->Text = L"Hazard 3 Message:";
				 // 
				 //LabelH2 
				 // 
				 this->LabelH2->AutoSize = true;
				 this->LabelH2->Location = System::Drawing::Point(9, 83);
				 this->LabelH2->Name = L"H2Label";
				 this->LabelH2->Size = System::Drawing::Size(99, 13);
				 this->LabelH2->TabIndex = 1;
				 this->LabelH2->Text = L"Hazard 2 Message:";
				 // 
				 //LabelH1 
				 // 
				 this->LabelH1->AutoSize = true;
				 this->LabelH1->Location = System::Drawing::Point(9, 30);
				 this->LabelH1->Name = L"H1Label";
				 this->LabelH1->Size = System::Drawing::Size(99, 13);
				 this->LabelH1->TabIndex = 0;
				 this->LabelH1->Text = L"Hazard 1 Message:";
				 // 
				 // Simulator
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(1284, 741);
				 this->Controls->Add(this->groupBox1);
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
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->AssemblySource);
				 this->Controls->Add(this->RegexBrowse);
				 this->Controls->Add(this->CodeBrowse);
				 this->Controls->Add(this->ParsingResults);
				 this->Controls->Add(this->LoadSourceCodeButton);
				 this->Controls->Add(this->ParsingLabel);
				 this->Controls->Add(this->isaTextBox);
				 this->Controls->Add(this->sourceTextBox);
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
				 this->groupBox1->ResumeLayout(false);
				 this->groupBox1->PerformLayout();
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
		try {
			AssemblySource->Clear();
			ParsingResults->Clear();
			char* argsToPass[4];
			argsToPass[0] = new char[1000];
			strcpy(argsToPass[0], "handler");
			argsToPass[1] = new char[1000];
			strcpy(argsToPass[1], "-verify");
			argsToPass[2] = new char[1000];
			strcpy(argsToPass[2], marshal_as<std::string>(isaTextBox->Text).c_str());
			argsToPass[3] = new char[1000];
			strcpy(argsToPass[3], marshal_as<std::string>(sourceTextBox->Text).c_str());
			//cout << argsToPass[0] << " " << argsToPass[1] << " " << argsToPass[2] << " " << argsToPass[3] << endl;
			//system("pause");
			fileHandler(4, argsToPass, inst_memory, AssemblySource, ParsingResults);
			argsToPass[1] = "-parse";
			fileHandler(4, argsToPass, inst_memory, AssemblySource, ParsingResults);
			//system("pause");
		}
		___CATCH_IN_FORM()
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
	private: System::Void CodeBrowse_Click(System::Object^  sender, System::EventArgs^  e) {
		sourceFile->ShowDialog();
	}
	private: System::Void RegexBrowse_Click(System::Object^  sender, System::EventArgs^  e) {
		isaFile->ShowDialog();
	}
	private: System::Void sourceFile_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		sourceTextBox->Text = sourceFile->FileName;
	}
	private: System::Void isaFile_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
		isaTextBox->Text = isaFile->FileName;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		resetTheSimEnv();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		decode();
		execute();
		memory();
		writeBack();
		_GUI_updateRegisterFile();
		_GUI_updateDataMemory();
		_GUI_updateFourBoxes();
		_GUI_updateStack();
		_GUI_updateHazardMsgs();
		time++;
		if (time > 10)
			time -= 10;
		fetch();
		_GUI_updatePC();
		_GUI_updateFetchBox();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (base_choice->SelectedIndex == 0)
			base = 10;
		else if (base_choice->SelectedIndex == 1)
			base = 16;
		else
			____THROW_IN_FORM(invalid_argument("Invalid base: Only decimal and hexadecimal are supported");)
	}
	private: System::Void label3_Click_2(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label4_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
