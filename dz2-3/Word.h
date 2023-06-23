#pragma once
#include <iostream>
#include <string>
using namespace std;


class Word
{

public:
	string text;
	int length;
	int consonants;


	int vowels();
	Word();
	Word(string t);
	~Word();
};

