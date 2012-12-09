#include "RByte.h"
#include <deque>
using namespace std;
using namespace BYTE_CLASS_SPACE;

RByte::RByte(vector<ByteRange>& vrange)
{
		deque<unsigned char> duc;
		unsigned cont =0;
		
		for( unsigned j = 0; j < vrange.size();j++) 
		{ 
			ByteRange& range = vrange[j];
			unsigned bp = range.bp;
			unsigned ep = range.ep;
			cout << bp << " " << ep << endl;
			for(unsigned i = bp; i < ep ; i++,cont++)
			{
				
				if( cont >= NUM_BITS )
				{
					continue;
				}
				//cout << "  e:"  << i << hex <<  (int) range.byte->at(i) ;
				duc.push_back(range.byte->at(i));
			}
		}
		for(unsigned i = cont; i < NUM_BITS; i++)
		{
			duc.push_front(0x0);
			//bits[i] =  0x0;
		}
		cout << duc.size() << endl;
		int ii =0;
		for(deque<unsigned char>::iterator i = duc.begin();i != duc.end();i++,ii++)
		{
			//cout << "d:" << (unsigned)*i << endl;
			bits[ii] = *i;
		}
}
