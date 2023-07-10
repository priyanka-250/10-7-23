#include<iostream>
#include<string.h>
using namespace std;

class hotel{
	public:
		int id;
		char name[100];
		char type[100];
		int staff_size;
		int room_size;
		int establish_year;
		char address[100];
		int rating_type;
		char website[100];
		
		void set(int id,char name[],char type[],int staff_size,int room_size,int establish_year,char address[],int rating_type,char website[])
		{
			this->id=id;
			strcpy(this->name,name);
			strcpy(this->type,type);
			this->staff_size=staff_size;
			this->room_size=room_size;
			this->establish_year=establish_year;
			strcpy(this->address,address);
			this->rating_type=rating_type;
			strcpy(this->website,website);
		}
		void get()
		{
			cout<<"employee ID="<<id<<endl;
			cout<<"Employee NAME="<<name<<endl;
			cout<<"employee TYPE="<<type<<endl;
			cout<<"employee STAFF_SIZE="<<staff_size<<endl;
			cout<<"employee ROOM_SIZE="<<room_size<<endl;
			cout<<"employee ESTABLISH_YEAR="<<establish_year<<endl;
			cout<<"employee ADDRESS="<<address<<endl;
			cout<<"employee RATING_TYPE="<<rating_type<<endl;
			cout<<"employee WEBSITE="<<website<<endl;
		}
};
int main()
{
	hotel h;
	h.set(123,"navjivan","3 star",15,4,2005,"101,sarthana jakatnaka",3,"navjivan123.com");
	h.get();
	return 0;
}
