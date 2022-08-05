#include <iostream>

using namespace std;

//Создание перечисления. Создан только для чисел. Помогают понять код, хы 
enum mall{parking = -1,hall,many_shops,roof}; 


main()
{
	int floor;
	bool exit = false;				
	while(!exit){			//Пока переменаая fale ложная
		cout << "Enter your floor (floor -1 to 2)" <<endl;
		cin >>floor;
		/*switch — оператор, который сравнивает последовательно значение переменной, 
		находящейся в скобках со всеми вариантами значений, 
		находящимися после каждого ключевого слова case.
		
		Если со значением переменной не совпадет ни одно из значений, 
		выполнится код после необязательной инструкции default
		*/
		switch(floor){				
			case parking:
				cout <<"We are on -1 floor in the parking"<<endl;
				break;
			case hall:
				cout <<"We are on 0 floor in the hall"<<endl;
				break;
			case many_shops:
				cout <<"We are on 1 floor in the many_shops"<<endl;
				break;
			case roof:
				cout <<"We are on 2 floor in the roof"<<endl;
				break;
			default:
				cout <<"Floors only -1 to 2" <<endl;
				break;
			}
		cout <<"If you want to play again press 0 or press 1 to qiut the game" <<endl;
		cin >> exit;
	}
	return 0;
}
