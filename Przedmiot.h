#ifndef PRZEDMIOT_H
#define PRZEDMIOT_H

#include <memory>
#include <utility>
#include "Opakowanie.h"

class Przedmiot {
protected:
   unique_ptr<Opakowanie> opakowanie;
   float waga; // gramy
   float szerokosc; // cm
   float wysokosc;  // cm
   float glebokosc; // cm
public:
   Przedmiot(unique_ptr<Opakowanie> o,
             float wg,
             float sz,
             float wy,
             float gl)
   {
      opakowanie = std::move(o);
      waga = wg;
      szerokosc = sz;
      wysokosc = wy;
      glebokosc = gl;
   }
   
   virtual void spakuj() = 0;
   
   virtual ~Przedmiot() {}
};

class Dlugopis: public Przedmiot {
public:
   Dlugopis(unique_ptr<Opakowanie> o,
            float wg,
            float sz,
            float wy,
            float gl) : Przedmiot(std::move(o), wg, sz, wy, gl) {}

   void spakuj() {
      opakowanie->spakuj_dlugopis();
   }
};

class Ksiazka: public Przedmiot {
public:
   Ksiazka(unique_ptr<Opakowanie> o,
           float wg,
           float sz,
           float wy,
           float gl) : Przedmiot(std::move(o), wg, sz, wy, gl) {}

   void spakuj() {
      opakowanie->spakuj_ksiazke();
   }
};

class Buty: public Przedmiot {
public:
   Buty(unique_ptr<Opakowanie> o,
        float wg,
        float sz,
        float wy,
        float gl) : Przedmiot(std::move(o), wg, sz, wy, gl) {}

   void spakuj() {
      opakowanie->spakuj_buty();
   }
};

#endif // PRZEDMIOT_H
