#include <stdio.h>

int main()
{
    int codigo_trabalhador, hora_extra, hora_normal;
    float horas_trabalhadas, salario, salario_excedente, salario_total;
    int valor_hora_normal = 10, valor_hora_extra = 20;
    
    printf("Digite o código do trabalhador ");
    scanf("%d", &codigo_trabalhador);
    
    printf("Quantas horas o funcionário trabalhou? ");
    scanf("%f", &horas_trabalhadas);
    
    if(horas_trabalhadas > 50)
    {
       hora_extra = horas_trabalhadas - 50;
       hora_normal = horas_trabalhadas - hora_extra;
       
       salario = horas_trabalhadas * valor_hora_normal;
       salario_excedente = hora_extra * valor_hora_extra;
    }
    else
    {
        salario = hora_normal * horas_trabalhadas;
    }
    
    salario_total = salario + salario_excedente;

    
    printf("Salario total %2.2f\n", salario_total);
    printf("Salario Excedente %2.2f\n", salario_excedente);
    printf("Salario %2.2f\n", salario);

    return 0;
}