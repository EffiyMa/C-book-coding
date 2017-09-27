#include<iostram>
#include<iomanip>
using namespace std;
void print_teacher();
void printf_student();
void print_body(void *pFuc())
int mian()
{
	void(*print_message)();//declare a function pointer
	int nchoose=0;
	cout<<"choose 1 as teaher,2 as student";
	cin>>nchoose;
	if(nchoose==1)
		print_message=print_teacher;
	else if(nchoose==0)
		print_massage=printf_student;
	else
	{
		cout<<"Wrong"<<endl;
		exit(-1);
	}
	print_body(print_message)
	return 0;

}

void print_teacher()
{
	cout<<"teacher's name: Lily"<<endl;
	cout<<"course: C++"<<endl;
}


void printf_student()
{
	cout<<"student's name:John"<<endl;
	cout<"learning course:C++"<<endl;
}

void print_body(*pFuc)//input the function pointer to utilize different functionC:\Users\lenovo\AppData\Roaming\Sublime Text 3\Packages\User
{
	pFuc();
}
