/*
*	Klasy obslugujace wyswietlanie menu w aplikacji i przechodzenie do konkretnej opcji
*	DG 25.04.2019
*/

#pragma once

#include <iostream>
#include <cstdlib>	// system("cls")

using std::cout;
using std::cin;

enum MenuType
{
	InitialMenu = 1,
	AddItemMenu,
	DrawingMenu,
	EndMenu
};

static class DrawMenu
{
public:
	DrawMenu();

	static void GetMenu(MenuType);
	static void DrawMenuInitial();
	static void DrawMenuAddItem();
	static void DrawMenuDrawingMenu();
	static void DrawMenuEndMenu();
	static void CleanScreen();
	static MenuType ConvertIntToDrawingMenu(const int intToConvert);

};