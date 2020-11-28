/****************************************************************************************/
/* BombSpriteSheet.cpp                                                                  */
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

#include "assets/BombSpriteSheet.h"

#include <vector>

std::pair<std::string, std::string> Minesweeper::get_raw_bomb_sprite_sheet()
{
	std::pair<std::string, std::string> result = std::make_pair("BombSpriteSheet", "");

	std::vector<short> raw_data {
		
		0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a,
		0x1a, 0x0a,
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x40, 0x08, 0x06, 0x00, 0x00, 0x00, 0x4c, 0x6c, 0x78, 0xdf, 0x00, 0x00, 0x02, 0x5f, 0x49, 0x44, 0x41, 0x54, 0x78, 0xda, 0xed, 0x9d, 0xc1, 0x71, 0xc2, 0x40, 0x0c, 0x45, 0x25, 0x42, 0x11, 0x34, 0x91, 0x5a, 0xd2, 0x46, 0x38, 0xb9, 0x16, 0x4e, 0xa4, 0x0d, 0x6a, 0xa1, 0x89, 0x34, 0xe1, 0x38, 0x87, 0x8c, 0x27, 0xc1, 0x33, 0xc6, 0xbb, 0x6b, 0x7b, 0xb3, 0x92, 0xde, 0xbb, 0x30, 0x43, 0x26, 0x0c, 0x5f, 0x46, 0xff, 0x4b, 0x60, 0x83, 0xca, 0xfe, 0x0c, 0x2b, 0xff, 0x5f, 0xc5, 0x36, 0x55, 0xf4, 0xf7, 0xe7, 0xd3, 0x20, 0x22, 0xf2, 0x72, 0xfd, 0xd4, 0x88, 0xfa, 0x4b, 0x39, 0x08, 0x40, 0x60, 0x8e, 0x0d, 0x75, 0x7a, 0xee, 0xe3, 0x7a, 0x73, 0x3a, 0xf4, 0xff, 0x83, 0x7e, 0x12, 0x00, 0x42, 0xa3, 0x0d, 0x76, 0x7c, 0x11, 0xfd, 0xf9, 0x24, 0x95, 0x67, 0xe0, 0xa1, 0x25, 0xdd, 0x53, 0x2a, 0xd4, 0x61, 0xf0, 0xf0, 0x5a, 0x26, 0x01, 0x80, 0x1d, 0xc0, 0x78, 0xe7, 0x7b, 0x99, 0x75, 0x57, 0x39, 0xff, 0xe1, 0xfc, 0x26, 0x22, 0x22, 0x5f, 0xd7, 0xdb, 0xf8, 0xf7, 0xbd, 0xde, 0x15, 0x6a, 0xf2, 0xf8, 0x97, 0xea, 0x25, 0x01, 0x80, 0x04, 0x30, 0xde, 0xf9, 0x0f, 0x0e, 0xd8, 0xcb, 0xcd, 0xb5, 0xf3, 0xcd, 0x39, 0x7f, 0x85, 0x24, 0x68, 0x75, 0xe7, 0x9b, 0x7b, 0x9e, 0x9a, 0xa2, 0x9f, 0x04, 0x80, 0xd0, 0xa8, 0xb5, 0xce, 0x4f, 0x9d, 0x81, 0x47, 0xbc, 0x38, 0xdf, 0x92, 0xf3, 0xcb, 0xeb, 0xc7, 0xcf, 0xed, 0xfd, 0xfd, 0xe1, 0xee, 0x0d, 0xea, 0xd1, 0xf4, 0xce, 0x37, 0x9d, 0x00, 0x46, 0xbd, 0x7f, 0x92, 0x41, 0xd9, 0x01, 0x00, 0x0a,
		0x12, 0xa0, 0xc9, 0x99, 0xaf, 0xa2, 0x03, 0x0e, 0x2d, 0xe9, 0x5d, 0xd4, 0x3d, 0x65, 0xa1, 0x0e, 0x09, 0xf5, 0x30, 0x95, 0xfc, 0x53, 0x52, 0x8f, 0x3b, 0x09, 0x00, 0x24, 0x80, 0xa5, 0x99, 0xaf, 0x60, 0x07, 0xc8, 0xdd, 0x7b, 0x6c, 0x3a, 0xdf, 0x76, 0x09, 0x68, 0xea, 0x73, 0x9e, 0x84, 0x1d, 0xe0, 0xe9, 0xf1, 0x27, 0x01, 0x80, 0x04, 0x88, 0xec, 0x00, 0xd6, 0xf4, 0xaf, 0x98, 0x81, 0x5d, 0xe8, 0x5f, 0xaa, 0xcb, 0x93, 0xe3, 0x4e, 0x02, 0x00, 0x3c, 0xeb, 0x06, 0xd3, 0xe7, 0xf8, 0x64, 0x38, 0xc0, 0x9c, 0x13, 0x9a, 0x4c, 0xbe, 0x82, 0x1d, 0xc8, 0xb4, 0xfe, 0xb9, 0xe3, 0x3c, 0xbd, 0x3f, 0xe1, 0xf5, 0xa0, 0x24, 0x00, 0x90, 0x00, 0x24, 0x80, 0x8f, 0xd9, 0x77, 0x4a, 0xee, 0x2c, 0x2c, 0xf1, 0xce, 0xf2, 0x25, 0x01, 0x00, 0x34, 0xba, 0x03, 0x90, 0x80, 0x24, 0x00, 0x40, 0x58, 0x8e, 0x12, 0xf7, 0x0a,
		0x2f, 0xae, 0x6c, 0x43, 0x3f, 0x09, 0x00, 0xec, 0x00, 0x03, 0x65, 0x80, 0xa8, 0x90, 0x00, 0x40, 0x03, 0x00, 0xd0, 0x00, 0x00, 0x34, 0x00, 0x00, 0x0d, 0x00, 0x40, 0x03, 0x74, 0x5d, 0x27, 0x5d, 0xd7, 0x85, 0x2d, 0x0c, 0xfa, 0x63, 0xe8, 0x27, 0x01, 0x80, 0x04, 0x00, 0xa0, 0x01, 0x00, 0x68, 0x00, 0x00, 0x1a, 0x00, 0x20, 0x0c, 0x8b, 0xe7, 0x02, 0x8d, 0xef, 0x04, 0x5c, 0x2e, 0x97, 0x90, 0x05, 0x42, 0xbf, 0x6f, 0xfd, 0x24, 0x00, 0x84, 0xe6, 0x28, 0xbf, 0x57, 0x06, 0x71, 0x45, 0x18, 0xfa, 0xc3, 0xe9, 0x27, 0x01, 0x20, 0xfc, 0x0e, 0x90, 0xe4, 0x00, 0x0e, 0x67, 0xc1, 0x2c, 0x07, 0x44, 0xbf, 0x4f, 0xfd, 0x24, 0x00, 0x84, 0x26, 0xbb, 0x01, 0x38, 0x47, 0x06, 0xfd, 0x9e, 0xf4, 0x93, 0x00, 0xc0, 0x0e, 0x50, 0x32, 0x0b, 0x8e, 0x18, 0x9c, 0x09, 0x57, 0x7d, 0x3b, 0x32, 0xfa, 0x7d, 0xe9, 0x27, 0x01, 0x80, 0x04, 0xc8, 0x71, 0x00, 0x07, 0x4e, 0xb0, 0xc9, 0xf7, 0xe3, 0xa3, 0xdf, 0x87, 0x7e, 0x12, 0x00, 0x48, 0x80, 0x20, 0x4e, 0xb0, 0xcb, 0xef, 0xe3, 0xa2, 0xdf, 0xb6, 0x7e, 0x12, 0x00, 0x48, 0x00, 0xe7, 0x4e, 0x50, 0xe5, 0x97, 0xe2, 0xd1, 0x6f, 0x53, 0x3f, 0x09, 0x00, 0x24, 0xc0, 0x96, 0x4e, 0xd0, 0x90, 0x23, 0xe8, 0xc6, 0x8f, 0x87, 0x7e, 0x87, 0xfa, 0x49, 0x00, 0x20, 0x01, 0xf6, 0x74, 0x82, 0x39, 0x47, 0xd8, 0xd1, 0x19, 0x74, 0xe7, 0x9a, 0xa1, 0xdf, 0x91, 0x7e, 0x12, 0x00, 0x48, 0x80, 0x9a, 0x4e, 0x60, 0x68, 0xe6, 0x45, 0x7f, 0x00, 0xfd, 0x24, 0x00, 0x90, 0x00, 0x46, 0x1d, 0x41, 0x1b, 0xab, 0x25, 0xfa, 0x0d, 0xea, 0x27, 0x01, 0x80, 0x04, 0x68, 0xdc, 0x19, 0xd4, 0x78, 0x8d, 0xd1, 0xdf, 0xb0, 0x7e, 0x12, 0x00, 0x42, 0xf3, 0x0d, 0x29, 0x6a, 0x3c, 0x31, 0xf9, 0x2c, 0xc3, 0x9c, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}
