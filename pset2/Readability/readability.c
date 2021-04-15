#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

//Definiert die Liao Formel als makro, so dass man nur noch "LIAO(L, S)" angeben muss um die Formel abzurufen
#define LIAO(L, S) round(0.0588 * L - 0.296 * S - 15.8); //index = 0.0588 * L - 0.296 * S - 15.8

int main(void){
int lwrcs = 0;
int uprcs = 0;
float letters = 0;
float words = 1; //Takes into account the last word of the text which usually isn't followed by a spacebar
float sentence = 0;
float liao;
float L;
float S;

string txt;

    do{
        txt = get_string("What's the text you'd like to know the Gradelevel of?: ");
    }while(strlen(txt) <= 0);

    //rechner:
    int txtl = strlen(txt);
    for (int index = 0; index < txtl; index++)
        {

                if (txt[index] >= 'a' && txt[index] <= 'z')
                    {
                        lwrcs++;
                        letters++;
                    }

                else if (txt[index] >= 'A' && txt[index] <= 'Z')
                    {
                        uprcs++;
                        letters++;
                    }

                else if (txt[index] == ' ')
                    {
                        words++;
                    }

                else if (txt[index] == '.' || txt[index] == '!' || txt[index] == '?')
                    {
                        sentence++;
                    }

        }

        //rechnung
        L = letters / words * 100;
        S = sentence / words * 100;
        //printf("words is now: %f\n", words);
        //printf("letters is now: %f\n", letters);
        //printf("sentence is now: %f\n", sentence);
        //printf("L is now: %2f\n", L);
        //printf("S is now: %2f\n", S);

        //Die Formel kann man als Makro einfügen und oben deklarieren
        liao = round(0.0588 * L - 0.296 * S - 15.8); //index = 0.0588 * L - 0.296 * S - 15.8
        //printf("Liao is now: %f\n", liao);

   if (liao < 1)
        {
            printf("Before Grade 1\n");
        }

            else if (liao >= 2 && liao <= 16)
                {
                    printf("Grade %i\n", (int) liao);
                }

            else if (liao > 16)
                {
                    printf("Grade 16+\n");

                }
}