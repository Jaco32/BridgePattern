#ifndef PRZEDMIOT_H
#define PRZEDMIOT_H

#include "Opakowanie.h"

class Przedmiot {
protected:
   Opakowanie* opakowanie;
   float waga; // gramy
   float szerokosc; // cm
   float wysokosc;  // cm
   float glebokosc; // cm
public:
   Przedmiot(Opakowanie* o,
             float wg,
             float sz,
             float wy,
             float gl)
   {
      opakowanie = o;
      waga = wg;
      szerokosc = sz;
      wysokosc = wy;
      glebokosc = gl;
   }
   
   virtual void spakuj() {}
   
   virtual ~Przedmiot() {}
};

class Dlugopis: public Przedmiot {
public:
   Dlugopis(Opakowanie *o,
            float wg,
            float sz,
            float wy,
            float gl) : Przedmiot(o, wg, sz, wy, gl) {}

   void spakuj() {
      opakowanie->spakuj_dlugopis();
   }
};

class Ksiazka: public Przedmiot {
public:
   Ksiazka(Opakowanie *o,
           float wg,
           float sz,
           float wy,
           float gl) : Przedmiot(o, wg, sz, wy, gl) {}

   void spakuj() {
      opakowanie->spakuj_ksiazke();
   }
};

class Buty: public Przedmiot {
public:
   Buty(Opakowanie *o,
        float wg,
        float sz,
        float wy,
        float gl) : Przedmiot(o, wg, sz, wy, gl) {}

   void spakuj() {
      opakowanie->spakuj_buty();
   }
};

#endif // PRZEDMIOT_H
