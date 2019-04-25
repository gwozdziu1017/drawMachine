#include "DrawMenu.h"

// Switch przyjmujacy typ menu wyswietla dostepne opcje i uruchamia odpowiedni fragment kodu
void DrawMenu::GetMenu(MenuType menuType)
{
	switch(menuType)
	{
	case InitialMenu:
		break;
	case AddItemMenu:
		break;
	case DrawingMenu:
			break;
	case EndMenu:
		break;
	default:
			break;
	}
}

// Czyszczenie ekranu
void DrawMenu::CleanScreen()
{
	system("cls");
}