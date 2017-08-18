// Bubble Sort Algorithm
// In this algorithm we will keep swapping two elements i.e elements at 0th and 1st, 
// 1st and 2nd and so on. 
// We will swap only if element at current position is greater than the current+1 element.


#include<iostream>
using namespace std;
void Bubblesort(int A[],int n)
{
	for(int k=0;k<n;k++)
		{
			int flag=0; // To makee sure that we are just not passing by or keep on rotating
						// loop unneccesarily. 
			for(int i=0;i<n-k-1;i++)
				{
					if(A[i]>A[i+1])
						{
							int temp=A[i+1];
							A[i+1]=A[i];
							A[i]=temp;
							flag=1;
						}						
				}
				if(flag==0)
					break;			
		}
}

int main()
{
	int A[]={6,7,4,56,25,13};
	Bubblesort(A,6);
	for(int i=0;i<6;i++)
		cout<<A[i]<<" ";
}