#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int count=0;
       for(int i=1;i<=n;i++)
   {
       if(i%2!=0)
       {   for(int j=1;j<=i;j++)
           {
            count++;
           if(j<i)
               cout<<count<<"*";
           else
               cout<<count;
           }   
       }
       else
       {
           count=count+i;
           for(int j=1;j<=i;j++)
           {
            
           if(j<i)
               cout<<count<<"*";
           else
               cout<<count;
            count--;   
           }   
           count=count+i;
       }
       cout<<endl;
   }
   

	return 0;
}
