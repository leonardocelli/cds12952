#include <stdio.h>
#include <stdlib.h>
int  alfabeto (char letra);
int main(){
	char letra;
	printf("Digite um Digito: ");
	scanf("%c",&letra);
	if(alfabeto (letra) == 1)
	{
		printf("Nao é digito");
	}
	else {
		printf("Digito");
	}
	
}
int alfabeto(char letra){
	if(letra =='a' || letra =='b' ||letra =='c' || letra =='d' || letra =='e' || letra =='f'|| letra =='g'|| letra =='h'|| letra =='i'|| letra =='j' || letra =='k' || letra =='l' ||letra =='m' || letra =='n' || letra =='o' || letra =='p'|| letra =='q'|| letra =='r'|| letra =='s'|| letra =='t' || letra =='u' || letra =='v' || letra =='w' || letra =='x' || letra =='y' || letra =='z')
	{
		return 1;
	}
	else 
	    return 0;
}