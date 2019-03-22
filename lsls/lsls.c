#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>


/**
 * Main
 */
int main(int argc, char **argv)
{
  DIR *dir;
  struct dirent *sd;
  struct stat st;

  // Parse command line
  char *input = ".";
  if (argc > 1)
  {
    input = argv[1];
  }

  // Open directory
  dir = opendir(input);

  // Repeatly read and print entries
  while((sd = readdir(dir)) != NULL)
  {
    long int size = stat(sd->d_name, &st);
    if (size)
    {
      printf("%ld", st.st_size); 
    }
    
    printf("\t%s\n", sd->d_name);
  }

  // Close directory
  closedir(dir);
  return 0;
}