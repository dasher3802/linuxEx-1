#include<stdio.h>
#include<stdlib.h>
#include<string.h>

extern char **environ;

int main(void)
{
  char strDIR[50];
  char strNAME[50];
  char strRESULT[100] = "gcc ";

 // printf("FILEDIR : %s\n", getenv(FILEDIR));
 // printf("FILENAME : %S\n", getenv(FILENAME));

  strcpy(strDIR, getenv("FILEDIR"));
 // printf("%s\n", strDIR);
  strcpy(strNAME,getenv("FILENAME"));
 // printf("%s\n", strNAME);  
  strcat(strRESULT, strDIR);
  strcat(strRESULT, strNAME);
  strcat(strRESULT, " -o abc");

 // printf("%s\n", strRESULT);
 // gcc -o hello hello.c
  system(strRESULT);

  return 0;
}

