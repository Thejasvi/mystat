#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <errno.h>
#include <sys/types.h>
#include <time.h>
#include <string.h>

int
main(int argc, char *argv[])
{

int i;
struct stat buf;
time_t tempfmtime;
time_t fmtime;
char *ptr;
char *filename;
char *tempfilename;
 
       if (argc != 4) {
               fprintf(stderr, "Usage: stat <pathname> <pathname> <pathname>\n");
               exit(0);
          }

       for (i = 1; i < argc; i++) 
        {
         if (stat(argv[i], &buf) < 0) 
           {
             perror("stat error");
             exit(1);
           } 
            if(i==1) {
                   fmtime= sb.st_mtime;
                   filename = argv[i];
             }
                 
           printf("Last file access:         %s", ctime(&buf.st_atime));
           printf("Last file modification:   %s", ctime(&buf.st_mtime)); 
         }
     exit(0);
}
