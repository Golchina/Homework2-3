#include <iostream>
#include <stdio.h>
#include "Word.h"
#include <string>
using namespace std;

int main()
{
	int num = 0;
	string test;
	cin >> test;
	while (test != "0")
	{
		Word* myWord = new Word(test);
		if (myWord->consonants > myWord->vowels())
		{
			num++;
		}
		cin >> test;
		myWord->~Word();
	}
	cout << num;
	system("pause");
	return 0;
}
