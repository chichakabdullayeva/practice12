#include "main.h"
int fibonacci (int n)
{
if (n==0 || n==1)
{
return 1;}
return n+ fibonacci (n-1);
}
