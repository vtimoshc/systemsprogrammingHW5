#include <string.h> 
#include <stdio.h>
#include <stdio.h>

// Multiple header files
#include "modifyChange.h" 
#include "printInfoHelp.h"
#include "Monitor.h"
#include "Options.h"
#include "backupFile.h"

int main(int argc, char* argv[])
{
	struct stat file_st;
	char* file = argv[1];


	if (argc != 2)
	{
		return EXIT_FAILURE;
	}

	if (stat(file, &file_st) < 0)
	{
        printf("-----NOT A FILE-----");
        return 0;
    }

    if(argv[1] != -1)
    {
    	printf("Usage Information: %s\t\n", argv[0]);
    }

	char* filename = argv[1];
	printInfoHelp(filename);
	
	modifyChange(filename);
	Options(argc, argv);
	backipFile();
}

