#include <iostream>

using namespace std;

//Дано целое число n. Выведите следующее за ним четное число. При решении этой задачи нельзя использовать условную инструкцию if и циклы.
main()
{
	int a,c;					// с - переменная для остатка деления на 2	
	cout << "Vvedite chislo ";
	cin >> a;
	a +=2;						// Если число нечётное, то увеличив число на два и вычтя остаток от деления, мы получим следующее чётное число, если число чётное, то вычтя остаток от деления на 2 из чётного числа, мы получим результат
	c=a%2;
	a -=c;						// += работает и с переменными

	
	
	cout << "Otvet - "<< a << endl;
}
