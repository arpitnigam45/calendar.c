#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<MMsystem.h>
time_t now;
struct tm *right_now;
int main()
{
    int hour,minutes;
    printf("enter time to set the alarm");
    scanf("%d:%d",&hour,&minutes);
    while(1)
    {
        time(&now);
        right_now=localtime(&now);
        if((hour == right_now->tm_hour) & (minutes == right_now->tm_min))
        {
            PlaySound(TEXT("A.wav"),NULL,SND_SYNC);
        }

    }
    return 0;


}