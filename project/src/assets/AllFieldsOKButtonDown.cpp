/****************************************************************************************/
/* AllFieldsOKButtonDown.cpp                                                            */
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

#include "assets/AllFieldsOKButtonDown.h"

#include <vector>

std::pair<std::string, std::string> Minesweeper::get_raw_all_fields_ok_button_down()
{
	std::pair<std::string, std::string> result = std::make_pair("AllFieldsOKButtonDown", "");

	std::vector<short> raw_data {

		0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a,
		0x1a, 0x0a,
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x36, 0x08, 0x06, 0x00, 0x00, 0x00, 0x32, 0x3f, 0xf0, 0xc5, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 0x42, 0x01, 0xd9, 0xc9, 0x2c, 0x7f, 0x00, 0x00, 0x00, 0x20, 0x63, 0x48, 0x52, 0x4d, 0x00, 0x00, 0x7a, 0x26, 0x00, 0x00, 0x80, 0x84, 0x00, 0x00, 0xfa, 0x00, 0x00, 0x00, 0x80, 0xe8, 0x00, 0x00, 0x75, 0x30, 0x00, 0x00, 0xea, 0x60, 0x00, 0x00, 0x3a, 0x98, 0x00, 0x00, 0x17, 0x70, 0x9c, 0xba, 0x51, 0x3c, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x13, 0x00, 0x00, 0x0b, 0x13, 0x01, 0x00, 0x9a, 0x9c, 0x18, 0x00, 0x00, 0x09, 0xd3, 0x49, 0x44, 0x41, 0x54, 0x78, 0xda, 0xed, 0x9d, 0x67, 0x6c, 0x53, 0x4b, 0x16, 0xc7, 0x41, 0xd4, 0x0f, 0x7c, 0x42, 0x08, 0xbe, 0x20, 0xd1, 0x7b, 0xef, 0x04, 0x36, 0x10, 0x92, 0x88, 0x5e, 0x1f, 0xbb, 0x08, 0x58, 0x96, 0x25, 0x68, 0x61, 0xe9, 0x2c, 0xa2, 0x06, 0x10, 0x45, 0xb4, 0x88, 0x88, 0x05, 0x44, 0x79, 0x20, 0x81, 0x28, 0x12, 0x20, 0x7a, 0xd1, 0xd2, 0x1e, 0xa2, 0xd7, 0x05, 0xc1, 0xc2, 0x4a, 0x74, 0x78, 0x8f, 0x50, 0xc4, 0x83, 0x05, 0x41, 0xec, 0xc4, 0x29, 0x4e, 0x72, 0xf6, 0xfc, 0x67, 0x7c, 0xe7, 0x1a, 0x27, 0xe2, 0x3d, 0xec, 0x1b, 0x27, 0x38, 0x67, 0xa2, 0xa3, 0xc4, 0x73, 0x7d, 0x1d, 0xdf, 0x99, 0xdf, 0x3d, 0x75, 0xc6, 0x2e, 0x45, 0x44, 0xa5, 0x44, 0x44, 0xc2, 0x25, 0x32, 0x08, 0x22, 0x02, 0x9c, 0x88, 0x00, 0x27, 0x22, 0x22, 0xc0, 0x89, 0x94, 0x4c, 0xe0, 0x2a, 0xb3, 0x24, 0xb1, 0xfc, 0xcc, 0xe2, 0x66, 0xf9, 0x2c, 0x12, 0x71, 0xe2, 0xf6, 0xcd, 0x6f, 0x92, 0x6f, 0xbe, 0x8b, 0x14, 0xb8, 0x64, 0x92, 0x56, 0x92, 0x5a, 0x72, 0x51, 0x03, 0xf7, 0x0b, 0xde, 0xc5, 0x89, 0x13, 0x27, 0x28, 0x31, 0x31, 0x91, 0x16, 0x2f, 0x5e, 0x2c, 0x12, 0x61, 0x82, 0x79, 0xc5, 0xfc, 0xfa, 0xda, 0x2f, 0x45, 0x0d, 0x1c, 0xd4, 0x2d, 0x2d, 0x58, 0xb0, 0x80, 0xaa, 0x54, 0xa9, 0x42, 0x75, 0xea, 0xd4, 0x11, 0x89, 0x30, 0xc1, 0xbc, 0x62, 0x7e, 0x7d, 0xcd, 0x5d, 0xd4, 0xc0, 0xc1, 0xc6, 0xd3, 0xf2, 0xe5, 0xcb, 0xa9, 0x76, 0xed, 0xda, 0xd4, 0xb2, 0x65, 0xcb, 0xef, 0x56, 0x1a, 0x35, 0x6a, 0xa4, 0xae, 0x01, 0xd2, 0xb0, 0x61, 0x43, 0x6a, 0xd1, 0xa2, 0xc5, 0x77, 0x7d, 0x3d, 0x4e, 0x09, 0xc6, 0x03, 0xf3, 0xeb, 0x6b, 0x9f, 0x05, 0xb8, 0x10, 0xa5, 0x79, 0xf3, 0xe6, 0x54, 0xaf, 0x5e, 0x3d, 0xea, 0xd1, 0xa3, 0x07, 0xcd, 0x9c, 0x39, 0x93, 0xe6, 0xce, 0x9d, 0x4b, 0xfd, 0xfb, 0xf7, 0xa7, 0xc6, 0x8d, 0x1b, 0x0b, 0x74, 0x02, 0x9c, 0xb3, 0x02, 0xa8, 0xda, 0xb4, 0x69, 0x43, 0x4b, 0x97, 0x2e, 0xa5, 0x27, 0x4f, 0x9e, 0x18, 0xcf, 0xf8, 0xc5, 0x8b, 0x17, 0x34, 0x7e, 0xfc, 0x78, 0x6a, 0xda, 0xb4, 0x69, 0x89, 0x87, 0x4e, 0x80, 0x73, 0x40, 0x9a, 0x35, 0x6b, 0x46, 0x4d, 0x9a, 0x34, 0xa1, 0x21, 0x43, 0x86, 0xd0, 0xd5, 0xab, 0x57, 0x29, 0x97, 0x7f, 0x54, 0xcb, 0x61, 0xc9, 0xd4, 0x7f, 0x3e, 0x7a, 0xf4, 0x88, 0x3a, 0x75, 0xea, 0xa4, 0x9e, 0x2b, 0xc0, 0x09, 0x70, 0x21, 0xf9, 0x6a, 0xd0, 0x5a, 0x49, 0x49, 0x49, 0x94, 0x9a, 0x9a, 0x6a, 0xb4, 0x5a, 0xce, 0x1d, 0xa2, 0xb4, 0xb1, 0x44, 0x59, 0xdb, 0xf4, 0xe3, 0xcc, 0xcc, 0x4c, 0xea, 0xd6, 0xad, 0x9b, 0x00, 0x27, 0xc0, 0x05, 0x2f, 0x0d, 0x1a, 0x34, 0xa0, 0x2e, 0x5d, 0xba, 0xd0, 0xa1, 0x43, 0x87, 0x0c, 0x68, 0x79, 0xcc, 0x5c, 0xe6, 0x3a, 0x22, 0x57, 0x17, 0x22, 0xcf, 0x22, 0x7e, 0xfc, 0x4e, 0xf7, 0xc3, 0xc4, 0x8a, 0x86, 0x13, 0xe0, 0x42, 0xf2, 0xd7, 0x86, 0x0e, 0x1d, 0x4a, 0x77, 0xef, 0xde, 0x35, 0xb0, 0x79, 0x6f, 0xb1, 0x56, 0xfb, 0x2b, 0xc3, 0x16, 0xcf, 0x9a, 0xed, 0xa8, 0x9d, 0xdd, 0x7c, 0xf7, 0xee, 0x1d, 0x8d, 0x19, 0x33, 0x26, 0x24, 0x1f, 0x0e, 0xa0, 0x42, 0x9b, 0x22, 0xe2, 0x2d, 0x48, 0x60, 0xd2, 0xf1, 0xda, 0x10, 0xfc, 0xed, 0x7f, 0x0c, 0xef, 0x15, 0xe7, 0xe3, 0xff, 0xfb, 0xbf, 0x06, 0xfe, 0x46, 0x9f, 0x00, 0x57, 0x8c, 0x81, 0xc3, 0xc4, 0x61, 0xb2, 0x26, 0x4d, 0x9a, 0x44, 0xef, 0xdf, 0xbf, 0x37, 0x50, 0x65, 0xb1, 0x92, 0x73, 0xc5, 0x12, 0xb9, 0xfb, 0x31, 0x78, 0xff, 0xb6, 0x61, 0x83, 0xef, 0x36, 0x72, 0xe4, 0x48, 0xa5, 0x0d, 0x83, 0x81, 0x0d, 0xe7, 0xe0, 0xff, 0x8d, 0x1e, 0x3d, 0x9a, 0xce, 0x9c, 0x39, 0x43, 0xaf, 0x5e, 0xbd, 0xca, 0x27, 0x0f, 0x1e, 0x3c, 0xa0, 0xe4, 0xe4, 0x64, 0x6a, 0xdd, 0xba, 0x35, 0x75, 0xee, 0xdc, 0x99, 0x36, 0x6f, 0xde, 0x4c, 0xcf, 0x9e, 0x3d, 0x53, 0xc7, 0x9e, 0x3f, 0x7f, 0x4e, 0xfb, 0xf7, 0xef, 0xa7, 0xe1, 0xc3, 0x87, 0xd3, 0xb4, 0x69, 0xd3, 0xe8, 0xda, 0xb5, 0x6b, 0xe6, 0xbc, 0x0b, 0x17, 0x2e, 0xd0, 0xb8, 0x71, 0xe3, 0x14, 0xa0, 0x02, 0x5c, 0x31, 0x04, 0x0e, 0x13, 0x53, 0xbf, 0x7e, 0x7d, 0x95, 0xb8, 0x4c, 0x4b, 0x4b, 0xf3, 0x39, 0x67, 0x44, 0x19, 0x3f, 0x12, 0xa5, 0xb6, 0x67, 0xed, 0xf6, 0x17, 0xa2, 0xdc, 0xc7, 0x36, 0x6c, 0x27, 0x4f, 0x9e, 0xa4, 0xb8, 0xb8, 0x38, 0xe3, 0xe7, 0x05, 0x03, 0x1b, 0x92, 0xa5, 0x80, 0xe2, 0xc3, 0x87, 0x0f, 0xbf, 0x59, 0x27, 0xda, 0xbb, 0x77, 0x2f, 0xed, 0xda, 0xb5, 0xab, 0xc0, 0x63, 0xe9, 0xe9, 0xe9, 0x94, 0x97, 0x97, 0x97, 0xaf, 0xdf, 0xe5, 0x72, 0xd1, 0xc4, 0x89, 0x13, 0xa9, 0x6e, 0xdd, 0xba, 0x02, 0x5c, 0x71, 0xcb, 0xaf, 0xc1, 0xfc, 0xac, 0x5a, 0xb5, 0x8a, 0xb2, 0xb2, 0xb2, 0xd4, 0x68, 0xe5, 0xbe, 0xe5, 0x89, 0x9c, 0xc3, 0xb0, 0x45, 0xf3, 0xef, 0x69, 0xfc, 0xf8, 0x8d, 0x4f, 0xdb, 0xf1, 0xf1, 0xf5, 0xeb, 0xd7, 0xab, 0xf3, 0x42, 0x31, 0x59, 0x38, 0x17, 0x9a, 0xed, 0xf5, 0xeb, 0xd7, 0xea, 0x75, 0xef, 0xdc, 0xb9, 0x43, 0x2b, 0x57, 0xae, 0xcc, 0x27, 0xbb, 0x77, 0xef, 0x26, 0x8f, 0xc7, 0xa3, 0x67, 0xf0, 0xb3, 0x1a, 0x42, 0x3a, 0x7c, 0xf8, 0xb0, 0x39, 0x7e, 0xfb, 0xf6, 0x6d, 0xfd, 0x7e, 0x73, 0x73, 0xe9, 0xe0, 0xc1, 0x83, 0xa6, 0xff, 0xc6, 0x8d, 0x1b, 0xe6, 0xc6, 0xc0, 0x4d, 0x81, 0x6b, 0x14, 0xe0, 0x8a, 0x09, 0x6c, 0xd0, 0x36, 0xdb, 0xb6, 0x6d, 0x33, 0x5a, 0x22, 0xf7, 0x09, 0x6b, 0xb4, 0x04, 0x86, 0xad, 0x35, 0x6b, 0x38, 0x1e, 0xbf, 0xbc, 0x74, 0x3d, 0x82, 0xd0, 0x7c, 0x0b, 0x17, 0x2e, 0x54, 0x9a, 0x30, 0x14, 0x53, 0x85, 0xff, 0xd9, 0xb1, 0x63, 0x47, 0xba, 0x77, 0xef, 0x9e, 0xd1, 0x46, 0xab, 0x57, 0xaf, 0xe6, 0x51, 0x2e, 0x95, 0x4f, 0xf0, 0x5c, 0xff, 0x08, 0x19, 0x0d, 0x11, 0xb1, 0x75, 0x7c, 0xc5, 0x8a, 0x15, 0xaa, 0x2f, 0x3b, 0x3b, 0x9b, 0xa2, 0xa3, 0xa3, 0x4d, 0xff, 0xbc, 0x79, 0xf3, 0x54, 0xff, 0xa5, 0x4b, 0x97, 0xa8, 0x43, 0x87, 0x0e, 0x61, 0xf1, 0xe7, 0x04, 0xb8, 0xdf, 0x11, 0x1c, 0xb4, 0x6d, 0xdb, 0x96, 0xf6, 0xed, 0xdb, 0x67, 0xa7, 0x3c, 0x98, 0x81, 0xb4, 0x61, 0x0c, 0x5b, 0x5b, 0x86, 0x0d, 0x73, 0xe9, 0x21, 0xa3, 0x5d, 0xa6, 0x4e, 0x9d, 0xaa, 0xfc, 0xb5, 0x50, 0xa3, 0x51, 0x4c, 0x3e, 0xcc, 0xb1, 0xd5, 0x12, 0x12, 0x12, 0xa8, 0x72, 0xe5, 0xca, 0x0a,
		0x94, 0x25, 0x4b, 0x96, 0xa8, 0x64, 0xf2, 0xe3, 0xc7, 0x8f, 0xa9, 0x6b, 0xd7, 0xae, 0x54, 0xa1, 0x42, 0x05, 0xaa, 0x5e, 0xbd, 0x3a, 0x6d, 0xda, 0xb4, 0xc9, 0x3c, 0x7f, 0xe0, 0xc0, 0x81, 0x06, 0xac, 0xb5, 0x6b, 0xd7, 0x9a, 0xd4, 0x4c, 0xdf, 0xbe, 0x7d, 0x4d, 0x3f, 0x5e, 0x07, 0xed, 0xe2, 0xc5, 0x8b, 0xd4, 0xae, 0x5d, 0x3b, 0x01, 0x2e, 0xd4, 0x09, 0x83, 0x5f, 0x02, 0x1f, 0x08, 0xe6, 0x22, 0xd8, 0x1c, 0x1b, 0x26, 0xe2, 0xe8, 0xd1, 0xa3, 0x5f, 0x44, 0xa2, 0xee, 0x3f, 0xf1, 0x1b, 0x6d, 0xc9, 0xb0, 0x2d, 0xd1, 0x69, 0x10, 0x34, 0xf8, 0x58, 0xf0, 0xb5, 0x82, 0xf5, 0xd7, 0x7e, 0x0b, 0x38, 0x94, 0xca, 0x2c, 0x50, 0x2c, 0xb0, 0x60, 0x22, 0x7b, 0xf7, 0xee, 0x9d, 0x4f, 0x93, 0x05, 0x02, 0x87, 0xe7, 0x3f, 0x7c, 0xf8, 0x90, 0x26, 0x4f, 0x9e, 0xac, 0xca, 0x6e, 0x55, 0xab, 0x56, 0x55, 0x41, 0x84, 0xb5, 0x6a, 0xe3, 0xf4, 0xe9, 0xd3, 0xea, 0xc6, 0x12, 0x93, 0x1a, 0xc4, 0x05, 0xb5, 0x6a, 0xd5, 0x4a, 0x4d, 0x3a, 0x4c, 0x07, 0x06, 0x18, 0xf5, 0xcc, 0x7e, 0xfd, 0xfa, 0x7d, 0x73, 0x01, 0x1d, 0xe6, 0x10, 0x26, 0xed, 0xd4, 0xa9, 0x53, 0x36, 0x6c, 0x57, 0x18, 0xb6, 0x41, 0x5a, 0xb3, 0xa5, 0x4f, 0x60, 0xd8, 0x3e, 0xea, 0x7e, 0x44, 0xab, 0x63, 0xc7, 0x8e, 0x55, 0x9a, 0xcd, 0xa9, 0x89, 0x09, 0x04, 0xae, 0x4f, 0x9f, 0x3e, 0x06, 0xa0, 0x0d, 0x1b, 0x36, 0xa8, 0xbe, 0x8c, 0x8c, 0x0c, 0xea, 0xd9, 0xb3, 0xa7, 0xe9, 0x87, 0x5f, 0x56, 0x10, 0x70, 0x70, 0x05, 0xf6, 0xec, 0xd9, 0x63, 0x1e, 0x23, 0x77, 0x88, 0x73, 0x95, 0xb6, 0xce, 0xc9, 0xa1, 0xf9, 0xf3, 0xe7, 0x53, 0xad, 0x5a, 0xb5, 0x24, 0x68, 0x08, 0xe6, 0x82, 0x00, 0x16, 0x4a, 0x4c, 0x70, 0xb0, 0x33, 0xb2, 0x32, 0x54, 0x99, 0x29, 0xe5, 0x65, 0x8a, 0xaa, 0x04, 0xe0, 0x0e, 0xfe, 0x3d, 0x77, 0x31, 0xcc, 0x21, 0x92, 0xb4, 0xfe, 0xb0, 0x65, 0x9f, 0x63, 0xd8, 0xfa, 0x32, 0x6c, 0x6d, 0x74, 0x05, 0x01, 0x01, 0x03, 0xda, 0xc7, 0x8f, 0x1f, 0x55, 0x9d, 0x14, 0x9a, 0xc3, 0xc9, 0x3a, 0xa9, 0x93, 0xc0, 0xed, 0xd8, 0xb1, 0x43, 0x05, 0x11, 0x65, 0xca, 0x94, 0x51, 0x8f, 0xdb, 0xb7, 0x6f, 0x6f, 0x52, 0x3a, 0x58, 0xa3, 0x86, 0x9b, 0x34, 0x5c, 0x35, 0xde, 0x88, 0x02, 0x0e, 0x5a, 0x09, 0x3e, 0xcd, 0xad, 0x5b, 0xb7, 0x6c, 0xef, 0x39, 0xc7, 0x57, 0x01, 0xc8, 0xcb, 0x55, 0x29, 0x03, 0x14, 0xd7, 0x61, 0x3e, 0xbe, 0xe6, 0xb3, 0xc1, 0x81, 0x46, 0xce, 0xcb, 0xc0, 0xf6, 0x13, 0x91, 0xab, 0x97, 0xd6, 0x6c, 0x6e, 0xf6, 0xdd, 0x72, 0x1e, 0xd9, 0xa9, 0x86, 0x59, 0xb3, 0x66, 0xa9, 0x00, 0xc1, 0x69, 0x73, 0xe4, 0x24, 0x70, 0x18, 0x13, 0x98, 0x64, 0x00, 0x87, 0x1b, 0x69, 0xdd, 0xba, 0x75, 0xea, 0xbd, 0x23, 0xb2, 0x85, 0x25, 0x08, 0x67, 0xf2, 0x37, 0xa2, 0x80, 0x83, 0xcf, 0x36, 0x61, 0xc2, 0x04, 0x33, 0xe8, 0x19, 0xab, 0x19, 0x8a, 0xe9, 0x0c, 0xc8, 0xc3, 0x2f, 0x73, 0x63, 0x18, 0xf4, 0x82, 0xcc, 0x1f, 0x4c, 0x31, 0x02, 0x84, 0xe3, 0xc7, 0x8f, 0xdb, 0xb0, 0x9d, 0x67, 0xc8, 0xfa, 0x30, 0x70, 0x51, 0xfc, 0x7b, 0x00, 0xbf, 0x96, 0x2f, 0xa9, 0xeb, 0xf5, 0x7a, 0x55, 0x34, 0x5a, 0x58, 0x6b, 0xdd, 0x9c, 0x04, 0xae, 0x7c, 0xf9, 0xf2, 0x54, 0xb1, 0x62, 0x45, 0x2a, 0x5d, 0xba, 0x34, 0xcd, 0x9e, 0x3d, 0x5b, 0x55, 0x3e, 0xe0, 0xff, 0xbd, 0x7d, 0xfb, 0x56, 0xdd, 0x80, 0x52, 0x69, 0x08, 0x12, 0x38, 0x04, 0x08, 0x53, 0xa6, 0x4c, 0x31, 0x83, 0xee, 0x99, 0xc5, 0x5a, 0xa9, 0x39, 0x83, 0x32, 0x90, 0x01, 0xb9, 0x60, 0x43, 0x77, 0xe5, 0xca, 0x15, 0x8a, 0x8f, 0x8f, 0xff, 0x22, 0x98, 0xc0, 0x04, 0xc3, 0xb4, 0xf8, 0xd7, 0x45, 0x61, 0x46, 0xa1, 0xd9, 0x50, 0x17, 0x75, 0xf3, 0x6f, 0xef, 0x4f, 0xf6, 0x6b, 0x60, 0xd2, 0x0b, 0x73, 0x61, 0xa5, 0x93, 0xc0, 0x4d, 0x9f, 0x3e, 0x5d, 0x25, 0xab, 0xa1, 0xe1, 0x10, 0xe9, 0x0e, 0x1b, 0x36, 0x8c, 0x3e, 0x7d, 0xfa, 0xa4, 0x52, 0x3c, 0x38, 0x1f, 0x5a, 0x1d, 0xd7, 0x2e, 0xc0, 0x05, 0x11, 0x55, 0xc2, 0x74, 0x20, 0x5d, 0xa0, 0xcc, 0xe8, 0xaf, 0xac, 0xe1, 0xa6, 0x6a, 0xbf, 0x0b, 0xc0, 0x64, 0xdb, 0x8a, 0x8b, 0xee, 0xdf, 0xbf, 0x4f, 0x83, 0x07, 0x0f, 0x36, 0x75, 0x46, 0x0c, 0xb8, 0x7f, 0xea, 0xc3, 0x0b, 0xd8, 0x7a, 0x6b, 0xd8, 0x52, 0x3b, 0x12, 0x65, 0x6e, 0xb5, 0xcf, 0x45, 0xf2, 0xd4, 0x4a, 0x04, 0x17, 0xd6, 0xc4, 0x38, 0x09, 0x1c, 0x12, 0xc3, 0xc7, 0x8e, 0x1d, 0x33, 0x8f, 0xa1, 0xc5, 0xe1, 0x7b, 0xa2, 0x9d, 0x3b, 0x77, 0x8e, 0xba, 0x77, 0xef, 0x1e, 0xb6, 0xf2, 0x56, 0xc4, 0x05, 0x0d, 0xf0, 0xa7, 0x90, 0x0b, 0x43, 0xc9, 0x46, 0x41, 0xc7, 0xbe, 0x71, 0xfa, 0x3f, 0x74, 0x82, 0x56, 0x15, 0xd5, 0xf7, 0xa2, 0x53, 0x5f, 0xed, 0xcb, 0x97, 0x2f, 0x69, 0xd4, 0xa8, 0x51, 0x4a, 0x53, 0x6d, 0xdd, 0x6a, 0x13, 0xe5, 0xbd, 0xac, 0x6b, 0xa2, 0xae, 0x3f, 0x68, 0xd8, 0x3c, 0x89, 0xc8, 0xe8, 0x92, 0xc9, 0xf6, 0x23, 0xca, 0xc3, 0x39, 0x85, 0x39, 0x31, 0x4e, 0x02, 0x87, 0x6b, 0x3b, 0x72, 0xe4, 0x08, 0x55, 0xaa, 0x54, 0x89, 0xca, 0x96, 0x2d, 0xab, 0x52, 0x3d, 0x48, 0x93, 0x58, 0xd5, 0x89, 0x2d, 0x5b, 0xb6, 0x50, 0xcd, 0x9a, 0x35, 0x05, 0xb8, 0x50, 0x96, 0x0d, 0x21, 0x1d, 0x62, 0x65, 0xdf, 0x55, 0x09, 0x6a, 0x32, 0xc3, 0xd3, 0x8e, 0x21, 0xea, 0xe6, 0xd3, 0x56, 0x5e, 0x7d, 0xc5, 0x6f, 0xde, 0xbc, 0x51, 0x77, 0xbf, 0x95, 0x26, 0xf0, 0xde, 0xd4, 0xbe, 0x1a, 0x60, 0x73, 0x45, 0x33, 0x67, 0xa3, 0xf8, 0xfc, 0x17, 0xfa, 0xb9, 0x28, 0x78, 0x0f, 0x1a, 0x34, 0x28, 0xe8, 0xbc, 0xde, 0xb7, 0x02, 0x07, 0xb3, 0x6f, 0x35, 0x14, 0xe5, 0x2d, 0x80, 0x76, 0xee, 0xdc, 0x69, 0xfa, 0xb1, 0x7c, 0xdd, 0xea, 0x5f, 0xb4, 0x68, 0x51, 0x81, 0xc0, 0xa1, 0xcc, 0x86, 0xa4, 0x34, 0x7c, 0x53, 0xbc, 0x4e, 0xb9, 0x72, 0xe5, 0xa8, 0x5a, 0xb5, 0x6a, 0x2a, 0x78, 0x40, 0x3b, 0x7b, 0xf6, 0xac, 0xd2, 0xf0, 0xe1, 0x58, 0x3a, 0x15, 0x91, 0xc0, 0x61, 0xf0, 0x2c, 0x4d, 0x07, 0x5f, 0xc5, 0x40, 0x37, 0x49, 0x3b, 0xff, 0x2e, 0x56, 0x1c, 0x9e, 0x85, 0xac, 0xe8, 0x3e, 0x7d, 0x59, 0xc8, 0xf6, 0xfe, 0x97, 0x61, 0xfb, 0xa3, 0x0f, 0x36, 0x06, 0xd3, 0xd5, 0x9d, 0xfb, 0xfe, 0x43, 0x46, 0x9b, 0x20, 0xfd, 0x01, 0xcd, 0x16, 0x0e, 0x7f, 0x07, 0xc0, 0xc5, 0xc4, 0xc4, 0x18, 0x4d, 0x8d, 0xc2, 0x3c, 0xf2, 0x89, 0x00, 0x08, 0x6e, 0x03, 0xf6, 0x4a, 0x20, 0x42, 0xc6, 0x38, 0x41, 0x3b, 0xa1, 0x4c, 0x75, 0xfd, 0xfa, 0xf5, 0xaf, 0x56, 0x1a, 0x02, 0x01, 0xc5, 0x52, 0x78, 0xa9, 0x34, 0x38, 0x54, 0x69, 0xb0, 0x56, 0x5a, 0x60, 0x49, 0x8e, 0xd1, 0x74, 0xaf, 0x59, 0x63, 0xfd, 0x8d, 0x41, 0xea, 0xe4, 0x5b, 0xdd, 0xf1, 0x77, 0xbd, 0x6e, 0x0d, 0x69, 0x8f, 0xcc, 0x7f, 0xea, 0x0a,
		0x82, 0x82, 0x2d, 0x4e, 0x6b, 0xb7, 0x0c, 0xbb, 0x52, 0xa4, 0xea, 0x98, 0x85, 0x6d, 0x46, 0x03, 0xdf, 0x3f, 0x96, 0x1b, 0x1d, 0x38, 0x70, 0xc0, 0xbc, 0x87, 0xed, 0xdb, 0xb7, 0x17, 0x58, 0x4b, 0x45, 0xdd, 0x34, 0xb0, 0x0d, 0x18, 0x30, 0xc0, 0x1c, 0x5f, 0xb3, 0x66, 0x8d, 0x59, 0x54, 0xe0, 0x5f, 0x99, 0x58, 0xb6, 0x6c, 0x99, 0xa9, 0xa5, 0x0a,
		0x70, 0x0e, 0xd4, 0x52, 0xe1, 0xd8, 0x23, 0x55, 0x82, 0xcd, 0xb7, 0xa8, 0x23, 0x2a, 0xe8, 0x9e, 0x32, 0x68, 0x7f, 0xf6, 0x41, 0x17, 0xad, 0xfd, 0x3a, 0x68, 0x32, 0x04, 0x07, 0x4a, 0xe2, 0x35, 0x6c, 0xe9, 0x89, 0xf6, 0x7e, 0x04, 0x94, 0x7e, 0x90, 0x3e, 0x08, 0xe7, 0xba, 0x31, 0x4b, 0xcb, 0xc1, 0x04, 0x5a, 0x39, 0x41, 0x00, 0x83, 0x84, 0x6d, 0xa0, 0x58, 0x2b, 0x44, 0xdc, 0x6e, 0x37, 0x3d, 0x7d, 0xfa, 0x54, 0xfd, 0x8d, 0x9b, 0xcc, 0x3a, 0x8e, 0xa2, 0xbd, 0xff, 0x72, 0x24, 0xab, 0xdf, 0x1a, 0x13, 0x98, 0xe8, 0x70, 0xd5, 0xae, 0x23, 0xbe, 0x78, 0x6f, 0x2d, 0x60, 0x44, 0xa5, 0x01, 0x65, 0x1c, 0x95, 0x0b, 0xbe, 0xcb, 0x93, 0xf3, 0x03, 0x0f, 0x7e, 0x57, 0xbd, 0x68, 0x52, 0x49, 0x9c, 0x4f, 0x3a, 0x33, 0x90, 0x23, 0x19, 0xcc, 0x5f, 0xf5, 0x88, 0x60, 0x69, 0x10, 0xb4, 0x85, 0x93, 0x65, 0xab, 0x6f, 0x8d, 0xbc, 0xa1, 0xc1, 0xce, 0x9f, 0x3f, 0xff, 0xd5, 0xb5, 0x70, 0xf0, 0x45, 0xe1, 0x42, 0xcc, 0x99, 0x33, 0x27, 0xdf, 0xda, 0x39, 0xb8, 0x03, 0x97, 0x2f, 0x5f, 0x56, 0x91, 0x79, 0x60, 0x83, 0x19, 0xee, 0xd5, 0xab, 0xd7, 0x57, 0x93, 0xe1, 0x02, 0x5c, 0x90, 0x13, 0xb7, 0x71, 0xe3, 0x46, 0xdb, 0x5f, 0xbb, 0xc8, 0x70, 0xc5, 0x04, 0xc0, 0x16, 0xa3, 0xb5, 0x9c, 0x95, 0x3e, 0x81, 0x06, 0x80, 0x49, 0x46, 0xd9, 0xaa, 0xa8, 0x56, 0xab, 0xc0, 0x5f, 0x04, 0x0c, 0xd0, 0x74, 0x33, 0x66, 0xcc, 0x50, 0xa6, 0x3d, 0x50, 0x30, 0x5e, 0x48, 0xf1, 0xe0, 0xc6, 0x82, 0x56, 0x1c, 0x31, 0x62, 0x84, 0x8a, 0x58, 0x71, 0x0c, 0x2b, 0x81, 0xe1, 0x7b, 0x22, 0x15, 0x12, 0x1b, 0x1b, 0xab, 0x7c, 0x3d, 0xeb, 0x3c, 0x24, 0x81, 0x11, 0x71, 0x4b, 0x1e, 0xae, 0x10, 0x80, 0xb3, 0x22, 0x30, 0x2c, 0xb7, 0xb6, 0x5a, 0xe6, 0x8f, 0x7e, 0x3e, 0x5b, 0xac, 0xcf, 0x6f, 0xc3, 0x67, 0xfa, 0xe8, 0xf5, 0x95, 0x2a, 0x2f, 0x57, 0x5c, 0x36, 0x30, 0x03, 0x24, 0xf8, 0xa4, 0x35, 0x6a, 0xd4, 0xc8, 0x27, 0x08, 0x1a, 0x2c, 0xff, 0x12, 0xef, 0x15, 0xda, 0x18, 0x7d, 0xd6, 0x31, 0xdc, 0x30, 0xd6, 0x56, 0x46, 0x8c, 0xab, 0x75, 0x1e, 0x5e, 0x2f, 0xdc, 0x6e, 0x42, 0x89, 0x5a, 0x0f, 0x07, 0x2d, 0x17, 0x15, 0x15, 0xa5, 0xcc, 0x8b, 0xca, 0xd1, 0x79, 0x38, 0x5a, 0x9d, 0xcf, 0xfe, 0x4e, 0x94, 0x06, 0x0f, 0x41, 0x43, 0xee, 0xff, 0xec, 0x5d, 0x56, 0xa8, 0x41, 0x86, 0x7b, 0x93, 0x89, 0xec, 0xda, 0x8a, 0xb0, 0x05, 0x98, 0xd0, 0x04, 0x48, 0x2f, 0xa4, 0xa4, 0xa4, 0x98, 0x74, 0x89, 0x3b, 0x41, 0x9b, 0xd2, 0xac, 0x7f, 0xd9, 0x4b, 0xc4, 0xb1, 0xce, 0x5f, 0x3e, 0x13, 0x44, 0x80, 0x73, 0xc4, 0x27, 0x82, 0x89, 0xc1, 0x62, 0x49, 0xb3, 0x37, 0xe1, 0x67, 0x5d, 0x5d, 0xf0, 0xdf, 0x8c, 0x02, 0x13, 0x54, 0xd2, 0xf7, 0x90, 0x0a,
		0x70, 0x0e, 0x2f, 0x1d, 0xf7, 0x4f, 0x88, 0x5a, 0xed, 0xe6, 0xcd, 0x9b, 0xca, 0x91, 0x0e, 0x47, 0x35, 0x41, 0x80, 0x2b, 0x41, 0xc0, 0x59, 0x1b, 0x63, 0x10, 0xa9, 0x21, 0x35, 0x80, 0x0d, 0xcd, 0xc8, 0x47, 0xa1, 0x9c, 0x14, 0xae, 0x14, 0x81, 0x00, 0x57, 0xc2, 0x36, 0xd1, 0xf8, 0xef, 0x52, 0x47, 0x64, 0x17, 0xae, 0xad, 0x72, 0x02, 0x9c, 0xec, 0xda, 0x12, 0x11, 0xe0, 0x04, 0x38, 0x01, 0x4e, 0x3e, 0xe3, 0x57, 0x24, 0xc2, 0x3e, 0xe3, 0x57, 0x3e, 0xc5, 0x5c, 0x3e, 0xc5, 0x5c, 0xbe, 0xa7, 0x41, 0x5a, 0xe4, 0x7e, 0x4f, 0x83, 0x7c, 0x13, 0x8d, 0x7c, 0x13, 0x8d, 0x7c, 0xd7, 0x96, 0x88, 0x7c, 0xb9, 0x9b, 0x88, 0x88, 0x00, 0x27, 0x22, 0xc0, 0x89, 0x08, 0x70, 0x22, 0x22, 0x02, 0x9c, 0xc8, 0x77, 0x28, 0xff, 0x07, 0x51, 0xce, 0xa0, 0x8d, 0xc7, 0x41, 0x87, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}
