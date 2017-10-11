#include<iostream>
#include<cmath>
using namespace std;
class Cpoint
{
public:
	Cpoint()
	{

	}
	Cpoint(double a,double b)
	{
		cout<<"use the constructor"<<endl;
		x=a;
		y=b;
	}
	Cpoint(Cpoint &m)
	{
		cout<<"copy constructor"<<endl;
		x=m.x;
		y=m.y;
	}
	virtual ~Cpoint()
	{
		cout<<"use the destructor cpoint"<<endl;
	}
	double Getx()
	{
		return x;
	}
	double Gety()
	{
		return y;
	}

private:
	double x,y;
};

class Cline
{
public:
	Cline(Cpoint p1,Cpoint p2):start(p1),end(p2)
	{
		double xx,yy;
		xx=fabs(p1.Getx()-p2.Getx());
		yy=fabs(p1.Gety()-p2.Gety());
		length=sqrt(xx*xx+yy*yy);
	}
	virtual ~Cline()
	{
		cout<<"use the destructor cline"<<endl;
	}
	double Getlength()
	{
		return length;
	}
private:
	Cpoint start,end;
	double length;
};


int main(int argc, char const *argv[])
{
	Cpoint myp1(2,2),myp2(5,6);
	Cline myline(myp1,myp2);
	cout<<"the length is:"<<endl<<myline.Getlength()<<endl;
	return 0;
}