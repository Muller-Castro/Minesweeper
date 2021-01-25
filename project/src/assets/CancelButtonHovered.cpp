/****************************************************************************************/
/* CancelButtonHovered.cpp                                                              */
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

#include "assets/CancelButtonHovered.h"

#include <vector>

std::pair<std::string, std::string> Minesweeper::get_raw_cancel_button_hovered()
{
	std::pair<std::string, std::string> result = std::make_pair("CancelButtonHovered", "");

	std::vector<short> raw_data {
		
		0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a,
		0x1a, 0x0a,
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x36, 0x08, 0x06, 0x00, 0x00, 0x00, 0x32, 0x3f, 0xf0, 0xc5, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 0x42, 0x01, 0xd9, 0xc9, 0x2c, 0x7f, 0x00, 0x00, 0x00, 0x20, 0x63, 0x48, 0x52, 0x4d, 0x00, 0x00, 0x7a, 0x26, 0x00, 0x00, 0x80, 0x84, 0x00, 0x00, 0xfa, 0x00, 0x00, 0x00, 0x80, 0xe8, 0x00, 0x00, 0x75, 0x30, 0x00, 0x00, 0xea, 0x60, 0x00, 0x00, 0x3a, 0x98, 0x00, 0x00, 0x17, 0x70, 0x9c, 0xba, 0x51, 0x3c, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x13, 0x00, 0x00, 0x0b, 0x13, 0x01, 0x00, 0x9a, 0x9c, 0x18, 0x00, 0x00, 0x06, 0xa4, 0x49, 0x44, 0x41, 0x54, 0x78, 0xda, 0xed, 0x9d, 0x5b, 0x48, 0x7c, 0x45, 0x1c, 0xc7, 0x37, 0x28, 0x2a, 0xec, 0x5f, 0x54, 0x60, 0x45, 0xd1, 0x3f, 0xa4, 0x1e, 0xba, 0x60, 0x96, 0x65, 0x41, 0xe8, 0x83, 0x3d, 0x78, 0x41, 0x08, 0x0c, 0x2f, 0xe4, 0x15, 0xc5, 0x6b, 0xa4, 0xa2, 0x0f, 0xe6, 0x43, 0x11, 0xde, 0x1e, 0x34, 0x12, 0x2f, 0xe4, 0x4b, 0x4a, 0x90, 0xe1, 0x4b, 0xbe, 0xb4, 0xa2, 0x82, 0x8a, 0x26, 0x16, 0x42, 0x78, 0xcd, 0x3b, 0x4a, 0x84, 0x78, 0xc5, 0x50, 0x2b, 0x73, 0xa9, 0x64, 0x9a, 0xdf, 0xe1, 0xcc, 0xfe, 0x7f, 0x7b, 0x3c, 0xe7, 0xec, 0xec, 0xee, 0xd9, 0xfd, 0xaf, 0xee, 0xef, 0x07, 0x5f, 0xfe, 0xff, 0x3d, 0x33, 0xf3, 0x9b, 0x39, 0x67, 0x3e, 0xce, 0xcc, 0x99, 0xf9, 0xe9, 0xda, 0x6c, 0xdc, 0x18, 0x63, 0xc9, 0x5c, 0x76, 0xae, 0x13, 0xae, 0x0b, 0x12, 0xc9, 0x42, 0x9d, 0xa8, 0x6c, 0x25, 0xdb, 0x10, 0x6c, 0x64, 0x64, 0x81, 0xb0, 0x64, 0x9b, 0x4a, 0x1f, 0x19, 0x59, 0x20, 0xcc, 0x6e, 0x53, 0x87, 0x3c, 0xc5, 0x62, 0x63, 0x63, 0x59, 0x4c, 0x4c, 0x0c, 0x89, 0x64, 0x99, 0x80, 0x29, 0x64, 0x27, 0x00, 0x9c, 0x43, 0x7c, 0x82, 0x0c, 0x51, 0x51, 0x51, 0x24, 0x92, 0x65, 0x02, 0xa6, 0x90, 0x39, 0x6c, 0xea, 0xc2, 0x8e, 0x80, 0x23, 0x05, 0x02, 0xb8, 0x0b, 0x02, 0x8e, 0x44, 0xc0, 0x91, 0x08, 0x38, 0x12, 0x89, 0x80, 0x23, 0x11, 0x70, 0x24, 0x12, 0x01, 0x47, 0x22, 0xe0, 0x48, 0x04, 0x9c, 0xef, 0xc0, 0x25, 0x25, 0x25, 0xb1, 0xde, 0xde, 0x5e, 0x36, 0x3f, 0x3f, 0xcf, 0x56, 0x56, 0x56, 0xd8, 0xf2, 0xf2, 0x32, 0x5b, 0x5d, 0x5d, 0x75, 0x6a, 0x6d, 0x6d, 0x8d, 0xad, 0xaf, 0xaf, 0xb3, 0xad, 0xad, 0x2d, 0x36, 0x34, 0x34, 0xc4, 0x9a, 0x9a, 0x9a, 0x74, 0xfd, 0xc4, 0xc5, 0xc5, 0xb1, 0xce, 0xce, 0x4e, 0x36, 0x3d, 0x3d, 0xcd, 0xf6, 0xf6, 0xf6, 0xd8, 0xce, 0xce, 0x8e, 0xa2, 0xdd, 0xdd, 0x5d, 0x45, 0x70, 0x6d, 0x7f, 0x7f, 0x9f, 0x1d, 0x1f, 0x1f, 0xb3, 0xd9, 0xd9, 0x59, 0xd6, 0xd3, 0xd3, 0xc3, 0x12, 0x13, 0x13, 0xa9, 0x83, 0x43, 0x09, 0xb8, 0xfa, 0xfa, 0x7a, 0x76, 0x79, 0x79, 0xe9, 0xf1, 0xe1, 0xda, 0xf6, 0xf6, 0x36, 0x2b, 0x28, 0x28, 0x70, 0xfa, 0x29, 0x2b, 0x2b, 0x53, 0x60, 0xf2, 0xd4, 0xce, 0xce, 0xce, 0x58, 0x65, 0x65, 0x25, 0x75, 0x72, 0xa8, 0x00, 0xe7, 0x0d, 0x6c, 0x18, 0xba, 0xf4, 0xf4, 0x74, 0x96, 0x95, 0x95, 0xa5, 0x8c, 0x64, 0xde, 0xda, 0xd1, 0xd1, 0x11, 0x75, 0x72, 0x28, 0x00, 0x97, 0x9b, 0x9b, 0xeb, 0xf4, 0xf8, 0x13, 0xd7, 0x3b, 0x5c, 0x6f, 0x70, 0xbd, 0xc9, 0x15, 0xad, 0xea, 0x75, 0xae, 0xd7, 0xb8, 0xa2, 0xb8, 0x5e, 0xe6, 0xfa, 0x80, 0xeb, 0x77, 0xd4, 0x92, 0xc5, 0xc5, 0x45, 0x65, 0xda, 0x15, 0xb6, 0xcb, 0x95, 0xc4, 0x75, 0x9b, 0x2b, 0x42, 0xd5, 0x73, 0xaa, 0xe0, 0xda, 0xb3, 0x5c, 0x4f, 0x40, 0xc0, 0x01, 0x00, 0x8b, 0xfc, 0xa4, 0xa4, 0xa4, 0x58, 0xf6, 0xb0, 0x52, 0x53, 0x53, 0x59, 0x77, 0x77, 0x37, 0x9b, 0x99, 0x99, 0xb9, 0x22, 0xb8, 0x1e, 0x1f, 0x1f, 0xef, 0x92, 0x1f, 0x3e, 0x6b, 0xf3, 0x6b, 0xf3, 0x69, 0x7d, 0xe2, 0x74, 0xa3, 0x34, 0xa3, 0x36, 0xc0, 0xf2, 0xa5, 0xa2, 0xa2, 0xc2, 0xb0, 0x6e, 0xa3, 0x76, 0x43, 0x3d, 0x50, 0x0e, 0xca, 0x9b, 0xdd, 0x4f, 0xd0, 0x02, 0x17, 0x1d, 0x1d, 0xed, 0xf4, 0xf8, 0x2f, 0xd7, 0xe7, 0x5c, 0x36, 0x09, 0x15, 0x73, 0xfd, 0xa7, 0x33, 0x52, 0xfd, 0xcd, 0xf5, 0xbe, 0x44, 0xf9, 0xc7, 0xb9, 0x7e, 0xf0, 0xd3, 0x08, 0xd7, 0xdf, 0xdf, 0xef, 0x76, 0x44, 0x85, 0x35, 0xa4, 0xe8, 0x24, 0xf8, 0x17, 0x3e, 0x9b, 0xe5, 0x33, 0xf2, 0xe9, 0x70, 0x38, 0x4c, 0xd3, 0xdc, 0xd9, 0xd4, 0xd4, 0x94, 0x61, 0xdd, 0x9e, 0x18, 0xbe, 0x9f, 0xa0, 0x9f, 0x52, 0x97, 0x96, 0x96, 0x5c, 0x1a, 0xdf, 0x20, 0x09, 0xdd, 0x17, 0x3a, 0x37, 0xfe, 0xb1, 0x44, 0xb9, 0x47, 0xb8, 0x86, 0x34, 0xe5, 0xac, 0x5a, 0xc3, 0xb5, 0xb6, 0xb6, 0x7a, 0x34, 0x8d, 0x43, 0xbd, 0xf0, 0x22, 0x64, 0x66, 0xee, 0xd2, 0x83, 0xc5, 0x60, 0xa4, 0xbb, 0x16, 0xc0, 0x65, 0x64, 0x64, 0x5c, 0x81, 0xae, 0x52, 0x02, 0x9c, 0x5b, 0x5c, 0x23, 0xa8, 0x4c, 0x1f, 0xd7, 0x7d, 0x6e, 0xca, 0xdc, 0xcf, 0xf5, 0xad, 0xe6, 0x41, 0x35, 0x37, 0x37, 0x5b, 0xf2, 0x80, 0xea, 0xea, 0xea, 0x5c, 0xfc, 0x56, 0x57, 0x57, 0xb3, 0xc8, 0xc8, 0xc8, 0x2b, 0xd2, 0x42, 0x87, 0xcd, 0x28, 0x9f, 0x9e, 0x4f, 0xed, 0xc8, 0x66, 0x94, 0xa6, 0xd7, 0x86, 0xb4, 0xb4, 0xb4, 0x2b, 0xbe, 0xf5, 0xf2, 0x61, 0x81, 0x7f, 0x61, 0x50, 0x5e, 0xdb, 0xce, 0xb9, 0xb9, 0xb9, 0xeb, 0xb5, 0x0f, 0x37, 0x32, 0x72, 0x07, 0x9f, 0x7f, 0xd4, 0xb5, 0x9a, 0x3b, 0xe8, 0x9e, 0xe7, 0xfa, 0x0d, 0xd6, 0x71, 0x5c, 0xe1, 0x12, 0xf9, 0xdb, 0x35, 0x0f, 0xb9, 0xad, 0xad, 0xcd, 0xb2, 0x07, 0x04, 0x0f, 0x5c, 0x58, 0x57, 0x57, 0x17, 0x4b, 0x48, 0x48, 0x60, 0x61, 0x61, 0x61, 0xce, 0x8e, 0x09, 0x0f, 0x0f, 0x67, 0x10, 0x99, 0x0f, 0x69, 0xe3, 0xe3, 0xe3, 0x2e, 0xed, 0xd8, 0xd8, 0xd8, 0x50, 0xae, 0x43, 0xba, 0x10, 0x7c, 0x86, 0xeb, 0xd8, 0x0a,
		0x0b, 0x0b, 0x5d, 0xd2, 0xcd, 0xd2, 0xb0, 0x4f, 0xa8, 0x5b, 0xb4, 0x03, 0xda, 0x14, 0x11, 0x11, 0x71, 0xc5, 0xbf, 0x28, 0x8b, 0xdb, 0x6c, 0x04, 0x1c, 0x7c, 0x16, 0xf9, 0xb1, 0x5d, 0xbb, 0x8d, 0x5f, 0x3c, 0xd2, 0xfd, 0xc5, 0x95, 0x20, 0x01, 0xd1, 0x5b, 0x5c, 0xaf, 0x48, 0xe4, 0xfb, 0x44, 0x03, 0x1b, 0xec, 0xc1, 0x59, 0xf9, 0x80, 0xb0, 0x89, 0xce, 0xc0, 0x23, 0x00, 0x06, 0x02, 0xfe, 0x8f, 0x4d, 0x0b, 0x9b, 0x2c, 0x54, 0x66, 0x69, 0xd8, 0x27, 0xae, 0x0f, 0xc3, 0x82, 0x7d, 0xe8, 0xb5, 0xd9, 0xc8, 0x6e, 0x0c, 0x70, 0x99, 0x99, 0x99, 0x6c, 0x73, 0x73, 0xd3, 0x59, 0x0b, 0xec, 0xaa, 0xbd, 0x2d, 0xb9, 0xa6, 0x33, 0xd3, 0x47, 0x5c, 0x78, 0xf3, 0x65, 0x60, 0x60, 0xc0, 0xf2, 0xb7, 0x2a, 0x6f, 0x81, 0x83, 0xe9, 0x09, 0x46, 0x1c, 0x0c, 0x8a, 0x80, 0x05, 0xae, 0xe3, 0xe9, 0x0f, 0xfb, 0x30, 0x4b, 0x23, 0xe0, 0x3c, 0x50, 0x4e, 0x4e, 0x0e, 0x3b, 0x3c, 0x3c, 0x74, 0xd6, 0xb4, 0xce, 0xf5, 0xa2, 0x0f, 0xb0, 0xa5, 0x73, 0x9d, 0xa3, 0x96, 0x2f, 0x2c, 0x2c, 0xf8, 0x65, 0xdf, 0xc8, 0x1d, 0x70, 0xd0, 0xb9, 0xd0, 0xf1, 0x20, 0xdc, 0xd1, 0x46, 0x9d, 0xe7, 0x0e, 0x5a, 0x31, 0x55, 0x0a,
		0x98, 0x64, 0x81, 0x83, 0xa9, 0x51, 0xb4, 0x03, 0x4f, 0xed, 0x21, 0x0b, 0x1c, 0xa8, 0xa4, 0xa4, 0x84, 0x9d, 0x9f, 0xdf, 0xc1, 0xe4, 0x67, 0x75, 0x0f, 0xcd, 0x53, 0xd8, 0x12, 0x34, 0x7b, 0x76, 0xb0, 0x5f, 0x07, 0xa3, 0xc2, 0xdd, 0x00, 0xce, 0xd3, 0xce, 0x93, 0x01, 0x0e, 0x97, 0x93, 0x05, 0xce, 0xc8, 0x42, 0x1a, 0x38, 0x50, 0x4d, 0x4d, 0x8d, 0xcb, 0xcd, 0x8c, 0xa8, 0x5b, 0x1a, 0xb2, 0xb0, 0xbd, 0xa0, 0xbe, 0x50, 0xe0, 0x53, 0x89, 0xec, 0xec, 0x6c, 0xbf, 0xed, 0x8c, 0x07, 0x1a, 0x38, 0x2d, 0x54, 0xda, 0xb5, 0x9f, 0xb7, 0xc0, 0x19, 0x01, 0x7d, 0xe3, 0x81, 0xeb, 0xe8, 0xe8, 0x70, 0xb9, 0x19, 0xf8, 0x14, 0xe6, 0x01, 0x70, 0x0f, 0x73, 0x7d, 0xa9, 0x79, 0x50, 0xed, 0xed, 0xed, 0x41, 0x0d, 0x1c, 0x7e, 0x2b, 0x94, 0x01, 0x4e, 0xef, 0xed, 0xd6, 0x57, 0xe0, 0xc4, 0x1b, 0x2c, 0xd6, 0x8d, 0x07, 0xae, 0xa1, 0xa1, 0xc1, 0xe5, 0x46, 0xbe, 0xe6, 0x7a, 0xc0, 0x8b, 0x29, 0xf5, 0x41, 0xae, 0x6f, 0x34, 0x0f, 0x0b, 0x82, 0x05, 0xee, 0x06, 0x70, 0xb0, 0x5e, 0x12, 0x1d, 0x88, 0xd7, 0x4e, 0xbe, 0x00, 0x87, 0x7d, 0x88, 0x6d, 0x17, 0x77, 0xc0, 0xc1, 0x1e, 0x9d, 0x48, 0xd7, 0xdb, 0x16, 0xf1, 0x65, 0x54, 0x86, 0x1f, 0x68, 0x10, 0xf4, 0x1f, 0x1c, 0x83, 0x5d, 0x0b, 0xe0, 0x6a, 0x6b, 0x6b, 0x5d, 0x6e, 0xe2, 0x7b, 0xae, 0x87, 0x7c, 0x78, 0x69, 0xb8, 0xa5, 0xf3, 0x27, 0x02, 0xa0, 0x8e, 0x60, 0x79, 0x4b, 0xf5, 0x65, 0x4a, 0x0d, 0xb6, 0x6d, 0x11, 0xad, 0x01, 0xdc, 0x41, 0x0d, 0x1c, 0x1c, 0xf5, 0xe0, 0xe8, 0x91, 0x1f, 0xb9, 0x9e, 0xb4, 0x60, 0x5b, 0xe4, 0x29, 0x35, 0x38, 0x40, 0x18, 0xd4, 0x51, 0x55, 0x55, 0x45, 0xc0, 0xf9, 0x19, 0x38, 0x30, 0x6f, 0x47, 0x3a, 0xbf, 0x03, 0x57, 0x54, 0x54, 0xc4, 0x4e, 0x4f, 0x4f, 0x9d, 0x35, 0xfc, 0x22, 0xf1, 0x66, 0x7a, 0x8f, 0x7a, 0xa6, 0xfa, 0xa1, 0x04, 0x74, 0xb7, 0x55, 0x9f, 0x38, 0x0e, 0xae, 0xb8, 0xb8, 0xd8, 0x2f, 0x27, 0x0d, 0xd0, 0xc1, 0x62, 0x9a, 0x13, 0x5b, 0x10, 0xa2, 0x93, 0xac, 0xda, 0x16, 0x71, 0x07, 0x1c, 0x4c, 0xdb, 0xe2, 0x1a, 0xf8, 0x10, 0xed, 0x80, 0x36, 0x89, 0x76, 0xe9, 0x6d, 0x8b, 0xe0, 0x36, 0x63, 0x19, 0xb5, 0x59, 0x2f, 0x2f, 0x3e, 0x95, 0xf0, 0xf6, 0x8c, 0xd5, 0xaf, 0xc0, 0x41, 0x98, 0x12, 0x8e, 0x67, 0x83, 0xb0, 0xa1, 0x57, 0x25, 0x20, 0xaa, 0x54, 0xf3, 0xc3, 0x06, 0xca, 0xbb, 0x12, 0xf9, 0xc1, 0x27, 0x3e, 0x0a,
		0x87, 0x28, 0xe0, 0xbc, 0xbc, 0x3c, 0xbf, 0x9c, 0xa5, 0x9a, 0x6d, 0x61, 0x58, 0xf5, 0x96, 0x2a, 0x73, 0x0a,
		0xa1, 0xd7, 0x06, 0xbd, 0x51, 0xcc, 0xec, 0x2d, 0xd5, 0x6c, 0x94, 0x74, 0xe7, 0x1f, 0x42, 0x98, 0x82, 0x0a,
		0x38, 0x80, 0x0d, 0x2f, 0x5e, 0xe1, 0x38, 0x3b, 0x4e, 0x02, 0x1e, 0x88, 0x79, 0xfb, 0x13, 0x47, 0x55, 0xa8, 0x67, 0xab, 0xee, 0xca, 0x41, 0x1c, 0xdc, 0xa1, 0x26, 0x1a, 0x23, 0x3f, 0x3f, 0xdf, 0x12, 0xe8, 0x06, 0x07, 0x07, 0xe9, 0xef, 0x1c, 0x59, 0x14, 0x45, 0xe2, 0x37, 0xe0, 0x30, 0x6c, 0x7f, 0x70, 0xbd, 0x27, 0x01, 0xcd, 0x4b, 0x5c, 0xbf, 0xea, 0xdc, 0xdc, 0x18, 0xd7, 0xa3, 0x12, 0xe5, 0x53, 0x60, 0x4a, 0x45, 0xe5, 0xe0, 0x38, 0xcd, 0xaa, 0xa9, 0x55, 0x16, 0x3a, 0x2b, 0xe2, 0xd0, 0xc0, 0x7c, 0x81, 0xdc, 0xaa, 0x36, 0xf8, 0x23, 0x4e, 0xce, 0x2f, 0xc0, 0xc1, 0xef, 0x24, 0x60, 0xd8, 0xb2, 0x24, 0x60, 0x81, 0xa8, 0x90, 0x69, 0xd4, 0x92, 0x83, 0x83, 0x03, 0x97, 0x9b, 0xfc, 0x8a, 0xeb, 0x5e, 0x09, 0x3f, 0x19, 0x5c, 0xa7, 0xa8, 0x9c, 0x95, 0xeb, 0x39, 0x98, 0x5e, 0xf1, 0x9a, 0x0e, 0x1b, 0x5c, 0x87, 0x74, 0x11, 0x69, 0x8b, 0xf3, 0x89, 0x34, 0xed, 0x35, 0xc8, 0xa7, 0x77, 0x1d, 0xae, 0xe9, 0xd5, 0xa7, 0xe7, 0x47, 0xdb, 0x06, 0x11, 0xa9, 0x6b, 0x96, 0x4f, 0xaf, 0xdd, 0xda, 0x36, 0xbb, 0xf3, 0x1f, 0x54, 0x6f, 0xa9, 0xf0, 0x1b, 0x56, 0xc2, 0x9a, 0xd4, 0x48, 0xdc, 0x67, 0x0c, 0xf4, 0xb4, 0x1a, 0x2e, 0xfe, 0x9d, 0xe6, 0xe6, 0x20, 0xe4, 0xb9, 0xa5, 0xa5, 0xc5, 0xe5, 0xda, 0xa7, 0x26, 0x7e, 0x84, 0x1e, 0xe3, 0xfa, 0xcc, 0x8f, 0x01, 0x84, 0xa4, 0x20, 0xdc, 0xf8, 0xc5, 0x23, 0x9c, 0x37, 0xd6, 0xd8, 0xd8, 0xe8, 0xf4, 0xd5, 0xd7, 0xd7, 0xe7, 0x93, 0x2f, 0x2b, 0x47, 0x38, 0x52, 0x10, 0x9f, 0x34, 0x0c, 0x0f, 0x0f, 0x5b, 0xb6, 0x18, 0x1d, 0x1b, 0x1b, 0xf3, 0xca, 0xd7, 0xe8, 0xe8, 0x28, 0x75, 0x72, 0x28, 0xfd, 0x22, 0x74, 0x79, 0x79, 0x39, 0x9b, 0x98, 0x98, 0x50, 0xf6, 0xe1, 0x60, 0x4d, 0xa6, 0x27, 0x08, 0x59, 0x82, 0xad, 0x13, 0xbb, 0xdd, 0xae, 0x84, 0x30, 0x19, 0xf9, 0x2a, 0x2d, 0x2d, 0x55, 0xa2, 0x87, 0x8d, 0xfc, 0x08, 0x41, 0x5d, 0x93, 0x93, 0x93, 0x4a, 0xdd, 0xd4, 0xc1, 0xf4, 0xa7, 0x1e, 0x48, 0x04, 0x1c, 0x01, 0x47, 0x22, 0xe0, 0x48, 0x04, 0x1c, 0x89, 0x44, 0xc0, 0x91, 0x08, 0x38, 0x12, 0x89, 0x80, 0x23, 0x11, 0x70, 0x24, 0x02, 0x8e, 0x80, 0x23, 0x11, 0x70, 0xa4, 0x9b, 0x0e, 0x1c, 0x7d, 0xb9, 0x1b, 0x29, 0x50, 0xc0, 0x39, 0xe8, 0xeb, 0x2b, 0x49, 0x01, 0xff, 0xfa, 0x4a, 0xfa, 0x82, 0x5e, 0xb2, 0x40, 0x99, 0x9d, 0xbe, 0x82, 0x9c, 0x2c, 0x90, 0xe6, 0xf2, 0xbd, 0xf7, 0x76, 0x75, 0x7a, 0xbd, 0x20, 0x91, 0x2c, 0xd4, 0x89, 0xca, 0x96, 0x02, 0xdb, 0xff, 0x2c, 0x1d, 0x10, 0x94, 0x6e, 0x92, 0x16, 0x6f, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}