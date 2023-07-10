#include<iostream>
#include<string.h>
using namespace std;
class method{
	public:
	int x;
	void truck()
	{
		cout<<"truck is running";
	}
	void truck(int x)
	{
		cout<<"truck is running in"<<60<<"km/hr"<<endl;
	}
	void truck(int o ,int p)
	{
		cout<<"truck loaded "<<o<<"weghit"<<endl;
		cout<<"truck depth is"<<p<<" ."<<endl;
	}
	void truck(int a,int b,int c)
	{
		cout<<"truck hight"<<a<<"meter"<<endl;
		cout<<"truck weghit "<<b<<"kg"<<endl;
		cout<<"truck loading capasity"<<c<<" ."<<endl;
	}
};

int main()
{
	method m;
	m.truck();
	m.truck(60);
	m.truck(150,60);
	m.truck(70,140,250);
	return 0;
}
