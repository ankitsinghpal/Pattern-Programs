#include <iostream>
using namespace std;

int main() {
	
	int n,i,j,count1=0,count2,space=0;
	cin>>n;
	
    count2=n*n+1;
      for(i=n;i>=1;i--)
      {
        for(j=space;j>0;j--)
          cout<<" ";
        for(j=i;j>=1;j--)
            cout<<++count1<<"*";
        for(j=i;j>=1;j--)
        {  
               if(j>1)
               cout<<++count2<<"*";
               else
               cout<<++count2;
        } 
        
        count2=(count2-1)-2*(i-1);
        space=space+2;
        cout<<endl;
  }

	return 0;
}
