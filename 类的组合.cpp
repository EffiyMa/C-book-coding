#include <iostream>
#include <cstring>
using namespace std;

class Cstudent
{
public:
	Cstudent()
	{
		cout<<"use the constructor"<<endl;
	}
	virtual ~Cstudent()
	{
		cout<<"use the destructor"<<endl;
	}
	
private:
    int grade;
    int no;
    string name;
    int age;
    double score;

};

class CClass
{
public:
	CClass()
	{
		cout<<"use the constructor"<<endl;
	}
	virtual ~CClass()
	{
		cout<<"use the destructor"<<endl;
	}
private:
	string classname;
	Cstudent stu[3];
};
int main(int argc, char const *argv[])
{
	CClass cls;// define a CLASS class 
	return 0;
}