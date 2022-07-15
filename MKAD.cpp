#include <iostream>

using namespace std;

main()
{
	int MKAD = 109,v,t;
	
	cout << "Vvedite v " ;
    
    cin >> v;
     
    cout << "Vvedite t " ;
      
    cin >> t;
    
    
    MKAD = (MKAD + v*t)%MKAD; 
    cout << "Otmetka = " << MKAD << endl;
}
