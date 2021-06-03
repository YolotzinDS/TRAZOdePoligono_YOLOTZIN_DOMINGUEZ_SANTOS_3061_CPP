#include <graphics.h>
#include <conio.h>
#include <windows.h>
#include <C:\Program Files (x86)\Dev-Cpp\include\GL\glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <iomanip>
//#include "CuadradoDDA.cpp"

using namespace std;

//definimos la svariables parra usar elm algoritmo dda
	int x_1 = 1 ;
	int  y_1 =1;
	int x_2 =4;
	int   y_2 =4 ;
	int x_3 =5;
	int   y_3 =1 ;
	int Pasos, c, p, la;
	int dy, dx;
		int steps = 0;
		float xinc, yinc;
		float Pendiente;
			float r, u, k, s;
		char sx[15];
		//brem, funcion que crea la imagen
			void pintar_pixel()
			{
				glClear(GL_COLOR_BUFFER_BIT);

						glFlush();
		//se utiliza para que se pinte el pixel en en el cual se encuentren las cordenadas x y y
				}
				void pintar_pantalla()
			{
                //glClearColor(0.819,0.976,1,1);//COLOR NEGRO
                glBegin(GL_POINTS);
				glPointSize(10);//Tamaño del pixel
				glColor3f(4, 0.788, 0.41);
			//	glColor3i(1,0,0); //definir el color y el transporte que se desea
				glOrtho(800,0,600,0, -1,1);
				glPointSize(18); //Se define el tamaño del pixel dependiendo
			//
		    //	    glColor3f(1.0, 1.0, 0.0);
		        	//glColor3f(4, 0.788, 0.41);

			}

		void mov_raton(int boton, int estado, int x, int y){
				glBegin(GL_POINTS);

				if ((estado == GLUT_DOWN) && (boton == GLUT_LEFT_BUTTON) || (estado == GLUT_DOWN) && (boton == GLUT_RIGHT_BUTTON)){
					x = 800 -x; //se le resta el 800 se produce
				//para las coordenadas (x,y)
				glVertex2i(x,y);

					}
			glEnd();
			glFlush();

			}
			
			void gotoxy( int x, int y){
				HANDLE hCon;
				hCon = GetStdHandle (STD_OUTPUT_HANDLE);

				COORD dwPos;
				dwPos.X=x;
				dwPos.Y =y;
				SetConsoleCursorPosition(hCon, dwPos);
	}
		//descricpion geometrica de la imagen se va us
		void algoritmoBre(){//Contiene mas infor
	//PONER LOS PIXELES EN LA PEN.
		Pendiente = (dy * 1.0) + (dx * 1.0);
   		int x = x_1;
		int y= y_1;
        dx= (x_2 - x_1);
		dy= (y_2 - y_1);
		Pasos = max(dy, dx);
		glClear(GL_COLOR_BUFFER_BIT); //Con esta funcion el color de la ventana
		glColor3f(1,1,1);//Establecer color de objeto
		glLoadIdentity();

		//Plano Cartesiano
		glLineWidth(5.0);
		glColor3f(0.0471,  0.7176, 0.949); //sky blue
		glBegin(GL_LINES);
		        glVertex2d(-20, 0);
		        glVertex2d(30, 0);
                glVertex2d(0, 30);
                glVertex2d(0, -30);
			glEnd();
  //lc
  glLineWidth (2.0);
  glColor3f(0.01f, 0.1f, 0.1f);

  glBegin(GL_LINES);

        for(int j = 31; j > -30; j--){ //Lin h
            glVertex2f(-20, j + 0.5);
            glVertex2f(20, j + 0.5);
			}
		for(int j = 21; j > -20; j--){//Lin v
            glVertex2f( j + 0.5 , -20);
            glVertex2f( j + 0.5, 20);
				}
			glEnd();
			glPointSize(18); //Se define el tamaño del pixel dependiendo
			glBegin(GL_POINTS);
		    	    glColor3f(1.0, 1.0, 0.0);
		        	glColor3f(4, 0.788, 0.41);
		//INICIO A
		Pendiente=(dy/dx);
		int n;
		float r, u, k, s;
		char sx[15];
		cout<< "Introduzca el n umero de lados del poligono: \n";
		cin>>n;
		cout <<"\n";
//     	cout<< "Introduzca el n umero de lados de la circunferencia circunscrita: \n";
  //   	cin>> r;
			r = 70;
     	u = 360/n;
     	k = u *(3.1416/180);
     	s= (n*r*r*sin(k))/2;
     	     glColor3f(0, 2, 1);
  				glBegin(GL_LINES);

            if(Pendiente==1){
                		p= (2*dy-dx);
	if( n < 3){
        	cout<<"NO ES UN POLIGONO >_<";
		}else{
		initwindow(800,800);
          gotoxy(x_1,y_1);
                  //  initWindowPosition(50,50);
           // glutInitWindowSize(800, 600);
			        	setbkcolor(BLACK);
            //	system ("color c0 ");
             glColor3f(4, 2, 0);
			cleardevice();

			//va ser cundo se va a  establecer la altura y la anchura del pixel
			//glutInitWindowPosition(50,50);
            //glutInitWindowSize(800, 600);
		//numero

		
					for(int j= 0; j <= n-1 ; j +=1){
//				int l;
			//	lineColor(RED);
                
                
               	  gotoxy(x_1,y_1);line(360-r*cos(k*j), 360-r*sin(k*j),360-r*cos(k*(j-1)),360-r*sin(k*(j-1)));
				for(int k = 0; k <= n -1  ; k++){
				y_1++;
				cout <<"\n";
				cout <<"\n";
                cout <<"\n";
				cout <<"\n";
				cout <<"\n";
				cout <<"\n";
                cout <<"\n";
                cout <<"\n";
				cout <<"\n";
                cout <<"\n";
				cout <<"\n";
    cout <<"\n";
    cout <<"\n";
                cout <<"\n";
    cout <<"\n";
				cout <<"(" << x_1 <<","<< y_1 <<")" ",";
			}
        		//cout <<"\n";//funcion de la funcion
			for(int k = 0 ;k < p + 1 ; k++){
			//	glVertex2d(round(x_1),round(y_1-1));
				x_1= x_1 + 1;
				cout <<"(" << x_1 <<","<< y_1 <<")" ",";
			} //ini de la funcion x2
			//for(int k = 0 ; k < p + 1 ; k++){
				//glVertex2d(round(x_2),round(y_1-1));
			//	y_1--;
				//cout <<"(" << x_2 <<","<< y_1 <<")" ",";
		//	}	cout <<"\n";
			//for(int k = 0 ; k < p + 1 ; k++){
				///glVertex2d(round(x_2),round(y_1));
				//x_2--;
				//cout <<"(" << x_2 <<","<< y_1 <<")" ",";
			//}

//	}else{
}
			glutHideWindow();
}
}
		glEnd();
		glFlush();
	}
		void algoritmoDDA()//contiene
		{
			//delta
			dy = y_2 - y_1;
			dx = x_2 - x_1;
		//Pendiente = (dy * 1.0) / (dx * 1.0);
        Pendiente=(dy/dx);
		//  Numero de pasos
		Pasos = max(dy, dx);
		glClear(GL_COLOR_BUFFER_BIT); //Con esta funcion el color de la ventana
		glColor3f(1,1,1);//Establecer color de objeto
		glLoadIdentity();

            if(dx>dy){
				steps=dx;
			}
			else{
				steps=dy;
			}
				yinc = dy/ steps;
	xinc = dx/ steps;
            int xi = x_1 * 1.0;
	        int yi = y_1 * 1.0;


     	int n;
		float r, u, k, s;
		char sx[15];
		cout<< "Introduzca el n umero de lados del poligono: \n";
		cin>>n;
		cout <<"\n";
//     	cout<< "Introduzca el n umero de lados de la circunferencia circunscrita: \n";
  //   	cin>> r;
			r = 70;
     	u = 360/n;
     	k = u *(3.1416/180);
     	s= (n*r*r*sin(k))/2;
     	     glColor3f(0, 2, 1);
  				glBegin(GL_LINES);

            if(Pendiente==1){
                
	if( n < 3){
        	cout<<"NO ES UN POLIGONO >_<";
		}else{
		initwindow(800,800);
          gotoxy(x_1,y_1);
                  //  initWindowPosition(50,50);
           // glutInitWindowSize(800, 600);
			        	setbkcolor(BLACK);
            //	system ("color c0 ");
             glColor3f(4, 2, 0);
			cleardevice();
            	
			//va ser cundo se va a  establecer la altura y la anchura del pixel
			//glutInitWindowPosition(50,50);
            //glutInitWindowSize(800, 600);
		//numero
                for(int i=0;i<steps+1;i++){

			for(int i= 0; i <= n-1 ; i +=1){
//				int l;
			//	lineColor(RED);
                     
				  gotoxy(x_1,y_1);line(360-r*cos(k*i), 360-r*sin(k*i),360-r*cos(k*(i-1)),360-r*sin(k*(i-1)));
          
					    y_1++;
					    //system("cls");
                cout <<"\n";cout <<"\n";
                cout <<"\n";cout <<"\n";
                cout <<"\n";cout <<"\n";
                cout <<"\n";cout <<"\n";
                cout <<"\n";cout <<"\n";
cout <<"\n";cout <<"\n";
                cout <<"\n";cout <<"\n";
                cout <<"\n";cout <<"\n";
				cout <<"(" << x_1 <<","<< y_1 <<")" ",";
				    }
		}	cout << "\n";
				//SEGUNDA PART
				for(int i=0;i<steps+1;i++){
					//glVertex2d(round(x_1),round(y_1-1));
					x_1= x_1 + xinc;
					cout <<"(" << x_1 <<","<< y_1 <<")" ",";
				}
				//cout << "\n";

			//	/* PARTE 3*/for(int i=0 ; i < steps + 1 ; i++){
				//	glVertex2d(round(x_2),round(y_1-1));
					//y_1= y_1 - yinc;
				//	cout <<"(" << x_2 <<","<< y_1 <<")" ",";
				//}
				//cout << "\n";
				///* PAR ifn*/	for(int i = 0 ; i < steps + 1 ; i++){
				//	glVertex2d(round(x_2),round(y_1));
					//x_2= x_2 - xinc;
					//cout <<"(" << x_3 <<","<< y_3 <<")" ",";
				//}
	//}else{

				glutHideWindow();

		}
}
	//	  glutMouseFunc(mov_raton);
			//	glutDisplayFunc(pintar_pixel);
		//		pintar_pantalla();
            	//glutMainLoop();

//printf( " %f\n", x1 6
     //
	//		    printf("x1 = %f", x1);

 		glEnd();

        glLineWidth(3.0);
           glVertex2d(x_1 * 1.0, y_1 * 1.0);
            glVertex2d(x_2 * 1.0, y_2 * 1.0);

		glEnd();//Elemento paa que no se cierre la ventana

		glFlush(); //
	}
		void Init(){
			glClearColor(1, 1,1, 0); //Color de pantalla de la 2da vengtana
		}
		void reshape(int width, int height)
		{
			glViewport(0, 0, width, height);
			glMatrixMode(GL_PROJECTION);//Tipo de proyeccion
			glLoadIdentity(); //Asigna nr la matriz identidad como de proyecto
			glOrtho (-20, 20, -20, 20, -1, 1);//SSe debe de usar una proyeccion
			glMatrixMode(GL_MODELVIEW);
			  }
		int eleccion;
