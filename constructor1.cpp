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
	   x=0;                                      // tumhi kahi pn taka, je tumchi need ahe 0 aivaji  ith 0 takla karn int chi defatl value o ahe mhun
	   y=0;    
    }

    Demo(int i,int j)   //Parametrised Constructor
    {
	   cout<<"Inside Parametrised Constructor\n";
	   x=i;                                        // user jya values detoy tya values takta alya paheje na 
	   y=j;
    }

    Demo(Demo  &ref)   //Copy Constructor
    {
	    cout<<"Inside Copy Constructor\n";
    }
	
    ~Demo()    //Destructor
    {
	    cout<<"Inside Destructor\n";
    }
};

int main()
{
	//cout<<"Inside main\n";
	Demo obj1(11,21);
	//cout<<"End of main\n";
	Demo obj2(51,101);
	
    cout<<sizeof(obj1)<<"\n";
	cout<<sizeof(obj2)<<"\n";
	 
	cout<<"Value of x in obj1 : "<<obj1.x<<"\n";   //11
	cout<<"Value of x in obj2 : "<<obj2.x<<"\n";   ///51
	
	obj1.x++;
	cout<<"Value of x in obj1 : "<<obj1.x<<"\n";   //12
	cout<<"Value of x in obj2 : "<<obj2.x<<"\n";   //51
	
	
	
	
	return 0;
}