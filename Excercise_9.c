#include <stdio.h>

int main(int argc, char *argv[])
{
  int numbers [4]={0}; //Here we set an array of integers
  char name[4]={'a'}; // Here we set an array of chars

//first print them out raw
  printf("numbers: %d %d %d %d\n", name[0], name[1], name[2], name[3]);
  printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
  printf ("name: %s\n", name);
// We have to assign a value for each space in the array
   numbers[0]=1;
   numbers[1]=2;
   numbers[2]=3;
   numbers[3]=4;
//Then, it is necessary to assign the characters in the char array.
   name[0]='Z';
   name[1]='e';
   name[2]='d';
   name[3]='\0';
//We print each one of the places in the array (separately).
    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
//Another way to print it is by printing the complete array
    printf("name: %s\n", name);
 //I really do not understand why we assign the value to another variable such as another
 //but then, we print it
    char *another = "Zed";
    printf("another: %s\n", another);
    printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);
  return 0;
}
