#include<iostream>
#include<string.h>
using namespace std;

class a{
	public:
		int id;
		char name[100];
		char role[100];
		int salary;
		int experience;
		char comp_name[100];
		char address[100];
		char email[100];
		char contact[10];
		
		void set()
		{
			cout<<"employee id=";
			cin>>id;
			cout<<"employee name=";
			cin>>name;
			cout<<"employee role=";
			cin>>role;
		}
		
};
class b :public a{
	public:
		void set1()
		{
			cout<<"employee salary=";
			cin>>salary;
			cout<<"employee experience=";
			cin>>experience;
		}
};
class c :public b{
	public:
		void get()
		{
			cout<<"employee name="<<name<<endl;
			cout<<"employee role="<<role<<endl;
			cout<<"employee salary="<<salary<<endl;
		}
		void set2()
		{
			cout<<"employee comp_name=";
			cin>>comp_name;
			cout<<"employee address=";
			cin>>address;
		}
};
class d : public c{
	public:
		void set3()
		{
			cout<<"employee email=";
			cin>>email;
			cout<<"employee contact=";
			cin>>contact;
		}
		void get1()
		{
			cout<<"employee id="<<id<<endl;
			cout<<"employee experience="<<experience<<endl;
			cout<<"employee comp_name="<<comp_name<<endl;
			cout<<"employee address="<<address<<endl;
			cout<<"employee email="<<email<<endl;
			cout<<"employee contact="<<contact<<endl;
			
		}
};
int main()
{
	d o1;
	
	o1.set();
	o1.set1();
	o1.set2();
	o1.set3();
	o1.get();
	o1.get1();
	
}
