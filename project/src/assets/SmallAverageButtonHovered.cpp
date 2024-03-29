/****************************************************************************************/
/* SmallAverageButtonHovered.cpp                                                        */
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

#include "assets/SmallAverageButtonHovered.h"

using namespace std::literals;

std::pair<std::string, std::string> Minesweeper::get_raw_small_average_button_hovered()
{
	return std::make_pair("SmallAverageButtonHovered",
		"\x89\x50\x4e\x47\x0d\x0a"
		"\x1a\x0a"
		"\x00\x00\x00\x0d\x49\x48\x44\x52\x00\x00\x00\x64\x00\x00\x00\x1a\x08\x06\x00\x00\x00\x41\xca\xf9\xe5\x00\x00\x01\x86\x69\x43\x43\x50\x49\x43\x43\x20\x70\x72\x6f\x66\x69\x6c\x65\x00\x00\x28\x91\x7d\x91\x3d\x48\xc3\x50\x14\x85\x4f\x53\x45\xd1\x4a\x11\x3b\x88\x38\x64\xa8\x4e\x16\x44\x45\x04\x17\xa9\x62\x11\x2c\x94\xb6\x42\xab\x0e\x26\x2f\xfd\x83\x26\x0d\x49\x8a\x8b\xa3\xe0\x5a\x70\xf0\x67\xb1\xea\xe0\xe2\xac\xab\x83\xab\x20\x08\xfe\x80\xb8\xb9\x39\x29\xba\x48\x89\xf7\x25\x85\x16\x31\x5e\x78\xbc\x8f\xf3\xee\x39\xbc\x77\x1f\x20\xd4\xcb\x4c\x35\x3b\xc6\x01\x55\xb3\x8c\x64\x2c\x2a\x66\xb2\xab\x62\xd7\x2b\x7c\xe8\x47\x10\xbd\x98\x95\x98\xa9\xc7\x53\x8b\x69\x78\xd6\xd7\x3d\x75\x53\xdd\x45\x78\x96\x77\xdf\x9f\xd5\xa7\xe4\x4c\x06\xf8\x44\xe2\x39\xa6\x1b\x16\xf1\x06\xf1\xf4\xa6\xa5\x73\xde\x27\x0e\xb1\xa2\xa4\x10\x9f\x13\x8f\x19\x74\x41\xe2\x47\xae\xcb\x2e\xbf\x71\x2e\x38\x2c\xf0\xcc\x90\x91\x4e\xce\x13\x87\x88\xc5\x42\x1b\xcb\x6d\xcc\x8a\x86\x4a\x3c\x45\x1c\x56\x54\x8d\xf2\x85\x8c\xcb\x0a"
		"\xe7\x2d\xce\x6a\xb9\xca\x9a\xf7\xe4\x2f\x0c\xe4\xb4\x95\x14\xd7\x69\x0d\x23\x86\x25\xc4\x91\x80\x08\x19\x55\x94\x50\x86\x85\x08\xed\x1a\x29\x26\x92\x74\x1e\xf5\xf0\x0f\x39\xfe\x04\xb9\x64\x72\x95\xc0\xc8\xb1\x80\x0a"
		"\x54\x48\x8e\x1f\xfc\x0f\x7e\xcf\xd6\xcc\x4f\x4e\xb8\x49\x81\x28\xd0\xf9\x62\xdb\x1f\x23\x40\xd7\x2e\xd0\xa8\xd9\xf6\xf7\xb1\x6d\x37\x4e\x00\xff\x33\x70\xa5\xb5\xfc\x95\x3a\x30\xf3\x49\x7a\xad\xa5\x85\x8f\x80\xe0\x36\x70\x71\xdd\xd2\xe4\x3d\xe0\x72\x07\x18\x7c\xd2\x25\x43\x72\x24\x3f\x2d\x21\x9f\x07\xde\xcf\xe8\x9b\xb2\xc0\xc0\x2d\xd0\xb3\xe6\xce\xad\x79\x8e\xd3\x07\x20\x4d\xb3\x5a\xbe\x01\x0e\x0e\x81\xd1\x02\x65\xaf\x7b\xbc\xbb\xbb\x7d\x6e\xff\xf6\x34\xe7\xf7\x03\x8d\xc2\x72\xb2\x2e\x44\xd3\x0a"
		"\x00\x00\x00\x06\x62\x4b\x47\x44\x00\xff\x00\xff\x00\xff\xa0\xbd\xa7\x93\x00\x00\x00\x09\x70\x48\x59\x73\x00\x00\x0e\xc3\x00\x00\x0e\xc3\x01\xc7\x6f\xa8\x64\x00\x00\x00\x07\x74\x49\x4d\x45\x07\xe5\x01\x11\x11\x07\x30\x2b\xe4\x56\xf7\x00\x00\x01\xb2\x49\x44\x41\x54\x68\xde\xed\x5a\x6b\x6e\x83\x30\x0c\xfe\x82\x7a\xa1\x1d\xaf\x0b\x12\x02\xc1\x7a\xbc\xdd\x68\xd9\x2f\xa3\xd4\xb3\x4d\x42\xc7\x6b\xb3\x25\x54\x70\x1d\x27\xf1\xe7\x57\x10\x01\x00\xd2\x03\x09\x4e\x87\x53\xb8\x23\x04\x02\xe3\xe3\x6b\x72\x8b\x1c\x48\xef\x4d\x04\x00\x34\x0e\xc6\x39\x88\x30\x68\xdc\x14\xe7\x22\x07\xc4\x01\x71\x72\x40\x1c\x10\xa7\xb5\x74\x5b\x3b\x30\xc6\x38\xdf\x4f\xd3\x35\xba\x34\xbe\xe6\xfc\xb9\x64\x2f\x92\x7c\xdf\xf7\xe8\xba\xae\x4a\x8f\x79\x16\x49\x0f\xa4\xda\xb6\x97\x16\x96\x3e\x81\xf0\x76\x0d\x50\xa4\x35\xd3\xf3\x6c\x0c\x63\x2f\xf9\x78\x2e\x5f\xa3\x67\xe9\x2c\x72\x7b\x75\x63\xf4\x9b\x7b\xcf\x38\x8e\x68\xdb\x76\x95\xe1\x2c\xcf\x95\xf8\x96\x1e\x4e\xb9\xd1\x34\x70\xf2\xbd\xf0\x39\x35\x79\x8d\xbf\x5b\x0d\xc9\x27\xa4\x05\x69\x1b\xce\xef\xe9\x92\x78\xc4\xcf\x01\x5f\xe2\x5b\xfa\x25\xf0\x96\x8c\x44\xff\x4b\x73\x5a\xe3\xd7\x1a\x7f\xb7\xa2\xce\xa3\x83\x00\xa4\x8b\x87\x77\x29\x9f\xeb\x29\xd1\xbf\x94\xd3\x25\x70\xa5\x39\xa5\x31\xc4\xef\xfb\x5e\xe4\xef\x0a"
		"\x48\xed\x46\x24\xf9\x3c\xc5\x49\x39\x79\x49\x7e\x69\x3d\x45\x45\xd4\x70\x08\x0d\x0c\xee\x10\x54\xd4\x2d\x87\xd8\xbc\xcb\xd2\x0a"
		"\x5a\x89\xfc\x8f\xff\x42\x98\x3d\x38\xc6\x68\x16\x5e\x29\x02\x4b\xd2\x46\x4d\xfd\xd1\xea\x83\xe6\xfd\xaf\x46\xc5\xaf\x00\xa2\x15\x5a\xc9\xb3\x24\xaf\x79\x32\x78\x4a\x08\x21\x98\xf2\xb5\x7c\xcd\x70\xdc\xcb\xa5\xee\x48\xaa\x91\xbc\xbe\xf0\x08\xd3\xba\xaf\x5d\x52\x16\x9f\x90\xb7\x79\xf4\x3c\x0c\xc3\x13\x8f\xe7\x7f\x69\xe1\x96\x3c\xe7\x6b\xa9\xc7\x2a\xbe\x25\xfa\xb4\xfd\xf0\x39\x2c\x3d\xbb\x9e\x43\x8e\x3a\x47\x68\x51\x70\x95\x83\xe9\x26\xe7\x90\x23\xc9\x8a\xa8\x7f\xff\xea\x64\x6f\xfa\x6b\x86\xf7\x97\x8b\x0e\x88\x93\x03\xe2\x80\x38\x6d\x02\x08\x7d\x82\xe2\x74\x6c\xcb\x0b\x00\x01\xf0\x0f\xe5\x4e\xd3\xd6\xdf\x11\xbe\x01\x4e\xba\x2b\x0c\xaf\x3d\xc9\x2e\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82"s
	);
}
