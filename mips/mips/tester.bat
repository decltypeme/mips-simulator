@echo off
.\coolRegex.exe -replace replaceRule.txt originalRegex.txt regexRule.txt
.\coolRegex.exe -verify regexRule.txt MIPS.txt
PAUSE