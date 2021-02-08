#include<stdio.h>
int main()
{
   float x=0,y=0,z=0,time,k=0;
   int w=0;
   char C;
   scanf("%c",&C);
   fflush(stdin);
   scanf("%f",&time);
   w=time*100;
   w=w%100;
   k=w;
   if(C=='A')
   {
       x=time*100-20000;
       x=(int)(x/100);
       y=x*3;
       k=(k*3)/60;
       z=199+y+k;

   }
   if(C=='B')
   {
       x=time*100-40000;
       x=(int)(x/100);
       y=x*2;
       k=(k*2)/60;
       z=299+y+k;
   }
   printf("%.2f",z );
}
