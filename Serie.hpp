#ifndef SERIE_H
#define SERIE_H

#include "Video.hpp"
#include <string>
#include <iostream>

using namespace std;

class Serie : public Video{
	private:
		int cantEspisodios;
		int Temporadas;
		int Episodio;
		
	public:
		Serie();
		Serie(int, int, int, string, string, string, int, int, int);
		
		void setcantEspisodios(int _cantEspisodios);
		void setTemporadas(int _Temporadas);
		void setEpisodio(int _Episodio);
		
		int getcantEspisodios(){return cantEspisodios;}
		int getTemporadas(){return Temporadas;}
		int getEpisodio(){return Episodio;}
		
		void calificaVideo();
		void muestraDatos();
	
};

#endif

