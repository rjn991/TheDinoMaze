#include <iostream>
#include <GL/glut.h>
#include <stdlib.h>
float xr = 7, yr = 35;                                //Initialising moving pointer coordinates
using namespace std;
void keyPress(int key, int x, int y)
{
	switch (key)
	{
	case GLUT_KEY_UP:   yr = yr + 5;                        //Keeping x cordinates  constant while increasing y cordinates
						cout << y << endl;
						glutPostRedisplay();
						break;
	case GLUT_KEY_DOWN:	yr = yr - 5;                       //Keeping x cordinates  constant while decreasing y cordinates
						cout << y << endl;
						glutPostRedisplay();
						break;
	case GLUT_KEY_LEFT: xr = xr - 5;                       //Keeping y cordinates  constant while decreasing x cordinates
						cout << x << endl;
						glutPostRedisplay();
						break;
	case GLUT_KEY_RIGHT: xr = xr + 5;                      //Keeping y cordinates  constant while increasing x cordinates
						cout << x << endl;
						glutPostRedisplay();
						break;
	}
	glFlush();
}
void maze()
{
	glColor3f(0.0, 0.0, 0.0);
	glLineWidth(3.0);
	glBegin(GL_LINE_STRIP);
		glVertex2i(10 * 3, 20 * 3);
		glVertex2i(10 * 3, 170 * 3);
		glVertex2i(20 * 3, 170 * 3);
		glVertex2i(20 * 3, 160 * 3);
		glVertex2i(90 * 3, 160 * 3);
		glVertex2i(90 * 3, 170 * 3);
		glVertex2i(170 * 3, 170 * 3);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex2i(10 * 3, 10 * 3);
		glVertex2i(170 * 3, 10 * 3);
		glVertex2i(170 * 3, 160 * 3);
		glVertex2i(160 * 3, 160 * 3);
		glVertex2i(160 * 3, 20 * 3);
		glVertex2i(60 * 3, 20 * 3);
		glVertex2i(60 * 3, 30 * 3);
		glVertex2i(70 * 3, 30 * 3);
		glVertex2i(70 * 3, 40 * 3);
		glVertex2i(80 * 3, 40 * 3);
		glVertex2i(80 * 3, 50 * 3);
		glVertex2i(140 * 3, 50 * 3);
		glVertex2i(140 * 3, 130 * 3);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex2i(20 * 3, 20 * 3);
		glVertex2i(50 * 3, 20 * 3);
		glVertex2i(50 * 3, 40 * 3);
		glVertex2i(60 * 3, 40 * 3);
		glVertex2i(60 * 3, 50 * 3);
		glVertex2i(70 * 3, 50 * 3);
		glVertex2i(70 * 3, 60 * 3);
		glVertex2i(130 * 3, 60 * 3);
		glVertex2i(130 * 3, 70 * 3);
		glVertex2i(90 * 3, 70 * 3);
		glVertex2i(90 * 3, 90 * 3);
		glVertex2i(40 * 3, 90 * 3);
		glVertex2i(40 * 3, 130 * 3);
		glVertex2i(60 * 3, 130 * 3);
		glVertex2i(60 * 3, 150 * 3);
		glVertex2i(70 * 3, 150 * 3);
		glVertex2i(70 * 3, 130 * 3);
		glVertex2i(80 * 3, 130 * 3);
		glVertex2i(80 * 3, 120 * 3);
		glVertex2i(110 * 3, 120 * 3);
		glVertex2i(110 * 3, 130 * 3);
		glVertex2i(90 * 3, 130 * 3);
		glVertex2i(90 * 3, 160 * 3);
		glVertex2i(100 * 3, 160 * 3);
		glVertex2i(100 * 3, 150 * 3);
		glVertex2i(120 * 3, 150 * 3);
		glVertex2i(120 * 3, 160 * 3);
		glVertex2i(100 * 3, 160 * 3);
	glEnd();
	glBegin(GL_LINES);
		glVertex2i(20 * 3, 170 * 3);
		glVertex2i(90 * 3, 170 * 3);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex2i(20 * 3, 20 * 3);
		glVertex2i(20 * 3, 150 * 3);
		glVertex2i(90 * 3, 150 * 3);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex2i(150 * 3, 20 * 3);
		glVertex2i(150 * 3, 140 * 3);
		glVertex2i(120 * 3, 140 * 3);
		glVertex2i(120 * 3, 110 * 3);
		glVertex2i(70 * 3, 110 * 3);
		glVertex2i(70 * 3, 120 * 3);
		glVertex2i(50 * 3, 120 * 3);
		glVertex2i(50 * 3, 100 * 3);
		glVertex2i(100 * 3, 100 * 3);
		glVertex2i(100 * 3, 80 * 3);
		glVertex2i(140 * 3, 80 * 3);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex2i(130 * 3, 130 * 3);
		glVertex2i(130 * 3, 100 * 3);
		glVertex2i(110 * 3, 100 * 3);
		glVertex2i(110 * 3, 90 * 3);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex2i(30 * 3, 20 * 3);
		glVertex2i(30 * 3, 40 * 3);
		glVertex2i(40 * 3, 40 * 3);
		glVertex2i(40 * 3, 80 * 3);
		glVertex2i(30 * 3, 80 * 3);
		glVertex2i(30 * 3, 100 * 3);
		glVertex2i(20 * 3, 100 * 3);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex2i(90 * 3, 30 * 3);
		glVertex2i(110 * 3, 30 * 3);
		glVertex2i(110 * 3, 40 * 3);
		glVertex2i(90 * 3, 40 * 3);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex2i(130 * 3, 30 * 3);
		glVertex2i(140 * 3, 30 * 3);
		glVertex2i(140 * 3, 40 * 3);
		glVertex2i(110 * 3, 40 * 3);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex2i(20 * 3, 150 * 3);
		glVertex2i(40 * 3, 150 * 3);
		glVertex2i(40 * 3, 140 * 3);
		glVertex2i(50 * 3, 140 * 3);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex2i(130 * 3, 170 * 3);
		glVertex2i(130 * 3, 150 * 3);
		glVertex2i(150 * 3, 150 * 3);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex2i(50 * 3, 50 * 3);
		glVertex2i(50 * 3, 60 * 3);
		glVertex2i(60 * 3, 60 * 3);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex2i(50 * 3, 70 * 3);
		glVertex2i(60 * 3, 70 * 3);
		glVertex2i(60 * 3, 80 * 3);
	glEnd();
	glBegin(GL_LINES);
		glVertex2i(40 * 3, 30 * 3);
		glVertex2i(40 * 3, 40 * 3);
	glEnd();
	glBegin(GL_LINES);
		glVertex2i(20 * 3, 60 * 3);
		glVertex2i(40 * 3, 60 * 3);
	glEnd();
	glBegin(GL_LINES);
		glVertex2i(60 * 3, 70 * 3);
		glVertex2i(80 * 3, 70 * 3);
	glEnd();
	glBegin(GL_LINES);
		glVertex2i(30 * 3, 110 * 3);
		glVertex2i(40 * 3, 110 * 3);
	glEnd();
	glBegin(GL_LINES);
		glVertex2i(20 * 3, 120 * 3);
		glVertex2i(30 * 3, 120 * 3);
	glEnd(); glBegin(GL_LINES);
		glVertex2i(30 * 3, 130 * 3);
		glVertex2i(30 * 3, 150 * 3);
	glEnd(); glBegin(GL_LINES);
		glVertex2i(40 * 3, 150 * 3);
		glVertex2i(60 * 3, 150 * 3);
	glEnd(); glBegin(GL_LINES);
		glVertex2i(70 * 3, 150 * 3);
		glVertex2i(80 * 3, 150 * 3);
	glEnd();
}
void display()
{

	glClear(GL_COLOR_BUFFER_BIT);
	maze();
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
		glVertex2i(30 / 12 + xr, 70 / 12 + yr); //1
		glVertex2i(30 / 12 + xr, 100 / 12 + yr);
		glVertex2i(140 / 12 + xr, 100 / 12 + yr);
		glVertex2i(140 / 12 + xr, 70 / 12 + yr);
		glVertex2i(80 / 12 + xr, 100 / 12 + yr);//12
		glVertex2i(80 / 12 + xr, 130 / 12 + yr);
		glVertex2i(120 / 12 + xr, 130 / 12 + yr);
		glVertex2i(120 / 12 + xr, 100 / 12 + yr);
		glVertex2i(50 / 12 + xr, 50 / 12 + yr);//3
		glVertex2i(50 / 12 + xr, 70 / 12 + yr);
		glVertex2i(120 / 12 + xr, 70 / 12 + yr);
		glVertex2i(120 / 12 + xr, 50 / 12 + yr);
		glVertex2i(120 / 12 + xr, 100 / 12 + yr);//4
		glVertex2i(120 / 12 + xr, 180 / 12 + yr);
		glVertex2i(150 / 12 + xr, 180 / 12 + yr);
		glVertex2i(150 / 12 + xr, 100 / 12 + yr);
		glVertex2i(150 / 12 + xr, 160 / 12 + yr);//5
		glVertex2i(150 / 12 + xr, 190 / 12 + yr);
		glVertex2i(210 / 12 + xr, 190 / 12 + yr);
		glVertex2i(210 / 12 + xr, 160 / 12 + yr);
		glVertex2i(60 / 12 + xr, 30 / 12 + yr);//6
		glVertex2i(60 / 12 + xr, 50 / 12 + yr);
		glVertex2i(80 / 12 + xr, 50 / 12 + yr);
		glVertex2i(80 / 12 + xr, 30 / 12 + yr);
		glVertex2i(60 / 12 + xr, 20 / 12 + yr);//rear leg
		glVertex2i(60 / 12 + xr, 30 / 12 + yr);
		glVertex2i(70 / 12 + xr, 30 / 12 + yr);
		glVertex2i(70 / 12 + xr, 20 / 12 + yr);
		glVertex2i(60 / 12 + xr, 10 / 12 + yr);
		glVertex2i(60 / 12 + xr, 20 / 12 + yr);
		glVertex2i(80 / 12 + xr, 20 / 12 + yr);
		glVertex2i(80 / 12 + xr, 10 / 12 + yr);
		glVertex2i(80 / 12 + xr, 40 / 12 + yr);
		glVertex2i(80 / 12 + xr, 50 / 12 + yr);
		glVertex2i(90 / 12 + xr, 50 / 12 + yr);
		glVertex2i(90 / 12 + xr, 40 / 12 + yr);
		glVertex2i(110 / 12 + xr, 10 / 12 + yr);//front foot
		glVertex2i(110 / 12 + xr, 50 / 12 + yr);
		glVertex2i(120 / 12 + xr, 50 / 12 + yr);
		glVertex2i(120 / 12 + xr, 10 / 12 + yr);
		glVertex2i(100 / 12 + xr, 40 / 12 + yr);
		glVertex2i(100 / 12 + xr, 50 / 12 + yr);
		glVertex2i(110 / 12 + xr, 50 / 12 + yr);
		glVertex2i(110 / 12 + xr, 40 / 12 + yr);
		glVertex2i(120 / 12 + xr, 10 / 12 + yr);
		glVertex2i(120 / 12 + xr, 20 / 12 + yr);
		glVertex2i(130 / 12 + xr, 20 / 12 + yr);
		glVertex2i(130 / 12 + xr, 10 / 12 + yr);
		glVertex2i(10 / 12 + xr, 90 / 12 + yr); // tail
		glVertex2i(10 / 12 + xr, 120 / 12 + yr);
		glVertex2i(30 / 12 + xr, 120 / 12 + yr);
		glVertex2i(30 / 12 + xr, 90 / 12 + yr);
		glVertex2i(10 / 12 + xr, 120 / 12 + yr);
		glVertex2i(10 / 12 + xr, 170 / 12 + yr);
		glVertex2i(20 / 12 + xr, 170 / 12 + yr);
		glVertex2i(20 / 12 + xr, 120 / 12 + yr);
		glVertex2i(20 / 12 + xr, 80 / 12 + yr);//tail2
		glVertex2i(20 / 12 + xr, 90 / 12 + yr);
		glVertex2i(30 / 12 + xr, 90 / 12 + yr);
		glVertex2i(80 / 12 + xr, 90 / 12 + yr);
		glVertex2i(30 / 12 + xr, 100 / 12 + yr);//spoiler
		glVertex2i(30 / 12 + xr, 110 / 12 + yr);
		glVertex2i(40 / 12 + xr, 110 / 12 + yr);
		glVertex2i(40 / 12 + xr, 100 / 12 + yr);
		glVertex2i(40 / 12 + xr, 60 / 12 + yr);//leg piece
		glVertex2i(40 / 12 + xr, 70 / 12 + yr);
		glVertex2i(50 / 12 + xr, 70 / 12 + yr);
		glVertex2i(50 / 12 + xr, 60 / 12 + yr);
		glVertex2i(120 / 12 + xr, 60 / 12 + yr);// leg piece 2
		glVertex2i(120 / 12 + xr, 70 / 12 + yr);
		glVertex2i(130 / 12 + xr, 70 / 12 + yr);
		glVertex2i(130 / 12 + xr, 60 / 12 + yr);
		glVertex2i(140 / 12 + xr, 80 / 12 + yr);// six packs
		glVertex2i(140 / 12 + xr, 100 / 12 + yr);
		glVertex2i(150 / 12 + xr, 100 / 12 + yr);
		glVertex2i(150 / 12 + xr, 80 / 12 + yr);
		glVertex2i(150 / 12 + xr, 110 / 12 + yr);//arm
		glVertex2i(150 / 12 + xr, 120 / 12 + yr);
		glVertex2i(170 / 12 + xr, 120 / 12 + yr);
		glVertex2i(170 / 12 + xr, 110 / 12 + yr);
		glVertex2i(160 / 12 + xr, 100 / 12 + yr);
		glVertex2i(160 / 12 + xr, 110 / 12 + yr);
		glVertex2i(170 / 12 + xr, 110 / 12 + yr);
		glVertex2i(170 / 12 + xr, 100 / 12 + yr);
		glVertex2i(150 / 12 + xr, 140 / 12 + yr);// jaw
		glVertex2i(150 / 12 + xr, 150 / 12 + yr);
		glVertex2i(190 / 12 + xr, 150 / 12 + yr);
		glVertex2i(190 / 12 + xr, 140 / 12 + yr);
		glVertex2i(150 / 12 + xr, 150 / 12 + yr);
		glVertex2i(150 / 12 + xr, 160 / 12 + yr);
		glVertex2i(160 / 12 + xr, 160 / 12 + yr);
		glVertex2i(160 / 12 + xr, 150 / 12 + yr);
		glVertex2i(130 / 12 + xr, 190 / 12 + yr);
		glVertex2i(130 / 12 + xr, 200 / 12 + yr);
		glVertex2i(200 / 12 + xr, 200 / 12 + yr);
		glVertex2i(200 / 12 + xr, 190 / 12 + yr);
		glVertex2i(120 / 12 + xr, 180 / 12 + yr);
		glVertex2i(120 / 12 + xr, 190 / 12 + yr);
		glVertex2i(140 / 12 + xr, 190 / 12 + yr);
		glVertex2i(140 / 12 + xr, 180 / 12 + yr);
		glVertex2i(90 / 12 + xr, 130 / 12 + yr);
		glVertex2i(90 / 12 + xr, 140 / 12 + yr);
		glVertex2i(120 / 12 + xr, 140 / 12 + yr);
		glVertex2i(120 / 12 + xr, 130 / 12 + yr);
		glVertex2i(110 / 12 + xr, 140 / 12 + yr);// back
		glVertex2i(110 / 12 + xr, 150 / 12 + yr);
		glVertex2i(120 / 12 + xr, 150 / 12 + yr);
		glVertex2i(120 / 12 + xr, 140 / 12 + yr);
		glVertex2i(60 / 12 + xr, 100 / 12 + yr);
		glVertex2i(60 / 12 + xr, 110 / 12 + yr);
		glVertex2i(80 / 12 + xr, 110 / 12 + yr);
		glVertex2i(80 / 12 + xr, 100 / 12 + yr);
		glVertex2i(70 / 12 + xr, 110 / 12 + yr);
		glVertex2i(70 / 12 + xr, 120 / 12 + yr);
		glVertex2i(80 / 12 + xr, 120 / 12 + yr);
		glVertex2i(80 / 12 + xr, 110 / 12 + yr);
	glEnd();
	glutSwapBuffers();
	glutPostRedisplay();


}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	int mode = GLUT_RGB | GLUT_DOUBLE;
	glutInitDisplayMode(mode);
	glutInitWindowSize(768, 768);
	glutCreateWindow("THE MAZE");
	glutSpecialFunc(keyPress);
	glutDisplayFunc(display);
	glClearColor(0.0, 0.7, 1.0, 1.0);
	gluOrtho2D(0.0, 650.0, 0.0, 650.0);
	glutMainLoop();
	return 0;
}
