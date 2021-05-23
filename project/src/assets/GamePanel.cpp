/****************************************************************************************/
/* GamePanel.cpp                                                                        */
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

#include "assets/GamePanel.h"

#include <vector>

std::pair<std::string, std::string> Minesweeper::get_raw_game_panel()
{
	std::pair<std::string, std::string> result = std::make_pair("GamePanel", "");

	std::vector<short> raw_data {

		0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a,
		0x1a, 0x0a,
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x03, 0x20, 0x00, 0x00, 0x02, 0x58, 0x08, 0x02, 0x00, 0x00, 0x00, 0x15, 0x14, 0x15, 0x27, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 0x42, 0x01, 0xd9, 0xc9, 0x2c, 0x7f, 0x00, 0x00, 0x00, 0x20, 0x63, 0x48, 0x52, 0x4d, 0x00, 0x00, 0x7a, 0x26, 0x00, 0x00, 0x80, 0x84, 0x00, 0x00, 0xfa, 0x00, 0x00, 0x00, 0x80, 0xe8, 0x00, 0x00, 0x75, 0x30, 0x00, 0x00, 0xea, 0x60, 0x00, 0x00, 0x3a, 0x98, 0x00, 0x00, 0x17, 0x70, 0x9c, 0xba, 0x51, 0x3c, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x13, 0x00, 0x00, 0x0b, 0x13, 0x01, 0x00, 0x9a, 0x9c, 0x18, 0x00, 0x00, 0x08, 0xfd, 0x49, 0x44, 0x41, 0x54, 0x78, 0xda, 0xed, 0xdb, 0x31, 0x0e, 0x80, 0x20, 0x0c, 0x40, 0x51, 0x35, 0xdc, 0xab, 0x57, 0xa7, 0x37, 0x73, 0x37, 0xd1, 0x88, 0x30, 0xa8, 0xbc, 0x37, 0xc3, 0xd2, 0xe9, 0xa7, 0x81, 0xb5, 0xd6, 0xba, 0x00, 0x00, 0x30, 0xce, 0x66, 0x04, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x80, 0x17, 0x28, 0x4d, 0xa7, 0x23, 0xc2, 0xc8, 0x00, 0x80, 0x09, 0x65, 0xe6, 0xfd, 0xc3, 0x36, 0x58, 0x00, 0x00, 0x83, 0x09, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0xa6, 0x52, 0x7a, 0x2e, 0x37, 0xbd, 0xf6, 0x02, 0x00, 0xf8, 0x90, 0x9e, 0xbf, 0x7d, 0x36, 0x58, 0x00, 0x00, 0x83, 0x09, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0xc0, 0x1f, 0x95, 0x9e, 0xcb, 0x11, 0x61, 0x82, 0x00, 0x00, 0x07, 0x36, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x9e, 0x6b, 0x7b, 0xe4, 0x9e, 0x99, 0x46, 0x06, 0x00, 0x70, 0xcd, 0x06, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x46, 0x00, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x19, 0x01, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x81, 0x05, 0x00, 0x20, 0xb0, 0x00, 0x00, 0x04, 0x16, 0x00, 0x00, 0x02, 0x0b, 0x00, 0x40, 0x60, 0x01, 0x00, 0x08, 0x2c, 0x00, 0x00, 0x04, 0x16, 0x00, 0x80, 0xc0, 0x02, 0x00, 0x10, 0x58, 0x00, 0x00, 0x9c, 0xdb, 0x01, 0x39, 0x24, 0x0f, 0xf8, 0x06, 0x7f, 0x9f, 0xbd, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}
