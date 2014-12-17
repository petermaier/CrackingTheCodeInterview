#include <iostream>
#include <string.h>
using namespace std;

/* 1.2 Implement a function void reverse(char* str) in C or C++ which reverses a nullterminated
string. */
void Q1_2(char *str)
{
	const size_t len = strlen(str);
	for(size_t i=0; i<len/2; i++)
	{
		swap(str[i], str[len-i-1]);
	}
}

int main() {
	char rev[7] = "abcade";
	Q1_2(rev);
  cout << rev << endl;
	return 0;
}
