#include <iostream>
#include <windows.h>//Si no tienen windows borren esta libreria
#include <string>
#include <conio.h>
#include "Serie.hpp"
#include "Pelicula.hpp"

/*Santiago Segura A01246578 Equipo 9*/
/*Andrea Garza A00832444 Equipo 9*/
/*Andres Vera A00831778*/
using namespace std;
void gotoxy(int x, int y){
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon,dwPos);
}


int main(){
	//---------------Esta parte se puede borrar si no tienen una pc windows
	gotoxy(10,5);
	for (int x=0;x<=30;x++)
	{
		system("CLS");
		gotoxy(x,5);
		cout << "***** Bienvenido a nuestro servicio de streaming *****";
		Sleep(10);
	}
	//-----------------------------------------------------------------------
	cout<<""<<endl;
	int opc1, a,e,i,o,u;
	int a1,a2,a3,a4,o1,o2,o3,o4,u1,u2,u3,u4;
	char opc2, opc3, opc4;
	int opc6,opc7,opc8;
	//opc2 = getch();
	//cout << "***** Bienvenido a nuestro servicio de streaming *****";
	do{
	
	    Serie p1 = Serie(a, 2020, 120, "Serie", "Malcolm in the middle", "Ficcion", 5, 1, 1);
	    Serie p6 = Serie(a1, 2020, 120, "Serie", "Malcolm in the middle", "Ficcion", 5, 1, 2);
	    Serie p7 = Serie(a2, 2020, 120, "Serie", "Malcolm in the middle", "Ficcion", 5, 1, 3);
	    Serie p8 = Serie(a3, 2020, 120, "Serie", "Malcolm in the middle", "Ficcion", 5, 1, 4);
	    Serie p9 = Serie(a4, 2020, 120, "Serie", "Malcolm in the middle", "Ficcion", 5, 1, 5);
	    Pelicula p2 = Pelicula(e, 2021, 100, "Pelicula", "Thor", "Ficcion", 2);
	    Pelicula p3 = Pelicula(i, 2021, 200, "Pelicula", "Balck Wid", "Ficcion", 4);
	    Serie p4 = Serie(o, 2020, 120, "Serie", "Los simpson", "Ficcion", 5, 1, 1);
	    Serie p5 = Serie(o, 2020, 120, "Serie", "Los simpson", "Ficcion", 5, 1, 2);
	    Serie p10 = Serie(o, 2020, 120, "Serie", "Los simpson", "Ficcion", 5, 1, 3);
	    Serie p11 = Serie(o, 2020, 120, "Serie", "Los simpson", "Ficcion", 5, 1, 4);
	    Serie p12 = Serie(o, 2020, 120, "Serie", "Los simpson", "Ficcion", 5, 1, 5);
	    Serie p13 = Serie(u, 2020, 120, "Serie", "Loki", "Ficcion", 5, 1 ,1);
	    Serie p14 = Serie(u, 2020, 120, "Serie", "Loki", "Ficcion", 5, 1 ,2);
	    Serie p15 = Serie(u, 2020, 120, "Serie", "Loki", "Ficcion", 5, 1 ,3);
	    Serie p16 = Serie(u, 2020, 120, "Serie", "Loki", "Ficcion", 5, 1 ,4);
	    Serie p17 = Serie(u, 2020, 120, "Serie", "Loki", "Ficcion", 5, 1 ,5);
	    

	    cout<<"\t\t\t Menu"<<endl;
	    cout<<"\t\t (1) Calificar un video"<<endl;
	    cout<<"\t\t (2) Mostrar Datos"<<endl;
	    cout<<"\t\t (3) Ver un video"<<endl;
	    cout<<"\t\t (4) Salir del programa"<<endl;
	    cout<<"R: ";
	    cin>>opc1;
	    system ("cls");
	    switch(opc1){
	    	case 1:
	    		cout<<"\t ******Lista de tipos de videos a calificar*****"<<endl;
	    		cout<<"---- (a) Peliculas"<<endl;
	    		cout<<"---- (b) Series"<<endl;
	    		cout<<"Escoja un video( a / b): ";
	    		cin>>opc2;
	    		system ("cls");
	    		switch(opc2){
	    			case'a':
	    				cout<<"\t ******Lista de Peliculas*****"<<endl;
	    				cout<<"---- (a) Thor"<<endl;
	    				cout<<"---- (b) Black Widow"<<endl;
	    				cout<<"Escoja una pelicula( a / b): ";
	    				cin>>opc3;
	    				system ("cls");
						switch(opc3){
							case'a':
								p2.calificaVideo();
								cin>>e;
								cout<<"Este video fue calificado"<<endl;
								break;
							case'b':
								p3.calificaVideo();
								cin>>i;
								cout<<"Este video fue calificado"<<endl;
								break;
						}
	    			    break;	
	    			case'b':
	    				cout<<"\t ******Lista de Series*****"<<endl;
	    				cout<<"---- (a) Malcolm in the middle"<<endl;
	    				cout<<"---- (b) Los simpson"<<endl;
	    				cout<<"---- (c) Loki"<<endl;
	    				cout<<"Escoja una serie( a / b / c): ";
	    				cin>>opc4;
	    				system ("cls");
						switch(opc4){
							case'a':
								cout<<"\t------- Malcolm in the middle"<<endl;
								cout<<"\t ******Lista de capitulos*****"<<endl;
	    				        cout<<"---- (1) Capitulo 1"<<endl;
	    				        cout<<"---- (2) Capitulo 2"<<endl;
	    				        cout<<"---- (3) Capitulo 3"<<endl;
	    				        cout<<"---- (4) Capitulo 4"<<endl;
	    				        cout<<"---- (5) Capitulo 5"<<endl;
	    				        cout<<"Capitulo: ";
	    				        cin>>opc6;
	    				        system ("cls");
	    				        switch(opc6){
	    				        	case 1:
	    				        		p1.calificaVideo();
								        cin>>a;
								        cout<<"Este video fue calificado"<<endl;
								        break;
	    				        	case 2:
	    				        		p6.calificaVideo();
								        cin>>a1;
								        cout<<"Este video fue calificado"<<endl;
								        break;
	    				        	case 3:
	    				        		p7.calificaVideo();
								        cin>>a2;
								        cout<<"Este video fue calificado"<<endl;
								        break;
	    				        	case 4:
	    				        		p8.calificaVideo();
								        cin>>a3;
								        cout<<"Este video fue calificado"<<endl;
								        break;
	    				        	case 5:
	    				        		p9.calificaVideo();
								        cin>>a4;
								        cout<<"Este video fue calificado"<<endl;
								        break;
								}
								break;
							case'b':
								cout<<"\t-------- Los simpson"<<endl;
								cout<<"\t ******Lista de capitulos*****"<<endl;
	    				        cout<<"---- (1) Capitulo 1"<<endl;
	    				        cout<<"---- (2) Capitulo 2"<<endl;
	    				        cout<<"---- (3) Capitulo 3"<<endl;
	    				        cout<<"---- (4) Capitulo 4"<<endl;
	    				        cout<<"---- (5) Capitulo 5"<<endl;
	    				        cout<<"Capitulo: ";
	    				        cin>>opc7;
	    				        system ("cls");
	    				        switch(opc7){
	    				        	case 1:
	    				        		p4.calificaVideo();
								        cin>>o;
								        cout<<"Este video fue calificado"<<endl;
								        break;
	    				        	case 2:
	    				        		p5.calificaVideo();
								        cin>>o1;
								        cout<<"Este video fue calificado"<<endl;
								        break;
	    				        	case 3:
	    				        		p10.calificaVideo();
								        cin>>o2;
								        cout<<"Este video fue calificado"<<endl;
								        break;
	    				        	case 4:
	    				        		p11.calificaVideo();
								        cin>>o3;
								        cout<<"Este video fue calificado"<<endl;
								        break;
	    				        	case 5:
	    				        		p12.calificaVideo();
								        cin>>o4;
								        cout<<"Este video fue calificado"<<endl;
								        break;
								}
								break;
							case'c':
								cout<<"\t------- Loki"<<endl;
								cout<<"\t ******Lista de capitulos*****"<<endl;
	    				        cout<<"---- (1) Capitulo 1"<<endl;
	    				        cout<<"---- (2) Capitulo 2"<<endl;
	    				        cout<<"---- (3) Capitulo 3"<<endl;
	    				        cout<<"---- (4) Capitulo 4"<<endl;
	    				        cout<<"---- (5) Capitulo 5"<<endl;
	    				        cout<<"Capitulo: ";
	    				        cin>>opc8;
	    				        system ("cls");
	    				        switch(opc8){
	    				        	case 1:
	    				        		p13.calificaVideo();
								        cin>>u;
								        cout<<"Este video fue calificado"<<endl;
								        break;
	    				        	case 2:
	    				        		p14.calificaVideo();
								        cin>>u1;
								        cout<<"Este video fue calificado"<<endl;
								        break;
	    				        	case 3:
	    				        		p15.calificaVideo();
								        cin>>u2;
								        cout<<"Este video fue calificado"<<endl;
								        break;
	    				        	case 4:
	    				        		p16.calificaVideo();
								        cin>>u3;
								        cout<<"Este video fue calificado"<<endl;
								        break;
	    				        	case 5:
	    				        		p17.calificaVideo();
								        cin>>u4;
								        cout<<"Este video fue calificado"<<endl;
								        break;
								}
								break;
						}
					    break;
			    }
	    		break;
	    	case 2:
	    		cout<<"\t ****** Datos *****"<<endl;
	    		cout<<"---- (a) Peliculas"<<endl;
	    		cout<<"---- (b) Series"<<endl;
	    		cout<<"Escoja un video( Pelicula / Serie): ";
	    		cin>>opc2;
	    		system ("cls");
	    		switch(opc2){
	    			case'a':
	    				cout<<"\t ******Lista de Peliculas*****"<<endl;
	    				cout<<"---- (a) Thor"<<endl;
	    				cout<<"---- (b) Black Widow"<<endl;
	    				cout<<"Escoja una pelicula( a / b): ";
	    				cin>>opc3;
	    				system ("cls");
						switch(opc3){
							case'a':
								p2.muestraDatos();
								break;
							case'b':
								p3.muestraDatos();
								break;
						}	    				
	    			    break;	
	    			
	    			case'b':
	    				cout<<"\t ******Lista de Series*****"<<endl;
	    				cout<<"---- (a) Malcolm in the middle"<<endl;
	    				cout<<"---- (b) Los simpson"<<endl;
	    				cout<<"---- (c) Loki"<<endl;
	    				cout<<"Escoja un video( a / b / c): ";
	    				cin>>opc4;
	    				system ("cls");
						switch(opc4){
							case'a':
								cout<<"\t------- Malcolm in the middle"<<endl;
								cout<<"\t ******Lista de capitulos*****"<<endl;
	    				        cout<<"---- (1) Capitulo 1"<<endl;
	    				        cout<<"---- (2) Capitulo 2"<<endl;
	    				        cout<<"---- (3) Capitulo 3"<<endl;
	    				        cout<<"---- (4) Capitulo 4"<<endl;
	    				        cout<<"---- (5) Capitulo 5"<<endl;
	    				        cout<<"Capitulo: ";
	    				        cin>>opc6;
	    				        system ("cls");
	    				        switch(opc6){
	    				        	case 1:
	    				        		p1.muestraDatos();
								        break;
	    				        	case 2:
	    				        		p6.muestraDatos();
								        break;
	    				        	case 3:
	    				        		p7.muestraDatos();
								        break;
	    				        	case 4:
	    				        		p8.muestraDatos();
								        break;
	    				        	case 5:
	    				        		p9.muestraDatos();
								        break;
								}
								break;
							case'b':
								cout<<"\t-------- Los simpson"<<endl;
								cout<<"\t ******Lista de capitulos*****"<<endl;
	    				        cout<<"---- (1) Capitulo 1"<<endl;
	    				        cout<<"---- (2) Capitulo 2"<<endl;
	    				        cout<<"---- (3) Capitulo 3"<<endl;
	    				        cout<<"---- (4) Capitulo 4"<<endl;
	    				        cout<<"---- (5) Capitulo 5"<<endl;
	    				        cout<<"Capitulo: ";
	    				        cin>>opc7;
	    				        system ("cls");
	    				        switch(opc7){
	    				        	case 1:
	    				        		p4.muestraDatos();
								        break;
	    				        	case 2:
	    				        		p5.muestraDatos();
								        break;
	    				        	case 3:
	    				        		p10.muestraDatos();
								        break;
	    				        	case 4:
	    				        		p11.muestraDatos();
								        break;
	    				        	case 5:
	    				        		p12.muestraDatos();
								        break;
								}
								break;
							case'c':
								cout<<"\t------- Loki"<<endl;
								cout<<"\t ******Lista de capitulos*****"<<endl;
	    				        cout<<"---- (1) Capitulo 1"<<endl;
	    				        cout<<"---- (2) Capitulo 2"<<endl;
	    				        cout<<"---- (3) Capitulo 3"<<endl;
	    				        cout<<"---- (4) Capitulo 4"<<endl;
	    				        cout<<"---- (5) Capitulo 5"<<endl;
	    				        cout<<"Capitulo: ";
	    				        cin>>opc8;
	    				        system ("cls");
	    				        switch(opc8){
	    				        	case 1:
	    				        		p13.muestraDatos();
								        break;
	    				        	case 2:
	    				        		p14.muestraDatos();
								        break;
	    				        	case 3:
	    				        		p15.muestraDatos();
								        break;
	    				        	case 4:
	    				        		p16.muestraDatos();
								        break;
	    				        	case 5:
	    				        		p17.muestraDatos();
								        break;
								}
								break;
						}	    				
					    break;
			    }
	    		
	    		break;
	    	case 3:
	    		cout<<"\t ****** Tipo de video *****"<<endl;
	    		cout<<"---- (a) Peliculas"<<endl;
	    		cout<<"---- (b) Series"<<endl;
	    		cout<<"Escoja un video( Pelicula / Serie): ";
	    		cin>>opc2;
	    		system ("cls");
	    		switch(opc2){
	    			case'a':
	    				cout<<"\t ******Lista de Peliculas*****"<<endl;
	    				cout<<"---- (a) Thor"<<endl;
	    				cout<<"---- (b) Black Widow"<<endl;
	    				cout<<"Escoja una pelicula( a / b): ";
	    				cin>>opc3;
	    				system ("cls");
						switch(opc3){
							case'a':
								cout<<"Pruebas con gotoxy";
								break;
							case'b':
								cout<<"Pruebas con gotoxy";
								break;
						}	    				
	    			    break;	
	    			
	    			case'b':
	    				cout<<"\t ******Lista de Series*****"<<endl;
	    				cout<<"---- (a) Malcolm in the middle"<<endl;
	    				cout<<"---- (b) Los simpson"<<endl;
	    				cout<<"---- (c) Loki"<<endl;
	    				cout<<"Escoja una serie( a / b / c): ";
	    				cin>>opc4;
	    				system ("cls");
						switch(opc4){
							case'a':
								cout<<"Pruebas con gotoxy";
								break;
							case'b':
								cout<<"Pruebas con gotoxy";
								break;
							case'c':
								cout<<"Pruebas con gotoxy";
								break;
						}	    				
					    break;
			    }
	    		
	    		break;
	    	case 4:
	    		cout<<"***** Gracias por preferir nuestros servicios ***** \n"<<endl;
	    		return 0;
	    		break;
	    		
		}
	}
	while(opc1 != 4);
	system ("pause");
}



