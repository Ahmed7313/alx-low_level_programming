#include "main.h"

/**
^I* main - Entry point
^I*
^I* Description: Prints "_putchar" followed by a new line
^I*
^I* Return: Always 0 (Success)
^I*/
int main(void)
{
^Iint i = 0;
^Ichar word[] = "_putchar\n";

^Iwhile (word[i] != '\0')
^I{
^I_putchar(word[i]);
^Ii++;
^I}

^Ireturn (0);
}
