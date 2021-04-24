all: readWord displayWords main


main: main.cpp readWord.o displayWords.o 
	g++ -Wall  -g main.cpp -o  words displayWords.o readWord.o 

displayWords: displayWords.cpp displayWords.h
	g++ -c displayWords.cpp -o displayWords.o


readWord: readWord.cpp readWord.h
	g++ -c readWord.cpp -o readWord.o


clean:
	rm -f *.o
	rm -f grades2
