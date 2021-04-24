#ifndef READ_WORD
#define READ_WORD
#include <iostream>
#include <string>
#include <vector>

struct	words_count{
	std::string word;
	int count;
};


int readWord(std::vector<words_count>& );

#endif
