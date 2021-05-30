/****************************************************************************************/
/* MiniP2Flag.cpp                                                                       */
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

#include "assets/MiniP2Flag.h"

using namespace std::literals;

std::pair<std::string, std::string> Minesweeper::get_raw_mini_p2_flag()
{
	return std::make_pair("MiniP2Flag",
		"\x89\x50\x4e\x47\x0d\x0a"
		"\x1a\x0a"
		"\x00\x00\x00\x0d\x49\x48\x44\x52\x00\x00\x00\x10\x00\x00\x00\x20\x08\x06\x00\x00\x00\x1b\x89\xf8\xcc\x00\x00\x00\x01\x73\x52\x47\x42\x01\xd9\xc9\x2c\x7f\x00\x00\x00\x20\x63\x48\x52\x4d\x00\x00\x7a\x26\x00\x00\x80\x84\x00\x00\xfa\x00\x00\x00\x80\xe8\x00\x00\x75\x30\x00\x00\xea\x60\x00\x00\x3a\x98\x00\x00\x17\x70\x9c\xba\x51\x3c\x00\x00\x00\x09\x70\x48\x59\x73\x00\x00\x0b\x13\x00\x00\x0b\x13\x01\x00\x9a\x9c\x18\x00\x00\x00\x91\x49\x44\x41\x54\x48\xc7\xed\x95\x3b\x0e\xc0\x20\x0c\x43\x7d\xf9\x9c\x8a\x93\x31\xb9\x53\x25\x4a\xf3\x21\x44\x6a\x3b\x14\x29\x03\x08\x1e\x01\x62\x03\x00\x1c\x62\xab\xb1\xf7\x5e\x02\x00\x00\xdb\x35\x93\x13\xc6\xd5\x0c\xd9\xa6\xb0\xc6\x2c\xd0\x6d\xb2\x17\x1a\x24\x05\xd0\x20\x69\x40\x03\x28\x03\xc4\x9d\x24\x4a\x5f\xa6\x2c\xbc\x1d\x88\xfb\x22\xfd\x08\xe2\xec\x10\x3d\xa5\x46\x4f\x15\x56\xbd\x12\x51\x6c\xef\x02\xea\x72\xfe\xac\x1f\x30\x0d\x08\x14\xe7\x57\x62\x20\x5b\xcd\x54\xea\x72\x7e\xc6\x0f\x22\x99\xa7\x00\x86\xcc\x75\x3f\x80\xed\x0f\x5c\xf5\x83\xdc\xbf\xf0\xfb\xc1\xfe\x1d\x1c\xe5\x9a\x5c\x1e\x30\x9e\x76\x9a\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82"s
	);
}
