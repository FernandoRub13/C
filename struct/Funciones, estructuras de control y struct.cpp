#include<stdio.h>	//Archivos de bilbioteca
#include<conio.h>
#include<stdlib.h>

void AgregarRegistros();	//Declaración de funciones
void BuscarRegistro(int);
void MostrarRegistros();

int CantidadR=0,totalr=0,NumDeReg;

struct datos{	//Declaración de estructura
	
	char nombre[50];
	int edad;
	char ciudad[45];
	
}persona[100];

int main (){	//Función principan
	
	int opcion;
	
	do{
		opcion=0;
		NumDeReg=0;
		printf("\t\t\n\n\n 1 : Agregar registro "); // Muestra menu
		printf("\t\t\n\n\n 2 : Mostrar registros ");
		printf("\t\t\n\n\n 3 : Buscar registro ");
		printf("\t\t\n\n\n 0 : Salir ");
		printf("\t\t\n\n\n Digita el numero de acción que deseas realizar: ");
		scanf("%d", &opcion);
		system("cls");
		switch (opcion){	//Estructura de control switch para el menu
			case 1:
				
				AgregarRegistros();
				break;
			case 2:
				
				MostrarRegistros();
				
				break;
				
			case 3:
				
				printf("Que registro deseas consultar? ");
				scanf("%d", &NumDeReg);
				BuscarRegistro(NumDeReg-1);
				break;
				
			case 0:		//Opción para salir del programa
				printf("Pulsa cualquier tecla para confirmar");
				getch();
				return 0;
		}
		
	}while(opcion != 0);
	
	getch ();
	return 0;
}

void AgregarRegistros(){	//Definición de funciones
	int i;
	printf("\n\n\t\t\tCuantos registros deseas agregar: ");
	scanf("%d", &CantidadR);
	
	totalr+=CantidadR;
	
	for ( i=0;i<CantidadR; i++){
		
		printf("\t\t\n\n\nDame el nombre:");
		fflush(stdin);
		gets(persona[i].nombre);
	
		
		printf("\t\tDame la edad: ");
		scanf("%d", &persona[i].edad);
		
		printf("\t\tDame la ciudad: ");
		fflush(stdin);
		gets(persona[i].ciudad);
		
	}
	system("cls");

}	
void BuscarRegistro(int NumeroDeRegistro){
	

	
	if(totalr == 0 ){
		printf("Aun no hay registros que buscar");
		printf("\n\n\n Digite cualquier tecla para salir");
		getch();
	}
	else{
		printf("\t\t\n\n\nNombre : %s \n", persona[NumeroDeRegistro].nombre);
		printf("\t\tEdad: %d \n", persona[NumeroDeRegistro].edad);
		printf("\t\tCiudad: %s", persona[NumeroDeRegistro].ciudad);
		printf("\n\n\n Digite cualquier tecla para salir");
		getch();
	}
	system("cls");
}
void MostrarRegistros(){
	int i;
	if(totalr == 0 ){
		printf("Aun no hay registros que mostar");
		printf("\n\n\n Digite cualquier tecla para salir");
		getch();
	}
	else{
		
		printf("Mostrando todos los registros");
		for(i=0;i<totalr; i++){
				printf("\n\n\n\t\tNombre : %s \n", persona[i].nombre);
		printf("\t\tEdad: %d \n", persona[i].edad);
		printf("\t\tCiudad: %s", persona[i].ciudad);
		}
		printf("\n\n\n Digite cualquier tecla para salir");
		getch();
	}
	system("cls");
	
	
}
