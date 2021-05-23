/****************************************************************************************/
/* BombSplashScreen.cpp                                                                 */
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

#include "assets/BombSplashScreen.h"

#include <vector>

std::pair<std::string, std::string> Minesweeper::get_raw_bomb_splash_screen()
{
	std::pair<std::string, std::string> result = std::make_pair("BombSplashScreen", "");

	std::vector<short> raw_data {

		0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a,
		0x1a, 0x0a,
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x08, 0x06, 0x00, 0x00, 0x00, 0xf4, 0x78, 0xd4, 0xfa, 0x00, 0x00, 0x08, 0xdf, 0x49, 0x44, 0x41, 0x54, 0x78, 0xda, 0xed, 0xdd, 0xc1, 0x71, 0xab, 0x30, 0x14, 0x40, 0x51, 0xf4, 0x71, 0x11, 0x34, 0x91, 0x5a, 0xdc, 0x46, 0xb4, 0x52, 0x2d, 0x5a, 0x91, 0x36, 0x5c, 0x4b, 0x9a, 0xa0, 0x09, 0xac, 0xdf, 0x40, 0x66, 0x32, 0x20, 0x3b, 0xb2, 0xac, 0x73, 0xf6, 0x18, 0xfc, 0x70, 0xa2, 0x8b, 0x36, 0x84, 0x09, 0xc6, 0x56, 0x8c, 0x60, 0x68, 0xc1, 0x08, 0xce, 0xdb, 0xe3, 0x52, 0xf5, 0xf7, 0x33, 0xaf, 0x9b, 0xf9, 0x37, 0xf4, 0xcf, 0x08, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x80, 0xdf, 0x5c, 0x8c, 0x80, 0x4a, 0xc5, 0x08, 0xf0, 0xfb, 0x6d, 0x26, 0xb8, 0x85, 0xd8, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x9e, 0xc6, 0xbb, 0xa4, 0xfb, 0x57, 0x8c, 0x00, 0x38, 0x63, 0x8f, 0x4b, 0xd7, 0xd7, 0x3f, 0xaf, 0x9b, 0x35, 0xcc, 0x0e, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x10, 0x00, 0x46, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0xc0, 0x33, 0x79, 0x97, 0x72, 0x7b, 0xc5, 0x08, 0x80, 0x33, 0xf6, 0xb8, 0xb4, 0x7d, 0x82, 0x8c, 0xd7, 0xaa, 0xe3, 0xef, 0xeb, 0xad, 0xe9, 0xf5, 0xcf, 0xeb, 0x36, 0xf4, 0x1a, 0x68, 0x07, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0xf8, 0x55, 0x30, 0x82, 0x6a, 0xc5, 0x08, 0x80, 0x33, 0xf6, 0xb8, 0xb4, 0x7d, 0x02, 0x8c, 0xd7, 0xae, 0xe7, 0x77, 0x5f, 0x6f, 0x4d, 0xcf, 0x3f, 0xaf, 0x5b, 0xd7, 0x6b, 0xa8, 0x1d, 0x00, 0x00, 0x18, 0x90, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0xc0, 0x51, 0xc1, 0x08, 0xa6, 0x62, 0x04, 0xc0, 0x19, 0x7b, 0x5c, 0xda, 0x3e, 0xc1, 0xc5, 0x6b, 0xdb, 0x01, 0x7c, 0x7c, 0xd5, 0x1d, 0xff, 0xfd, 0xd9, 0xf4, 0xf2, 0xef, 0xeb, 0xad, 0xe9, 0xf9, 0xe7, 0x75, 0x6b, 0xba, 0x06, 0xdb, 0x01, 0x00, 0x80, 0x01, 0x09, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x1c, 0x15, 0xde, 0xe0, 0x3b, 0x14, 0xb7, 0x11, 0xc6, 0xb4, 0xc7, 0xa5, 0xef, 0x27, 0xb0, 0x78, 0x6d, 0x7b, 0x01, 0x1f, 0x5f, 0x7d, 0xff, 0x00, 0xbe, 0x3f, 0x9b, 0x9e, 0xfe, 0xbe, 0xde, 0xec, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xef, 0x2d, 0xbc, 0xc0, 0x35, 0x14, 0xb7, 0x01, 0xe8, 0xd1, 0x1e, 0x97, 0xb6, 0x4f, 0x70, 0xf1, 0xda, 0x76, 0x00, 0x1f, 0x5f, 0x75, 0xc7, 0x7f, 0x7f, 0x36, 0xbd, 0xfc, 0xfb, 0x7a, 0x6b, 0x7a, 0xfe, 0x79, 0xdd, 0x9a, 0xae, 0xc1, 0x76, 0x00, 0x00, 0x60, 0x40, 0x02, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x47, 0x85, 0x17, 0xb8, 0x86, 0xe2, 0x36, 0x00, 0x23, 0xda, 0xe3, 0xd2, 0xf6, 0x09, 0x30, 0x5e, 0xbb, 0x9e, 0xdf, 0x7d, 0xbd, 0x35, 0x3d, 0xff, 0xbc, 0x6e, 0x5d, 0xaf, 0xc1, 0x76, 0x00, 0x00, 0x60, 0x40, 0x02, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x47, 0x3d, 0xe2, 0x5d, 0xc4, 0xc5, 0x18, 0x01, 0xfe, 0xde, 0x1e, 0x97, 0xb6, 0x4f, 0x90, 0xf1, 0x5a, 0x75, 0xfc, 0x7d, 0xbd, 0x35, 0xbd, 0xfe, 0x79, 0xdd, 0x86, 0x5e, 0xc3, 0xed, 0x00, 0x00, 0xc0, 0x80, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x8e, 0x0a,
		0x0f, 0xf8, 0x8c, 0x62, 0x8c, 0x00, 0xfd, 0xd9, 0xe3, 0xd2, 0xf5, 0xf5, 0xcf, 0xeb, 0x66, 0x0d, 0xb7, 0x03, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x04, 0x80, 0x11, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0xf0, 0x4c, 0xe1, 0x01, 0x9f, 0x51, 0x8c, 0x11, 0x60, 0x3c, 0x7b, 0x5c, 0xaa, 0x8e, 0x9f, 0xd7, 0xcd, 0x10, 0x1b, 0xae, 0xe1, 0x76, 0x00, 0x00, 0x60, 0x40, 0x02, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x47, 0x5d, 0xa6, 0x69, 0x2a, 0xc6, 0x00, 0x00, 0xdd, 0xa9, 0x5a, 0xbf, 0xed, 0x00, 0x00, 0xc0, 0x80, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x8e, 0x0a,
		0x53, 0xe5, 0xfb, 0x84, 0x01, 0x00, 0x3b, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0c, 0xea, 0xd2, 0xfb, 0x17, 0x48, 0x29, 0x55, 0x1d, 0x9f, 0x73, 0xf6, 0x2b, 0x00, 0xc0, 0x0e, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x9c, 0x11, 0xa6, 0x69, 0x2a, 0x23, 0x0f, 0x20, 0xa5, 0x54, 0x75, 0x7c, 0xce, 0xd9, 0xaf, 0x08, 0x00, 0x3b, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0xc0, 0xfb, 0xb9, 0x4c, 0xd3, 0x14, 0x2a, 0x3f, 0xa3, 0x18, 0x23, 0x00, 0xfc, 0xb9, 0xaa, 0xf5, 0xdb, 0x0e, 0x00, 0x00, 0x0c, 0x48, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0xe0, 0xa8, 0xf0, 0x80, 0xcf, 0x28, 0x23, 0x0f, 0x30, 0xa5, 0x54, 0x75, 0x7c, 0xce, 0xd9, 0xaf, 0x10, 0x80, 0x3f, 0x5f, 0xc3, 0xed, 0x00, 0x00, 0xc0, 0x80, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x8e, 0xba, 0x18, 0x41, 0x5b, 0x29, 0xa5, 0xaa, 0xe3, 0x73, 0xce, 0x86, 0x08, 0x80, 0x1d, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0xe0, 0xf1, 0xc2, 0x0b, 0x5c, 0x43, 0x19, 0xf9, 0x06, 0xa4, 0x94, 0x9a, 0x9e, 0x3f, 0xe7, 0xec, 0xaf, 0x00, 0x60, 0xc0, 0x35, 0xd8, 0x0e, 0x00, 0x00, 0x0c, 0x48, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0xe0, 0xa8, 0xf0, 0x02, 0xd7, 0x50, 0xdc, 0x86, 0xf3, 0x52, 0x4a, 0x4d, 0xcf, 0x9f, 0x73, 0x76, 0x13, 0x00, 0x3a, 0x5c, 0x83, 0xed, 0x00, 0x00, 0xc0, 0x80, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x8e, 0x0a,
		0x6f, 0xf0, 0x1d, 0x8a, 0xdb, 0x78, 0x5e, 0x4a, 0xa9, 0xe9, 0xf9, 0x73, 0xce, 0x6e, 0x02, 0x60, 0x0d, 0xb5, 0x03, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0xbc, 0xa2, 0x60, 0x04, 0x53, 0x31, 0x82, 0xf3, 0x52, 0x4a, 0x4d, 0xcf, 0x9f, 0x73, 0x76, 0x13, 0x00, 0x6b, 0xa0, 0x1d, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0xe0, 0x19, 0x82, 0x11, 0x54, 0x2b, 0x46, 0xd0, 0x4e, 0x4a, 0xa9, 0xe9, 0xf9, 0x73, 0xce, 0x6e, 0x02, 0x58, 0xc3, 0xec, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xef, 0xc9, 0xbb, 0x94, 0xdb, 0x2b, 0x46, 0xd0, 0xaf, 0x94, 0x52, 0xd7, 0xd7, 0x9f, 0x73, 0x76, 0x13, 0xb1, 0x06, 0xd9, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0xf8, 0x99, 0x77, 0x31, 0xf7, 0xaf, 0x18, 0x01, 0x60, 0x0d, 0xc1, 0x0e, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0xf0, 0x70, 0xde, 0xe5, 0x4c, 0xad, 0x62, 0x04, 0xe0, 0x7f, 0x38, 0x76, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x80, 0x37, 0xe4, 0x5d, 0xd2, 0x8c, 0xae, 0x18, 0x81, 0xff, 0x81, 0x60, 0x07, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0xe0, 0x07, 0xff, 0x01, 0x30, 0x6e, 0x79, 0x6d, 0xb2, 0x2d, 0xeb, 0x8d, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}
