#include <stdio.h>
void repres(int num)
{
  // printf("%d\n", num);
  char arr[4];

  // char a = (num & 0xff000000)>>(8*3);
  // char b = (num & 0x00ff0000)>>(8*2);
  // char c = (num & 0x0000ff00)>>(8*1);
  // char d = (num & 0x000000ff)>>(8*0);

  // printf("%c %c %c %c\n", a,b,c,d);

  for (int i = 0; i < 4; i++)
  {
    arr[i] = (num & 0xff000000 >> (i * 8)) >> (8 * (3 - i));
    printf("%c ", arr[i]);
  }
}
int main()
{
  int x = 0x47495249;

  repres(x);

  return 0;
}