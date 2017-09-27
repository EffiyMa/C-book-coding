#include<iostream>
using namespace std;
void swap_value(long*,long*);
int main()
{
	long v1=100;
	long v2=200;
	long *pv1=&v1;
	long *pv2=&v2;
	void(*pFuc)(long*,long*);//声明函数指针(declare a function pointer
	pFuc=swap_value;//给函数指针赋值( assign the pointer a value
	(*pFuc)(pv1,pv2);//利用函数指针调用函数(utilize the function to invoke the function
	cout<<v1<<" "<<v2;
	return 0;



}

void swap_value(long *v1,long*v2)
{
	long t=0;
	t=*v1;
	*v1=*v2;
	*v2=t;



}


