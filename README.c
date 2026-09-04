#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void speak(const char *text)
{
    char command[512];
    snprintf(command, sizeof(command),
        "powershell -Command \"Add-Type -AssemblyName System.Speech; "
        "(New-Object System.Speech.Synthesis.SpeechSynthesizer).Speak('%s')\"",
        text);
    system(command);
}

int main()
{
    int a, b;
    char buffer[100];

    printf("enter a ");
    scanf("%d", &a);
    printf("enter b ");
    scanf("%d", &b);

    int sum = a + b;
    printf("lawdaandar:%d\n", sum);

    snprintf(buffer, sizeof(buffer), "lawdaandar:", sum);
    speak(buffer);

    return 0;
}