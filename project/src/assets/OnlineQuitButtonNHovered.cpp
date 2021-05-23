/****************************************************************************************/
/* OnlineQuitButtonNHovered.cpp                                                         */
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

#include "assets/OnlineQuitButtonNHovered.h"

#include <vector>

std::pair<std::string, std::string> Minesweeper::get_raw_online_quit_button_n_hovered()
{
	std::pair<std::string, std::string> result = std::make_pair("OnlineQuitButtonNHovered", "");

	std::vector<short> raw_data {

		0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a,
		0x1a, 0x0a,
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x00, 0x2b, 0x08, 0x06, 0x00, 0x00, 0x00, 0x14, 0x8f, 0x38, 0x35, 0x00, 0x00, 0x01, 0x6e, 0x69, 0x43, 0x43, 0x50, 0x69, 0x63, 0x63, 0x00, 0x00, 0x28, 0x91, 0x75, 0x91, 0xbd, 0x4b, 0x42, 0x51, 0x18, 0xc6, 0x7f, 0x6a, 0x66, 0x94, 0xe1, 0x50, 0x43, 0x44, 0x83, 0x83, 0x45, 0x83, 0x42, 0x14, 0x45, 0x63, 0x18, 0xe4, 0x62, 0x0d, 0x6a, 0x90, 0xd5, 0xa2, 0xd7, 0xaf, 0x40, 0xed, 0x72, 0xaf, 0x12, 0xd2, 0x1a, 0xb4, 0x34, 0x08, 0x0d, 0x51, 0x4b, 0x5f, 0x43, 0xff, 0x41, 0xad, 0x41, 0x6b, 0x41, 0x10, 0x14, 0x41, 0x44, 0x4b, 0xff, 0x40, 0x5f, 0x4b, 0xc8, 0xed, 0x3d, 0x29, 0x28, 0x61, 0xe7, 0x72, 0xee, 0xfb, 0xe3, 0x39, 0xe7, 0x79, 0x39, 0xe7, 0x39, 0x60, 0x0f, 0xe7, 0xb5, 0x82, 0xd9, 0x31, 0x06, 0x85, 0x62, 0xc9, 0x88, 0x84, 0x82, 0xde, 0xa5, 0xf8, 0xb2, 0xd7, 0xf5, 0x8a, 0x93, 0x4e, 0x3c, 0xb8, 0x98, 0x4c, 0x68, 0xa6, 0x3e, 0x1f, 0x9d, 0x8b, 0xf1, 0xef, 0xf8, 0xba, 0xc7, 0xa6, 0xea, 0x5d, 0x40, 0xf5, 0xfa, 0x7f, 0x5f, 0xdb, 0xd1, 0x93, 0x4a, 0x9b, 0x1a, 0xd8, 0xba, 0x84, 0xa7, 0x34, 0xdd, 0x28, 0x09, 0xcf, 0x08, 0x87, 0x37, 0x4a, 0xba, 0xe2, 0x1d, 0xe1, 0x7e, 0x2d, 0x97, 0x48, 0x09, 0x1f, 0x09, 0xfb, 0x0d, 0x39, 0xa0, 0xf0, 0xb5, 0xd2, 0x93, 0x75, 0x7e, 0x51, 0x9c, 0xad, 0xf3, 0x87, 0x62, 0x23, 0x16, 0x99, 0x05, 0xbb, 0xea, 0xe9, 0xcd, 0xb6, 0x70, 0xb2, 0x85, 0xb5, 0x9c, 0x51, 0x10, 0x1e, 0x15, 0xf6, 0x15, 0xf2, 0x65, 0xad, 0x71, 0x1e, 0x75, 0x13, 0x77, 0xba, 0xb8, 0x18, 0x95, 0x3a, 0x28, 0x73, 0x08, 0x93, 0x08, 0x21, 0x82, 0x78, 0x49, 0x52, 0x66, 0x8d, 0x3c, 0x25, 0x02, 0x52, 0x8b, 0x92, 0x59, 0x7b, 0xdf, 0xd8, 0xaf, 0x6f, 0x81, 0x75, 0xf1, 0x68, 0xf2, 0xd7, 0xa9, 0x60, 0x88, 0x23, 0x4b, 0x4e, 0xbc, 0x7e, 0x51, 0xcb, 0xd2, 0x35, 0x2d, 0x35, 0x23, 0x7a, 0x5a, 0xbe, 0x3c, 0x15, 0x95, 0xfb, 0xdf, 0x3c, 0xcd, 0xcc, 0xc4, 0x78, 0xbd, 0xbb, 0x3b, 0x08, 0xce, 0x67, 0xcb, 0x7a, 0x1f, 0x06, 0xd7, 0x2e, 0xd4, 0xaa, 0x96, 0xf5, 0x7d, 0x6c, 0x59, 0xb5, 0x13, 0x70, 0x3c, 0xc1, 0x65, 0xb1, 0xe9, 0x5f, 0x97, 0x9c, 0xa6, 0x3f, 0x45, 0xaf, 0x36, 0x35, 0xdf, 0x21, 0x78, 0xb6, 0xe0, 0xfc, 0xaa, 0xa9, 0x25, 0xf7, 0xe0, 0x62, 0x1b, 0x06, 0x1e, 0xf5, 0x84, 0x91, 0xf8, 0x95, 0x1c, 0x32, 0xed, 0x99, 0x0c, 0xbc, 0x9d, 0x41, 0x6f, 0x1c, 0xfa, 0x6e, 0xa1, 0x7b, 0xa5, 0x9e, 0x55, 0x63, 0x9d, 0xd3, 0x07, 0x88, 0x6d, 0xca, 0x13, 0xdd, 0xc0, 0xfe, 0x01, 0x8c, 0xc8, 0x7e, 0xcf, 0xea, 0x0f, 0xe0, 0xc5, 0x67, 0xfc, 0x32, 0x6e, 0xf0, 0xdb, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0f, 0x61, 0x00, 0x00, 0x0f, 0x61, 0x01, 0xa8, 0x3f, 0xa7, 0x69, 0x00, 0x00, 0x01, 0xf9, 0x49, 0x44, 0x41, 0x54, 0x78, 0xda, 0xed, 0xdd, 0x4f, 0x6e, 0x82, 0x40, 0x18, 0x87, 0xe1, 0xb9, 0x04, 0x17, 0xf0, 0x20, 0x9c, 0x88, 0xb0, 0x90, 0x43, 0xd4, 0x9d, 0x47, 0x20, 0xe1, 0x42, 0x4d, 0x0c, 0x0b, 0x12, 0x8e, 0x61, 0x5c, 0x10, 0x12, 0x68, 0x87, 0x74, 0x1a, 0x95, 0x51, 0x11, 0xe7, 0x0f, 0x03, 0xef, 0x24, 0xbf, 0xb8, 0xa8, 0x8d, 0x3a, 0x3c, 0x1d, 0xe4, 0x9b, 0xaf, 0x41, 0x74, 0x5d, 0x27, 0x9a, 0xa6, 0x11, 0xbf, 0xa3, 0x27, 0xc4, 0x75, 0xa4, 0xbf, 0xf3, 0xf9, 0x2c, 0xe4, 0xe3, 0x00, 0x11, 0x8c, 0xc4, 0x67, 0x24, 0x46, 0x99, 0x1b, 0x84, 0xc7, 0xe3, 0x91, 0x10, 0x67, 0xd1, 0xc0, 0x04, 0x22, 0x59, 0x0c, 0x48, 0x30, 0x12, 0x30, 0x12, 0xb2, 0x0c, 0x8c, 0xfd, 0x17, 0x7f, 0x00, 0x64, 0x41, 0x18, 0x01, 0x49, 0x9c, 0x60, 0xbc, 0xbf, 0x52, 0x1a, 0x41, 0xfc, 0x16, 0x80, 0x24, 0x76, 0x31, 0xbe, 0xaa, 0x29, 0x29, 0x80, 0x03, 0x46, 0x40, 0x82, 0xd1, 0x24, 0xc6, 0xa9, 0x85, 0xcd, 0x11, 0x42, 0x35, 0xae, 0x50, 0x72, 0x70, 0xc0, 0x38, 0x0b, 0xe3, 0x9c, 0x4a, 0xfb, 0x0d, 0xc8, 0x15, 0x41, 0xdc, 0xef, 0xf7, 0x2f, 0x3f, 0xfb, 0xa7, 0xf3, 0x7b, 0x38, 0x1c, 0xb4, 0xaf, 0x93, 0xa6, 0x29, 0x18, 0xe7, 0x6e, 0xfd, 0xac, 0xed, 0x34, 0x3d, 0x05, 0xa2, 0xc2, 0x64, 0x6b, 0x6e, 0x43, 0x06, 0xe9, 0x15, 0xe3, 0x3f, 0xc8, 0x2b, 0x88, 0xa1, 0xd6, 0x39, 0xdf, 0xfd, 0xdc, 0x49, 0x92, 0x80, 0xd1, 0x34, 0x46, 0x13, 0x9b, 0xe3, 0x0a,
		0x61, 0xa8, 0x7b, 0xe3, 0xf7, 0xef, 0xbd, 0x2c, 0xcb, 0x5e, 0x37, 0x8a, 0xa2, 0x98, 0xb4, 0x5a, 0x6a, 0xe7, 0xe8, 0x6f, 0xe4, 0x79, 0x3e, 0x7a, 0xad, 0xaa, 0xaa, 0xfa, 0x35, 0xf4, 0x15, 0x7c, 0x84, 0xd1, 0x76, 0x07, 0x47, 0x88, 0x93, 0xa8, 0x03, 0xa3, 0x72, 0x3a, 0x9d, 0x86, 0x9f, 0x3f, 0x03, 0x99, 0x65, 0xd9, 0x5b, 0x73, 0xa4, 0xc3, 0xb8, 0x92, 0xb3, 0x0b, 0x18, 0xc1, 0x08, 0xc6, 0x4d, 0x62, 0x54, 0x43, 0x87, 0x51, 0x3d, 0xb7, 0xae, 0x6b, 0xed, 0x69, 0xfa, 0xd1, 0xd8, 0xed, 0x76, 0xdb, 0xc3, 0xe8, 0xaa, 0xd9, 0x32, 0x74, 0x8c, 0x12, 0x98, 0x0d, 0x8c, 0xac, 0x8c, 0x60, 0x04, 0xe3, 0xd2, 0x30, 0xba, 0x6e, 0x45, 0x07, 0x23, 0x57, 0xd3, 0x60, 0x34, 0x80, 0x31, 0x8a, 0x22, 0xa7, 0x18, 0x37, 0x57, 0x67, 0x04, 0xa3, 0x9d, 0x0b, 0x18, 0xdd, 0x73, 0xc1, 0xc8, 0x77, 0x46, 0xa3, 0x18, 0xbb, 0xae, 0xd3, 0x16, 0xbd, 0xc1, 0x08, 0x46, 0x30, 0x82, 0x71, 0x1b, 0x18, 0x75, 0xdb, 0x81, 0xaa, 0xf6, 0xf7, 0xa8, 0xe8, 0xfd, 0x6c, 0x80, 0xf1, 0x8d, 0x5f, 0x8e, 0xe3, 0x78, 0xf3, 0x45, 0x6f, 0x1f, 0xdf, 0xa3, 0x69, 0x94, 0x60, 0x07, 0xc6, 0x48, 0x0b, 0x19, 0x18, 0x2d, 0x76, 0xed, 0xd8, 0x58, 0x1d, 0xd7, 0xde, 0xd3, 0x28, 0x5b, 0xc8, 0xe6, 0xe2, 0xa5, 0xb9, 0x16, 0x8c, 0x24, 0x94, 0xe6, 0x5a, 0x09, 0xd2, 0x14, 0x4a, 0x0e, 0x0c, 0x18, 0x8d, 0x74, 0x7a, 0x9b, 0x00, 0xc9, 0x81, 0x01, 0xa3, 0xb3, 0xff, 0x0e, 0x04, 0x21, 0xb1, 0x8e, 0x71, 0x2e, 0x4a, 0x0e, 0x04, 0xb1, 0x86, 0xf1, 0x15, 0x4e, 0x26, 0x9e, 0x78, 0xc3, 0x48, 0x08, 0x18, 0x09, 0x18, 0x09, 0x01, 0x23, 0x59, 0x1f, 0x46, 0x40, 0x12, 0xef, 0x8d, 0x26, 0xc3, 0xfd, 0x37, 0xb8, 0xfd, 0x03, 0x59, 0xc0, 0xfd, 0x60, 0x44, 0xdb, 0xb6, 0x43, 0x98, 0x10, 0xe2, 0x2b, 0x97, 0xcb, 0x45, 0xc8, 0x0c, 0x2b, 0x23, 0x18, 0x89, 0xcf, 0x15, 0x51, 0x42, 0x94, 0x8f, 0x3f, 0x2a, 0xd5, 0x2c, 0xeb, 0x10, 0xd3, 0xf2, 0xec, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}
