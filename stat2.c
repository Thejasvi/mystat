#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>


int
main(int argc, char *argv[])
{

int i;
struct stat buf;
char *ptr;
 
       if (argc != 4) {
               fprintf(stderr, "Usage: %s <pathname> <pathname> <pathname>\n");
               exit(1);
          }

       for (i = 1; i < argc; i++) 
        {
         if (stat(argv[i], &buf) < 0) 
           {
             perror("stat error");
           } 
           printf("Last file access:         %s", ctime(&buf.st_atime));
           printf("Last file modification:   %s", ctime(&buf.st_mtime)); 
         }
     exit(0);
}
