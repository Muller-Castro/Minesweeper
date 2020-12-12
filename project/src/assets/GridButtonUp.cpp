/****************************************************************************************/
/* GridButtonUp.cpp                                                                     */
/****************************************************************************************/
/* Copyright (c) 2020 Muller Castro.                                                    */
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

#include "assets/GridButtonUp.h"

#include <vector>

std::pair<std::string, std::string> Minesweeper::get_raw_grid_button_up()
{
	std::pair<std::string, std::string> result = std::make_pair("GridButtonUp", "");

	std::vector<short> raw_data {
		
		0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a,
		0x1a, 0x0a,
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x08, 0x02, 0x00, 0x00, 0x00, 0x02, 0xeb, 0x8a, 0x5a, 0x00, 0x00, 0x01, 0x85, 0x69, 0x43, 0x43, 0x50, 0x49, 0x43, 0x43, 0x20, 0x70, 0x72, 0x6f, 0x66, 0x69, 0x6c, 0x65, 0x00, 0x00, 0x28, 0x91, 0x7d, 0x91, 0x3d, 0x48, 0xc3, 0x40, 0x18, 0x86, 0xdf, 0xa6, 0x96, 0x8a, 0x54, 0x04, 0xed, 0x20, 0xd2, 0x21, 0x43, 0x75, 0xb2, 0x20, 0x2a, 0xe2, 0x28, 0x55, 0x2c, 0x82, 0x85, 0xd2, 0x56, 0x68, 0xd5, 0xc1, 0xe4, 0xd2, 0x3f, 0x68, 0xd2, 0x90, 0xa4, 0xb8, 0x38, 0x0a,
		0xae, 0x05, 0x07, 0x7f, 0x16, 0xab, 0x0e, 0x2e, 0xce, 0xba, 0x3a, 0xb8, 0x0a,
		0x82, 0xe0, 0x0f, 0x88, 0x93, 0xa3, 0x93, 0xa2, 0x8b, 0x94, 0xf8, 0x5d, 0x52, 0x68, 0x11, 0xe3, 0xc1, 0xdd, 0x3d, 0xbc, 0xf7, 0xbd, 0x2f, 0x77, 0xdf, 0x01, 0x42, 0xb3, 0xca, 0x54, 0xb3, 0x67, 0x02, 0x50, 0x35, 0xcb, 0x48, 0x27, 0xe2, 0x62, 0x2e, 0xbf, 0x2a, 0x06, 0x5f, 0x11, 0x42, 0x00, 0x83, 0xb4, 0x46, 0x24, 0x66, 0xea, 0xc9, 0xcc, 0x62, 0x16, 0x9e, 0xe3, 0xeb, 0x1e, 0x3e, 0xbe, 0xdf, 0xc5, 0x78, 0x96, 0x77, 0xdd, 0x9f, 0xa3, 0x5f, 0x29, 0x98, 0x0c, 0xf0, 0x89, 0xc4, 0x73, 0x4c, 0x37, 0x2c, 0xe2, 0x0d, 0xe2, 0x99, 0x4d, 0x4b, 0xe7, 0xbc, 0x4f, 0x1c, 0x66, 0x65, 0x49, 0x21, 0x3e, 0x27, 0x1e, 0x37, 0xe8, 0x82, 0xc4, 0x8f, 0x5c, 0x97, 0x5d, 0x7e, 0xe3, 0x5c, 0x72, 0x58, 0xe0, 0x99, 0x61, 0x23, 0x9b, 0x9e, 0x27, 0x0e, 0x13, 0x8b, 0xa5, 0x2e, 0x96, 0xbb, 0x98, 0x95, 0x0d, 0x95, 0x78, 0x9a, 0x38, 0xaa, 0xa8, 0x1a, 0xe5, 0x0b, 0x39, 0x97, 0x15, 0xce, 0x5b, 0x9c, 0xd5, 0x6a, 0x9d, 0xb5, 0xef, 0xc9, 0x5f, 0x18, 0x2a, 0x68, 0x2b, 0x19, 0xae, 0xd3, 0x8c, 0x20, 0x81, 0x25, 0x24, 0x91, 0x82, 0x08, 0x19, 0x75, 0x54, 0x50, 0x85, 0x85, 0x18, 0xed, 0x1a, 0x29, 0x26, 0xd2, 0x74, 0x1e, 0xf7, 0xf0, 0x8f, 0x38, 0xfe, 0x14, 0xb9, 0x64, 0x72, 0x55, 0xc0, 0xc8, 0xb1, 0x80, 0x1a, 0x54, 0x48, 0x8e, 0x1f, 0xfc, 0x0f, 0x7e, 0xf7, 0xd6, 0x2c, 0x4e, 0x4d, 0xba, 0x49, 0xa1, 0x38, 0x10, 0x78, 0xb1, 0xed, 0x8f, 0x51, 0x20, 0xb8, 0x0b, 0xb4, 0x1a, 0xb6, 0xfd, 0x7d, 0x6c, 0xdb, 0xad, 0x13, 0xc0, 0xff, 0x0c, 0x5c, 0x69, 0x1d, 0x7f, 0xad, 0x09, 0xcc, 0x7e, 0x92, 0xde, 0xe8, 0x68, 0xd1, 0x23, 0x60, 0x60, 0x1b, 0xb8, 0xb8, 0xee, 0x68, 0xf2, 0x1e, 0x70, 0xb9, 0x03, 0x0c, 0x3f, 0xe9, 0x92, 0x21, 0x39, 0x92, 0x9f, 0xa6, 0x50, 0x2c, 0x02, 0xef, 0x67, 0xf4, 0x4d, 0x79, 0x60, 0xe8, 0x16, 0xe8, 0x5b, 0x73, 0xfb, 0xd6, 0x3e, 0xc7, 0xe9, 0x03, 0x90, 0xa5, 0x5e, 0x2d, 0xdf, 0x00, 0x07, 0x87, 0xc0, 0x58, 0x89, 0xb2, 0xd7, 0x3d, 0xde, 0xdd, 0xdb, 0xdd, 0xb7, 0x7f, 0x6b, 0xda, 0xfd, 0xfb, 0x01, 0x45, 0xad, 0x72, 0x95, 0x30, 0x9c, 0xf7, 0x27, 0x00, 0x00, 0x00, 0x06, 0x62, 0x4b, 0x47, 0x44, 0x00, 0x87, 0x00, 0x72, 0x00, 0x68, 0xee, 0x99, 0x82, 0xa9, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x2e, 0x23, 0x00, 0x00, 0x2e, 0x23, 0x01, 0x78, 0xa5, 0x3f, 0x76, 0x00, 0x00, 0x00, 0x07, 0x74, 0x49, 0x4d, 0x45, 0x07, 0xe4, 0x0c, 0x05, 0x12, 0x10, 0x08, 0xe8, 0x94, 0x03, 0x7a, 0x00, 0x00, 0x00, 0x19, 0x74, 0x45, 0x58, 0x74, 0x43, 0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74, 0x00, 0x43, 0x72, 0x65, 0x61, 0x74, 0x65, 0x64, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x47, 0x49, 0x4d, 0x50, 0x57, 0x81, 0x0e, 0x17, 0x00, 0x00, 0x00, 0x43, 0x49, 0x44, 0x41, 0x54, 0x38, 0xcb, 0x63, 0x78, 0xf3, 0xe6, 0xcd, 0x7f, 0xb2, 0x00, 0x50, 0x23, 0x03, 0x84, 0x22, 0x43, 0x67, 0x7a, 0x7a, 0x3a, 0x03, 0x9c, 0x43, 0xaa, 0x4e, 0x84, 0x66, 0x20, 0xe8, 0x27, 0x1a, 0xa4, 0xc3, 0xc0, 0xa8, 0xe6, 0x51, 0xcd, 0xa3, 0x9a, 0x71, 0x6b, 0x86, 0xe7, 0x32, 0x62, 0x40, 0x4c, 0x4c, 0x0c, 0x42, 0x33, 0x49, 0x3a, 0x91, 0xf5, 0x33, 0x90, 0xa1, 0x13, 0xae, 0x1f, 0x00, 0x0a,
		0x58, 0xf7, 0x73, 0x00, 0x91, 0xde, 0xb6, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}