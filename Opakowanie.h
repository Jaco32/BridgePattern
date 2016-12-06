#ifndef OPAKOWANIE_H
#define OPAKOWANIE_H

#include <iostream>

using namespace std;

class Opakowanie {
public:
   virtual void spakuj_dlugopis() {}
   virtual void spakuj_ksiazke() {}
   virtual void spakuj_buty() {}
   virtual ~Opakowanie() {}
};

class Male: public Opakowanie {
public:
   void spakuj_dlugopis() {
      cout << "Pakuje dlugopis do malego opakowania" << endl;
   }

   void spakuj_ksiazke() {
      cout << "Pakuje ksiazke do malego opakowania" << endl;
   }
   
   void spakuj_buty() {
      cout << "Pakuje buty do malego opakowania" << endl;
   }   
};

class Duze: public Opakowanie {
public:   
   void spakuj_dlugopis() {
      cout << "Pakuje dlugopis do duzego opakowania" << endl;
   }

   void spakuj_ksiazke() {
      cout << "Pakuje ksiazke do duzego opakowania" << endl;
   }
   
   void spakuj_buty() {
      cout << "Pakuje buty do duzego opakowania" << endl;
   }   
   
};

class KopertaBabelkowa: public Opakowanie {
public:   
   void spakuj_dlugopis() {
      cout << "Pakuje dlugopis do koperty babelkowej" << endl;
   }

   void spakuj_ksiazke() {
      cout << "Pakuje ksiazke do koperty babelkowej" << endl;
   }
   
   void spakuj_buty() {
      cout << "Pakuje buty do koperty babelkowej. Jesli cos takiego w ogole ma sens :)" << endl;
   }      
};

#endif // OPAKOWANIE_H
