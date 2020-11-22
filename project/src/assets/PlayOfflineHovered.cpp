/****************************************************************************************/
/* PlayOfflineHovered.cpp                                                               */
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

#include "assets/PlayOfflineHovered.h"

#include <vector>

std::pair<std::string, std::string> Minesweeper::get_raw_play_offline_hovered()
{
	std::pair<std::string, std::string> result = std::make_pair("PlayOfflineHovered", "");

	std::vector<short> raw_data {
		
		0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a,
		0x1a, 0x0a,
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0xcb, 0x00, 0x00, 0x00, 0x35, 0x08, 0x06, 0x00, 0x00, 0x00, 0xef, 0x63, 0x1f, 0x5a, 0x00, 0x00, 0x01, 0x84, 0x69, 0x43, 0x43, 0x50, 0x49, 0x43, 0x43, 0x20, 0x70, 0x72, 0x6f, 0x66, 0x69, 0x6c, 0x65, 0x00, 0x00, 0x28, 0x91, 0x7d, 0x91, 0x3d, 0x48, 0xc3, 0x40, 0x18, 0x86, 0xdf, 0xa6, 0x4a, 0x45, 0x2b, 0x0e, 0x56, 0x10, 0x71, 0xc8, 0x50, 0x9d, 0x2c, 0x88, 0x7f, 0x38, 0x4a, 0x15, 0x8b, 0x60, 0xa1, 0xb4, 0x15, 0x5a, 0x75, 0x30, 0xb9, 0xf4, 0x0f, 0x9a, 0x34, 0x24, 0x29, 0x2e, 0x8e, 0x82, 0x6b, 0xc1, 0xc1, 0x9f, 0xc5, 0xaa, 0x83, 0x8b, 0xb3, 0xae, 0x0e, 0xae, 0x82, 0x20, 0xf8, 0x03, 0xe2, 0xe4, 0xe8, 0xa4, 0xe8, 0x22, 0x25, 0x7e, 0x97, 0x14, 0x5a, 0xc4, 0x78, 0xc7, 0x71, 0x0f, 0xef, 0x7d, 0xef, 0xcb, 0xdd, 0x77, 0x80, 0x50, 0x2f, 0x33, 0xd5, 0xec, 0x18, 0x07, 0x54, 0xcd, 0x32, 0x92, 0xb1, 0xa8, 0x98, 0xc9, 0xae, 0x8a, 0x81, 0x57, 0xf4, 0x60, 0xc0, 0x99, 0xd3, 0x12, 0x33, 0xf5, 0x78, 0x6a, 0x31, 0x0d, 0xcf, 0xf1, 0x75, 0x0f, 0x1f, 0xdf, 0xef, 0x22, 0x3c, 0xcb, 0xbb, 0xee, 0xcf, 0xd1, 0xab, 0xe4, 0x4c, 0x06, 0xf8, 0x44, 0xe2, 0x39, 0xa6, 0x1b, 0x16, 0xf1, 0x06, 0xf1, 0xcc, 0xa6, 0xa5, 0x73, 0xde, 0x27, 0x0e, 0xb1, 0xa2, 0xa4, 0x10, 0x9f, 0x13, 0x8f, 0x19, 0x74, 0x41, 0xe2, 0x47, 0xae, 0xcb, 0x2e, 0xbf, 0x71, 0x2e, 0x38, 0x2c, 0xf0, 0xcc, 0x90, 0x91, 0x4e, 0xce, 0x13, 0x87, 0x88, 0xc5, 0x42, 0x1b, 0xcb, 0x6d, 0xcc, 0x8a, 0x86, 0x4a, 0x3c, 0x45, 0x1c, 0x56, 0x54, 0x8d, 0xf2, 0x85, 0x8c, 0xcb, 0x0a,
		0xe7, 0x2d, 0xce, 0x6a, 0xb9, 0xca, 0x9a, 0xf7, 0xe4, 0x2f, 0x0c, 0xe6, 0xb4, 0x95, 0x14, 0xd7, 0x69, 0x0d, 0x23, 0x86, 0x25, 0xc4, 0x91, 0x80, 0x08, 0x19, 0x55, 0x94, 0x50, 0x86, 0x85, 0x08, 0xed, 0x1a, 0x29, 0x26, 0x92, 0x74, 0x1e, 0xf5, 0xf0, 0x0f, 0x39, 0xfe, 0x04, 0xb9, 0x64, 0x72, 0x95, 0xc0, 0xc8, 0xb1, 0x80, 0x0a,
		0x54, 0x48, 0x8e, 0x1f, 0xfc, 0x0f, 0x7e, 0xf7, 0xd6, 0xcc, 0x4f, 0x4e, 0xb8, 0x49, 0xc1, 0x28, 0xd0, 0xf9, 0x62, 0xdb, 0x1f, 0x23, 0x40, 0x60, 0x17, 0x68, 0xd4, 0x6c, 0xfb, 0xfb, 0xd8, 0xb6, 0x1b, 0x27, 0x80, 0xff, 0x19, 0xb8, 0xd2, 0x5a, 0xfe, 0x4a, 0x1d, 0x98, 0xfd, 0x24, 0xbd, 0xd6, 0xd2, 0xc2, 0x47, 0x40, 0xdf, 0x36, 0x70, 0x71, 0xdd, 0xd2, 0xe4, 0x3d, 0xe0, 0x72, 0x07, 0x18, 0x7c, 0xd2, 0x25, 0x43, 0x72, 0x24, 0x3f, 0x2d, 0x21, 0x9f, 0x07, 0xde, 0xcf, 0xe8, 0x9b, 0xb2, 0x40, 0xff, 0x2d, 0xd0, 0xbd, 0xe6, 0xf6, 0xad, 0x79, 0x8e, 0xd3, 0x07, 0x20, 0x4d, 0xbd, 0x5a, 0xbe, 0x01, 0x0e, 0x0e, 0x81, 0xd1, 0x02, 0x65, 0xaf, 0x7b, 0xbc, 0xbb, 0xab, 0xbd, 0x6f, 0xff, 0xd6, 0x34, 0xfb, 0xf7, 0x03, 0xc7, 0x87, 0x72, 0xc9, 0x26, 0x07, 0xdf, 0xc6, 0x00, 0x00, 0x00, 0x06, 0x62, 0x4b, 0x47, 0x44, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0xa0, 0xbd, 0xa7, 0x93, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x2e, 0x23, 0x00, 0x00, 0x2e, 0x23, 0x01, 0x78, 0xa5, 0x3f, 0x76, 0x00, 0x00, 0x00, 0x07, 0x74, 0x49, 0x4d, 0x45, 0x07, 0xe4, 0x0b, 0x15, 0x15, 0x1e, 0x26, 0x4d, 0xb7, 0xbe, 0x31, 0x00, 0x00, 0x00, 0x19, 0x74, 0x45, 0x58, 0x74, 0x43, 0x6f, 0x6d, 0x6d, 0x65, 0x6e, 0x74, 0x00, 0x43, 0x72, 0x65, 0x61, 0x74, 0x65, 0x64, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x47, 0x49, 0x4d, 0x50, 0x57, 0x81, 0x0e, 0x17, 0x00, 0x00, 0x03, 0x69, 0x49, 0x44, 0x41, 0x54, 0x78, 0xda, 0xed, 0x9d, 0xcf, 0x8a, 0x13, 0x31, 0x1c, 0x80, 0x53, 0x58, 0xf6, 0x20, 0x7b, 0xf6, 0x01, 0x7c, 0x90, 0xbe, 0x82, 0x4f, 0xe0, 0x49, 0xf0, 0x54, 0x0a,
		0xb6, 0xe0, 0xc1, 0xcb, 0x1e, 0x3c, 0x58, 0x0a,
		0xd2, 0xab, 0x27, 0x05, 0x2f, 0xb2, 0xee, 0xc2, 0xb2, 0x2f, 0xa0, 0x17, 0x4f, 0x82, 0x2e, 0xfe, 0x39, 0x88, 0x3e, 0x82, 0xbe, 0x80, 0x17, 0x63, 0x67, 0x9d, 0xb2, 0xdb, 0xe9, 0x24, 0x4d, 0x32, 0xbf, 0xa4, 0xe9, 0xe4, 0x2b, 0x7c, 0x14, 0xa6, 0x99, 0x92, 0xf9, 0xfd, 0xe6, 0x9b, 0x24, 0xd3, 0x64, 0xaa, 0x94, 0x52, 0x83, 0x25, 0x87, 0xd5, 0xbb, 0x7e, 0xaa, 0x34, 0x00, 0x5c, 0x53, 0xfb, 0x71, 0x54, 0xbf, 0x5f, 0x89, 0x72, 0x48, 0x60, 0x00, 0x8c, 0xc2, 0x1c, 0xd5, 0xd0, 0xa2, 0x00, 0x38, 0xb5, 0x30, 0xcd, 0x8d, 0x8b, 0xc5, 0x02, 0x00, 0x96, 0x6c, 0x08, 0x83, 0x28, 0x00, 0x6e, 0xc2, 0x20, 0x0b, 0x00, 0xb2, 0x00, 0x20, 0x0b, 0x00, 0xb2, 0x34, 0x2b, 0x49, 0xb2, 0x00, 0x59, 0x3c, 0x2a, 0x48, 0xc2, 0xa0, 0x58, 0x59, 0x94, 0x52, 0x6b, 0x18, 0x2b, 0x77, 0x89, 0x30, 0x50, 0xa0, 0x2c, 0x4d, 0x41, 0x4c, 0xac, 0x89, 0x72, 0x89, 0x30, 0x50, 0x88, 0x2c, 0xae, 0x82, 0x18, 0x45, 0xa9, 0x5e, 0x08, 0x03, 0x7d, 0x96, 0xc5, 0x57, 0x12, 0xa3, 0x28, 0xab, 0x17, 0xc2, 0x40, 0xdf, 0x64, 0x09, 0x91, 0x24, 0x65, 0xcb, 0x12, 0x52, 0xa7, 0xd9, 0x6c, 0x66, 0xfd, 0x2c, 0xc7, 0xe4, 0x4e, 0x26, 0x13, 0xaf, 0xe3, 0x6b, 0xee, 0x3f, 0x9f, 0xcf, 0xbd, 0xf6, 0x73, 0x29, 0xdf, 0xa5, 0x3e, 0xbd, 0x93, 0x45, 0x2a, 0x58, 0xb6, 0x31, 0x4b, 0xdb, 0xcd, 0x80, 0xd4, 0xf5, 0xcb, 0x3d, 0xb9, 0x3e, 0xa2, 0x74, 0x3d, 0xf1, 0xab, 0xfd, 0x24, 0x45, 0xc9, 0x35, 0xa6, 0xd9, 0xca, 0xb2, 0x21, 0xcc, 0x0d, 0x51, 0x90, 0x25, 0xde, 0x31, 0x8e, 0x46, 0x23, 0x6f, 0xd1, 0x42, 0xc4, 0x2c, 0x5e, 0x96, 0x18, 0x01, 0x6b, 0x4c, 0x8d, 0xb6, 0xde, 0x6a, 0xf6, 0xad, 0xe3, 0x5a, 0xab, 0x65, 0xe0, 0xd5, 0x93, 0x96, 0x3a, 0xd5, 0x9f, 0xbd, 0x3c, 0xce, 0x2f, 0xb1, 0x6d, 0x31, 0xfc, 0x76, 0xea, 0x77, 0x7c, 0x4d, 0x9e, 0x3f, 0xf6, 0xdb, 0x6f, 0x5b, 0xf9, 0xb6, 0xf8, 0xe5, 0x1c, 0xd3, 0xbd, 0x91, 0x65, 0x25, 0x4c, 0xdb, 0xf6, 0x9c, 0x64, 0xf1, 0x1d, 0x1f, 0xb8, 0x5c, 0x4d, 0xa7, 0xd3, 0xa9, 0xf1, 0xea, 0x5f, 0x82, 0x2c, 0xa1, 0xad, 0x50, 0xd7, 0xb1, 0x5a, 0x74, 0x59, 0x62, 0x89, 0xb2, 0x0d, 0x09, 0x59, 0x6c, 0x09, 0xfa, 0xf2, 0xe6, 0x7f, 0x99, 0x9f, 0x17, 0x72, 0x89, 0x75, 0x49, 0xa0, 0x49, 0x94, 0x6d, 0xc2, 0x48, 0x1c, 0x5f, 0x53, 0xb2, 0xef, 0xe7, 0x6e, 0xf5, 0x76, 0x2d, 0x1f, 0x2b, 0x7e, 0x55, 0xdc, 0xba, 0x8e, 0xd5, 0x90, 0x05, 0x59, 0x8a, 0x90, 0xa5, 0xeb, 0x58, 0x0d, 0x59, 0x12, 0xcb, 0xe2, 0xdb, 0xe5, 0x31, 0xf5, 0xd5, 0x6f, 0xca, 0xd2, 0x56, 0x87, 0xbe, 0xc9, 0x62, 0xdb, 0xe6, 0xdb, 0x4d, 0x0e, 0xcd, 0xc5, 0x36, 0x61, 0x44, 0x64, 0xd9, 0xf5, 0x55, 0x01, 0x59, 0xdc, 0x8f, 0xcf, 0xe5, 0xbb, 0x91, 0x05, 0x59, 0x76, 0xde, 0x0d, 0x73, 0xfd, 0x2e, 0x64, 0x89, 0x9f, 0x1f, 0x9f, 0x98, 0x22, 0x8b, 0xf0, 0xdd, 0xb0, 0x3e, 0xc9, 0x62, 0x8b, 0xc7, 0x9d, 0xdb, 0xe6, 0x78, 0xf8, 0x96, 0x2f, 0x4e, 0x96, 0x5c, 0x06, 0x68, 0x7d, 0x92, 0xa5, 0x62, 0x3c, 0x1e, 0x23, 0x0b, 0xb2, 0xe4, 0x27, 0x8b, 0xef, 0x49, 0x1f, 0x3a, 0x66, 0x59, 0x11, 0x33, 0xb1, 0x7d, 0xef, 0x86, 0x75, 0x95, 0xdd, 0x96, 0x0b, 0x64, 0x41, 0x16, 0x64, 0x41, 0x96, 0xbc, 0x64, 0x39, 0x7e, 0xa0, 0xf4, 0xe7, 0x13, 0xa5, 0xff, 0x7c, 0x50, 0xfa, 0xf7, 0x3b, 0xa5, 0x7f, 0x2c, 0x4f, 0x98, 0xf7, 0x2f, 0x94, 0x3e, 0x9b, 0x2b, 0xfd, 0xec, 0xa1, 0xd2, 0xf7, 0xef, 0x2a, 0xfd, 0xf5, 0x34, 0xec, 0xc4, 0xcc, 0xf1, 0xd6, 0x71, 0x5b, 0xee, 0x73, 0x93, 0xc5, 0x37, 0xaf, 0x0c, 0xf0, 0x03, 0xae, 0xbc, 0x21, 0xfb, 0xc5, 0x3c, 0x31, 0x73, 0x92, 0xa5, 0x1a, 0x4b, 0x99, 0x66, 0x37, 0xdb, 0xca, 0x23, 0x0b, 0xb2, 0x88, 0x9f, 0x98, 0x7f, 0x3f, 0x29, 0xfd, 0xeb, 0xad, 0xd2, 0x1f, 0x5f, 0x2b, 0x7d, 0x32, 0x53, 0xfa, 0xd1, 0xbd, 0xe5, 0x67, 0x67, 0xc8, 0x82, 0x2c, 0x3d, 0x92, 0x25, 0x74, 0xcc, 0xe2, 0x32, 0x09, 0xd1, 0xa7, 0x7f, 0x2d, 0x39, 0x91, 0x72, 0x5f, 0x65, 0x09, 0xcd, 0x45, 0x12, 0x59, 0x56, 0xc1, 0x18, 0x0e, 0x87, 0x7b, 0x3f, 0xdd, 0x05, 0x59, 0x90, 0x25, 0x99, 0x2c, 0xa9, 0x85, 0x91, 0x9e, 0xc3, 0xe6, 0x22, 0x8b, 0xf4, 0x04, 0xbe, 0x90, 0xdf, 0x67, 0x7c, 0xa7, 0xe9, 0x4b, 0xd5, 0xc7, 0x26, 0x8b, 0xad, 0x7c, 0xca, 0x49, 0xa6, 0xb1, 0x26, 0x53, 0x8a, 0x4f, 0xa4, 0x44, 0x16, 0x79, 0x42, 0x7e, 0x40, 0x0b, 0x9d, 0xaa, 0xee, 0x7a, 0xf2, 0x23, 0x8b, 0xc0, 0xe2, 0xaf, 0x94, 0xad, 0x8b, 0xf4, 0xb2, 0xdb, 0x6d, 0xeb, 0x1a, 0xa4, 0xd7, 0x51, 0xb8, 0xb4, 0x2a, 0xa1, 0xb2, 0x74, 0x59, 0x04, 0x65, 0xda, 0xaf, 0x29, 0x8a, 0x6f, 0x79, 0xc9, 0x65, 0xc6, 0xb6, 0x85, 0x71, 0xa1, 0xb9, 0xd8, 0xc9, 0x4a, 0xc9, 0xdc, 0x65, 0xc9, 0xf1, 0xa1, 0x12, 0xd2, 0x33, 0x64, 0x61, 0x4f, 0x1e, 0x58, 0x91, 0xa2, 0x75, 0xe9, 0x43, 0xf0, 0x91, 0x05, 0x59, 0x92, 0x08, 0xd3, 0x37, 0x59, 0xa4, 0xbb, 0x0c, 0xb0, 0x87, 0x0f, 0xd9, 0x8b, 0x21, 0x4c, 0x5f, 0x82, 0x1f, 0x73, 0xbd, 0x38, 0x14, 0xf0, 0xf8, 0xd6, 0x12, 0x24, 0x91, 0x7c, 0x6a, 0x24, 0x14, 0xfe, 0x60, 0xf0, 0x12, 0x24, 0x01, 0x64, 0x11, 0x13, 0x87, 0xe4, 0x40, 0xf1, 0xb2, 0x2c, 0x3c, 0xfe, 0xcc, 0x08, 0x00, 0x59, 0x00, 0x90, 0x05, 0x00, 0x59, 0x00, 0x90, 0x05, 0x59, 0x00, 0x90, 0x05, 0x20, 0x8d, 0x2c, 0x08, 0x03, 0xd0, 0x2e, 0x4a, 0xfd, 0x17, 0x28, 0x6a, 0xd0, 0xdc, 0x08, 0x00, 0x1b, 0xa2, 0x0c, 0x2a, 0x59, 0x0e, 0x2a, 0x08, 0x08, 0x80, 0x51, 0x94, 0x5b, 0x35, 0x57, 0xc6, 0x1c, 0xd0, 0xc2, 0x00, 0x18, 0x5b, 0x94, 0x4a, 0x94, 0xc1, 0x3f, 0x7d, 0xdd, 0xb4, 0x7e, 0xf8, 0x79, 0xb3, 0x91, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}