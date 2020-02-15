#include <iostream>
using namespace std;

int fact(int num)
{
    int f=1,i=1;
    while(i<=num)
    {
        f=f*i;
        i++;
    }
    return f;
}

int main() {
	
	int n,i,j,count=0;
	cin>>n;
	
    
    for(i=0;i<n;i++)
    {
       
        for(j=0;j<n-1-i;j++)
            cout<<" ";
     
        for(j=0;j<=i;j++)
            cout<<fact(i)/(fact(j)*fact(i-j));
       
       cout<<endl;
       
    }
    

   
   

	return 0;
}
