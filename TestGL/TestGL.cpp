// TestGL.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "TestGL.h"
#include "glew.h"
#include "glfw3.h"
#define WINDOW_WIDTH ( 800 )
#define WINDOW_HEIGHT ( 600 )

int APIENTRY _tWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPTSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
	
	GLFWwindow * _mainWindow = glfwCreateWindow(WINDOW_WIDTH,
		WINDOW_HEIGHT,
		"test",
		glfwGetPrimaryMonitor(),
		NULL);
	glfwMakeContextCurrent(_mainWindow);



	/*
	glBegin(GL_TRIANGLES);
	glVertex3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glEnd();
	*/

	return (int) 1;
}
