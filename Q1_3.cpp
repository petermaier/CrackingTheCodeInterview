#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

bool Q1_3(string s1, string s2)
{
	if(s1.length() != s2.length())
		return false;
	
	string s3(s1);
	string s4(s2);
	sort(s3.begin(), s3.end());
	sort(s4.begin(), s4.end());
	
	for(int i=0; i<s1.length(); i++)
	{
		if(s3[i] != s4[i])
			return false;
	}
	
	return true;
}

int main() {
	cout << Q1_3("abcb", "bcab") << Q1_3("abc", "bce") <<  Q1_3("abcb", "bca")<< Q1_3("apple", "papel") << Q1_3("abcb", "bcaa") << endl;
	return 0;
}
