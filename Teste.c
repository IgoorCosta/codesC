#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
      char str[] = { "1234567890" };

      printf( "%s\n", str );

      memset( str, 0, strlen( str ) * sizeof( int ) );

      printf("%s\n", str);

      system( "pause" );
      return 0;
}
