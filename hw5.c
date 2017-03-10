#include <string.h> 
#include <stdio.h>
#include <stdio.h>

// Multiple header files
#include "modifyChange.h" 
#include "printInfoHelp.h"

int main(int argc, char* argv[])
{
	char* filename = argv[1];
	printInfoHelp(filename);
	
	modifyChange(filename);
}