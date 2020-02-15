#include <iostream>
using namespace std;

int main() {
	/*
	INPUT :     6
	
	OUTPUT :    
                  A
                 ABA
                ABCBA
               ABCDCBA
              ABCDEDCBA
             ABCDEFEDCBA
	*/
	int n;
	cin>>n;
	
	for(int i=65;i<=65+n;i++)
	{
	    for(int j=65+n;j>=i;j--)	       
		    cout<<" ";
	   
	    for(int j=65;j<=i;j++)
	            cout<<(char)j;
			
	    for(int j=i-1;j>64;j--)
		    cout<<(char)j;
		
	    cout<<endl;
	}
	return 0;
}
