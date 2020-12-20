/****************************************************************************************/
/* RestartButtonNHovered.cpp                                                            */
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

#include "assets/RestartButtonNHovered.h"

#include <vector>

std::pair<std::string, std::string> Minesweeper::get_raw_restart_button_n_hovered()
{
	std::pair<std::string, std::string> result = std::make_pair("RestartButtonNHovered", "");

	std::vector<short> raw_data {
		
		0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a,
		0x1a, 0x0a,
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0xcb, 0x00, 0x00, 0x00, 0x35, 0x08, 0x02, 0x00, 0x00, 0x00, 0x60, 0x01, 0x88, 0x0d, 0x00, 0x00, 0x01, 0x85, 0x69, 0x43, 0x43, 0x50, 0x49, 0x43, 0x43, 0x20, 0x70, 0x72, 0x6f, 0x66, 0x69, 0x6c, 0x65, 0x00, 0x00, 0x28, 0x91, 0x7d, 0x91, 0x3d, 0x48, 0xc3, 0x40, 0x1c, 0xc5, 0x5f, 0x53, 0xb5, 0x22, 0x15, 0x05, 0x3b, 0x88, 0x38, 0x04, 0xa9, 0xba, 0x58, 0x10, 0x15, 0x71, 0x94, 0x2a, 0x16, 0xc1, 0x42, 0x69, 0x2b, 0xb4, 0xea, 0x60, 0x72, 0xe9, 0x87, 0xd0, 0xa4, 0x21, 0x49, 0x71, 0x71, 0x14, 0x5c, 0x0b, 0x0e, 0x7e, 0x2c, 0x56, 0x1d, 0x5c, 0x9c, 0x75, 0x75, 0x70, 0x15, 0x04, 0xc1, 0x0f, 0x10, 0x27, 0x47, 0x27, 0x45, 0x17, 0x29, 0xf1, 0x7f, 0x49, 0xa1, 0x45, 0x8c, 0x07, 0xc7, 0xfd, 0x78, 0x77, 0xef, 0x71, 0xf7, 0x0e, 0x10, 0x6a, 0x25, 0xa6, 0x9a, 0x6d, 0xe3, 0x80, 0xaa, 0x59, 0x46, 0x32, 0x16, 0x15, 0x33, 0xd9, 0x15, 0x31, 0xf0, 0x8a, 0x20, 0x3a, 0xd0, 0x8b, 0x51, 0x0c, 0x49, 0xcc, 0xd4, 0xe3, 0xa9, 0x85, 0x34, 0x3c, 0xc7, 0xd7, 0x3d, 0x7c, 0x7c, 0xbd, 0x8b, 0xf0, 0x2c, 0xef, 0x73, 0x7f, 0x8e, 0x6e, 0x25, 0x67, 0x32, 0xc0, 0x27, 0x12, 0xcf, 0x32, 0xdd, 0xb0, 0x88, 0xd7, 0x89, 0xa7, 0x37, 0x2d, 0x9d, 0xf3, 0x3e, 0x71, 0x88, 0x15, 0x25, 0x85, 0xf8, 0x9c, 0x78, 0xcc, 0xa0, 0x0b, 0x12, 0x3f, 0x72, 0x5d, 0x76, 0xf9, 0x8d, 0x73, 0xc1, 0x61, 0x81, 0x67, 0x86, 0x8c, 0x74, 0x72, 0x8e, 0x38, 0x44, 0x2c, 0x16, 0x5a, 0x58, 0x6e, 0x61, 0x56, 0x34, 0x54, 0xe2, 0x29, 0xe2, 0xb0, 0xa2, 0x6a, 0x94, 0x2f, 0x64, 0x5c, 0x56, 0x38, 0x6f, 0x71, 0x56, 0x4b, 0x15, 0xd6, 0xb8, 0x27, 0x7f, 0x61, 0x30, 0xa7, 0x2d, 0xa7, 0xb8, 0x4e, 0x73, 0x10, 0x31, 0x2c, 0x22, 0x8e, 0x04, 0x44, 0xc8, 0xa8, 0x60, 0x03, 0x25, 0x58, 0x88, 0xd0, 0xaa, 0x91, 0x62, 0x22, 0x49, 0xfb, 0x51, 0x0f, 0xff, 0x80, 0xe3, 0x4f, 0x90, 0x4b, 0x26, 0xd7, 0x06, 0x18, 0x39, 0xe6, 0x51, 0x86, 0x0a,
		0xc9, 0xf1, 0x83, 0xff, 0xc1, 0xef, 0x6e, 0xcd, 0xfc, 0xe4, 0x84, 0x9b, 0x14, 0x8c, 0x02, 0xed, 0x2f, 0xb6, 0xfd, 0x31, 0x0c, 0x04, 0x76, 0x81, 0x7a, 0xd5, 0xb6, 0xbf, 0x8f, 0x6d, 0xbb, 0x7e, 0x02, 0xf8, 0x9f, 0x81, 0x2b, 0xad, 0xe9, 0x2f, 0xd7, 0x80, 0x99, 0x4f, 0xd2, 0xab, 0x4d, 0x2d, 0x7c, 0x04, 0xf4, 0x6c, 0x03, 0x17, 0xd7, 0x4d, 0x4d, 0xde, 0x03, 0x2e, 0x77, 0x80, 0xfe, 0x27, 0x5d, 0x32, 0x24, 0x47, 0xf2, 0xd3, 0x14, 0xf2, 0x79, 0xe0, 0xfd, 0x8c, 0xbe, 0x29, 0x0b, 0xf4, 0xdd, 0x02, 0x5d, 0xab, 0x6e, 0x6f, 0x8d, 0x7d, 0x9c, 0x3e, 0x00, 0x69, 0xea, 0x6a, 0xe9, 0x06, 0x38, 0x38, 0x04, 0x46, 0x0a,
		0x94, 0xbd, 0xe6, 0xf1, 0xee, 0xce, 0xd6, 0xde, 0xfe, 0x3d, 0xd3, 0xe8, 0xef, 0x07, 0x95, 0x81, 0x72, 0xb5, 0x77, 0x38, 0x8b, 0xe0, 0x00, 0x00, 0x00, 0x06, 0x62, 0x4b, 0x47, 0x44, 0x00, 0xb3, 0x00, 0x94, 0x00, 0x97, 0x3a, 0x55, 0xdf, 0x70, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0e, 0xc2, 0x00, 0x00, 0x0e, 0xc2, 0x01, 0x15, 0x28, 0x4a, 0x80, 0x00, 0x00, 0x00, 0x07, 0x74, 0x49, 0x4d, 0x45, 0x07, 0xe4, 0x0c, 0x06, 0x13, 0x03, 0x27, 0x31, 0xdd, 0xba, 0x68, 0x00, 0x00, 0x04, 0x9f, 0x49, 0x44, 0x41, 0x54, 0x78, 0xda, 0xed, 0x9b, 0xcb, 0x2f, 0x33, 0x51, 0x18, 0x87, 0xbf, 0x0d, 0x1b, 0x89, 0xbf, 0x40, 0x22, 0xb1, 0xb0, 0x10, 0xc5, 0xce, 0xc6, 0xca, 0x46, 0xec, 0x10, 0xb7, 0xd8, 0x89, 0xf8, 0x03, 0x44, 0x08, 0x1b, 0x97, 0x08, 0x69, 0x84, 0xf9, 0x2a, 0x24, 0x96, 0x52, 0x16, 0x16, 0x94, 0x85, 0xb0, 0xb0, 0x10, 0x91, 0x56, 0xd0, 0x04, 0x55, 0xe9, 0x08, 0x09, 0x2b, 0x97, 0x94, 0x10, 0x97, 0x48, 0xdc, 0xbf, 0x37, 0xe6, 0xcb, 0xc9, 0x74, 0x6e, 0x9d, 0xb6, 0x33, 0xd3, 0x76, 0xfa, 0x7b, 0x62, 0x31, 0x97, 0x63, 0x5e, 0x73, 0xde, 0xa7, 0xe7, 0xd6, 0xe3, 0xcf, 0x1f, 0x00, 0x00, 0x00, 0x00, 0xe8, 0xe0, 0x2f, 0x00, 0x46, 0x00, 0xbd, 0x40, 0x32, 0x24, 0x43, 0xa5, 0x00, 0x18, 0x06, 0x60, 0x18, 0x00, 0x30, 0x0c, 0xc0, 0x30, 0x00, 0xc3, 0x00, 0x48, 0x5d, 0xc3, 0x38, 0xee, 0xff, 0x0f, 0x80, 0x61, 0x66, 0xe0, 0xa2, 0x1f, 0x8e, 0x73, 0x41, 0x32, 0x18, 0xa6, 0xbb, 0x49, 0x8a, 0x80, 0xae, 0x8c, 0xfd, 0x82, 0x6f, 0x11, 0x60, 0x98, 0x01, 0xc9, 0x26, 0xa5, 0x5a, 0x22, 0xd1, 0xe9, 0x16, 0x3c, 0x83, 0x61, 0xba, 0x20, 0xa5, 0x0a,
		0x0b, 0x0b, 0x53, 0xed, 0x2b, 0xd1, 0x54, 0x90, 0xbb, 0xb1, 0xb1, 0x51, 0x12, 0xab, 0xae, 0xae, 0xce, 0x36, 0xe1, 0xac, 0x33, 0x2c, 0xaa, 0x5e, 0x53, 0x53, 0x53, 0x7e, 0xbf, 0x3f, 0x1c, 0x0e, 0xbf, 0xbe, 0xbe, 0x7e, 0x7d, 0x7d, 0xd1, 0x01, 0x9d, 0xd2, 0x45, 0xf3, 0x92, 0x9d, 0x0a,
		0x2d, 0xa8, 0x3c, 0xdf, 0xa6, 0x66, 0xdd, 0xe2, 0x70, 0xc9, 0x31, 0xcc, 0xed, 0x76, 0x4b, 0x1e, 0x38, 0x32, 0x32, 0x72, 0x73, 0x73, 0xf3, 0xa3, 0x02, 0xdd, 0xa2, 0x02, 0x66, 0x24, 0x3b, 0x56, 0xc3, 0x6a, 0x6a, 0x6a, 0x60, 0x58, 0xea, 0x1a, 0x96, 0x9f, 0x9f, 0x2f, 0xfc, 0x3a, 0xcf, 0xf3, 0xa1, 0x50, 0x88, 0x3d, 0x6d, 0x7f, 0x7f, 0x9f, 0x5a, 0x2c, 0xe6, 0xd3, 0xed, 0xed, 0x6d, 0x20, 0x10, 0xf0, 0xf9, 0x7c, 0x74, 0xc0, 0x2e, 0x52, 0x01, 0x8f, 0xc7, 0x63, 0xb8, 0x64, 0xec, 0x51, 0x3f, 0xea, 0xcc, 0xce, 0xce, 0x9a, 0x2a, 0x19, 0x4b, 0xf9, 0xf1, 0xf1, 0x31, 0x85, 0x3b, 0x39, 0x39, 0xb1, 0xc6, 0x30, 0x6b, 0xc2, 0x25, 0xc7, 0xb0, 0x60, 0x30, 0xf8, 0xf9, 0xf9, 0x79, 0x76, 0x76, 0x46, 0xc7, 0xd4, 0x0f, 0x7e, 0xff, 0x42, 0x3d, 0xe3, 0xf9, 0xf9, 0x79, 0x57, 0x57, 0x97, 0x38, 0x10, 0x9d, 0xd2, 0x45, 0x96, 0xec, 0x85, 0x85, 0x85, 0x54, 0x30, 0x4c, 0x67, 0x67, 0xaa, 0xd6, 0x5a, 0xa8, 0x21, 0x49, 0xb9, 0x40, 0xac, 0x0f, 0x49, 0x30, 0x1c, 0x97, 0x8c, 0x55, 0x21, 0xe3, 0x0d, 0xdb, 0xdb, 0xdb, 0xa3, 0x36, 0x89, 0x24, 0xbb, 0xbf, 0xbf, 0x27, 0xb7, 0xe8, 0x3d, 0x2f, 0x2f, 0x2f, 0xbd, 0x5e, 0x6f, 0x51, 0x51, 0x91, 0x62, 0x5d, 0x6c, 0x6d, 0x6d, 0xb1, 0x96, 0x6c, 0x68, 0x68, 0xc8, 0x40, 0xc9, 0x24, 0x86, 0xcd, 0xcc, 0xcc, 0xc8, 0xa3, 0x1f, 0x1d, 0x1d, 0xd1, 0x2d, 0xe1, 0xf3, 0xa0, 0x9f, 0x38, 0xcc, 0x50, 0x4c, 0xb9, 0x79, 0xa8, 0x85, 0xb3, 0x5e, 0x32, 0xe3, 0x0d, 0xdb, 0xde, 0xde, 0x16, 0x37, 0x12, 0x77, 0x77, 0x77, 0x74, 0xa5, 0xb6, 0xb6, 0x56, 0xa3, 0x3a, 0x0e, 0x0e, 0x0e, 0x84, 0xc2, 0xd7, 0xd7, 0xd7, 0x69, 0x61, 0x98, 0x81, 0x29, 0x87, 0x61, 0x31, 0x1b, 0xb6, 0xb9, 0xb9, 0x29, 0x36, 0x8c, 0xfa, 0x47, 0xc5, 0x09, 0xa3, 0x18, 0x9a, 0x25, 0x50, 0x31, 0xa1, 0xbc, 0xf8, 0x6f, 0x4a, 0x96, 0x61, 0x42, 0x7a, 0xb4, 0xfb, 0x53, 0x8d, 0x92, 0x02, 0xec, 0x99, 0x8a, 0x77, 0x0b, 0x0a,
		0x0a,
		0x62, 0x0a,
		0xa7, 0xbf, 0xa3, 0xd7, 0x0e, 0x97, 0xc6, 0x86, 0x95, 0x96, 0x96, 0x0a,
		0xbf, 0xbe, 0xba, 0xba, 0x4a, 0x5d, 0xa4, 0x78, 0x14, 0x4f, 0xcd, 0x98, 0xd3, 0xe9, 0x64, 0xcf, 0x77, 0x38, 0x1c, 0xbd, 0xbd, 0xbd, 0x92, 0xd8, 0x1b, 0x1b, 0x1b, 0x42, 0xf9, 0x9d, 0x9d, 0x1d, 0x18, 0x06, 0xc3, 0xb4, 0x0c, 0x5b, 0x5a, 0x5a, 0x7a, 0x7f, 0x7f, 0xff, 0x16, 0x41, 0x92, 0xd1, 0x98, 0xcc, 0xe5, 0x72, 0x49, 0x0c, 0xeb, 0xec, 0xec, 0x64, 0x41, 0x87, 0x87, 0x87, 0xe5, 0x1d, 0xa5, 0xf5, 0x86, 0xe9, 0x2f, 0x79, 0x75, 0x75, 0xe5, 0x76, 0xbb, 0xd5, 0x06, 0x97, 0x89, 0xf7, 0x92, 0x71, 0xff, 0x61, 0xb6, 0xed, 0x25, 0x99, 0x61, 0x13, 0x13, 0x13, 0xf4, 0xce, 0x3c, 0xcf, 0x1f, 0xfe, 0x12, 0x0a,
		0x85, 0x02, 0x81, 0xc0, 0xee, 0xee, 0x2e, 0xf5, 0x9e, 0xd5, 0xd5, 0xd5, 0x62, 0xc3, 0xc4, 0xe1, 0x69, 0xa0, 0x26, 0x54, 0xe2, 0xf3, 0xf3, 0xb3, 0x49, 0x86, 0xe9, 0x6f, 0x00, 0x12, 0x74, 0x11, 0x86, 0x99, 0x62, 0x58, 0x79, 0x79, 0xb9, 0xce, 0xba, 0x53, 0x34, 0xac, 0xa2, 0xa2, 0x82, 0x8d, 0xdb, 0xd2, 0xc2, 0x30, 0x61, 0x9a, 0x9c, 0x0a,
		0x86, 0x65, 0xca, 0x6a, 0x45, 0x7b, 0x7b, 0x7b, 0x59, 0x59, 0x59, 0xdc, 0x86, 0x75, 0x77, 0x77, 0xb3, 0x25, 0xd9, 0xa4, 0xf7, 0x92, 0x1a, 0xc4, 0x3a, 0x62, 0x63, 0x0b, 0x6c, 0x1a, 0x86, 0xe9, 0x1f, 0xcc, 0x89, 0x5f, 0xa1, 0xb9, 0xb9, 0x59, 0xbf, 0x61, 0x76, 0x58, 0x71, 0x65, 0x92, 0x91, 0x40, 0xc5, 0xc5, 0xc5, 0x34, 0xb5, 0xcc, 0xcb, 0xcb, 0xcb, 0xcd, 0xcd, 0x55, 0xd4, 0x6b, 0x70, 0x70, 0x50, 0x12, 0x7b, 0x79, 0x79, 0x59, 0xa8, 0x44, 0xaa, 0x1a, 0x3b, 0x19, 0xa6, 0xa7, 0x0d, 0x8b, 0xcf, 0x30, 0x7a, 0x41, 0xb9, 0x64, 0x6a, 0x42, 0xdb, 0xc4, 0x30, 0x0d, 0x06, 0x23, 0x19, 0x1d, 0x1d, 0x95, 0x04, 0x0d, 0x87, 0xc3, 0xf2, 0xf4, 0xa4, 0xd4, 0x48, 0x5f, 0x91, 0x92, 0x92, 0x92, 0x8e, 0x8e, 0x8e, 0xe9, 0xe9, 0xe9, 0x95, 0x95, 0x15, 0xbf, 0xdf, 0x7f, 0x71, 0x71, 0xf1, 0xf8, 0xf8, 0xf8, 0xf2, 0xf2, 0x42, 0x53, 0xe3, 0x96, 0x96, 0x96, 0xa8, 0x86, 0xf5, 0xf7, 0xf7, 0xd3, 0x20, 0xf5, 0xed, 0xed, 0x8d, 0xa6, 0xdb, 0xa7, 0xa7, 0xa7, 0x5e, 0xaf, 0x77, 0x71, 0x71, 0x71, 0x7c, 0x7c, 0xbc, 0xad, 0xad, 0x2d, 0x18, 0x0c, 0x46, 0x35, 0x2c, 0xb3, 0xbe, 0x35, 0x52, 0xa3, 0xaf, 0xaf, 0x2f, 0x6a, 0x9e, 0x3c, 0x1e, 0x8f, 0x50, 0x83, 0x94, 0x1b, 0xb6, 0xae, 0x66, 0xaa, 0x61, 0xec, 0xd3, 0x9f, 0xa0, 0x61, 0x7a, 0x86, 0x50, 0x1a, 0x86, 0x25, 0xa2, 0x7e, 0xe6, 0x1a, 0x46, 0x1f, 0xc1, 0x98, 0xf4, 0xa2, 0xb9, 0x27, 0xfb, 0x6a, 0x7c, 0x7e, 0x7e, 0xde, 0x9a, 0x35, 0x7d, 0x18, 0x96, 0xc6, 0x86, 0x8d, 0x8d, 0x8d, 0xa9, 0xe9, 0x95, 0x95, 0x95, 0x25, 0x39, 0x5d, 0x5b, 0x5b, 0x63, 0x7a, 0x1d, 0x1e, 0x1e, 0x8a, 0xef, 0xb2, 0xd9, 0x80, 0x95, 0x86, 0x25, 0xb8, 0x8e, 0x6a, 0xf1, 0x38, 0x2c, 0x13, 0x0d, 0x13, 0x36, 0xe6, 0xcb, 0x0d, 0x9b, 0x9b, 0x9b, 0xa3, 0x17, 0x7e, 0x7a, 0x7a, 0xf2, 0xf9, 0x7c, 0x74, 0x3c, 0x39, 0x39, 0x49, 0x07, 0x74, 0xca, 0xaa, 0x92, 0xe7, 0xf9, 0x9c, 0x9c, 0x1c, 0x53, 0xf7, 0x56, 0xc0, 0x30, 0xbb, 0x8d, 0xc3, 0xc4, 0x86, 0x7d, 0x7c, 0x7c, 0xa8, 0x55, 0x22, 0xdd, 0x5a, 0x5f, 0x5f, 0xb7, 0x78, 0x07, 0xa2, 0xf6, 0x54, 0xdf, 0x40, 0xf4, 0x6c, 0x07, 0x32, 0x70, 0xbb, 0xb9, 0x9d, 0x77, 0x20, 0xca, 0x47, 0x63, 0x62, 0xc3, 0x9a, 0x9a, 0x9a, 0xa8, 0xd1, 0x7a, 0x78, 0x78, 0x10, 0xbb, 0x45, 0xa7, 0x74, 0xb1, 0xa1, 0xa1, 0x41, 0xbe, 0x27, 0xd6, 0x36, 0x86, 0x69, 0xa4, 0x3c, 0xc1, 0xcd, 0x61, 0x99, 0x6e, 0x18, 0x31, 0x30, 0x30, 0x90, 0x9d, 0x9d, 0x2d, 0x99, 0xdb, 0xb7, 0xb6, 0xb6, 0xf6, 0xf4, 0xf4, 0x38, 0x9d, 0xce, 0xaa, 0xaa, 0x2a, 0xc5, 0xba, 0x30, 0x4a, 0x2f, 0x0d, 0xc9, 0x84, 0x5b, 0x8a, 0x8b, 0x49, 0xc6, 0x6e, 0x09, 0x54, 0xcb, 0x3a, 0xcb, 0x77, 0xdc, 0xe1, 0x34, 0x5e, 0xd9, 0xb6, 0xff, 0x09, 0xa2, 0xb8, 0x06, 0x56, 0x59, 0x59, 0x99, 0xf4, 0xff, 0xc5, 0x00, 0xc9, 0xc5, 0xdc, 0x34, 0xeb, 0x97, 0x8c, 0x8a, 0x21, 0x19, 0x30, 0x2c, 0x4e, 0xc9, 0x38, 0x8e, 0xa3, 0x6e, 0xd1, 0xe1, 0x70, 0xc8, 0x63, 0xd5, 0xd7, 0xd7, 0x23, 0x07, 0x30, 0x0c, 0x00, 0x18, 0x06, 0x60, 0x18, 0x80, 0x61, 0x30, 0x0c, 0xc0, 0x30, 0x00, 0xc3, 0x00, 0x80, 0x61, 0x00, 0x86, 0x01, 0x18, 0x06, 0x40, 0x9c, 0x86, 0x41, 0x32, 0x60, 0xae, 0x5e, 0x00, 0x00, 0x00, 0x00, 0x88, 0xe4, 0x1f, 0xd1, 0x9c, 0xb2, 0x8b, 0xc2, 0x4c, 0x01, 0x82, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}
