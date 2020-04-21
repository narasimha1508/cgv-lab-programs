#include< glut.h>
#include<stdio.h>
void mydisplay()
{
   glClear(GL_COLOR_BUFFER_BIT);
  glFlush();
}
void demomenu(int id)
{
switch(id)
{
case 1: break;
}
}
void editmenu(int id)
{
	switch(id)
	{
		case 5:	printf("cut\n");
			    break;
		case 6: printf("copy\n");
			    break;
		case 7:	printf("paste\n");
			    break;
	}
}
void sizemenu(int id)
{
switch(id){
case 2: printf("normal\n");
	    break;
case 3: printf("print\n");
	    break;
case 4:printf("web\n");
	   break;
}
}
void main()
{
int submenu1, submenu2;
glutInitWindowSize(500,500);
glutCreateWindow("menu");
submenu1=glutCreateMenu(sizemenu);
glutAddMenuEntry("normal",2);
glutAddMenuEntry("print",3);
glutAddMenuEntry("web",4);
submenu2=glutCreateMenu(editmenu);
glutAddMenuEntry("cut",5);
glutAddMenuEntry("copy",6);
glutAddMenuEntry("paste",7);
glutCreateMenu(demomenu);
glutAddMenuEntry("quit",1);
glutAddSubMenu("view",submenu1);
glutAddSubMenu("edit",submenu2);
glutAttachMenu(GLUT_RIGHT_BUTTON);
glutDisplayFunc(mydisplay);
glutMainLoop();
}
