#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
	int len;
	cout<<"input the longest length of the string"<<endl;
	char*p=new char[len];
	memset(p,0x00,sizeof(char)*len);
	cout<<"input the content of the string"<<endl;
	cin>>p;
	cout<<"what you have input is:"<<p<<endl;
	cout<<"the captial letter(s) is/are:"<<endl;
	char *ptemp=p;
	while (*ptemp!='\0')
	{
		if (isupper(*ptemp)!=0)//the real function of "isupper" is "int isupper(int )".When the parameter is a capatial letter ,it  returns to a nonzero value,otherwise a zero .
		{
			cout<<*ptemp;
			*ptemp++;
		}

	}
	delete p;
	return 0;

}