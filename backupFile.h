#include <string.h> 
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

void backupFile(){

	//https://cboard.cprogramming.com/c-programming/151480-header-file-process-h.html
	char temp;
	FILE *first;
	FILE *second;

	//first - read(r)
	first = fopen("temp.txt", "r");

	//file wont open
	if(first==NULL)
	{
		puts("\t---This file can't be open---\n");
		exit(EXIT_SUCCESS);
	}
	//second - write(w)
	second = fopen("temp.txt", "w");

	//file wont open
	if(second==NULL)
	{
		puts("\t---This file can't be open---\n");
		fclose(first);
		exit(EXIT_SUCCESS);
	}

	do
	{
		temp=fgetc(first);
		fputc(temp, second);
	}while(temp != EOF);

}