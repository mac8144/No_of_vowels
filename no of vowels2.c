#include<stdio.h>
#include<string.h>
int main()
{
char a[50];
int i,count=0,L;
printf("Enter a string= ");
gets(a);
L=strlen(a);
for(i=0;i<L;i++)
{
if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U')
count++;
}
printf("No of vowels=%d",count);
}




