//output the info of stuff in school.If he is a student,output his class,if he is a teacher,output his department name
#include <iostream>
#include<iomanop>
using namespace std;
union department
{
	float score;//成绩
	int grade;//评价等级
}；
struct person
{
	char name[20];
	int age;
	char job;
	union department dep;
};
int main(int argc, char const *argv[])
{
	struct person per[5]=
	{
		{"Alice",27,'t',{0}}
		{"Ben",21,'s',{0}}
		{"Marry",20,'s',{0}}
		{"Joy",26,'t',{0}}
		{"Tom",23,'s',{0}}
	}
	int n;
	for(n=0;n<5,n++)
	{
		if(per.job=='s')
		{
			cout<<"input stduent"<<per[n].name<<" score"<<endl;
			cin>>per[n].dep.score;
		}
		else 
		{
			cout<<"input teacher"<<per[n].name<<"grade"<<endl;
			cin>>per[n].grade;
		}

	}
	cout<<setw(10)<<"name"<<setw(5)<<"age"<<setw(10)<<"stuff category"<<setw(10)<<"score/grade"<<endl;
	for (n=0;n<5;n++0)
	{
		if(per.job=='s')
		{
			cout<<setw(10)<<per[n].name<<setw(5)<<per[n].age;
			cout<<setw(10)<<per[n].job<<setw(10)<<per[n].dep.score<<endl;
		}
		else
		{
			cout<<setw(10)<<per[n].name<<setw(5)<<per[n].age;
			cout<<setw(10)<<per[n].job<<setw(10)<<per[n].dep.grade<<endl;
		}
	}
	
	return 0;
}