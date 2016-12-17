#include <memory>
#include <utility>
#include "Opakowanie.h"
#include "Przedmiot.h"

int main()
{
	unique_ptr<Opakowanie> male(new Male());
	unique_ptr<Przedmiot> dlugopis(new Dlugopis(std::move(male), 10, 10, 0.7, 0.7));
	
	unique_ptr<Opakowanie> duze(new Duze());
	unique_ptr<Przedmiot> atlas(new Ksiazka(std::move(duze), 1000, 15, 2.5, 28));
	
	unique_ptr<Opakowanie> kopertababelkowa(new KopertaBabelkowa());
	unique_ptr<Przedmiot> adidasy(new Buty(std::move(kopertababelkowa), 550, 20, 7, 5));
	
	dlugopis->spakuj();
	atlas->spakuj();
	adidasy->spakuj();
	
	return 0;
}
