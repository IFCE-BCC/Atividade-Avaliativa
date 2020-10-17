#include <stdio.h>

Custo_Carro(float custo){
	
		custo+=(custo*0.28)+(custo*0.45);
	
	printf("Com os impostos o carro custara ao consumidor :%.2lf reais", custo);
}

int main(void){
	
	float custo_Carro;
	
	printf("\nDigite valor do carro na fabrica:");
	
	scanf("%f",&custo_Carro);

	Custo_Carro(custo_Carro);
	
	
	
}
