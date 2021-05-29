/****************************************************************************************/
/* P2Flag.cpp                                                                           */
/****************************************************************************************/
/* Copyright (c) 2020-2021 Muller Castro.                                               */
/*                                                                                      */
/* Permission is hereby granted, free of charge, to any person obtaining                */
/* a copy of this software and associated documentation files (the "Software"),         */
/* to deal in the Software without restriction, including without limitation            */
/* the rights to use, copy, modify, merge, publish, distribute, sublicense,             */
/* and/or sell copies of the Software, and to permit persons to whom the Software       */
/* is furnished to do so, subject to the following conditions:                          */
/*                                                                                      */
/* The above copyright notice and this permission notice shall be included in all       */
/* copies or substantial portions of the Software.                                      */
/*                                                                                      */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,  */
/* INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A        */
/* PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT   */
/* HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF */
/* CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE */
/* OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                                        */
/****************************************************************************************/

#include "assets/P2Flag.h"

using namespace std::literals;

std::pair<std::string, std::string> Minesweeper::get_raw_p2_flag()
{
	return std::make_pair("P2Flag",
		"\x89\x50\x4e\x47\x0d\x0a"
		"\x1a\x0a"
		"\x00\x00\x00\x0d\x49\x48\x44\x52\x00\x00\x00\x20\x00\x00\x00\x40\x08\x06\x00\x00\x00\x7b\x8e\x75\xae\x00\x00\x00\x01\x73\x52\x47\x42\x01\xd9\xc9\x2c\x7f\x00\x00\x00\x20\x63\x48\x52\x4d\x00\x00\x7a\x26\x00\x00\x80\x84\x00\x00\xfa\x00\x00\x00\x80\xe8\x00\x00\x75\x30\x00\x00\xea\x60\x00\x00\x3a\x98\x00\x00\x17\x70\x9c\xba\x51\x3c\x00\x00\x00\x09\x70\x48\x59\x73\x00\x00\x0b\x13\x00\x00\x0b\x13\x01\x00\x9a\x9c\x18\x00\x00\x00\xe2\x49\x44\x41\x54\x68\xde\xed\xd8\x31\x0e\x80\x20\x0c\x05\x50\x2e\xcf\xa9\x38\x19\x13\x2e\x26\x3a\x00\xb6\xa5\xf4\x93\xf8\x49\xba\x19\xfa\x04\x07\xfb\x53\x7a\x56\x7b\x55\xf8\x6a\x9d\x8a\x05\xd4\x5a\xb1\x80\x0e\x02\x7a\x0d\xb0\xd5\xca\x5d\x70\x40\x51\x60\x8a\x23\xbc\x0b\x18\x35\x90\x3e\xe7\x0a"
		"\xd0\x16\x1c\xa0\xc5\x6c\x05\x48\x10\xdb\x01\x5f\x88\x10\xc0\x0c\x12\xd6\x3c\xdf\x15\x06\xc8\x9d\x72\x3b\x81\xf7\xa6\x92\xc6\x79\xf2\x1d\x2c\xbf\x95\xb6\xa1\x19\x30\xda\xdc\xda\xf8\x13\xb0\xf2\x56\x26\x80\xd7\x91\xaa\x01\xd1\x0d\x87\x00\xd8\xff\x40\x02\x2f\x02\x08\xf8\x37\x00\x3e\x15\xc1\x4e\xa2\x4d\xea\x5f\x57\xc0\x7c\x80\xf9\xc0\xb9\xf9\x40\x24\x68\xdb\xd8\xbd\x65\x3c\x87\x03\x24\xa9\xc9\x31\x01\xc5\x11\x09\x89\x04\xc4\x7c\x20\xac\x71\x46\x9c\x80\x64\xea\x82\x36\x77\x07\x58\x06\x5c\x75\x1a\x62\xb9\xe7\xa5\x7c\x60\x96\x86\x78\x8c\xf3\xa6\x0d\x3d\x73\x04\xe6\x03\x04\x10\xc0\x7c\x80\xf9\x40\xf8\x80\x7a\x01\x63\x3c\x5d\xa7\xc2\x6b\x5d\x4d\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82"s
	);
}
