/****************************************************************************************/
/* Icon7.cpp                                                                            */
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

#include "assets/Icon7.h"

using namespace std::literals;

std::pair<std::string, std::string> Minesweeper::get_raw_icon7()
{
	return std::make_pair("Icon7",
		"\x89\x50\x4e\x47\x0d\x0a"
		"\x1a\x0a"
		"\x00\x00\x00\x0d\x49\x48\x44\x52\x00\x00\x00\x14\x00\x00\x00\x14\x08\x06\x00\x00\x00\x8d\x89\x1d\x0d\x00\x00\x01\x6e\x69\x43\x43\x50\x69\x63\x63\x00\x00\x28\x91\x75\x91\xbd\x4b\x42\x51\x18\xc6\x7f\x6a\x52\x94\xe1\x50\x41\x44\x84\x83\x45\x83\x82\x14\x44\x63\x18\xe4\x62\x0d\x6a\x90\xd5\xa2\xd7\xaf\x40\xed\x72\xaf\x12\xd1\x1a\xb4\x34\x04\x0d\x51\x4b\x5f\x43\xff\x41\xad\x41\x6b\x41\x10\x14\x41\x44\x4b\xff\x40\x5f\x4b\xc8\xed\x3d\x2a\x28\xa1\xe7\x72\xee\xfb\xe3\x39\xe7\x79\x39\xe7\x39\x60\x0f\xe7\xb5\x82\xd9\x11\x80\x42\xb1\x64\x44\x42\x41\xcf\x52\x7c\xd9\xd3\xf9\x8e\x93\x11\x06\x70\xe3\x4f\x68\xa6\x3e\x1f\x9d\x8b\xd1\x76\xfc\x3c\x62\x53\xf5\xc1\xaf\x7a\xb5\xdf\xd7\x72\xf4\xa4\xd2\xa6\x06\xb6\x2e\xe1\x29\x4d\x37\x4a\xc2\x33\xc2\xe1\x8d\x92\xae\x78\x57\xb8\x5f\xcb\x25\x52\xc2\x27\xc2\x3e\x43\x0e\x28\x7c\xab\xf4\x64\x8d\xdf\x14\x67\x6b\xfc\xa5\xd8\x88\x45\x66\xc1\xae\x7a\x7a\xb2\x4d\x9c\x6c\x62\x2d\x67\x14\x84\xc7\x85\xbd\x85\x7c\x59\xab\x9f\x47\xdd\xc4\x95\x2e\x2e\x46\xa5\x0e\xc9\x1c\xc6\x24\x42\x88\x20\x1e\x92\x94\x59\x23\x4f\x09\xbf\xd4\xa2\x64\xd6\xda\x17\xa8\xfa\x16\x58\x17\x8f\x26\x7f\x9d\x4d\x0c\x71\x64\xc9\x89\xd7\x27\x6a\x59\xba\xa6\xa5\x66\x44\x4f\xcb\x97\x67\x53\xe5\xfe\x3f\x4f\x33\x33\x39\x51\xeb\xee\x0a"
		"\x82\xf3\xd5\xb2\x3e\x47\xa1\x73\x1f\x2a\x7b\x96\xf5\x7b\x6a\x59\x95\x33\x70\xbc\xc0\x75\xb1\xe1\x5f\x97\x9c\xa6\xbf\x45\xdf\x6b\x68\xde\x63\x70\x6f\xc3\xe5\x4d\x43\x4b\x1e\xc0\xd5\x0e\x0c\x3e\xeb\x09\x23\x51\x95\x1c\x32\xed\x99\x0c\x7c\x5c\x40\x6f\x1c\xfa\xee\xa1\x7b\xa5\x96\x55\x7d\x9d\xf3\x27\x88\x6d\xc9\x13\xdd\xc1\xe1\x11\x8c\xc9\x7e\xf7\xea\x1f\x22\x5a\x68\x1a\x3b\xa5\xa1\x2a\x00\x00\x00\x09\x70\x48\x59\x73\x00\x00\x2e\x23\x00\x00\x2e\x23\x01\x78\xa5\x3f\x76\x00\x00\x00\xb4\x49\x44\x41\x54\x38\xcb\x63\xf8\xff\xff\x3f\x03\x35\x31\x2a\x87\x81\x61\x12\x10\xff\x26\x11\x83\xf4\x08\xe2\x32\xf0\x37\x58\x88\x04\xec\x05\xc4\x40\x7d\x55\xb8\x0c\xfc\x4f\xaa\x81\x01\x10\x03\x6b\x70\x19\x78\x9d\xda\x06\xe6\x81\x0c\x25\x02\xc3\x0d\x4c\x80\x18\xd8\x84\xd5\x40\xbc\xb1\xc7\xc0\xa0\xc1\x00\xd1\x0c\xc6\x5f\xa0\x18\xca\x8f\x22\xc7\xc0\x89\x1d\x48\x2e\x83\x1a\xb4\x13\xd9\x30\x52\x0d\x6c\x49\x45\x35\xf0\x0f\xc1\x74\x48\x17\x03\x81\xc0\x00\x88\x67\x82\x70\x06\x9a\x97\x49\x36\x10\x08\x98\x40\x1a\xe7\x41\x71\x04\x10\x8b\x00\xb1\x10\xc4\xc0\x69\xe4\x18\xc8\x82\x9c\x44\x7c\x21\x06\x55\x03\x71\x2a\x51\x79\x99\x90\x81\xe8\x89\x78\xd4\x40\xd2\x0d\x44\x2f\xaa\xc8\x4d\x87\x93\x70\x15\xa6\x14\xe5\x14\x62\x31\x00\xb9\x2c\x9c\xa3\x90\x35\xdf\x69\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82"s
	);
}
