/****************************************************************************************/
/* MiniP1Flag.cpp                                                                       */
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

#include "assets/MiniP1Flag.h"

using namespace std::literals;

std::pair<std::string, std::string> Minesweeper::get_raw_mini_p1_flag()
{
	return std::make_pair("MiniP1Flag",
		"\x89\x50\x4e\x47\x0d\x0a"
		"\x1a\x0a"
		"\x00\x00\x00\x0d\x49\x48\x44\x52\x00\x00\x00\x10\x00\x00\x00\x20\x08\x06\x00\x00\x00\x1b\x89\xf8\xcc\x00\x00\x00\x01\x73\x52\x47\x42\x01\xd9\xc9\x2c\x7f\x00\x00\x00\x20\x63\x48\x52\x4d\x00\x00\x7a\x26\x00\x00\x80\x84\x00\x00\xfa\x00\x00\x00\x80\xe8\x00\x00\x75\x30\x00\x00\xea\x60\x00\x00\x3a\x98\x00\x00\x17\x70\x9c\xba\x51\x3c\x00\x00\x00\x09\x70\x48\x59\x73\x00\x00\x0b\x13\x00\x00\x0b\x13\x01\x00\x9a\x9c\x18\x00\x00\x00\x9a\x49\x44\x41\x54\x48\xc7\xed\x95\x4b\x0e\x80\x30\x08\x44\x39\x8b\x27\xf2\x52\xde\xc0\xcb\x76\x35\x1a\xe2\x02\x2b\x94\x52\x8c\xba\xb0\x09\x8b\x36\xf4\xf5\xc7\x4c\x89\x88\x20\x62\xa8\xa1\x94\x92\x02\x30\x64\x5a\x01\x65\x37\xe8\xdd\x21\x03\x64\x58\x63\x16\xe8\x92\xdc\x0a"
		"\x0d\x12\x02\x68\x90\x30\x80\x21\xf3\x02\x17\xc0\x49\x7b\xd4\xfd\x63\x72\x1b\x20\x92\xea\x49\xfa\x11\x4e\xf4\x6a\x05\xef\x29\x35\x7a\xa8\xb0\xf2\x95\x48\xc9\xf6\x2e\x20\x2f\xe7\xcf\xfa\x01\xc2\x00\x47\x71\xed\x4a\x74\x64\xab\x99\xca\x0d\x72\x7e\xc4\x0f\x5c\x99\x47\x00\x86\xcc\x0d\x3f\x90\x26\x72\x35\x93\x2e\x3f\x88\xfd\x0b\xbf\x1f\x8c\xdf\xc1\x06\x85\xdb\xd9\x6e\xba\x5b\x2a\xb3\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82"s
	);
}
