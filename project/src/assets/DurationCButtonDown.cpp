/****************************************************************************************/
/* DurationCButtonDown.cpp                                                              */
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

#include "assets/DurationCButtonDown.h"

#include <vector>

std::pair<std::string, std::string> Minesweeper::get_raw_duration_c_button_down()
{
	std::pair<std::string, std::string> result = std::make_pair("DurationCButtonDown", "");

	std::vector<short> raw_data {
		
		0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a,
		0x1a, 0x0a,
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x66, 0x00, 0x00, 0x00, 0x1b, 0x08, 0x04, 0x00, 0x00, 0x00, 0x24, 0x6a, 0x32, 0xf6, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 0x42, 0x01, 0xd9, 0xc9, 0x2c, 0x7f, 0x00, 0x00, 0x00, 0x20, 0x63, 0x48, 0x52, 0x4d, 0x00, 0x00, 0x7a, 0x26, 0x00, 0x00, 0x80, 0x84, 0x00, 0x00, 0xfa, 0x00, 0x00, 0x00, 0x80, 0xe8, 0x00, 0x00, 0x75, 0x30, 0x00, 0x00, 0xea, 0x60, 0x00, 0x00, 0x3a, 0x98, 0x00, 0x00, 0x17, 0x70, 0x9c, 0xba, 0x51, 0x3c, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x13, 0x00, 0x00, 0x0b, 0x13, 0x01, 0x00, 0x9a, 0x9c, 0x18, 0x00, 0x00, 0x03, 0x0c, 0x49, 0x44, 0x41, 0x54, 0x58, 0xc3, 0xed, 0xd8, 0x4b, 0x68, 0x5c, 0x75, 0x14, 0xc7, 0xf1, 0xcf, 0x7f, 0x1e, 0x99, 0x74, 0xb4, 0xc1, 0x50, 0xc5, 0xc6, 0x84, 0xd6, 0x47, 0x15, 0x6d, 0xc1, 0x22, 0x8d, 0x09, 0x11, 0x51, 0x10, 0xaa, 0x22, 0x46, 0xad, 0x5a, 0xe3, 0x83, 0x42, 0x5c, 0x28, 0x59, 0x68, 0x25, 0xba, 0x31, 0x0a,
		0x3e, 0x16, 0xa2, 0x2e, 0x55, 0x70, 0xe7, 0x42, 0xc1, 0x52, 0x48, 0xa1, 0x0a,
		0x76, 0x63, 0xad, 0x88, 0x41, 0x2c, 0x54, 0xdc, 0x98, 0x1a, 0x8a, 0x56, 0xd1, 0x04, 0x4d, 0x22, 0x89, 0x99, 0x4c, 0x33, 0x4d, 0x3a, 0x93, 0xb9, 0x2e, 0x3a, 0x5e, 0xa2, 0x56, 0x98, 0x26, 0x13, 0x1c, 0xa4, 0x67, 0x77, 0xff, 0xe7, 0x3e, 0xce, 0xf7, 0x9e, 0x73, 0x7e, 0xff, 0x47, 0x88, 0xfc, 0x7f, 0x2c, 0xe1, 0x1c, 0x4c, 0x7d, 0x5a, 0xea, 0x8c, 0xa3, 0x6d, 0xde, 0x2a, 0x6e, 0x8f, 0x4e, 0xd6, 0x6b, 0xcc, 0x0d, 0x63, 0x1e, 0x73, 0xf8, 0x9f, 0x8e, 0x70, 0xc6, 0x9e, 0x19, 0xfc, 0xfe, 0xfe, 0x83, 0x48, 0xd6, 0x21, 0x49, 0x64, 0x41, 0xbb, 0xae, 0x91, 0xb0, 0xb9, 0xda, 0xcc, 0x5c, 0x31, 0xe2, 0x73, 0xe7, 0x2f, 0xfb, 0x83, 0x25, 0x25, 0x41, 0x52, 0x4a, 0xa4, 0xa8, 0x2c, 0xc4, 0x81, 0x24, 0xa5, 0xe2, 0xab, 0xe5, 0x59, 0x90, 0x57, 0xb2, 0x6d, 0x43, 0xa6, 0xea, 0x32, 0x2b, 0xa4, 0xad, 0x5d, 0x26, 0x4c, 0xa4, 0xa4, 0xdd, 0xd5, 0x0a,
		0x8e, 0xfb, 0x56, 0x83, 0x9b, 0x35, 0x2b, 0xc7, 0xde, 0x9f, 0x0c, 0x9b, 0x5b, 0x51, 0xa3, 0x06, 0x41, 0x86, 0x42, 0xf5, 0x3d, 0x13, 0x02, 0x96, 0x23, 0xda, 0xa7, 0x04, 0x37, 0x78, 0xc0, 0xac, 0x48, 0xa7, 0x8f, 0xac, 0xd7, 0x21, 0x2f, 0x11, 0xe3, 0x6c, 0xb6, 0xc5, 0xbb, 0x16, 0x96, 0xbc, 0x3b, 0x21, 0x79, 0x96, 0xb9, 0x8a, 0x4e, 0x33, 0x55, 0x0d, 0xb3, 0x4c, 0x5b, 0x70, 0x81, 0x2e, 0x77, 0x98, 0xd0, 0x29, 0x61, 0x8f, 0xeb, 0xb5, 0xd8, 0xaf, 0x4f, 0x93, 0x22, 0x58, 0xf4, 0x84, 0x7e, 0x59, 0xc1, 0xc5, 0x71, 0x60, 0x27, 0xe4, 0x44, 0x35, 0x12, 0xd5, 0x1a, 0xc2, 0x94, 0x74, 0xe8, 0xb6, 0xce, 0x17, 0x5e, 0x34, 0x86, 0x39, 0x17, 0x6a, 0x94, 0x33, 0x6b, 0x8d, 0x01, 0x69, 0x94, 0x75, 0x9a, 0xd6, 0x6c, 0x97, 0xab, 0xe2, 0xa7, 0xc6, 0x7d, 0xe2, 0x88, 0x68, 0x85, 0x9d, 0x54, 0x63, 0x98, 0x48, 0x93, 0xfb, 0x0c, 0x39, 0xe0, 0x1b, 0x43, 0x95, 0xda, 0x2e, 0x57, 0x26, 0xb2, 0x16, 0x4f, 0x29, 0x08, 0x12, 0x46, 0x0c, 0xeb, 0x35, 0xe3, 0x59, 0xf3, 0x82, 0xc8, 0xa2, 0x6e, 0xb7, 0x3b, 0x66, 0xa6, 0x26, 0x81, 0x24, 0x6a, 0x07, 0x93, 0x90, 0x90, 0x37, 0x69, 0xa3, 0x07, 0xff, 0xe6, 0x2b, 0x23, 0x6b, 0x8d, 0x09, 0x9f, 0xb9, 0xd2, 0x88, 0xdd, 0xde, 0x34, 0xe9, 0x57, 0xe3, 0xc6, 0x4c, 0x56, 0xb4, 0xaf, 0xae, 0xca, 0x2c, 0x21, 0xe7, 0x4b, 0xdb, 0xdd, 0xa9, 0xd1, 0x9c, 0xbd, 0xf1, 0x78, 0x11, 0x93, 0x0e, 0xc9, 0x68, 0xd4, 0xee, 0x11, 0xcd, 0xf6, 0x39, 0x60, 0x93, 0x3d, 0x15, 0xff, 0x8c, 0x4f, 0x57, 0xa8, 0x6f, 0xab, 0xd2, 0x33, 0x49, 0x1f, 0x38, 0x2c, 0x6b, 0x87, 0x96, 0x38, 0x5b, 0x91, 0x4b, 0x6c, 0x91, 0xd4, 0xa7, 0xe0, 0x17, 0xaf, 0xea, 0x76, 0x91, 0x0d, 0x2e, 0x37, 0x6b, 0xbf, 0x48, 0x52, 0x87, 0x79, 0x5f, 0x2b, 0xc9, 0xd4, 0x1b, 0x0c, 0x69, 0x13, 0x72, 0x6e, 0xd1, 0x1a, 0xab, 0xdb, 0x21, 0xb7, 0x69, 0x97, 0x56, 0x36, 0xac, 0xd7, 0x80, 0x29, 0xaf, 0xbb, 0x5b, 0xd9, 0x33, 0x7a, 0x25, 0xe4, 0x0c, 0xe8, 0x77, 0xaf, 0xf7, 0x95, 0x6a, 0x92, 0x9b, 0x9a, 0xc2, 0x90, 0x92, 0x89, 0xc3, 0x0a,
		0xca, 0x3e, 0x56, 0xd2, 0xa6, 0xec, 0x5a, 0x53, 0x22, 0x64, 0xfc, 0x6e, 0xdc, 0xc3, 0x6e, 0xb4, 0x28, 0xd8, 0xe9, 0x0d, 0x19, 0x2f, 0x38, 0x68, 0xb4, 0x1e, 0x61, 0xfe, 0x2a, 0x09, 0x41, 0xa7, 0x2e, 0x05, 0x49, 0x23, 0xfa, 0xfc, 0xe6, 0x79, 0x0f, 0x69, 0x92, 0x56, 0xd0, 0x86, 0x20, 0x6b, 0x4e, 0x6e, 0xd5, 0x57, 0xcd, 0x2b, 0x94, 0x82, 0x08, 0x91, 0x53, 0xce, 0x73, 0x97, 0x0f, 0x3d, 0x6d, 0xad, 0x59, 0x63, 0x76, 0x7b, 0xc9, 0xa4, 0x45, 0x7b, 0xbd, 0x26, 0x2d, 0x48, 0x1b, 0x76, 0x8f, 0x1e, 0xa3, 0xa6, 0xeb, 0x4f, 0x00, 0xfe, 0x2c, 0xae, 0x39, 0x19, 0xaf, 0x08, 0xb6, 0x9a, 0xb2, 0xde, 0x65, 0x1e, 0x55, 0x96, 0xb0, 0xce, 0xe3, 0xbe, 0x33, 0xe8, 0x49, 0x5b, 0xed, 0xaa, 0xe0, 0xf6, 0xd8, 0xa9, 0xd5, 0x7b, 0x0a,
		0x35, 0x0a,
		0xa3, 0xe6, 0x30, 0x19, 0x43, 0x5a, 0x3d, 0x87, 0x1f, 0x0c, 0xba, 0x54, 0x8f, 0x6d, 0x15, 0xcf, 0x57, 0xf6, 0x99, 0x35, 0x68, 0x87, 0x97, 0xe3, 0xbb, 0xa7, 0xbd, 0xe3, 0x58, 0x8d, 0xb4, 0x6c, 0x15, 0x60, 0x52, 0x46, 0xbd, 0x2d, 0xa3, 0x6c, 0x5e, 0xc1, 0xb8, 0xa3, 0x95, 0x5d, 0x51, 0x24, 0xaf, 0xa8, 0xc1, 0x51, 0x3f, 0xca, 0xc4, 0x93, 0xe4, 0x82, 0x13, 0x1a, 0x56, 0xb9, 0x67, 0xa2, 0xe8, 0xdf, 0x16, 0xa6, 0x55, 0xcd, 0x37, 0x05, 0x73, 0x08, 0xd2, 0xa2, 0x25, 0x0d, 0x9e, 0x90, 0x42, 0xe4, 0xe4, 0x92, 0xf5, 0x7b, 0x38, 0xeb, 0xbf, 0x19, 0x4e, 0xc7, 0x15, 0x55, 0x0f, 0x93, 0x2d, 0xca, 0xab, 0xcf, 0x73, 0x9b, 0x20, 0x6f, 0x81, 0x6c, 0xf5, 0x30, 0xc7, 0xaf, 0xb9, 0xee, 0xa6, 0xba, 0xde, 0x36, 0x37, 0xfc, 0x5c, 0x3d, 0x4c, 0xff, 0xa6, 0xe4, 0xc6, 0x5b, 0xeb, 0xfc, 0x40, 0x43, 0xb5, 0x07, 0x1a, 0xe7, 0xce, 0xcd, 0xfe, 0x7b, 0xfb, 0x03, 0xb7, 0x5a, 0xeb, 0xc3, 0x40, 0x6e, 0xa6, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}