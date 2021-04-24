#include <vector>	// vector ops
#include <string>	// needed for string ops
#include <iostream>	// needed for cout and cin

#include "readWord.h"
#include "displayWords.h"

using namespace std;
//using std::cout; using std::cin; using std::endl;

int main() {

	vector<words_count> wordList;
	readWord (wordList);
	displayWords (wordList);
	cout  << "Number of unique words = " << wordList.size() << endl;
	return 0;
}

