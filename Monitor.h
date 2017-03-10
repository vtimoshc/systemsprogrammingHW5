#include <string.h> 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/inotify.h>
#include <stdbool.h> 

void monitor(char* Name_of_File){
	//Source: http://lxr.free-electrons.com/source/fs/notify/inotify/inotify_user.c?v=2.6.30
	ssize_t buffer_length;
	//ssize_t event_handling;
	//struct inotify_event;

	int buffer = 1000;
	int inotify = inotify_init();
	char* n = NULL;
	char* struc;
	char length[buffer_length];
	char mon[buffer];
	bool counter = true;
	
	int _inotify = inotify_add_watch(mon, IN_DELETE, inotify);
	
	strcpy(Name_of_File, mon);

	ssize_t event_handling = (sizeof(struct inotify_event));
	buffer_length = (720 *(event_handling + 50));
	while (counter)
	{
		int prompt = read(length, buffer_length, inotify);
		printf("Reading the open file: %f", prompt);

		if(prompt == -1 && counter)
		{
			printf("\t---CAUTION: Opened file failed to read!---\n\n");
			continue; 
		}
		//Source: https://fossies.org/linux/SDL2/src/core/linux/SDL_ibus.c
		for(struc = length; struc <= length + prompt;)
		{
			struct inotify_event* inotify_ = (struct inotify_event*) struc;

			if((inotify_ -> mask&IN_DELETE) == IN_DELETE)
			{
				printf("---This file has been removed---");
				exit(EXIT_SUCCESS);
			}
			struc = struc + sizeof(struct inotify_event) + inotify_ -> len;
		}
	}	
} 
