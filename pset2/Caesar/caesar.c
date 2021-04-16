#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int val_key(int argc, string argv[]);

int main(int argc, string argv[])
{
    int key;

    if (val_key(argc, argv) == -1)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        key = val_key(argc, argv);
    }

    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");

    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
        if (isalpha(plaintext[i]))
        {
            int cipher = (plaintext[i] + key);
            int shift;

            if (isupper(plaintext[i]))
            {
                shift = 65;
            }
            else
            {
                shift = 97;
            }

            //berücksichtigt ASCII tabelle, so dass es wieder bei a/A anfängt.
            cipher = (cipher - shift) % 26;
            // Verschlüsselung hier
            printf("%c", cipher + shift);
        }
        else
        {
            //Ansonsten Zeichen übernehmen, falls kein Buchstabe
            printf("%c", plaintext[i]);
        }
    }

    printf("\n");
    return 0;
}

int val_key(int argc, string argv[])
{
    if (argc != 2)
    {
        return -1;
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            return -1;
        }
    }

    int key = atoi(argv[1]);
    return key;
}