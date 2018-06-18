// Definimos dos funciones distintas max( ), una que regrese el mayor de
// dos enteros y otra que regrese el mayor de dos strings.
#include <stdio.h>
#include <string.h>

int max( int a, int b )
{
   if ( a > b ) return a;
   return b;
}

char *max( char *a, char *b )
{
  if ( strcmp(a,b) > 0 ) return a;
  return b;
}

int main( )
{
	char b[3];
	char c[3];
	
	strcpy(b, "abc");
    strcpy(c, "ABC");
	
printf ( "max( 19, 69 ) = %d\n", max( 19, 69 ) );
printf ( "max( abc,def ) = %s\n", max( b, c) );
return 0;
}