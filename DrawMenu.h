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

class DrawMenu
{
public:
	void GetMenu(MenuType);
	void CleanScreen();
};