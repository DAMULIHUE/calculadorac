#include <stdio.h>

float power(float base, float expo) {
	float result = 1;
	float mult = expo;
	if (mult == 0) { result = 1; }
	while(mult > 0){
		result *= base;
		mult--;
	}
	while(mult < 0){
		// inverte a base e o expo fica positivo
		printf("Esse tipo de calculo não foi programado.");
		result = 0;
		break;
	}

	return(result);	
}

void main (){

	float x;
	float y;
	char op;
	float result;

	printf("Seja bem-vindo a calculador\n");
	printf("como usar:\n");
	printf("digite x, y e o operador a ser usado\n\n");

	while (true) {
		scanf("%f %c %f", &x, &op, &y);
	
		switch(op) {
			case '+':
				result = x + y;
				break;
			case '-':
				result = x - y;
				break;
			case '*': case 'x': case 'X':
				result = x * y;
				break;
			case '/':
				result = x / y;
				break;
			case '^':
				result = power(x, y);
				break;
			default:
				printf("insira valor valido");
				break;
		}		
	
		printf("%.2f %c %.2f = %.2f \n", x, op, y, result);
	}
}
