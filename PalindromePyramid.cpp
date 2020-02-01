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
	
	int count=1;
	cout<<"1\n";
	for(int i=1;i<n;i++)
	{
	     
	   for(int j=1;j<=i;j++)
	   {
	       cout<<count;
	       count++;
	   }
	   if(count>1)
    	   for(int j=1;j<=i;j++)
    	   {
    	       cout<<count;
    	       count--;
    	       if(count==0)
    	        break;
    	   }
        cout<<"1";	  
	   count=1;
	   cout<<endl;
	}
	return 0;
}
