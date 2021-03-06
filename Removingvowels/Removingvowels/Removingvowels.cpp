/* 
Jeremy Harrell
ITSE 1307
Programming Problem removing vowels
Programming to get rid of vowels
Making a program to get rid of vowels 

*/


#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


void removeVowels(string& s);
bool boolIsVowel(char v);

int main()
{
	//Setting up inputs
	string strInput;
	char chrIsRunning = 'y';
	cout << "Enter input: " << endl;

	//while loop so you can input and put either Y or N to either keep going or to stop 
	while (chrIsRunning != 'n')
	{
		cout << "Input: ";
		cin >> strInput;
		removeVowels(strInput);
		cout << "\nYour new string is: " << strInput << endl;
		cout << "Would you like to go again? <y/n>: ";
		cin >> chrIsRunning;
		cout << endl;
	}
}

void removeVowels(string& s)
{
	//Setting up to remove the vowels 
	string tempStr = "";
	int substrLength = 0;
	int stringStart = 0;
	bool startSet = false;
	for (int i = 0; i < s.length(); i++)
	{
		if (!boolIsVowel(s[i]))
		{
			substrLength++;
			if (!startSet)
			{
				stringStart = i;
				startSet = true;
			}
		}
		else
		{
			tempStr += s.substr(stringStart, substrLength);
			substrLength = 0;
			stringStart = 0;
			startSet = false;
		}
	}
	s = tempStr;
}

bool boolIsVowel(char v)
{
	//using if statements to determine values for each vowel 
	if (v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u' || v== 'y' || v == 'A' || v == 'E' || v == 'I' || v == 'O' || v == 'U' || v == 'Y')
	{
		return true;
	}
	else
	{
		return false;
	}

}