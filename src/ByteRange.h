#ifndef __BYTERANGE__H
#define  __BYTERANGE__H
namespace BYTE_CLASS_SPACE
{
	class Byte;
	struct ByteRange
	{
		class Byte* byte;
		unsigned bp,ep;
		ByteRange(Byte* bt,unsigned b,unsigned e);
	};
}
#endif
