#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void){
    //Deklaration ist eine Variable ohne festgelegten Startwert. Das sollte vermieden werden!
    int count = 0;
    //Initialisierungen nennt man eine Variable mit Startwert. Beispiel: 'float preis = 0;' das sollte beibehalten werden
    float preis;

    do
    {
    preis = get_float("Wieviel in Euro schulde ich dir? ");
    }while(preis <= 0);

        preis = round(preis * 100);

        while(preis > 0)
        {
            if(preis >= 25)
            {
            //preis -= 25; geht auch, denn preis -= 25 entspricht Zeile 23
            preis = preis - 25;
            }

            else if(preis >= 10)
            {
                preis = preis - 10;
            }

            else if(preis >= 5)
            {
                preis = preis - 5;
            }

            else if(preis >= 1)
            {
                preis = preis - 1;
            }

            count++;
        }
        printf("Die menge der Münzen die du erhälst sind %i\n", count);
}