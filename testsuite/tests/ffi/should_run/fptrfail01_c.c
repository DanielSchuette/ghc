#include "HsFFI.h"
#include "fptrfail01.h"

#include <stdio.h>

void f( HsInt *i )
{
    printf( "f%d\n", (int)*i );
    fflush( stdout );
}
