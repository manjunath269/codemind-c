#include <stdio.h>
#include<math.h>

int main()
{
  int N, squr, rem, Sum;
  scanf("%d", &N);
  squr = pow(N, 2);
  for (Sum = 0; squr > 0; squr = squr / 10)
  {
    rem = squr % 10;
    Sum = Sum + rem;
  }

  if (N== Sum)
    printf("Neon Number");
  else
    printf("Not Neon Number");
}