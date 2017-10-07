#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#include "commands.h"

int do_cd(int argc, char** argv) {
  if (!validate_cd_argv(argc, argv))
    return -1;

  // TODO: Fill it!
	
//	validate_cd_argv(argc,argv);

    return 0;
}

int do_pwd(int argc, char** argv) {
  if (!validate_pwd_argv(argc, argv))
    return -1;

  // TODO: Fill it!

//	validate_pwd_argv(argc,argv);

  return 0;
}

int validate_cd_argv(int argc, char** argv) {
  // TODO: Fill it!
	
	if(strcmp(argv[0],"cd") == 0 && argc == 2)
	{	
		chdir(argv[1]);
	}
	else 
		return 0;
  return 1;
}

int validate_pwd_argv(int argc, char** argv) {
  // TODO: Fill it!
	if((strcmp(argv[0],"pwd") == 0)&& argc == 1){
		char str[1024];
		getcwd(str, sizeof(str));
		printf("%s\n", str);
		return 1;
	}
	else
	{
		return 0;
	}
}
