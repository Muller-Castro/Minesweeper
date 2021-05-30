/****************************************************************************************/
/* MiniBombSpriteSheet.cpp                                                              */
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

#include "assets/MiniBombSpriteSheet.h"

using namespace std::literals;

std::pair<std::string, std::string> Minesweeper::get_raw_mini_bomb_sprite_sheet()
{
	return std::make_pair("MiniBombSpriteSheet",
		"\x89\x50\x4e\x47\x0d\x0a"
		"\x1a\x0a"
		"\x00\x00\x00\x0d\x49\x48\x44\x52\x00\x00\x00\x30\x00\x00\x00\x10\x08\x06\x00\x00\x00\x50\xae\xfc\xb1\x00\x00\x00\x01\x73\x52\x47\x42\x01\xd9\xc9\x2c\x7f\x00\x00\x00\x20\x63\x48\x52\x4d\x00\x00\x7a\x26\x00\x00\x80\x84\x00\x00\xfa\x00\x00\x00\x80\xe8\x00\x00\x75\x30\x00\x00\xea\x60\x00\x00\x3a\x98\x00\x00\x17\x70\x9c\xba\x51\x3c\x00\x00\x00\x09\x70\x48\x59\x73\x00\x00\x0b\x13\x00\x00\x0b\x13\x01\x00\x9a\x9c\x18\x00\x00\x00\x8d\x49\x44\x41\x54\x48\xc7\xdd\x95\x41\x0e\xc0\x20\x08\x04\x79\x46\x7f\xd8\xf4\xe4\x5f\xfd\x4f\x33\xbd\x9a\xb6\x2a\x42\x62\xa9\x24\x1c\x67\x61\x01\xa3\xc8\x33\x68\xa4\x26\x9a\xfc\x79\x6c\x78\x78\x4f\x71\x44\x84\x4e\x03\x5d\x96\xbc\xb7\x34\x5c\xf5\x71\x36\xa0\x62\x81\x9a\x06\x9a\x24\xef\xaf\xdb\xc0\x60\x00\x8b\xf9\x8a\x01\x0c\x06\x18\x86\x8b\x15\x96\x02\x38\x07\x30\x5c\xff\x3e\x40\x1c\x39\x75\x00\xb5\x47\xcd\xcf\x73\x01\x03\x29\x25\x97\xc8\xc7\xfc\x22\x27\x64\x9c\x42\x04\xde\x25\x12\x85\x37\xdd\x63\x24\x7e\x58\x24\x22\xaf\xfe\x13\x22\xf3\x4d\xb1\xd1\x98\xc2\x5f\x63\x55\xad\xc2\x26\xd5\x99\xb4\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82"s
	);
}
