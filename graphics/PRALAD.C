#include<graphics.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void draw(int a[2][5]);
void translate(int a[2][5]);
void scale(int a[2][5]);
void rotate(int a[2][5]);
void main()
{
int a[2][5],i;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
printf("enter coordinate positions of the lines");
for(i=0;i<5;i++)
{
scanf("%d %d",&a[0][i],&a[1][i]);
}


draw(a);

translate(a);
//draw(a);
//scale(a);
//draw(a);
rotate(a);
translate(a);
draw(a);


getch();
closegraph();
}
void draw(int a[2][5])
{
int i=0;
for(i=0;i<4;i++)
{
line(a[0][i],a[1][i],a[0][i+1],a[1][i+1]);
}
}
void translate(int a[2][5])
{
int i;
int tx,ty;
printf("enter translation factor");
scanf("%d%d",&tx,&ty);
for(i=0;i<5;i++)
{a[0][i]=a[0][i]+tx;
a[1][i]=a[1][i]+ty;
}
}
void scale(int a[2][5])
{
int i;
int sx,sy;
printf("enter scaling factor");
scanf("%d%d",&sx,&sy);
for(i=0;i<5;i++)
{
a[0][i]=a[0][i]*sx;
a[1][i]=a[1][i]*sy;
}
}
void rotate(int a[2][5])
{
int i,temp1,temp2;
float angle;
scanf("%f",&angle);
for(i=0;i<5;i++)
{
temp1=a[0][i];
temp2=a[1][i];
a[0][i]=temp1*cos(angle)-temp2*sin(angle);
a[1][i]=temp1*sin(angle)+temp2*cos(angle);
}
}













