/****************************************************************************************/
/* BandageFace.cpp                                                                      */
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

#include "assets/BandageFace.h"

#include <vector>

std::pair<std::string, std::string> Minesweeper::get_raw_bandage_face()
{
	std::pair<std::string, std::string> result = std::make_pair("BandageFace", "");

	std::vector<short> raw_data {

		0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a,
		0x1a, 0x0a,
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x34, 0x08, 0x06, 0x00, 0x00, 0x00, 0xc5, 0x78, 0x1b, 0xeb, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 0x42, 0x01, 0xd9, 0xc9, 0x2c, 0x7f, 0x00, 0x00, 0x00, 0x20, 0x63, 0x48, 0x52, 0x4d, 0x00, 0x00, 0x7a, 0x26, 0x00, 0x00, 0x80, 0x84, 0x00, 0x00, 0xfa, 0x00, 0x00, 0x00, 0x80, 0xe8, 0x00, 0x00, 0x75, 0x30, 0x00, 0x00, 0xea, 0x60, 0x00, 0x00, 0x3a, 0x98, 0x00, 0x00, 0x17, 0x70, 0x9c, 0xba, 0x51, 0x3c, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x13, 0x00, 0x00, 0x0b, 0x13, 0x01, 0x00, 0x9a, 0x9c, 0x18, 0x00, 0x00, 0x02, 0x5a, 0x49, 0x44, 0x41, 0x54, 0x68, 0xde, 0xd5, 0x9a, 0x3d, 0x4b, 0xc3, 0x40, 0x18, 0xc7, 0x53, 0xdb, 0xc5, 0x5a, 0xb0, 0x55, 0x24, 0x8a, 0x14, 0x91, 0xe2, 0x62, 0x66, 0x41, 0x41, 0x04, 0x15, 0x71, 0x71, 0xeb, 0x92, 0xc9, 0xd1, 0xd9, 0x2f, 0x20, 0x08, 0x52, 0x07, 0xc1, 0x0f, 0xd0, 0x41, 0x70, 0x55, 0xdc, 0x3b, 0x14, 0x04, 0x07, 0x27, 0x2b, 0x75, 0xe8, 0x20, 0x52, 0x32, 0x8a, 0xfa, 0x05, 0x2a, 0xb4, 0x7a, 0x12, 0x41, 0x49, 0xd3, 0xcb, 0xe5, 0x5e, 0x9e, 0x7b, 0x3b, 0x78, 0x96, 0x34, 0xc9, 0xdd, 0xaf, 0xff, 0xe4, 0x7f, 0x97, 0xe7, 0x39, 0x67, 0xf7, 0x70, 0xcf, 0x81, 0x8e, 0xf2, 0x7c, 0xae, 0xef, 0x38, 0x0e, 0x22, 0x45, 0x69, 0x72, 0x0c, 0xc9, 0xe8, 0x1b, 0xe4, 0x26, 0xdb, 0x1b, 0x13, 0x41, 0x1a, 0x40, 0x5a, 0xac, 0xad, 0x8c, 0xbf, 0x69, 0x07, 0x22, 0x0d, 0xb0, 0xd3, 0xe9, 0xa0, 0xa4, 0xd6, 0x6e, 0xb7, 0x89, 0x70, 0xca, 0x81, 0x70, 0x83, 0x10, 0x6d, 0x50, 0x60, 0xda, 0x41, 0xd2, 0xc0, 0x32, 0x19, 0x36, 0x30, 0x6e, 0x18, 0xd9, 0x8d, 0x57, 0x2d, 0x66, 0x18, 0xd5, 0x8d, 0x15, 0x4a, 0x18, 0xa6, 0xd5, 0x6a, 0xa1, 0x66, 0xb3, 0x89, 0xea, 0xf5, 0xfa, 0x50, 0x84, 0xc7, 0x82, 0x20, 0x50, 0x0e, 0xc5, 0xed, 0x62, 0x32, 0xc3, 0xf3, 0x3c, 0x6e, 0x28, 0xe3, 0x60, 0x68, 0x83, 0x09, 0x48, 0xe7, 0x3b, 0x53, 0xab, 0xd5, 0x84, 0xa0, 0x46, 0x0e, 0x84, 0x36, 0xa9, 0x0b, 0x06, 0xc2, 0xd2, 0x13, 0xd5, 0x31, 0xbd, 0x25, 0xa9, 0x64, 0xcc, 0xa3, 0x06, 0xe5, 0x7c, 0x56, 0xaa, 0x43, 0x52, 0xc9, 0x48, 0x57, 0xab, 0x56, 0xab, 0xdc, 0x2a, 0x59, 0x63, 0xd3, 0xd1, 0x28, 0x16, 0x8b, 0x89, 0x2a, 0x8d, 0x7c, 0xcf, 0xc8, 0x74, 0xa5, 0x30, 0x06, 0x1f, 0x5e, 0x62, 0x88, 0x40, 0x86, 0x0c, 0xff, 0x40, 0x2a, 0x60, 0x48, 0x20, 0x24, 0xa8, 0xf8, 0xef, 0x2f, 0x0f, 0x4b, 0xc4, 0x79, 0x09, 0x1c, 0x88, 0x17, 0x84, 0x56, 0x29, 0xd2, 0x75, 0xe0, 0x40, 0xd1, 0x8e, 0xdd, 0x99, 0x1c, 0x17, 0x4c, 0x1a, 0x58, 0x2a, 0xd0, 0x9c, 0x9b, 0x1b, 0x88, 0x02, 0x41, 0xa8, 0x02, 0x01, 0x7f, 0x76, 0xec, 0x7e, 0x3b, 0x34, 0x39, 0x00, 0xd9, 0xaa, 0xdc, 0x37, 0x16, 0x85, 0xfe, 0x94, 0xc7, 0xdb, 0x4a, 0xf4, 0x5a, 0x3e, 0x75, 0x7c, 0xdf, 0x07, 0x53, 0x86, 0xe7, 0x7d, 0x21, 0xdc, 0x83, 0x1d, 0x28, 0x69, 0x00, 0x37, 0x97, 0x65, 0x66, 0x98, 0xab, 0x8b, 0xb2, 0x5e, 0x20, 0x92, 0x03, 0x7d, 0xbe, 0x2e, 0x33, 0x03, 0x85, 0xd7, 0x68, 0x01, 0xea, 0xf5, 0x7a, 0xa9, 0x93, 0x1b, 0xe4, 0x23, 0xc7, 0xfa, 0x3e, 0x32, 0x01, 0x65, 0xb3, 0x99, 0x91, 0x81, 0x43, 0x3b, 0x9b, 0xe8, 0xfd, 0xa8, 0x81, 0x86, 0xd3, 0xb5, 0x79, 0x2d, 0x96, 0xcc, 0x05, 0x84, 0xb3, 0x6d, 0xdd, 0x73, 0x0b, 0x97, 0x6d, 0x4f, 0x4f, 0x65, 0xbf, 0x70, 0x2a, 0xd9, 0x02, 0x13, 0x55, 0xe7, 0xb7, 0xea, 0x81, 0x5b, 0xfa, 0xd8, 0x04, 0x13, 0x05, 0xc2, 0xae, 0xe5, 0x6c, 0x83, 0x21, 0x02, 0xd9, 0x08, 0x83, 0x05, 0x8a, 0x17, 0xac, 0xac, 0x84, 0xd9, 0x2a, 0x3c, 0x63, 0x3f, 0xc1, 0x6d, 0x82, 0x89, 0xab, 0x33, 0x04, 0x24, 0xab, 0xc3, 0xd3, 0x23, 0x17, 0x1d, 0xec, 0x97, 0xd0, 0xf9, 0xc9, 0xac, 0xcc, 0xb9, 0x07, 0x61, 0xd3, 0x58, 0x7f, 0x27, 0x41, 0x77, 0x46, 0x8a, 0xfe, 0x3b, 0x9c, 0x3a, 0xc4, 0x44, 0xa3, 0x2a, 0x20, 0x80, 0xc5, 0x28, 0xa2, 0x4a, 0x05, 0x2b, 0x5e, 0xae, 0x70, 0x27, 0x53, 0x98, 0x92, 0xf5, 0x3a, 0x5e, 0xee, 0xc6, 0xf5, 0x02, 0xf5, 0xb9, 0x54, 0xc9, 0x7a, 0xe8, 0x47, 0x4f, 0x85, 0x11, 0x30, 0x17, 0xbc, 0x6c, 0x81, 0x61, 0x2a, 0x49, 0xda, 0x00, 0xc3, 0x5c, 0x34, 0x36, 0x1d, 0x86, 0xab, 0xac, 0x6f, 0x32, 0x8c, 0xd0, 0xc6, 0x0b, 0xd5, 0x96, 0x2e, 0x65, 0x6b, 0x4c, 0xd4, 0xd2, 0x65, 0x81, 0x29, 0xdb, 0x1a, 0x93, 0x56, 0xf2, 0x97, 0x31, 0xc9, 0x1a, 0xb5, 0xbd, 0xec, 0xe9, 0xae, 0x42, 0x9b, 0xba, 0xd5, 0xbf, 0xbd, 0x2c, 0x1e, 0xeb, 0xab, 0xf9, 0xae, 0x68, 0x55, 0x6e, 0x67, 0xb3, 0xd0, 0x35, 0x66, 0x47, 0x63, 0x3c, 0xa2, 0x89, 0x97, 0xa4, 0x08, 0x13, 0x89, 0x32, 0xfa, 0xfe, 0x01, 0x4a, 0x76, 0x39, 0x8f, 0x32, 0x62, 0xdf, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}
