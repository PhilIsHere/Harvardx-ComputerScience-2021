#include <cs50.h>
#include <stdio.h>

int main(void){
    int height = 0;
    do{
    //Prompts the user for a Number from the range 1-8
    height = get_int("How tall should the Pyramide be? (1-8): ");
    }
    while (height < 1 || height > 8);

    //initializes the first loop for the hashes with a return stroke
    for(int current_hight = 0; current_hight < height; current_hight++)
    {
        //initializes a loop and prints a Space if i+j is less than the user's input -i. Otherwhise it will print a hash
        for(int current_width = 0; current_width < height; current_width++)
        {
            if(current_hight + current_width < height -1)
                printf(" ");
            else
                printf("#");
        }

    printf("\n");

    }
}