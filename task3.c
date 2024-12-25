#include "main.h"
int findCharacterOccurrences (char s[],char d)
{
char *ptr;
ptr = &s[0];
int i =0;
while (*ptr != '\n')
{
if (d == *ptr)
{
return i;
}
i++;
ptr++;
}
return -1;
}
