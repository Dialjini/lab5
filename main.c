#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("inp:\n<num> <value>\n1 - x, 2 - x - 1, 3 - x + 1\n");
  char q;
  int x, res;
  scanf("%c %d", &q, &x);
  switch (q)
  {
  case '1':
    res = variable(x);
    break;
  case '2':
    res = decrement(x);
    break;
  case '3':
    res = increment(x);
    break;
  default:
    printf("1-3\n");
    break;
  }
  printf("x = %d, res = %d\n", x, res);
}