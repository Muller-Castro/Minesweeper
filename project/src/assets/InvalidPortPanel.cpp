/****************************************************************************************/
/* InvalidPortPanel.cpp                                                                 */
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

#include "assets/InvalidPortPanel.h"

#include <vector>

std::pair<std::string, std::string> Minesweeper::get_raw_invalid_port_panel()
{
	std::pair<std::string, std::string> result = std::make_pair("InvalidPortPanel", "");

	std::vector<short> raw_data {

		0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a,
		0x1a, 0x0a,
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x02, 0x62, 0x00, 0x00, 0x00, 0xa0, 0x08, 0x06, 0x00, 0x00, 0x00, 0xaf, 0xe9, 0x00, 0x70, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 0x42, 0x01, 0xd9, 0xc9, 0x2c, 0x7f, 0x00, 0x00, 0x00, 0x20, 0x63, 0x48, 0x52, 0x4d, 0x00, 0x00, 0x7a, 0x26, 0x00, 0x00, 0x80, 0x84, 0x00, 0x00, 0xfa, 0x00, 0x00, 0x00, 0x80, 0xe8, 0x00, 0x00, 0x75, 0x30, 0x00, 0x00, 0xea, 0x60, 0x00, 0x00, 0x3a, 0x98, 0x00, 0x00, 0x17, 0x70, 0x9c, 0xba, 0x51, 0x3c, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x13, 0x00, 0x00, 0x0b, 0x13, 0x01, 0x00, 0x9a, 0x9c, 0x18, 0x00, 0x00, 0x0e, 0x12, 0x49, 0x44, 0x41, 0x54, 0x78, 0xda, 0xed, 0xdd, 0x7b, 0xac, 0x1c, 0x55, 0x1d, 0x07, 0xf0, 0x1a, 0x12, 0xfc, 0xcb, 0x90, 0xa0, 0x12, 0x95, 0x78, 0x35, 0x4a, 0x0b, 0x54, 0x11, 0x05, 0x45, 0x51, 0x24, 0x0a,
		0x62, 0xf1, 0x01, 0x54, 0xc1, 0x78, 0x4b, 0x78, 0x08, 0x16, 0x81, 0x14, 0x50, 0xd1, 0xaa, 0xc8, 0xa3, 0x42, 0x10, 0x04, 0x2b, 0x82, 0x14, 0x95, 0xd2, 0x52, 0x51, 0x14, 0x45, 0x40, 0x08, 0x8a, 0x8f, 0x20, 0x20, 0x95, 0x97, 0xa8, 0x09, 0x3e, 0xea, 0x0b, 0x34, 0x1a, 0x1f, 0xa0, 0x42, 0x05, 0xf9, 0x7f, 0xec, 0x6f, 0xd3, 0x25, 0xb3, 0xb3, 0x8f, 0x99, 0xdd, 0x9d, 0xd9, 0x9d, 0x1d, 0x3f, 0x37, 0xf9, 0x80, 0xdc, 0x9d, 0x99, 0x3b, 0xe7, 0xcc, 0xc9, 0xbd, 0x5f, 0xcf, 0xfc, 0x66, 0xce, 0x82, 0x24, 0x49, 0x16, 0x84, 0x2d, 0x5f, 0x73, 0x5b, 0x9c, 0xbf, 0xc5, 0xc6, 0x2d, 0x12, 0x00, 0x00, 0x4a, 0xb5, 0x71, 0x6b, 0xd6, 0x9a, 0x7b, 0x2a, 0x7f, 0x6d, 0x0d, 0x61, 0xf3, 0x5b, 0x6c, 0xd6, 0x41, 0x00, 0x00, 0x95, 0x8b, 0xcc, 0x35, 0xbf, 0x35, 0x83, 0xb5, 0x66, 0xc2, 0x84, 0x30, 0x00, 0x80, 0xc9, 0x86, 0xb1, 0xc8, 0x60, 0xad, 0x29, 0x32, 0x1d, 0x02, 0x00, 0x30, 0x59, 0x91, 0xc1, 0x3a, 0x6b, 0xc2, 0xce, 0x38, 0xe3, 0x0c, 0x00, 0x00, 0x2a, 0xd0, 0xa3, 0x66, 0xac, 0x33, 0x9d, 0xc5, 0x46, 0x1b, 0x36, 0x6c, 0x00, 0x00, 0xa0, 0x44, 0x3d, 0x82, 0x58, 0x22, 0x88, 0x01, 0x00, 0x08, 0x62, 0x00, 0x00, 0x82, 0x98, 0xce, 0x02, 0x00, 0x10, 0xc4, 0x00, 0x00, 0x04, 0x31, 0x00, 0x00, 0x04, 0x31, 0x00, 0x00, 0x41, 0x0c, 0x00, 0x00, 0x41, 0x0c, 0x00, 0x40, 0x10, 0x03, 0x00, 0x40, 0x10, 0x03, 0x00, 0x10, 0xc4, 0x00, 0x00, 0x04, 0x31, 0x41, 0x0c, 0x00, 0x40, 0x10, 0x03, 0x00, 0x10, 0xc4, 0x04, 0x31, 0x00, 0x00, 0x41, 0x0c, 0x00, 0x40, 0x10, 0x9b, 0xf4, 0x89, 0x7d, 0xe9, 0xca, 0x2b, 0x93, 0x1b, 0x2e, 0x38, 0x2f, 0xf9, 0xde, 0xe9, 0x1f, 0x69, 0xf9, 0xd6, 0xa7, 0x3e, 0x99, 0x5c, 0xb5, 0x7e, 0xbd, 0x8b, 0x06, 0x00, 0x34, 0x26, 0x67, 0xd4, 0x2e, 0x88, 0x5d, 0x7b, 0xf1, 0x45, 0xc9, 0xa6, 0x43, 0x0e, 0x48, 0x36, 0xef, 0xfa, 0xbc, 0x24, 0xd9, 0x7e, 0x41, 0x87, 0xf8, 0xde, 0xef, 0x0f, 0x7c, 0x7d, 0x72, 0xdd, 0xea, 0x0b, 0x0d, 0x22, 0x00, 0x60, 0xe6, 0x73, 0x46, 0xad, 0x82, 0xd8, 0x1d, 0xa7, 0x9c, 0x90, 0x3c, 0xbe, 0x68, 0x87, 0xae, 0x8e, 0xc9, 0x7a, 0x62, 0xe1, 0xb3, 0x93, 0xbb, 0x8e, 0x3f, 0xda, 0x80, 0x02, 0x00, 0x66, 0x3a, 0x67, 0xd4, 0x26, 0x88, 0xfd, 0xf8, 0xc4, 0x63, 0x93, 0xff, 0xee, 0xf4, 0xac, 0xdc, 0xce, 0x69, 0x8b, 0x6d, 0xef, 0x3f, 0xfa, 0xdd, 0x06, 0x16, 0x00, 0x30, 0xb3, 0x39, 0xa3, 0x16, 0x41, 0xec, 0xc6, 0xf3, 0xce, 0xe9, 0xea, 0x9c, 0x48, 0xac, 0x9b, 0x0e, 0xde, 0x3f, 0xb9, 0x73, 0xc5, 0xf2, 0xe4, 0xce, 0x93, 0xde, 0x97, 0xfc, 0xea, 0x1d, 0x4b, 0xba, 0x52, 0x6c, 0xec, 0x73, 0xf3, 0xd9, 0x67, 0x1a, 0x60, 0x00, 0xc0, 0x4c, 0xe6, 0x8c, 0x5a, 0x04, 0xb1, 0xbf, 0xec, 0xb3, 0x7b, 0x47, 0xc3, 0x1f, 0xd9, 0x63, 0xa7, 0xe4, 0xda, 0x8b, 0x56, 0x77, 0x6d, 0xf7, 0x8d, 0x4b, 0x3e, 0x9b, 0xfc, 0xed, 0x35, 0x8b, 0x3b, 0xb6, 0x7d, 0x78, 0xcf, 0x85, 0x06, 0x19, 0x00, 0x30, 0x93, 0x39, 0x63, 0xea, 0x41, 0xec, 0xf6, 0xf7, 0x9f, 0xd8, 0x91, 0x52, 0xff, 0xb3, 0xcb, 0x73, 0x93, 0x6b, 0xd6, 0x5c, 0xda, 0x77, 0xfb, 0x78, 0xa2, 0xe1, 0x5f, 0xbb, 0xbf, 0xb0, 0x23, 0xad, 0xde, 0x77, 0xcc, 0x32, 0x03, 0x0d, 0x1a, 0x66, 0xed, 0xda, 0xb5, 0xc9, 0xca, 0x95, 0x2b, 0x3b, 0xc4, 0xf7, 0xf4, 0x0d, 0xd0, 0xa4, 0x9c, 0x31, 0xf5, 0x20, 0xf6, 0xe8, 0x6e, 0x73, 0x1d, 0x8d, 0xbd, 0xfb, 0xb8, 0xa3, 0x72, 0xf7, 0x89, 0x29, 0xc4, 0x74, 0xa7, 0x3e, 0xbe, 0xf3, 0x73, 0x92, 0xab, 0xbf, 0xf8, 0x45, 0x03, 0x0e, 0x1a, 0x62, 0xd9, 0xb2, 0x65, 0xbd, 0x7e, 0x31, 0xb5, 0xc4, 0x67, 0xfa, 0x08, 0x68, 0x4a, 0xce, 0x98, 0x6a, 0x10, 0xfb, 0xc5, 0x61, 0x6f, 0xeb, 0x68, 0xe8, 0xdf, 0xf7, 0xda, 0xb5, 0xf0, 0xbe, 0x7f, 0xdb, 0xfb, 0xa5, 0x1d, 0x53, 0x87, 0xbf, 0x5e, 0xfa, 0x66, 0x03, 0x8e, 0xda, 0xcd, 0xe0, 0x64, 0xad, 0x59, 0xb3, 0x46, 0xdb, 0x73, 0x1c, 0x7f, 0xfc, 0xf1, 0x7d, 0x43, 0x58, 0x5b, 0x6c, 0x53, 0xb7, 0x19, 0xb6, 0x22, 0x7d, 0x30, 0x2b, 0xe3, 0xa0, 0x57, 0x5b, 0x9a, 0x3a, 0x76, 0x69, 0xb6, 0x59, 0xc8, 0x19, 0x53, 0x0b, 0x62, 0x71, 0x1f, 0x36, 0xdd, 0x39, 0xf1, 0xbf, 0xbf, 0x7f, 0xda, 0xca, 0xc2, 0xfb, 0xdf, 0x74, 0xee, 0xd9, 0x5d, 0xfb, 0xc7, 0xcb, 0xd8, 0x0c, 0x3c, 0xea, 0x36, 0x83, 0x93, 0xb5, 0xe3, 0x8e, 0x3b, 0x26, 0xa7, 0x9d, 0x76, 0x9a, 0xb6, 0xf7, 0xb1, 0x70, 0xe1, 0xc2, 0xa7, 0xb6, 0x5f, 0xb1, 0x62, 0x45, 0x87, 0xf6, 0xf7, 0x63, 0x9b, 0x3a, 0xcd, 0xb0, 0x0d, 0xd3, 0x07, 0x75, 0x1f, 0x07, 0x83, 0xda, 0xd2, 0xb4, 0xb1, 0x4b, 0xb3, 0xcd, 0x4a, 0xce, 0x98, 0x5a, 0x10, 0x7b, 0xe8, 0x4d, 0xaf, 0xe9, 0x48, 0x9a, 0xf1, 0xdf, 0xc3, 0x1e, 0x23, 0x9e, 0x70, 0x48, 0x1f, 0x23, 0xd2, 0xab, 0xc1, 0xc7, 0xa4, 0x15, 0x99, 0xc1, 0xe9, 0xf5, 0x07, 0x4d, 0xdb, 0x7b, 0x4b, 0x6f, 0x9b, 0xfd, 0x4a, 0x7f, 0x56, 0xe6, 0x39, 0x8e, 0x32, 0xc3, 0x36, 0x4e, 0x1f, 0xd4, 0x75, 0x1c, 0x14, 0x69, 0x4b, 0x53, 0xc6, 0x2e, 0xcd, 0x37, 0x2b, 0x39, 0x63, 0x2a, 0x41, 0x2c, 0x12, 0x69, 0xf6, 0xde, 0xeb, 0xd7, 0x3f, 0x77, 0xf1, 0xd0, 0xc7, 0xf9, 0xca, 0xe5, 0x97, 0xb7, 0xf6, 0x4d, 0xa7, 0xd5, 0x78, 0x59, 0x9b, 0x01, 0xc8, 0x24, 0x0d, 0x9a, 0xc1, 0xc9, 0x5a, 0xb4, 0x68, 0xd1, 0x53, 0xdb, 0x36, 0xe1, 0x56, 0x4f, 0x15, 0x6d, 0x2f, 0x3b, 0x88, 0x55, 0x31, 0xc3, 0xd6, 0xef, 0xf8, 0xdb, 0xcc, 0xbf, 0xbb, 0x90, 0xa7, 0xcd, 0xcd, 0xd5, 0x72, 0x96, 0x69, 0x50, 0x5b, 0xd2, 0xe7, 0xec, 0x36, 0x25, 0x75, 0x37, 0x4b, 0x39, 0x63, 0x2a, 0x41, 0xec, 0x5f, 0x2f, 0x7f, 0x51, 0x47, 0xa3, 0x7e, 0x7a, 0xe4, 0x61, 0x23, 0x1f, 0x2b, 0x9e, 0x64, 0x48, 0x77, 0x76, 0x3c, 0xe9, 0x60, 0x10, 0x32, 0x49, 0x83, 0x82, 0x43, 0xf6, 0x2b, 0xfd, 0xc7, 0x3f, 0xea, 0x6e, 0xda, 0xc7, 0x88, 0x3f, 0x6c, 0x45, 0xeb, 0x8b, 0x7a, 0xd5, 0x35, 0xf5, 0xda, 0x3f, 0xbd, 0x5d, 0xd1, 0xfa, 0xa8, 0x61, 0x6b, 0xbd, 0xca, 0x68, 0x7b, 0xb6, 0x0d, 0xe3, 0x06, 0xb1, 0x6c, 0x1b, 0xca, 0x0e, 0x76, 0x83, 0xae, 0xff, 0x33, 0x7f, 0xf5, 0x8b, 0x42, 0x22, 0xd8, 0x0c, 0x9a, 0x65, 0x2a, 0x72, 0x1d, 0xaa, 0x18, 0x07, 0x83, 0xda, 0x92, 0x3e, 0x67, 0xb5, 0x63, 0xd4, 0xdd, 0x2c, 0xe5, 0x8c, 0x89, 0x07, 0xb1, 0x9f, 0xbc, 0x67, 0xbe, 0xa3, 0x41, 0xf1, 0x34, 0xc3, 0xb8, 0xc7, 0x7c, 0xf8, 0x95, 0x3b, 0x77, 0x74, 0xf8, 0xcf, 0x97, 0x2d, 0x35, 0x10, 0x99, 0xca, 0x2c, 0xc2, 0x03, 0x0f, 0x3c, 0xd0, 0x92, 0xfd, 0x7a, 0xe8, 0xa1, 0x87, 0x5a, 0xdf, 0x9f, 0x9f, 0x9f, 0x7f, 0x6a, 0xdb, 0x55, 0xab, 0x56, 0xb5, 0x66, 0x42, 0xe2, 0x8f, 0xf0, 0xb0, 0xb7, 0xb4, 0xda, 0x75, 0x4d, 0x79, 0xfb, 0xc7, 0x76, 0x45, 0xeb, 0xa3, 0x46, 0xa9, 0xf5, 0xea, 0xd5, 0xf6, 0x7e, 0x7d, 0xd0, 0x2f, 0x88, 0x0d, 0x6a, 0x43, 0xf6, 0x98, 0x79, 0x33, 0x58, 0x79, 0x6d, 0x98, 0x74, 0x10, 0x7b, 0xc6, 0xf5, 0xd7, 0x75, 0xd8, 0xfe, 0xfe, 0xfb, 0x5a, 0xdf, 0x7f, 0xfa, 0xd9, 0xab, 0xfa, 0xce, 0x32, 0x0d, 0x73, 0x1d, 0xca, 0x1c, 0x07, 0xd9, 0xcf, 0xf3, 0xc2, 0xa3, 0xda, 0x31, 0xea, 0x6a, 0xd6, 0x72, 0xc6, 0x44, 0x83, 0xd8, 0x97, 0xaf, 0x58, 0xdb, 0xb1, 0xc8, 0x66, 0x34, 0xe6, 0xf6, 0x0f, 0xae, 0xe8, 0xbb, 0xfd, 0x8d, 0xe7, 0x9f, 0x9b, 0xfc, 0x61, 0xc9, 0x3e, 0xc9, 0x83, 0x07, 0xec, 0x3d, 0xf0, 0xcd, 0xb6, 0xb7, 0x9c, 0xf5, 0xf1, 0xae, 0x82, 0xba, 0x58, 0xd4, 0xd3, 0x80, 0x64, 0x12, 0x96, 0x2e, 0x5d, 0x9a, 0xfb, 0x07, 0x3f, 0x1d, 0x42, 0xc2, 0xb6, 0xdb, 0x6e, 0xdb, 0xda, 0x77, 0x94, 0x10, 0x96, 0xae, 0x6b, 0x1a, 0x67, 0xff, 0xf4, 0x71, 0x46, 0xad, 0xf5, 0xea, 0xd5, 0xf6, 0x22, 0x7d, 0x90, 0x0e, 0x62, 0xa3, 0xb4, 0x21, 0x7e, 0xee, 0x28, 0xf5, 0x4d, 0x93, 0x0e, 0x62, 0xd9, 0x9f, 0x1f, 0x61, 0x6c, 0xd0, 0x2c, 0xd3, 0x28, 0xd7, 0xa1, 0xac, 0x71, 0x90, 0x35, 0x4c, 0x10, 0x53, 0x3b, 0x46, 0x5d, 0xcc, 0x62, 0xce, 0x98, 0x68, 0x10, 0xfb, 0xcd, 0x41, 0xfb, 0x75, 0x14, 0xbd, 0xfd, 0x79, 0xdf, 0x3d, 0xfa, 0x6e, 0x1b, 0xf7, 0x72, 0xd3, 0x4b, 0x0d, 0x44, 0xa3, 0xe3, 0x09, 0x88, 0x7e, 0xdb, 0x3f, 0xf8, 0xe6, 0xd7, 0x75, 0x1c, 0xfb, 0x4f, 0xfb, 0xed, 0x65, 0x50, 0x32, 0x11, 0x97, 0x5c, 0x72, 0x49, 0xb2, 0xdd, 0x76, 0xdb, 0x15, 0x0e, 0x21, 0x11, 0xc2, 0x96, 0x2f, 0x5f, 0xde, 0x9a, 0x01, 0x69, 0x7f, 0x2f, 0xea, 0xa7, 0xf2, 0x6a, 0xac, 0xb2, 0x75, 0x4d, 0x69, 0xbd, 0xf6, 0xcf, 0x6e, 0x33, 0xa8, 0x3e, 0x6a, 0xd4, 0x5a, 0xaf, 0xf8, 0xe3, 0x9b, 0x6d, 0xfb, 0x30, 0x41, 0x6c, 0xd8, 0x3e, 0xe8, 0x35, 0x23, 0xd6, 0x6b, 0x36, 0xa8, 0xdf, 0xfe, 0x75, 0x0e, 0x62, 0xd9, 0x36, 0xe4, 0xd5, 0x99, 0xf5, 0xea, 0xf3, 0x98, 0x61, 0xcb, 0xdb, 0xae, 0xe8, 0xe7, 0xd9, 0xb6, 0xb4, 0x67, 0xf1, 0xd4, 0x8e, 0x51, 0x67, 0xb3, 0x98, 0x33, 0x26, 0x16, 0xc4, 0x6e, 0x3e, 0x67, 0x55, 0x57, 0x9a, 0xbc, 0xfe, 0xd3, 0x17, 0xf4, 0xdd, 0xfe, 0x9e, 0xe5, 0x47, 0x76, 0x2d, 0xc0, 0x19, 0x0b, 0x76, 0xf6, 0xdb, 0xfe, 0x9b, 0x9f, 0xf9, 0x74, 0xd7, 0xf1, 0xbf, 0xb3, 0xea, 0x74, 0x03, 0x93, 0x89, 0x85, 0xb1, 0x61, 0x43, 0x48, 0xba, 0x7e, 0xa9, 0x57, 0x48, 0xe8, 0xf7, 0xd5, 0xeb, 0x0f, 0x70, 0x5e, 0xc8, 0xc8, 0x9b, 0x0d, 0x1a, 0xb5, 0xd6, 0x2b, 0x3d, 0x33, 0xb6, 0x78, 0xf1, 0xe2, 0xca, 0xfb, 0xa0, 0x57, 0x70, 0xea, 0x35, 0x1b, 0x34, 0x4a, 0x5f, 0x4e, 0x3b, 0x88, 0xe5, 0xcd, 0x48, 0xe5, 0x1d, 0xbb, 0x1d, 0xa2, 0xf2, 0xb6, 0x1b, 0xf6, 0xf3, 0x61, 0xea, 0xdd, 0x7a, 0xd5, 0xfe, 0xc1, 0xa4, 0xcc, 0x6a, 0xce, 0x98, 0x58, 0x10, 0x8b, 0x97, 0xa8, 0xa5, 0x1b, 0xbb, 0xe9, 0x90, 0x03, 0x06, 0x6e, 0x7f, 0xef, 0x7b, 0x8f, 0xe8, 0xea, 0xa0, 0x58, 0x98, 0x73, 0xd0, 0x3e, 0x71, 0xcf, 0x36, 0xdd, 0x49, 0x71, 0x4f, 0xd7, 0xe0, 0xa4, 0x0e, 0x45, 0xfb, 0xa3, 0x84, 0x90, 0x7e, 0x35, 0x57, 0xbd, 0x66, 0xbc, 0xc6, 0x0d, 0x62, 0x83, 0x6a, 0xbd, 0xda, 0x9e, 0x7c, 0xf2, 0xc9, 0xd6, 0x7e, 0xeb, 0xd6, 0xad, 0xeb, 0xfb, 0x14, 0xe4, 0xb0, 0x7d, 0x10, 0x75, 0x72, 0xed, 0xef, 0x45, 0xfd, 0x5c, 0x5e, 0x9d, 0x59, 0x36, 0x38, 0xf5, 0x9b, 0x51, 0xcb, 0xeb, 0xc3, 0xba, 0x06, 0xb1, 0xf4, 0x8c, 0x56, 0xbf, 0x3a, 0xb3, 0xf4, 0xbe, 0xd9, 0xfd, 0x07, 0x05, 0xb1, 0x7e, 0x33, 0x5d, 0xbd, 0xce, 0x31, 0x7b, 0x9e, 0x61, 0xbb, 0xef, 0xde, 0xd2, 0x75, 0x2e, 0x61, 0x9b, 0x25, 0x4b, 0x3a, 0xea, 0x1e, 0xfd, 0x2e, 0x60, 0x5a, 0x66, 0x35, 0x67, 0x4c, 0x24, 0x88, 0xc5, 0xfd, 0xd9, 0xec, 0x3a, 0x4f, 0x79, 0x4b, 0x05, 0xc4, 0xda, 0x50, 0xd9, 0x0e, 0xba, 0x75, 0xe5, 0x07, 0xf2, 0x9f, 0x94, 0xc8, 0xac, 0x0f, 0x15, 0x1d, 0x6d, 0x80, 0x32, 0x8b, 0x41, 0x6c, 0x98, 0x20, 0x35, 0xee, 0xfe, 0x83, 0x6a, 0xbd, 0xd2, 0x01, 0x2d, 0xaf, 0x4d, 0xa3, 0xd4, 0x88, 0xc5, 0xad, 0xda, 0x51, 0x6b, 0xba, 0xca, 0xec, 0xc3, 0x3a, 0x04, 0xb1, 0x71, 0x67, 0xb4, 0x06, 0xed, 0x3f, 0xcc, 0xcc, 0xda, 0x28, 0x35, 0x62, 0xed, 0xba, 0x47, 0x98, 0x86, 0x59, 0xce, 0x19, 0x13, 0x09, 0x62, 0x8f, 0xbd, 0xe4, 0xf9, 0x1d, 0x27, 0x3d, 0x68, 0xea, 0x6f, 0x43, 0xea, 0x1d, 0x20, 0xd9, 0x0e, 0xba, 0xe5, 0xcc, 0x8f, 0xe5, 0xee, 0x77, 0xdb, 0xa9, 0x27, 0x75, 0xbd, 0x3b, 0xe4, 0x6b, 0x97, 0xa9, 0x5b, 0x40, 0x10, 0x1b, 0xf4, 0x79, 0xaf, 0x3a, 0xb7, 0x49, 0x05, 0xb1, 0xa8, 0x97, 0xeb, 0x17, 0xc6, 0x66, 0x3d, 0x88, 0x65, 0xeb, 0xa9, 0x62, 0x56, 0x29, 0x3d, 0xbb, 0x94, 0x9e, 0x4d, 0xaa, 0x2a, 0x88, 0xb5, 0x7f, 0x76, 0xaf, 0xd9, 0xac, 0xd0, 0xde, 0x37, 0x7b, 0xfd, 0x87, 0x09, 0x62, 0xed, 0xba, 0x47, 0xbf, 0x07, 0x98, 0x96, 0x59, 0xce, 0x19, 0x95, 0x07, 0xb1, 0xec, 0x3a, 0x4f, 0x45, 0xdf, 0x4a, 0x1b, 0x4f, 0x2f, 0x64, 0x3b, 0xe8, 0xc6, 0xf3, 0xce, 0x29, 0xb4, 0x6f, 0x76, 0x7d, 0xa8, 0x4d, 0x07, 0xef, 0x6f, 0xa0, 0x22, 0x88, 0x0d, 0xf8, 0xbc, 0xc8, 0xd3, 0x7a, 0x55, 0x05, 0xb1, 0x76, 0x8d, 0x5d, 0x91, 0x3a, 0xb3, 0x59, 0x0b, 0x62, 0x45, 0xdf, 0x23, 0x56, 0x65, 0x10, 0xcb, 0x9b, 0xf9, 0xea, 0x37, 0x2b, 0x3a, 0xe8, 0x9c, 0xe3, 0x3a, 0xb5, 0xc5, 0x7e, 0x71, 0xfd, 0xfc, 0x0e, 0x60, 0x5a, 0x66, 0x3d, 0x67, 0x54, 0x1a, 0xc4, 0xae, 0x5b, 0x7d, 0x61, 0x57, 0x61, 0xdb, 0xb7, 0x3f, 0x51, 0xec, 0x58, 0x37, 0x5c, 0x70, 0x5e, 0x57, 0x07, 0x45, 0xa1, 0x5c, 0x91, 0x7d, 0xe3, 0x71, 0x54, 0xeb, 0x50, 0x22, 0x88, 0x8d, 0x56, 0x23, 0xd6, 0xef, 0x89, 0xc3, 0x78, 0x17, 0x5a, 0x55, 0x41, 0xac, 0x68, 0x3f, 0xce, 0x5a, 0x10, 0xeb, 0x37, 0x0b, 0x95, 0x9e, 0x09, 0x4b, 0xcf, 0x06, 0x56, 0x11, 0xc4, 0xb2, 0x33, 0x5f, 0xbd, 0xc4, 0x6c, 0x58, 0xf6, 0x81, 0x13, 0x45, 0xf9, 0xcc, 0x82, 0x26, 0xe4, 0x8c, 0x4a, 0x83, 0x58, 0x76, 0x9d, 0xa7, 0x78, 0xf4, 0xb3, 0xe8, 0xbe, 0xf1, 0x08, 0x69, 0xb6, 0x83, 0xae, 0x59, 0x73, 0x69, 0xe1, 0xfd, 0xb3, 0xeb, 0x43, 0xfd, 0xf5, 0xb5, 0xbb, 0x19, 0xb4, 0x08, 0x62, 0x25, 0x3c, 0x35, 0x29, 0x88, 0x8d, 0x5e, 0x23, 0xd6, 0xeb, 0x96, 0x5e, 0xba, 0x0d, 0x55, 0xd6, 0x88, 0xf5, 0x9a, 0xcd, 0xca, 0xce, 0x68, 0x09, 0x62, 0xcc, 0x9a, 0x26, 0xe4, 0x8c, 0xca, 0x82, 0x58, 0xd7, 0x3a, 0x4f, 0x8b, 0x76, 0x18, 0xaa, 0x81, 0x5f, 0xfd, 0xfc, 0x65, 0x1d, 0x0d, 0x8c, 0xfd, 0xe3, 0x45, 0x6d, 0x45, 0xf7, 0xbf, 0x6a, 0xfd, 0xfa, 0x56, 0xb1, 0x5e, 0x3a, 0xad, 0xde, 0x79, 0xd2, 0xfb, 0x0c, 0x5c, 0x04, 0x31, 0x41, 0xac, 0x16, 0x41, 0xac, 0x5d, 0x57, 0x35, 0xc9, 0x20, 0xd6, 0x9e, 0xf9, 0x1a, 0xb5, 0xde, 0x4d, 0x10, 0xa3, 0x4e, 0x9a, 0x92, 0x33, 0x2a, 0x0b, 0x62, 0xff, 0x7c, 0xc5, 0x8b, 0x3b, 0x4e, 0x2e, 0x96, 0x1c, 0x18, 0x66, 0xff, 0x68, 0x60, 0x7a, 0xa1, 0xcd, 0xc7, 0x16, 0x0f, 0xff, 0xd6, 0xe6, 0x7b, 0x8f, 0x3d, 0xbc, 0xe3, 0x22, 0xfd, 0xfb, 0x65, 0x2f, 0x30, 0x78, 0x11, 0xc4, 0x46, 0xfc, 0xbc, 0xca, 0x1a, 0xb1, 0xff, 0x87, 0x20, 0xd6, 0x6f, 0x16, 0x6a, 0x92, 0x41, 0x2c, 0xaf, 0x96, 0x4b, 0x10, 0x63, 0x96, 0x34, 0x25, 0x67, 0x54, 0x12, 0xc4, 0xee, 0x3f, 0xea, 0x5d, 0xa5, 0x2c, 0x90, 0x19, 0x9d, 0x32, 0x6e, 0x88, 0x7a, 0x64, 0x8f, 0x9d, 0x3a, 0x2e, 0xd4, 0xcf, 0x8e, 0x38, 0xd4, 0x00, 0xa6, 0x74, 0xd9, 0x62, 0xf7, 0x41, 0x21, 0x24, 0xb6, 0x6d, 0x5a, 0x10, 0x4b, 0xd7, 0x98, 0x15, 0x5d, 0xe6, 0x29, 0xf6, 0x69, 0xf7, 0x45, 0xfc, 0xbb, 0xc8, 0x31, 0xb2, 0x9f, 0x67, 0x6b, 0xdb, 0xea, 0x1c, 0xc4, 0xfa, 0xed, 0x3f, 0xc9, 0x20, 0x36, 0x4e, 0x5b, 0xfa, 0x3d, 0x60, 0x90, 0xbe, 0x8e, 0x30, 0x29, 0x4d, 0xca, 0x19, 0xa5, 0x07, 0xb1, 0x78, 0x6f, 0x47, 0x3a, 0x61, 0xc6, 0x49, 0xfd, 0xf0, 0x43, 0x27, 0x8f, 0xd4, 0xb8, 0xf4, 0xea, 0xe9, 0x0f, 0xef, 0xb9, 0x70, 0xa4, 0x63, 0xc4, 0x5b, 0x6f, 0xd3, 0x17, 0xeb, 0x89, 0x85, 0xcf, 0x4e, 0xae, 0xbd, 0x68, 0xb5, 0x81, 0x4c, 0x65, 0x21, 0xac, 0x48, 0x08, 0x89, 0x05, 0x96, 0xcb, 0x0c, 0x62, 0xc3, 0xdc, 0x5a, 0x1c, 0xe5, 0x9d, 0x5d, 0x79, 0x41, 0x6c, 0xd8, 0x25, 0x8e, 0xb2, 0x7d, 0x31, 0xea, 0x39, 0x95, 0x19, 0x46, 0x05, 0xb1, 0x0d, 0x63, 0xbd, 0x47, 0x2c, 0xbd, 0x80, 0x3c, 0x54, 0xa9, 0x69, 0x39, 0xa3, 0xf4, 0x20, 0x36, 0xcc, 0x3a, 0x4f, 0x79, 0xd2, 0xab, 0x9d, 0xc7, 0x1b, 0x73, 0x47, 0x3d, 0xce, 0xef, 0x0f, 0x7c, 0xbd, 0x75, 0x28, 0xa9, 0xcc, 0x28, 0xb3, 0x41, 0xed, 0xdb, 0x3b, 0x82, 0xd8, 0xe8, 0x8b, 0x74, 0x0b, 0x62, 0xf5, 0x0a,
		0x62, 0x61, 0xed, 0xda, 0xb5, 0x7e, 0x27, 0x50, 0xb9, 0xa6, 0xe5, 0x8c, 0x52, 0x83, 0x58, 0xbc, 0x93, 0x23, 0x9b, 0x0a,
		0x8b, 0x3e, 0x0a,
		0xda, 0x4b, 0x74, 0x6e, 0x19, 0x4f, 0x3d, 0xc6, 0x93, 0x11, 0xd9, 0xc7, 0x4c, 0xbf, 0x77, 0xfa, 0x47, 0x0c, 0x68, 0x2a, 0xaf, 0x0d, 0xcb, 0xab, 0x93, 0xaa, 0xe2, 0xf5, 0x13, 0xc3, 0xdc, 0xd6, 0x2b, 0xb2, 0x5f, 0xd1, 0x35, 0x27, 0x87, 0xfd, 0x2a, 0xb2, 0x4c, 0x53, 0x59, 0xa1, 0xb2, 0x0e, 0x6b, 0x4d, 0xf6, 0xdb, 0x3f, 0xc2, 0xcb, 0xa4, 0xd6, 0x9a, 0x1c, 0xe5, 0xff, 0x54, 0x58, 0x6b, 0x92, 0x3a, 0x69, 0x62, 0xce, 0x28, 0x35, 0x88, 0x65, 0xd7, 0x79, 0xfa, 0xe5, 0xa1, 0x6f, 0x1d, 0xab, 0xc3, 0xe3, 0xc5, 0x6a, 0xd1, 0x31, 0x71, 0xdc, 0xa2, 0xef, 0x05, 0xe9, 0x27, 0xbb, 0x3e, 0xd4, 0x3f, 0x5e, 0xb5, 0x8b, 0x41, 0x4d, 0x63, 0x82, 0x58, 0x91, 0xdb, 0xa3, 0xd9, 0xcf, 0x63, 0x9f, 0x22, 0xfb, 0x09, 0x62, 0xd5, 0x06, 0xb1, 0xd0, 0xeb, 0xf6, 0xec, 0x34, 0x82, 0x58, 0xaf, 0xf1, 0x20, 0x88, 0x51, 0x27, 0x4d, 0xcc, 0x19, 0xa5, 0x05, 0xb1, 0x78, 0x64, 0x33, 0x7d, 0x02, 0x9b, 0x77, 0x7d, 0x5e, 0x72, 0xd5, 0xba, 0x2b, 0x6a, 0x75, 0x01, 0xbb, 0xd6, 0x87, 0x3a, 0xf6, 0x70, 0x03, 0x9b, 0x4a, 0x6e, 0x4d, 0x16, 0xd1, 0x6f, 0x26, 0x64, 0x58, 0xf1, 0xf3, 0x07, 0x15, 0xbc, 0xe7, 0x15, 0x57, 0x17, 0xdd, 0xaf, 0xce, 0xfa, 0xcd, 0xee, 0x0d, 0xdb, 0x87, 0x55, 0x5d, 0xff, 0x22, 0xc7, 0x1f, 0xf5, 0x3a, 0x14, 0xdd, 0xa7, 0x68, 0x1b, 0xc7, 0x19, 0x0f, 0x6e, 0x4d, 0x52, 0xa5, 0xa6, 0xe6, 0x8c, 0xd2, 0x82, 0x58, 0x3c, 0x6d, 0x30, 0xec, 0x3a, 0x4f, 0x45, 0xa7, 0xfb, 0xca, 0x2a, 0xae, 0xbf, 0xf5, 0xc3, 0xa7, 0x74, 0x2d, 0x0a,
		0x1a, 0xef, 0x11, 0x31, 0xc0, 0x29, 0xbb, 0x58, 0x3f, 0x4f, 0xbb, 0xb0, 0x79, 0x50, 0xa1, 0x7a, 0x51, 0xd9, 0x50, 0x35, 0xcc, 0xf6, 0xe3, 0xb4, 0xa1, 0x2c, 0x65, 0xf5, 0xc1, 0x38, 0x6d, 0x18, 0xe7, 0xa9, 0xbf, 0x51, 0xfb, 0xbc, 0xac, 0xb1, 0x14, 0xfb, 0x14, 0xe9, 0xc3, 0x61, 0xda, 0x38, 0xce, 0x98, 0x86, 0xaa, 0x34, 0x35, 0x67, 0x94, 0x12, 0xc4, 0xb2, 0xd3, 0x71, 0x45, 0xd7, 0x79, 0xca, 0xb3, 0xe9, 0x90, 0x03, 0x5a, 0xc7, 0x0d, 0xbf, 0x7b, 0xeb, 0x1b, 0x4a, 0x39, 0x66, 0xd7, 0xfa, 0x50, 0x5b, 0x7e, 0x86, 0x01, 0x4e, 0x19, 0x61, 0x6c, 0x94, 0xd9, 0xa8, 0x41, 0xfb, 0xb6, 0xb7, 0xcd, 0xfb, 0xbc, 0xe8, 0xb9, 0xe4, 0xbd, 0x66, 0x60, 0xd8, 0x99, 0x90, 0xbc, 0xf3, 0x1b, 0xa6, 0x2f, 0xca, 0x38, 0xc6, 0x38, 0x6d, 0xa8, 0xea, 0xfa, 0x8f, 0x72, 0xfc, 0xb2, 0x67, 0x36, 0x47, 0x6d, 0xe3, 0x38, 0x63, 0x1a, 0xca, 0xd6, 0xe4, 0x9c, 0x51, 0x4a, 0x10, 0x4b, 0xbf, 0x87, 0x23, 0x1a, 0x73, 0xd3, 0xb9, 0x67, 0x8f, 0xdd, 0x90, 0x1f, 0x7c, 0xf4, 0xd4, 0xae, 0xc2, 0xb7, 0x78, 0x44, 0x74, 0xdc, 0xe3, 0xc6, 0xfd, 0xe0, 0xec, 0xd4, 0xa6, 0x41, 0x0e, 0x00, 0xf5, 0xd5, 0xe4, 0x9c, 0x31, 0x76, 0x10, 0xcb, 0xbe, 0x3f, 0x63, 0x9c, 0xc7, 0x48, 0xd3, 0xee, 0x3a, 0xe1, 0x98, 0xae, 0x35, 0xa0, 0xee, 0x38, 0xe5, 0x84, 0x52, 0x8e, 0xfd, 0x87, 0x25, 0xfb, 0x74, 0x74, 0xfc, 0x2d, 0x67, 0x7d, 0xdc, 0x40, 0x07, 0x80, 0x1a, 0x6a, 0x7a, 0xce, 0x18, 0x3b, 0x88, 0xc5, 0x3d, 0xda, 0x74, 0x23, 0xee, 0x3e, 0xee, 0xa8, 0x52, 0x1a, 0x71, 0xf5, 0x17, 0x3e, 0xdf, 0x91, 0x80, 0x23, 0x51, 0x7e, 0xe5, 0xf2, 0xcb, 0x4b, 0x39, 0xf6, 0xed, 0x1f, 0x5c, 0xd1, 0x71, 0xce, 0x65, 0xdd, 0x67, 0x06, 0x00, 0xca, 0xd5, 0xf4, 0x9c, 0x31, 0x76, 0x10, 0x8b, 0x0e, 0x49, 0xff, 0xb0, 0x1f, 0x9d, 0x5c, 0x5e, 0xad, 0xc0, 0xb5, 0x17, 0x5f, 0x94, 0xfc, 0xf2, 0x9d, 0x07, 0xb6, 0x56, 0x38, 0xbf, 0x6e, 0xf5, 0x85, 0xa5, 0x1d, 0x37, 0xa6, 0x23, 0xd3, 0xe7, 0x7c, 0xcf, 0xf2, 0x23, 0x0d, 0x76, 0x00, 0xa8, 0xa1, 0xa6, 0xe7, 0x8c, 0xb1, 0x83, 0xd8, 0x6d, 0xa7, 0x9e, 0x54, 0xea, 0x3b, 0x3d, 0x26, 0x21, 0xd6, 0xa8, 0x4a, 0x9f, 0x73, 0xb4, 0xc1, 0x60, 0x07, 0x80, 0xfa, 0x69, 0x7a, 0xce, 0x18, 0x3b, 0x88, 0xc5, 0x23, 0x9f, 0xe9, 0x7b, 0xb7, 0x8f, 0xee, 0x36, 0x57, 0xfb, 0x0e, 0x4a, 0xaf, 0x2d, 0x15, 0xe7, 0x1e, 0x89, 0xd8, 0x60, 0x07, 0x80, 0xfa, 0x69, 0x7a, 0xce, 0x28, 0xe5, 0xa9, 0xc9, 0x78, 0x2b, 0x6d, 0xfa, 0x07, 0x6e, 0x3a, 0x78, 0xff, 0xda, 0x76, 0x4e, 0xac, 0x07, 0x95, 0xbe, 0xa0, 0xe3, 0xac, 0x2d, 0x05, 0x00, 0x54, 0xaf, 0xc9, 0x39, 0xa3, 0x94, 0x20, 0xf6, 0xdd, 0x33, 0x3e, 0xda, 0xf5, 0x08, 0x68, 0x2c, 0x78, 0x19, 0x4f, 0x3a, 0x5c, 0xb5, 0x7e, 0xfd, 0xd4, 0x3b, 0x25, 0xce, 0x21, 0xce, 0xe5, 0x8f, 0xfb, 0xbf, 0xba, 0xeb, 0x3c, 0x6f, 0x5d, 0xf9, 0x01, 0x83, 0x1c, 0x00, 0x6a, 0xac, 0xc9, 0x39, 0xa3, 0xb4, 0x37, 0xeb, 0x47, 0xa1, 0x5b, 0xfa, 0x87, 0xa7, 0xdf, 0x2a, 0x1b, 0xd3, 0x88, 0xd3, 0x14, 0xe7, 0x90, 0x3d, 0xaf, 0xba, 0x27, 0x6a, 0x00, 0xa0, 0xf9, 0x39, 0xa3, 0xd4, 0x45, 0xbf, 0x7f, 0xf7, 0x96, 0x7d, 0x7b, 0x76, 0x52, 0xdd, 0xc4, 0x39, 0xfe, 0xf6, 0xed, 0x6f, 0x34, 0xb0, 0x01, 0x60, 0x86, 0x34, 0x31, 0x67, 0x94, 0x1a, 0xc4, 0x42, 0x3c, 0xa2, 0x19, 0xef, 0xe2, 0xa8, 0x6b, 0xe7, 0xc4, 0xb9, 0xdd, 0x77, 0x8c, 0x35, 0xd1, 0x00, 0x60, 0x16, 0x35, 0x2d, 0x67, 0x94, 0x1e, 0xc4, 0x5a, 0xf7, 0x4a, 0xd7, 0x5d, 0x91, 0xdc, 0xfe, 0xfe, 0x13, 0x93, 0xdf, 0x1c, 0xb4, 0x5f, 0xf2, 0x97, 0x7d, 0x76, 0x6f, 0xad, 0xbb, 0x34, 0x4d, 0x71, 0x0e, 0x91, 0x4c, 0xe3, 0x9c, 0xea, 0x70, 0x2f, 0x19, 0x00, 0x18, 0xa3, 0x26, 0xab, 0x41, 0x39, 0xa3, 0x92, 0x20, 0x06, 0x00, 0x80, 0x20, 0x06, 0x00, 0x20, 0x88, 0x01, 0x00, 0x20, 0x88, 0x01, 0x00, 0x08, 0x62, 0x00, 0x00, 0x82, 0x98, 0x20, 0x06, 0x00, 0x20, 0x88, 0x01, 0x00, 0x08, 0x62, 0x82, 0x18, 0x00, 0x80, 0x20, 0x06, 0x00, 0x20, 0x88, 0x01, 0x00, 0x20, 0x88, 0x01, 0x00, 0x08, 0x62, 0x00, 0x00, 0x08, 0x62, 0x00, 0x00, 0x82, 0x18, 0x00, 0x00, 0x82, 0x18, 0x00, 0x80, 0x20, 0x06, 0x00, 0x80, 0x20, 0x06, 0x00, 0x20, 0x88, 0x01, 0x00, 0x08, 0x62, 0x82, 0x18, 0x00, 0x80, 0x20, 0x06, 0x00, 0x20, 0x88, 0x09, 0x62, 0x00, 0x00, 0x82, 0x18, 0x00, 0x80, 0x20, 0x06, 0x00, 0x80, 0x20, 0x06, 0x00, 0x20, 0x88, 0x01, 0x00, 0x20, 0x88, 0x01, 0x00, 0x08, 0x62, 0x00, 0x00, 0x08, 0x62, 0x00, 0x00, 0x82, 0x18, 0x00, 0x00, 0x82, 0x18, 0x00, 0x80, 0x20, 0x06, 0x00, 0x20, 0x88, 0x09, 0x62, 0x00, 0x00, 0x82, 0x18, 0x00, 0x80, 0x20, 0x26, 0x88, 0x01, 0x00, 0x08, 0x62, 0x00, 0x00, 0x82, 0x18, 0x00, 0x00, 0x82, 0x18, 0x00, 0x80, 0x20, 0x06, 0x00, 0x80, 0x20, 0x06, 0x00, 0x20, 0x88, 0x01, 0x00, 0x20, 0x88, 0x01, 0x00, 0x08, 0x62, 0x00, 0x00, 0x08, 0x62, 0x00, 0x00, 0x82, 0x18, 0x00, 0x80, 0x20, 0x26, 0x88, 0x01, 0x00, 0x08, 0x62, 0x00, 0x00, 0x82, 0x98, 0x20, 0x06, 0x00, 0x20, 0x88, 0x01, 0x00, 0x08, 0x62, 0x00, 0x00, 0x08, 0x62, 0x00, 0x00, 0x82, 0x18, 0x00, 0x00, 0x82, 0x18, 0x00, 0x80, 0x20, 0x06, 0x00, 0x80, 0x20, 0x06, 0x00, 0x20, 0x88, 0x01, 0x00, 0x20, 0x88, 0x01, 0x00, 0x08, 0x62, 0x00, 0x00, 0x82, 0x98, 0x20, 0x06, 0x00, 0x20, 0x88, 0x01, 0x00, 0x08, 0x62, 0x82, 0x18, 0x00, 0x80, 0x20, 0x06, 0x00, 0x20, 0x88, 0x01, 0x00, 0x20, 0x88, 0x01, 0x00, 0x08, 0x62, 0x00, 0x00, 0x08, 0x62, 0x00, 0x00, 0x82, 0x18, 0x00, 0x00, 0x82, 0x18, 0x00, 0x80, 0x20, 0x06, 0x00, 0x80, 0x20, 0x06, 0x00, 0x20, 0x88, 0x01, 0x00, 0x08, 0x62, 0x82, 0x18, 0x00, 0x80, 0x20, 0x06, 0x00, 0x20, 0x88, 0x09, 0x62, 0x00, 0x00, 0x82, 0x18, 0x00, 0x80, 0x20, 0x06, 0x00, 0x80, 0x20, 0x06, 0x00, 0x20, 0x88, 0x01, 0x00, 0x20, 0x88, 0x01, 0x00, 0x08, 0x62, 0x00, 0x00, 0x08, 0x62, 0x00, 0x00, 0x82, 0x18, 0x00, 0x00, 0x82, 0x18, 0x00, 0x80, 0x20, 0x06, 0x00, 0x20, 0x88, 0x09, 0x62, 0x00, 0x00, 0x82, 0x18, 0x00, 0x80, 0x20, 0x26, 0x88, 0x01, 0x00, 0x08, 0x62, 0x00, 0x00, 0x82, 0x18, 0x00, 0x00, 0x82, 0x18, 0x00, 0x40, 0xf3, 0x82, 0xd8, 0xc6, 0x6c, 0x10, 0x03, 0x00, 0xa0, 0x7c, 0x99, 0x10, 0x16, 0x19, 0x6c, 0xc1, 0xf9, 0x3d, 0xd2, 0x19, 0x00, 0x00, 0xd5, 0x8a, 0x0c, 0xb6, 0x60, 0x6e, 0x8b, 0xcd, 0x3a, 0x03, 0x00, 0x60, 0x62, 0x36, 0xb7, 0x32, 0x58, 0x92, 0xb4, 0x6e, 0x4f, 0xce, 0x0b, 0x63, 0x00, 0x00, 0x13, 0x0b, 0x61, 0xf3, 0xad, 0x0c, 0x16, 0xff, 0xd8, 0x1a, 0xc6, 0xe6, 0xb6, 0x4e, 0x91, 0x6d, 0xd4, 0x41, 0x00, 0x00, 0xa5, 0xdb, 0xb8, 0x35, 0x6b, 0xcd, 0xb5, 0xf3, 0xd7, 0xff, 0x00, 0x26, 0x5c, 0x05, 0x9c, 0x87, 0x4e, 0xe4, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}
