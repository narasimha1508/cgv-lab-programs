#include <glut.h>
float xv=0,yv=0;
void displaySolid (void)
{
//set properties of the surface material
float mat_ambient[] = {1,0,0,1}; // red
float mat_diffuse[] = {.5, .5, .5, 1};
float mat_specular[] = {1,1,1,1};
float mat_shininess[] = {50};
glMaterialfv (GL_FRONT, GL_AMBIENT, mat_ambient);
glMaterialfv (GL_FRONT, GL_DIFFUSE, mat_diffuse);
glMaterialfv (GL_FRONT, GL_SPECULAR, mat_specular);
glMaterialfv (GL_FRONT, GL_SHININESS, mat_shininess);
//set the light source properties
GLfloat lightIntensity[] = {1,0,0,1};
float light_position[]= {xv,yv,0,0};
glLightfv (GL_LIGHT0, GL_POSITION, light_position);
glLightfv (GL_LIGHT0, GL_DIFFUSE, lightIntensity);
//set the camera
glMatrixMode (GL_PROJECTION);
glLoadIdentity();
glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glPushMatrix();
glRotated (30, 0, 1, 0);
glutSolidTeapot (.5);
glPopMatrix ();
glFlush();
}
void keys(unsigned char k, int x, int y)
{
if(k=='r') xv+=1;
if(k=='l') xv-=1;
if(k=='u') yv+=1;
if(k=='d') yv-=1;
glutPostRedisplay();
}
void main ()
{
glutInitDisplayMode (GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Opengl Light");
glutDisplayFunc (displaySolid);
glutKeyboardFunc(keys);
glEnable (GL_LIGHTING);
glEnable (GL_LIGHT0);
glShadeModel (GL_SMOOTH);
glEnable (GL_DEPTH_TEST);
glEnable (GL_NORMALIZE);
glClearColor (0,0,0,0);
glViewport (0, 0, 640, 480);
glutMainLoop();
}