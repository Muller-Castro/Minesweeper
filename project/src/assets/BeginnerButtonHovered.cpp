/****************************************************************************************/
/* BeginnerButtonHovered.cpp                                                            */
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

#include "assets/BeginnerButtonHovered.h"

#include <vector>

std::pair<std::string, std::string> Minesweeper::get_raw_beginner_button_hovered()
{
	std::pair<std::string, std::string> result = std::make_pair("BeginnerButtonHovered", "");

	std::vector<short> raw_data {
		
		0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a,
		0x1a, 0x0a,
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0xcb, 0x00, 0x00, 0x00, 0x35, 0x08, 0x06, 0x00, 0x00, 0x00, 0xef, 0x63, 0x1f, 0x5a, 0x00, 0x00, 0x01, 0x85, 0x69, 0x43, 0x43, 0x50, 0x49, 0x43, 0x43, 0x20, 0x70, 0x72, 0x6f, 0x66, 0x69, 0x6c, 0x65, 0x00, 0x00, 0x28, 0x91, 0x7d, 0x91, 0x3d, 0x48, 0xc3, 0x40, 0x1c, 0xc5, 0x5f, 0x5b, 0xa5, 0xa2, 0x2d, 0x0e, 0x76, 0x10, 0x91, 0x12, 0xa1, 0x3a, 0x59, 0x10, 0x15, 0x71, 0x94, 0x2a, 0x16, 0xc1, 0x42, 0x69, 0x2b, 0xb4, 0xea, 0x60, 0x72, 0xe9, 0x17, 0x34, 0x69, 0x48, 0x52, 0x5c, 0x1c, 0x05, 0xd7, 0x82, 0x83, 0x1f, 0x8b, 0x55, 0x07, 0x17, 0x67, 0x5d, 0x1d, 0x5c, 0x05, 0x41, 0xf0, 0x03, 0xc4, 0xc9, 0xd1, 0x49, 0xd1, 0x45, 0x4a, 0xfc, 0x5f, 0x52, 0x68, 0x11, 0xe3, 0xc1, 0x71, 0x3f, 0xde, 0xdd, 0x7b, 0xdc, 0xbd, 0x03, 0xbc, 0x8d, 0x0a,
		0x53, 0x8c, 0xae, 0x09, 0x40, 0x51, 0x4d, 0x3d, 0x15, 0x8f, 0x09, 0xd9, 0xdc, 0xaa, 0xe0, 0x7f, 0x45, 0x1f, 0xc2, 0x08, 0x62, 0x04, 0x61, 0x91, 0x19, 0x5a, 0x22, 0xbd, 0x98, 0x81, 0xeb, 0xf8, 0xba, 0x87, 0x87, 0xaf, 0x77, 0x51, 0x9e, 0xe5, 0x7e, 0xee, 0xcf, 0x11, 0x94, 0xf3, 0x06, 0x03, 0x3c, 0x02, 0xf1, 0x1c, 0xd3, 0x74, 0x93, 0x78, 0x83, 0x78, 0x66, 0xd3, 0xd4, 0x38, 0xef, 0x13, 0x87, 0x58, 0x49, 0x94, 0x89, 0xcf, 0x89, 0xc7, 0x75, 0xba, 0x20, 0xf1, 0x23, 0xd7, 0x25, 0x87, 0xdf, 0x38, 0x17, 0x6d, 0xf6, 0xf2, 0xcc, 0x90, 0x9e, 0x49, 0xcd, 0x13, 0x87, 0x88, 0x85, 0x62, 0x07, 0x4b, 0x1d, 0xcc, 0x4a, 0xba, 0x42, 0x3c, 0x4d, 0x1c, 0x91, 0x15, 0x95, 0xf2, 0xbd, 0x59, 0x87, 0x65, 0xce, 0x5b, 0x9c, 0x95, 0x4a, 0x8d, 0xb5, 0xee, 0xc9, 0x5f, 0x18, 0xc8, 0xab, 0x2b, 0x69, 0xae, 0xd3, 0x1c, 0x46, 0x1c, 0x4b, 0x48, 0x20, 0x09, 0x01, 0x12, 0x6a, 0x28, 0xa3, 0x02, 0x13, 0x51, 0x5a, 0x55, 0x52, 0x0c, 0xa4, 0x68, 0x3f, 0xe6, 0xe2, 0x1f, 0xb2, 0xfd, 0x49, 0x72, 0x49, 0xe4, 0x2a, 0x83, 0x91, 0x63, 0x01, 0x55, 0x28, 0x10, 0x6d, 0x3f, 0xf8, 0x1f, 0xfc, 0xee, 0xd6, 0x28, 0x4c, 0x4d, 0x3a, 0x49, 0x81, 0x18, 0xd0, 0xfd, 0x62, 0x59, 0x1f, 0xa3, 0x80, 0x7f, 0x17, 0x68, 0xd6, 0x2d, 0xeb, 0xfb, 0xd8, 0xb2, 0x9a, 0x27, 0x80, 0xef, 0x19, 0xb8, 0x52, 0xdb, 0xfe, 0x6a, 0x03, 0x98, 0xfd, 0x24, 0xbd, 0xde, 0xd6, 0x22, 0x47, 0x40, 0xff, 0x36, 0x70, 0x71, 0xdd, 0xd6, 0xa4, 0x3d, 0xe0, 0x72, 0x07, 0x18, 0x7c, 0xd2, 0x44, 0x5d, 0xb4, 0x25, 0x1f, 0x4d, 0x6f, 0xa1, 0x00, 0xbc, 0x9f, 0xd1, 0x37, 0xe5, 0x80, 0x81, 0x5b, 0xa0, 0x77, 0xcd, 0xe9, 0xad, 0xb5, 0x8f, 0xd3, 0x07, 0x20, 0x43, 0x5d, 0x2d, 0xdf, 0x00, 0x07, 0x87, 0xc0, 0x58, 0x91, 0xb2, 0xd7, 0x5d, 0xde, 0xdd, 0xd3, 0xd9, 0xdb, 0xbf, 0x67, 0x5a, 0xfd, 0xfd, 0x00, 0xae, 0xd3, 0x72, 0xbf, 0xf1, 0xa0, 0x6e, 0xb7, 0x00, 0x00, 0x00, 0x06, 0x62, 0x4b, 0x47, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf9, 0x43, 0xbb, 0x7f, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x2e, 0x23, 0x00, 0x00, 0x2e, 0x23, 0x01, 0x78, 0xa5, 0x3f, 0x76, 0x00, 0x00, 0x00, 0x07, 0x74, 0x49, 0x4d, 0x45, 0x07, 0xe4, 0x0b, 0x1e, 0x10, 0x21, 0x39, 0x49, 0xab, 0xdc, 0x12, 0x00, 0x00, 0x00, 0x19, 0x74, 0x45, 0x58, 0x74, 0x43, 0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74, 0x00, 0x43, 0x72, 0x65, 0x61, 0x74, 0x65, 0x64, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x47, 0x49, 0x4d, 0x50, 0x57, 0x81, 0x0e, 0x17, 0x00, 0x00, 0x03, 0x2a, 0x49, 0x44, 0x41, 0x54, 0x78, 0xda, 0xed, 0x9c, 0x3d, 0x8b, 0xd4, 0x40, 0x18, 0x80, 0xdf, 0x85, 0xe3, 0x0a,
		0x39, 0xb0, 0xb3, 0xb2, 0xf2, 0x27, 0xf8, 0x13, 0x04, 0xf1, 0x2f, 0x1c, 0x36, 0x82, 0xf5, 0xba, 0xc5, 0x6e, 0xa1, 0x1c, 0x82, 0x88, 0x85, 0x6b, 0xb5, 0x16, 0x82, 0x76, 0xca, 0x95, 0x5a, 0x88, 0x57, 0x58, 0xd9, 0x8a, 0x85, 0xe7, 0x09, 0x62, 0x21, 0x88, 0x8d, 0x8d, 0xbd, 0xed, 0xa9, 0xe3, 0x66, 0xb3, 0xc7, 0x1e, 0xb9, 0x64, 0x92, 0xcc, 0xbc, 0x33, 0x99, 0xec, 0x3e, 0x0b, 0x0f, 0x81, 0x25, 0xc9, 0xbe, 0x99, 0xbc, 0xcf, 0xce, 0x57, 0x26, 0x22, 0x22, 0x83, 0x39, 0xdb, 0xd9, 0xd6, 0x3c, 0x14, 0x03, 0x00, 0x2b, 0x96, 0x7e, 0xec, 0x2c, 0xb7, 0x0b, 0x51, 0xb6, 0x29, 0x18, 0x80, 0x4a, 0x61, 0x76, 0x96, 0x50, 0xa3, 0x00, 0x34, 0xaa, 0x61, 0x8a, 0x5f, 0xce, 0x66, 0x33, 0x00, 0x98, 0x73, 0x46, 0x18, 0x44, 0x01, 0x68, 0x26, 0x0c, 0xb2, 0x00, 0x20, 0x0b, 0x00, 0xb2, 0x00, 0x20, 0x0b, 0x00, 0xb2, 0x00, 0x20, 0x0b, 0x00, 0xb2, 0x00, 0x00, 0xb2, 0x00, 0x20, 0x0b, 0x40, 0xba, 0xb2, 0x88, 0x48, 0x6b, 0xa6, 0xd3, 0x69, 0xf4, 0x0b, 0x4e, 0x29, 0x96, 0x14, 0x19, 0x8f, 0xc7, 0xa5, 0xe5, 0x33, 0x1a, 0x8d, 0x6a, 0xf7, 0x09, 0x55, 0xae, 0xa9, 0xc4, 0xa4, 0x22, 0x8b, 0x8b, 0x28, 0x5d, 0x24, 0x69, 0x8a, 0xf2, 0xf6, 0x41, 0x94, 0xd3, 0xc9, 0xd9, 0x26, 0x29, 0x35, 0xca, 0x35, 0xa5, 0x98, 0x3a, 0x97, 0x25, 0x63, 0x38, 0x1c, 0x22, 0x4b, 0xc7, 0xf8, 0xde, 0xc3, 0x10, 0xf7, 0x38, 0xb5, 0x98, 0xd4, 0x65, 0x31, 0x9f, 0xeb, 0xd9, 0x7f, 0xd0, 0x8d, 0x30, 0x65, 0x71, 0x3e, 0xbf, 0x87, 0x2c, 0x65, 0x89, 0xf4, 0xf5, 0x55, 0x5e, 0x3e, 0xdf, 0x5e, 0x57, 0x27, 0xdb, 0xc9, 0x3e, 0x21, 0xee, 0x71, 0x8a, 0x31, 0x05, 0x93, 0xe5, 0xcf, 0xa1, 0x98, 0xe3, 0xc3, 0x7c, 0xfb, 0xf7, 0xd3, 0x9c, 0x23, 0x31, 0xff, 0x8e, 0xec, 0x41, 0xbb, 0x54, 0xa1, 0x2e, 0x55, 0x70, 0x95, 0x2c, 0x6d, 0xab, 0x71, 0xdf, 0x66, 0x67, 0xdb, 0x76, 0x76, 0xa8, 0x66, 0x6e, 0xac, 0xc4, 0xb4, 0xc5, 0x36, 0x99, 0x4c, 0x6a, 0xf7, 0x5f, 0x5b, 0x59, 0x6c, 0x49, 0xf8, 0xe5, 0x65, 0xbe, 0xcf, 0xf7, 0x37, 0x7e, 0x7d, 0x1d, 0x57, 0x51, 0xba, 0x26, 0x76, 0xec, 0x75, 0xc2, 0xd8, 0x5a, 0x06, 0x65, 0x89, 0xa9, 0x79, 0x8f, 0xb3, 0xd8, 0xea, 0x44, 0x09, 0x19, 0xd3, 0x46, 0xc8, 0x02, 0x7a, 0xed, 0xf3, 0x2e, 0x65, 0x69, 0xd3, 0x0a,
		0x40, 0x16, 0xa5, 0xaa, 0xdd, 0x76, 0xdc, 0x09, 0xa7, 0x7f, 0xaf, 0x2c, 0x4e, 0xd7, 0xfe, 0x96, 0xeb, 0x71, 0xae, 0xd7, 0xac, 0xdd, 0x2f, 0x6c, 0xdb, 0xe4, 0x71, 0x6d, 0xc2, 0x6a, 0xe5, 0x86, 0x66, 0x4c, 0xc8, 0x82, 0x2c, 0xc8, 0xb2, 0xce, 0xb2, 0xa4, 0x70, 0x5c, 0x9f, 0x63, 0xf7, 0x6d, 0x72, 0xc4, 0x48, 0x4c, 0xdb, 0xb9, 0x6d, 0x83, 0x3f, 0xa1, 0x62, 0xea, 0xed, 0xd0, 0x31, 0xb2, 0x74, 0x2b, 0x4b, 0x71, 0x74, 0xae, 0x49, 0x62, 0xfa, 0xd6, 0xa4, 0x21, 0x64, 0x09, 0x39, 0x65, 0x81, 0x2c, 0x6b, 0x2a, 0x8b, 0xcb, 0x3f, 0x69, 0x2c, 0x59, 0x6e, 0xdf, 0x10, 0xf3, 0xfb, 0xbd, 0x98, 0xe3, 0x8f, 0x62, 0x9e, 0xee, 0xad, 0x64, 0xf9, 0x71, 0x20, 0xe6, 0xca, 0xe5, 0xea, 0x29, 0x85, 0xb5, 0x95, 0xc5, 0x35, 0x01, 0x9a, 0x50, 0x97, 0x38, 0xc5, 0xe1, 0x48, 0x1f, 0x59, 0x5c, 0xcf, 0xd5, 0xe6, 0xb8, 0x10, 0xd7, 0x1c, 0x43, 0x16, 0x9f, 0xd1, 0xb0, 0xdd, 0xab, 0x62, 0x7e, 0xbd, 0xcb, 0x25, 0x39, 0x78, 0x2c, 0xe6, 0xc3, 0xbe, 0x98, 0x8b, 0xe7, 0xed, 0x43, 0xec, 0x21, 0x62, 0x42, 0x96, 0x0d, 0x95, 0xc5, 0x36, 0xb9, 0xd7, 0x24, 0x29, 0x62, 0xca, 0x92, 0xf1, 0x6c, 0x6f, 0x75, 0xae, 0x4b, 0x17, 0xea, 0xe7, 0xa3, 0x90, 0xa5, 0xa3, 0x11, 0x96, 0x94, 0x64, 0xd1, 0xb8, 0x66, 0xdf, 0x47, 0x75, 0xb4, 0x3b, 0xd3, 0x1a, 0xb2, 0xc4, 0x88, 0x09, 0x59, 0x90, 0x25, 0xe8, 0xb3, 0x61, 0x21, 0x86, 0x80, 0x63, 0x8c, 0x86, 0x25, 0x2b, 0xcb, 0x8b, 0xfb, 0x79, 0x67, 0xed, 0xfa, 0x35, 0x31, 0xb7, 0x76, 0xc5, 0xdc, 0xbd, 0x29, 0xe6, 0xd1, 0x48, 0xcc, 0x93, 0x3b, 0x62, 0x7e, 0xbe, 0x45, 0x16, 0x64, 0x41, 0x96, 0xa0, 0x13, 0x74, 0x65, 0xed, 0xf7, 0x10, 0x93, 0x92, 0xb1, 0x64, 0xd1, 0x8c, 0x5d, 0x4b, 0x16, 0x5b, 0x0c, 0xc5, 0xa6, 0x92, 0xeb, 0x64, 0xaa, 0x66, 0x7f, 0xd6, 0x37, 0x26, 0x64, 0x41, 0x16, 0x64, 0xe9, 0x83, 0x2c, 0x29, 0xe2, 0xf3, 0x50, 0x5f, 0x93, 0x21, 0x59, 0xcd, 0xe3, 0xba, 0x58, 0x71, 0xca, 0xc3, 0xa5, 0x3d, 0x5a, 0x56, 0x1c, 0xfa, 0x71, 0x75, 0x64, 0x49, 0x57, 0x96, 0xd8, 0xe5, 0xd4, 0xf9, 0xb2, 0x62, 0x8d, 0x17, 0x56, 0x84, 0x14, 0xc6, 0x55, 0x96, 0xb6, 0x8b, 0x93, 0xda, 0x1c, 0x97, 0xfd, 0xab, 0x69, 0x5d, 0xb3, 0xc6, 0x0a,
		0xcf, 0x36, 0xbf, 0xa7, 0xb5, 0x68, 0xcd, 0xb5, 0x7c, 0x35, 0x62, 0xda, 0x98, 0x57, 0x21, 0xf5, 0x65, 0x19, 0x33, 0xf0, 0x2a, 0x24, 0x64, 0x01, 0x64, 0xe9, 0xa3, 0x2c, 0x29, 0xbf, 0x4d, 0x06, 0x90, 0xa5, 0xd7, 0xb2, 0xf0, 0x32, 0x3d, 0xd8, 0xb8, 0xd7, 0xb7, 0x22, 0x0a,
		0x20, 0x0b, 0x00, 0xb2, 0x00, 0x20, 0x0b, 0x00, 0xb2, 0x00, 0x00, 0xb2, 0x00, 0x20, 0x0b, 0x00, 0xb2, 0x00, 0x20, 0x0b, 0x40, 0xcf, 0x65, 0x41, 0x18, 0x80, 0x72, 0x51, 0x16, 0xb2, 0xcc, 0x3f, 0x83, 0xe2, 0x97, 0x00, 0x70, 0x46, 0x94, 0x41, 0x26, 0xcb, 0x56, 0x06, 0x05, 0x02, 0x50, 0x29, 0xca, 0xb9, 0x25, 0x0b, 0x63, 0xb6, 0xa8, 0x61, 0x00, 0x2a, 0x6b, 0x94, 0x4c, 0x94, 0xc1, 0x7f, 0xf2, 0x13, 0x16, 0x2b, 0x13, 0x85, 0x18, 0x21, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}
