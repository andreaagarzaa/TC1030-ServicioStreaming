#include "Serie.hpp"
//Constructores
Serie::Serie(){}
Serie::Serie(int _calificacion, int _anioLanzamiento, int _duracion, string _tipoVideo, string _nombreVideo, string _genero, int _cantEspisodios, int _Temporadas, int _Episodio) : Video(_calificacion, _anioLanzamiento, _duracion, _tipoVideo, _nombreVideo, _genero){
	cantEspisodios = _cantEspisodios;
	Temporadas = _Temporadas;
	Episodio = _Episodio;
}

//Setters

void Serie::setcantEspisodios(int _cantEspisodios){
	cantEspisodios = _cantEspisodios;
}
void Serie::setTemporadas(int _Temporadas){
	Temporadas = _Temporadas;
}
void Serie::setEpisodio(int _Episodio){
	Episodio = _Episodio;
}



void Serie::calificaVideo(){
	Video::calificaVideo();
	
}

void Serie::muestraDatos(){
	Video::muestraDatos();
	cout<<"***** Capitulos: " << getcantEspisodios() <<endl;
	cout<<"***** Temporada: " << getTemporadas() <<endl;
	cout<<"***** Episodio: " << getEpisodio() <<endl;
	
}


