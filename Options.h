#include <string.h> 
#include <stdio.h>
#include <stdio.h>
#include <stdbool.h>
#include <getopt.h>


void Options(int argc, char* argv[]){
	int Option = getopt(argc, argv, "md:t");
	
	bool Option_t = false;
	bool Option_m = false;
	bool Option_d = false;

	while (Option!=-1){

		if(Option == 't'){
			Option_t = true; 
		}
		else if(Option == 'm'){
			Option_m = false;
		}
		else if(Option == 'd'){
			Option_d = true;
		}	
		Option = getopt(argc, argv, "md:t");
	}
}