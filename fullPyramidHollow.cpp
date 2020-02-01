#include <iostream>
using namespace std;

int main() {
	/*
	INPUT :     5
	
	OUTPUT :       
    	            * 
                  *   * 
                *       * 
              *           * 
            * * * * * * * * *
    */
    int  n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n-i; j++)
            cout<<"  ";
        
        for(int j=0;j != 2 * i-1;j++)
            if(i==1 || i==n || j==0 || j==2 * i-2)
                cout << "* ";
            else 
                cout<<"  ";
        
        cout << endl;
    }

    return 0;
}
