#ifndef CPU_HPP
#define CPU_HPP

#include <iostream>

class Bus;

class CPU
{
private:
	Bus *bus = nullptr;


	uint8_t 	read( uint16_t addr );
	void 		write( uint16_t addr, uint8_t data );
public:
	CPU();
	~CPU();

	void connectBus( Bus *n ) { bus = n; }



	enum FLAGS6502
	{
		C = (1 << 0), // Carry Bit
		Z = (1 << 1), // Zero
		I = (1 << 2), // Disable Interrupts
		D = (1 << 3), // Decimal Mode (unused in this implementation)
		B = (1 << 4), // Break
		U = (1 << 5), // Unused
		V = (1 << 6), // Overflow
		N = (1 << 7), // Negative
	};

	// registers
	uint8_t a = 0x00; // accumulator register
	uint8_t x = 0x00; // x register
	uint8_t y = 0x00; // y register
	uint8_t stkp = 0x00; // stack pointer
	uint16_t pc = 0x0000; // program counter
	uint8_t status = 0x00; // status register
	
};




#endif