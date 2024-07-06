#include <stdio.h>
#include <graphics.h>

int main(void)
{
  int gd = DETECT, gm;
  initgraph(&gd, &gm, "C:\\TC\\BGI");
  cleardevice();
  textout(1, 10, 10, "Hello World!");
  getch();
  printf("Hello World!\n");
  return 0;
}
