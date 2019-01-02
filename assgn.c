#include <graphics.h>
#include <time.h>
#include <math.h>
#define PI 3.14159265

int main()
{
   int i, gd = DETECT, gm;

   initgraph(&gd,&gm," ");

   int X1=250, Y1=313, X2=200, Y2=400, X3=300, Y3=400;
   int x1=X1, x2=X2, x3=X3, y1=Y1, y2=Y2, y3=Y3;
   int Cx,Cy;
   Cx = (X1 + X2 + X3)/3;
   Cy = (Y1 + Y2 + Y3)/3;
   X1 = X1 - Cx;
   Y1 = Cy - Y1;
   X2 = X2 - Cx;
   Y2 = Cy - Y2;
   X3 = X3 - Cx;
   Y3 = Cy - Y3;
   for(i=0;i<=45;i++)
   {
      float val = PI/180.0;

      line(X1+Cx,Cy-Y1,X2+Cx,Cy-Y2);
   	  line(X2+Cx,Cy-Y2,X3+Cx,Cy-Y3);
      line(X3+Cx,Cy-Y3,X1+Cx,Cy-Y1);
      X1 = floor((x1-Cx)*cos(i*val) - (Cy-y1)*sin(i*val));
      Y1 = floor((Cy-y1)*cos(i*val) + (x1-Cx)*sin(i*val));
      Y2 = floor((x2-Cx)*cos(i*val) - (Cy-y2)*sin(i*val));
      Y2 = floor((Cy-y2)*cos(i*val) + (x2-Cx)*sin(i*val));
      Y3 = floor((x3-Cx)*cos(i*val) - (Cy-y3)*sin(i*val));
      Y3 = floor((Cy-y3)*cos(i*val) + (x3-Cx)*sin(i*val));
      delay(100);
     cleardevice();
   }

   closegraph();

   return 0;
}
