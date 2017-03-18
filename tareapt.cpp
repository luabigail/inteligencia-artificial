#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(int argc, char*argv[])
{
	srand(time(NULL));//semilla para generear numeros aleatorios
	int arreglo[1000];//mi arreglo de n numeros
	int arreglofinal[1000];
	int i;//para el bucle
	int j=0;
	int size=sizeof(arreglo) /sizeof(arreglo[0]);//para obtener el tamaño del arreglo
	int mayor=0;
	
	//llenar el arreglo con numeros random de 1 al 100
	for(i=0; i<size;i++)
	{
		arreglo[i]=rand()% 10+1;//rango del 1 al 100
		
	}
//imprimir
	for(i=0;i<size;i++)
	{
	//*****	printf("POSICION #%d: NUMERO %d\n",i,arreglo[i]);//imprimir el arreglo con posicion
		if (arreglo[i] % 2 == 0 )//condicion para saber si es par
        {
        	if((arreglo[i+1])%2 !=0)//condicion para saber si el siguiente es impar
        	{
      //***  		printf(" \n PAR %d\n ",arreglo[i]);
			}
		
			   
			   	if((arreglo[i+1])+(arreglo[i-1])==arreglo[i])//condicion para saber si la suma del anterior y el siguiente es el numero posicionado
			
			
		//***		printf("\n suma %d",(arreglo[i]));
				
					
					
					if((arreglo[i])/2==(arreglo[i+2]))//condicion para elresultado de la division /2 del numero par es igual al siguiente siguiente
					printf(" \n DIVISION     %d\n ",arreglo[i]); 
						
				
						 	  
						
						  
					}
					
				
					
						 		
				
			  
	 
		

	}

	

						





	
	
	system("PAUSE");
	return 0;
}

