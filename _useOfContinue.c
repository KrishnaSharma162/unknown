#include <stdio.h>
int main()
{
   for (int j=0; j<=8; j++)
   {
      if (j==4)
      {
	    continue;
       }
       printf("%d ", j);
   }
   return 0;
}
