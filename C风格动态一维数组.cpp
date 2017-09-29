
#include"iostream"
#include"stdlib.h"
#include "malloc.h"
#include"time.h"
int main()
{
	long *p=NULL;
	p=(long*)malloc(sizeof(long)*10);//create the space of dynamic arrays
	srand(unsigned)time(NULL);//create random seed
	for(int i=;i<10;i++)
	{
		p[i]=(long)rand();
		cout<<p[i]<<endl;
	}
	free(p);//free the space which the pointer points
	p=NULL;
	return 0;
}

