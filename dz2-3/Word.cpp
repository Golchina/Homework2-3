#include "Word.h"



int Word::vowels()
{
	int numgls = 0;
	string gls = "aeiouy";
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < gls.length(); j++)
		{
			if (text[i] == gls[j])
			{
				numgls++;
			}
		}
	}
	consonants = length - numgls;
	return numgls;
}

Word::Word()
{
}


Word::Word(string t)
{
	text = t;
	length = t.length();
	vowels();
}

Word::~Word()
{
}
