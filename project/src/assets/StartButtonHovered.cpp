/****************************************************************************************/
/* StartButtonHovered.cpp                                                               */
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

#include "assets/StartButtonHovered.h"

#include <vector>

std::pair<std::string, std::string> Minesweeper::get_raw_start_button_hovered()
{
	std::pair<std::string, std::string> result = std::make_pair("StartButtonHovered", "");

	std::vector<short> raw_data {
		
		0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a,
		0x1a, 0x0a,
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x02, 0xad, 0x00, 0x00, 0x00, 0x3f, 0x08, 0x02, 0x00, 0x00, 0x00, 0x45, 0x0f, 0x66, 0x9d, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 0x42, 0x01, 0xd9, 0xc9, 0x2c, 0x7f, 0x00, 0x00, 0x00, 0x20, 0x63, 0x48, 0x52, 0x4d, 0x00, 0x00, 0x7a, 0x26, 0x00, 0x00, 0x80, 0x84, 0x00, 0x00, 0xfa, 0x00, 0x00, 0x00, 0x80, 0xe8, 0x00, 0x00, 0x75, 0x30, 0x00, 0x00, 0xea, 0x60, 0x00, 0x00, 0x3a, 0x98, 0x00, 0x00, 0x17, 0x70, 0x9c, 0xba, 0x51, 0x3c, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x13, 0x00, 0x00, 0x0b, 0x13, 0x01, 0x00, 0x9a, 0x9c, 0x18, 0x00, 0x00, 0x07, 0x38, 0x49, 0x44, 0x41, 0x54, 0x78, 0xda, 0xed, 0xdd, 0xff, 0x6b, 0x1b, 0x75, 0x1c, 0xc7, 0xf1, 0xfe, 0xbe, 0xdf, 0xf7, 0x07, 0xec, 0x0f, 0xe8, 0x2f, 0x93, 0xe9, 0xa2, 0xb8, 0x39, 0x65, 0x45, 0x9c, 0x1b, 0xc3, 0x45, 0xd6, 0x62, 0x4a, 0x21, 0xd4, 0x75, 0xfd, 0x65, 0xa6, 0xd4, 0x82, 0xd0, 0x8d, 0x5a, 0x18, 0x73, 0x65, 0x65, 0xc2, 0xc6, 0x4a, 0x14, 0xf1, 0x27, 0x69, 0x05, 0x65, 0x6c, 0x60, 0x70, 0x68, 0x50, 0x06, 0xa2, 0x01, 0x65, 0x5f, 0x90, 0x90, 0x6e, 0x24, 0x6b, 0xd3, 0x6e, 0xa5, 0x63, 0x56, 0x86, 0xac, 0xcc, 0x4d, 0x7d, 0xfb, 0x21, 0x9f, 0xeb, 0xe5, 0x2e, 0xdf, 0xee, 0x72, 0x97, 0xeb, 0xf2, 0xe5, 0xf9, 0xe0, 0x7e, 0x28, 0xd9, 0xe7, 0x3e, 0xfb, 0xdc, 0x91, 0xe3, 0xfd, 0xba, 0xcb, 0xdd, 0xe7, 0xba, 0x04, 0x00, 0x00, 0x74, 0xaa, 0x2e, 0x76, 0x01, 0x00, 0x00, 0xe4, 0x00, 0x00, 0x00, 0xd0, 0xc1, 0x39, 0xe0, 0x39, 0x00, 0x00, 0xd0, 0x19, 0xc8, 0x01, 0x00, 0x00, 0x90, 0x03, 0xc8, 0x01, 0x00, 0x00, 0x90, 0x03, 0xc8, 0x01, 0x00, 0x00, 0x90, 0x03, 0x00, 0x00, 0x00, 0x39, 0x00, 0x00, 0x00, 0x90, 0x03, 0x00, 0x00, 0x00, 0x39, 0x00, 0x00, 0x00, 0x90, 0x03, 0x00, 0x00, 0x00, 0x39, 0x00, 0xe8, 0x34, 0xe1, 0x70, 0x78, 0x6e, 0x6e, 0x2e, 0x93, 0xc9, 0xe4, 0x72, 0xb9, 0x8b, 0x17, 0x2f, 0x46, 0x22, 0x11, 0xf6, 0x09, 0x00, 0x72, 0x00, 0xd0, 0x11, 0x26, 0x27, 0x27, 0x9f, 0x3e, 0x7d, 0x5a, 0x32, 0x19, 0xe7, 0xc2, 0xc2, 0xc2, 0xd0, 0xd0, 0x10, 0x3b, 0x07, 0x00, 0x39, 0x00, 0x68, 0x67, 0xa1, 0x50, 0xe8, 0xc9, 0x93, 0x27, 0xd5, 0xa6, 0xe6, 0x4e, 0xa7, 0xd3, 0x5c, 0x1b, 0x00, 0x40, 0x0e, 0x00, 0xda, 0xd6, 0xf4, 0xf4, 0xb4, 0x71, 0x90, 0xfc, 0x2e, 0xd2, 0x27, 0x72, 0x48, 0xe4, 0x0b, 0x91, 0x35, 0x5b, 0x1a, 0x38, 0x7b, 0xf6, 0x2c, 0x3b, 0x0a,
		0x00, 0x39, 0x00, 0x68, 0x43, 0xc9, 0x64, 0xd2, 0x38, 0x48, 0xde, 0x17, 0xd9, 0xbe, 0xb1, 0xf4, 0x8b, 0x7c, 0x23, 0xf2, 0x77, 0x31, 0x0a,
		0xac, 0xad, 0xad, 0x8d, 0x8d, 0x8d, 0xb1, 0xbb, 0x00, 0x90, 0x03, 0x80, 0xb6, 0x32, 0x3f, 0x3f, 0x6f, 0x1c, 0x24, 0xbd, 0x96, 0x1c, 0xa0, 0x97, 0x11, 0x91, 0x9f, 0x6d, 0x17, 0x06, 0xee, 0xdc, 0xb9, 0x73, 0xe4, 0xc8, 0x11, 0x76, 0x1a, 0x00, 0x72, 0x00, 0xd0, 0x26, 0xb2, 0xd9, 0xac, 0x71, 0x90, 0x84, 0xcb, 0x72, 0x80, 0x5a, 0x76, 0x8b, 0x7c, 0x28, 0xb2, 0xc0, 0x4d, 0x03, 0x00, 0xc8, 0x01, 0x40, 0x3b, 0xca, 0xe5, 0x72, 0xc6, 0x41, 0x72, 0xa8, 0x52, 0x0e, 0xd0, 0xcb, 0xab, 0x22, 0x9f, 0x8b, 0xfc, 0x69, 0x4b, 0x03, 0xa7, 0x4f, 0x9f, 0x66, 0xef, 0x01, 0x20, 0x07, 0x00, 0xad, 0x2d, 0x9f, 0xcf, 0x1b, 0x07, 0xc9, 0xc1, 0xea, 0x39, 0x40, 0x2f, 0xef, 0x88, 0x7c, 0x67, 0xbb, 0x69, 0x60, 0x75, 0x75, 0x35, 0x16, 0x8b, 0x6d, 0xda, 0x50, 0xc7, 0xc7, 0xc7, 0xaf, 0x5d, 0xbb, 0x56, 0xf1, 0xb9, 0x06, 0xf5, 0xb9, 0xfa, 0x57, 0xc7, 0x66, 0xd5, 0x56, 0xa9, 0xb8, 0xa2, 0x63, 0x83, 0x67, 0x35, 0x0c, 0x00, 0xe4, 0x00, 0xa0, 0x61, 0x96, 0x96, 0x96, 0x8c, 0x83, 0xe4, 0x80, 0x53, 0x0e, 0xd0, 0xcb, 0xa8, 0xc8, 0x6f, 0xb6, 0x4a, 0x96, 0xc9, 0x64, 0x06, 0x06, 0x06, 0x82, 0x1e, 0x67, 0x22, 0x91, 0x70, 0xac, 0xa9, 0xaa, 0x5e, 0x16, 0x1f, 0x7f, 0x70, 0xc7, 0x2c, 0xb1, 0xd5, 0xfa, 0x57, 0x1d, 0xea, 0x06, 0xee, 0x7b, 0x0e, 0x74, 0x18, 0x00, 0xc8, 0x01, 0x40, 0x23, 0x2d, 0x2f, 0x2f, 0x1b, 0x07, 0xc9, 0x7e, 0x77, 0x39, 0x40, 0xff, 0x4c, 0x70, 0x4a, 0xe4, 0xae, 0xad, 0x50, 0xdd, 0xb8, 0x71, 0xa3, 0xb7, 0xb7, 0x37, 0xb8, 0x2b, 0x01, 0x6e, 0xaa, 0xa9, 0x9b, 0xf3, 0xef, 0xf2, 0x55, 0x1c, 0xfb, 0x57, 0xff, 0x1a, 0x0a,
		0x85, 0xea, 0xea, 0x33, 0xa0, 0x61, 0xf0, 0x75, 0x05, 0xc8, 0x01, 0x40, 0x83, 0xdd, 0xbd, 0xbb, 0x51, 0xcf, 0xdf, 0x74, 0x9d, 0x03, 0xf4, 0xf2, 0x86, 0xc8, 0x97, 0x22, 0xeb, 0xc5, 0x42, 0xf5, 0xe8, 0xd1, 0xa3, 0x20, 0x6a, 0x95, 0xf5, 0xdc, 0x3a, 0x1a, 0x8d, 0x76, 0x55, 0x52, 0x52, 0x32, 0xcf, 0x9f, 0x3f, 0xdf, 0xe5, 0xc4, 0x6c, 0x6c, 0x3d, 0x05, 0xb7, 0xf6, 0xaf, 0x3a, 0xb1, 0xd6, 0x60, 0x37, 0x3d, 0x6f, 0xc2, 0x30, 0xf8, 0xc6, 0x02, 0xe4, 0x00, 0xa0, 0x39, 0x72, 0x80, 0x5e, 0x06, 0x45, 0x7e, 0x12, 0xf9, 0xb7, 0x58, 0xfc, 0xb2, 0xd9, 0xec, 0xe0, 0xe0, 0x60, 0xa3, 0x86, 0x57, 0x72, 0x22, 0x1e, 0x44, 0x0e, 0xa8, 0xd6, 0xbf, 0xb5, 0x00, 0xbb, 0xec, 0x39, 0xe8, 0x61, 0xe8, 0xcb, 0x06, 0x00, 0xc8, 0x01, 0x40, 0xd3, 0xe4, 0x00, 0xb5, 0x3c, 0x2f, 0x32, 0x29, 0x32, 0x6f, 0xab, 0x64, 0x37, 0x6f, 0xde, 0xec, 0xeb, 0xeb, 0xf3, 0x3f, 0xbc, 0xe1, 0xe1, 0xe1, 0xf2, 0x9a, 0xaa, 0xca, 0xa4, 0xf9, 0x1f, 0x75, 0x77, 0x77, 0xfb, 0x2c, 0xed, 0x9e, 0x13, 0x46, 0x03, 0x87, 0x61, 0xfe, 0x94, 0xe0, 0x38, 0x0c, 0xbe, 0xb1, 0x00, 0x39, 0x00, 0x68, 0xb2, 0x1c, 0xa0, 0x97, 0x7d, 0x22, 0x9f, 0x88, 0x3c, 0xb4, 0xfd, 0x4c, 0x70, 0xfc, 0xf8, 0xf1, 0xa0, 0x73, 0x40, 0x38, 0x1c, 0xee, 0xde, 0xe0, 0x2d, 0x07, 0xcc, 0xcf, 0xcf, 0xab, 0xcf, 0x7b, 0x7a, 0x7a, 0x54, 0x83, 0xad, 0x5b, 0xb7, 0x9a, 0xbd, 0x6d, 0xd9, 0xb2, 0x45, 0xaf, 0x62, 0x5d, 0x2b, 0xa0, 0x1c, 0x70, 0xee, 0xdc, 0x39, 0x72, 0x00, 0x40, 0x0e, 0x00, 0x9e, 0x81, 0x7b, 0xf7, 0xee, 0x35, 0x26, 0x07, 0xe8, 0xa5, 0x57, 0xe4, 0x7b, 0x91, 0x7f, 0x8a, 0x15, 0x6e, 0x71, 0x71, 0xf1, 0xe8, 0xd1, 0xa3, 0xc1, 0xe5, 0x80, 0x72, 0xf1, 0x78, 0xdc, 0x7a, 0xa7, 0x5e, 0x8d, 0x6b, 0xec, 0x1e, 0x4a, 0x7b, 0x5d, 0x8d, 0x5d, 0x0e, 0x63, 0x7c, 0x7c, 0x9c, 0x1c, 0x00, 0x90, 0x03, 0x80, 0xb6, 0xc8, 0x01, 0x7a, 0xf9, 0xa0, 0xf4, 0x67, 0x82, 0xa9, 0xa9, 0x29, 0x6f, 0xc3, 0x8b, 0x44, 0x22, 0xba, 0x87, 0xd9, 0xd9, 0x59, 0x55, 0x6b, 0xd5, 0xf9, 0xba, 0x2a, 0x8a, 0xea, 0xdc, 0x5d, 0x95, 0xd2, 0xe2, 0x8c, 0xc8, 0x16, 0x0f, 0x1e, 0x3c, 0xd8, 0xbb, 0x77, 0xaf, 0x5a, 0xb1, 0x62, 0x65, 0x35, 0x0b, 0xf0, 0x70, 0x41, 0xd0, 0x39, 0xc0, 0xcd, 0x30, 0xf4, 0x66, 0x92, 0x03, 0x00, 0x72, 0x00, 0xd0, 0x46, 0x39, 0x40, 0x2d, 0xaf, 0x89, 0x7c, 0x2a, 0xf2, 0x47, 0xb1, 0x42, 0xf7, 0xf7, 0xf7, 0x7b, 0x1b, 0xe1, 0xe3, 0xc7, 0x8f, 0x1d, 0xcf, 0xaa, 0xef, 0xdf, 0xbf, 0x9f, 0x4a, 0xa5, 0xe2, 0xf1, 0xb8, 0x0e, 0x01, 0xe4, 0x00, 0x80, 0x1c, 0x40, 0x0e, 0x00, 0x9e, 0x69, 0x0e, 0xd0, 0x8b, 0x3a, 0x99, 0xff, 0xd5, 0xe8, 0xfe, 0xf2, 0xe5, 0xcb, 0xde, 0x46, 0x38, 0x31, 0x31, 0x61, 0x46, 0x01, 0x55, 0x41, 0x55, 0xa5, 0xd4, 0x45, 0xb7, 0xa7, 0xa7, 0x47, 0xfd, 0x6d, 0xbe, 0x2f, 0x31, 0x91, 0x48, 0x58, 0xd7, 0xda, 0x84, 0x1c, 0xa0, 0x1a, 0x44, 0x37, 0xe8, 0x0b, 0x15, 0xfa, 0x6f, 0xeb, 0xbd, 0xfd, 0x2e, 0x73, 0x80, 0x75, 0x30, 0xe6, 0x06, 0x6a, 0x7a, 0x33, 0x79, 0x5e, 0x00, 0x20, 0x07, 0x00, 0x01, 0xe7, 0x80, 0x7d, 0x01, 0xe4, 0x80, 0xed, 0x85, 0xe9, 0x8a, 0x0b, 0xf2, 0xf9, 0xbc, 0xe7, 0x41, 0xaa, 0xb3, 0x7c, 0x37, 0xf7, 0xdc, 0x6d, 0xf2, 0xf5, 0x80, 0xda, 0x0f, 0x17, 0xe8, 0x67, 0xfd, 0x5d, 0xe6, 0x80, 0x1a, 0x8f, 0x47, 0x32, 0x7f, 0x00, 0x40, 0x0e, 0x00, 0x5a, 0x39, 0x07, 0xbc, 0x5e, 0x7c, 0x19, 0x81, 0x9f, 0x71, 0x5a, 0x67, 0x13, 0xd2, 0x27, 0xcd, 0xe6, 0xbd, 0x02, 0xd6, 0xe2, 0xed, 0xf3, 0xfe, 0x80, 0xf2, 0x53, 0x7c, 0xc7, 0xeb, 0x01, 0x15, 0x9b, 0xb9, 0x1f, 0x46, 0xc5, 0x0d, 0xac, 0xd8, 0xb8, 0xe4, 0x82, 0x07, 0x00, 0x72, 0x00, 0xd0, 0xd0, 0x1c, 0x10, 0xc4, 0xef, 0x02, 0x6f, 0x89, 0xfc, 0x60, 0x74, 0x7f, 0xe5, 0xca, 0x15, 0x3f, 0xd7, 0x03, 0xd4, 0xb9, 0x7e, 0x2a, 0x95, 0xb2, 0x9e, 0x34, 0x57, 0x7b, 0x54, 0x4f, 0xb5, 0xf4, 0x9c, 0x03, 0x1c, 0x4f, 0xf4, 0xcb, 0x2f, 0x1e, 0xf8, 0x1c, 0x86, 0x75, 0x33, 0xeb, 0x6a, 0x0c, 0x80, 0x1c, 0x00, 0x34, 0x71, 0x0e, 0x78, 0x41, 0x64, 0x4a, 0x24, 0x5f, 0xac, 0x8b, 0x9e, 0x27, 0x19, 0xb4, 0xde, 0x1f, 0x60, 0x35, 0x3b, 0x3b, 0xab, 0x6a, 0xe4, 0xb6, 0x6d, 0xdb, 0xf4, 0xa9, 0xb9, 0x39, 0x7f, 0x80, 0xcb, 0x1f, 0xe6, 0x2b, 0xe6, 0x00, 0xfd, 0x24, 0x82, 0xa6, 0x7b, 0x76, 0xcc, 0x01, 0x3e, 0x87, 0x61, 0xdd, 0x52, 0xf3, 0xc2, 0x46, 0x32, 0x99, 0x34, 0x87, 0x61, 0x3e, 0x16, 0xb1, 0x67, 0xcf, 0x1e, 0xbe, 0xae, 0x00, 0x39, 0x00, 0x68, 0x85, 0x1c, 0xf0, 0xae, 0xc8, 0x2f, 0x22, 0xff, 0x15, 0x6b, 0xf6, 0xcc, 0xcc, 0x8c, 0xe7, 0x11, 0x56, 0x0c, 0x01, 0xfe, 0x6f, 0xd4, 0x6f, 0xaa, 0xe7, 0x05, 0xb4, 0x70, 0x38, 0x5c, 0x6d, 0x33, 0xd5, 0x4e, 0xe0, 0xbb, 0x0a,
		0x90, 0x03, 0x80, 0xa6, 0xcf, 0x01, 0xaa, 0x93, 0x39, 0x55, 0xb5, 0x6c, 0x0f, 0xf4, 0x8f, 0x8e, 0x8e, 0x7a, 0x1e, 0x5e, 0xc9, 0xfc, 0x01, 0xda, 0xc8, 0xc8, 0x48, 0x5b, 0xe6, 0x80, 0x93, 0x27, 0x4f, 0xea, 0xcf, 0xd5, 0x06, 0x9a, 0x1b, 0xab, 0x36, 0x5c, 0x7f, 0xa8, 0x76, 0x05, 0x5f, 0x57, 0x80, 0x1c, 0x00, 0x34, 0x58, 0xc3, 0xe6, 0x15, 0x7e, 0x45, 0xe4, 0xa3, 0xd2, 0x97, 0x11, 0x5f, 0xbf, 0x7e, 0xfd, 0xf0, 0xe1, 0xc3, 0x7e, 0x86, 0xe7, 0xad, 0x5a, 0xb7, 0x68, 0x0e, 0xe0, 0xfe, 0x00, 0x80, 0x1c, 0x00, 0xb4, 0x66, 0x0e, 0x88, 0x15, 0xe7, 0x09, 0xd0, 0xd2, 0xe9, 0xb4, 0xe7, 0x89, 0x83, 0xac, 0x3c, 0xbc, 0x6f, 0xd0, 0xcf, 0xfd, 0x01, 0xe4, 0x00, 0x80, 0x1c, 0x00, 0x90, 0x03, 0xea, 0x59, 0xc2, 0x22, 0xdf, 0x8a, 0xac, 0x17, 0xcb, 0xf0, 0xea, 0xea, 0x6a, 0x2c, 0x16, 0x6b, 0xe0, 0x08, 0xab, 0x3d, 0x50, 0xe7, 0xf3, 0xc1, 0x7d, 0x72, 0x00, 0x40, 0x0e, 0x00, 0xe0, 0x23, 0x07, 0xec, 0x16, 0x99, 0xb1, 0xcd, 0x1c, 0xec, 0xe7, 0x3d, 0x02, 0xb5, 0xa9, 0xd2, 0x2e, 0x2e, 0xe8, 0x77, 0xf6, 0xe8, 0x55, 0x6a, 0xbf, 0x8b, 0x28, 0x54, 0x20, 0x41, 0xd2, 0x97, 0x25, 0x1c, 0x87, 0x61, 0xdd, 0xcc, 0xba, 0x1a, 0x03, 0x20, 0x07, 0x00, 0x0d, 0xb0, 0xbc, 0xbc, 0x6c, 0x1c, 0x24, 0xfb, 0x5d, 0x27, 0x80, 0x97, 0x0a,
		0x6f, 0x12, 0xca, 0xd8, 0xaa, 0x54, 0x26, 0x93, 0x19, 0x18, 0x18, 0x08, 0x6e, 0x9c, 0x89, 0x44, 0xc2, 0xb1, 0xf4, 0x96, 0x4c, 0xb7, 0x57, 0x6d, 0x95, 0xe9, 0xe9, 0xe9, 0xf2, 0x2b, 0x0d, 0x25, 0x2f, 0x2b, 0x72, 0x5f, 0xef, 0xab, 0x35, 0x36, 0x07, 0xe3, 0x38, 0x8c, 0xba, 0xc6, 0x0c, 0x80, 0x1c, 0x00, 0x34, 0xd2, 0xd2, 0xd2, 0x92, 0x71, 0x90, 0x1c, 0x70, 0x17, 0x02, 0x86, 0x44, 0x7e, 0xb4, 0x95, 0x28, 0x9f, 0x6f, 0x16, 0xae, 0xeb, 0xaa, 0x80, 0xf5, 0x4d, 0xbe, 0xd5, 0xae, 0x04, 0xd4, 0x58, 0xa5, 0xbc, 0x59, 0xc5, 0x06, 0x7a, 0xda, 0xa2, 0xf2, 0xcf, 0xeb, 0x6a, 0x5c, 0xd7, 0x30, 0x3c, 0x37, 0x06, 0x40, 0x0e, 0x00, 0x7c, 0xc9, 0xe7, 0x37, 0xe6, 0xfa, 0x39, 0xe8, 0x94, 0x00, 0x54, 0x50, 0xf8, 0x5a, 0xe4, 0x61, 0xb1, 0xfa, 0xae, 0xaf, 0xaf, 0x9f, 0x38, 0x71, 0x82, 0x7d, 0x08, 0x80, 0x1c, 0x00, 0xb4, 0xaa, 0x5c, 0x2e, 0x67, 0x1c, 0x24, 0x87, 0xaa, 0x27, 0x80, 0x97, 0x45, 0x3e, 0x16, 0x59, 0xb1, 0x9d, 0x82, 0x5f, 0xb8, 0x70, 0x61, 0xc7, 0x8e, 0x1d, 0xec, 0x40, 0x00, 0xe4, 0x00, 0xa0, 0x85, 0x65, 0xb3, 0x59, 0xe3, 0x20, 0x09, 0x57, 0x4a, 0x00, 0x2f, 0x8a, 0x8c, 0x89, 0xa4, 0x6d, 0x09, 0x40, 0xad, 0xe2, 0x79, 0x92, 0x60, 0x00, 0x20, 0x07, 0x00, 0x4d, 0xe4, 0xd6, 0xad, 0x5b, 0xc6, 0x41, 0xd2, 0x5b, 0xe9, 0x56, 0x80, 0xa4, 0x2d, 0x01, 0xac, 0xac, 0xac, 0x1c, 0x3b, 0x76, 0x8c, 0x9d, 0x06, 0x80, 0x1c, 0x00, 0xb4, 0x89, 0xab, 0x57, 0xaf, 0x1a, 0x07, 0xc9, 0x7b, 0x96, 0x04, 0xf0, 0xb6, 0xc8, 0x57, 0x22, 0x7f, 0xd9, 0xe6, 0xb7, 0x9f, 0x98, 0x98, 0x60, 0x77, 0x01, 0x20, 0x07, 0x00, 0x6d, 0xc5, 0x9c, 0xbb, 0x46, 0x52, 0x85, 0x5b, 0x05, 0xd5, 0xf2, 0x99, 0x88, 0xfd, 0x51, 0xb8, 0x78, 0x3c, 0xbe, 0x73, 0xe7, 0x4e, 0xf6, 0x15, 0x00, 0x72, 0x00, 0xd0, 0x6e, 0x76, 0xed, 0xda, 0x55, 0xe3, 0xe1, 0xf8, 0xdb, 0xb7, 0x6f, 0x47, 0xa3, 0x51, 0xf6, 0x12, 0x00, 0x72, 0x00, 0xd0, 0xb6, 0xce, 0x9c, 0x39, 0x53, 0x9e, 0x00, 0xf2, 0xf9, 0x3c, 0x13, 0xd9, 0x02, 0x20, 0x07, 0x00, 0x1d, 0x21, 0x12, 0x89, 0x5c, 0xba, 0x74, 0x69, 0xb1, 0x40, 0xfd, 0xc1, 0xe3, 0x00, 0x00, 0xc8, 0x01, 0x00, 0x00, 0x80, 0x1c, 0x00, 0x00, 0x00, 0xc8, 0x01, 0x00, 0x00, 0x80, 0x1c, 0x00, 0x00, 0x00, 0xc8, 0x01, 0x00, 0x00, 0x80, 0x1c, 0x00, 0x00, 0x00, 0xc8, 0x01, 0x00, 0x00, 0x80, 0x1c, 0x00, 0x00, 0x00, 0x9a, 0x2d, 0x07, 0x00, 0x00, 0x80, 0x4e, 0x43, 0x0e, 0x00, 0x00, 0x80, 0x1c, 0x00, 0x00, 0x00, 0x3a, 0xcf, 0xff, 0x05, 0x2d, 0x18, 0x09, 0x16, 0x35, 0xaa, 0x59, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}