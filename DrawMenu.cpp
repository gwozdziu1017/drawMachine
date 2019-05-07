#include "DrawMenu.h"

DrawMenu::DrawMenu()
{
	this->GetMenu(InitialMenu);
}

// Switch przyjmujacy typ menu wyswietla dostepne opcje i uruchamia odpowiedni fragment kodu
void DrawMenu::GetMenu(MenuType menuType)
{
	switch(menuType)
	{
	case InitialMenu:
		DrawMenuInitial();
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

void DrawMenu::DrawMenuInitial()
{
	cout << "\t===Maszyna losujaca===\n" <<
		"Wybierz jedna z ponizszych opcji:\n" <<
		"1. Dodaj opcje do wylosowania\n" <<
		"2. Losuj\n" <<
		"3. Zakoncz\n";
}

void DrawMenu::DrawMenuAddItem()
{
	cout << "Podaj opcje ktore chcesz dodac do wylosowania:\n";
}

void DrawMenu::DrawMenuDrawingMenu()
{
	cout << "Aby zaczac losowanie wcisnij enter. \n"
		<<"Elementy mozliwe do wylosowania:\n";
}

void DrawMenu::DrawMenuEndMenu()
{
	cout << "Wylosowany element: \n";
}

// Czyszczenie ekranu
void DrawMenu::CleanScreen()
{
	system("cls");
}

MenuType DrawMenu::ConvertIntToDrawingMenu(const int intToConvert)
{
	switch (intToConvert)
	{
	case 1:
		return MenuType::InitialMenu;
		break;
	case 2:
		return MenuType::AddItemMenu;
		break;
	case 3:
		return MenuType::DrawingMenu;
		break;
	case 4:
		return MenuType::EndMenu;
		break;
	default:
		return MenuType::InitialMenu;
		break;
	}
}
