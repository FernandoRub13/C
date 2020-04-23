#include<stdio.h>	//Archivos de bilbioteca
#include<conio.h>

void AgregarRegistros();	//Declaraci�n de funciones
void BuscarRegistro(int);
void MostrarRegistros();

int CantidadR=0,totalr=0,NumDeReg;

struct datos{	//Declaraci�n de estructura
	
	char nombre[50];
	int edad;
	char ciudad[45];
	
}persona[100];

int main (){	//Funci�n principan
	
	int opcion;
	
	do{
		opcion=0;
		NumDeReg=0;
		printf("\t\t\n\n\n 1 : Agregar registro "); // Muestra menu
		printf("\t\t\n\n\n 2 : Mostrar registro ");
		printf("\t\t\n\n\n 3 : Buscar registro ");
		printf("\t\t\n\n\n 0 : Salir ");
		printf("\t\t\n\n\n Digita el numero de acci�n que deseas realizar: ");
		scanf("%d", &opcion);
		
		switch (opcion){	//Estructura de control switch para el menu
			case 1:
				
				AgregarRegistros();
				break;
			case 2:
				
				BuscarRegistro(NumDeReg);
				break;
				
			case 3:
				
				MostrarRegistros();
				break;
				
			case 0:		//Opci�n para salir del programa
				printf("Pulsa cualquier tecla para confirmar");
				getch();
				return 0;
		}
		
	}while(opcion != 0);
	
	getch ();
	return 0;
}

void AgregarRegistros(){	//Definici�n de funciones
	int i;
	printf("Cuantos registros deseas agregar");
	scanf("%d", &CantidadR);
	
	totalr+=CantidadR;
	
	for ( i=0;i<CantidadR; i++){
		
		printf("\t\t\n\n\nDame el nombre:");
		gets(persona[i].nombre);
		fflush(stdin);
		
		printf("\t\tDame la edad: ");
		scanf("%d", &persona[i].edad);
		
		printf("\t\tDame la ciudad: ");
		gets(persona[i].ciudad);
		fflush(stdin);
	}

}	
void BuscarRegistro(int NumeroDeRegisgtro){
	
	printf("Que registro deseas consultar? ");
				scanf("%d", &NumDeReg);
	
	if(totalr == 0 ){
		printf("Aun no hay registros que buscar");
	}
	else
	pritnf("\t\t\n\n\nNombre : %s \n \t\tEdad: %d \n \t\tCiudad: %s", persona[NumeroDeRegisgtro].nombre, persona[NumeroDeRegisgtro].edad, persona[NumeroDeRegisgtro].ciudad);
	
}
void MostrarRegistros(){
	int i;
	if(totalr == 0 ){
		printf("Aun no hay registros que mostar");
	}
	else{
		
		printf("Mostrando todos los registros");
		for(i=0;i<totalr; i++){
			printf("\t\t\n\n\nDame el nombre:");
			gets(persona[i].nombre);
			fflush(stdin);
			printf("\t\tDame la edad: ");
			scanf("%d", &persona[i].edad);
			printf("\t\tDame la ciudad: ");
			gets(persona[i].ciudad);
			fflush(stdin);
		}
		
	}
	
	
}
