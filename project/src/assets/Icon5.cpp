/****************************************************************************************/
/* Icon5.cpp                                                                            */
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

#include "assets/Icon5.h"

using namespace std::literals;

std::pair<std::string, std::string> Minesweeper::get_raw_icon5()
{
	return std::make_pair("Icon5",
		"\x89\x50\x4e\x47\x0d\x0a"
		"\x1a\x0a"
		"\x00\x00\x00\x0d\x49\x48\x44\x52\x00\x00\x00\x14\x00\x00\x00\x14\x08\x06\x00\x00\x00\x8d\x89\x1d\x0d\x00\x00\x01\x8f\x69\x43\x43\x50\x50\x68\x6f\x74\x6f\x73\x68\x6f\x70\x20\x49\x43\x43\x20\x70\x72\x6f\x66\x69\x6c\x65\x00\x00\x28\x91\x7d\x91\x3d\x48\xc3\x50\x14\x85\x4f\x53\xb5\x22\x15\x07\x3b\x88\x08\x66\xa8\x4e\x16\x44\x45\x74\x93\x2a\x16\xc1\x42\x69\x2b\xb4\xea\x60\xf2\xd2\x3f\x68\xd2\x90\xa4\xb8\x38\x0a"
		"\xae\x05\x07\x7f\x16\xab\x0e\x2e\xce\xba\x3a\xb8\x0a"
		"\x82\xe0\x0f\x88\x93\xa3\x93\xa2\x8b\x94\x78\x5f\x52\x68\x11\xe3\x85\xc7\xfb\x38\xef\x9e\xc3\x7b\xf7\x01\x42\xbd\xcc\x54\xb3\x63\x1c\x50\x35\xcb\x48\xc6\xa2\x62\x26\xbb\x2a\x06\x5e\x11\x44\x17\x7c\x98\xc5\xb0\xc4\x4c\x3d\x9e\x5a\x4c\xc3\xb3\xbe\xee\xa9\x93\xea\x2e\xc2\xb3\xbc\xfb\xfe\xac\x5e\x25\x67\x32\xc0\x27\x12\xcf\x31\xdd\xb0\x88\x37\x88\xa7\x37\x2d\x9d\xf3\x3e\x71\x88\x15\x25\x85\xf8\x9c\x78\xcc\xa0\x0b\x12\x3f\x72\x5d\x76\xf9\x8d\x73\xc1\x61\x81\x67\x86\x8c\x74\x72\x9e\x38\x44\x2c\x16\xda\x58\x6e\x63\x56\x34\x54\xe2\x29\xe2\xb0\xa2\x6a\x94\x2f\x64\x5c\x56\x38\x6f\x71\x56\xcb\x55\xd6\xbc\x27\x7f\x61\x30\xa7\xad\xa4\xb8\x4e\x6b\x08\x31\x2c\x21\x8e\x04\x44\xc8\xa8\xa2\x84\x32\x2c\x44\x68\xd7\x48\x31\x91\xa4\xf3\xa8\x87\x7f\xd0\xf1\x27\xc8\x25\x93\xab\x04\x46\x8e\x05\x54\xa0\x42\x72\xfc\xe0\x7f\xf0\x7b\xb6\x66\x7e\x72\xc2\x4d\x0a"
		"\x46\x81\xce\x17\xdb\xfe\x18\x01\x02\xbb\x40\xa3\x66\xdb\xdf\xc7\xb6\xdd\x38\x01\xfc\xcf\xc0\x95\xd6\xf2\x57\xea\xc0\xcc\x27\xe9\xb5\x96\x16\x3e\x02\xfa\xb6\x81\x8b\xeb\x96\x26\xef\x01\x97\x3b\xc0\xc0\x93\x2e\x19\x92\x23\xf9\x69\x09\xf9\x3c\xf0\x7e\x46\xdf\x94\x05\xfa\x6f\x81\x9e\x35\x77\x6e\xcd\x73\x9c\x3e\x00\x69\x9a\xd5\xf2\x0d\x70\x70\x08\x8c\x16\x28\x7b\xdd\xe3\xdd\xdd\xed\x73\xfb\xb7\xa7\x39\xbf\x1f\x95\x69\x72\xb5\xc0\x01\x6d\x19\x00\x00\x00\x20\x63\x48\x52\x4d\x00\x00\x7a\x25\x00\x00\x80\x83\x00\x00\xf9\xff\x00\x00\x80\xe9\x00\x00\x75\x30\x00\x00\xea\x60\x00\x00\x3a\x98\x00\x00\x17\x6f\x92\x5f\xc5\x46\x00\x00\x00\x09\x70\x48\x59\x73\x00\x00\x2e\x23\x00\x00\x2e\x23\x01\x78\xa5\x3f\x76\x00\x00\x01\x23\x49\x44\x41\x54\x38\xcb\xad\xd4\x31\x4a\xc3\x60\x18\x87\xf1\x67\xe8\x05\x84\xb8\xb9\x27\xc7\x28\x3d\x82\xda\x1e\x41\x3a\x39\x68\x31\x31\x84\xb6\x48\x4a\xb3\x09\x1d\x7a\x82\x22\x04\x2f\xa3\x83\xf4\x04\x4e\x4e\x82\x60\x20\xc3\xdf\x21\x21\x46\xed\x97\x2f\xc1\x0c\xcf\x10\xf8\xf8\x11\xbe\xf7\x4d\x90\x44\x9f\xfd\x7c\x80\x0d\x90\x77\x6c\x03\x1c\x99\xc0\xfc\x23\x47\x5d\xf2\x43\x04\x84\x26\x50\x99\xba\x15\x2d\x10\xb0\xb0\x82\xaf\x6f\xe8\x79\x6f\xef\x62\x8a\x80\xa9\x15\xbc\xba\x41\xc0\xbe\x45\x97\x4d\x43\xa9\xc0\x59\x80\x80\x00\x98\x1c\x68\xdc\x76\xca\x15\xf8\xf0\x88\xce\x27\x87\x3b\x1b\x23\x60\xdb\x09\xb4\x05\xa8\x37\xf0\xb3\x04\x81\x04\x18\x35\x81\xdb\x99\x8f\x9a\xba\xf6\x91\x1f\xa0\x38\x29\x1a\x8e\x50\x1d\xfd\x0d\x0e\x81\xb4\xcc\x6f\xa8\x7a\xdb\x78\x8d\x80\xb5\x09\x4c\x77\x29\xda\xa5\xe8\xb4\xb8\xf8\x3f\xd3\x04\x06\x83\xc1\x37\x78\x1b\x21\x20\xb2\xde\x61\x9c\x14\x77\xd4\x1b\x18\x2d\x1b\x17\xbb\x3a\x77\xb7\x42\xc0\xca\x38\x14\xd7\x43\xae\x57\x80\xa6\xcf\xed\xe9\xa5\x38\xe3\x7a\xc8\x71\x10\x70\x72\x10\x2c\x51\x0f\x58\x46\x4b\xfb\x1e\x96\x67\x1d\xe3\xda\xd4\xd0\x79\x38\x37\xff\xb2\xde\x33\x04\x64\xd6\xc5\xae\x81\xc7\x96\x9f\x6d\x06\xdc\xb7\x06\xff\xd3\x17\x57\x5e\x8b\x25\x06\xf4\xbe\xbd\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82"s
	);
}
