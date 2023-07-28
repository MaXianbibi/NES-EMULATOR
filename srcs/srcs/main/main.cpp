
#include "../../include/include.hpp"

int main( void )
{
	Bus bus;


	bus.write( 0x0000, 0x69 );


	std::cout << std::hex << (int)bus.read( 0x0000 ) << std::endl;
	std::cout << std::hex << (int)bus.read( 0x100 ) << std::endl;

	std::cout << "Hello World!" << std::endl;
	return 0;
}