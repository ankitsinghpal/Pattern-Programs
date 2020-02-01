#include <iostream>
using namespace std;

int main() {
	/*
	INPUT :     5
	
	OUTPUT :    
	        1
                12
                123
                1234
                12345
	*/
	int n;
	cin>>n;
	
	int count=1;
	for(int i=1;i<=n;i++)
	{
	   for(int j=1;j<=i;j++)
	   {
	       cout<<count;
	       count++;
	   }
	   count=1;
	   cout<<endl;
	}
	return 0;
}
