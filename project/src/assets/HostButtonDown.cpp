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
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x28, 0x08, 0x04, 0x00, 0x00, 0x00, 0x92, 0xfd, 0x86, 0xe9, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 0x42, 0x01, 0xd9, 0xc9, 0x2c, 0x7f, 0x00, 0x00, 0x00, 0x20, 0x63, 0x48, 0x52, 0x4d, 0x00, 0x00, 0x7a, 0x26, 0x00, 0x00, 0x80, 0x84, 0x00, 0x00, 0xfa, 0x00, 0x00, 0x00, 0x80, 0xe8, 0x00, 0x00, 0x75, 0x30, 0x00, 0x00, 0xea, 0x60, 0x00, 0x00, 0x3a, 0x98, 0x00, 0x00, 0x17, 0x70, 0x9c, 0xba, 0x51, 0x3c, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x13, 0x00, 0x00, 0x0b, 0x13, 0x01, 0x00, 0x9a, 0x9c, 0x18, 0x00, 0x00, 0x05, 0x7e, 0x49, 0x44, 0x41, 0x54, 0x68, 0xde, 0xed, 0xda, 0x7f, 0x6c, 0x95, 0xd5, 0x19, 0xc0, 0xf1, 0x43, 0x80, 0x4d, 0x30, 0x66, 0xcb, 0x20, 0xdb, 0x5c, 0xb2, 0x99, 0xcd, 0x81, 0xc6, 0xe0, 0x4c, 0x96, 0x94, 0xae, 0xb4, 0xb7, 0xbd, 0xbd, 0xbd, 0x87, 0x0c, 0x18, 0x3a, 0x50, 0x9b, 0xa8, 0x63, 0x9b, 0x44, 0x8c, 0x6e, 0x6e, 0x73, 0x53, 0x22, 0x41, 0x8c, 0x94, 0x85, 0xb9, 0xb8, 0x81, 0x99, 0x2e, 0x33, 0xd1, 0xa2, 0x34, 0xe0, 0x70, 0xc2, 0xd0, 0x11, 0x4d, 0x1d, 0x04, 0xfd, 0x63, 0x94, 0x4d, 0x37, 0x29, 0x2a, 0x56, 0x7e, 0x54, 0x34, 0x30, 0x32, 0x1d, 0x22, 0x28, 0x50, 0xfa, 0x83, 0xf6, 0xb3, 0x3f, 0xfa, 0x72, 0x77, 0x5b, 0x7e, 0x48, 0x81, 0x0a,
		0xc9, 0xed, 0xf3, 0xfc, 0x71, 0xdf, 0xfb, 0x3c, 0xf7, 0xdc, 0xf7, 0x7e, 0xcf, 0x39, 0xcf, 0x73, 0x9e, 0x73, 0xde, 0x1b, 0x62, 0x88, 0x21, 0x0e, 0x8a, 0x63, 0xe3, 0x4f, 0x63, 0x4b, 0xdc, 0x57, 0x00, 0xfa, 0x61, 0x7c, 0x3f, 0x56, 0xc7, 0x6f, 0xc4, 0x10, 0x43, 0x88, 0x21, 0x16, 0xc7, 0xdb, 0xe3, 0xc6, 0xb8, 0x37, 0x2a, 0x18, 0xfd, 0x20, 0xfe, 0x35, 0xde, 0x1a, 0x2f, 0x0e, 0x71, 0x4c, 0x7c, 0x39, 0x1e, 0x2c, 0x20, 0xf0, 0x6e, 0xed, 0x8c, 0xfb, 0xe3, 0x8a, 0x10, 0x5f, 0x2b, 0x38, 0xf0, 0x23, 0xda, 0x1a, 0x62, 0x47, 0xc1, 0xc2, 0x1f, 0x0a,
		0xb1, 0xa5, 0x60, 0xe1, 0x5b, 0x06, 0xe0, 0x07, 0xe0, 0xfb, 0xa4, 0x59, 0x29, 0x25, 0x8a, 0x15, 0xfb, 0x96, 0x32, 0x55, 0x85, 0x03, 0x3f, 0x5e, 0x85, 0x72, 0x33, 0xcc, 0xb5, 0xc0, 0x02, 0xf3, 0xdd, 0x26, 0xab, 0xec, 0x63, 0xda, 0x54, 0x28, 0x56, 0xa4, 0x48, 0x89, 0xb4, 0x8c, 0x12, 0x45, 0x8a, 0x14, 0x2b, 0xd7, 0xf7, 0x7b, 0x57, 0x19, 0xa7, 0x48, 0x91, 0xb1, 0x52, 0x67, 0x03, 0xbe, 0xd2, 0x8d, 0xd6, 0x78, 0xd7, 0x11, 0xd9, 0xeb, 0xef, 0x7e, 0x2e, 0x73, 0xc2, 0x16, 0x3f, 0xb6, 0x4c, 0xbd, 0x7a, 0x8f, 0x98, 0x6e, 0xaa, 0x87, 0xd4, 0xab, 0xf7, 0xa4, 0x9f, 0x48, 0xf7, 0xf1, 0xde, 0x69, 0x57, 0x59, 0xa8, 0x5e, 0xbd, 0x15, 0xee, 0x94, 0x96, 0xfd, 0xa4, 0xe1, 0xc7, 0x79, 0x11, 0xb4, 0x6b, 0xd1, 0xa2, 0x0d, 0xec, 0x38, 0xc1, 0xcf, 0xc8, 0xb8, 0xdd, 0xfb, 0xb9, 0xae, 0xda, 0x65, 0x7b, 0xee, 0x7a, 0x9f, 0xb9, 0xd2, 0xa2, 0xaa, 0x3c, 0xcd, 0x6f, 0x59, 0xd5, 0x43, 0xb3, 0x2a, 0x4d, 0xf6, 0x42, 0xae, 0xf5, 0x01, 0x4b, 0x55, 0xaa, 0x3a, 0xf5, 0x0e, 0xe8, 0x3b, 0x7c, 0xa5, 0x29, 0xb6, 0xe3, 0x71, 0x5f, 0x37, 0xcc, 0x30, 0x5f, 0x30, 0x57, 0xbb, 0x36, 0x37, 0xa9, 0x3c, 0x4e, 0x8b, 0x52, 0xab, 0xb1, 0x57, 0xa3, 0x46, 0xef, 0x80, 0xf7, 0x72, 0xd7, 0x3b, 0xa4, 0x15, 0xab, 0x92, 0x95, 0x95, 0x15, 0x65, 0x94, 0x24, 0xc1, 0x50, 0xae, 0x24, 0x67, 0xef, 0xf6, 0xa5, 0x7c, 0xd3, 0x3d, 0x38, 0xe0, 0x55, 0x8d, 0xde, 0x74, 0x58, 0xab, 0x1f, 0xca, 0x48, 0x19, 0x77, 0x6a, 0x59, 0xa7, 0xaf, 0xf0, 0x59, 0x69, 0x57, 0x7b, 0x0b, 0x0f, 0xfb, 0x9c, 0x20, 0x18, 0x6a, 0xa6, 0x36, 0x87, 0xdc, 0x7c, 0xdc, 0x49, 0x58, 0x62, 0x33, 0x16, 0x0b, 0x82, 0x08, 0x66, 0x09, 0x82, 0x49, 0x3a, 0xbc, 0xeb, 0x36, 0xbf, 0xf5, 0x94, 0xa7, 0xad, 0xb4, 0xd2, 0x33, 0x9e, 0xf2, 0x80, 0x69, 0x32, 0x32, 0x6e, 0xf4, 0x3b, 0xcb, 0x13, 0x7b, 0xb7, 0x6f, 0x91, 0x59, 0x1e, 0xc3, 0xb3, 0x82, 0xe0, 0x42, 0x5b, 0xb1, 0xd6, 0xd3, 0x6a, 0xcd, 0xf6, 0xed, 0xfe, 0x86, 0xcf, 0x2a, 0x97, 0x96, 0x32, 0xc9, 0x66, 0x3c, 0xee, 0x6b, 0x82, 0x60, 0xa4, 0x1a, 0xed, 0x0e, 0x9a, 0x26, 0x25, 0xad, 0xfc, 0x18, 0x63, 0x50, 0xa2, 0x09, 0x4f, 0x08, 0x82, 0x2b, 0xc1, 0xbd, 0x82, 0xe0, 0x1a, 0x6d, 0xf6, 0xd9, 0xa0, 0xb7, 0x34, 0x89, 0xbe, 0x9b, 0x17, 0x1c, 0xff, 0x97, 0x4e, 0x3b, 0xb1, 0xd6, 0x70, 0xc1, 0xe8, 0x64, 0x16, 0x75, 0xdb, 0x1f, 0xfc, 0xd8, 0x94, 0x7b, 0x5a, 0xf0, 0x19, 0x93, 0x2d, 0xb3, 0xdd, 0x76, 0xef, 0x68, 0xc5, 0x62, 0x5f, 0x15, 0x04, 0x23, 0xd4, 0x68, 0xd5, 0x65, 0xa7, 0xed, 0xde, 0xb6, 0xda, 0x75, 0x47, 0xa5, 0xbe, 0xe3, 0xc3, 0xb7, 0x80, 0x0f, 0x2d, 0x57, 0xa7, 0x4e, 0x9d, 0xc5, 0x56, 0xd8, 0x8f, 0x06, 0x4b, 0xb1, 0xd7, 0x9f, 0x12, 0x7b, 0x9d, 0x3a, 0x8b, 0xbc, 0x04, 0xde, 0x30, 0xd3, 0x79, 0x82, 0x2f, 0x5b, 0x68, 0xa9, 0x3a, 0x8f, 0x79, 0x05, 0x1b, 0xa4, 0xfa, 0x1e, 0xfb, 0x27, 0x0f, 0x5f, 0xe2, 0x37, 0x3d, 0x46, 0xe1, 0x49, 0x17, 0x09, 0x82, 0xcf, 0xba, 0xaf, 0x87, 0x7d, 0xa5, 0x92, 0x3e, 0xc1, 0x77, 0x7a, 0xc1, 0x08, 0x21, 0xd1, 0x2f, 0x5a, 0xe7, 0x30, 0x38, 0xec, 0x79, 0x9f, 0xc9, 0xd9, 0x83, 0xe0, 0xfb, 0x3a, 0xf0, 0xcb, 0x1e, 0xb6, 0x20, 0xb8, 0x05, 0x6f, 0x99, 0x7a, 0xdc, 0x9c, 0x73, 0xda, 0xf0, 0x19, 0x93, 0xac, 0xc3, 0x56, 0x8d, 0x9a, 0x34, 0x69, 0xb2, 0xd0, 0xa5, 0x06, 0x09, 0xbe, 0xe4, 0x2e, 0x1b, 0x6d, 0xd6, 0xe4, 0x55, 0xaf, 0x61, 0x87, 0xeb, 0x7b, 0x2d, 0x60, 0xf9, 0xf0, 0x53, 0xc1, 0xfc, 0x3c, 0xf8, 0x17, 0xa5, 0x7d, 0xda, 0x65, 0xe6, 0xa9, 0x51, 0x66, 0x98, 0xe8, 0x61, 0x87, 0x51, 0xaf, 0xc2, 0x50, 0x57, 0x98, 0xa7, 0x46, 0x8d, 0x1a, 0xb3, 0xfd, 0x45, 0x17, 0xfe, 0xe6, 0x1a, 0x9f, 0x12, 0x8c, 0xf4, 0x33, 0x35, 0x6a, 0xdc, 0xed, 0x39, 0x34, 0xc9, 0xf4, 0x3d, 0xe9, 0x9d, 0x2c, 0x7c, 0xca, 0x0c, 0x07, 0x30, 0xcd, 0x58, 0x13, 0x4d, 0x30, 0xd1, 0x64, 0x57, 0x18, 0x2c, 0x18, 0x65, 0x92, 0x89, 0x26, 0x98, 0xa4, 0x5c, 0xa5, 0x03, 0xba, 0xcc, 0xef, 0x35, 0xf6, 0xf9, 0xf0, 0x45, 0x96, 0xf9, 0xa3, 0xea, 0x3c, 0xf8, 0xdf, 0x0b, 0x82, 0xef, 0x81, 0x9a, 0xa4, 0x83, 0xda, 0x70, 0xbf, 0x20, 0xb8, 0xb9, 0x57, 0xd4, 0x77, 0x60, 0xbd, 0xf3, 0x05, 0x97, 0xd8, 0x9d, 0xb3, 0x76, 0x79, 0xd0, 0xb8, 0xfe, 0x8b, 0xf9, 0x32, 0xbf, 0x80, 0x64, 0xaa, 0x07, 0xc1, 0xf9, 0x2e, 0x30, 0x48, 0x30, 0x3c, 0x79, 0xed, 0xd6, 0xff, 0xe2, 0x51, 0x63, 0x8f, 0x0b, 0x3f, 0xd8, 0x50, 0x43, 0x0d, 0xc9, 0x83, 0x7f, 0x44, 0x10, 0x54, 0xe7, 0xad, 0x02, 0x37, 0x68, 0xc3, 0x03, 0x82, 0xe0, 0x07, 0xba, 0x74, 0xea, 0xd4, 0x85, 0x56, 0x35, 0x96, 0xe2, 0x79, 0xc3, 0x05, 0xa3, 0x6c, 0xc3, 0xeb, 0x36, 0x59, 0xed, 0x0e, 0xe3, 0xfb, 0x33, 0xdb, 0x9f, 0x29, 0xf8, 0x4b, 0xcd, 0x71, 0xb7, 0xf4, 0x49, 0xc0, 0xff, 0x43, 0xb5, 0xe0, 0xf3, 0xae, 0x32, 0xd1, 0x77, 0xfc, 0xc8, 0x1e, 0xec, 0xb4, 0x2a, 0x0f, 0xbe, 0x19, 0xf3, 0x54, 0x1a, 0x2f, 0xdd, 0xbf, 0xeb, 0xfc, 0x99, 0x9a, 0xf6, 0x53, 0xc8, 0x25, 0xad, 0x13, 0xc3, 0xb3, 0x49, 0x99, 0xcb, 0x5d, 0x66, 0x8c, 0x11, 0x2e, 0xb0, 0xc0, 0xc6, 0x64, 0x92, 0xe7, 0xc3, 0xcf, 0x34, 0x46, 0xb1, 0x8a, 0xfe, 0xad, 0xf0, 0xce, 0x54, 0xc2, 0x3b, 0x3a, 0xdb, 0x1f, 0x0b, 0xbe, 0x5d, 0x87, 0x8f, 0xb4, 0xdb, 0x65, 0x87, 0x1d, 0xfe, 0xed, 0x16, 0x41, 0x30, 0x5d, 0x47, 0x0f, 0xf8, 0x6d, 0xd8, 0xe0, 0x59, 0x4b, 0xcc, 0xe8, 0xf3, 0x1e, 0xe1, 0x1c, 0x59, 0xea, 0xfe, 0x20, 0x08, 0xae, 0x03, 0xf7, 0x08, 0x82, 0x6b, 0xb5, 0x25, 0x51, 0x7e, 0x44, 0xee, 0x12, 0x04, 0xd7, 0x27, 0xf0, 0xcf, 0x19, 0x24, 0x18, 0x6d, 0x67, 0xce, 0xff, 0x1f, 0x77, 0x9c, 0xca, 0xe8, 0x9f, 0xfd, 0x22, 0xe7, 0xcf, 0x46, 0x19, 0x6c, 0xbc, 0x46, 0x8d, 0xa6, 0x1b, 0x62, 0xb4, 0xd9, 0xda, 0xb1, 0x5b, 0x63, 0x4e, 0x6f, 0x30, 0xd4, 0x25, 0xee, 0x4d, 0x2a, 0x80, 0x06, 0xc5, 0x46, 0xfa, 0x8a, 0x55, 0x89, 0x77, 0x17, 0xfe, 0x75, 0xcc, 0xda, 0xf2, 0x9c, 0x28, 0x6f, 0xb7, 0x60, 0x91, 0x20, 0x28, 0x07, 0x77, 0x26, 0x75, 0xfe, 0x41, 0xf0, 0x52, 0x5e, 0xc1, 0x32, 0x24, 0x17, 0xd9, 0x73, 0x7b, 0x14, 0x32, 0xe7, 0x79, 0x13, 0x6c, 0x75, 0x00, 0xdc, 0x94, 0xe7, 0xab, 0xc6, 0xdb, 0xae, 0xed, 0xbf, 0x22, 0xe7, 0x74, 0x36, 0x36, 0xa5, 0x1a, 0xd0, 0xac, 0x56, 0xad, 0x35, 0x60, 0x83, 0x5a, 0xb5, 0xd6, 0x26, 0x23, 0xf9, 0x9e, 0x25, 0x6a, 0x13, 0x7d, 0xc2, 0x6e, 0x7c, 0xa0, 0xcb, 0xa6, 0x9c, 0xad, 0x56, 0xad, 0x65, 0xf6, 0x60, 0x8d, 0x29, 0xe6, 0xf9, 0x08, 0xeb, 0xf3, 0x7c, 0xeb, 0xf1, 0xc6, 0x51, 0xdb, 0xe1, 0x73, 0x64, 0x4b, 0x9b, 0x36, 0x37, 0x89, 0x56, 0x38, 0x94, 0x8c, 0x5d, 0x77, 0x09, 0xbb, 0x34, 0xa9, 0xd8, 0xf3, 0xa5, 0xc1, 0x43, 0x49, 0xb7, 0xf4, 0x94, 0x75, 0xae, 0x54, 0xa6, 0xcc, 0xfd, 0x5a, 0x7b, 0x79, 0x5a, 0xdd, 0xd7, 0xbf, 0x1b, 0x9b, 0x53, 0x3f, 0xcc, 0x88, 0xaa, 0xcc, 0xf3, 0xb2, 0x66, 0xcd, 0x56, 0x9b, 0x65, 0x86, 0x55, 0x9a, 0x35, 0xfb, 0xa7, 0x5f, 0xa9, 0x50, 0x6d, 0x99, 0x6d, 0x9a, 0x13, 0xdd, 0x6a, 0x89, 0xab, 0x55, 0xfa, 0xb5, 0x57, 0x72, 0xb6, 0x66, 0xcd, 0xb6, 0x58, 0x6c, 0x8a, 0x0a,
		0x51, 0x56, 0xa5, 0x39, 0x1a, 0xf2, 0x7c, 0x0d, 0xe6, 0x9c, 0xf0, 0x1c, 0xe9, 0x2c, 0x1f, 0x63, 0x45, 0x95, 0xca, 0x94, 0x2a, 0x95, 0x52, 0x29, 0xa3, 0x5c, 0xa9, 0x52, 0x65, 0xc9, 0x29, 0x4e, 0xf7, 0xbb, 0x23, 0x5a, 0x21, 0x2b, 0x4a, 0x27, 0x9f, 0xef, 0x6d, 0x3f, 0xf2, 0x6d, 0xa9, 0x3c, 0x4f, 0xaa, 0xef, 0xd1, 0xfe, 0xc9, 0x1e, 0x60, 0x0e, 0x1c, 0x5d, 0x0f, 0x3c, 0xb4, 0x18, 0x80, 0x1f, 0x80, 0x3f, 0x17, 0xe0, 0x0f, 0x15, 0xf2, 0x23, 0xea, 0xd6, 0x82, 0x85, 0x6f, 0x0b, 0x71, 0x45, 0xdc, 0x1f, 0x3b, 0x0b, 0x10, 0xfd, 0x70, 0x5c, 0x1e, 0xe2, 0xc5, 0xf1, 0xd6, 0x58, 0x5f, 0x70, 0xff, 0xc8, 0xd9, 0x13, 0x97, 0xc4, 0x0b, 0x43, 0x0c, 0x31, 0xc4, 0xd1, 0x71, 0x4b, 0x3c, 0x58, 0x10, 0x7f, 0x44, 0xdb, 0x17, 0xf7, 0xc5, 0x83, 0xf1, 0xf5, 0x38, 0x21, 0x5e, 0x14, 0xc3, 0xff, 0x00, 0xaf, 0xe1, 0x3c, 0xdb, 0x93, 0xcd, 0x56, 0xdb, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}
