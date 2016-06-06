#include <stdio.h>
int main(void) {
	char a[100];
	gets(a);
	int i;
	i=atoi(a);
	printf("%d",i);
	return 0;
}
