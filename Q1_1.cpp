#include <iostream>
#include <string.h>
using namespace std;

bool Q1_1(string str)
{
	for(int i=0; i<str.length(); i++)
	{
		if(str.find(str[i]) != i)
			return false;
	}
 
	return true;
}

int main() {
  cout << Q1_1("abced") << endl;
	return 0;
}
