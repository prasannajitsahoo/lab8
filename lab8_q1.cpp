#include<iostream>
using namespace std;
int main(){
     int array[10],n,i,sum = 0;
      cout<<"Enter the size of array :";
      cin>>n;
      cout<<"Enter the elements of array :";
     for(i=0;i<n;i++)
      {
      cin>>array[i];
       }
     for(i=0;i<n;i++)
       { 
      sum += array[i];
   
       }
    cout<<"sum of array elements :"<<sum<<endl;
return 0;
}
