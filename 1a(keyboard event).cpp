#include<glut.h>
float i=0,j=0;
void disp()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2);
    glBegin(GL_POLYGON);
	glColor3f(1,0,0);
	glVertex2f(0+i,0.5+j);
	glVertex2f(-.5+i,0+j);
	glVertex2f(0+i,-0.5+j);
	glVertex2f(.5+i,0+j);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(0,1,0);
	glVertex2f(0+i,0.5+j);
	glVertex2f(0+i,-.5+j);
	glVertex2f(-0.5+i,0+j);
	glVertex2f(.5+i,0+j);
	glVertex2f(0+i,-.5+j);
	glColor3f(0,0,1);
	glVertex2f(0.7,-.7);
	glColor3f(1,1,0);
	glEnd();
     
	glBegin(GL_TRIANGLES);
	glColor3f(0,0,1);
	glVertex2f(0+i,-0.5+j);
	glVertex2f(-.25+i,-.6+j);
	glVertex2f(0.25+i,-0.6+j);
	glEnd();

	glFinish();
}
void keys(unsigned char k,int x,int y)
{
	if (k=='l')
		i=i-0.01;
	if (k=='r')
		i=i+0.01;
	if (k=='u')
		j=j+0.01;
	if (k=='d')
		j=j-0.01;

	disp();
}
void main()
{
	glutCreateWindow("Flying kite");
	glutDisplayFunc(disp);
    glutKeyboardFunc(keys);
	glClearColor(1,1,0,1);
	glutMainLoop();
}