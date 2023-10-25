#ifndef VIDEO_H
#define VIDEO_H

#include <string>
#include <iostream>
// La clase Video es la clase padre (base)

using namespace std;

class Video
{
	private:
		int calificacion;		
		int anioLanzamiento;
		int duracion;
		string tipoVideo;
		string nombreVideo;
		string genero;
		
	public:
		Video();
		Video(int, int, int, string, string, string);
		
		void setCalificacion(int _calificacion);
        void setAnioLanzamiento(int _anioLanzamiento);
        void setDuracion(int _duracion);
		void setTipoVideo(string _tipoVideo);
		void setNombreVideo(string _nombreVideo);
		void setGenero(string _genero);
		
		//getters
		int getCalificacion(){return calificacion;}	
		int getAnioLanzamiento(){return anioLanzamiento;}	
		int getDuracion(){return duracion;}	
		string getTipoVideo(){return tipoVideo;}	
		string getNombreVideo(){return nombreVideo;}	
		string getGenero(){return genero;}	
		
		
		virtual void calificaVideo();
		
		virtual void muestraDatos();
		
		virtual void muestraVideo();
	
};

#endif

