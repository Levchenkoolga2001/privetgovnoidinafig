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
    s="OLGA LEVCHENKO" ;
    Replace(s);
    if (s=="oLGa LeVCHeNKo"){
        cout<<"correctly"<<endl;
    }
    else{
        cout<<"uncorectly"<<endl;
    }

    s="" ;
    Replace(s);
    if (s==""){
        cout<<"correctly"<<endl;
    }
    else{
        cout<<"uncorectly"<<endl;
    }

    s="ARTEM UTKIN" ;
    Replace(s);
    if (s=="aRTeM uTKiN"){
        cout<<"correctly"<<endl;
    }
    else{
        cout<<"uncorectly"<<endl;
    }


    
system("pause");
return 0;
}