#include <stdio.h>
int main(void)
{
	int n, i;
	printf("Base e altura: ");
	scanf("%d", &n);
	char ecd[n];
	for (i=0; i<=n-1; i++)
	{
		ecd[i]=' ';
		ecd[i+1]='\0';
	}
	for (i=1; i<=n; i++)
	{
		ecd[n-i]='*';
		printf("%s\n", ecd);
	}
	return 0;
}
