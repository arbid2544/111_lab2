#include<stdio.h>
int main()
{
   int a,b,i=1,x;
   scanf("%d %d",&a,&b);
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
   while(i<x-1)
   {
      i+=7;
   }
   for(i;i<=x;i++)
        a+=1;
   if(a>7)
        a-=7;
   printf("%d",a);
   return 0;
}
