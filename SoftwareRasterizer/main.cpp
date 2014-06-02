#include "GlobalHeader.h"


void DrawScene()
{
	//Clear information from last draw
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	
	glutSwapBuffers(); //Send the 3D scene to the screen
}

//Called when the window is resized
void HandleResize(int w, int h) {
	//Tell OpenGL how to convert from coordinates to pixel values
	glViewport(0, 0, w, h);
	
	glMatrixMode(GL_PROJECTION); //Switch to setting the camera perspective
	
	//Set the camera perspective
	glLoadIdentity(); //Reset the camera
	gluPerspective(45.0,                  //The camera angle
				   (double)w / (double)h, //The width-to-height ratio
				   1.0,                   //The near z clipping coordinate
				   200.0);                //The far z clipping coordinate
}

void Close()
{
	delete rasterizer;
}

int main(int argc, char ** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(1280, 720);
	glutCreateWindow("Software Rasterizer");

	glEnable(GL_DEPTH_TEST);
	rasterizer = new Rasterizer();

	glutDisplayFunc(DrawScene);
	glutReshapeFunc(HandleResize);
	glutCloseFunc(Close);
	glutMainLoop();

	return 0;
}
