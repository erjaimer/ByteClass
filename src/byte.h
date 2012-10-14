#ifndef _____BYTECLASS_____
#define _____BYTECLASS_____
#include <iostream>
#define NUM_BITS 8
using std::ostream;
///@brief Namespace for byte class.
namespace BYTE_CLASS_SPACE
{
	///@brief Represent a Byte element.
	class Byte
	{
		unsigned char bytes[NUM_BITS];
	public:
		///@brief constructor, zero initialize the bits array.
		Byte();
		///@brief convert a byte element to Byte class
		Byte(unsigned char element);
		///@brief print byte in binary code.
		void print(ostream& os);
		///@brief convert to byte class Byte.
		unsigned char toChar();
	};
}
#endif
