#include< glut.h>
#include<stdio.h>
float size=1;
void mydisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
   glBegin(GL_POLYGON);
        glVertex2f(-.5*size, -.5*size);
        glVertex2f(.5*size, -.5*size);
        glVertex2f(.5*size, .5*size);
        glVertex2f(-.5*size,.5*size);
        glEnd();
        glFlush();
}

void demomenu(int id)
{
switch(id)
{
case 1: break;
}
glutPostRedisplay();
}
void sizemenu(int id)
{
switch(id)
{
case 2: size=2*size;
	    break;
case 3: size=size/2;
	    break;
}
glutPostRedisplay();
}
void main()
{
int submenu;
glutInitWindowSize(500,500);
glutCreateWindow("menu");
submenu=glutCreateMenu(sizemenu);
glutAddMenuEntry("increase size",2);
glutAddMenuEntry("decrease size",3);
glutCreateMenu(demomenu);
glutAddMenuEntry("quit",1);
glutAddSubMenu("resize",submenu);
glutAttachMenu(GLUT_RIGHT_BUTTON);
glutDisplayFunc(mydisplay);
glClearColor(1,1,1,1);
glColor3f(1,0,0);
glutMainLoop();
}
