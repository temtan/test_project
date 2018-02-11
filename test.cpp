#include "test.h"

// PCD()
// PCA( type, obj )
// PCC( c )
// PCI( i )
// PCP( p )
// PCS( s )
// PCF( f )
// PCSS( s )

int
main( int argc, char *argv[] )
{
  PCD();

  PCI( argc );

  PCD();

  PCP( argv );
  return 0;
}
