#include <iostream>
#include <string.h>
using namespace std;

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
