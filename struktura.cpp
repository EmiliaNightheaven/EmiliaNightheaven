#include <iostream>

using namespace std;

//Вкладывание структуры в структуру
struct Date{
	int year;
};
//Создание структуры. Структура позволяет создавать определённые характеристики для каких-либо групп без создания дополнительных переменных
//Структура должна идти перед функцией main
struct Auto {
int wheels;
float speed;
char color[500];
Date sozdanie;	
};


main()
{	
	Auto shkoda;										//Позволяет взаимодействовать со структурой. СОздание объекта shkoda 
	cout << "Vvedite tsvet mashinu - ";								
	gets(shkoda.color);
	shkoda.wheels	=	4;
	shkoda.speed = 313.4;								//Теперь можно использовать все поля, которые мы используем в структуре
	shkoda.sozdanie.year = 1998;
		
	cout <<"Tsvet mashini - "<<shkoda.color<<endl;
	cout <<"Kolichestvo koles - "<<shkoda.wheels<<endl;
	cout <<"Skorost' - "<<shkoda.speed<<endl;
	cout << "God sozdaniya = " << shkoda.sozdanie.year<<endl;
	
	//Теперь можно использовать все поля, которые мы используем в структуре
	Auto audi = {4, 300.22, 'b'};								
	
	cout <<"Tsvet mashini - "<<audi.color<<endl;
	cout <<"Kolichestvo koles - "<<audi.wheels<<endl;
	cout <<"Skorost' - "<<audi.speed<<endl;
}
