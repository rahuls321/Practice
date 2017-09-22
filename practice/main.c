#include <stdio.h>
#include <conio.h>
#include<string.h>

int main()
{
char a[80],b[80];
int i,j,t;
printf("Enter 1st string\n");
gets(a);
fflush(stdin);
printf("Enter 2nd string\n");
gets(b);
printf("Common characters are :\n");
 for(i=0;a[i]!='\0';i++)
 {
  for(j=i-1;j>=0;j--)

   if(a[i]==a[j])
   break;
   if(j==-1)
   for(t=0;b[t]!='\0';t++)

     if(a[i]==b[t])
    {
     printf("%c",a[i]);
     break;
    }
  }

 getch();
 return 0;
}
