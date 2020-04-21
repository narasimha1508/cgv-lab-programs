#include<glut.h>
#include<math.h>
float theta=0;
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0,0,0,0);
	glColor3f(1,0,0);
	glBegin(GL_POLYGON);
	glVertex2f(cos(theta),sin(theta));
    glVertex2f(sin(theta),-cos(theta));
    glVertex2f(-cos(theta),-sin(theta));
    glVertex2f(-sin(theta),cos(theta));
	glEnd();
	glutSwapBuffers();
	glFinish();
}
void idle()
{
	theta+=2;
	if(theta>=360)
		theta-=360;
	glutPostRedisplay();
}
void mouse(int btn,int state,int x,int y)
{
	if((btn==GLUT_LEFT_BUTTON)&&(state==GLUT_DOWN))
		glutIdleFunc(idle);
	if((btn==GLUT_RIGHT_BUTTON)&&(state==GLUT_DOWN))
		glutIdleFunc(0);
		
}
int main()
{
	glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(50,50);
	glutCreateWindow("Rotation of square");
	glutDisplayFunc(display);
	glutMouseFunc(mouse);
	glutMainLoop();
}



