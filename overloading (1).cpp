#include<iostream>
using namespace std;

class Demo
{
	public:
	int i,j;
	
	void gun()    // Defination
	{
		cout<<"Inside gun\n";
	}
	void fun()    // Defination
	{
		cout<<"inside fun\n";
	}
	void fun(int no)    // Overloaded Defination
	{
		cout<<"inside gun\n";
	}
};

int main()
{
	return 0;
}