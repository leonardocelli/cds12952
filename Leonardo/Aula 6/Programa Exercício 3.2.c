#include <stdio.h>
#include <string.h>

int main()
{

    char string[100]; // declarou variável 
    int i, vogais=0, consoantes=0, numero=0; // declarou vogais, i e consoante
    
    printf("\nDigite uma string: "); // o de sempre
    fgets(string,100,stdin); //f gets lê a variavel, o tamanho e o stdin para ler do teclado
    
    for(i = 0; string[i] != '\0'; i++) //entrou num laço
    {       
    
        if (string[i] =='a' || string[i] =='A' || string[i] =='e' || string[i] =='E' || string[i] =='i' || string[i] =='I' || string[i] =='o' || string[i] =='O' || string[i] =='u' || string[i] =='U')  // teste do tipo de letra que está lendo
        {
            vogais = vogais + 1; // soma na variável
        }
            else if (string[i] =='1' || string[i] =='2' || string[i] =='3' || string[i] =='4' || string[i] =='5' || string[i] =='6' || string[i] =='7' || string[i] =='8' || string[i] =='9' || string[i] =='0')
                {
                numero = numero + 1;
                }
                    else
                    {
                        consoantes = consoantes +1; // soma na variável caso não for vogal
                    }
        
        
    } // checa todas as letras até o enter (\0)
    
    printf("\nA Quantiade de Vogais é: %d", vogais); // imprime a soma das variáveis
    printf("\nA Quantiade de Consoantes é: %d", consoantes);
    printf("\nA Quantidade de Números é: %d", numero);
        
    return 0;
}