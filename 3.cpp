#include <iostream>//для оператора cout
#include <string>  //для использования букв
#include <cctype>  //для функции tolower
using namespace std;//пространство имен std

int main(){
	string inp;  //создаем массивad для строчки с буквами
	getline(cin, inp);   //читаю всю строчку с буквами
	for (int c = 0; c < inp.size();c++){  //inp.size()-функция, возвращающая количество знаков в массиве (строчке)
		char m = inp.at(c);  //создаю переменную, в которой буду проверять символы
		if (m == 'A' || m == 'E' || m =='I' || m == 'O' || m == 'U') //проверяю символы на наличие гласных заглавных
			inp.at(c) = tolower(inp.at(c));  //делаю гласные заглавные маленькими
	}
	cout << inp << endl;  //вывожу строчку
	return 0;
}
