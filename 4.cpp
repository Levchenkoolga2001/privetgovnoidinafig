#include <iostream>
#include <string>
using namespace std;
 
string Replace (string &s)
{
    int i=0;
    while(s[i])
    {        
        if (s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') s[i]+=32;        
        i++;
    } 
    return s;
}
 
int main()
{
    string s;
    cout << "String:\n";
    getline(cin, s);   
    
    cout << Replace(s) << "\n";
    
system("pause");
return 0;
}