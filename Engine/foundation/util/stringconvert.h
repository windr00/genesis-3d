/****************************************************************************
Copyright (c) 2011-2013,WebJet Business Division,CYOU
 
http://www.genesis-3d.com.cn

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/
#ifndef _STRING_CONVERT_H_
#define _STRING_CONVERT_H_
#include "util/string.h"
namespace Util
{


	class StringConvert
	{
	public:
		/// convert from UTF-8 encoded string object to wide string, return number of used bytes
		static void UTF8ToWide(const Util::String& src, char16_t* dst, SizeT dstMaxBytes);
		/// convert from UTF-8 raw string to wide string, return number of used bytes
		static void UTF8ToWide(const char* src, char16_t* dst, SizeT dstMaxBytes);
		/// convert from wide string to UTF-8 string
		static void WideToUTF8(char16_t* src, Util::String& out);
	};
}
#endif //_STRING_CONVERT_H_
