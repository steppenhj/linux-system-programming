// ls2_v2.c
//
//

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>
#include <pwd.h>
#include <grp.h>
#include <unistd.h>

void do_ls(char[]);
void dostat(char*);
void show_file_info(char*, struct stat*);
void mode_to_letters(int, char[]);
char* uid_to_name(uid_t);
char* gid_to_name(gid_t);

int main(int argc, char* argv[]){
	if(argc == 1){
		do_ls(".");
	}
	else{
		while(--argc){
			printf("%s:\n", *++argv);
			do_ls(*argv);
		}
	}
}


