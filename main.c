#include<stdio.h>
#include <time.h>
int main()
{
time_t mytime;
struct tm *mylocaltime;
mytime=time(NULL);
mylocaltime=localtime(&mytime);
printf("Year:%d\n",mylocaltime->tm_year+1900);
printf("Month:%d\n",mylocaltime->tm_mon+1);
printf("Day:%d\n",mylocaltime->tm_mday);
printf("Min:%d\n",mylocaltime->tm_hour);
printf("Second:%d\n",mylocaltime->tm_sec);
printf("hello world!\n");
printf("Version:0.02\n");
return 0;


}
