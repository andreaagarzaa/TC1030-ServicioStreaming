#ifndef PELICULA_H
#define PELICULA_H

#include "Video.hpp"
#include <string>
#include <iostream>

using namespace std;

class Pelicula : public Video{
	private:
		int Nominaciones;
		
	public:
		Pelicula();
		Pelicula(int, int, int, string, string, string, int);
		
		void setNominaciones(int _Nominaciones);
		
		int getNominaciones(){return Nominaciones;}
		
		void calificaVideo();
		void muestraDatos();
		
	
};
#endif

