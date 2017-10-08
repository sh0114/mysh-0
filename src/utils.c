#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "utils.h"

void mysh_parse_command(const char* command,
                        int *argc, char*** argv)
{

	char* token[1000];
	char* s = " \t\n";
	char str[1000];

	strcpy(str,command);
	str[strlen(str)] = 0;

 	token[0] = strtok(str, s);
	(*argc) = 1;

	if(token[0] != NULL)
	{
		while(token[*argc] = strtok(NULL,s))
		{
			(*argc)++;
		}	

		(*argv) = (char**)malloc((*argc) * sizeof(char*));

		for(int i = 0 ; i<(*argc) ; i++)
		{
			(*argv)[i] = (char*)malloc(strlen(token[i]) * sizeof(char) + 1);
	 		strcpy((*argv)[i],token[i]);
  		}
	
	}
	else
	{
		(*argv) = (char**)malloc(sizeof(char*));
		(*argv)[0] = (char*)malloc(sizeof(char)+1);
		strcpy((*argv)[0],"");
	}

}
