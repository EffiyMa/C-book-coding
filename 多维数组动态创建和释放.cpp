#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	long **p=new long*[5];
	for(int n1=0;n1<5;n1++)
	{
		p[n1]=new long[5];
		memset(p[n1],0x00,sizeof(long)*5);

	}
	for (int n2 = 0; n2 <5 ;n2++)
	{
		delete[] p[n2];
	}
	delete[] p;
	p=NULL;
	return 0;
}