#ifndef __RBYTE__BYTE__
#define __RBYTE__BYTE__
#include "byte.h"
#include "ByteRange.h"
#include <vector>
using std::vector;
namespace BYTE_CLASS_SPACE
{

	class RByte : public Byte
	{
		public:
			RByte(vector<ByteRange>& vrange);			
	};
}
#endif
