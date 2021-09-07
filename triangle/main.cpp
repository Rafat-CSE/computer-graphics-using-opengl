#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
glClear (GL_COLOR_BUFFER_BIT);

glColor3f (0.0, 1.0, 1.0);


    //----rectangle---
	glBegin(GL_QUADS);
	glVertex3f(2.0f, 2.0f, 0.0f);
	glVertex3f(4.0f, 2.0f, 0.0f);
	glVertex3f(4.0f, 3.0f, 0.0f);
	glVertex3f(2.0f, 3.0f, 0.0f);
	glEnd();


glColor3f (1.0, 1.0, 0.0);

    // -----triangle-----
	glBegin(GL_TRIANGLES);
    	glVertex3f(6.0f, 2.0f, 0.0f);
	glVertex3f(9.0f, 2.0f, 0.0f);
	glVertex3f(7.5, 4.0f, 0.0f);
	glEnd();

glFlush ();
}
void init (void)
{
glClearColor (0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(1.0, 10.0, 1.0, 10.0, -10.0, 10.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (50, 50);
glutCreateWindow ("Draw rectriangle and triangle");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
