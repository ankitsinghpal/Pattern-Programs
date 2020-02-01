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
	
	int count=65;

	for(int i=1;i<=n;i++)
	{
	   for(int j=n;j>=i;j--)
	   {
	       cout<<" ";
	   }
	   
	   for(int j=1;j<i;j++)
	   {
	       cout<<(char)count;
	       count++;
	   }
	   
    	   for(int j=1;j<i;j++)
    	   {
    	       cout<<(char)count;
    	       count--;
    	      
    	   }
        cout<<"A";	  
	   count=65;
	   cout<<endl;
	}
	return 0;
}
