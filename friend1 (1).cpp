#include<iostream>
using namespace std;

class Demo
{
	public:
	int i;
	protected:
	int j;
	private:
	int k;
	
	public:
	Demo()
	{
		i=10;
		j=20;
		k=30;
	}
	friend void fun();     //imp
};

void fun()
{
	Demo obj1;            //imp
	cout<<obj1.i<<"\n";
	cout<<obj1.j<<"\n";
	cout<<obj1.k<<"\n";
}

int main()
{
	fun();
	//Demo obj;
	
	return 0;
}

//fun function is not a member of demo class