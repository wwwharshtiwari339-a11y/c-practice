#include <stdio.h>
int main()
{
	int i,a[6]={10,10,20,30,15,30},j;
	
	for(i=0; i<6; i++)
	{
		for(j=i + 1; j < 6; j++)
		{
			if(a[i]==a[j])
			{
				printf("%d\n",a[i]);
			}
		}
	}
	return 0;
}