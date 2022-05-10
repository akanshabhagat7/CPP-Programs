#include<iostream>
using namespace std;

int main()
{
	
	int Arr[5];    //static ahe
	
	int *p = NULL;
	
	//p=(int*)malloc(sizeof(int)*5);
	
    p= new int[10];
	
	if(p==NULL)
	{
		cout<<"Unable to allocate the memory\n";
	}
	else
	{
		cout<<"Memory gets allocated succesfully at address: "<<p<<"\n";
	}
	
	//free(p);
	
	delete []p;
	
	
    return 0;
}

