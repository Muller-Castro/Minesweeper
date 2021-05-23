/****************************************************************************************/
/* P1Flag.cpp                                                                           */
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

#include "assets/P1Flag.h"

#include <vector>

std::pair<std::string, std::string> Minesweeper::get_raw_p1_flag()
{
	std::pair<std::string, std::string> result = std::make_pair("P1Flag", "");

	std::vector<short> raw_data {

		0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a,
		0x1a, 0x0a,
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x40, 0x08, 0x06, 0x00, 0x00, 0x00, 0x7b, 0x8e, 0x75, 0xae, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 0x42, 0x01, 0xd9, 0xc9, 0x2c, 0x7f, 0x00, 0x00, 0x00, 0x20, 0x63, 0x48, 0x52, 0x4d, 0x00, 0x00, 0x7a, 0x26, 0x00, 0x00, 0x80, 0x84, 0x00, 0x00, 0xfa, 0x00, 0x00, 0x00, 0x80, 0xe8, 0x00, 0x00, 0x75, 0x30, 0x00, 0x00, 0xea, 0x60, 0x00, 0x00, 0x3a, 0x98, 0x00, 0x00, 0x17, 0x70, 0x9c, 0xba, 0x51, 0x3c, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x13, 0x00, 0x00, 0x0b, 0x13, 0x01, 0x00, 0x9a, 0x9c, 0x18, 0x00, 0x00, 0x00, 0xef, 0x49, 0x44, 0x41, 0x54, 0x68, 0xde, 0xed, 0x98, 0xd1, 0x0d, 0xc3, 0x20, 0x0c, 0x44, 0x99, 0xa5, 0x13, 0x75, 0xa9, 0x6e, 0xd0, 0x65, 0xf9, 0x72, 0xa4, 0x46, 0x4a, 0xf9, 0x88, 0xc1, 0x36, 0xe6, 0x8c, 0x14, 0x5b, 0xba, 0xbf, 0xc4, 0xf7, 0x00, 0x45, 0xc1, 0x57, 0xca, 0xbf, 0xa8, 0x11, 0xbc, 0xe8, 0x46, 0x58, 0x80, 0x5a, 0x6b, 0x2c, 0xc0, 0x0d, 0x44, 0xe8, 0x31, 0x84, 0x15, 0xbd, 0xbe, 0xf4, 0x53, 0x38, 0x40, 0xab, 0xd1, 0x4b, 0x9a, 0x67, 0x4d, 0x00, 0x9c, 0x81, 0xf4, 0x39, 0x57, 0x00, 0xad, 0xc2, 0x01, 0xb4, 0x30, 0x4b, 0x01, 0x24, 0x10, 0xcb, 0x01, 0x46, 0x10, 0x10, 0x80, 0x1e, 0x08, 0xce, 0xfc, 0xfd, 0x39, 0x85, 0x02, 0xb8, 0x0c, 0x5b, 0x79, 0xed, 0x40, 0xdb, 0x54, 0x64, 0xcc, 0x98, 0xab, 0x01, 0xd8, 0xe6, 0x0a,
		0x43, 0x33, 0x00, 0xdb, 0xdc, 0x68, 0x3c, 0x04, 0x98, 0x59, 0x95, 0xed, 0x6f, 0xe8, 0xb4, 0xa5, 0xfa, 0x3b, 0x01, 0xd8, 0x90, 0x07, 0x88, 0xba, 0x0f, 0x94, 0xe0, 0x4a, 0x80, 0x04, 0x78, 0x36, 0x40, 0xf8, 0x54, 0x14, 0xb6, 0x13, 0xd4, 0xd1, 0xb3, 0x8e, 0x20, 0xf3, 0x81, 0xcc, 0x07, 0xf6, 0xcd, 0x07, 0x90, 0x40, 0xcb, 0xc6, 0xee, 0x25, 0xe3, 0x79, 0x38, 0x80, 0x24, 0x35, 0xd9, 0x26, 0xa0, 0xd8, 0x22, 0x21, 0x91, 0x00, 0x65, 0x3e, 0x80, 0x33, 0xf6, 0xcc, 0x07, 0x66, 0x57, 0x8d, 0x4d, 0x48, 0x90, 0x5f, 0x81, 0x65, 0xc0, 0x55, 0xa7, 0x21, 0x96, 0x73, 0x9e, 0xcb, 0x07, 0x7a, 0x69, 0x88, 0xc3, 0x38, 0x6f, 0x6b, 0xe8, 0x98, 0x23, 0x64, 0x3e, 0x90, 0x00, 0x09, 0x90, 0xf9, 0x40, 0xe6, 0x03, 0xf0, 0x01, 0xf5, 0x00, 0x6a, 0x19, 0x57, 0xf1, 0x4a, 0x43, 0x5e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}
