#include<iostream>

using namespace std;

class Demo
{
   public:
	int x;    // Characteristics
	int y;    // Characteristics

    Demo()   //Default Constructor
    {
	   cout<<"Inside Default Constructor\n";
	   x=0;
	   y=0;
    }

    Demo(int i,int j)   //Parametrised Constructor
    {
	   cout<<"Inside Parametrised Constructor\n";
	   x=i;
	   y=j;
    }

    Demo(Demo  &ref)   //Copy Constructor
    {
	    cout<<"Inside Copy Constructor\n";
		x=ref.x;
		y=ref.y;
    }
	
    ~Demo()    //Destructor
    {
	    cout<<"Inside Destructor\n";
    }
};

int main()
{
	Demo obj1(11,21);
	
	Demo obj2(obj1);
	
	return 0;
}

//obj()