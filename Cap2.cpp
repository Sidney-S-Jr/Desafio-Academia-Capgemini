#include <stdio.h>
#include <string.h>
int main(void)
{
	char x[20];
	printf("Senha: ");
	scanf("%s", x);
	while (strlen(x)<6)
	{
		printf("Senha muito fraca. Adicione no minimo mais %d caracteres\n", 6-strlen(x));
		printf("Senha: ");
		scanf("%s", x);
	} 
		printf("Senha salva/n");
	return 0;
}
