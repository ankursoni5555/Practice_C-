

// Sorting via Selection Sort Algorithm. Its an Inplace Algorithm.
// Its is done through swapping of the elements.

#include<iostream>
using namespace std;
void Selectionsort(int A[],int n)
{
	for(int i=0;i<n-1;i++)
		{
			int iMin = i;
			for(int j=i+1;j<n;j++)
				{
					if(A[j]<A[iMin])
						iMin = j;
					
				}
			int temp = A[i];
			A[i]=A[iMin];
			A[iMin]=temp;
			
		}
	
}
int main()
{
	int A[]={5,3,1,8,10};
	Selectionsort(A,5);
	for(int i=0; i<5; i++)
		cout<<A[i]<<" ";
}