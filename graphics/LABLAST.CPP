#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
void rotation(int a[2][5],float t);
void drawrec(int a[2][5]);
void trans(int a[2][5],int tx, int ty);
void scale(int a[2][5],int sx, int sy);

int main()
{
int gd=DETECT,gm;
int i,j;
int tx=100,ty=100;
int sx=2,sy=2;
float t=100;

initgraph(&gd,&gm,"c:\\tc\\bgi");
int a[2][5],b[2][5];
a[0][0]=10;
a[1][0]=10;
a[0][1]=10;
a[1][1]=100;
a[0][2]=100;
a[1][2]=100;
a[0][3]=100;
a[1][3]=10;
a[0][4]=a[0][0];
a[1][4]=a[1][0];

drawrec(a);
trans(a,tx,ty);
drawrec(a);
scale(a,sx,sy);
drawrec(a);
getch();

for(j=0;j<5;j++)
{
b[0][j]=a[0][j];
b[1][j]=a[1][j];
}

cleardevice();
trans(b,-i-110,-i-110);
rotation(b,i/10.0);


trans(b,i+110,i+110);
drawrec(b);

getch();
closegraph();
return 0;
}

void rotation(int a[2][5],float t)
{int i,x,y;
for(i=0;i<5;i++)
{      x=a[0][i];
y=a[1][i];
a[1][i]=x*sin(t)+y*cos(t);
a[0][i]=x*sin(t)-y*cos(t);
}
}
void drawrec(int a[2][5])
{int i;
for(i=0;i<4;i++)
{
line (a[0][i],a[1][i],a[0][i+1],a[1][i+1]);
}}

void trans(int a[2][5],int tx, int ty)
{
int i;
for(i=0;i<5;i++)
{
a[0][i]=a[0][i]+tx;
a[1][i]=a[1][i]+ty;
}}

void scale(int a[2][5], int sx, int sy)
{
int i;
for(i=0;i<5;i++)
{
a[0][i]=a[0][i]*sx;
a[1][i]=a[1][i]*sy;
}}
