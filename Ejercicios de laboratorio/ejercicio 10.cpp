#include <iostream>
#include <ctype.h> 
#include <conio.h>
 
 using namespace std;
int main()
{
   char cadena[] = "julio pancho";
 int i;
   for( i = 0; cadena[i]; i++)
      cadena[i] = toupper(cadena[i]); 
 
   cout<<"La cadena es: "<<cadena;
   
   getch();
   return 0;
}