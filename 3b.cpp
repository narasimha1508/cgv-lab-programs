#include <stdlib.h>
#include <glut.h>
void init()
{ 
// to draw rectangle
glNewList(1, GL_COMPILE);
glClear(GL_COLOR_BUFFER_BIT);  
glColor3f(1.0, 0.0, 1.0);  
glBegin(GL_QUADS);
glVertex2f(-.5,-.5);
glVertex2f(.5,-.5);
glVertex2f(.5,0.2);
glVertex2f(-.5,0.2);
glEnd();
glEndList();
// to draw triangle
glNewList(2, GL_COMPILE);
    glClear(GL_COLOR_BUFFER_BIT);  
	glColor3f(1,0,0);  
      glBegin(GL_TRIANGLES);
      glVertex2f(0,0);
      glVertex2f(0.5,0);
      glVertex2f(0,0.5);
      glEnd();
	 glEndList();
	// to draw square
	glNewList(3, GL_COMPILE);
    glClear(GL_COLOR_BUFFER_BIT);  
	glColor3f(1.0, 1.0, 0.0);  
      glBegin(GL_QUADS);
     glVertex2f(-0.5,-0.5);
      glVertex2f(0.5,-0.5);
      glVertex2f(0.5,0.5);
	  glVertex2f(-0.5,0.5);
      glEnd();
	 glEndList();
// to draw teapot
	 glNewList(4, GL_COMPILE);
    	glClear(GL_COLOR_BUFFER_BIT);  
	glColor3f(0,1,1);  
     	 glutSolidTeapot(0.5);
	 glEndList();
  }
void display(void)
{
      glClear(GL_COLOR_BUFFER_BIT);
   glFlush();
}
void obj(int i)
{
	switch(i)
	{
	case 2:glCallList(1);
		   break;
	case 3:glCallList(2);
		   break;
	case 4:glCallList(3);
		   break;
	case 5:glCallList(4);
		   break;
	}
	glFlush();
}
void mmenu(int i)
{
	switch(i)
	{
	case 1: exit(0);
	}
}
void main()
{
	glutCreateWindow("Display List");
	int smenu1=glutCreateMenu(obj);
	glutAddMenuEntry("Rectangle",2);
	glutAddMenuEntry("Triangle",3);
	glutAddMenuEntry("Square",4);
	glutAddMenuEntry("Teapot",5);
	glutCreateMenu(mmenu);
	glutAddMenuEntry("quit",1);
	glutAddSubMenu("Objects",smenu1);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutDisplayFunc(display);
	init();
	glutMainLoop();
}
