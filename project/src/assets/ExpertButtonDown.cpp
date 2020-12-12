/****************************************************************************************/
/* ExpertButtonDown.cpp                                                                 */
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

#include "assets/ExpertButtonDown.h"

#include <vector>

std::pair<std::string, std::string> Minesweeper::get_raw_expert_button_down()
{
	std::pair<std::string, std::string> result = std::make_pair("ExpertButtonDown", "");

	std::vector<short> raw_data {
		
		0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a,
		0x1a, 0x0a,
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0xcb, 0x00, 0x00, 0x00, 0x35, 0x08, 0x06, 0x00, 0x00, 0x00, 0xef, 0x63, 0x1f, 0x5a, 0x00, 0x00, 0x01, 0x85, 0x69, 0x43, 0x43, 0x50, 0x49, 0x43, 0x43, 0x20, 0x70, 0x72, 0x6f, 0x66, 0x69, 0x6c, 0x65, 0x00, 0x00, 0x28, 0x91, 0x7d, 0x91, 0x3d, 0x48, 0xc3, 0x40, 0x1c, 0xc5, 0x5f, 0x5b, 0xa5, 0xa2, 0x2d, 0x0e, 0x76, 0x10, 0x91, 0x12, 0xa1, 0x3a, 0x59, 0x10, 0x15, 0x71, 0x94, 0x2a, 0x16, 0xc1, 0x42, 0x69, 0x2b, 0xb4, 0xea, 0x60, 0x72, 0xe9, 0x17, 0x34, 0x69, 0x48, 0x52, 0x5c, 0x1c, 0x05, 0xd7, 0x82, 0x83, 0x1f, 0x8b, 0x55, 0x07, 0x17, 0x67, 0x5d, 0x1d, 0x5c, 0x05, 0x41, 0xf0, 0x03, 0xc4, 0xc9, 0xd1, 0x49, 0xd1, 0x45, 0x4a, 0xfc, 0x5f, 0x52, 0x68, 0x11, 0xe3, 0xc1, 0x71, 0x3f, 0xde, 0xdd, 0x7b, 0xdc, 0xbd, 0x03, 0xbc, 0x8d, 0x0a,
		0x53, 0x8c, 0xae, 0x09, 0x40, 0x51, 0x4d, 0x3d, 0x15, 0x8f, 0x09, 0xd9, 0xdc, 0xaa, 0xe0, 0x7f, 0x45, 0x1f, 0xc2, 0x08, 0x62, 0x04, 0x61, 0x91, 0x19, 0x5a, 0x22, 0xbd, 0x98, 0x81, 0xeb, 0xf8, 0xba, 0x87, 0x87, 0xaf, 0x77, 0x51, 0x9e, 0xe5, 0x7e, 0xee, 0xcf, 0x11, 0x94, 0xf3, 0x06, 0x03, 0x3c, 0x02, 0xf1, 0x1c, 0xd3, 0x74, 0x93, 0x78, 0x83, 0x78, 0x66, 0xd3, 0xd4, 0x38, 0xef, 0x13, 0x87, 0x58, 0x49, 0x94, 0x89, 0xcf, 0x89, 0xc7, 0x75, 0xba, 0x20, 0xf1, 0x23, 0xd7, 0x25, 0x87, 0xdf, 0x38, 0x17, 0x6d, 0xf6, 0xf2, 0xcc, 0x90, 0x9e, 0x49, 0xcd, 0x13, 0x87, 0x88, 0x85, 0x62, 0x07, 0x4b, 0x1d, 0xcc, 0x4a, 0xba, 0x42, 0x3c, 0x4d, 0x1c, 0x91, 0x15, 0x95, 0xf2, 0xbd, 0x59, 0x87, 0x65, 0xce, 0x5b, 0x9c, 0x95, 0x4a, 0x8d, 0xb5, 0xee, 0xc9, 0x5f, 0x18, 0xc8, 0xab, 0x2b, 0x69, 0xae, 0xd3, 0x1c, 0x46, 0x1c, 0x4b, 0x48, 0x20, 0x09, 0x01, 0x12, 0x6a, 0x28, 0xa3, 0x02, 0x13, 0x51, 0x5a, 0x55, 0x52, 0x0c, 0xa4, 0x68, 0x3f, 0xe6, 0xe2, 0x1f, 0xb2, 0xfd, 0x49, 0x72, 0x49, 0xe4, 0x2a, 0x83, 0x91, 0x63, 0x01, 0x55, 0x28, 0x10, 0x6d, 0x3f, 0xf8, 0x1f, 0xfc, 0xee, 0xd6, 0x28, 0x4c, 0x4d, 0x3a, 0x49, 0x81, 0x18, 0xd0, 0xfd, 0x62, 0x59, 0x1f, 0xa3, 0x80, 0x7f, 0x17, 0x68, 0xd6, 0x2d, 0xeb, 0xfb, 0xd8, 0xb2, 0x9a, 0x27, 0x80, 0xef, 0x19, 0xb8, 0x52, 0xdb, 0xfe, 0x6a, 0x03, 0x98, 0xfd, 0x24, 0xbd, 0xde, 0xd6, 0x22, 0x47, 0x40, 0xff, 0x36, 0x70, 0x71, 0xdd, 0xd6, 0xa4, 0x3d, 0xe0, 0x72, 0x07, 0x18, 0x7c, 0xd2, 0x44, 0x5d, 0xb4, 0x25, 0x1f, 0x4d, 0x6f, 0xa1, 0x00, 0xbc, 0x9f, 0xd1, 0x37, 0xe5, 0x80, 0x81, 0x5b, 0xa0, 0x77, 0xcd, 0xe9, 0xad, 0xb5, 0x8f, 0xd3, 0x07, 0x20, 0x43, 0x5d, 0x2d, 0xdf, 0x00, 0x07, 0x87, 0xc0, 0x58, 0x91, 0xb2, 0xd7, 0x5d, 0xde, 0xdd, 0xd3, 0xd9, 0xdb, 0xbf, 0x67, 0x5a, 0xfd, 0xfd, 0x00, 0xae, 0xd3, 0x72, 0xbf, 0xf1, 0xa0, 0x6e, 0xb7, 0x00, 0x00, 0x00, 0x06, 0x62, 0x4b, 0x47, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf9, 0x43, 0xbb, 0x7f, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x2e, 0x23, 0x00, 0x00, 0x2e, 0x23, 0x01, 0x78, 0xa5, 0x3f, 0x76, 0x00, 0x00, 0x00, 0x07, 0x74, 0x49, 0x4d, 0x45, 0x07, 0xe4, 0x0b, 0x1e, 0x11, 0x05, 0x2c, 0xd4, 0x5c, 0xb3, 0x68, 0x00, 0x00, 0x00, 0x19, 0x74, 0x45, 0x58, 0x74, 0x43, 0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74, 0x00, 0x43, 0x72, 0x65, 0x61, 0x74, 0x65, 0x64, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x47, 0x49, 0x4d, 0x50, 0x57, 0x81, 0x0e, 0x17, 0x00, 0x00, 0x03, 0x3f, 0x49, 0x44, 0x41, 0x54, 0x78, 0xda, 0xed, 0x9d, 0xcb, 0x6e, 0x13, 0x31, 0x14, 0x40, 0x27, 0x25, 0xaa, 0xa8, 0xe0, 0x4f, 0xf2, 0x6b, 0x88, 0x05, 0x7c, 0x44, 0x22, 0x48, 0x1a, 0x76, 0x6c, 0x90, 0x40, 0x55, 0xc5, 0xaa, 0x5b, 0x16, 0x54, 0x85, 0x0d, 0xb0, 0x00, 0x41, 0xf3, 0x49, 0xc1, 0x03, 0x03, 0x1d, 0x4d, 0xe7, 0xe1, 0xeb, 0xb7, 0xc7, 0xc7, 0xd2, 0x51, 0x95, 0x28, 0x4e, 0x26, 0xb6, 0x4f, 0x7c, 0xfd, 0x9a, 0x56, 0x15, 0x89, 0x44, 0xea, 0xa6, 0x85, 0xf6, 0x2b, 0xf7, 0xfb, 0x3d, 0x40, 0xd1, 0x20, 0x09, 0x80, 0x0b, 0x69, 0x28, 0x18, 0x80, 0x3f, 0x72, 0x2c, 0x26, 0x85, 0xe9, 0xcb, 0xa4, 0x38, 0xad, 0xff, 0x1e, 0xd7, 0xd5, 0x11, 0x60, 0xee, 0x34, 0x6d, 0xfe, 0x4c, 0x71, 0x32, 0x28, 0xcb, 0x80, 0x61, 0xb5, 0x28, 0xa7, 0x14, 0x22, 0x14, 0x26, 0xcc, 0xe3, 0x5a, 0x98, 0xc1, 0xde, 0x65, 0xa8, 0x3b, 0xa2, 0xf0, 0xa0, 0xd4, 0x1e, 0x46, 0x24, 0x4b, 0xf7, 0x0d, 0xd4, 0x73, 0x00, 0xb3, 0xa5, 0xa7, 0xbd, 0x57, 0xda, 0xa1, 0x18, 0xa2, 0x40, 0xc9, 0xc2, 0x20, 0x0b, 0x00, 0xb2, 0x00, 0x04, 0x92, 0x65, 0x6a, 0xcc, 0x42, 0x41, 0x02, 0xb2, 0x20, 0x0b, 0x00, 0xb2, 0x00, 0x64, 0x25, 0x8b, 0xc9, 0x1c, 0xf7, 0xbb, 0xf3, 0xcd, 0xec, 0x2b, 0xe5, 0xdb, 0xf6, 0x59, 0xef, 0x77, 0xff, 0xb1, 0x7d, 0xea, 0xe4, 0x7d, 0xa6, 0xca, 0xd5, 0x34, 0x9f, 0xeb, 0xef, 0x9b, 0xda, 0x75, 0x46, 0x93, 0xc5, 0x66, 0x51, 0x68, 0xce, 0xc2, 0x4c, 0x35, 0x00, 0x5d, 0x61, 0x24, 0x0d, 0xa9, 0x5d, 0xae, 0xa6, 0xf9, 0x42, 0x88, 0x12, 0xf3, 0x3a, 0x91, 0x65, 0xa6, 0xb2, 0xc4, 0x58, 0xd5, 0xfe, 0xf9, 0xf2, 0x49, 0xd0, 0x36, 0x10, 0xf2, 0x3a, 0xd3, 0x92, 0xe5, 0xa0, 0xc1, 0xfb, 0x02, 0x65, 0xb9, 0x6e, 0xbe, 0xfb, 0x8d, 0xbe, 0x2c, 0xbd, 0x8d, 0xe4, 0x5a, 0xaf, 0x5c, 0x6d, 0xf3, 0x49, 0x1a, 0x62, 0x2e, 0xd7, 0x99, 0xbd, 0x2c, 0x5d, 0xde, 0xb6, 0xe4, 0xf9, 0xb2, 0x7d, 0xee, 0xe4, 0x17, 0xc8, 0x26, 0x36, 0x36, 0xfd, 0xbc, 0xc1, 0x46, 0x70, 0x53, 0x1d, 0x75, 0xb7, 0x17, 0xc5, 0x6c, 0x84, 0xd6, 0xf5, 0x82, 0x2c, 0x02, 0x59, 0x2e, 0xcd, 0x1b, 0x77, 0x5d, 0x31, 0xae, 0x44, 0xb1, 0x8d, 0x8d, 0x9d, 0x31, 0x22, 0xcb, 0x50, 0xb9, 0x8b, 0xcb, 0xf5, 0x63, 0xf3, 0x9a, 0x4f, 0x0e, 0xf2, 0x99, 0xd6, 0x4b, 0xe0, 0xeb, 0x2c, 0x5e, 0x96, 0x59, 0x32, 0x03, 0x59, 0xb4, 0x40, 0x16, 0x8f, 0xb2, 0xd8, 0x16, 0xee, 0x21, 0x50, 0x58, 0x62, 0xfa, 0x79, 0x63, 0xaf, 0xdf, 0x08, 0x64, 0xd1, 0xc1, 0xa5, 0x2c, 0x3e, 0x25, 0x73, 0x98, 0x0f, 0x59, 0x90, 0x05, 0x59, 0x90, 0x45, 0x18, 0xa6, 0xdc, 0x6a, 0x34, 0xc2, 0xcb, 0x4c, 0x1a, 0x8f, 0x41, 0x18, 0x26, 0x16, 0x26, 0xd4, 0x75, 0xdf, 0xea, 0x4f, 0x0c, 0x20, 0x8b, 0xe9, 0x6c, 0xd8, 0x06, 0x59, 0xa4, 0xb2, 0xb4, 0x79, 0x73, 0xfe, 0xe2, 0x2e, 0xcf, 0x45, 0xa0, 0xd9, 0x30, 0x5b, 0x59, 0x2e, 0xf4, 0x67, 0xb5, 0x4c, 0xbe, 0x9f, 0x6b, 0x59, 0xd4, 0xe3, 0x45, 0xfa, 0xb2, 0xbc, 0x56, 0x7c, 0x57, 0xfc, 0x6a, 0x0a,
		0xea, 0x5f, 0xa5, 0x7c, 0x56, 0x6c, 0x33, 0x91, 0xc5, 0x70, 0x80, 0xaf, 0x5b, 0xce, 0x51, 0x64, 0x91, 0xd6, 0x4b, 0xe6, 0xb2, 0x24, 0x19, 0x86, 0xf5, 0xae, 0x79, 0xbc, 0x52, 0x7c, 0x6d, 0xf2, 0x5f, 0x29, 0x3e, 0xc8, 0xc6, 0x3a, 0xf7, 0xa6, 0x36, 0x4d, 0xc7, 0x3a, 0x07, 0x3d, 0x59, 0x44, 0x53, 0xdc, 0x06, 0x8b, 0x92, 0x49, 0x84, 0x61, 0xd2, 0x7a, 0xd1, 0xec, 0x49, 0x5d, 0x85, 0x6f, 0xe5, 0xca, 0xd2, 0xfd, 0x45, 0xd9, 0xa4, 0x2f, 0xcb, 0xd8, 0x22, 0x5d, 0x5d, 0x91, 0xce, 0x57, 0xf0, 0xd7, 0x91, 0x06, 0xea, 0xba, 0xf5, 0x32, 0x17, 0x59, 0xf6, 0x03, 0x37, 0x1b, 0x4b, 0x6a, 0x9d, 0xc5, 0x42, 0x16, 0xaf, 0xe1, 0xd4, 0x88, 0x2c, 0x41, 0xb7, 0xbb, 0xa4, 0x2e, 0x8b, 0xcf, 0x75, 0x36, 0x64, 0x49, 0x70, 0x80, 0x9f, 0xa2, 0x2c, 0x29, 0x4d, 0x4c, 0xd8, 0xd6, 0x8b, 0xc3, 0x1f, 0x3f, 0x64, 0x41, 0x16, 0x64, 0x89, 0x24, 0x8b, 0x7a, 0xfc, 0x20, 0xbc, 0x2c, 0xba, 0x8b, 0x77, 0x29, 0x2e, 0x4a, 0x0a,
		0xc7, 0x2c, 0x73, 0xdc, 0x75, 0xec, 0xb5, 0x5e, 0x0e, 0x1a, 0x72, 0xb2, 0xeb, 0x18, 0x59, 0x90, 0x25, 0x6d, 0x59, 0xfe, 0xf7, 0x2c, 0x6d, 0x59, 0xd4, 0x93, 0x67, 0x29, 0x1c, 0xfe, 0xf2, 0xba, 0x61, 0xcf, 0x33, 0x22, 0x59, 0x32, 0x3a, 0xfc, 0x95, 0x0b, 0x3e, 0x0e, 0x7f, 0x85, 0x5d, 0x94, 0x74, 0xd4, 0x08, 0x9d, 0x6c, 0x05, 0xf7, 0xbc, 0x45, 0x3f, 0x84, 0x2c, 0xa1, 0x8f, 0xeb, 0x86, 0x3e, 0x3a, 0x11, 0xeb, 0x84, 0x6d, 0x76, 0x37, 0xac, 0xb0, 0x3a, 0x64, 0x24, 0x90, 0xc5, 0xf4, 0xf0, 0x97, 0x8d, 0x28, 0xb9, 0xde, 0xb0, 0x22, 0xe4, 0xa1, 0xbc, 0x76, 0x0f, 0x51, 0xcc, 0x0d, 0x2b, 0x62, 0xdc, 0xbe, 0xc6, 0x64, 0x0c, 0x01, 0xa0, 0x11, 0x86, 0x9d, 0x28, 0x96, 0xc8, 0x02, 0x50, 0x64, 0xcf, 0x62, 0x11, 0x1a, 0x01, 0x20, 0x0b, 0xb2, 0x00, 0xb2, 0x4c, 0x0b, 0x83, 0x28, 0x80, 0x2c, 0x00, 0xc8, 0x02, 0x80, 0x2c, 0x00, 0xf9, 0xcb, 0xe2, 0x6b, 0x23, 0x25, 0x40, 0x91, 0xb2, 0x20, 0x0c, 0x94, 0x24, 0x8a, 0x58, 0x96, 0xfa, 0x7f, 0x81, 0xb3, 0x31, 0x0f, 0x4a, 0xa4, 0x6e, 0xfb, 0xa2, 0x31, 0x8b, 0x4a, 0xcb, 0xdd, 0x6e, 0xb7, 0xa6, 0xf0, 0xa0, 0x24, 0x56, 0xab, 0xd5, 0x23, 0xd5, 0xf6, 0x1f, 0x4a, 0x65, 0xa9, 0xb7, 0x25, 0x2f, 0xe9, 0x61, 0xa0, 0xa4, 0x1e, 0xa5, 0x16, 0xa5, 0xdb, 0xb3, 0xdc, 0x4b, 0x43, 0xe1, 0x18, 0x40, 0xe9, 0xf4, 0x26, 0x0a,
		0x06, 0xe0, 0x6f, 0x54, 0x35, 0x2a, 0x0a,
		0xd2, 0x00, 0xdc, 0x89, 0xd2, 0x93, 0x16, 0x15, 0x89, 0xe4, 0x3a, 0x4d, 0x86, 0x30, 0x99, 0xa6, 0xdf, 0x18, 0x09, 0xa6, 0xf6, 0xeb, 0x67, 0xda, 0xb9, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}