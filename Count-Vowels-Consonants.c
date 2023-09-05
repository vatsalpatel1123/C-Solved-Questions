#include <stdio.h>
int main()
{
    char str[100];  
    char *p;        
    int  vCnt=0,cCnt=0;

    printf("Enter the string: ");
    fgets(str, 150, stdin);   

    p=str;
    while(*p!='\0')
    {
        if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U'
        		||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
            vCnt++;    
        else
            cCnt++;    
  

        p++;
    }

    printf("Number of Vowels in String: %d\n",vCnt);    
    printf("Number of Consonants in String: %d",cCnt);  
    return 0;
}