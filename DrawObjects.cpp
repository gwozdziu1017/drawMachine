#include "DrawObjects.h"

DrawObjects::DrawObjects()
{
	this->itemVec = {};
	this->item = nullptr;
	this->InsertIntoContainer();
}

// Funkcja ktora zapisuje do vectora itemow wpisane pzrez uzytkownika wartosci
// dopoki uzytkownik nie wcisnie klawisza ESC
void DrawObjects::InsertIntoContainer()
{
	cin >> item;
	while (!IsEscKey(item))
	{
		InsertItem(item);
	}
}

// Wpisuje do vectora pojedynczy element
void DrawObjects::InsertItem(const char*)
{
	itemVec.push_back(item);
}

// Sprawdzanie czy podany char to znak ESC
bool DrawObjects::IsEscKey(const char* input)
{
	atoi(input) == 27 ? true: false;
}


