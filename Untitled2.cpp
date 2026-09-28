#include <stdio.h>
int main()
{
	int i,a[5]={10,2,3,10,10},count=0 ;
	
	for(i=0; i<5; i++)
	{
		if(a[i] == 10)
		{
			count++;
		}
			}	
				printf("%d\n",count);

	return 0;
}