#include <stdio.h>
#include <stdlib.h>
int  alfabeto (char letra);
int main(){
	char letra;
	printf("Digite uma letra: ");
	scanf("%c",&letra);
	if(alfabeto (letra) == 1)
	{
		printf("Vogal");
	}
	else {
		printf("Nao é vogal");
	}
	
}
int alfabeto(char letra){
	if(letra =='a' || letra =='e' ||letra =='i' || letra =='o' || letra =='u' || letra =='A'|| letra =='E'|| letra =='I'|| letra =='O'|| letra =='U')
	{
		return 1;
	}
	else 
	    return 0;
}