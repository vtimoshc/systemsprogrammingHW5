#include <string.h> 
#include <stdio.h>
#include <stdio.h>

void printInfoHelp(char * title){
	printf("THE USAGE: %s [MESSAGE] [CHOICE]  \n\n", title);
	printf("[MESSAGE] [Path]");
	printf("---[-t]----, \t\nthis shall append the duplication time to the file name\n\n");
	printf("---[-m]----, \t\nthis shall be used to disable meta-data duplication\n\n");
	printf("---[-d]----, \t\nthis shall be used to customize the backup location\n\n");

}

