#include <stdio.h>
/**
 * main - alphabets in uppercase and lower case
 * Return: 0
*/
int main(void)
{

	char lowercase, uppercase;

for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
putchar(lowercase);

}
for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
{
putchar(uppercase);
}
putchar('\n');
return (0);
}
