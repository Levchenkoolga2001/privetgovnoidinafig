#include <iostream> //для оператора cout
#include <string> //для использования букв
#include <cctype>  //для функции tolower
using namespace std; //пространство имен std

void countLetters(string inp, int &a, int &e, int &i, int &o, int &u){  //создаю функцию с void
	
	for (int c = 0; c < inp.size();c++){  //inp.size()-функция, возвращающая количество знаков в массиве (строчке)
		inp.at(c) = tolower(inp.at(c));  //функция tolower делает из больших букв маленькие 
                                         //и записываю это преобразование в тот же массив (at.(c)-обращение по индексу)
		switch(inp.at(c)){  //ищу совпадения с гласной и перезаписываю в соответственную переменную
			case 'a': ++a; break;
			case 'e': ++e; break;
			case 'i': ++i; break;
			case 'o': ++o; break;
			case 'u': ++u; break;
		}
	}
	
    //cout <<"a=" << a << " " <<"e=" << e << " " <<"i=" << i << " " <<"o=" << o << " " <<"u=" << u << " " << endl; 
    // вывожу переменные, в которые я записала результаты
}

int main(){  //главная функция
	string inp; //создаем массив для строчки с буквами
	int a=0, e=0, i=0, o=0, u=0;  //создаю переменные, куда буду записывать количество аналогичных букв

    inp="Levchenko olga";
	countLetters(inp, a,e,i,o,u);  //вызываю функцию
     if ((a==1)&&(e==2)&&(i==0)&&(o==2)&&(u==0)){
        cout<<"correctly"<<endl;
    }
    else{
        cout<<"uncorrectly"<<endl;
    }


    a=0, e=0, i=0, o=0, u=0; 
	inp="" ;
    countLetters(inp, a,e,i,o,u);  
    if (inp==""){
        cout<<"correctly"<<endl;
    }
    else{
        cout<<"uncorrectly"<<endl;
    }

    a=0, e=0, i=0, o=0, u=0; 
    inp="artem utkin" ;
    countLetters(inp, a,e,i,o,u); 
    if ((a==1)&&(e==1)&&(i==1)&&(o==0)&&(u==1)){
        cout<<"correctly"<<endl;
    }
    else{
        cout<<"uncorrectly"<<endl;
    }
	 // вывожу переменные, в которые я записала результаты
	return 0; 
}