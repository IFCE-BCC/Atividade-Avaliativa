#include <stdio.h>
int main(){
	
	
float salarioM_Valor=0,horas_Trabalhadas=0;
float hora_Trabalhada_Valor=0,quantia_Hora_Extra=0,hora_Extra=0; 
float salario_Bruto=0,salario_a_Receber=0;  
    printf("\nDigite as horas trabalhadas =");
    scanf("%f",&horas_Trabalhadas);    
    printf("\nDigite o valor do salario minimo =");    
    scanf("%f",&salarioM_Valor); 
    printf("\nDigite as horas extras =");  
    scanf("%f",&hora_Extra);   
    hora_Trabalhada_Valor=salarioM_Valor*0.0176; 
    hora_Extra_Valor=salarioM_Valor*0.1165;
    salario_Bruto=horas_Trabalhadas*hora_Trabalhada_Valor;
    quantia_Hora_Extra=hora_Extra*hora_Extra_Valor;
    salario_a_Receber=salario_Bruto+quantia_Hora_Extra;
    printf("\no salario a receber equivale a : %.2f reais.",salario_a_Receber);
	
}

