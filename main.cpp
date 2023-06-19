#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
using namespace std;

void mru(){
    int option;
    double  d, v, t;
    cout<<"Ejercicio no. 1 "<<endl;
    cout<<"1. VELOCIDAD"<<endl;
    cout<<"2. DISTANCIA"<<endl;
    cout<<"3. TIEMPO"<<endl;
    cout<<"Ingrese el numero de opcion que desea realizar: ";
    cin>> option;
    system("CLS");
    if (option==1)
    {
        cout<<"PARA CALCULAR LA VELOCIDAD SE NECESITAN LOS SIGUIENTES DATOS\n"<<endl;
        cout<<"Ingrese la distancia en 'metros': ";
        cin>> d;
        cout<<"Ingrese el tiempo en 'segundos': ";
        cin>> t;
        v= d/t;
        cout<<"LA VELOCIDAD ES:"<< v<<" m/s"<<endl;
        system("PAUSE");
    }else if (option==2){
        cout<<"PARA CALCULAR LA DISTANCIA SE NECESITAN LOS SIGUIENTES DATOS"<<endl;
        cout<<"Ingrese la velocidad en 'm/s': ";
        cin>> v;
        cout<<"Ingrese el tiempo en 'segundos': ";
        cin>> t;
        d= v*t;
        cout<<"LA DISTANCIA ES:"<< d<<" m"<<endl;
        system("PAUSE");
    }else if (option==3){
        cout<<"PARA CALCULAR EL TIEMPO SE NECESITAN LOS SIGUIENTES DATOS"<<endl;
        cout<<"Ingrese la distancia en 'metros': ";
        cin>> d;
        cout<<"Ingrese la velocidad en 'm/s': ";
        cin>> v;
        t= d/v;
        cout<<"EL TIEMPO ES:"<<t<<" segundos"<<endl;
        system("PAUSE");
    }else{
        cout<<"ESA OPCION NO EXISTE"<<endl;
        system("PAUSE");
    }

}

void mruV(){
    float velIni, velFin, tiempo, aceleracion;
    cout<<"Ejercicio no. 2 "<<endl;
    cout<<"Un camion avanza y su velocidad varia, en un determinado tiempo. "<<endl;
    cout<<"¿Calcular su aceleracion?\n"<<endl;
    cout<<"Ingrese su Vo (m/s): ";
    cin>>velIni;
    cout<<"Ingese su Vf (m/s): ";
    cin>>velFin;
    cout<<"Ingrese el tiempo (s) en que dicho camion varia su velocidad :";
    cin>>tiempo;
    cout<<"\n\nFormulas a utilizar: "<<endl;
    cout<<"a = (Vf - Vo) / t";
    cout<<"\n\nResultado ---> ";
    aceleracion=(velFin-velIni)/tiempo;
    cout<<"Su aceleracion es de: "<<aceleracion<<" m/s^2\n\n";
    system("PAUSE");

}

void caidaLibre(){
    cout<<"Ejercicio no. 3 "<<endl;
    float h=0, g=9.8, v=0;
    int t;
    cout<<"Un balon de futbol se deja caer desde una ventana"<<endl;
    cout<<"y tarda 5 segundo en caer. desde que altura cayo?"<<endl;
    cout<<"Con que velocidad impacto el suelo?\n\n"<<endl;

    cout<<"**Formulas a utilizar:"<<endl;
    cout<<"h= G*T^2/2"<<endl;
    cout<<"V=G*T \n\n";

    cout<<"Datos del problema\n";
    cout<<"Ingrese el tiempo del problema en 'segundos':"<<endl;
    cin>>t;
    h=(g*pow(t,2))/2;
    v=g*t;
    cout<<"\t**RESULTADOS**\n\n";
    cout<<"La altura del balon era:"<<h<<" metros"<<endl;
    cout<<"La velocidad del balon era:"<<v<<" m/s"<<endl;
    system("PAUSE");
}

