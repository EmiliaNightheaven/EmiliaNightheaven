#include <iostream>
#include <math.h>

using namespace std;

main()
{
	int a,b,c;			// a и b - катеты, c - гипотенуза
    cout << "Vvedite a " ;
    
    cin >> a;
     
    cout << "Vvedite b " ;
      
    cin >> b;
    
	c = sqrt(a*a+b*b);
	cout << "Gipotenuza = " << c;
    return 0;
}
