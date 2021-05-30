/****************************************************************************************/
/* BombIcon.cpp                                                                         */
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

#include "assets/BombIcon.h"

using namespace std::literals;

std::pair<std::string, std::string> Minesweeper::get_raw_bomb_icon()
{
	return std::make_pair("BombIcon",
		"\x89\x50\x4e\x47\x0d\x0a"
		"\x1a\x0a"
		"\x00\x00\x00\x0d\x49\x48\x44\x52\x00\x00\x00\x40\x00\x00\x00\x40\x08\x06\x00\x00\x00\xaa\x69\x71\xde\x00\x00\x00\x01\x73\x52\x47\x42\x01\xd9\xc9\x2c\x7f\x00\x00\x00\x20\x63\x48\x52\x4d\x00\x00\x7a\x26\x00\x00\x80\x84\x00\x00\xfa\x00\x00\x00\x80\xe8\x00\x00\x75\x30\x00\x00\xea\x60\x00\x00\x3a\x98\x00\x00\x17\x70\x9c\xba\x51\x3c\x00\x00\x00\x09\x70\x48\x59\x73\x00\x00\x0b\x13\x00\x00\x0b\x13\x01\x00\x9a\x9c\x18\x00\x00\x01\x3a\x49\x44\x41\x54\x78\xda\xed\xdb\xc9\x0d\xc2\x30\x10\x05\xd0\x6f\x68\x82\x26\xa8\x85\x36\xc8\x29\xb5\xe4\x14\xda\xa0\x16\x9a\xa0\x09\x08\x07\x84\x84\xac\x2c\x76\x26\x8e\xed\x99\x3f\x97\x44\xd9\xa4\xff\xe4\xc8\x76\x16\x87\xf4\x35\x08\xcf\x77\x21\x07\xbd\x9a\xd3\x00\x00\xc7\xfe\xe9\x36\xbf\x38\x01\xf6\x09\x2a\x82\x21\x40\x06\x80\xbd\x03\x4f\x35\xfd\xd1\xed\xa1\x10\x04\xd0\x12\xfc\xd0\x5c\x00\x00\xef\xfe\x1e\x05\x41\x00\x2d\xc1\xfd\x0a"
		"\x85\x20\x80\x9a\xe0\xe7\xdb\x77\xf9\xb8\x46\x41\x10\xa0\xd4\xe0\x53\xdd\xdb\x64\x70\xbf\x16\x20\x08\x30\x03\x50\x44\x93\xcf\x79\x0b\x10\x00\x05\x97\xa0\x1b\x1c\xcd\x4c\x80\x5a\x82\x0b\x86\xc2\xb3\xa3\x60\x02\xd4\x0a"
		"\x10\x30\x1d\x0e\x9a\x09\x13\xa0\x76\x00\x1f\x22\x20\x38\x01\x7c\x80\xaa\x83\x0b\x00\x40\x00\x4d\x00\x6b\x8b\x00\x04\x20\x00\x01\x08\x30\xb6\xa3\x6d\x5b\x00\x40\xd7\x75\x04\x20\x00\x01\x08\x40\x00\xb3\xdd\xa0\x76\x08\x02\xfc\xad\x5b\xbb\x15\x1c\x01\x10\xf1\x48\x4c\x21\x04\x01\x56\x01\xfc\x4a\x01\x04\x01\x7c\x00\x2b\x10\xb2\xb7\xc3\xe6\x01\x14\x40\x10\x60\x09\x40\x2b\x44\xf4\x87\x92\xe6\x01\xb4\x40\x88\x3f\x96\x36\x0f\x10\x05\x51\x10\xc8\xe6\x3f\x4c\x98\x07\x58\x05\x31\x05\x92\x10\x26\xf9\x4f\x53\xe6\x01\x44\x10\xb9\x9b\x3c\x01\x36\x04\xc8\x0d\xe2\x8a\xb9\x08\x01\xd2\xc2\xb8\xe2\x15\x6b\x06\xf8\x00\x8e\x34\x13\x3a\x0c\x9d\x34\x8d\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82"s
	);
}
