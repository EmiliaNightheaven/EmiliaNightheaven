#include <iostream>

using namespace std;

main()
{
//	int *ptrnum = new int(7); 				//Выделение памяти под динамический массив;
//	
//	
//	
//	
//	cout << *ptrnum <<endl;
//	
//	delete ptrnum;								//Освобождаем память. Если не прописать, то программа будет тормозить
int num;
cout << " Vvedite razmer massiva - ";
cin >> num;
float *ptrarray = new float[num];

for(int i=0; i<num; i++)
	{
		ptrarray[i] =  rand()%90 + 1;
		cout <<	i+1 <<	")" << ptrarray [i] <<endl;
	}
	
delete []	ptrarray;							// Освобождение памяти, выделенной под одномерный динамический массив
}
