#include <stdio.h>
int main (int argc,char *argv[])
{
for (int i =1; i<argc;i++)
{
char *ptr;
int count = 0;
ptr = &argv[i][0];
while (*ptr != '\0')
{
count = count +1;
ptr++;
}
printf("String:%s\nLength:%d\n",argv[i],count);
}
}
