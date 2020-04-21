#include<glut.h>
#include<math.h>
float t,r=0.5,x,y,t1=360,i=-0.5;
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(1,0,0,0);
	glColor3f(1,1,1);
	for(t=0;t<360;t=t+0.1)
	{
		x=i+r*cos(t);
		y=r*sin(t);
		glBegin(GL_POINTS);
	    	glVertex2f(x,y);
	    	glEnd();
	}
	glBegin(GL_LINES);
	glVertex2f(r*cos(t1)+i, r*sin(t1));
    	glVertex2f(r*-cos(t1)+i, r*-sin(t1));
	glVertex2f(r*-sin(t1)+i, r*cos(t1));
    	glVertex2f(r*sin(t1)+i, r*-cos(t1));
	glEnd();
    	glFlush();
}
void idle()
{
	if(i<1)
		i=i+0.001;
	else
		i=-0.5;
	t1-=0.01;
	display();
}
void main()
{
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Rotation of wheel");
	glutDisplayFunc(display);
	glutIdleFunc(idle);
	glutMainLoop();
}
