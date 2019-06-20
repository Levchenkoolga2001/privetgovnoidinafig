#include <iostream> //для оператора cout
#include <string> //для использования букв
#include <cctype>  //для функции tolower
using namespace std; //пространство имен std

void countLetters(string inp){  //создаю функцию с void
	int a=0, e=0, i=0, o=0, u=0;  //создаю переменные, куда буду записывать количество аналогичных букв
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
    cout <<"a=" << a << " " <<"e=" << e << " " <<"i=" << i << " " <<"o=" << o << " " <<"u=" << u << " " << endl; 
    // вывожу переменные, в которые я записала результаты
}

int main(){  //главная функция
	string inp; //создаем массив для строчки с буквами
	getline(cin, inp);  //читаю всю строчку с буквами
	countLetters(inp);  //вызываю функцию
	return 0; 
}