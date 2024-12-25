#include "main.h"
int findMax(int s[],int length)
{
int max = s[0];
for (int i =0;i<length; i++)
{
if ( s[i]>max)
{
max = s[i];
}
}
return max;
}
int findMin(int s[],int length)
{
int min = s[0];
for (int i =0;i<length; i++)
{
if ( s[i]<min)
{
min = s[i];
}
}
return min;
}
