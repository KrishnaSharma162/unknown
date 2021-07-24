#include <stdio.h>
int main()
{
int x = 10, y = 20;
printf (" x = %d, y = %d from main before calling the function", x, y);
CallValue(x, y);
printf( "\n x = %d, y = %d from main after calling the function", x, y);
return 0;
}
