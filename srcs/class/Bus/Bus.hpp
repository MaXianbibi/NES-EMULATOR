#ifndef BUS_HPP
#define BUS_HPP

#include <iostream>
#include "../cpu/CPU.hpp"
#include <array>

class Bus
{
private:
	
public:
	// device on bus
	CPU cpu;


	// fake ram
	std::array<uint8_t, 64 * 1024> ram;




	Bus();
	~Bus();

	// read and write
	void 		write( uint16_t addr, uint8_t data );
	uint8_t 	read( uint16_t addr, bool bReadOnly = false );

};

#endif