#include <stdio.h>
int main()
{
	float x,y,z,w; //variáveis x,y,z e w são do tipo real
	int m, n=1;   //variáveis m e n são do tipo inteiro 
	x=3.2; 	 // variável x recebe o valor 3.2  
	y=x*2;	 //variável y recebe o valor 6.4
	z=(x+y)/2; // variável z recebe o valor 4.8 
	w= x+y/2;  // variável w recebe o valor 6.4 
	m = n/2;	 // variável m recebe o valor 0
	x = n/2;   // variável x recebe o valor 0.0
	x = n/2.0; // variável x recebe o valor 0.5
     printf("x=%0.1f \t y=%0.1f \n",x, y);
     printf("z=%0.1f \t w=%0.1f \n", z, w);
     printf("m=%d \t n=%d \n",m, n);
} 
