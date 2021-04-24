#include <string>
#include <iostream>
#include "readWord.h"
#include "displayWords.h"

using std::cin; using std::cout;
using std::vector; using std::string;  using std::endl;

int readWord(vector<words_count>& wordList) {

	string word;
	cout<< "Enter words. Enter . when done" << endl;

	words_count local_struct;	// declare local structure
	while (cin >> word) {
		if (word == ".")  {
			break;
		}else if (word_already_entered(wordList, word)== false) {
			// if already entered, increment the count
		local_struct.word = word;
		local_struct.count = 1;
		
		wordList.push_back(local_struct);
		}


		//wordList.push_back(local_struct);
	}

}


