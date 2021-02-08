#include<stdio.h>
int main()
{
   int a,b,i=1,x;
   scanf("%d",&a);
   scanf("%d",&b);
   switch(b){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: x=31; break;
        case 2: x=28; break;
        default :
           x=30;
   }
   printf("%d",x+a);
   while(i<x-1)
   {
      i+=7;
   }
   for(i;i<=x;i++)
    x+=1;
   if(x>7)
    x-=7;
   printf("%d",x);
}
