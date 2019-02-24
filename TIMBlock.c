#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

void kProcess()
{
    system("taskkill /IM TIM.exe -F 2>NUL 1>NUL");
}

int main(void)
{
    unsigned short sec=0;
    unsigned short min=0;
    unsigned short hour=0;
    unsigned short time=5;
    while (1)
    {
        kProcess();
        Sleep(time * 1000);
        sec += time;
        if (sec >= 60)
        {
            sec -= 60;
            min++;
        };
        if (min >= 60)
        {
            min -= 60;
            hour++;
        };
        system("cls");
        printf("%02d:%02d:%02d", hour, min, sec);
    }
}
