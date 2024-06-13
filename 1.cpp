#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
	int c;
	c=*x;
	*x=*y;
	*y=c;
	cout<<"swapping is complete"<<endl;
}
int main()
{
int a,b;
a=5;
b=6;
swap(&a,&b);
cout<<"the vales are"<<a<<" "<<b<<endl;
}
