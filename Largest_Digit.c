#include<stdio.h>
int main ()
{
int n,rem,Lar= 0;
scanf ("%d", &n);
while (n > 0)
    {
    rem = n% 10;
      if (Lar < rem)
      {
       Lar = rem;
      }
        n = n / 10;
    }
printf ("%d", Lar);

}
