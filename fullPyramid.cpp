#include <iostream>
using namespace std;

int main() {
	/*
	INPUT :     5
	
	OUTPUT :            * 
                      * * * 
                    * * * * * 
                  * * * * * * * 
                * * * * * * * * *
    */
    int  n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n-i; j++)
            cout<<"  ";
        
        for(int k=0;k != 2 * i-1;k++)
            cout << "* ";
        
        cout << endl;
    }

    return 0;
}
