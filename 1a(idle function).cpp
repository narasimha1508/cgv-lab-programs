// Program to implement flying kite using idle function.

#include<glut.h>
float i=0,j=0;
void disp()
{
	glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1,0,1,0);
	glColor3f(0,1,0);
	glBegin(GL_LINES);
	glVertex2f(0+i,0.5+j); // to draw line using 2 vertex.
	glVertex2f(0.5+i,0+j);
	glVertex2f(0.5+i,0+j);
	glVertex2f(0+i,-0.5+j);
	glVertex2f(0+i,-0.5+j);
	glVertex2f(-0.5+i,0+j);
	glVertex2f(-0.5+i,0+j);
	glVertex2f(0+i,0.5+j);
	glVertex2f(0+i,-0.5+j);
	glVertex2f(0+i,0+j);
	glVertex2f(0.5+i,0+j);
	glVertex2f(0+i,0+j);
	glVertex2f(0+i,0+j);
	glVertex2f(0+i,0.5+j);
	glVertex2f(0+i,0+j);
	glVertex2f(-0.5+i,0+j);
	glVertex2f(0+i,-0.5+j);
	glVertex2f(-0.2+i,-0.6+j);
	glVertex2f(-0.2+i,-0.6+j);
	glVertex2f(0.2+i,-0.6+j);
	glVertex2f(0+i,-0.5+j);
	glVertex2f(0.5+i,-0.8+j);
	glEnd(); 
	glFlush();
	
}
void idle()
{
	i-=0.0001;
	j+=0.0001;
	if(i>=-2)
		i=0;
	if(j>2)
		j=0;
	disp();
}
void main()
{
	glutInitWindowPosition(0,0);
	glutInitWindowSize(500,500);
	glutCreateWindow("pqr");
	glutDisplayFunc(disp);
	glutIdleFunc(idle);
	glutMainLoop();
}
