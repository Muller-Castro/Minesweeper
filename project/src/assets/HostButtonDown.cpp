/****************************************************************************************/
/* HostButtonDown.cpp                                                                   */
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

#include "assets/HostButtonDown.h"

#include <vector>

std::pair<std::string, std::string> Minesweeper::get_raw_host_button_down()
{
	std::pair<std::string, std::string> result = std::make_pair("HostButtonDown", "");

	std::vector<short> raw_data {
		
		0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a,
		0x1a, 0x0a,
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x28, 0x08, 0x06, 0x00, 0x00, 0x00, 0x38, 0xf4, 0x4e, 0x62, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 0x42, 0x01, 0xd9, 0xc9, 0x2c, 0x7f, 0x00, 0x00, 0x00, 0x20, 0x63, 0x48, 0x52, 0x4d, 0x00, 0x00, 0x7a, 0x26, 0x00, 0x00, 0x80, 0x84, 0x00, 0x00, 0xfa, 0x00, 0x00, 0x00, 0x80, 0xe8, 0x00, 0x00, 0x75, 0x30, 0x00, 0x00, 0xea, 0x60, 0x00, 0x00, 0x3a, 0x98, 0x00, 0x00, 0x17, 0x70, 0x9c, 0xba, 0x51, 0x3c, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x13, 0x00, 0x00, 0x0b, 0x13, 0x01, 0x00, 0x9a, 0x9c, 0x18, 0x00, 0x00, 0x08, 0x72, 0x49, 0x44, 0x41, 0x54, 0x78, 0xda, 0xed, 0x9c, 0x77, 0x68, 0x15, 0xdd, 0x16, 0xc5, 0x23, 0x76, 0x45, 0x14, 0x15, 0x1b, 0xa8, 0xe8, 0x67, 0x43, 0xf4, 0x13, 0x04, 0x7b, 0xaf, 0xd8, 0xbb, 0x82, 0xbd, 0xa0, 0xe2, 0xb3, 0x3c, 0x3b, 0x8a, 0x05, 0x1b, 0x16, 0xac, 0x58, 0x50, 0xb0, 0x8b, 0x5d, 0x63, 0x45, 0xd1, 0xa7, 0xa8, 0x7f, 0xd8, 0x7b, 0xef, 0x15, 0x0b, 0xf6, 0xae, 0x49, 0x2c, 0x71, 0xbf, 0xf9, 0x6d, 0xb2, 0x87, 0x31, 0xb9, 0x37, 0xd6, 0x44, 0x93, 0xcc, 0x81, 0x85, 0xd7, 0x33, 0x67, 0xce, 0xb9, 0x73, 0xd6, 0x2e, 0x6b, 0xf6, 0x4c, 0x6e, 0x48, 0xad, 0x5a, 0xb5, 0x42, 0xa2, 0x90, 0xcc, 0x41, 0x69, 0x07, 0xff, 0x75, 0x10, 0xe6, 0xe0, 0x95, 0x8f, 0x44, 0x81, 0xd7, 0x0e, 0x9e, 0x39, 0x68, 0xe5, 0xe0, 0x5f, 0xe3, 0xdb, 0x48, 0x2f, 0xe3, 0xa0, 0x9f, 0x83, 0x33, 0x0e, 0x5e, 0x3a, 0x10, 0x1f, 0x89, 0x0e, 0x2f, 0x1c, 0xfc, 0xcf, 0xc1, 0x7f, 0x1c, 0xfc, 0x03, 0xe9, 0xc5, 0x1c, 0x1c, 0x73, 0xf0, 0xde, 0xdf, 0x9c, 0x44, 0x8f, 0x48, 0x07, 0x6f, 0x1d, 0x84, 0x42, 0xfc, 0x39, 0x7f, 0x43, 0x92, 0x1c, 0x22, 0x20, 0xfe, 0x93, 0xbf, 0x11, 0x49, 0x0e, 0xe1, 0x21, 0x51, 0x42, 0xce, 0xdf, 0x8c, 0xa4, 0x85, 0x30, 0x9f, 0x78, 0x9f, 0x78, 0x1f, 0x3e, 0xf1, 0x71, 0x84, 0x9a, 0x35, 0x6b, 0x4a, 0xa5, 0x4a, 0x95, 0xa4, 0x5c, 0xb9, 0x72, 0x52, 0xa6, 0x4c, 0x19, 0x45, 0xd9, 0xb2, 0x65, 0xa5, 0x62, 0xc5, 0x8a, 0x52, 0xa3, 0x46, 0x0d, 0x9f, 0x90, 0xc4, 0x46, 0x7c, 0xed, 0xda, 0xb5, 0xa5, 0x4a, 0x95, 0x2a, 0x52, 0xb9, 0x72, 0x65, 0xe9, 0xd6, 0xad, 0x9b, 0x8c, 0x1e, 0x3d, 0x5a, 0xa6, 0x4d, 0x9b, 0xa6, 0x18, 0x3f, 0x7e, 0xbc, 0xf4, 0xee, 0xdd, 0x5b, 0x8d, 0x02, 0x03, 0xf8, 0x95, 0x75, 0x58, 0x03, 0x63, 0x2a, 0x55, 0xaa, 0x94, 0x02, 0x03, 0xab, 0x5a, 0xb5, 0xaa, 0x54, 0xaf, 0x5e, 0x5d, 0x3f, 0x5b, 0x3f, 0x63, 0xf8, 0x2e, 0xf1, 0x71, 0xdd, 0x18, 0x74, 0xf9, 0xf2, 0xe5, 0xdd, 0xb5, 0x4b, 0x97, 0x2e, 0xad, 0xc6, 0x9f, 0x24, 0x88, 0xaf, 0x56, 0xad, 0x9a, 0x74, 0xee, 0xdc, 0x59, 0x76, 0xef, 0xde, 0x2d, 0x8f, 0x1e, 0x3d, 0x92, 0xe8, 0xed, 0xe5, 0xcb, 0x97, 0x72, 0xf8, 0xf0, 0x61, 0xe9, 0xdf, 0xbf, 0xbf, 0x92, 0xf4, 0xb3, 0x6b, 0xf4, 0xea, 0xd5, 0x4b, 0x56, 0xaf, 0x5e, 0x2d, 0x3b, 0x76, 0xec, 0x50, 0xcc, 0x9f, 0x3f, 0x5f, 0xba, 0x74, 0xe9, 0x22, 0xcd, 0x9a, 0x35, 0x93, 0xd9, 0xb3, 0x67, 0xbb, 0xfd, 0x6b, 0xd6, 0xac, 0x91, 0x3e, 0x7d, 0xfa, 0xa8, 0x51, 0xc4, 0xe5, 0x75, 0x33, 0x7f, 0xe3, 0xc6, 0x8d, 0x65, 0xfa, 0xf4, 0xe9, 0xee, 0xda, 0xa1, 0xa1, 0xa1, 0x32, 0x68, 0xd0, 0x20, 0x3d, 0x86, 0xb1, 0x27, 0x6a, 0xe2, 0xb1, 0xf8, 0x7d, 0xfb, 0xf6, 0xb9, 0x44, 0x7f, 0xfc, 0xf8, 0x51, 0xc2, 0xc2, 0xc2, 0x14, 0x1f, 0x3e, 0x7c, 0x70, 0xfb, 0xef, 0xde, 0xbd, 0xfb, 0x53, 0x9b, 0x81, 0xb1, 0xf4, 0xeb, 0xd7, 0x4f, 0x9e, 0x3d, 0x7b, 0x16, 0xc3, 0xa8, 0x1e, 0x3c, 0x78, 0x20, 0xb7, 0x6e, 0xdd, 0x8a, 0xd1, 0xff, 0xea, 0xd5, 0x2b, 0x8d, 0x3c, 0x46, 0x3e, 0x9e, 0x19, 0x08, 0xc1, 0xd6, 0x0c, 0x36, 0x1e, 0x70, 0x0d, 0x18, 0x62, 0xc3, 0x86, 0x0d, 0x65, 0xef, 0xde, 0xbd, 0x31, 0xd6, 0x7e, 0xf7, 0xee, 0x9d, 0xac, 0x58, 0xb1, 0x42, 0xc7, 0xd8, 0xf8, 0x44, 0x47, 0x3c, 0x17, 0xd7, 0xb4, 0x69, 0x53, 0x77, 0xf3, 0x97, 0x2c, 0x59, 0x22, 0x05, 0x0a,
		0x14, 0x90, 0xb4, 0x69, 0xd3, 0x2a, 0xb2, 0x67, 0xcf, 0xae, 0x04, 0x60, 0x0c, 0x18, 0x41, 0xd7, 0xae, 0x5d, 0xf5, 0x9c, 0x1f, 0x59, 0xa3, 0x42, 0x85, 0x0a,
		0xb2, 0x6b, 0xd7, 0x2e, 0x37, 0x7a, 0x9c, 0x3e, 0x7d, 0x5a, 0x71, 0xe7, 0xce, 0x1d, 0x77, 0xb3, 0x1f, 0x3f, 0x7e, 0x1c, 0xa3, 0x1f, 0x43, 0x83, 0x78, 0x42, 0xbf, 0x11, 0x60, 0x30, 0x83, 0x22, 0x45, 0x78, 0xd3, 0x02, 0x9f, 0xe9, 0x8b, 0x3e, 0xde, 0x7b, 0x1e, 0xa1, 0xbc, 0x64, 0xc9, 0x92, 0x32, 0x72, 0xe4, 0x48, 0x97, 0xe8, 0xb3, 0x67, 0xcf, 0xea, 0xda, 0x97, 0x2f, 0x5f, 0x96, 0xcf, 0x9f, 0x3f, 0x4b, 0x44, 0x44, 0x84, 0x74, 0xea, 0xd4, 0x49, 0xd7, 0x60, 0x3c, 0xce, 0x11, 0x8f, 0x3a, 0x27, 0x6e, 0x89, 0x67, 0x23, 0xd8, 0xd8, 0xe6, 0xcd, 0x9b, 0xcb, 0xcd, 0x9b, 0x37, 0x75, 0x13, 0xe6, 0xcd, 0x9b, 0x27, 0x99, 0x33, 0x67, 0x96, 0x90, 0x90, 0x10, 0x45, 0xca, 0x94, 0x29, 0x65, 0xf0, 0xe0, 0xc1, 0x4a, 0x7a, 0x78, 0x78, 0xb8, 0x74, 0xef, 0xde, 0xfd, 0x87, 0xc3, 0x20, 0x44, 0x5c, 0xb9, 0x72, 0x45, 0xe7, 0x5f, 0xba, 0x74, 0xa9, 0x3b, 0x37, 0xc7, 0xac, 0x0d, 0x1d, 0x3a, 0xd4, 0xed, 0xaf, 0x5f, 0xbf, 0xbe, 0x7c, 0xfa, 0xf4, 0x49, 0xd3, 0x0e, 0xfa, 0x62, 0xea, 0xd4, 0xa9, 0xb2, 0x6e, 0xdd, 0x3a, 0xd9, 0xb4, 0x69, 0x93, 0x6c, 0xdc, 0xb8, 0x51, 0xb1, 0x79, 0xf3, 0x66, 0xed, 0x9b, 0x31, 0x63, 0x86, 0xb4, 0x6f, 0xdf, 0x5e, 0x09, 0x02, 0xa4, 0xac, 0x99, 0x33, 0x67, 0xca, 0xfa, 0xf5, 0xeb, 0xbf, 0x1a, 0xef, 0x3d, 0x6f, 0xd1, 0xa2, 0x45, 0xba, 0xde, 0xe2, 0xc5, 0x8b, 0x75, 0xed, 0x6d, 0xdb, 0xb6, 0xb9, 0x6b, 0xe7, 0xcc, 0x99, 0x53, 0xae, 0x5d, 0xbb, 0xa6, 0xfd, 0x7b, 0xf6, 0xec, 0xd1, 0x39, 0x16, 0x2e, 0x5c, 0x28, 0xc3, 0x86, 0x0d, 0x93, 0x3a, 0x75, 0xea, 0x24, 0x6c, 0xe2, 0x21, 0x0d, 0xcf, 0x80, 0x40, 0xac, 0x99, 0x8d, 0x36, 0x62, 0xf0, 0xf8, 0xfc, 0xf9, 0xf3, 0xbb, 0x1b, 0x91, 0x35, 0x6b, 0x56, 0x19, 0x33, 0x66, 0x8c, 0x7a, 0xfc, 0xfb, 0xf7, 0xef, 0x75, 0x93, 0x39, 0x87, 0x73, 0x99, 0xe3, 0x7b, 0xbc, 0x00, 0xe2, 0x2f, 0x5d, 0xba, 0xa4, 0xf3, 0xaf, 0x5c, 0xb9, 0xd2, 0x9d, 0xbb, 0x51, 0xa3, 0x46, 0x2e, 0xf1, 0xa3, 0x46, 0x8d, 0x72, 0xfb, 0x5b, 0xb4, 0x68, 0xa1, 0x86, 0x46, 0xb8, 0x3f, 0x75, 0xea, 0x94, 0x7c, 0xab, 0x31, 0x37, 0xeb, 0x34, 0x69, 0xd2, 0x24, 0x60, 0xda, 0x08, 0xd4, 0x22, 0x23, 0x23, 0xe5, 0xde, 0xbd, 0x7b, 0x2e, 0xc1, 0xe9, 0xd2, 0xa5, 0xd3, 0xb5, 0x0b, 0x15, 0x2a, 0xf4, 0x55, 0x24, 0xf2, 0x8e, 0x9f, 0x35, 0x6b, 0xd6, 0x2f, 0x0b, 0xdc, 0x3f, 0x46, 0x3c, 0x5e, 0x41, 0x6e, 0x43, 0x64, 0xb1, 0x49, 0x80, 0x0b, 0x25, 0xb4, 0x99, 0x47, 0xe6, 0xcb, 0x97, 0xcf, 0x25, 0x21, 0x4b, 0x96, 0x2c, 0x4a, 0x3c, 0xc7, 0xbf, 0x7c, 0xf9, 0xa2, 0x9b, 0xc5, 0x39, 0xb7, 0x6f, 0xdf, 0xd6, 0xf0, 0xdd, 0xba, 0x75, 0xeb, 0x6f, 0x0a,
		0xbe, 0x9f, 0x21, 0x1e, 0x7d, 0x61, 0xed, 0xf5, 0xeb, 0xd7, 0xea, 0xc1, 0xcb, 0x96, 0x2d, 0x73, 0xc1, 0xf7, 0x44, 0x88, 0xbd, 0x7d, 0xfb, 0x56, 0xc7, 0x1c, 0x3c, 0x78, 0x50, 0xf3, 0xb2, 0xa5, 0x93, 0xb5, 0x6b, 0xd7, 0x7e, 0x35, 0xde, 0x80, 0xb7, 0x1f, 0x3d, 0x7a, 0xd4, 0x9d, 0xfb, 0xe2, 0xc5, 0x8b, 0x1a, 0xd1, 0xd2, 0xa4, 0x49, 0xa3, 0x6b, 0xe7, 0xce, 0x9d, 0x5b, 0xc5, 0x1e, 0x73, 0x31, 0x9e, 0xa8, 0x70, 0xf2, 0xe4, 0x49, 0x1d, 0x8b, 0x11, 0x62, 0xf4, 0xf1, 0x90, 0xf3, 0x7f, 0x3f, 0xf1, 0x90, 0x30, 0x65, 0xca, 0x94, 0xa0, 0x9e, 0x80, 0xa2, 0xce, 0x9b, 0x37, 0xaf, 0x4b, 0x42, 0xa6, 0x4c, 0x99, 0x64, 0xe2, 0xc4, 0x89, 0x41, 0xc7, 0x13, 0x3e, 0x99, 0x33, 0xae, 0x88, 0xc7, 0xd3, 0x10, 0x60, 0x18, 0xa0, 0x1d, 0x37, 0xe4, 0xc8, 0x91, 0x43, 0x0e, 0x1c, 0x38, 0xa0, 0x39, 0xd9, 0x1a, 0x9f, 0x77, 0xee, 0xdc, 0x29, 0x19, 0x33, 0x66, 0x8c, 0x31, 0xde, 0xd0, 0xa1, 0x43, 0x07, 0x4d, 0x25, 0xb4, 0x71, 0xe3, 0xc6, 0x05, 0x1d, 0x67, 0xe8, 0xd1, 0xa3, 0x87, 0x8e, 0x25, 0x1d, 0x72, 0x07, 0xf2, 0xa3, 0x1a, 0xe7, 0x8f, 0x13, 0x8f, 0x67, 0x12, 0xd6, 0xd9, 0x2c, 0x1a, 0xb9, 0x0c, 0x41, 0x03, 0x29, 0x06, 0xac, 0xbd, 0x48, 0x91, 0x22, 0x92, 0x2c, 0x59, 0x32, 0xbd, 0xe8, 0x5c, 0xb9, 0x72, 0xc9, 0x90, 0x21, 0x43, 0xe4, 0xcc, 0x99, 0x33, 0x9a, 0x0e, 0x18, 0x83, 0x10, 0x3a, 0x77, 0xee, 0x9c, 0x2b, 0xc0, 0xda, 0xb4, 0x69, 0x13, 0xeb, 0xad, 0x57, 0x30, 0xe2, 0xd9, 0x44, 0x6b, 0xd4, 0x0b, 0x02, 0x11, 0xcf, 0xdd, 0x06, 0x73, 0xa7, 0x4e, 0x9d, 0x5a, 0x8a, 0x16, 0x2d, 0x2a, 0x63, 0xc7, 0x8e, 0xd5, 0x08, 0x44, 0xc8, 0x45, 0x7c, 0x32, 0x3f, 0xba, 0xc4, 0xc8, 0xe7, 0x96, 0x8c, 0x7a, 0x01, 0xda, 0xa4, 0x44, 0x89, 0x12, 0xee, 0x78, 0x03, 0xb9, 0x7a, 0xcb, 0x96, 0x2d, 0x1a, 0xbd, 0x68, 0xfb, 0xf7, 0xef, 0xd7, 0xf5, 0x52, 0xa5, 0x4a, 0xe5, 0xa6, 0xb6, 0xbe, 0x7d, 0xfb, 0xba, 0xe3, 0x87, 0x0f, 0x1f, 0x2e, 0xdb, 0xb7, 0x6f, 0x77, 0x53, 0x0a,
		0x7b, 0x18, 0x0f, 0x22, 0xef, 0xf7, 0x12, 0x4f, 0x98, 0xa2, 0x40, 0x83, 0x8a, 0xa5, 0x91, 0xaf, 0x29, 0x58, 0xd4, 0xab, 0x57, 0x4f, 0xea, 0xd6, 0xad, 0xab, 0xff, 0x92, 0x06, 0xd8, 0xb0, 0xe4, 0xc9, 0x93, 0xeb, 0x46, 0x14, 0x2c, 0x58, 0x50, 0x8d, 0xc5, 0xc6, 0xf0, 0x99, 0xdc, 0x8e, 0xd5, 0x33, 0x0f, 0x1b, 0x08, 0x69, 0xb1, 0x79, 0x7d, 0x30, 0xe2, 0x29, 0x98, 0x90, 0x72, 0x56, 0xad, 0x5a, 0x25, 0xad, 0x5a, 0xb5, 0x0a,
		0x48, 0xfc, 0x9c, 0x39, 0x73, 0xdc, 0xfe, 0x76, 0xed, 0xda, 0xb9, 0x86, 0x02, 0x29, 0x5e, 0x03, 0xb2, 0xdb, 0xce, 0xc9, 0x93, 0x27, 0xbb, 0xfd, 0x08, 0xd1, 0xd8, 0x9a, 0x79, 0xfd, 0xa1, 0x43, 0x87, 0x24, 0x7d, 0xfa, 0xf4, 0x7a, 0x4e, 0xe1, 0xc2, 0x85, 0xe5, 0xe9, 0xd3, 0xa7, 0x31, 0xc6, 0x72, 0x9d, 0xe4, 0x78, 0xd4, 0x7d, 0x82, 0xcb, 0xf1, 0x78, 0xc9, 0x80, 0x01, 0x03, 0xdc, 0x8b, 0xf1, 0x86, 0x74, 0x03, 0x1b, 0x90, 0x21, 0x43, 0x06, 0xd7, 0xe3, 0x11, 0x3d, 0xde, 0xff, 0x7b, 0xf1, 0xe4, 0xc9, 0x13, 0x9d, 0x67, 0xc1, 0x82, 0x05, 0x6a, 0x40, 0x3f, 0x4a, 0x3c, 0xc6, 0x85, 0x67, 0x82, 0x14, 0x29, 0x52, 0x04, 0x24, 0x9e, 0x22, 0x8f, 0xf5, 0x63, 0x1c, 0x81, 0xee, 0x02, 0xda, 0xb6, 0x6d, 0xeb, 0x12, 0x8f, 0xca, 0xb7, 0xfe, 0x8e, 0x1d, 0x3b, 0x2a, 0x61, 0xa4, 0x0b, 0x60, 0x5e, 0x8e, 0x5e, 0xc1, 0x70, 0x4c, 0x13, 0x90, 0x1a, 0x4c, 0xdc, 0x61, 0xe8, 0xd7, 0xaf, 0x5f, 0xd7, 0xfe, 0xf3, 0xe7, 0xcf, 0xcb, 0x85, 0x0b, 0x17, 0x54, 0xcb, 0x0c, 0x1c, 0x38, 0x50, 0x2b, 0x7d, 0x09, 0x52, 0xd5, 0xff, 0x6d, 0xc4, 0x93, 0x52, 0x46, 0x8c, 0x18, 0xa1, 0xe1, 0x94, 0x70, 0xfe, 0x3b, 0x88, 0x3f, 0x72, 0xe4, 0x88, 0x1b, 0x3d, 0xb2, 0x65, 0xcb, 0xa6, 0x95, 0x39, 0xa2, 0x55, 0x83, 0x06, 0x0d, 0xa4, 0x67, 0xcf, 0x9e, 0xf2, 0xfc, 0xf9, 0x73, 0x1d, 0x87, 0x48, 0xdd, 0xba, 0x75, 0x6b, 0x40, 0xe2, 0x6f, 0xdc, 0xb8, 0xa1, 0xfd, 0xa4, 0x09, 0x22, 0x1b, 0x84, 0xf3, 0xfd, 0x12, 0xec, 0x7d, 0xfc, 0xdf, 0x16, 0xea, 0x29, 0x1c, 0x59, 0xf3, 0x8a, 0xac, 0x5f, 0x21, 0x9e, 0x86, 0x97, 0x62, 0xe4, 0xc5, 0x8b, 0x17, 0x57, 0x5d, 0x50, 0xac, 0x58, 0x31, 0x15, 0x87, 0x18, 0x30, 0xcf, 0x1f, 0xd0, 0x2b, 0xde, 0x16, 0x8c, 0x78, 0xd4, 0x3e, 0xe7, 0x52, 0x40, 0x42, 0x37, 0x24, 0xd8, 0xca, 0xdd, 0xdf, 0x26, 0xee, 0xbe, 0x47, 0xd5, 0x7f, 0x2f, 0xf1, 0xd4, 0x19, 0xc8, 0xd9, 0x6f, 0xde, 0xbc, 0xd1, 0xcf, 0x94, 0x82, 0xf9, 0x6e, 0xe0, 0xfe, 0xfd, 0xfb, 0xaa, 0xcc, 0x6d, 0x3c, 0xcf, 0x07, 0x2c, 0xbf, 0xc7, 0x16, 0xea, 0xb9, 0x7d, 0xa3, 0xb8, 0xb3, 0x7c, 0xf9, 0x72, 0x75, 0x98, 0xb8, 0x7e, 0x76, 0xe0, 0xdf, 0xce, 0x79, 0x88, 0x9f, 0x3b, 0x77, 0xae, 0xdb, 0x4f, 0xcd, 0xc0, 0x1a, 0xe5, 0x56, 0xeb, 0x6f, 0xd9, 0xb2, 0xa5, 0x7a, 0xbc, 0x37, 0x8f, 0x47, 0x6f, 0x18, 0xaf, 0x8d, 0xc7, 0x50, 0xbd, 0xc4, 0xa3, 0xda, 0xcd, 0xd0, 0x29, 0xe0, 0x58, 0x61, 0xc7, 0xdb, 0x1e, 0x3e, 0x7c, 0xa8, 0x79, 0x3e, 0x9e, 0x3c, 0xdf, 0x2f, 0xe0, 0x6c, 0xd8, 0xb0, 0x41, 0xbd, 0x90, 0xd4, 0x43, 0xae, 0xb5, 0x7a, 0x3e, 0x5e, 0x8b, 0x20, 0x84, 0x28, 0x6e, 0xd1, 0xf0, 0x72, 0x1a, 0x8a, 0xdc, 0xc6, 0x78, 0x41, 0x54, 0x40, 0x44, 0xa2, 0xda, 0x59, 0xcb, 0x7b, 0xef, 0x4f, 0xf1, 0x87, 0x70, 0xce, 0xad, 0x5c, 0x9e, 0x3c, 0x79, 0x34, 0xf7, 0x7b, 0xcf, 0x25, 0x7a, 0xd0, 0x4e, 0x9c, 0x38, 0xf1, 0xdd, 0xd5, 0x4a, 0xbf, 0x64, 0x1b, 0x45, 0xfc, 0xd5, 0xab, 0x57, 0x75, 0x7e, 0x2a, 0x67, 0x36, 0x37, 0xe7, 0x5b, 0xe3, 0x51, 0xa8, 0xb7, 0x86, 0xcf, 0x5a, 0xd6, 0xa8, 0xb4, 0x05, 0x2a, 0xac, 0x40, 0x7c, 0xf4, 0x7c, 0xcd, 0x03, 0xa5, 0x60, 0x85, 0x18, 0xaa, 0x73, 0x3c, 0x84, 0xb1, 0x46, 0xaa, 0x33, 0xbd, 0x43, 0xe3, 0x01, 0x54, 0xa0, 0xf3, 0x2c, 0xc5, 0x60, 0xec, 0x44, 0x97, 0x04, 0x57, 0xc0, 0xf9, 0x53, 0x0f, 0x69, 0x78, 0x3a, 0x87, 0x57, 0xd1, 0x10, 0x4e, 0x3c, 0xf4, 0x00, 0x3c, 0xff, 0xb7, 0x46, 0x3e, 0xb5, 0x7e, 0x6a, 0xe7, 0x5e, 0x8f, 0xe4, 0xc9, 0x1d, 0x79, 0xd6, 0x8e, 0x1b, 0x88, 0x1e, 0x76, 0xcf, 0xfd, 0xe2, 0xc5, 0x0b, 0x8d, 0x48, 0x08, 0xbb, 0xe8, 0xe3, 0x0c, 0x44, 0x39, 0x53, 0xf5, 0xac, 0x8d, 0xb8, 0x44, 0xb9, 0xa3, 0x0b, 0xec, 0x7e, 0x3e, 0xd0, 0x79, 0xf4, 0x5b, 0x79, 0xf7, 0x5b, 0x8f, 0x83, 0xfd, 0xc7, 0xb2, 0xd1, 0x5e, 0x78, 0x60, 0x0e, 0x6f, 0x5e, 0xb5, 0x86, 0x31, 0x79, 0xbd, 0xce, 0x5b, 0x7a, 0xe5, 0x3e, 0xdb, 0x5b, 0x57, 0x0f, 0xd6, 0x30, 0x2a, 0x5e, 0xe4, 0xf0, 0x1a, 0x4b, 0x6c, 0x0d, 0x71, 0x4b, 0x9a, 0x41, 0xf9, 0x03, 0x8a, 0x3e, 0x96, 0xea, 0x82, 0x35, 0x8e, 0xa3, 0x75, 0x12, 0xec, 0x43, 0x9a, 0x3f, 0xf1, 0x22, 0x86, 0xbd, 0x18, 0x81, 0x77, 0x1d, 0x3b, 0x76, 0x4c, 0xbd, 0x1e, 0xa0, 0x11, 0x50, 0xe7, 0x28, 0x66, 0xf2, 0xaa, 0xf5, 0x1f, 0x3f, 0x7e, 0x5c, 0x26, 0x4c, 0x98, 0xa0, 0x42, 0x8a, 0x30, 0x8b, 0xa7, 0xa2, 0xb4, 0xed, 0xb8, 0x81, 0x50, 0x4d, 0x24, 0x20, 0x62, 0x61, 0x8c, 0x93, 0x26, 0x4d, 0xd2, 0x07, 0x2a, 0xd1, 0xc7, 0x19, 0x48, 0x37, 0x68, 0x18, 0x0c, 0xdd, 0x44, 0x9a, 0xbd, 0x94, 0x41, 0x3d, 0x01, 0x03, 0x0a,
		0x74, 0x1e, 0xfd, 0x1c, 0xff, 0xd9, 0xb7, 0x8f, 0x92, 0xf4, 0xab, 0x57, 0xb6, 0x0e, 0x1e, 0x43, 0xe8, 0x07, 0x68, 0x05, 0xfa, 0x98, 0x93, 0x7c, 0x6f, 0xfd, 0x8c, 0xf1, 0xbe, 0x79, 0xe3, 0x3d, 0x16, 0x1d, 0x10, 0x68, 0xc6, 0xc8, 0x39, 0xde, 0xf9, 0xbf, 0x35, 0x3e, 0xfa, 0x77, 0xe3, 0xfb, 0x04, 0x3a, 0xc7, 0xbe, 0xa7, 0xff, 0xb2, 0xa5, 0x0f, 0xff, 0xf5, 0x6a, 0x1f, 0xfe, 0x1f, 0x54, 0xf8, 0xf0, 0x89, 0xf7, 0xe1, 0x13, 0xef, 0xe3, 0xa7, 0x89, 0x0f, 0xf7, 0x37, 0x22, 0x69, 0xfe, 0x99, 0x74, 0x84, 0xbf, 0x11, 0x49, 0x0e, 0x1f, 0x20, 0x3e, 0x34, 0xea, 0xe7, 0x31, 0x22, 0xfd, 0x0d, 0x49, 0x12, 0xf8, 0xec, 0x60, 0x3d, 0xc4, 0xff, 0x13, 0xf5, 0x83, 0x38, 0x3b, 0xfc, 0x4d, 0x49, 0xf4, 0xbf, 0x7f, 0xf3, 0xdc, 0xc1, 0x72, 0x07, 0x39, 0x43, 0x3c, 0x3f, 0x77, 0x56, 0xc8, 0xc1, 0xd5, 0xa8, 0x1f, 0x41, 0xf2, 0x7f, 0x26, 0x2c, 0x71, 0x01, 0x4e, 0xcf, 0x3b, 0xa8, 0xeb, 0x20, 0x2f, 0x7c, 0xff, 0x1f, 0x67, 0x6b, 0xca, 0x52, 0x64, 0x51, 0x55, 0x01, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}