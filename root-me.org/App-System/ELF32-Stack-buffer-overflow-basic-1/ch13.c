#include <stdlib.h>
#include <stdio.h>

/*
gcc -o ch13 ch13.c -fno-stack-protector
*/


int main()
{

  int var;
  int check = 0x04030201;
  char buf[40];

  fgets(buf,45,stdin);

  printf("\n[buf]: %s\n", buf);
  printf("[check] %p\n", check);

  if ((check != 0x04030201) && (check != 0xdeadbeef))
    printf ("\nYou are on the right way !\n");

  if (check == 0xdeadbeef)
   {
     printf("Yeah dude ! You win !\n");
     system("/bin/dash");
   }
   return 0;
}
