#include <iostream>
using namespace std;

int main() {
	/*
	INPUT :     5
	
	OUTPUT :       
                    1   
                  1   2   
                1       3   
              1           4   
            1   2   3   4   5
    */
    int  n;
    cin >> n;
    int count=1;
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n-i; j++)
            cout<<"  ";
        
        for(int j=0;j !=i;j++)
        {    
            if(i==1 || i==n || j==0 || j==i-1)
            {
                cout << count<<"   ";
         
            }
            else 
                cout<<"    ";
                
            count++;
        }
        count=1;
        cout << endl;
    }

    return 0;
}
