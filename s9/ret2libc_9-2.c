#include <stdio.h>
#include <stdlib.h>

char global[] = "/bin/sh";

void vuln()
{
    printf("glabal:%p\n", global);
    printf("文字列を入力してください:");
    char overflowme[32];
    scanf("%[^\n]", overflowme);
}

int main()
{
    vuln();
    printf("failed!\n");
    return 0;
}