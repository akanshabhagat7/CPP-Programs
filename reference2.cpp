//We can create multiple refrences (if needed then create)
#include<iostream>
using namespace std;

int main()
{
	int no=11;
	
	int &x=no;
	//int &y=no;
	
	//int &y=x;
	
	int *p=&x;
	return 0;
}