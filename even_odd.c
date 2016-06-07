#include <stdio.h>
int main(void) {
	int i,l;
	  char a[100],te;
		scanf("%s",a);
		l=strlen(a);
		if(l%2==0)
		{
		for(i=0;i<l;i=i+2)
		{
			int te=a[i];
			a[i]=a[i+1];
			a[i+1]=te;
		}
		}
		else
		{
			for(i=0;i<l-1;i=i+2)
		{
			int te=a[i];
			a[i]=a[i+1];
			a[i+1]=te;
		}
		}
		printf("%s",a);
	return 0;
}
