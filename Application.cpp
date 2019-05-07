#include "Application.h"
#include "DrawCore.h"
#include "DrawMenu.h"
#include "DrawObjects.h"

Application::Application()
{
}

bool Application::Run()
{
	short menuChoice = 0;
	new DrawMenu(); // zawsze wyrysuje sie initialowe
	cin >> menuChoice;	// wartosc z menu aplikacji co zrobic dalej
	
	DrawMenu::GetMenu(DrawMenu::ConvertIntToDrawingMenu(menuChoice));
	return true;
}


