/****************************************************************************************/
/* ExpertButtonNHovered.cpp                                                             */
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

#include "assets/ExpertButtonNHovered.h"

#include <vector>

std::pair<std::string, std::string> Minesweeper::get_raw_expert_button_n_hovered()
{
	std::pair<std::string, std::string> result = std::make_pair("ExpertButtonNHovered", "");

	std::vector<short> raw_data {
		
		0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a,
		0x1a, 0x0a,
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0xcb, 0x00, 0x00, 0x00, 0x35, 0x08, 0x06, 0x00, 0x00, 0x00, 0xef, 0x63, 0x1f, 0x5a, 0x00, 0x00, 0x01, 0x85, 0x69, 0x43, 0x43, 0x50, 0x49, 0x43, 0x43, 0x20, 0x70, 0x72, 0x6f, 0x66, 0x69, 0x6c, 0x65, 0x00, 0x00, 0x28, 0x91, 0x7d, 0x91, 0x3d, 0x48, 0xc3, 0x40, 0x1c, 0xc5, 0x5f, 0x5b, 0xa5, 0xa2, 0x2d, 0x0e, 0x76, 0x10, 0x91, 0x12, 0xa1, 0x3a, 0x59, 0x10, 0x15, 0x71, 0x94, 0x2a, 0x16, 0xc1, 0x42, 0x69, 0x2b, 0xb4, 0xea, 0x60, 0x72, 0xe9, 0x17, 0x34, 0x69, 0x48, 0x52, 0x5c, 0x1c, 0x05, 0xd7, 0x82, 0x83, 0x1f, 0x8b, 0x55, 0x07, 0x17, 0x67, 0x5d, 0x1d, 0x5c, 0x05, 0x41, 0xf0, 0x03, 0xc4, 0xc9, 0xd1, 0x49, 0xd1, 0x45, 0x4a, 0xfc, 0x5f, 0x52, 0x68, 0x11, 0xe3, 0xc1, 0x71, 0x3f, 0xde, 0xdd, 0x7b, 0xdc, 0xbd, 0x03, 0xbc, 0x8d, 0x0a,
		0x53, 0x8c, 0xae, 0x09, 0x40, 0x51, 0x4d, 0x3d, 0x15, 0x8f, 0x09, 0xd9, 0xdc, 0xaa, 0xe0, 0x7f, 0x45, 0x1f, 0xc2, 0x08, 0x62, 0x04, 0x61, 0x91, 0x19, 0x5a, 0x22, 0xbd, 0x98, 0x81, 0xeb, 0xf8, 0xba, 0x87, 0x87, 0xaf, 0x77, 0x51, 0x9e, 0xe5, 0x7e, 0xee, 0xcf, 0x11, 0x94, 0xf3, 0x06, 0x03, 0x3c, 0x02, 0xf1, 0x1c, 0xd3, 0x74, 0x93, 0x78, 0x83, 0x78, 0x66, 0xd3, 0xd4, 0x38, 0xef, 0x13, 0x87, 0x58, 0x49, 0x94, 0x89, 0xcf, 0x89, 0xc7, 0x75, 0xba, 0x20, 0xf1, 0x23, 0xd7, 0x25, 0x87, 0xdf, 0x38, 0x17, 0x6d, 0xf6, 0xf2, 0xcc, 0x90, 0x9e, 0x49, 0xcd, 0x13, 0x87, 0x88, 0x85, 0x62, 0x07, 0x4b, 0x1d, 0xcc, 0x4a, 0xba, 0x42, 0x3c, 0x4d, 0x1c, 0x91, 0x15, 0x95, 0xf2, 0xbd, 0x59, 0x87, 0x65, 0xce, 0x5b, 0x9c, 0x95, 0x4a, 0x8d, 0xb5, 0xee, 0xc9, 0x5f, 0x18, 0xc8, 0xab, 0x2b, 0x69, 0xae, 0xd3, 0x1c, 0x46, 0x1c, 0x4b, 0x48, 0x20, 0x09, 0x01, 0x12, 0x6a, 0x28, 0xa3, 0x02, 0x13, 0x51, 0x5a, 0x55, 0x52, 0x0c, 0xa4, 0x68, 0x3f, 0xe6, 0xe2, 0x1f, 0xb2, 0xfd, 0x49, 0x72, 0x49, 0xe4, 0x2a, 0x83, 0x91, 0x63, 0x01, 0x55, 0x28, 0x10, 0x6d, 0x3f, 0xf8, 0x1f, 0xfc, 0xee, 0xd6, 0x28, 0x4c, 0x4d, 0x3a, 0x49, 0x81, 0x18, 0xd0, 0xfd, 0x62, 0x59, 0x1f, 0xa3, 0x80, 0x7f, 0x17, 0x68, 0xd6, 0x2d, 0xeb, 0xfb, 0xd8, 0xb2, 0x9a, 0x27, 0x80, 0xef, 0x19, 0xb8, 0x52, 0xdb, 0xfe, 0x6a, 0x03, 0x98, 0xfd, 0x24, 0xbd, 0xde, 0xd6, 0x22, 0x47, 0x40, 0xff, 0x36, 0x70, 0x71, 0xdd, 0xd6, 0xa4, 0x3d, 0xe0, 0x72, 0x07, 0x18, 0x7c, 0xd2, 0x44, 0x5d, 0xb4, 0x25, 0x1f, 0x4d, 0x6f, 0xa1, 0x00, 0xbc, 0x9f, 0xd1, 0x37, 0xe5, 0x80, 0x81, 0x5b, 0xa0, 0x77, 0xcd, 0xe9, 0xad, 0xb5, 0x8f, 0xd3, 0x07, 0x20, 0x43, 0x5d, 0x2d, 0xdf, 0x00, 0x07, 0x87, 0xc0, 0x58, 0x91, 0xb2, 0xd7, 0x5d, 0xde, 0xdd, 0xd3, 0xd9, 0xdb, 0xbf, 0x67, 0x5a, 0xfd, 0xfd, 0x00, 0xae, 0xd3, 0x72, 0xbf, 0xf1, 0xa0, 0x6e, 0xb7, 0x00, 0x00, 0x00, 0x06, 0x62, 0x4b, 0x47, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf9, 0x43, 0xbb, 0x7f, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x2e, 0x23, 0x00, 0x00, 0x2e, 0x23, 0x01, 0x78, 0xa5, 0x3f, 0x76, 0x00, 0x00, 0x00, 0x07, 0x74, 0x49, 0x4d, 0x45, 0x07, 0xe4, 0x0b, 0x1e, 0x11, 0x03, 0x10, 0xad, 0x69, 0x68, 0x69, 0x00, 0x00, 0x00, 0x19, 0x74, 0x45, 0x58, 0x74, 0x43, 0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74, 0x00, 0x43, 0x72, 0x65, 0x61, 0x74, 0x65, 0x64, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x47, 0x49, 0x4d, 0x50, 0x57, 0x81, 0x0e, 0x17, 0x00, 0x00, 0x02, 0xe7, 0x49, 0x44, 0x41, 0x54, 0x78, 0xda, 0xed, 0x9c, 0x3b, 0xaa, 0xc2, 0x40, 0x14, 0x40, 0x23, 0x88, 0xc5, 0xc3, 0x25, 0x58, 0xb9, 0x14, 0x57, 0xe1, 0x22, 0xc4, 0x42, 0x0b, 0xb7, 0x20, 0x36, 0x96, 0xda, 0x09, 0x2e, 0xc1, 0x4d, 0xd8, 0x8b, 0x85, 0x20, 0xd6, 0xf6, 0xb6, 0x82, 0x79, 0x26, 0x44, 0x89, 0x12, 0x27, 0xf3, 0xcb, 0x64, 0x92, 0x1c, 0xe1, 0x20, 0x88, 0xd1, 0xc9, 0xdc, 0x7b, 0x32, 0x93, 0xf9, 0x24, 0x08, 0x82, 0xa0, 0xf5, 0xa4, 0x93, 0xbc, 0x87, 0x00, 0xf0, 0x41, 0xe4, 0x45, 0x37, 0x79, 0x8f, 0x45, 0xe9, 0x50, 0x29, 0x00, 0x3f, 0xe9, 0x26, 0xd0, 0xa2, 0x00, 0x48, 0xb6, 0x30, 0x9f, 0x1f, 0x2e, 0x97, 0x4b, 0x00, 0x78, 0x92, 0x21, 0x0c, 0xa2, 0x00, 0x48, 0x0a,
		0x83, 0x2c, 0x00, 0xc8, 0x02, 0x80, 0x2c, 0x00, 0xc8, 0x02, 0x80, 0x2c, 0x00, 0xc8, 0x02, 0x80, 0x2c, 0x00, 0x80, 0x2c, 0x00, 0xc8, 0x02, 0x50, 0x51, 0x59, 0x74, 0xd6, 0xe0, 0xcc, 0xe7, 0xf3, 0xda, 0x07, 0x60, 0x32, 0x99, 0x64, 0x9e, 0xfb, 0x78, 0x3c, 0xb6, 0xf2, 0x3b, 0x79, 0xf5, 0xaa, 0x7b, 0x9c, 0xed, 0xf3, 0xf5, 0xad, 0x9c, 0xa5, 0xc9, 0x62, 0xb2, 0x68, 0xad, 0xce, 0xc2, 0xe4, 0x25, 0x80, 0xac, 0x30, 0x2a, 0x89, 0x94, 0xae, 0x57, 0xdd, 0xe3, 0x5c, 0x88, 0x52, 0x66, 0x39, 0x91, 0xa5, 0xa6, 0xb2, 0x94, 0xb1, 0xea, 0x76, 0x34, 0x1a, 0x39, 0xcd, 0x01, 0x97, 0xe5, 0xf4, 0x4a, 0x16, 0x99, 0xd7, 0x76, 0xbb, 0x6d, 0x9c, 0x2c, 0xc7, 0xe3, 0x31, 0x3e, 0xf7, 0xd3, 0xe9, 0x24, 0x2d, 0x4b, 0x56, 0x82, 0xbc, 0x7e, 0x27, 0xaf, 0x5e, 0x4d, 0x8f, 0x53, 0x49, 0xc4, 0xaa, 0x94, 0xb3, 0xf2, 0xb2, 0x88, 0x5a, 0x9a, 0xe9, 0x74, 0x6a, 0xe5, 0x0a,
		0x64, 0xd2, 0x37, 0xd6, 0xfd, 0xbf, 0x5f, 0x49, 0x90, 0x96, 0x25, 0x2f, 0x16, 0x65, 0x26, 0xa1, 0x69, 0x5c, 0x90, 0x45, 0x41, 0x96, 0xcd, 0x66, 0x63, 0x94, 0xdc, 0xb6, 0x44, 0x31, 0xed, 0x1b, 0xdb, 0x42, 0x24, 0xcb, 0xaf, 0x78, 0xa8, 0xd6, 0xeb, 0xe1, 0x70, 0x88, 0xbf, 0x73, 0x3e, 0x9f, 0x8d, 0x8f, 0xd3, 0x8d, 0x8b, 0xeb, 0x72, 0x36, 0x5e, 0x96, 0x3a, 0x52, 0x07, 0x59, 0x64, 0x40, 0x96, 0x02, 0x65, 0x31, 0xad, 0x5c, 0xdd, 0xee, 0x9e, 0x6a, 0x73, 0xaf, 0xfb, 0x7f, 0xa2, 0x57, 0xbf, 0xdf, 0x97, 0x96, 0x45, 0x06, 0x9b, 0x49, 0x58, 0xa4, 0x64, 0x36, 0x8f, 0x43, 0x16, 0x64, 0x41, 0x16, 0x64, 0x51, 0xeb, 0xa6, 0x3c, 0x1e, 0x8f, 0xdc, 0x24, 0x74, 0x95, 0x04, 0xa6, 0xc9, 0xa3, 0xd3, 0x0d, 0x53, 0x15, 0xc6, 0x55, 0xb9, 0x45, 0x71, 0x41, 0x16, 0x4b, 0xa3, 0x61, 0xe9, 0x2b, 0x29, 0xb2, 0xa8, 0x3f, 0x3c, 0x64, 0xb1, 0x58, 0xbc, 0xbf, 0xbf, 0x5e, 0xaf, 0x9d, 0x8c, 0x86, 0x99, 0xca, 0x22, 0x5b, 0xce, 0x28, 0xe9, 0x75, 0xce, 0xaf, 0x91, 0xb2, 0xcc, 0x66, 0xb3, 0xf0, 0x76, 0xbb, 0x85, 0xf7, 0xfb, 0x3d, 0x5c, 0xad, 0x56, 0xef, 0xa0, 0x5c, 0x2e, 0x97, 0x70, 0x30, 0x18, 0x54, 0x42, 0x16, 0xdd, 0x1b, 0x7c, 0xd9, 0x7a, 0x2e, 0x43, 0x16, 0xd5, 0xb8, 0x20, 0x4b, 0x01, 0xdd, 0xb0, 0xac, 0x39, 0x8f, 0xe1, 0x70, 0x18, 0x5e, 0xaf, 0xd7, 0x38, 0x18, 0xbb, 0xdd, 0x2e, 0xdc, 0xef, 0xf7, 0x61, 0xaf, 0xd7, 0x93, 0xbe, 0xd7, 0xf9, 0x1e, 0xda, 0xd4, 0xbd, 0xd7, 0x79, 0xbd, 0xf2, 0x64, 0x51, 0x19, 0xe2, 0xd6, 0x99, 0x94, 0xf4, 0xa1, 0x1b, 0xa6, 0x1a, 0x17, 0xd9, 0x96, 0xd4, 0x56, 0xf7, 0xad, 0xb1, 0xb2, 0x7c, 0x5f, 0x51, 0x44, 0x2d, 0x91, 0x2f, 0xb2, 0x88, 0x26, 0xe9, 0xa2, 0x40, 0xda, 0x9e, 0xc1, 0x2f, 0x43, 0x16, 0x95, 0xb8, 0x20, 0x8b, 0xc3, 0x79, 0x16, 0x13, 0x59, 0x8a, 0xec, 0x4e, 0x89, 0x64, 0x71, 0xb9, 0xdc, 0xc5, 0x77, 0x59, 0x8a, 0x9c, 0x67, 0x43, 0x16, 0x0f, 0x6f, 0xf0, 0x7d, 0x94, 0xc5, 0xa7, 0x81, 0x09, 0xd3, 0xb8, 0xd8, 0xbc, 0xf8, 0x21, 0x0b, 0xb2, 0x20, 0x4b, 0xd3, 0x87, 0x8e, 0xb3, 0x46, 0x35, 0x7c, 0x9c, 0x94, 0x54, 0xbd, 0x67, 0xa9, 0xe3, 0xaa, 0xe3, 0x22, 0xe3, 0x92, 0x55, 0xbf, 0xac, 0x3a, 0x46, 0x16, 0x64, 0x41, 0x96, 0xf2, 0x37, 0xfe, 0xf8, 0xb0, 0x60, 0x53, 0x45, 0x96, 0x2a, 0x6d, 0xfe, 0xaa, 0x0a,
		0x95, 0xdf, 0xfc, 0x65, 0x2b, 0x09, 0x6d, 0x2c, 0x05, 0x2f, 0x7a, 0x89, 0xbe, 0x0b, 0x59, 0x5c, 0x6f, 0xd7, 0x75, 0xbd, 0x75, 0xc2, 0xa7, 0x1d, 0xb6, 0x5e, 0x3f, 0xb0, 0xc2, 0x64, 0x93, 0x91, 0x8a, 0x2c, 0xba, 0x9b, 0xbf, 0x6c, 0x04, 0xab, 0x6a, 0x0f, 0xac, 0x70, 0xb9, 0x29, 0x2f, 0xdd, 0x42, 0x34, 0xe6, 0x81, 0x15, 0x65, 0x3c, 0xaa, 0x46, 0xe7, 0x1e, 0x02, 0x00, 0x59, 0x90, 0x05, 0x90, 0x45, 0xad, 0xab, 0x87, 0x2c, 0x80, 0x2c, 0xc8, 0x02, 0xc8, 0x62, 0x4f, 0x18, 0x44, 0x01, 0x64, 0x01, 0x40, 0x16, 0x00, 0x64, 0x01, 0x40, 0x16, 0x00, 0x64, 0x01, 0x00, 0x64, 0x01, 0x40, 0x16, 0x00, 0x64, 0x01, 0xf0, 0x4c, 0x16, 0x84, 0x01, 0x10, 0x4e, 0x76, 0x07, 0x2d, 0x36, 0x0d, 0x01, 0xe4, 0x12, 0x79, 0x12, 0xb4, 0x13, 0xa8, 0x10, 0x80, 0x6c, 0xfe, 0x12, 0x62, 0x63, 0xda, 0xb4, 0x30, 0x00, 0x3f, 0x5b, 0x94, 0x48, 0x94, 0xd6, 0x3f, 0x24, 0xb7, 0xa4, 0x99, 0xa1, 0x57, 0x6c, 0x65, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}
