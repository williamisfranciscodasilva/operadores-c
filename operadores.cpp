#include <conio.h>
#include <stdio.h>
main()
{
	float num1, num2, adicao, subtracao, multiplicacao, divisao;
	
	printf("Digite o primeiro numero: ");
	scanf("%f",&num1);
	printf("Digite o segundo numero: ");
	scanf("%f",&num2);

	adicao = num1 + num2;
	subtracao = num1 - num2;
	multiplicacao = num1 * num2;
	divisao = num1 / num2;
	
	printf("A soma de %f",num1);
	printf(" + %f",num2);
	printf(" = %f",adicao);
	printf("\nA subtracao de %f",num1);
	printf(" - %f",num2);
	printf(" = %f",subtracao);
	printf("\nA multiplicacao de %f",num1);
	printf(" * %f",num2);
	printf(" = %f",multiplicacao);
	printf("\nA divisao de %f",num1);
	printf(" / %f",num2);
	printf(" = %f",divisao);
	getch();
}
