#include <iostream>
using namespace std;

int main() {
	/*
	INPUT :     3,5
	OUTPUT :    * * * * *
	            * * * * *
	            * * * * *
	
	*/
	int r,c;
	cin>>r>>c;
	
	for(int i=0;i<r;i++)
	{
	    for(int j=0;j<c;j++)
	        cout<<"* ";
	    cout<<endl;
	}
	return 0;
}
