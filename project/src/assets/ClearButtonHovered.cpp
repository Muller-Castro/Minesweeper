/****************************************************************************************/
/* ClearButtonHovered.cpp                                                               */
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

#include "assets/ClearButtonHovered.h"

#include <vector>

std::pair<std::string, std::string> Minesweeper::get_raw_clear_button_hovered()
{
	std::pair<std::string, std::string> result = std::make_pair("ClearButtonHovered", "");

	std::vector<short> raw_data {
		
		0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a,
		0x1a, 0x0a,
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x46, 0x00, 0x00, 0x00, 0x1f, 0x08, 0x06, 0x00, 0x00, 0x00, 0x5a, 0xaf, 0xbb, 0xbb, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 0x42, 0x01, 0xd9, 0xc9, 0x2c, 0x7f, 0x00, 0x00, 0x00, 0x20, 0x63, 0x48, 0x52, 0x4d, 0x00, 0x00, 0x7a, 0x26, 0x00, 0x00, 0x80, 0x84, 0x00, 0x00, 0xfa, 0x00, 0x00, 0x00, 0x80, 0xe8, 0x00, 0x00, 0x75, 0x30, 0x00, 0x00, 0xea, 0x60, 0x00, 0x00, 0x3a, 0x98, 0x00, 0x00, 0x17, 0x70, 0x9c, 0xba, 0x51, 0x3c, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x13, 0x00, 0x00, 0x0b, 0x13, 0x01, 0x00, 0x9a, 0x9c, 0x18, 0x00, 0x00, 0x05, 0x35, 0x49, 0x44, 0x41, 0x54, 0x68, 0xde, 0xed, 0x5a, 0x69, 0x48, 0x55, 0x5b, 0x14, 0x96, 0xe7, 0x8f, 0x14, 0xea, 0x8f, 0x3d, 0x52, 0x23, 0x41, 0xc2, 0x9c, 0x50, 0x71, 0x82, 0xd0, 0x1c, 0x73, 0x1e, 0xd0, 0x22, 0x8d, 0x34, 0x15, 0x9c, 0x50, 0x11, 0x71, 0xf8, 0xe1, 0x53, 0x91, 0x30, 0x1f, 0x2a, 0x8a, 0x96, 0xf3, 0x4c, 0x25, 0x91, 0x8a, 0x94, 0xa8, 0x10, 0x39, 0x8b, 0x48, 0x86, 0x22, 0x39, 0x21, 0xe8, 0x83, 0x10, 0x95, 0x52, 0xcc, 0x11, 0x67, 0x7f, 0xb8, 0xde, 0xf9, 0x16, 0xdd, 0xcb, 0x55, 0xaf, 0xf5, 0x28, 0x4b, 0x9f, 0xdd, 0x05, 0x1f, 0xf7, 0x9e, 0xb3, 0xf7, 0xdd, 0x7b, 0x9f, 0xef, 0xac, 0xf5, 0xad, 0xb5, 0xcf, 0xb9, 0x72, 0x0e, 0x0e, 0x0e, 0x72, 0x02, 0x0c, 0x04, 0x54, 0x09, 0x58, 0x12, 0x30, 0xf7, 0x9b, 0x62, 0x51, 0xc0, 0x98, 0x00, 0x1f, 0x01, 0x8a, 0x20, 0xe5, 0xba, 0x80, 0x4e, 0x01, 0xeb, 0x02, 0x48, 0x06, 0x87, 0x7f, 0x04, 0x24, 0x82, 0x98, 0x66, 0x19, 0x19, 0x87, 0x30, 0x0d, 0x62, 0x36, 0x65, 0x44, 0x1c, 0xc2, 0x26, 0x88, 0x59, 0x96, 0x11, 0x71, 0x08, 0x9f, 0x41, 0xcc, 0x67, 0x19, 0x11, 0x87, 0xb0, 0x00, 0x62, 0x16, 0x64, 0x44, 0x1c, 0x23, 0x31, 0xd6, 0xd6, 0xd6, 0x14, 0x14, 0x14, 0x44, 0x6f, 0xdf, 0xbe, 0xa5, 0xe1, 0xe1, 0x61, 0x7a, 0xff, 0xfe, 0x3d, 0x7f, 0x3e, 0x7b, 0xf6, 0x8c, 0xbc, 0xbc, 0xbc, 0xc8, 0xc6, 0xc6, 0x86, 0xbf, 0x8f, 0x8c, 0x8c, 0x88, 0xdb, 0xba, 0xbb, 0xbb, 0xc9, 0xcf, 0xcf, 0x8f, 0xdb, 0xce, 0x24, 0x31, 0x37, 0x6f, 0xde, 0xa4, 0x3b, 0x77, 0xee, 0xd0, 0xdc, 0xdc, 0x1c, 0x49, 0xb3, 0x37, 0x6f, 0xde, 0xd0, 0x8b, 0x17, 0x2f, 0xa4, 0xb6, 0x4d, 0x4d, 0x4d, 0x91, 0xbb, 0xbb, 0x3b, 0xd9, 0xd9, 0xd9, 0x9d, 0x3d, 0x62, 0xe0, 0x2d, 0x3d, 0x3d, 0x3d, 0xb4, 0xbc, 0xbc, 0x4c, 0xde, 0xde, 0xde, 0x74, 0xed, 0xda, 0x35, 0x32, 0x30, 0x30, 0x20, 0x6d, 0x6d, 0x6d, 0x4a, 0x4d, 0x4d, 0xa5, 0xb5, 0xb5, 0x35, 0x5a, 0x5f, 0x5f, 0xa7, 0x27, 0x4f, 0x9e, 0x90, 0x96, 0x96, 0x16, 0xb7, 0xa1, 0x4f, 0x40, 0x40, 0x00, 0xad, 0xac, 0xac, 0x50, 0x6c, 0x6c, 0x2c, 0xd9, 0xda, 0xda, 0x9e, 0x2d, 0x62, 0xe0, 0x2d, 0xf7, 0xef, 0xdf, 0xa7, 0x85, 0x85, 0x05, 0xaa, 0xad, 0xad, 0x25, 0x35, 0x35, 0x35, 0x52, 0x51, 0x51, 0x21, 0x13, 0x13, 0x13, 0x3a, 0x7f, 0xfe, 0x3c, 0xd9, 0xdb, 0xdb, 0xd3, 0xe0, 0xe0, 0x20, 0x7b, 0x47, 0x65, 0x65, 0x25, 0xe9, 0xe8, 0xe8, 0x70, 0x1f, 0x39, 0x39, 0x39, 0xba, 0x71, 0xe3, 0x06, 0x2d, 0x2e, 0x2e, 0x52, 0x72, 0x72, 0x32, 0x87, 0x13, 0xbc, 0x26, 0x2a, 0x2a, 0x8a, 0xda, 0xda, 0xda, 0xc4, 0x21, 0x87, 0xcf, 0x9a, 0x9a, 0x1a, 0x9e, 0x0b, 0xed, 0xce, 0xce, 0xce, 0xf4, 0xea, 0xd5, 0x2b, 0x71, 0xb8, 0xa2, 0xbd, 0xb9, 0xb9, 0x99, 0x3c, 0x3d, 0x3d, 0xc9, 0xc9, 0xc9, 0x89, 0xb2, 0xb2, 0xb2, 0x78, 0xbe, 0x77, 0xef, 0xde, 0x51, 0x60, 0x60, 0x20, 0x15, 0x15, 0x15, 0xd1, 0xd8, 0xd8, 0x18, 0xb5, 0xb4, 0xb4, 0x50, 0x7c, 0x7c, 0x3c, 0xaf, 0xf7, 0x97, 0x10, 0x63, 0x65, 0x65, 0x45, 0x49, 0x49, 0x49, 0x7c, 0x81, 0xb8, 0x38, 0x5c, 0xf0, 0xe3, 0xc7, 0x8f, 0x99, 0x88, 0x7b, 0xf7, 0xee, 0xf1, 0x71, 0x7a, 0x7a, 0x3a, 0x6d, 0x6c, 0x6c, 0xd0, 0xce, 0xce, 0x0e, 0x9f, 0x2f, 0x28, 0x28, 0xe0, 0xf3, 0x66, 0x66, 0x66, 0x62, 0x62, 0x2c, 0x2d, 0x2d, 0x29, 0x3c, 0x3c, 0x5c, 0xdc, 0xe7, 0xa0, 0xe5, 0xe4, 0xe4, 0x70, 0xff, 0xf6, 0xf6, 0x76, 0xa9, 0xed, 0x7d, 0x7d, 0x7d, 0x54, 0x58, 0x58, 0xb8, 0xef, 0xdc, 0xa7, 0x4f, 0x9f, 0x68, 0x6b, 0x6b, 0x4b, 0x7c, 0x0c, 0xef, 0x04, 0x59, 0xdf, 0xe1, 0x9d, 0x3f, 0x87, 0x98, 0x8c, 0x8c, 0x0c, 0x5a, 0x5a, 0x5a, 0xa2, 0xea, 0xea, 0x6a, 0x0e, 0xb7, 0x92, 0x92, 0x92, 0x7d, 0xc4, 0x24, 0x24, 0x24, 0x90, 0x9b, 0x9b, 0x1b, 0xcd, 0xcc, 0xcc, 0xf0, 0xb1, 0x8b, 0x8b, 0x0b, 0x87, 0x21, 0x42, 0xee, 0xea, 0xd5, 0xab, 0xec, 0x15, 0xb0, 0x8a, 0x8a, 0x0a,
		0x1a, 0x1f, 0x1f, 0xa7, 0xec, 0xec, 0x6c, 0x71, 0xb8, 0x6a, 0x68, 0x68, 0x70, 0x28, 0xee, 0xee, 0xee, 0x72, 0x1f, 0x78, 0x13, 0xda, 0xe0, 0x41, 0x18, 0x6b, 0x7e, 0x7e, 0x9e, 0x8f, 0xe1, 0x4d, 0xf8, 0x8e, 0xd0, 0xc6, 0x4d, 0x38, 0x51, 0x62, 0xca, 0xca, 0xca, 0xe8, 0xd6, 0xad, 0x5b, 0xd4, 0xd4, 0xd4, 0x44, 0xfd, 0xfd, 0xfd, 0xbc, 0xd8, 0xd1, 0xd1, 0x51, 0xbe, 0x40, 0x49, 0x62, 0x62, 0x62, 0x62, 0xe8, 0xe1, 0xc3, 0x87, 0xb4, 0xb7, 0xb7, 0x47, 0x21, 0x21, 0x21, 0xa4, 0xaa, 0xaa, 0x4a, 0xb7, 0x6f, 0xdf, 0x66, 0x0d, 0xba, 0x70, 0xe1, 0x02, 0x39, 0x3a, 0x3a, 0x52, 0x57, 0x57, 0x17, 0x87, 0xcc, 0xc4, 0xc4, 0x04, 0xd5, 0xd5, 0xd5, 0x91, 0xbf, 0xbf, 0x3f, 0x45, 0x44, 0x44, 0xb0, 0xbe, 0x21, 0x34, 0x1f, 0x3c, 0x78, 0xc0, 0x73, 0x42, 0xe4, 0x31, 0x36, 0x48, 0xeb, 0xec, 0xec, 0xa4, 0xd0, 0xd0, 0x50, 0x3e, 0xbe, 0x72, 0xe5, 0x0a,
		0xdf, 0x9c, 0xf2, 0xf2, 0x72, 0x32, 0x37, 0x37, 0x3f, 0x59, 0x62, 0x24, 0x0d, 0x6e, 0x8e, 0xfe, 0x88, 0xf7, 0x83, 0xc4, 0x40, 0x57, 0x40, 0x22, 0x4c, 0x51, 0x51, 0x91, 0xce, 0x9d, 0x3b, 0xc7, 0x9e, 0x01, 0xdd, 0xd2, 0xd4, 0xd4, 0xe4, 0xbe, 0xf9, 0xf9, 0xf9, 0x4c, 0x6a, 0x47, 0x47, 0xc7, 0xbe, 0x71, 0x1b, 0x1a, 0x1a, 0xc4, 0x7a, 0x25, 0x49, 0x8c, 0x91, 0x91, 0x11, 0x3d, 0x7f, 0xfe, 0x9c, 0x2e, 0x5e, 0xbc, 0x78, 0x7a, 0x88, 0x29, 0x2d, 0x2d, 0xa5, 0xa1, 0xa1, 0x21, 0x4a, 0x4b, 0x4b, 0xa3, 0xaa, 0xaa, 0x2a, 0x4a, 0x49, 0x49, 0xe1, 0xf0, 0x70, 0x75, 0x75, 0xfd, 0x21, 0x62, 0x10, 0x52, 0x10, 0xd5, 0x6f, 0x11, 0x23, 0x2f, 0x2f, 0xcf, 0xe7, 0x94, 0x95, 0x95, 0x69, 0x76, 0x76, 0x56, 0xdc, 0x77, 0x7b, 0x7b, 0x9b, 0x12, 0x13, 0x13, 0x79, 0xcd, 0x27, 0x42, 0x4c, 0x5e, 0x5e, 0x1e, 0xc7, 0x3c, 0xd2, 0x34, 0x0c, 0xdf, 0x11, 0x2e, 0xc8, 0x08, 0xdf, 0x22, 0x06, 0x99, 0x0c, 0x6d, 0xd0, 0x18, 0x3d, 0x3d, 0x3d, 0x52, 0x50, 0x50, 0xe0, 0xe3, 0x47, 0x8f, 0x1e, 0x71, 0xca, 0x87, 0x88, 0x43, 0xb3, 0xa0, 0x1b, 0xf0, 0x0a,
		0x75, 0x75, 0x75, 0xa9, 0x1e, 0x73, 0xf9, 0xf2, 0x65, 0x16, 0x79, 0x91, 0x98, 0x43, 0x88, 0xa1, 0x6d, 0xdf, 0x59, 0x16, 0x1c, 0x6f, 0x28, 0x21, 0x45, 0x66, 0x66, 0x66, 0xf2, 0x9d, 0xee, 0xed, 0xed, 0x3d, 0x52, 0x63, 0xa4, 0x11, 0x03, 0x4f, 0x31, 0x34, 0x34, 0x24, 0x7d, 0x7d, 0x7d, 0xd2, 0xd5, 0xd5, 0xa5, 0xe2, 0xe2, 0x62, 0x6e, 0x6f, 0x6d, 0x6d, 0xe5, 0x79, 0x94, 0x94, 0x94, 0xc8, 0xd4, 0xd4, 0xf4, 0x48, 0x62, 0x40, 0x2c, 0xbc, 0x05, 0x73, 0x1f, 0x43, 0x65, 0xfd, 0xf3, 0xb2, 0x12, 0xb2, 0x11, 0xea, 0x08, 0x2c, 0xf4, 0x20, 0x31, 0xa8, 0x35, 0x1a, 0x1b, 0x1b, 0xf7, 0x85, 0x12, 0x42, 0x51, 0xd2, 0x20, 0xcc, 0xb0, 0xbb, 0x77, 0xef, 0xf2, 0x6f, 0x91, 0xbe, 0xbf, 0xa6, 0x31, 0x22, 0x62, 0x50, 0xd7, 0x9c, 0x7a, 0x62, 0x44, 0x35, 0xc5, 0xc1, 0x3a, 0x46, 0x64, 0x70, 0x7b, 0x69, 0xc4, 0x40, 0x1b, 0x5e, 0xbe, 0x7c, 0x49, 0x9b, 0x9b, 0x9b, 0xe4, 0xeb, 0xeb, 0xfb, 0xff, 0x20, 0x06, 0x31, 0x8b, 0xa2, 0x09, 0xfb, 0x24, 0xa4, 0x5c, 0xb8, 0xb8, 0x85, 0x85, 0x05, 0x87, 0x07, 0xdc, 0x1c, 0x75, 0x48, 0x7d, 0x7d, 0x3d, 0x2f, 0xfa, 0xf5, 0xeb, 0xd7, 0xbc, 0xd1, 0x04, 0x99, 0x58, 0x3c, 0xd2, 0x2c, 0xd2, 0x6e, 0x5c, 0x5c, 0x1c, 0x4d, 0x4f, 0x4f, 0x73, 0x1f, 0x8c, 0x85, 0x74, 0xed, 0xe1, 0xe1, 0x41, 0x61, 0x61, 0x61, 0x4c, 0xc4, 0x87, 0x0f, 0x1f, 0x38, 0x14, 0x21, 0xc8, 0x10, 0x76, 0xe8, 0x8b, 0xb1, 0xb1, 0x31, 0xd7, 0x2f, 0xa8, 0xac, 0x4f, 0x25, 0x31, 0xa2, 0x6d, 0x01, 0x16, 0x8d, 0x02, 0x0a,
		0xba, 0x80, 0x85, 0x89, 0x10, 0x1d, 0x1d, 0x2d, 0xbe, 0xf3, 0xa8, 0x80, 0x25, 0xdb, 0x44, 0xb8, 0x74, 0xe9, 0x12, 0x97, 0xf7, 0xb0, 0x8f, 0x1f, 0x3f, 0xb2, 0xa6, 0x48, 0xb6, 0xa3, 0xc4, 0x87, 0x68, 0xc3, 0x6b, 0x60, 0x91, 0x91, 0x91, 0x87, 0xc6, 0x38, 0x95, 0xc4, 0xc0, 0x6b, 0x7c, 0x7c, 0x7c, 0xb8, 0xe4, 0x96, 0x66, 0xa8, 0x3d, 0x50, 0xe4, 0x7d, 0xcd, 0x10, 0x46, 0xb9, 0xb9, 0xb9, 0xb4, 0xba, 0xba, 0x2a, 0xb5, 0x1d, 0xa4, 0x60, 0x2e, 0x11, 0x81, 0xff, 0xc5, 0x90, 0x15, 0xf1, 0x58, 0xe3, 0x18, 0x36, 0xa8, 0xdf, 0x47, 0x0c, 0xdc, 0x19, 0x93, 0x23, 0x03, 0x49, 0xee, 0x4d, 0x60, 0x03, 0x03, 0x03, 0xac, 0x35, 0x78, 0x26, 0x23, 0x2a, 0xed, 0xa5, 0xd9, 0xd3, 0xa7, 0x4f, 0x79, 0x0c, 0x54, 0xb0, 0xd0, 0x23, 0x49, 0x43, 0xb5, 0x8b, 0x90, 0x43, 0x95, 0x1b, 0x1c, 0x1c, 0x4c, 0x93, 0x93, 0x93, 0x87, 0x7e, 0x8f, 0x3e, 0xd0, 0x32, 0x6c, 0x3b, 0x44, 0x25, 0x02, 0xb6, 0x0e, 0x18, 0x13, 0xeb, 0x93, 0x3d, 0xc1, 0x93, 0x3d, 0xda, 0xfc, 0xf5, 0xc4, 0xfc, 0xd0, 0xc3, 0x70, 0x6c, 0xf8, 0x44, 0x38, 0x6b, 0x6f, 0x09, 0x64, 0xef, 0x95, 0x8e, 0x78, 0xaf, 0x34, 0x2d, 0x23, 0x42, 0xfa, 0x9b, 0xc8, 0xbf, 0x64, 0xe4, 0xec, 0xc3, 0x96, 0x80, 0xbf, 0x41, 0xcc, 0x1f, 0x02, 0x92, 0xbe, 0xbc, 0x91, 0x9c, 0xff, 0x8d, 0xff, 0xed, 0x30, 0xff, 0x05, 0xc5, 0x02, 0xfe, 0xfc, 0x17, 0x68, 0xc0, 0x6a, 0xc0, 0x8e, 0xfb, 0x84, 0xfa, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}