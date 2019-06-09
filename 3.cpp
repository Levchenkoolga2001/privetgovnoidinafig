#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main(){
	string inp;
	getline(cin, inp);
	for (int c = 0; c < inp.size();c++){
		char m = inp.at(c);
		if (m == 'A' || m == 'E' || m =='I' || m == 'O' || m == 'U')
			inp.at(c) = tolower(inp.at(c));
	}
	cout << inp << endl;
	return 0;
}
