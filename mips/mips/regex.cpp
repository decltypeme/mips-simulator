#include<iostream>
#include<regex>
#include<string>
#include<vector>
#include<fstream>
#include<stdexcept>


using namespace std;


void readFromFileIntoVector(vector<string>& vectorToPush, string fileName, char delimeter)
{
	ifstream ss(fileName);
	if (ss.fail())
		throw invalid_argument("File failed to open");
	while (!ss.eof())
	{
		string temp;
		getline(ss, temp, delimeter);
		vectorToPush.push_back(temp);
	}
	ss.close();
}

void readFromFileIntoPairVector(vector<pair<string, string>>& vectorToPush, string fileName, char delimeter)
{
	ifstream ss(fileName);
	if (ss.fail())
		throw invalid_argument("File failed to open");
	while (!ss.eof())
	{
		string temp, s1, s2;
		ss >> s1 >> s2;
		getline(ss, temp, delimeter);
		vectorToPush.push_back(make_pair(s1, s2));
	}
	ss.close();
}

bool verifyLines(const vector<string>& ruleStrings, const vector<string> lines, vector<int>& errorLines)
{
	bool toReturn = true;
	vector<regex> rules;
	for (auto& ruleString : ruleStrings)
	{
		rules.push_back(regex(ruleString));
	}
	for (int ii = 1; ii <= int(lines.size()); ii++)
	{
		const string& line = lines[ii-1];
		bool isValid = false;
		for (auto& rule : rules)
		{
			if (regex_match(line, rule))
			{
				isValid = true;
				break;
			}
		}
		if (!isValid) {
			toReturn = false;
			errorLines.push_back(ii);
		}
		
	}
	return toReturn;
}


int main(int argc, char** argv)
{
	if (argc == 4)
	{
		if (string(argv[1]) == string("-verify"))
		{
			try
			{
				vector<string> linesToVerify;
				vector<string> rules;
				vector<int> errorLines;
				readFromFileIntoVector(linesToVerify, argv[3], '\n');
				readFromFileIntoVector(rules, argv[2], '#');
				if (verifyLines(rules, linesToVerify, errorLines))
				{
					cout << "The file is syntactically correct" << endl;
				}
				else
				{
					for (auto& no : errorLines)
					{
						cerr << "Syntax error: Cannot parse line " << no << endl;
					}
				}

			}
			catch (exception& ex)
			{
				cerr << "A fatal exception has occured .... Now exiting: " << ex.what() << endl;
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			cerr << "Invalid use of " << argv[1] << ": Valid options are \n -replace replaceRuleFile sourceFile outputFile \n -verify regexFile fileToVerify";
			exit(EXIT_FAILURE);
		}

	}
	else if (argc == 5)
	{
		if (string(argv[1]) == string("-replace"))
		{
			try {
				vector<string> linesToReplace;
				vector<pair<string, string>> replaceRules;
				readFromFileIntoVector(linesToReplace, argv[3], '\n');
				readFromFileIntoPairVector(replaceRules, argv[2], '\n');
				ofstream outs(string(argv[4]).c_str());
				for (auto& line : linesToReplace)
				{
					for (auto rule : replaceRules)
					{
						int ii;
						while ((ii = line.find(rule.first)) != string::npos)
						{
							line.replace(ii, rule.first.length(), rule.second);
						}
					}
					outs << line << "\n";
				}
				outs.close();
			}
			catch (exception& ex)
			{
				cerr << "A fatal exception has occured .... Now exiting: " << ex.what() << endl;
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			cerr << "Invalid use of " << argv[0] << ": Valid options are \n -replace replaceRuleFile sourceFile outputFile \n -verify regexFile fileToVerify";
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		cerr << "Invalid use of " << argv[0] << ": Valid options are \n -replace replaceRuleFile sourceFile outputFile \n -verify regexFile fileToVerify";
		exit(EXIT_FAILURE);
	}
	return EXIT_SUCCESS;
}