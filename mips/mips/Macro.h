#pragma once

#define ___updateStackField(___StackField)\
			if (stack_size > ___StackField)\
				{\
					Stack##___StackField ->Text = gcnew System::String(fromContentToString(stack[##___StackField]).c_str());\
				}\
			else\
				{\
					Stack##___StackField ->Text = gcnew System::String("--------");\
				}

/*#define ___stackCounter 4

#define ___updateStackFieldLoop\
\#if ___stackCounter > 0\
___updateStackField(___stackCounter)\
\#define ___stackCounter (___stackCounter - 1)\
___updateStackFieldLoop\
\#endif*/

#define ____THROW_IN_FORM(___REST_OF_LINE)\
	try {\
___REST_OF_LINE\
	}\
	catch (exception& ex)\
	{\
		string msg = ex.what();\
		ParsingResults->AppendText(gcnew String(msg.c_str()));\
		ParsingResults->AppendText("\n");\
	}\
	catch (...)\
	{\
		ParsingResults->AppendText("Unhandled Exception");\
	}

#define ___CATCH_IN_FORM()\
catch (exception& ex)\
{\
string msg = ex.what(); \
String^ temp = gcnew String(msg.c_str());\
ParsingResults->AppendText(temp); \
ParsingResults->AppendText("\n Now resetting the environment\n"); \
resetTheSimEnv();\
}\
catch (...)\
{\
ParsingResults->AppendText("Unhandled Exception"); \
ParsingResults->AppendText("\n Now resetting the environment\n"); \
resetTheSimEnv();\
}

#define ___print_Inst_TextBox(___TIME_ID)\
Inst0p##___TIME_ID ->Text = gcnew String(pipeline[0]->instString.c_str());\
Inst1p##___TIME_ID ->Text = gcnew String(pipeline[1]->instString.c_str());\
Inst2p##___TIME_ID ->Text = gcnew String(pipeline[2]->instString.c_str());\
Inst3p##___TIME_ID ->Text = gcnew String(pipeline[3]->instString.c_str());

#define ___printFetchBox(___TIME_ID)\
InstFp##___TIME_ID ->Text = gcnew String(inst_memory[PC]->instString.c_str());

#define ___resetAllPipeline(___TIME_ID)\
Inst0p##___TIME_ID ->Text = gcnew String("");\
Inst1p##___TIME_ID ->Text = gcnew String("");\
Inst2p##___TIME_ID ->Text = gcnew String("");\
Inst3p##___TIME_ID ->Text = gcnew String("");\
InstFp##___TIME_ID ->Text = gcnew String("");


#define ___HAZARD_DISPLAY(___HAZARD_MSG_ID)\
if(!hazard_msgs[##___HAZARD_MSG_ID - 1].empty())\
{\
BoxH##___HAZARD_MSG_ID ->Visible = true;\
BoxH##___HAZARD_MSG_ID ->Visible = true;\
BoxH##___HAZARD_MSG_ID ->Text = gcnew String(hazard_msgs[##___HAZARD_MSG_ID - 1].c_str());\
}\
else\
{\
BoxH##___HAZARD_MSG_ID ->Visible = false;\
BoxH##___HAZARD_MSG_ID ->Visible = false;\
BoxH##___HAZARD_MSG_ID ->Text = "";\
}