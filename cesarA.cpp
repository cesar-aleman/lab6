//Cesar A
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>
using namespace std;
#include <unistd.h>
#include <X11/Xlib.h>
#include <X11/keysym.h>
#include <GL/glx.h>
#include "log.h"
#include "fonts.h"

void showNameCesarA()
{
	Rect r;
	r.bot = 100;
	r.left = 100;
	r.center = 0;
	ggprint8b(&r, 16, 0x00ffff00, "Cesar Aleman");
}

void drawBox(int x, int y)
{
	static float angle = 0.0;

	glColor3ub(255, 0, 0);
	glPushMatrix();
	glTranslatef(x, y, 0.0);
	//           angle       x     y     z
	glRotatef(angle, 0.0f, 0.0f, 1.0f);
	glTranslatef(-50.0, -50.0, 0.0);
	angle = angle + 2.5;
	glBegin(GL_QUADS);
		glVertex2i(0,0);
		glVertex2i(0,100);
		glVertex2i(100,100);
		glVertex2i(100,0);

	glEnd();
	Rect r;
	r.bot = 50;//(45)
	r.left = 50;//(10)
	r.center = 1;//(0)
	ggprint8b(&r, 16, 0x00ffff00, "Cesar Aleman");
	glPopMatrix();

}