//Funciones extras de la funcion trabajo()
float Trabajo();
float Fuerza();
float Distancia();
float variableTrabajo, fuerza, distancia;
void trabajo(){
    cout<<"Ejercicio no. 4 "<<endl;
	int opc;

	cout<<"--MENU EJERCICIOS DE TRABAJO--"<<endl;
	cout<<"1. Trabajo"<<endl;
	cout<<"2. Fuerza"<<endl;
	cout<<"3. Distancia"<<endl;
	cout<<"\nIngrese opcion: "; cin>>opc;

	switch(opc){
		case 1:	cout<<"El trabajo es: "<<Trabajo()<<" J"<<endl;
				break;

		case 2: cout<<"La fuerza es: "<<Fuerza()<<" N"<<endl;
				break;

		case 3: cout<<"La distancia es: "<<Distancia()<<" m"<<endl;
				break;

		default:
                system("CLS");
                cout<<"No existe el numero de opcion\n\n";
                system("PAUSE");
                break;
	}
	getch();

}

void energiaCineticaYPotencial(){
    cout<<"Ejercicio no. 5 "<<endl;
    cout<<"Se deja caer una bola de acero de una determinada"<<endl;
    cout<<"altura. ¿Cual es su Energia Potencial?"<<endl;
    // primero se digitalizan los datos que usaremos.
    float Ep, Ec, m, g, h, v;
    //luego le pedimos al usuario que introduzca los datos que se le piden.
    cout<<"\nFormulas a utilizar: ";
    cout<<"Ep= (m*g*h)";
    cout<<"\n\nIngrese la masa en 'kg': ";
    cin>> m;
    cout <<"Ingrese la gravedad: 'm/s^2': ";
    cin>> g;
    cout<<"Ingrese la altura: 'metros': ";
    cin>> h;
    Ep= (m*g*h);
    cout<<"\n\n\t\t*Resultado*";
    cout<<"\nLa energia potencial es:  "<< Ep<<" Joules" <<endl;

    cout<<"\nCon el mismo valor de la masa del objeto anterior"<<endl;
    cout<<"se mueve un carro en una pista, con una determinada velocidad."<<endl;
    cout<<"¿Cual es la Energia Cinetica del carro?"<<endl;
    cout<<"\nFormulas a utilizar: ";
    cout<<"\tEc = (m*v^2)/2)"<<endl;
    cout<<"\nIngrese la velocidad para la energia cinetica 'm/s': ";
    cin>> v;
    // Se colocan las formulas para las operaciones.
    Ec = (m*(pow(v,2))/2);
    // luego se muestra los resultados.
    cout<<"\n\n\t\t*Resultado*"<<endl;
    cout<<"La energia cinetica es:  "<< Ec<<" Joules"<<endl;
    system("PAUSE");
}

