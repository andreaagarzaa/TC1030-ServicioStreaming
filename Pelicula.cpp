#include "Pelicula.hpp"
//Constructores de Pelicula
Pelicula::Pelicula(){}
Pelicula::Pelicula(int _calificacion, int _anioLanzamiento, int _duracion, string _tipoVideo, string _nombreVideo, string _genero, int _Nominaciones) : Video(_calificacion, _anioLanzamiento, _duracion, _tipoVideo, _nombreVideo, _genero){
	Nominaciones = _Nominaciones;
}


//setters

void Pelicula::setNominaciones(int _Nominaciones){
	Nominaciones = _Nominaciones;
}

void Pelicula::calificaVideo(){
	Video::calificaVideo();
}

void Pelicula::muestraDatos(){
	Video::muestraDatos();
	cout<<"***** Nominaciones: " << getNominaciones() <<endl;
	
}



