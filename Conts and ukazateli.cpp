#include <iostream>

using namespace std;

main()
{
	const float pi = 3.14;											// const - задаёт постоянное значение переменной
	cout << pi << endl;
	
	
	int value = 8;
	int &ref = value;												//	Организация прямого доступа к обьекту	 
	int *ptrvalue = &value;											// ptr - указатель. Помощь для организации динамических обьектов
	
	//cout <<"Chisclo ravno vos'mi- " << value<<endl;				// В этом случае выведется число, которое мы задали изначально
	//	cin >> value;
	cout << value << " - "<< ref<<endl; 											// в этом случае выводится число которое мы ввели  
}
