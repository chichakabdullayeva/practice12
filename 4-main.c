#include <stdio.h>
#include "main.h"
int main ()
{
int s[9]={1,2,3,4,5,6,7,8,9};
int length = sizeof (s)/sizeof(s[0]);
printf("MAX:%d\nMIN:%d",findMax(s,length),findMin(s,length));
}
