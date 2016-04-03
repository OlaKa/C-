#include <iostream>
#include <string>
using namespace std;
// Classic bubble sorting, compile with linux c++ and run ./a.out

int main(void)
{
  int array[10]={5,8,6,7,9,10,3,2,1,4};
  cout<<"Before sorting:";
  for(int i=0;i<10;i++)
    {
      cout<<array[i]<<" ";
    }
  cout << endl;
  //Bubble sort starts here

  int temp;
  int lenght=10;
  int end=9;
  for(int j=lenght-1;j>0;j--)
    {
      for (int i=0;i<end;i++)//Careful with indexes remember i++
	{
     	  if (array[i]>array[i+1])
	    {
	      temp=array[i]; 
	      array[i]=array[i+1];
	      array[i+1]=temp;
	    }
	}
      end--; 
    }
  cout<<"After sorting:";
  for(int i=0;i<10;i++)
    {
      cout<<array[i]<<" ";
    }
  cout << endl;
}

