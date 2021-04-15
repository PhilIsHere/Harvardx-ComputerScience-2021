#include <stdio.h>
#include <cs50.h>

//In C kann man eigene Makros festlegen mit denen umfangreichere Zeichen zusammengefasst werden können. Statt '1' kann also auch "println" gespeichert werden
#define TRUE 1
#define FALSE 0

//Goto befehle vermeiden! Stattdessen Schleifen nutzen wie in cash.c
int main(void)
{
    nochmal:;
    int alter = get_int("Wie Alt bist du?");
    goto nochmal;
}