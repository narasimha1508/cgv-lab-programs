#include< glut.h>
#include<math.h>
void FontO()
{
	int i;
	float angle;
	glColor3f(1,0,0);
      	glBegin(GL_QUAD_STRIP);
for(i=0; i<=16;i++)
            	{
                angle = -3.145/6.0*i; //30 in radians
                glVertex2f(0.2*cos(angle),0.2*sin(angle));
                glVertex2f(0.3*cos(angle),0.3*sin(angle));
}
glEnd();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT );
    glLoadIdentity();
    FontO();
    glFlush();
}
void main()
{

    glutInitWindowSize(500,500);
    glutCreateWindow("LetterO");
    glutDisplayFunc(display);
    glClearColor(1,1,1,1);
    glutMainLoop();
}
