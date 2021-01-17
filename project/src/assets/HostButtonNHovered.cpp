/****************************************************************************************/
/* HostButtonNHovered.cpp                                                               */
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

#include "assets/HostButtonNHovered.h"

#include <vector>

std::pair<std::string, std::string> Minesweeper::get_raw_host_button_n_hovered()
{
	std::pair<std::string, std::string> result = std::make_pair("HostButtonNHovered", "");

	std::vector<short> raw_data {
		
		0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a,
		0x1a, 0x0a,
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x9e, 0x00, 0x00, 0x00, 0x32, 0x08, 0x04, 0x00, 0x00, 0x00, 0x07, 0x52, 0xaa, 0x65, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 0x42, 0x01, 0xd9, 0xc9, 0x2c, 0x7f, 0x00, 0x00, 0x00, 0x20, 0x63, 0x48, 0x52, 0x4d, 0x00, 0x00, 0x7a, 0x26, 0x00, 0x00, 0x80, 0x84, 0x00, 0x00, 0xfa, 0x00, 0x00, 0x00, 0x80, 0xe8, 0x00, 0x00, 0x75, 0x30, 0x00, 0x00, 0xea, 0x60, 0x00, 0x00, 0x3a, 0x98, 0x00, 0x00, 0x17, 0x70, 0x9c, 0xba, 0x51, 0x3c, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x13, 0x00, 0x00, 0x0b, 0x13, 0x01, 0x00, 0x9a, 0x9c, 0x18, 0x00, 0x00, 0x03, 0x3a, 0x49, 0x44, 0x41, 0x54, 0x68, 0xde, 0xed, 0x9b, 0xbf, 0x6b, 0xdb, 0x40, 0x14, 0xc7, 0x95, 0xc9, 0x84, 0xd2, 0xa5, 0x9d, 0x83, 0x17, 0x93, 0xc9, 0x53, 0xe8, 0x10, 0x28, 0x74, 0x68, 0xb2, 0xc4, 0xe4, 0x0f, 0xe8, 0x92, 0xa9, 0x8b, 0x82, 0x96, 0x2e, 0x01, 0x6f, 0x5d, 0x12, 0x70, 0x96, 0x14, 0x4a, 0xba, 0xf9, 0x2f, 0xe8, 0x60, 0x68, 0x49, 0xa0, 0xa8, 0x14, 0x3a, 0x15, 0x0a,
		0x19, 0x62, 0x3c, 0x64, 0xca, 0x9c, 0x78, 0xe8, 0x90, 0xc4, 0xa5, 0x84, 0x90, 0xbe, 0xbe, 0xf7, 0x74, 0x92, 0x6d, 0xf9, 0x64, 0x9d, 0x7e, 0x38, 0x92, 0xcb, 0xd3, 0x17, 0x87, 0xfb, 0xf1, 0xde, 0xe9, 0xe9, 0x93, 0x93, 0x74, 0xba, 0xe3, 0x2c, 0xd7, 0x52, 0x7a, 0x86, 0xfa, 0x23, 0x32, 0x10, 0x91, 0x62, 0x66, 0x1e, 0xb8, 0x17, 0xa8, 0x9f, 0x28, 0x10, 0x19, 0x88, 0x48, 0x11, 0x31, 0x86, 0xb7, 0xe9, 0x7e, 0x47, 0x09, 0x94, 0x24, 0x22, 0x62, 0x9b, 0x96, 0xfb, 0xdc, 0xed, 0x09, 0x8c, 0x54, 0xea, 0x59, 0xee, 0x2f, 0xc1, 0x90, 0x56, 0x96, 0xfb, 0x57, 0x20, 0xa4, 0x87, 0x27, 0x10, 0x04, 0x9e, 0xc0, 0x13, 0x78, 0x02, 0x4f, 0x24, 0xf0, 0xe6, 0x00, 0xde, 0x47, 0xd8, 0x82, 0x15, 0x58, 0x04, 0x0b, 0xb5, 0x88, 0xa9, 0x2d, 0x2c, 0x11, 0x78, 0x46, 0xda, 0x66, 0x68, 0x61, 0x6d, 0x1b, 0x7a, 0x37, 0xa1, 0xae, 0x3c, 0xea, 0x0c, 0x7d, 0x34, 0xdf, 0xcc, 0x1c, 0x5b, 0xbe, 0xad, 0xe5, 0x0e, 0xef, 0x58, 0x8b, 0x8e, 0x74, 0x6c, 0x74, 0x71, 0xe3, 0x3e, 0x4f, 0x42, 0x79, 0x3b, 0x53, 0x6c, 0x76, 0xa8, 0xb5, 0xb5, 0xb2, 0xc1, 0xdb, 0x57, 0x61, 0x7d, 0x85, 0x6b, 0xa0, 0xe3, 0x1a, 0x53, 0x6b, 0x5c, 0xb6, 0x6f, 0xe0, 0x5d, 0x8f, 0x44, 0xef, 0xeb, 0x28, 0x75, 0x64, 0x47, 0x9a, 0xd6, 0xde, 0x95, 0x0b, 0xde, 0x2e, 0x07, 0xd5, 0x80, 0x53, 0xf0, 0x8f, 0x53, 0xcc, 0x51, 0xd9, 0xae, 0xc9, 0xe9, 0x59, 0xde, 0xd1, 0x55, 0xb9, 0xb6, 0xca, 0x3b, 0x9c, 0x6b, 0xa1, 0x55, 0x07, 0xff, 0x8e, 0xaa, 0x33, 0xd6, 0x46, 0xb8, 0xd6, 0xb7, 0x68, 0xb1, 0xbf, 0xa3, 0x5a, 0x6b, 0x73, 0xee, 0xb5, 0xc6, 0xbf, 0x40, 0x78, 0x5e, 0x88, 0xeb, 0xf0, 0x0d, 0x06, 0x1c, 0xe4, 0x00, 0x53, 0xeb, 0xc1, 0x65, 0xe7, 0x01, 0xaf, 0xaa, 0xe9, 0x41, 0x55, 0x38, 0x60, 0xff, 0x03, 0x6d, 0xad, 0x67, 0x61, 0x6b, 0xe0, 0x85, 0xfd, 0x0b, 0x83, 0xf7, 0x19, 0x3e, 0xe1, 0x6f, 0xda, 0x6d, 0xeb, 0x59, 0x64, 0x83, 0x17, 0x0d, 0x87, 0xfc, 0xab, 0xb1, 0xb7, 0xbd, 0x1e, 0x9e, 0xef, 0x5f, 0x08, 0xbc, 0xf7, 0x50, 0x0b, 0x3d, 0x8a, 0x27, 0xe1, 0xf9, 0xaa, 0xa1, 0x75, 0x7a, 0x78, 0xa4, 0x65, 0x4c, 0x8f, 0x6a, 0x79, 0xac, 0x6f, 0x85, 0x6b, 0x87, 0x16, 0x84, 0xce, 0x6f, 0xed, 0xcb, 0x44, 0x6d, 0xa7, 0x28, 0x78, 0xb5, 0xd0, 0xff, 0x71, 0x15, 0x91, 0xdd, 0x70, 0x90, 0x37, 0x98, 0x5a, 0x0d, 0xd5, 0xd6, 0x32, 0xc2, 0x73, 0x60, 0xfc, 0x70, 0xb4, 0x7d, 0x4b, 0x67, 0xa1, 0x3f, 0x1c, 0xe3, 0xc7, 0xca, 0x0c, 0xe0, 0x1d, 0xf2, 0xc9, 0x1f, 0xc1, 0x63, 0xfc, 0x79, 0x6a, 0x20, 0xb2, 0x2b, 0x0e, 0xec, 0x0a,
		0x53, 0x8d, 0xa0, 0x9c, 0x2c, 0xc8, 0xf6, 0x30, 0x03, 0x3c, 0xaf, 0xf7, 0x0c, 0xb0, 0x9e, 0xd4, 0xe7, 0x5b, 0x30, 0xdc, 0xb7, 0xfc, 0x5a, 0x5f, 0xaf, 0x54, 0x6d, 0x17, 0xce, 0x55, 0x6b, 0xfd, 0x89, 0xda, 0x0f, 0xc5, 0xc0, 0xdb, 0xe0, 0x93, 0xbf, 0x81, 0xb7, 0xf8, 0xf3, 0xb4, 0x87, 0x03, 0x83, 0x0b, 0x0e, 0xf2, 0x02, 0x53, 0x7b, 0x41, 0x39, 0x59, 0x90, 0xed, 0x46, 0x06, 0x78, 0x49, 0x6a, 0xcd, 0x9f, 0x79, 0x95, 0xa2, 0x9e, 0x79, 0x4b, 0x7c, 0xfa, 0x33, 0xfc, 0x6f, 0x9e, 0x29, 0x9d, 0xc0, 0x0f, 0xb8, 0xe4, 0x20, 0x2f, 0x31, 0x75, 0x12, 0x94, 0x93, 0x05, 0xd9, 0x2e, 0x19, 0xc0, 0xeb, 0xe3, 0x05, 0x92, 0xba, 0xb9, 0xc0, 0xab, 0xa8, 0x01, 0xb7, 0x1e, 0x5e, 0x05, 0x76, 0x8a, 0x82, 0xb7, 0xc0, 0x01, 0xdc, 0x63, 0x48, 0xf7, 0x4a, 0xb7, 0xf0, 0x1b, 0xee, 0x38, 0xc8, 0x3b, 0x4c, 0xdd, 0x06, 0xe5, 0x64, 0x41, 0xb6, 0x0b, 0x06, 0xf0, 0xa6, 0x3f, 0xb7, 0x92, 0xc1, 0x7b, 0x8a, 0x1f, 0x7a, 0xba, 0x71, 0xde, 0x0a,
		0x2b, 0xaf, 0x6f, 0xef, 0x12, 0xc1, 0x4b, 0xd7, 0xf3, 0xda, 0xf8, 0x1e, 0x1d, 0xfa, 0x92, 0x5e, 0x06, 0x7d, 0x4b, 0x37, 0x48, 0x2e, 0xfc, 0x0b, 0x63, 0x36, 0xb7, 0x6d, 0xba, 0x67, 0x5e, 0xf4, 0xbb, 0xb8, 0x52, 0x4e, 0x78, 0x65, 0x7a, 0x61, 0x8c, 0x8f, 0xf3, 0xa8, 0x17, 0x9e, 0x8f, 0xbc, 0x6d, 0x4b, 0x08, 0xef, 0x61, 0x87, 0x2a, 0x49, 0xbe, 0x3f, 0xa2, 0xfb, 0xe5, 0xe8, 0x0b, 0x23, 0xaf, 0xe9, 0xa9, 0x39, 0x18, 0x24, 0xc7, 0xf5, 0xbc, 0xe4, 0xf0, 0xb2, 0x4f, 0x76, 0xcd, 0xcd, 0xe7, 0xd9, 0x6c, 0xe0, 0x65, 0x99, 0xec, 0x9a, 0x9b, 0x89, 0x81, 0xb8, 0xcf, 0xb3, 0xe8, 0x21, 0x8e, 0x15, 0xe3, 0xdf, 0x2a, 0x12, 0xde, 0xc3, 0x4c, 0x49, 0xa5, 0x87, 0x67, 0x07, 0x33, 0xc9, 0xa5, 0x85, 0x97, 0x6d, 0x32, 0x34, 0x7e, 0x26, 0x39, 0x5a, 0xd3, 0x7d, 0x9b, 0xda, 0x69, 0xfe, 0xd2, 0xdc, 0xb6, 0x79, 0x4c, 0xc3, 0xc7, 0xaf, 0x61, 0xd8, 0x11, 0x97, 0x6e, 0x4f, 0x05, 0x63, 0x47, 0xae, 0x63, 0x94, 0xe0, 0x85, 0x91, 0xd7, 0x02, 0x90, 0xc9, 0xea, 0x59, 0x73, 0xa2, 0x8f, 0x45, 0xd7, 0xe8, 0x06, 0x22, 0xd1, 0xfe, 0x73, 0xbf, 0xf4, 0x28, 0x8b, 0xde, 0xb2, 0xe8, 0x2d, 0x12, 0x78, 0x02, 0x4f, 0xe0, 0x09, 0x3c, 0x91, 0xc0, 0x13, 0x78, 0x02, 0xef, 0xbf, 0x82, 0x27, 0x9b, 0xa7, 0xd2, 0xaa, 0x27, 0xdb, 0xf6, 0xd2, 0x8a, 0x37, 0xee, 0xf9, 0x1b, 0x46, 0x05, 0x87, 0xb9, 0xbc, 0x4d, 0xa3, 0xd6, 0x70, 0xab, 0xb2, 0x6c, 0x42, 0x4e, 0xbc, 0x5d, 0xf9, 0x1f, 0x46, 0x8d, 0xa4, 0xe4, 0xb0, 0xb7, 0x2d, 0x08, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}
