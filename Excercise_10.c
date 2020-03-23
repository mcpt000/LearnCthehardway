#include <stdio.h>
int main(int argc, char *argv[])
{    int i = 0;
    // go through each string in argv
    // I really do not understand very well why this print is here
    //but what it seems to do is to "save" the values of arg and print the
    //while the counter also do its job.
    for(i = 1; i < argc; i++)
    {
        printf("arg %d: %s\n", i, argv[i]);
    }
    // Here we are actually assigning a predetermined value to the array of chars
    //and I think it should have been string array, no char one.
    char *states[] = {"California", "Oregon", "Washington", "Texas"};
    int num_states = 4;
    //eighter way, it works.
    for(i = 0; i < num_states; i++)
    {
        printf("state %d: %s\n", i, states[i]);
    }
    return 0; }
