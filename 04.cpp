#include <iostream>
using namespace std;

int main() {
	/*
	INPUT :     5
	
	OUTPUT :    
                  1
                 121
                12321
               1234321
              123454321
             12345654321
	*/
	int n;
	cin>>n;
	

	for(int i=1;i<=n;i++)
	{
	   for(int j=n;j>=i;j--)
	        cout<<" ";
	   
	   
	   for(int j=1;j<=i;j++)
	        cout<<j;
	   
	   
       	   for(int j=i-1;j>0;j--)
    	       cout<<j;
    	      
       	    cout<<endl;
	}
	return 0;
}
