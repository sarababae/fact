#include <iostream>
#include <conio.h>
using namespace std;
void fact(long);
int main()
{
	long n;
	cin>>n;
	fact(n);
}
void fact(long n)
{
	long i,f=1;
	for(i=1;i<=n;i++)
	{
		f*=i;
	}
	cout<<f;
}
