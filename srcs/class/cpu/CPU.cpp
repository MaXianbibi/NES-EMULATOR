#include "CPU.hpp"
#include "../Bus/Bus.hpp"

CPU::CPU()
{
	std::cout << "CPU constructor called" << std::endl;
}

CPU::~CPU()
{
}


uint8_t CPU::read( uint16_t addr )
{
	if (bus != nullptr)
		return bus->read( addr, false );
	return 0x00;
}

void CPU::write( uint16_t addr, uint8_t data )
{
	if (bus != nullptr)
		bus->write( addr, data );
}