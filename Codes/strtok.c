#include<stdio.h>
#include<string.hz>
int main()
{
char s[256];
strcpy(s, "one two three");
char* token = strtok(s, " ");
while (token) {
    printf("token: %s\n", token);
    token = strtok(NULL, " ");
}
}
