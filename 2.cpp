#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

void countLetters(string inp){
	int a, e, i, o, u;
	a = 0;
	e = 0;
	i = 0;
	o = 0;
	u = 0;
	for (int c = 0; c < inp.size();c++){
		inp.at(c) = tolower(inp.at(c));
		switch(inp.at(c)){
			case 'a': ++a; break;
			case 'e': ++e; break;
			case 'i': ++i; break;
			case 'o': ++o; break;
			case 'u': ++u; break;
		}
	}
	cout << a << " " << e << " " << i << " " << o << " " << u << " " << endl;
}

int main(){
	string inp;
	getline(cin, inp);
	countLetters(inp);
	return 0;
}

