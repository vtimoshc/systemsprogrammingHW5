#include <string.h> 
#include <stdio.h>
#include <stdio.h>

// Multiple header files
#include "modifyChange.h" 
#include "printInfoHelp.h"
#include "Monitor.h"
#include "Options.h"

int main(int argc, char* argv[])
{

	 if (argc != 2)
	{
		return EXIT_FAILURE;
	}
    
	const char* file = argv[1];
        struct stat file_st;

	if (stat(file, &file_st) < 0)
	{
        printf("-----NOT A FILE-----");
        return EXIT_FAILURE;
    	}
	char* filename = argv[1];
	printInfoHelp(filename);
	
	modifyChange(filename);
	Options(argc, argv[]);
}

