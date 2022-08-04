#include <iostream>

using namespace std;

int main() 
{
//Ввод одного сивмола
char symvol = 'a';	

//Ввод строки, строка считается, как массив. При пустой размерности массива размер определяется самостоятельно											
char stroka[] = "Hello";

//Ввод строки с клавиатуры 
char klava[500];
cout <<"Vvedite stroku: ";
gets(klava);						//Адрес строки, в которую мы вписываем значение										
cout << "1 bukva - " <<symvol<<endl;
cout << stroka<<endl;
cout << klava<<endl;
return 0;
}