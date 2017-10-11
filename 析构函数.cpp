#include<string>
#include<cstring>
#include<iostream>
using namespace std;
class Cmobile
{
public:
	Cmobile(string p);
	virtual ~Cmobile();
	void Show() const;
private:
	string *phname;
};



Cmobile::Cmobile(string p)
{
	cout<<"use the constrcted function"<<endl;
	phname=new string;
	*phname=p;
}
Cmobile::~Cmobile()
{
	cout<<"use the destructor"<<endl;
	delete phname;;
	phname=NULL;
}
void Cmobile::Show() const
{
	cout<<*phname<<endl;
}


int main(int argc, char const *argv[])
{
	Cmobile iMp1("Honor");
	iMp1.Show();
	return 0;
}