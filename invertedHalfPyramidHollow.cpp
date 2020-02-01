#include <iostream>
using namespace std;

int main() {
	/*
	INPUT :     5
	
	OUTPUT :    
                *****
                *  *
                * *
                **
                *
	*/
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
	   for(int j=n;j>=i;j--)
    	   if(i==1 || i==n-1 | i==n || j==n || j==i)
    	        cout<<"*";
    	   else cout<<" ";
	   cout<<endl;
	}
	
	return 0;
}
