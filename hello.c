#include <stdio.h>


int main(int arg, char *argv[])


{
if(arg != 2){
   printf("USAGE: %s name\n".argv[0]);
   return -1;
}
printf("Hello,%s!\n ",argv[1]);
return 0;
}


