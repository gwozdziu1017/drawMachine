#include "DrawObjects.h"

DrawObjects::DrawObjects()
{
	this->itemVec = {};
	this->item = nullptr;
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
	this->itemVec.push_back(item);
}

// Sprawdzanie czy podany char to znak ESC
bool DrawObjects::IsEscKey(const char* input)
{
	return atoi(input) == 27;
}


