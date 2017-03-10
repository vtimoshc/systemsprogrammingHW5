#include <string.h> 
#include <stdio.h>
#include <stdlib.h>

void modifyChange(char * title){
	FILE *obj;
	FILE *origin;
	char * gets(char * str); 
	char i;
	char target[100] = "   ";
	origin = fopen(title, "r");

	if(origin == NULL) exit(EXIT_FAILURE);

	obj = fopen("x", "w");

	if(obj == NULL){
		fclose(origin);
		exit (EXIT_FAILURE);
	}
	
	do{
	fputc(i, obj);		
	}while((i=fgetc(origin)) != EOF);

	printf("\t\t\t\nSUCCESS\n"); 
	fclose(origin);
	fclose(obj);
}
	



