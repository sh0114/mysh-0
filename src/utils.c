#include "utils.h"

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)

	char *token = NULL;
	char *arg[100];
	char *s = " \t\n";

	char str[50];
	strcpy(str,command);
	str[strlen(str)] = 0;
 	arg[0] = strtok(str, s);

	*argc = 1;

	while(arg[*argc] = strtok(NULL,s))
	{
		(*argc)++;
	}
	
	(*argv) = (char**)malloc(sizeof(char*) * (*argc));

	for(int i = 0 ; i<(*argc) ; i++)
	{
		(*argv)[i] = (char*)malloc(sizeof(char)*strlen(arg[i])+1);
	 	strcpy((*argv)[i],arg[i]);
  	}

	for(int i = 0; i<(*argc); i++)
	{
		free((*argv)[i]);
		free((*argv));
	}

}
