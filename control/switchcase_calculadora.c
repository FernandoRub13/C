#include <stdio.h>
#include <math.h>
#include <windows.h>

void  suma ();
void  resta ();
void  division(); 
void  multiplicacion ();
void  potencia ();
void  raizcuadrada ();

float n1, n2, resultado;


int main(){
	
	//Declarando variables
	int opcion;
	
	
	do{
	system("pause");
	system("cls"); //Limpiar pantalla
	printf("Elige una opcion:\n");
	printf("\t 1.- Suma\n");
	printf("\t 2.- Resta\n");
	printf("\t 3.- Division\n");
	printf("\t 4.- Multiplicacion\n");
	printf("\t 5.- Potencia\n");
	printf("\t 6.- Raiz cuadrada\n");
	printf("\t 7.- Salir\n");
	scanf("%d",&opcion);	
	system("cls"); //Limpiar pantalla
	
	if(opcion==6){
		printf("\nDame el primer valor: ");
		scanf("%f", &n1);
	}
	else if(opcion>=7){
		
	}
	else{
		printf("\nDame el primer valor: ");
		scanf("%f", &n1);
		printf("\nDame el segundo valor: ");
		scanf("%f", &n2);
	}

	//Estructura de control de selección multiple

	switch(opcion)
	{
	case 1:
		suma();
		break;
	case 2:
		resta();
		break;
	case 3: 
		division();
		break;
	case 4: 
		multiplicacion();
		break;
	case 5: 		
		potencia();
		break;
	case 6: 
		raizcuadrada();
		break;
	default:
		printf("Salir");
		exit(0);
	}	//Sale break
}while(opcion<7);

}




void suma(){
	resultado = n1 + n2;
	printf("%f", resultado);
}
void  resta(){
	resultado = n1 - n2;
	printf("%f", resultado);
}
void  division(){
	if(n2==0)
		{
			printf("La operacion entre 0 no esta definida");
		}
		else{
		resultado = n1 / n2;
		printf("%f", resultado);
		}
} 
void  multiplicacion(){
	resultado = n1 * n2;
	printf("%f", resultado);
}
void  potencia(){
	resultado = pow(n1,n2);
	printf("%f", resultado);
}
void  raizcuadrada(){
		if(n1<0){
				printf("No esta definida");
		}
		else{
			resultado = sqrt(n1);
			printf("%f", resultado);
		}
}






