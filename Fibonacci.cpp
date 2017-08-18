#include<iostream>
using namespace std;

int Fib(int n)
{
	if (n<=1)
		{
			return n;
		}
	int F1 = 0;
	int F2 = 1;
	int F;
	
	for (int i =2;i<=n;i++)
		{	
			cout<<i<<endl;
			F = F1 + F2;
			F1 = F2;
			F2 = F;
			
		}
		return F;
}
int main()
{
	int n;
	cout<<"Enter value for n: ";
	cin>>n;
	int a = Fib(n);
	cout<<a<<endl;
}