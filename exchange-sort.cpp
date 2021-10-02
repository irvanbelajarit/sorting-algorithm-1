
#include<iostream>
using namespace std;

int main(void)
{
		// An array of integers.
	int length = 8;		// Lenght of the array.
	int i, j;
	int temp;

        //Some input
  int myarray[8] = {3,8,2,1,5,4,6,7};  
    int pos,pass=0;  
    cout<<"\n Input list of elements to be Sorted\n";  
    for(int i=0;i<8;i++)  
    {  
        cout<<myarray[i]<<"\t";  
    } 

	//Algorithm
	for(i = 0; i < (length -1); i++)
	{
		for (j=(i + 1); j < length; j++)
		{
			if (myarray[i] > myarray[j])
			{
				temp = myarray[i];
				myarray[i] = myarray[j];
				myarray[j] = temp;
			}
		}
	}
	 cout<<"\n Sorted list of elements is\n"; 
	//Some output
	for (i = 0; i < 8; i++)
	{
		cout << myarray[i] << "\t";
	}
}
