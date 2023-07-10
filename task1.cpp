#include<iostream>
#include<string.h>
using namespace std;

class distance{
	public:
		int feet;
		int inch;
}d1,d2,sum;

int main()
{
	cout<<"enter first feet=";
	cin>>d1.feet;
	cout<<"enter second feet=";
	cin>>d2.feet;
	sum.feet=d1.feet+d2.feet;
    
    cout<<"enter first inch=";
	cin>>d1.inch;
	cout<<"enter second inch=";
	cin>>d2.inch;
	sum.inch=d1.inch+d2.inch;
	
	while(sum.inch>12)
	{
		sum.feet++;
		sum.inch=sum.inch-12;
		
		cout<<"feet"<<sum.feet<<endl;
		cout<<"inch"<<sum.inch<<endl;
		return 0;
	}
	
	
}
