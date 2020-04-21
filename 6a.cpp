#include<glut.h>
void myinit()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,40,0,40);
glMatrixMode(GL_MODELVIEW);
}
void display()
{
int x,y;
for(x=0;x<8;x++)
{
for(y=0;y<8;y++)
{
if((x+y)%2==0)
glColor3f(0,0,0);
else
glColor3f(1,1,1);
glBegin(GL_QUADS);
glVertex2f(x*5,y*5);
glVertex2f((x+1)*5,y*5);
glVertex2f((x+1)*5,(y+1)*5);
glVertex2f(x*5,(y+1)*5);
glEnd();
}
}
glFlush();
}
int main()
{
glutInitWindowSize(500, 500);
glutCreateWindow("Chess");
glutDisplayFunc(display);
myinit();
glutMainLoop();
}
