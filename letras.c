#include<stdio.h>
#include<stdlib.h>

const char *ctexto ="letter.txt";

int main(){

	FILE *text; 
	char ch; 
	int palabr =1;
	int caracter=1;

	text=fopen(ctexto,"r");
	if(text==NULL){
		fprintf(stderr,"\n %s no existe\n",ctexto);
	return(8);
	}else{
		ch=fgetc(text);
	while(ch !=EOF){
		printf("%c",ch);
		if(ch==' '|| ch=='\n'){
	palabr++;
	}else{
		caracter++;
	}
	ch=fgetc(text);
	}
	printf("\nNo. Palabras: %d",palabr-2);
	printf("\nNo. Caracteres: %d", caracter);
	}
fclose(text);
return 0;

}
