#include <iostream>
#include "byte.h"
#include <cstdlib>
using namespace std;
namespace BYTE_CLASS_SPACE
{

	Byte::Byte()
	{
		for(size_t i =0; i < NUM_BITS;i++)
			bytes[i] = 0x0;
	}
	Byte::Byte(unsigned char element)
	{
		for(size_t i =0; i < NUM_BITS;i++)
		{
			/// 1111 0000
			/// 1000 0000 
			/// &
			/// 1000 0000
			/// >> 7
			/// 0000 0001 --> ok!!!
			/// 2º it.
			/// 1111 0000
			///
			
			unsigned char byte = element;
			unsigned char result = (0x80>>i);
			//cout <<  "result: " << hex << (unsigned)result << " " ;
			result =  (result & element);
			result = result >>(0x7-i);
			bytes[i] = result;
			//cout << "Result2: " << (unsigned) result << " " << endl;
			continue;
			byte =  (byte << i); //>> 0x7;// ( element >> 0x7 ) ;
			byte = byte >> 0x7;
			//cout  << (unsigned) byte  << endl;
			bytes[i] = byte;
			element  = element << 0x01;
		}
	}
	void Byte::print(ostream& os)
	{
		for(size_t i =0; i < NUM_BITS;i++)
		{
				os << (unsigned)bytes[i] << " ";
		}
		os << endl;
	}
	unsigned char Byte::toChar()
	{
		unsigned char result = 0x0;;
		for(unsigned i = 0,j=NUM_BITS; i < NUM_BITS ;i++,j--)
		{
			/// 1111 0000
			/// 1000 0000 
			/// &
			/// 1000 0000
			/// >> 7
			/// 0000 0001 --> ok!!!
			/// 2º it.
			/// 1111 0000
			///
			
			unsigned char byte = bytes[i];;
			
			unsigned char aux = (byte << (j-1) );
			result = result | aux;
			//cout << "<" << hex << (unsigned) (byte << (j-1) ) << ">" << endl;
		}
		return result;
	}
}
