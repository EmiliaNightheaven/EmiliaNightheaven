#include <iostream>

using namespace std;

main()
{
	int a,b;
	cout << "Vvedite a " ;
    
    cin >> a;
     
    cout << "Vvedite b " ;
      
    cin >> b;

    
    try
	{						 				 	 //Попытка произведения операции
    	if (b==0)								  // Если b равно нулю, то в переменную ш записывается число 123
    		throw 123;           				  //Вывод ошибки. Насколько понял, тут пере 
    	cout << a/b << endl;						//Если нет, то производится обычное деление 
	} 
	catch (int i) 									//если условие верно, то выполняется условие, прописываемое в catch
	{
		cout << "Vivod chisla " <<	i	<< endl;
	} 
}