int main()
{
    int opMenu;
    do{
        system("CLS");
        system("COLOR 1E");
        cout<<"\t\t\t*-BIENVENIDOS AL PROYECTO FINAL DE FISICA I-*"<<endl;
        cout<<"1. MRU"<<endl;
        cout<<"2. MRUV"<<endl;
        cout<<"3. CAIDA LIBRE"<<endl;
        cout<<"4. TRABAJO"<<endl;
        cout<<"5. ENERGIA CINETICA Y POTENCIAL"<<endl;
        cout<<"6. SALIR\n"<<endl;
        cout<<"INGRESE EL NUMERO DE OPCION A REALIZAR: ";
        cin>>opMenu;
        system("CLS");
        cout<<"\n";
        switch(opMenu){
            case 1:
                cout<<"\t\t\t*-BIENVENIDOS AL TEMA DE MRU-*"<<endl;
                mru();
                break;
            case 2:
                cout<<"\t\t\t*-BIENVENIDOS AL TEMA DE MRUV-*"<<endl;
                mruV();
                break;
            case 3:
                cout<<"\t\t\t*-BIENVENIDOS AL TEMA DE CAIDA LIBRE-*"<<endl;
                caidaLibre();
                break;
            case 4:
                cout<<"\t\t\t*-BIENVENIDOS AL TEMA DE TRABAJO-*"<<endl;
                trabajo();
                break;
            case 5:
                cout<<"\t\t\t*-BIENVENIDOS AL TEMA DE ENERGIA CINETICA Y POTENCIAL-*"<<endl;
                energiaCineticaYPotencial();
                break;
            case 6:
                cout<<"\t\t\t'MUCHAS GRACIAS POR UTILIZAR EL PROGRAMA DEL PROYECTO FINAL DE FISIA I'\n\n";
                system("PAUSE");
                system("CLS");
                break;
            default:
                cout<<"\t\t\tDebe de ingresar una opcion valida!!!"<<endl;
        }
        }while(opMenu!=6);
        float velocidadE, velocidadFinalE, S;
        cout<<"\t\t-** Ejercicio Final **-"<<endl;
        cout<<"Un camion que viaja a 60 mi/h frena hasta detenerse por completo en un"<<endl;
        cout<<"tramo de 180 ft, Cuales fueron la aceleracion media y el tiempo de frenado?"<<endl;
        cout<<"Vo = 60 mi/h = 88 ft/s \n\n";
        cout<<"Ingrese su velocidad inicial en '(ft/s)': ";
        cin>>velocidadE;
        cout<<"Ingrese su velocidad final en '(ft/s)': ";
        cin>>velocidadFinalE;
        cout<<"Ingrese la distancia en '(ft)': ";
        cin>>S;
        cout<<"\n\nFormula a utilizar para encontrar la 'aceleracion': "<<endl;
        cout<<"a = (Vf^2 - Vo^2) / 2*S \n"<<endl;
        cout<<"Su aceleracion es de: "<<(velocidadFinalE*velocidadFinalE - velocidadE*velocidadE)/(S*2)<<" ft/s^2\n\n";
        cout<<"Formula para encontrar el 'tiempo':"<<endl;
        cout<<"t=(Vf - Vo) / a\n\n";
        cout<<"El tiempo es de: "<<(velocidadFinalE - velocidadE) / ((velocidadFinalE*velocidadFinalE - velocidadE*velocidadE)/(S*2))<<" seg";



    return 0;
}
float Trabajo(){
	system("cls");
	cout<<"Problema. Un objeto es arrastrado 8 metros sobre una supercifie al aplicarle una fuerza de 40N, \nDetermine el trabajo que ejerce."<<endl;

	cout<<"\nDATOS: "<<endl;
	cout<<"Fuerza (newtons): "; cin>>fuerza;
	cout<<"Distancia (metros): "; cin>>distancia;

	cout<<"\nFORMULA Y PROCESO: "<<endl;
	cout<<"T = F*d"<<endl;
	cout<<"T = "<<fuerza<<" N * "<<distancia<<" m \n"<<endl;
	variableTrabajo = fuerza*distancia;
	return variableTrabajo;
}

float Fuerza(){
	system("cls");
	cout<<"Problema. Se realizo un trabajo de 200J sobre un cuerpo, el cual tuvo un desplazamiento de 4m, \nDetermine la fuerza que fue aplicada."<<endl;

	cout<<"\nDATOS: "<<endl;
	cout<<"Trabajo (joules): "; cin>>variableTrabajo;
	cout<<"Distancia (metros): "; cin>>distancia;

	cout<<"\nFORMULA Y PROCESO: "<<endl;
	cout<<"F = T/d"<<endl;
	cout<<"F = "<<variableTrabajo<<" J / "<<distancia<<" m \n"<<endl;
	fuerza = variableTrabajo/distancia;
	return fuerza;
}

float Distancia(){
	system("cls");
	cout<<"Problema. Se realizo un trabajo de 350J sobre un cuerpo, en el cual se aplico una fuerza de 25N, \nDetermine la distancia que recorrio."<<endl;

	cout<<"\nDATOS: "<<endl;
	cout<<"Trabajo (joules): "; cin>>variableTrabajo;
	cout<<"Fuerza (newtons): "; cin>>fuerza;

	cout<<"\nFORMULA Y PROCESO: "<<endl;
	cout<<"d = T/F"<<endl;
	cout<<"d = "<<trabajo<<" J / "<<fuerza<<" N \n"<<endl;
	distancia = variableTrabajo/fuerza;
	return distancia;
}
