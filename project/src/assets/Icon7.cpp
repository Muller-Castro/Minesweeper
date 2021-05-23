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

#include <vector>

std::pair<std::string, std::string> Minesweeper::get_raw_icon7()
{
	std::pair<std::string, std::string> result = std::make_pair("Icon7", "");

	std::vector<short> raw_data {

		0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a,
		0x1a, 0x0a,
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x08, 0x06, 0x00, 0x00, 0x00, 0x8d, 0x89, 0x1d, 0x0d, 0x00, 0x00, 0x01, 0x8f, 0x69, 0x43, 0x43, 0x50, 0x50, 0x68, 0x6f, 0x74, 0x6f, 0x73, 0x68, 0x6f, 0x70, 0x20, 0x49, 0x43, 0x43, 0x20, 0x70, 0x72, 0x6f, 0x66, 0x69, 0x6c, 0x65, 0x00, 0x00, 0x28, 0x91, 0x7d, 0x91, 0x3d, 0x48, 0xc3, 0x50, 0x14, 0x85, 0x4f, 0x53, 0xb5, 0x22, 0x15, 0x07, 0x3b, 0x88, 0x08, 0x66, 0xa8, 0x4e, 0x16, 0x44, 0x45, 0x74, 0x93, 0x2a, 0x16, 0xc1, 0x42, 0x69, 0x2b, 0xb4, 0xea, 0x60, 0xf2, 0xd2, 0x3f, 0x68, 0xd2, 0x90, 0xa4, 0xb8, 0x38, 0x0a,
		0xae, 0x05, 0x07, 0x7f, 0x16, 0xab, 0x0e, 0x2e, 0xce, 0xba, 0x3a, 0xb8, 0x0a,
		0x82, 0xe0, 0x0f, 0x88, 0x93, 0xa3, 0x93, 0xa2, 0x8b, 0x94, 0x78, 0x5f, 0x52, 0x68, 0x11, 0xe3, 0x85, 0xc7, 0xfb, 0x38, 0xef, 0x9e, 0xc3, 0x7b, 0xf7, 0x01, 0x42, 0xbd, 0xcc, 0x54, 0xb3, 0x63, 0x1c, 0x50, 0x35, 0xcb, 0x48, 0xc6, 0xa2, 0x62, 0x26, 0xbb, 0x2a, 0x06, 0x5e, 0x11, 0x44, 0x17, 0x7c, 0x98, 0xc5, 0xb0, 0xc4, 0x4c, 0x3d, 0x9e, 0x5a, 0x4c, 0xc3, 0xb3, 0xbe, 0xee, 0xa9, 0x93, 0xea, 0x2e, 0xc2, 0xb3, 0xbc, 0xfb, 0xfe, 0xac, 0x5e, 0x25, 0x67, 0x32, 0xc0, 0x27, 0x12, 0xcf, 0x31, 0xdd, 0xb0, 0x88, 0x37, 0x88, 0xa7, 0x37, 0x2d, 0x9d, 0xf3, 0x3e, 0x71, 0x88, 0x15, 0x25, 0x85, 0xf8, 0x9c, 0x78, 0xcc, 0xa0, 0x0b, 0x12, 0x3f, 0x72, 0x5d, 0x76, 0xf9, 0x8d, 0x73, 0xc1, 0x61, 0x81, 0x67, 0x86, 0x8c, 0x74, 0x72, 0x9e, 0x38, 0x44, 0x2c, 0x16, 0xda, 0x58, 0x6e, 0x63, 0x56, 0x34, 0x54, 0xe2, 0x29, 0xe2, 0xb0, 0xa2, 0x6a, 0x94, 0x2f, 0x64, 0x5c, 0x56, 0x38, 0x6f, 0x71, 0x56, 0xcb, 0x55, 0xd6, 0xbc, 0x27, 0x7f, 0x61, 0x30, 0xa7, 0xad, 0xa4, 0xb8, 0x4e, 0x6b, 0x08, 0x31, 0x2c, 0x21, 0x8e, 0x04, 0x44, 0xc8, 0xa8, 0xa2, 0x84, 0x32, 0x2c, 0x44, 0x68, 0xd7, 0x48, 0x31, 0x91, 0xa4, 0xf3, 0xa8, 0x87, 0x7f, 0xd0, 0xf1, 0x27, 0xc8, 0x25, 0x93, 0xab, 0x04, 0x46, 0x8e, 0x05, 0x54, 0xa0, 0x42, 0x72, 0xfc, 0xe0, 0x7f, 0xf0, 0x7b, 0xb6, 0x66, 0x7e, 0x72, 0xc2, 0x4d, 0x0a,
		0x46, 0x81, 0xce, 0x17, 0xdb, 0xfe, 0x18, 0x01, 0x02, 0xbb, 0x40, 0xa3, 0x66, 0xdb, 0xdf, 0xc7, 0xb6, 0xdd, 0x38, 0x01, 0xfc, 0xcf, 0xc0, 0x95, 0xd6, 0xf2, 0x57, 0xea, 0xc0, 0xcc, 0x27, 0xe9, 0xb5, 0x96, 0x16, 0x3e, 0x02, 0xfa, 0xb6, 0x81, 0x8b, 0xeb, 0x96, 0x26, 0xef, 0x01, 0x97, 0x3b, 0xc0, 0xc0, 0x93, 0x2e, 0x19, 0x92, 0x23, 0xf9, 0x69, 0x09, 0xf9, 0x3c, 0xf0, 0x7e, 0x46, 0xdf, 0x94, 0x05, 0xfa, 0x6f, 0x81, 0x9e, 0x35, 0x77, 0x6e, 0xcd, 0x73, 0x9c, 0x3e, 0x00, 0x69, 0x9a, 0xd5, 0xf2, 0x0d, 0x70, 0x70, 0x08, 0x8c, 0x16, 0x28, 0x7b, 0xdd, 0xe3, 0xdd, 0xdd, 0xed, 0x73, 0xfb, 0xb7, 0xa7, 0x39, 0xbf, 0x1f, 0x95, 0x69, 0x72, 0xb5, 0xc0, 0x01, 0x6d, 0x19, 0x00, 0x00, 0x00, 0x20, 0x63, 0x48, 0x52, 0x4d, 0x00, 0x00, 0x7a, 0x25, 0x00, 0x00, 0x80, 0x83, 0x00, 0x00, 0xf9, 0xff, 0x00, 0x00, 0x80, 0xe9, 0x00, 0x00, 0x75, 0x30, 0x00, 0x00, 0xea, 0x60, 0x00, 0x00, 0x3a, 0x98, 0x00, 0x00, 0x17, 0x6f, 0x92, 0x5f, 0xc5, 0x46, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x2e, 0x23, 0x00, 0x00, 0x2e, 0x23, 0x01, 0x78, 0xa5, 0x3f, 0x76, 0x00, 0x00, 0x00, 0xc2, 0x49, 0x44, 0x41, 0x54, 0x38, 0xcb, 0xed, 0xd4, 0x31, 0x0e, 0x82, 0x30, 0x14, 0x80, 0xe1, 0x3f, 0x84, 0x0b, 0x78, 0x07, 0x07, 0x47, 0x4f, 0x61, 0x3c, 0x03, 0x3b, 0x8e, 0x1e, 0x00, 0x48, 0x4c, 0x08, 0x1e, 0x00, 0x06, 0x13, 0x8e, 0xc2, 0x49, 0x38, 0x0c, 0x24, 0xcf, 0xe1, 0x35, 0xa6, 0x12, 0x2b, 0x6d, 0x35, 0x4e, 0x0e, 0xff, 0x40, 0x87, 0x2f, 0x25, 0x7d, 0x2d, 0x22, 0xc2, 0x37, 0x7b, 0xfe, 0x80, 0x0e, 0x98, 0x02, 0xeb, 0x80, 0x8d, 0x0b, 0x9c, 0x26, 0x90, 0x90, 0x0a,
		0x10, 0xa0, 0x70, 0x81, 0xba, 0x14, 0x50, 0xa5, 0x60, 0xe5, 0x02, 0xc7, 0x11, 0xc4, 0x27, 0x5f, 0xf0, 0x0c, 0x8c, 0x1e, 0x3d, 0xc0, 0x5a, 0xc1, 0xfa, 0x25, 0xf8, 0xf6, 0xf4, 0x60, 0xb7, 0x05, 0x39, 0x80, 0x1c, 0x41, 0x06, 0x53, 0xa6, 0x60, 0x16, 0x03, 0xb6, 0xad, 0xb5, 0x33, 0xb4, 0xc1, 0xc6, 0x42, 0xc1, 0xa6, 0x31, 0xd8, 0xac, 0xd8, 0xbc, 0x3a, 0x87, 0x3f, 0x01, 0x81, 0x3d, 0xd0, 0x03, 0xfd, 0x75, 0xf1, 0xcb, 0xc1, 0x20, 0x90, 0x24, 0x20, 0xbd, 0xe9, 0x02, 0x72, 0x02, 0xc9, 0x15, 0xbc, 0xc5, 0x80, 0x69, 0x6a, 0xed, 0xaa, 0x54, 0xa8, 0x04, 0x72, 0xaf, 0xbb, 0xbc, 0x06, 0x2e, 0x87, 0xf8, 0x0f, 0xfa, 0x83, 0xae, 0xa7, 0x2a, 0x76, 0x0e, 0x3b, 0xd7, 0x63, 0xfa, 0xd1, 0x4d, 0xf1, 0xed, 0x0e, 0xd3, 0x13, 0x9e, 0x63, 0xa5, 0xb1, 0x0c, 0xe2, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}
