#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>


using namespace std;

class menu
{
private:
	string nombre;
	string carne;
	string correo;
	string seccion;
	string linea;
	string texto;
	string	ciclo;
	string estado;
	string promedio;

public:
	void menuprincipal();
	void agregaralumno();
	void buscaralumno();
	void modificaralumno();
			
};

void menu::menuprincipal()
{
	int opmenu,salir;
	
	
		do
		{
		 
		cout<<"Bienbenido al registro de alumnos\n\n";
		cout<<"Seleccione opcion a registrar\n\n";
		cout<<"1. Agregar alumno\n";
        cout<<"2. Buscar un alumno\n";
        cout<<"3. Modificar un alumno\n";
        cout<<"4. Salir\n";
        cin>>opmenu;
      	system("cls");
        
        switch(opmenu)
        {
        	defaul:
        		cout<<"ingreso una opcion que no existe";
        		system("pause");
        		system("cls");
				break;
        		
        		
        	case 1:
        		agregaralumno();
        		break;
        	case 2:
        		buscaralumno();
        		break;
        	case 3:
        		modificaralumno();
        		break;
        	case 4:
        		cout<<"Saliendo de la aplicacion";
				break;
		}
	}
	while(opmenu != 4
	);
}
	
void menu::agregaralumno()
{


	fflush(stdin);
	cout << "*****Menu de ingreso de nuevo alumno*****\n\n";
	cout << "ingrese nombre del alumno:\n";
	getline(cin,nombre); 
	cout <<"ingrese carne:\n";
	getline(cin,carne);
	cout <<"ingrese seccion:\n";
	getline(cin,seccion);
	cout <<"ingrese ciclo escolar:\n";
	getline(cin,ciclo);
	cout <<"ingrese estado:\n";
	cout <<"siendo A para aprobado y R reprobado.";
	getline(cin,estado);	
	cout <<"ingrese promedio:\n";
	getline(cin,promedio);
	
	
	ifstream leerarchivo ("alumnosdb.txt");
	
		while (getline(leerarchivo,linea)) {
			texto=texto+linea+"\n";
		}
		leerarchivo.close();
		cout << texto << endl;
		
	ofstream addalumno("alumnosdb.txt",ios::out|ios::app);
	
	addalumno<<nombre<<"\n\n"<<carne<<"\n\n"<<seccion<<"\n\n"<<ciclo<<"\n\n";
	addalumno.close();
	
	
	cout<<"alumno agregado correctamente, precione cualquier tecla para regresar al menu principal \n";
	system("pause");
	system("cls");
}

void menu::buscaralumno()
{
ifstream leerarchivo ("alumnosdb.txt");
	
		while (getline(leerarchivo,linea)) {
			texto=texto+linea+"\n";
		}
		leerarchivo.close();
		cout << texto << endl;

	system("pause");
	system("cls");
}
	


void menu::modificaralumno()
{
	cout<<"aqui se mostrara modificar alumno \n";
	system("pause");
	system("cls");
}


int main () 
{
 menu inicio;
 inicio.menuprincipal();
 system("pause");
 system("cls");
 return 0;	

}



