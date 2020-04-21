#include< glut.h>
#include<math.h>
void FontS()
{
	int i;
	float angle;
	glColor3f(1,0,0);
      	glBegin(GL_QUAD_STRIP);
	for(i=1; i<=9;i++)
            {
                angle = 3.14159/6.0*i; //30 in radians
                glVertex2f(0.2*cos(angle),0.2*sin(angle));
                glVertex2f(0.3*cos(angle),0.3*sin(angle));
            }
	glEnd();
glTranslatef(0,-0.5,0);
glBegin(GL_QUAD_STRIP);
for(i=9; i<=18;i++)
      {
          angle = 3.14159/6.0*i;//30 in radians
          glVertex2f(0.2*cos(angle),-0.2*sin(angle));
          glVertex2f(0.3*cos(angle),-0.3*sin(angle));
         }
glEnd();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT );
    glLoadIdentity();
    FontS();
    glFlush();
}
void main()
{

    glutInitWindowSize(500,500);
    glutCreateWindow("LetterS");
    glutDisplayFunc(display);
    glClearColor(1,1,1,1);
    glutMainLoop();
}
