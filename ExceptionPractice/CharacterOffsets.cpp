// Charles Schneider
// CIS 1202 N01
// December 4th, 2024

#include <iostream>
#include <cstring>

using namespace std;

//function prototypes
char character(char, int);

int main() {


	return 0;
}

char character(char start, int offset) {
	if (isalpha(start) && isalpha(char(start + offset))) {
		return (char(start + offset));
	}
	else if (!isalpha(start)) {
		string invalidCharacterException = "Input was not a character.\n";
		throw invalidCharacterException;
	}
	else if (!isalpha(char(start + offset))) {
		string invalidRangeException = "Offset is too great";
		throw invalidRangeException;
	}
}