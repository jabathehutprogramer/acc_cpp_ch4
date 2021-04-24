#include <string>
#include <iostream>
#include "displayWords.h"
#include <iomanip>

using std::cin; using std::cout;
using std::vector; using std::string; using std::endl;
using std::setw;

int displayWords(vector<words_count>& wordList) {

	string word;

	for (vector<words_count>::size_type i= 0;
		i != wordList.size(); ++i)
	{
		cout<< setw(12) << wordList[i].word << setw(5) << wordList[i].count << endl;		
	}
}

bool  word_already_entered(vector<words_count>& wordList, string word) {

	// if word already in entered increment its count
	// else return False so that it can be push_back into vector.

        for (vector<words_count>::size_type i= 0;
                i != wordList.size(); ++i)
        {

		if (wordList[i].word ==word)  {
			(wordList[i].count)++;
			 cout << "word already in" << endl;
			return true;
		} 
        } 
			return false;


}

