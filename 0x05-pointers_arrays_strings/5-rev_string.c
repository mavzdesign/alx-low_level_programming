#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{

int begin, end, count = 0;

while (s[count] != '\0')
{
count++;
}

end = count - 1;

for (begin = 0; begin < count; begin++)
{

_putchar(s[end]);
end--;

}

}
