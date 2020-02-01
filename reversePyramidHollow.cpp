#include <iostream>
using namespace std;

int main() {
	/*
	INPUT :     5
	
	OUTPUT :   
	              * * * * * * * * * 
                  *           * 
                    *       * 
                      *   * 
                        *
    */
    int  n;
    cin >> n;

    for(int i = n; i >= 1; i--)
    {
        for(int j = n-i; j >= 1; j--)
            cout<<"  ";
        
        for(int j=0;j != 2 * i-1;j++)
            if(i==n || i==1 || j==0 || j==(2*i-2))
                cout << "* ";
            else 
                cout<<"  ";
        
        cout << endl;
    }

    return 0;
}
