\
#include<iostream>
#include<iomanip>
#include<string> 
using namespace std；
	struct stdent
	{
		int num;
		string name;
		float score[3];
		float avg_score;
		student *next;
	}stdent[100],*p;

	void print_score(stduent*p)
	{
		p->avg_score=(p->score[1]+p->score[2]+p->score[3])/3;
		cout<<setw(10)<<p->name<<setw(10)<<p->num<<setw(10)<<p->score[1]<<setw(10)<<p->score[2]<<setw(10)<<p->score[3]<<setw(10)<<p->avg_score<<endl;
	}

	int main(int argc, char const *argv[])
	{
		int i,total;
		cout<<"input the total number of the stduents"<<end;
		cin>>total;
		for(i=0;i<total;i++)
		{
			cout<<"input student"<<i+1<<"'s information"<<endl;
			cout<<"his/her number: ";
			cin>>stdent[i].num;
			cout<<"his/her name: ";
			cin>>student[i].name;
			cout<<"his/her Chinese score: "
			cin>>student[i].score[i];
			cout<<"his/her Math score: "
			cin>>student[i].score[2];
			cout<<"his/her English score: "
			cin>>student[i].score[3];
			cout<<endl<<endl;
		}
		for(i=0;i<total;i++)
		{
			stu[i].next=&stu[i+1];
		}
		stu[total-1].next=NULL;
		p=&stu[0];
		cout<<setw(10)<<"Name"<<setw(10)<<"Number"<<setw(10)<<"Chinese score"<<setw(10)<<"Math score"<<setw(10)<<"English score"<<endl;
		do{
			print_score(p);
			p=p->next;
		}while(p!=NULL)

		return 0;


		
	}
