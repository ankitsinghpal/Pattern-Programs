#include <iostream>
using namespace std;

int main() {
	/*
	INPUT :     5
	
	OUTPUT :
                    1 
                  2 3 2 
                3 4 5 4 3 
              4 5 6 7 6 5 4 
            5 6 7 8 9 8 7 6 5
    */
    int  n;
    cin >> n;
    int count=0,count1=0;
    
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n-i; j++)
        {    
            cout<<"  ";
            count++;
        }
        
        for(int j=0;j != 2 * i-1;j++)
        {
            if (count <= n-1)
            {
                cout<<i+j<<" ";
                ++count;
            }
            else
            {
                count1++;
                cout<<i+j-2*count1<<" "; 
            }
        }
        count=0;
        count1=0;
        cout << endl;
    }

    return 0;
}
