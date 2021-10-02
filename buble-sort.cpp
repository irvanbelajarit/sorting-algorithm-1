#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp,pass=0;
   int a[8] =  {3,8,2,1,5,4,6,7}; 
   cout <<"Input list ...\n";
   for(i = 0; i<8; i++) {
      cout <<a[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<8; i++) {
   for(j = i+1; j<8; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
pass++;
}
cout <<"Sorted Element List ...\n";
for(i = 0; i<8; i++) {
   cout <<a[i]<<"\t";
}
cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;
return 0;
}
