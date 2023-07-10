#include<iostream>
#include<string.h>
using namespace std;

class time{
	public:
		int hh,mm,ss;
};

int main()
{
	time t;
	cout<<"enter time in seconds=";
	cin>>t.ss;
	
	t.hh=t.ss/3600;
	t.mm=(t.ss%3600)/60;
	t.ss=(t.ss%3600)%60;
	
	cout<<"enter class formate hh:mm:ss"<<t.hh<<":"<<t.mm<<":"<<t.ss<<endl;
	return 0;
	
	
}
