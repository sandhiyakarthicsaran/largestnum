include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the number:");
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is largest");
}
elseif(b>a&&b>c)
{
printf("b is largest");
}
elseif(c>a&&c>b)
{
printf("c is largest");
}
else
printf("Three are equal numbers!!!!");
return 0;
}
