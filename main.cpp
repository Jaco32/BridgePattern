#include "Opakowanie.h"
#include "Przedmiot.h"

int main()
{
	Przedmiot* dlugopis = new Dlugopis(new Male(), 10, 10, 0.7, 0.7);
	Przedmiot* atlas = new Ksiazka(new Duze(), 1000, 15, 2.5, 28);
	Przedmiot* adidasy = new Buty(new KopertaBabelkowa(), 550, 20, 7, 5);
	
	dlugopis->spakuj();
	atlas->spakuj();
	adidasy->spakuj();
	
	delete dlugopis;
	delete atlas;
	delete adidasy;
	
	return 0;
}
