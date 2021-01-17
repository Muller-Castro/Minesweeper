/****************************************************************************************/
/* JoinButtonNHovered.cpp                                                               */
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

#include "assets/JoinButtonNHovered.h"

#include <vector>

std::pair<std::string, std::string> Minesweeper::get_raw_join_button_n_hovered()
{
	std::pair<std::string, std::string> result = std::make_pair("JoinButtonNHovered", "");

	std::vector<short> raw_data {
		
		0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a,
		0x1a, 0x0a,
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x9e, 0x00, 0x00, 0x00, 0x32, 0x08, 0x04, 0x00, 0x00, 0x00, 0x07, 0x52, 0xaa, 0x65, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 0x42, 0x01, 0xd9, 0xc9, 0x2c, 0x7f, 0x00, 0x00, 0x00, 0x20, 0x63, 0x48, 0x52, 0x4d, 0x00, 0x00, 0x7a, 0x26, 0x00, 0x00, 0x80, 0x84, 0x00, 0x00, 0xfa, 0x00, 0x00, 0x00, 0x80, 0xe8, 0x00, 0x00, 0x75, 0x30, 0x00, 0x00, 0xea, 0x60, 0x00, 0x00, 0x3a, 0x98, 0x00, 0x00, 0x17, 0x70, 0x9c, 0xba, 0x51, 0x3c, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x13, 0x00, 0x00, 0x0b, 0x13, 0x01, 0x00, 0x9a, 0x9c, 0x18, 0x00, 0x00, 0x04, 0x22, 0x49, 0x44, 0x41, 0x54, 0x68, 0xde, 0xed, 0x9b, 0x5f, 0x68, 0x5b, 0x55, 0x1c, 0xc7, 0x7f, 0x3a, 0x71, 0xf8, 0xe7, 0x61, 0x0c, 0x1f, 0x64, 0xfe, 0xc9, 0x83, 0x32, 0x1f, 0x16, 0x41, 0x6a, 0xd1, 0x4d, 0x59, 0xa8, 0x6d, 0x52, 0x64, 0xcb, 0x70, 0x82, 0xa0, 0x3e, 0x04, 0xc6, 0xca, 0xb4, 0x1a, 0x70, 0x53, 0x67, 0x17, 0x50, 0x18, 0x22, 0x93, 0x60, 0xb0, 0xd3, 0xb1, 0xd9, 0xce, 0x86, 0xda, 0x76, 0x6d, 0xdd, 0x22, 0x86, 0x76, 0x66, 0x4c, 0x4f, 0xad, 0x06, 0x54, 0xb0, 0x0f, 0x7d, 0x28, 0x61, 0x6c, 0x2f, 0x82, 0xf8, 0xa0, 0xc8, 0x10, 0x1f, 0x9c, 0x4a, 0x45, 0xfd, 0xf8, 0x90, 0xcb, 0xcd, 0x4d, 0x73, 0xef, 0xcd, 0xbd, 0xb7, 0x4d, 0x4c, 0xd7, 0x73, 0xbe, 0x4f, 0xf7, 0xfe, 0xf8, 0xe5, 0x72, 0x3f, 0x39, 0xe7, 0xfe, 0xce, 0xf9, 0xfd, 0xce, 0x11, 0x25, 0x86, 0xda, 0x55, 0xbb, 0xfa, 0x53, 0xcb, 0x83, 0xda, 0x55, 0x7b, 0x99, 0x59, 0x19, 0x5c, 0x44, 0x45, 0xd4, 0x9c, 0x9a, 0x53, 0x68, 0x79, 0xd0, 0x9c, 0x9a, 0x53, 0x11, 0x15, 0x29, 0xc3, 0x8b, 0xab, 0xa2, 0x2a, 0x6a, 0x28, 0xbe, 0x54, 0x54, 0x45, 0x15, 0x17, 0xf5, 0xb0, 0x2a, 0x69, 0x18, 0x81, 0x54, 0x12, 0xf5, 0x8b, 0xc6, 0x10, 0x54, 0xa2, 0xfe, 0xd5, 0x10, 0x82, 0xc3, 0xd3, 0x10, 0x34, 0x3c, 0x0d, 0x4f, 0xc3, 0xd3, 0xf0, 0xb4, 0x1a, 0x0f, 0xef, 0x28, 0x7b, 0x89, 0xf1, 0x22, 0xc3, 0x28, 0x14, 0x83, 0x3c, 0xcf, 0x76, 0xb6, 0x11, 0x35, 0xd5, 0xc5, 0x56, 0x3a, 0xd9, 0xcf, 0x48, 0xc3, 0x5f, 0x24, 0x47, 0x82, 0x36, 0xda, 0x68, 0x23, 0xc1, 0xd0, 0x6a, 0x80, 0xb7, 0x15, 0x31, 0x15, 0xe5, 0x01, 0xcb, 0x55, 0xad, 0x22, 0x0d, 0x7d, 0x8d, 0x57, 0x58, 0x5f, 0xf5, 0xb4, 0xdd, 0xad, 0x0e, 0x6f, 0x02, 0xe1, 0x76, 0x0e, 0x31, 0x42, 0x0f, 0x37, 0x23, 0x08, 0x21, 0x92, 0xe4, 0x98, 0x62, 0xd4, 0xd4, 0x18, 0xd3, 0x9c, 0x62, 0x0f, 0xb7, 0x20, 0x3c, 0xe4, 0xf9, 0x97, 0x53, 0x84, 0x0d, 0x08, 0x61, 0x52, 0x9e, 0x3c, 0xd6, 0xd7, 0xfc, 0x59, 0x43, 0xad, 0x0d, 0x6f, 0x1c, 0xe1, 0x4e, 0x0e, 0x33, 0xc5, 0x6b, 0xdc, 0xc3, 0x06, 0xae, 0x65, 0x13, 0x7b, 0x19, 0x66, 0x9c, 0xf7, 0x4c, 0x9d, 0xe4, 0x1c, 0xe7, 0x78, 0x95, 0xfb, 0xd8, 0x84, 0x30, 0xe8, 0xe9, 0x77, 0xbb, 0x96, 0x60, 0xe8, 0xad, 0xeb, 0x71, 0x02, 0x41, 0x78, 0x8a, 0x05, 0x16, 0x58, 0xe0, 0x6d, 0x04, 0xe1, 0xc0, 0x6a, 0xe8, 0x79, 0x2f, 0x93, 0xe7, 0x34, 0x87, 0xe8, 0xe0, 0x3a, 0x84, 0xbb, 0xe9, 0x22, 0x46, 0x87, 0xa9, 0x38, 0x19, 0x3e, 0x67, 0x9a, 0xc3, 0x24, 0x11, 0x9e, 0xf3, 0xf4, 0x15, 0xad, 0x1d, 0xf2, 0x85, 0x3a, 0x3e, 0x69, 0x04, 0x21, 0x49, 0xb9, 0x65, 0x11, 0x84, 0x9e, 0xd6, 0x83, 0x77, 0xde, 0xa2, 0xd3, 0x08, 0xb7, 0xb2, 0x8f, 0x49, 0xbe, 0xe2, 0x2c, 0x7d, 0xdc, 0xcb, 0x0d, 0x35, 0xaf, 0x7d, 0x3d, 0x71, 0xde, 0x45, 0xf1, 0x29, 0x1f, 0x21, 0x6c, 0xf7, 0xf0, 0x84, 0x1e, 0x04, 0x21, 0x6b, 0x80, 0x48, 0x22, 0x08, 0x69, 0x14, 0x79, 0xd2, 0x55, 0xca, 0x9b, 0x1e, 0x05, 0x57, 0x78, 0x85, 0x25, 0x7e, 0xd5, 0xbe, 0x4d, 0x84, 0xb7, 0xa3, 0x06, 0xce, 0x4d, 0xec, 0xe1, 0x43, 0x66, 0x38, 0xc3, 0x31, 0x0e, 0x12, 0xe3, 0x46, 0x04, 0x21, 0x4e, 0x86, 0x0c, 0x19, 0x1e, 0x45, 0x08, 0x11, 0xe5, 0x08, 0x53, 0xe4, 0x3d, 0x7e, 0xf5, 0xec, 0xe1, 0x85, 0x6c, 0xfa, 0x63, 0x88, 0x7e, 0x14, 0xbd, 0xe6, 0xb5, 0x1d, 0xbc, 0x5e, 0x87, 0xf0, 0x55, 0xf6, 0x6d, 0x22, 0xbc, 0x3c, 0xc2, 0xba, 0x25, 0xba, 0x8d, 0x67, 0x99, 0x64, 0x9a, 0x71, 0x3e, 0xa6, 0xc0, 0x11, 0xb6, 0xb1, 0x8e, 0x6b, 0x10, 0x3e, 0x33, 0x7c, 0xca, 0x11, 0x78, 0x27, 0xef, 0x33, 0x8a, 0x10, 0x0d, 0x08, 0x2f, 0xe4, 0x88, 0x20, 0xe5, 0x18, 0xdd, 0x8f, 0xa2, 0x5c, 0xac, 0x42, 0xa8, 0xb9, 0xf0, 0xfa, 0x10, 0xe2, 0x3c, 0xce, 0x2e, 0xcb, 0x3c, 0x6e, 0x37, 0x07, 0x19, 0xe6, 0x0b, 0xe6, 0x99, 0x67, 0x86, 0xe3, 0xbc, 0x44, 0x37, 0x77, 0x20, 0x96, 0x79, 0xdd, 0x5b, 0x08, 0x9d, 0x0c, 0x2e, 0x0b, 0x9e, 0x20, 0x6c, 0x26, 0x59, 0xa5, 0xcd, 0x16, 0xac, 0xd5, 0x96, 0x4e, 0x13, 0x5e, 0xd8, 0xc6, 0x6a, 0xf5, 0xed, 0x6f, 0x1e, 0xbc, 0x1d, 0x08, 0x27, 0x99, 0x60, 0x8c, 0x13, 0xa6, 0x8e, 0xf3, 0x0e, 0xa3, 0x94, 0x58, 0xe4, 0x47, 0x3e, 0x61, 0x90, 0x49, 0xfa, 0xe9, 0x46, 0x10, 0xee, 0x37, 0xbc, 0x5e, 0x47, 0xd8, 0xb5, 0xcc, 0x9e, 0x67, 0x1d, 0x94, 0xd4, 0x58, 0x64, 0x89, 0xa5, 0x32, 0x6c, 0xed, 0xac, 0x56, 0xdf, 0x50, 0xf3, 0xe0, 0x3d, 0x88, 0x70, 0x96, 0x6f, 0xb8, 0xc0, 0x45, 0x53, 0x25, 0xbe, 0xe6, 0x5b, 0x2e, 0x03, 0x8b, 0x94, 0x98, 0x65, 0x96, 0x31, 0xfa, 0x88, 0x71, 0x17, 0x42, 0x8c, 0xfc, 0x8a, 0xc1, 0x4b, 0x92, 0x05, 0xae, 0x18, 0x93, 0x91, 0x9f, 0x81, 0xac, 0xd9, 0x83, 0xc4, 0xb8, 0xfb, 0x9d, 0x2b, 0x3c, 0x7b, 0xdf, 0x7c, 0xb3, 0xe0, 0x75, 0x22, 0x9c, 0x62, 0x86, 0xef, 0xf9, 0xdd, 0xa2, 0xdf, 0xb8, 0xc2, 0x5f, 0xc0, 0x3f, 0xfc, 0xc1, 0x0f, 0x28, 0x06, 0x18, 0xe2, 0x18, 0x4f, 0x18, 0xa1, 0xe3, 0x91, 0x15, 0x82, 0x57, 0x6e, 0x0b, 0xc6, 0x55, 0xd6, 0xa6, 0xf7, 0xd9, 0x05, 0x8c, 0xfa, 0xbe, 0xe9, 0x66, 0xc1, 0x8b, 0x22, 0x8c, 0x32, 0xc3, 0x65, 0x9c, 0xda, 0xdf, 0x5c, 0x62, 0x96, 0x2f, 0x39, 0xcf, 0x9b, 0x3c, 0xc6, 0x16, 0x36, 0x20, 0x1a, 0x9e, 0x15, 0x9e, 0xe2, 0x27, 0x9c, 0xdb, 0x22, 0xbf, 0x32, 0xcf, 0x19, 0x3e, 0x60, 0x84, 0x03, 0x6c, 0xf1, 0x08, 0xaf, 0xb2, 0xa8, 0x7f, 0x32, 0x00, 0xbc, 0x04, 0x6d, 0x6b, 0x17, 0x5e, 0x8e, 0x8d, 0x35, 0x13, 0x09, 0x3f, 0xf0, 0xd2, 0x8e, 0x93, 0xe4, 0x35, 0x30, 0x6c, 0x13, 0x36, 0xb3, 0xb0, 0xab, 0x0e, 0x5e, 0xa3, 0x02, 0x46, 0xd8, 0x12, 0x31, 0x73, 0x57, 0x2b, 0xbc, 0x46, 0x4d, 0x55, 0xbc, 0x84, 0x04, 0x37, 0x6b, 0xd8, 0x36, 0x60, 0x54, 0xee, 0xb7, 0x04, 0xbc, 0x46, 0x4d, 0x92, 0x97, 0x0b, 0x4f, 0x1c, 0xe0, 0x49, 0x2b, 0xc1, 0x0b, 0xb6, 0x3c, 0xd3, 0xf0, 0x02, 0x27, 0x06, 0x94, 0xe7, 0x6f, 0x9e, 0xfb, 0x02, 0xcc, 0xcf, 0xf2, 0x0c, 0x5f, 0xdf, 0xcb, 0x96, 0x4d, 0x49, 0x65, 0xc8, 0xf0, 0x06, 0xc2, 0x4e, 0x26, 0x5c, 0x52, 0x52, 0xa9, 0xb5, 0x01, 0xcf, 0x7f, 0x32, 0x54, 0x0c, 0x98, 0x63, 0xae, 0xc9, 0x50, 0xb7, 0xd4, 0x51, 0xca, 0xd5, 0x1a, 0x76, 0x2d, 0x3a, 0xd5, 0x57, 0xa1, 0x99, 0xf0, 0xfc, 0xa6, 0xe1, 0x3b, 0xe8, 0xa6, 0x83, 0xa7, 0x79, 0xa1, 0x4e, 0x1a, 0xde, 0x29, 0x69, 0xd9, 0x5b, 0xc7, 0x9a, 0xf2, 0x85, 0x6a, 0xa3, 0xef, 0xea, 0xc8, 0xff, 0x5a, 0x00, 0x1a, 0x60, 0x9c, 0x01, 0x9e, 0x21, 0x5c, 0xb7, 0x00, 0x94, 0xaa, 0xe9, 0x45, 0xd6, 0xca, 0x99, 0xb3, 0x35, 0xe5, 0xd8, 0xfb, 0xc2, 0xa4, 0xaa, 0xea, 0x70, 0x09, 0x72, 0x01, 0xea, 0x72, 0xab, 0xae, 0xf4, 0xb8, 0x26, 0x76, 0x0c, 0xb4, 0x4e, 0xd1, 0x5b, 0x6f, 0xb7, 0xd0, 0x1b, 0x7d, 0xf4, 0x46, 0x1f, 0x2d, 0x0d, 0x4f, 0xc3, 0xd3, 0xf0, 0x34, 0x3c, 0x2d, 0x0d, 0x6f, 0x25, 0xe1, 0xe9, 0xc3, 0x53, 0x41, 0x55, 0xd2, 0xc7, 0xf6, 0x82, 0xaa, 0xa8, 0xe2, 0x95, 0x03, 0xa3, 0x1a, 0x87, 0x77, 0x95, 0x0f, 0x8d, 0x4a, 0xe5, 0xa8, 0xb2, 0x3e, 0x84, 0xec, 0xfb, 0xb8, 0xf2, 0x7f, 0xf9, 0x82, 0x57, 0x82, 0x68, 0x3c, 0xe6, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}
