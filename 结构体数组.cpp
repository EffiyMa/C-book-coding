#include <iostream>
using namespace std;
struct birthday
{
	short year;
	short month;
	short day;
};
struct employee
{
	int no;
	char name;
	short sex;
	int age;
	struct birthday birth;
	float salary;
};


int main()
{
	struct employee emp[3]=
	{
		{01,"Alice",0,27,{1981,11,7},8860}
		{02,"Ben",1,21,{1987,1.12},3200}
		{03,"Marry",0,25,{1990,2.15},5630}
	}
	cout<<"公司薪资超过5000的人有"<<endl;
	for(int n=0;n<3;n++)
	{
		if(emp.salary>=5000)
			cout<<setw(5)<<emp[n].no<<setw(10)<<emp[n].name<<setw(5)<<endl;
	}
	return 0;
}