/*	void menuRE(){
                do{
			system("cls");
			cout << "CUADRADO, FAVOR DE SELECCIONAR EL METODO QUE " << endl ;
			cout << "[1].Salir " << endl ;
		    cout << "[2].Volver " << endl ;

			cin >> e;


		switch (e){
            system("cls");
			case 1:
                    exit (0);
                    break;
					default:

						break;

			}

			}while( eleccion != 0);
				system("pause>null");


			}*/
		int main(int argc, char * argv[]){

		system ("color 0b "); //COLOR PANT
		int la;
		do{
			system("cls");
			cout << "CUADRADO, FAVOR DE SELECCIONAR EL METODO QUE " << endl ;
			cout << "[1].Metodo de ADD " << endl ;
		    cout << "[2].Metodo de Bresen " << endl ;
			cout << "[3].Limpiar ventana " << endl ;
			cout << "[4]. Salir " << endl ;
			cin >> eleccion;
		int u;
	
		switch (eleccion){
            system("cls");
			case 1:
                	cout << "HOLA la figura asi quedaria:) " << endl ;
		printf( "COORDENADA DE ORIGEN PARA X1:  %d\n", x_1 );
       		printf( "COORDENADA DE ORIGEN PARA Y1: %d\n", y_1 );
       		//	printf( "COORDENADA DE ORIGEN PARA X2:  %d\n", x_2 );
       	//	printf( "COORDENADA DE ORIGEN PARA Y2: %d\n", y_2 );
//		cout << "Coordenada de origen pora Y= " ; cin >> y_1;
//  cout << "Ingrese cuanto pixeles sera el cuadrado " ; cin >> c;

			glutInit(&argc, argv); //Realizar inclinacion
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);//numero
		glutInitWindowSize(800, 800);//va ser cundo se va a  establecer la altura y la anchura del pixel
		glutCreateWindow("Algoritmo DDA figura de 4 lados"); //se gegnerara una 2da ventana de visualizacion
		Init();//p.init
			glutDisplayFunc(algoritmoDDA);//signa img.
		//glutReshapeFunc(reshape);
           // nerara una 2da ventana de visualizacion
			//glutMouseFunc(mov_raton);
		//	glutDisplayFunc(pintar_pixel);
			//pintar_pantalla();
		//	mbio de tamaño de la ventana actual
			//glutMainLoop();//Con esta funcion las ventanas  que hayan creado
				
		//Cambio de tamaño de la ventana actual
		glutMainLoop();//Con esta funcion las ventanas  que hayan creado
		//algoritmoDDATRI :: posicionXY(20,40);
	//}
//else if(la= 4){		//cout << "Ingrese Y2: " ; cin >> y_2;
                system("pause");
//}
			break;
			case 2:
                 system ("color 0a ");
		        	cout << "HOLA la figura asi quedaria:) " << endl ;

			printf( "COORDENADA DE ORIGEN PARA X1:  %d\n", x_1 );
       		printf( "COORDENADA DE ORIGEN PARA Y1: %d\n", y_1 );
  //     			printf( "COORDENADA DE ORIGEN PARA X2:  %d\n", x_2 );
//       		printf( "COORDENADA DE ORIGEN PARA Y2: %d\n", y_2 );
//		cout << "Coordenada de origen pora Y= " ; cin >> y_1;
//		cout << "Ingrese cuanto pixeles sera el cuadrado " ; cin >> c;
			glutInit(&argc, argv); //Realizar inclinacion
		glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);//numero
		glutInitWindowSize(800, 800);//va ser cundo se va a  establecer la altura y la anchura del pixel
		glutCreateWindow("Algoritmo Bresem"); //se gegnerara una 2da ventana de visualizacion
		Init();//p.init

			glutDisplayFunc(algoritmoBre);//signa img.
		glutReshapeFunc(reshape);//Cambio de tamaño de la ventana actual
		glutMainLoop();//Con esta funcion las ventanas  que hayan creado

		//cout << "Ingrese Y2: " ; cin >> y_2;
				break;
				case 3:
					cleardevice();
					break;
					case 4:

                         system ("color 0C ");

	cout << "SALIENDO >_<" << endl ;
cout << " >_<" << endl ;
cout << " >_<" << endl ;
						exit (0);
						break;

			}

	}while( eleccion != 0);
		system("pause>null");

	}
