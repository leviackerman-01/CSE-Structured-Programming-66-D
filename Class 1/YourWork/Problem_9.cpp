#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>='a'&&a<='z')
        printf("%c is a Lowercase Alphabet\n",a);
    else if (a>='A'&&a<='Z')
        printf("%c is an Uppercase Alphabet\n",a);
    else if (a>='0'&&a<='9')
         printf("%c is a Digit\n",a);
    else
         printf("%c is a Special Character\n",a);













}
