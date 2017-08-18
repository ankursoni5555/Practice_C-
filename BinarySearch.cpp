// Binary search

#include<iostream>
using namespace std;

void BinarySearch(int A[], int n)
{
	for(int i=1;i<n;i++)
		{
			int hole=i;
			while(hole>0 && A[hole-1]>A[hole])
			{
				int temp=A[hole-1];
				A[hole-1]=A[hole];
				A[hole]=temp;
				hole--;
			}
		}
}
void ElementSearch(int A[],int n,int x)
{
	int mid;
	int low=0;
	int high=n-1;
	
}
int main()
{
	int A[]={3,6,1,7,5,9,6,8,6};
	BinarySearch(A,9);
	for(int i=0;i<9;i++)
		cout<<A[i]<<" "<<endl;
	ElementSearch(A,9,6);
}