/****************************************************************************************/
/* ClearButtonDown.cpp                                                                  */
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

#include "assets/ClearButtonDown.h"

using namespace std::literals;

std::pair<std::string, std::string> Minesweeper::get_raw_clear_button_down()
{
	return std::make_pair("ClearButtonDown",
		"\x89\x50\x4e\x47\x0d\x0a"
		"\x1a\x0a"
		"\x00\x00\x00\x0d\x49\x48\x44\x52\x00\x00\x00\x46\x00\x00\x00\x1f\x08\x06\x00\x00\x00\x5a\xaf\xbb\xbb\x00\x00\x01\x8f\x69\x43\x43\x50\x50\x68\x6f\x74\x6f\x73\x68\x6f\x70\x20\x49\x43\x43\x20\x70\x72\x6f\x66\x69\x6c\x65\x00\x00\x28\x91\x7d\x91\x3d\x48\xc3\x50\x14\x85\x4f\x53\xa5\x22\x15\x11\x3b\x88\x38\x64\xa8\x4e\x16\x44\x45\xc4\xa9\x54\xb1\x08\x16\x4a\x5b\xa1\x55\x07\x93\x97\xfe\x41\x93\x86\x24\xc5\xc5\x51\x70\x2d\x38\xf8\xb3\x58\x75\x70\x71\xd6\xd5\xc1\x55\x10\x04\x7f\x40\xdc\xdc\x9c\x14\x5d\xa4\xc4\xfb\x92\x42\x8b\x18\x2f\x3c\xde\xc7\x79\xf7\x1c\xde\xbb\x0f\x10\x1a\x15\xa6\x9a\x5d\x13\x80\xaa\x59\x46\x2a\x1e\x13\xb3\xb9\x55\x31\xf0\x0a"
		"\x1f\x82\x18\x00\x30\x27\x31\x53\x4f\xa4\x17\x33\xf0\xac\xaf\x7b\xea\xa6\xba\x8b\xf0\x2c\xef\xbe\x3f\xab\x4f\xc9\x9b\x0c\xf0\x89\xc4\x51\xa6\x1b\x16\xf1\x06\xf1\xcc\xa6\xa5\x73\xde\x27\x0e\xb1\x92\xa4\x10\x9f\x13\x8f\x1b\x74\x41\xe2\x47\xae\xcb\x2e\xbf\x71\x2e\x3a\x2c\xf0\xcc\x90\x91\x49\xcd\x13\x87\x88\xc5\x62\x07\xcb\x1d\xcc\x4a\x86\x4a\x3c\x4d\x1c\x56\x54\x8d\xf2\x85\xac\xcb\x0a"
		"\xe7\x2d\xce\x6a\xa5\xc6\x5a\xf7\xe4\x2f\x0c\xe6\xb5\x95\x34\xd7\x69\x8d\x20\x8e\x25\x24\x90\x84\x08\x19\x35\x94\x51\x81\x85\x08\xed\x1a\x29\x26\x52\x74\x1e\xf3\xf0\x0f\x3b\xfe\x24\xb9\x64\x72\x95\xc1\xc8\xb1\x80\x2a\x54\x48\x8e\x1f\xfc\x0f\x7e\xcf\xd6\x2c\x4c\x4d\xba\x49\xc1\x18\xd0\xfd\x62\xdb\x1f\xa3\x40\x60\x17\x68\xd6\x6d\xfb\xfb\xd8\xb6\x9b\x27\x80\xff\x19\xb8\xd2\xda\xfe\x6a\x03\x98\xfd\x24\xbd\xde\xd6\xc2\x47\x40\xff\x36\x70\x71\xdd\xd6\xe4\x3d\xe0\x72\x07\x18\x7a\xd2\x25\x43\x72\x24\x3f\x2d\xa1\x50\x00\xde\xcf\xe8\x9b\x72\xc0\xe0\x2d\xd0\xbb\xe6\xce\xad\x75\x8e\xd3\x07\x20\x43\xb3\x5a\xbe\x01\x0e\x0e\x81\xb1\x22\x65\xaf\x7b\xbc\xbb\xa7\x73\x6e\xff\xf6\xb4\xe6\xf7\x03\x68\x43\x72\xa3\xaf\x17\x50\x05\x00\x00\x00\x20\x63\x48\x52\x4d\x00\x00\x7a\x25\x00\x00\x80\x83\x00\x00\xf9\xff\x00\x00\x80\xe9\x00\x00\x75\x30\x00\x00\xea\x60\x00\x00\x3a\x98\x00\x00\x17\x6f\x92\x5f\xc5\x46\x00\x00\x00\x09\x70\x48\x59\x73\x00\x00\x0b\x13\x00\x00\x0b\x13\x01\x00\x9a\x9c\x18\x00\x00\x00\xfe\x49\x44\x41\x54\x68\xde\xed\xd9\xd1\x0e\x83\x20\x0c\x05\x50\x7e\x9e\xf8\x73\x4b\xf6\x43\x4b\xba\x37\x23\x08\x2d\xd7\x32\x02\xec\x3e\xf4\xc5\x08\xae\x27\x16\x19\x0d\x22\x12\x18\xf7\x20\x82\x09\x73\x04\x61\x04\x49\x61\x08\x72\xc3\x49\x50\x62\x8c\x7f\x1d\x57\x8b\x40\x94\x32\x0e\x61\x7a\xc1\x68\xb5\x59\xbb\x67\x7b\x18\xcf\x82\xb6\x2d\xcc\x99\xe4\x5b\x89\x2b\x46\x76\x6d\x4b\x98\x62\xc2\x84\x89\xd5\x64\x73\x88\xcf\x4b\x87\x41\x4a\xed\xc9\x5a\xd6\xa3\x84\x87\xc3\x20\x49\xf4\xde\xb0\x0d\x87\x51\x13\xd1\xca\x4b\x29\xc3\x73\x3e\xb4\x64\x1b\xe6\x1d\x0e\x53\xc4\x79\x08\x83\x26\x3c\x3d\x8c\x59\x76\x06\x42\x52\x86\x5a\xd4\xe6\x6d\x28\xef\x39\xdf\x18\x64\x7d\xda\x05\x06\x4a\xa0\xf3\xda\x81\xfc\xa6\x39\xbf\x4a\x46\xa2\xc5\xb1\x0e\x98\x1c\x67\xde\xcf\x35\xf2\xf9\x36\x9e\xd3\x0a"
		"\xb3\xc4\xce\xd7\x1a\x8b\xbc\x31\xd6\x46\x72\xa9\xff\x4a\x10\xcc\xb1\x10\x8c\x67\x47\x8a\x8c\xf5\x3e\x67\x99\xf3\x18\x04\x16\xbd\xf7\x17\xc7\x1a\x3c\xc1\x23\x8c\x13\x86\x38\x79\x97\x80\x7d\xa5\x4a\x5f\x89\x9d\x48\xa5\x13\xc9\x60\x53\xbf\x35\xbe\xe4\xa2\x45\x81\x2c\xa2\x6d\xe7\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82"s
	);
}
