/******************************************************************************* 
* : TUSUR 
* File : main.c 
* Compiler : IAR for ARM 
* Version : 6.30.1.3142 
* Last modified : 07.06.2019 
* 
* Author : Dykhova Anna 
* Support mail : dyhovaanna@gmail.com 
* 
* 
* Target MCU : MCU: MDR1986 
* Description : Swap tetrads in byte
* 
********************************************************************************/
#include <stdio.h> 
#include <stdlib.h> 

char AnnDyhova( unsigned char a, unsigned char b )
{
  b=a>>4 | a<<4; 
  return b;
}
int main()
{ 
  unsigned char a;
  unsigned char b;
  printf ("Vvedite chislo ot 1 do 99:\n"); 
  scanf("%hhx",&a); 
  unsigned char AD = AnnDyhova(a, b);
  printf("Otvet: %hhx", AD);
  return 0;
}


