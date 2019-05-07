#include "Application.h"

int main()
{
	Application* app = new Application();
	while (!app->Run())
	{
		delete app;
		return 0;
	}
}