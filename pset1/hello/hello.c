#include <cs50.h>
#include <stdio.h>

int main(void)  {
    //This asks the User for his or her name.
    string answer = get_string("What is your name?\n");

    //This will greet the User with the given Name, and say that it is nice to meet him or her
    printf ("Hello, %s! Nice to meet you!\n", answer);


}