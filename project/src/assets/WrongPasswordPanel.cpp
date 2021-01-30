/****************************************************************************************/
/* WrongPasswordPanel.cpp                                                               */
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

#include "assets/WrongPasswordPanel.h"

#include <vector>

std::pair<std::string, std::string> Minesweeper::get_raw_wrong_password_panel()
{
	std::pair<std::string, std::string> result = std::make_pair("WrongPasswordPanel", "");

	std::vector<short> raw_data {
		
		0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a,
		0x1a, 0x0a,
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x02, 0x62, 0x00, 0x00, 0x00, 0xa0, 0x08, 0x06, 0x00, 0x00, 0x00, 0xaf, 0xe9, 0x00, 0x70, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 0x42, 0x01, 0xd9, 0xc9, 0x2c, 0x7f, 0x00, 0x00, 0x00, 0x20, 0x63, 0x48, 0x52, 0x4d, 0x00, 0x00, 0x7a, 0x26, 0x00, 0x00, 0x80, 0x84, 0x00, 0x00, 0xfa, 0x00, 0x00, 0x00, 0x80, 0xe8, 0x00, 0x00, 0x75, 0x30, 0x00, 0x00, 0xea, 0x60, 0x00, 0x00, 0x3a, 0x98, 0x00, 0x00, 0x17, 0x70, 0x9c, 0xba, 0x51, 0x3c, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x13, 0x00, 0x00, 0x0b, 0x13, 0x01, 0x00, 0x9a, 0x9c, 0x18, 0x00, 0x00, 0x0e, 0xef, 0x49, 0x44, 0x41, 0x54, 0x78, 0xda, 0xed, 0xdd, 0xfd, 0xf3, 0x1d, 0x55, 0x7d, 0x07, 0xf0, 0xfc, 0xc4, 0xaf, 0x30, 0x9d, 0xea, 0xb4, 0x32, 0xc6, 0x8e, 0x92, 0x28, 0xa9, 0x18, 0x8b, 0x8f, 0x69, 0xd1, 0xb1, 0x01, 0x84, 0xa6, 0x15, 0x68, 0x95, 0x69, 0xe2, 0x08, 0x11, 0x1a, 0x05, 0x26, 0x18, 0x23, 0x1a, 0x1f, 0x02, 0x9a, 0xc2, 0xf0, 0x50, 0x62, 0x40, 0xa8, 0xd1, 0x0a,
		0x24, 0xa6, 0x54, 0x5b, 0x6b, 0x44, 0xc5, 0x51, 0x69, 0xda, 0xa1, 0x62, 0x49, 0x7d, 0xaa, 0xda, 0x19, 0xaa, 0xc6, 0x47, 0xda, 0xd1, 0xf1, 0x01, 0x1f, 0xe3, 0xc3, 0x1f, 0xb0, 0xcd, 0xe7, 0x3b, 0xb9, 0x99, 0xbd, 0x7b, 0xf7, 0x7e, 0xef, 0xde, 0xbb, 0xe7, 0xee, 0xdd, 0xbb, 0xf7, 0xf5, 0x9d, 0x79, 0x89, 0xf9, 0x7e, 0x77, 0xcf, 0x9e, 0x3d, 0xf7, 0xdc, 0xef, 0x7d, 0x7f, 0x77, 0xf7, 0x9c, 0xb3, 0x22, 0xcb, 0xb2, 0x15, 0xe1, 0xd8, 0xd7, 0xca, 0x63, 0x6e, 0x39, 0xe6, 0xf0, 0x31, 0x19, 0x00, 0x00, 0x49, 0x1d, 0x3e, 0x9e, 0xb5, 0x56, 0x9e, 0xc8, 0x5f, 0xc7, 0x43, 0xd8, 0xc6, 0x63, 0x8e, 0x6a, 0x20, 0x00, 0x80, 0xa9, 0x8b, 0xcc, 0xb5, 0xf1, 0x78, 0x06, 0x5b, 0xba, 0x12, 0x26, 0x84, 0x01, 0x00, 0x34, 0x1b, 0xc6, 0x22, 0x83, 0x2d, 0x5d, 0x22, 0xd3, 0x20, 0x00, 0x00, 0xcd, 0x8a, 0x0c, 0xd6, 0xff, 0x4c, 0xd8, 0x75, 0xd7, 0x5d, 0x07, 0x00, 0xc0, 0x14, 0x94, 0x3c, 0x33, 0xd6, 0x9f, 0xce, 0x62, 0xa3, 0x03, 0x07, 0x0e, 0x00, 0x00, 0x90, 0x50, 0x49, 0x10, 0xcb, 0x04, 0x31, 0x00, 0x00, 0x41, 0x0c, 0x00, 0x40, 0x10, 0xd3, 0x58, 0x00, 0x00, 0x82, 0x18, 0x00, 0x80, 0x20, 0x06, 0x00, 0x80, 0x20, 0x06, 0x00, 0x20, 0x88, 0x01, 0x00, 0x20, 0x88, 0x01, 0x00, 0x08, 0x62, 0x00, 0x00, 0x08, 0x62, 0x00, 0x00, 0x82, 0x18, 0x00, 0x80, 0x20, 0x26, 0x88, 0x01, 0x00, 0x08, 0x62, 0x00, 0x00, 0x82, 0x98, 0x20, 0x06, 0x00, 0x20, 0x88, 0x01, 0x00, 0x08, 0x62, 0x4d, 0x57, 0xec, 0xef, 0xdf, 0xfb, 0xde, 0xec, 0x23, 0xb7, 0xde, 0x9c, 0x1d, 0xba, 0xf6, 0x8d, 0x4b, 0x3e, 0xfa, 0x37, 0x37, 0x65, 0xf7, 0xee, 0xdf, 0xef, 0x45, 0x03, 0x00, 0x3a, 0x93, 0x33, 0x5a, 0x17, 0xc4, 0x0e, 0xde, 0x71, 0x7b, 0x76, 0xe4, 0xc2, 0x73, 0xb3, 0xa3, 0xa7, 0x3f, 0x21, 0xcb, 0x7e, 0x6b, 0x45, 0x9f, 0xf8, 0xde, 0xb7, 0xce, 0x7f, 0x41, 0x76, 0xdf, 0x9e, 0xdd, 0x3a, 0x11, 0x00, 0x30, 0xf7, 0x39, 0xa3, 0x55, 0x41, 0xec, 0xd3, 0xdb, 0xae, 0xcc, 0x7e, 0xb5, 0xfa, 0xf1, 0x03, 0x0d, 0x53, 0xf4, 0xeb, 0x55, 0x8f, 0xcb, 0x3e, 0x73, 0xc5, 0x66, 0x1d, 0x0a,
		0x00, 0x98, 0xeb, 0x9c, 0xd1, 0x9a, 0x20, 0xf6, 0x9f, 0x57, 0x5d, 0x9e, 0xfd, 0xe6, 0xb4, 0xdf, 0x1e, 0xd9, 0x38, 0x3d, 0xb1, 0xed, 0x17, 0x37, 0xff, 0xa5, 0x8e, 0x05, 0x00, 0xcc, 0x6d, 0xce, 0x68, 0x45, 0x10, 0xbb, 0xff, 0xe6, 0x1b, 0x06, 0x1a, 0x27, 0x12, 0xeb, 0x91, 0x0b, 0xce, 0xce, 0x1e, 0xde, 0xba, 0x25, 0x7b, 0xf8, 0xea, 0x57, 0x67, 0x5f, 0xfd, 0xf3, 0xf3, 0x06, 0x52, 0x6c, 0xec, 0xf3, 0xf1, 0xeb, 0xdf, 0xaa, 0x83, 0x01, 0x00, 0x73, 0x99, 0x33, 0x5a, 0x11, 0xc4, 0xbe, 0x77, 0xd6, 0xda, 0xbe, 0x13, 0xff, 0xf1, 0x99, 0xa7, 0x65, 0x07, 0x6f, 0xdf, 0x33, 0xb0, 0xdd, 0x07, 0xef, 0x7c, 0x47, 0xf6, 0x83, 0xe7, 0xaf, 0xe9, 0xdb, 0xf6, 0xb1, 0x67, 0xad, 0xd2, 0xc9, 0x00, 0x80, 0xb9, 0xcc, 0x19, 0x33, 0x0f, 0x62, 0x0f, 0xbd, 0xf6, 0xaa, 0xbe, 0x94, 0xfa, 0xcb, 0xa7, 0xfd, 0x6e, 0xf6, 0x81, 0xbd, 0xef, 0x1c, 0xba, 0x7d, 0x8c, 0x68, 0xf8, 0xe9, 0xda, 0xdf, 0xeb, 0x4b, 0xab, 0x5f, 0xb8, 0x6c, 0x93, 0x8e, 0x06, 0x00, 0xcc, 0x5d, 0xce, 0x98, 0x79, 0x10, 0xfb, 0xf9, 0x19, 0x2b, 0xfb, 0x4e, 0xf6, 0xb3, 0xaf, 0xba, 0x74, 0xe4, 0x3e, 0x71, 0x09, 0x31, 0xdf, 0xa8, 0xbf, 0x7a, 0xea, 0xef, 0x64, 0xef, 0x7f, 0xcf, 0x7b, 0x74, 0x38, 0x4e, 0xb8, 0xf3, 0xce, 0x3b, 0xb3, 0x8b, 0x2e, 0xba, 0x28, 0x5b, 0xb5, 0x6a, 0xd5, 0x40, 0x07, 0x8f, 0xef, 0x5d, 0x71, 0xc5, 0x15, 0x7d, 0xdb, 0xc7, 0xbf, 0x87, 0x6d, 0x1b, 0xe5, 0x44, 0x79, 0xda, 0x15, 0xda, 0x6d, 0xb9, 0xf7, 0x71, 0xf1, 0x3d, 0xcf, 0xe2, 0x68, 0x7b, 0xce, 0x98, 0x69, 0x10, 0xfb, 0x9f, 0x97, 0xfd, 0x69, 0xdf, 0x89, 0xfe, 0xf0, 0xb9, 0xa7, 0x57, 0xde, 0xf7, 0x07, 0xeb, 0x9e, 0xde, 0x77, 0xe9, 0xf0, 0x6b, 0x17, 0xbd, 0x58, 0x87, 0xe3, 0x44, 0x08, 0x3b, 0xf9, 0xe4, 0x93, 0xcb, 0x3a, 0x76, 0x9f, 0xde, 0x2f, 0xe6, 0xf8, 0xef, 0xa8, 0x6d, 0xa3, 0x3c, 0x61, 0x0c, 0xda, 0x6b, 0xd3, 0xa6, 0x4d, 0x23, 0xdf, 0xc7, 0xb1, 0x8d, 0xb6, 0x5a, 0x2c, 0xf3, 0x90, 0x33, 0x66, 0x16, 0xc4, 0xe2, 0x3e, 0x6c, 0xbe, 0x71, 0xe2, 0xff, 0xff, 0xeb, 0x5b, 0x76, 0x54, 0xde, 0xff, 0x63, 0x37, 0x5e, 0x3f, 0xb0, 0x7f, 0x4c, 0xc6, 0xa6, 0xe3, 0x11, 0x57, 0xb0, 0x46, 0xfd, 0x42, 0xee, 0xfd, 0x95, 0x1c, 0xdb, 0x97, 0xfd, 0x05, 0x5d, 0x26, 0xca, 0xd5, 0xbe, 0xd0, 0x3e, 0x77, 0xdf, 0x7d, 0x77, 0xa5, 0xf7, 0x70, 0x88, 0x6d, 0xb5, 0xd9, 0x62, 0x98, 0x97, 0x9c, 0x31, 0xb3, 0x20, 0xf6, 0xe8, 0x39, 0xcf, 0xef, 0x4b, 0x9a, 0xf1, 0xef, 0x71, 0xcb, 0x88, 0x11, 0x0e, 0xf9, 0x32, 0x22, 0xbd, 0xea, 0x7c, 0xac, 0x59, 0xb3, 0xe6, 0x44, 0xdf, 0x7d, 0xe4, 0x91, 0x47, 0xb2, 0xe2, 0x57, 0xbe, 0x6f, 0xc7, 0xf6, 0xf9, 0x7f, 0x17, 0xbf, 0x62, 0xff, 0xde, 0xcf, 0xa2, 0x5c, 0xed, 0x0b, 0xed, 0xb3, 0x63, 0xc7, 0x8e, 0x13, 0xef, 0xd3, 0xad, 0x5b, 0xb7, 0x0e, 0xbc, 0x8f, 0xe3, 0x7b, 0xbd, 0x9f, 0xc7, 0xb6, 0xda, 0x6c, 0x31, 0xcc, 0x4b, 0xce, 0x98, 0x49, 0x10, 0x8b, 0x44, 0x5a, 0xbc, 0xf7, 0xfa, 0xcf, 0x7f, 0x7b, 0xc7, 0xd8, 0xe5, 0xbc, 0xef, 0xae, 0xbb, 0x96, 0xf6, 0xcd, 0xa7, 0xd5, 0x98, 0xac, 0x4d, 0x07, 0x14, 0xc4, 0xa6, 0x15, 0xc4, 0x2e, 0xbe, 0xf8, 0xe2, 0x13, 0x76, 0xee, 0xdc, 0xd9, 0x77, 0xdc, 0xf8, 0x77, 0xfe, 0xe7, 0x21, 0x7e, 0xe9, 0x0f, 0xfb, 0x0b, 0xbc, 0x6c, 0xfb, 0x32, 0xc5, 0xe3, 0xf4, 0xdc, 0x74, 0xd3, 0x4d, 0xd9, 0xe6, 0xcd, 0x9b, 0x2b, 0x95, 0x31, 0xaa, 0xac, 0x49, 0xea, 0x35, 0x4e, 0x99, 0x93, 0x98, 0xf5, 0xf9, 0x35, 0xdd, 0x56, 0x75, 0xca, 0x1a, 0xd6, 0x56, 0xc3, 0x8e, 0x57, 0x76, 0xac, 0xd8, 0x3f, 0xca, 0x69, 0xa2, 0x8f, 0x56, 0x79, 0xef, 0x8c, 0xdb, 0x56, 0x82, 0x18, 0xf3, 0x9a, 0x33, 0x66, 0x12, 0xc4, 0x7e, 0xfa, 0xcc, 0x27, 0xf7, 0x9d, 0xd4, 0x97, 0x2e, 0x79, 0xd9, 0xc4, 0x65, 0xc5, 0x48, 0x86, 0x7c, 0x63, 0xc7, 0x48, 0x07, 0x9d, 0x50, 0x10, 0x9b, 0x46, 0x10, 0x2b, 0xb3, 0x6e, 0xdd, 0xba, 0x6c, 0xdb, 0xb6, 0x6d, 0xd9, 0x29, 0xa7, 0x9c, 0x52, 0xf9, 0xd9, 0x94, 0x2a, 0xdb, 0x97, 0x1d, 0x27, 0x7f, 0x8e, 0xe7, 0x9c, 0x73, 0xce, 0x58, 0xfb, 0x2f, 0x57, 0x56, 0x9d, 0x7a, 0xf5, 0xc4, 0x7e, 0xb1, 0x7f, 0xaa, 0xd7, 0xb0, 0x2d, 0xe7, 0xd7, 0x44, 0x5b, 0xd5, 0x2d, 0x6b, 0x54, 0x5b, 0x15, 0xcf, 0x21, 0xfe, 0xbd, 0xdc, 0xf6, 0x51, 0x5e, 0x13, 0x7d, 0xb4, 0xca, 0x7b, 0x67, 0x92, 0xb6, 0x12, 0xc4, 0x98, 0xb7, 0x9c, 0xd1, 0x78, 0x10, 0xfb, 0xaf, 0x57, 0x6e, 0xec, 0x3b, 0xa1, 0x18, 0xcd, 0x50, 0xb7, 0xcc, 0xc7, 0x9e, 0xfd, 0xd4, 0xbe, 0x06, 0xff, 0xef, 0x4d, 0x9e, 0xe5, 0x11, 0xc4, 0x9a, 0x09, 0x62, 0xbd, 0x0f, 0x8b, 0x71, 0x9e, 0x4d, 0x99, 0xf4, 0x43, 0xb7, 0x37, 0xb8, 0x20, 0xae, 0x32, 0x4c, 0x1a, 0x52, 0x8a, 0x65, 0xe5, 0x4d, 0x5a, 0xaf, 0x7c, 0x3b, 0xa4, 0xba, 0x12, 0xd6, 0xa6, 0xf3, 0x9b, 0x76, 0x5b, 0xd5, 0x2d, 0x6b, 0x9c, 0x73, 0xa8, 0x32, 0x30, 0x65, 0x9c, 0x3e, 0x5d, 0xb7, 0x8f, 0x56, 0x39, 0xce, 0xb8, 0x6d, 0x25, 0x88, 0x31, 0x6f, 0x39, 0xa3, 0xd1, 0x20, 0xf6, 0x0f, 0xf7, 0xdc, 0xdd, 0xb7, 0xc8, 0x66, 0x9c, 0xcc, 0x43, 0xaf, 0xdb, 0x3a, 0x74, 0xfb, 0xfb, 0x6f, 0xb9, 0x31, 0xfb, 0xf6, 0x79, 0x67, 0x65, 0xdf, 0x39, 0x77, 0xdd, 0xb2, 0x33, 0xdb, 0x3e, 0xf0, 0xb6, 0x9d, 0x03, 0x0f, 0xd4, 0xc5, 0xa2, 0x9e, 0x3a, 0xa4, 0x20, 0x36, 0x2a, 0x88, 0x15, 0x0d, 0x0b, 0x62, 0xb7, 0xdd, 0x76, 0x5b, 0xb6, 0x6f, 0xdf, 0xbe, 0x3e, 0xc5, 0x7d, 0xd7, 0xaf, 0x5f, 0x3f, 0xb0, 0x4d, 0xf1, 0x03, 0x20, 0x3f, 0x90, 0xa0, 0x6c, 0xfb, 0x32, 0xc5, 0x21, 0xf8, 0xf9, 0x32, 0xca, 0xea, 0x35, 0x4e, 0x59, 0x07, 0x72, 0x53, 0x7d, 0x8c, 0x5b, 0xaf, 0x9e, 0xd8, 0xbe, 0xb7, 0xef, 0xee, 0xdd, 0xf5, 0x17, 0xca, 0x4d, 0x7d, 0x7e, 0x21, 0xea, 0x55, 0xb7, 0xdd, 0xa7, 0xd1, 0x56, 0xa9, 0xca, 0x1a, 0xd5, 0x47, 0x7b, 0x03, 0x52, 0xf2, 0x03, 0x53, 0x8a, 0xdb, 0xc6, 0xfe, 0x55, 0xfa, 0x74, 0x8a, 0x3e, 0x5a, 0xe5, 0x38, 0x93, 0xb6, 0xd5, 0xa1, 0x43, 0x87, 0x04, 0xb1, 0x05, 0x36, 0x8f, 0x39, 0xa3, 0xd1, 0x20, 0xf6, 0xf5, 0x97, 0xac, 0xef, 0x7b, 0xe8, 0xed, 0xbb, 0x2f, 0x3c, 0x73, 0xe8, 0xb6, 0x71, 0x2f, 0x37, 0xbf, 0xd4, 0x40, 0x9c, 0x74, 0x8c, 0x80, 0x18, 0xb6, 0xfd, 0x77, 0x5e, 0xfc, 0x47, 0x7d, 0x65, 0xff, 0xdf, 0xfa, 0xe7, 0xea, 0x94, 0x82, 0x58, 0xb2, 0x20, 0x56, 0xa5, 0x9c, 0xb2, 0xbf, 0xc4, 0xf3, 0x1f, 0x3a, 0xc5, 0x29, 0x35, 0xca, 0xb6, 0x2f, 0xfb, 0x2a, 0x1e, 0x67, 0xd4, 0xf9, 0x8d, 0x53, 0x56, 0xdc, 0x32, 0x9d, 0xb4, 0x5e, 0xd3, 0xfa, 0x90, 0x4b, 0x79, 0x7e, 0xbd, 0xdb, 0x65, 0xa3, 0x1e, 0xe6, 0xae, 0x5a, 0x56, 0xca, 0xb6, 0x4a, 0x59, 0x56, 0xca, 0xbe, 0xde, 0x44, 0x1f, 0x1d, 0xf7, 0x2a, 0x56, 0xdb, 0xfa, 0x28, 0xed, 0x35, 0x8f, 0x39, 0xa3, 0xb1, 0x20, 0xf6, 0xf1, 0x1b, 0x76, 0x0d, 0xa4, 0xc9, 0x0f, 0xbf, 0xfd, 0xd6, 0xa1, 0xdb, 0x7f, 0x6e, 0xcb, 0x25, 0x03, 0x0b, 0x70, 0xc6, 0x82, 0x9d, 0xc3, 0xb6, 0xff, 0xd0, 0x6d, 0x6f, 0x1f, 0x28, 0xff, 0x93, 0xbb, 0xae, 0xd5, 0x31, 0x05, 0xb1, 0xd6, 0x04, 0xb1, 0x54, 0x1f, 0x72, 0xa3, 0x3e, 0x7c, 0x27, 0x2d, 0xab, 0x8b, 0x41, 0x2c, 0xc4, 0x83, 0xdd, 0x29, 0x82, 0x58, 0xea, 0xb6, 0x4a, 0x5d, 0x56, 0x9b, 0x82, 0xd8, 0xb8, 0xf5, 0x1a, 0x15, 0xc4, 0xda, 0xd6, 0x47, 0x69, 0xa7, 0x79, 0xcd, 0x19, 0x8d, 0x05, 0xb1, 0x98, 0x44, 0x2d, 0x7f, 0xb2, 0x47, 0x2e, 0x3c, 0x77, 0xd9, 0xed, 0x3f, 0xff, 0x57, 0xaf, 0x18, 0x68, 0xa0, 0x58, 0x98, 0x73, 0xb9, 0x7d, 0xe2, 0x9e, 0x6d, 0xbe, 0x91, 0xe2, 0x9e, 0xae, 0xce, 0x29, 0x88, 0x0d, 0xfb, 0x10, 0xe8, 0xfd, 0x2c, 0xff, 0x01, 0x34, 0x49, 0x10, 0x8b, 0xb0, 0x35, 0xec, 0xab, 0x2c, 0x88, 0xa5, 0x0c, 0x75, 0x29, 0x3f, 0xe4, 0x52, 0x94, 0xd5, 0x44, 0x10, 0x1b, 0xb7, 0xad, 0x62, 0x44, 0x5d, 0xd5, 0x79, 0xa6, 0x52, 0xb6, 0x7b, 0x55, 0xa9, 0xca, 0xaa, 0xd2, 0x47, 0xab, 0xf4, 0xf5, 0x26, 0xfb, 0xe8, 0x72, 0x41, 0xbb, 0xcd, 0x7d, 0x94, 0x76, 0x9a, 0xd7, 0x9c, 0xd1, 0x48, 0x10, 0x8b, 0xfb, 0xb3, 0xc5, 0x75, 0x9e, 0x46, 0x2d, 0x15, 0x10, 0x6b, 0x43, 0x15, 0x1b, 0xe8, 0xc1, 0x1d, 0xdb, 0x47, 0x8f, 0x94, 0x28, 0xac, 0x0f, 0x15, 0x0d, 0xad, 0x83, 0x0a,
		0x62, 0x82, 0xd8, 0x62, 0x07, 0xb1, 0x03, 0x15, 0x67, 0x5e, 0x6f, 0x2a, 0x88, 0xd5, 0xb9, 0x6a, 0x2b, 0x88, 0x09, 0x62, 0x74, 0x2b, 0x67, 0x34, 0x12, 0xc4, 0x7e, 0xf1, 0xfb, 0x4f, 0xec, 0xab, 0xf4, 0x72, 0x97, 0xfe, 0x0e, 0xe4, 0xe6, 0x00, 0x29, 0x36, 0xd0, 0x03, 0x6f, 0x7d, 0xf3, 0xc8, 0xfd, 0x3e, 0x75, 0xcd, 0xd5, 0x03, 0x73, 0x87, 0xfc, 0xd3, 0xbb, 0xf6, 0xea, 0xa8, 0x82, 0x58, 0xf2, 0x20, 0x16, 0xdf, 0x0b, 0xbd, 0x87, 0xf2, 0xcb, 0x14, 0x1f, 0xa8, 0x16, 0xc4, 0x66, 0x17, 0xc4, 0x26, 0x9d, 0xfa, 0x20, 0x65, 0x10, 0xeb, 0x3d, 0xcc, 0x9e, 0x22, 0x88, 0x45, 0x59, 0x55, 0xcb, 0x69, 0x5b, 0x10, 0xeb, 0xbd, 0x77, 0xe2, 0x41, 0xfe, 0x61, 0xef, 0x9d, 0xd5, 0xab, 0x57, 0x0b, 0x62, 0x2c, 0x44, 0xce, 0x98, 0x7a, 0x10, 0x2b, 0xae, 0xf3, 0x54, 0x75, 0x56, 0xda, 0x18, 0xbd, 0x50, 0x6c, 0xa0, 0xfb, 0x6f, 0xbe, 0xa1, 0xd2, 0xbe, 0xc5, 0xf5, 0xa1, 0x8e, 0x5c, 0x70, 0xb6, 0x8e, 0x2a, 0x88, 0x25, 0x0f, 0x62, 0x55, 0x9e, 0x03, 0x2b, 0x1b, 0xa6, 0x2f, 0x88, 0xcd, 0x26, 0x88, 0x4d, 0x3a, 0xf5, 0x41, 0xca, 0x20, 0xd6, 0x1b, 0x7d, 0x99, 0x22, 0x88, 0x8d, 0x13, 0xe8, 0xda, 0x16, 0xc4, 0xaa, 0x3c, 0x07, 0xd6, 0x73, 0xea, 0xa9, 0xa7, 0x0a,
		0x62, 0x74, 0x3a, 0x67, 0x4c, 0x35, 0x88, 0xdd, 0xb7, 0x67, 0xf7, 0xc0, 0x83, 0x6d, 0x9f, 0xf8, 0xeb, 0x6a, 0x65, 0x7d, 0xe4, 0xd6, 0x9b, 0x07, 0x1a, 0x28, 0x1e, 0x94, 0xab, 0xb2, 0x6f, 0x0c, 0x47, 0xb5, 0x0e, 0xa5, 0x20, 0x36, 0xed, 0x20, 0x56, 0x36, 0x45, 0xc5, 0xb0, 0x10, 0x96, 0x3a, 0x5c, 0x08, 0x62, 0xe3, 0x05, 0xb1, 0x3a, 0x53, 0x1f, 0x94, 0xb5, 0x7b, 0x6f, 0x4a, 0x86, 0xfc, 0xf6, 0x75, 0xa7, 0x77, 0x98, 0xa4, 0xac, 0x79, 0x0d, 0x62, 0xc3, 0xa6, 0xe0, 0x28, 0x0b, 0x61, 0xa9, 0x47, 0x60, 0x0a,
		0x62, 0xdd, 0xd2, 0x85, 0x9c, 0x31, 0xd5, 0x20, 0x56, 0x5c, 0xe7, 0x29, 0x86, 0x7e, 0x56, 0xdd, 0x37, 0x86, 0x90, 0x16, 0x1b, 0xe8, 0x03, 0x7b, 0xdf, 0x59, 0x79, 0xff, 0xe2, 0xfa, 0x50, 0xdf, 0xff, 0xc3, 0x33, 0x74, 0x5a, 0x41, 0x6c, 0x2a, 0xcf, 0x88, 0xe5, 0xc5, 0x2f, 0xf9, 0xbc, 0xde, 0xbc, 0x5a, 0x82, 0xd8, 0xec, 0x82, 0x58, 0xdd, 0xa9, 0x0f, 0xa6, 0x31, 0xf2, 0xb5, 0xec, 0x79, 0xb5, 0xba, 0x23, 0x14, 0xe7, 0xf1, 0x19, 0xb1, 0xfc, 0x1f, 0x2b, 0xc5, 0xf7, 0xce, 0xde, 0xbd, 0x7b, 0x93, 0xf5, 0x07, 0x41, 0x6c, 0x71, 0xd6, 0x93, 0x9c, 0xc7, 0x9c, 0x31, 0xb5, 0x20, 0x36, 0xb0, 0xce, 0xd3, 0xea, 0xc7, 0x8f, 0x75, 0x82, 0xff, 0xf8, 0xee, 0x77, 0xf5, 0x9d, 0x60, 0xec, 0x1f, 0x13, 0xb5, 0x55, 0xdd, 0xff, 0xde, 0xfd, 0xfb, 0x97, 0x1e, 0xd6, 0xcb, 0xa7, 0xd5, 0x87, 0xaf, 0x7e, 0xb5, 0x8e, 0x2b, 0x88, 0x4d, 0x2d, 0x88, 0xe5, 0x97, 0x31, 0x9a, 0x76, 0xb8, 0x10, 0xc4, 0xa6, 0x3f, 0x6d, 0x48, 0x59, 0x59, 0xc5, 0x65, 0x7b, 0xea, 0x84, 0xa7, 0x94, 0x65, 0xcd, 0x73, 0x10, 0x1b, 0xb5, 0x3c, 0x96, 0x20, 0x46, 0xd7, 0x73, 0xc6, 0xd4, 0x82, 0xd8, 0x4f, 0xfe, 0xe0, 0x29, 0x7d, 0x95, 0x8b, 0x25, 0x07, 0xc6, 0xd9, 0x3f, 0x4e, 0x30, 0xbf, 0xd0, 0xe6, 0x2f, 0xd6, 0x9c, 0x3a, 0x76, 0x1d, 0x3e, 0x7f, 0xf9, 0xcb, 0xfb, 0x5e, 0xa4, 0x9f, 0x3d, 0xe3, 0x49, 0x3a, 0xef, 0x02, 0xc8, 0xdf, 0xf6, 0xa9, 0xf2, 0xcb, 0xb9, 0x4a, 0x50, 0x19, 0xf5, 0x01, 0x30, 0x6c, 0x61, 0x6f, 0x41, 0xac, 0x3d, 0x41, 0x2c, 0xd5, 0x6d, 0xce, 0xaa, 0xcb, 0xf7, 0x54, 0x69, 0xab, 0x54, 0x65, 0xcd, 0x73, 0x10, 0x6b, 0xa2, 0x3f, 0x08, 0x62, 0xdd, 0xd4, 0x95, 0x9c, 0x31, 0x95, 0x20, 0xf6, 0xc5, 0x4b, 0x2f, 0x4e, 0xb2, 0x40, 0x66, 0x34, 0x4a, 0xdd, 0x10, 0xf5, 0xe3, 0x33, 0x4f, 0xeb, 0x7b, 0xa1, 0xbe, 0xfc, 0x8a, 0x97, 0xea, 0xc0, 0x1d, 0x17, 0xcb, 0xd0, 0x54, 0xb9, 0x1d, 0x95, 0x32, 0x88, 0xcd, 0x5b, 0xb8, 0x10, 0xc4, 0x66, 0x33, 0x15, 0x46, 0x59, 0x5b, 0xa5, 0x28, 0x4b, 0x10, 0x13, 0xc4, 0x16, 0x4d, 0x97, 0x72, 0x46, 0xf2, 0x20, 0x16, 0xf3, 0x76, 0xe4, 0x13, 0x66, 0x54, 0xea, 0xdf, 0x5f, 0xff, 0x9a, 0x89, 0x4e, 0x2e, 0xbf, 0x7a, 0xfa, 0x63, 0xcf, 0x5a, 0x35, 0x51, 0x19, 0x31, 0xeb, 0x6d, 0xfe, 0xc5, 0xfa, 0xf5, 0xaa, 0xc7, 0x65, 0x07, 0x6f, 0xdf, 0xa3, 0x23, 0x2f, 0x40, 0x18, 0xcb, 0x5f, 0x19, 0x13, 0xc4, 0x04, 0xb1, 0x54, 0x41, 0xec, 0xa4, 0x93, 0x4e, 0x4a, 0x72, 0x15, 0x6b, 0xcb, 0x96, 0x2d, 0xc9, 0xca, 0x0a,
		0x1b, 0x37, 0x6e, 0x5c, 0xfa, 0x5e, 0x7e, 0x5e, 0xbb, 0xe2, 0x14, 0x2b, 0x31, 0x30, 0xa0, 0xf7, 0xbd, 0xde, 0x57, 0x0c, 0x12, 0x88, 0x9f, 0xc5, 0xfe, 0x82, 0x18, 0xf3, 0xa0, 0x6b, 0x39, 0x23, 0x79, 0x10, 0x1b, 0x67, 0x9d, 0xa7, 0x51, 0xf2, 0xab, 0x9d, 0xc7, 0x8c, 0xb9, 0x93, 0x96, 0xf3, 0xad, 0xf3, 0x5f, 0x60, 0x1d, 0xca, 0x05, 0x34, 0x6a, 0x59, 0x1b, 0x41, 0x4c, 0x10, 0x1b, 0xb7, 0xac, 0xaa, 0xc1, 0xa9, 0x4a, 0x5b, 0xa5, 0x2c, 0xab, 0xea, 0x39, 0x34, 0xd9, 0x56, 0x82, 0x18, 0xd3, 0xd2, 0xb5, 0x9c, 0x91, 0x34, 0x88, 0xc5, 0x9c, 0x1c, 0xc5, 0x54, 0x58, 0x75, 0x28, 0x68, 0x99, 0x68, 0xdc, 0x14, 0xa3, 0x1e, 0x63, 0x64, 0x44, 0x71, 0x98, 0xe9, 0xa1, 0x6b, 0xdf, 0xa8, 0x43, 0x0b, 0x62, 0x8d, 0x05, 0xb1, 0x0d, 0x1b, 0x36, 0x9c, 0xd8, 0xf6, 0xe0, 0xc1, 0x83, 0x4b, 0xe5, 0x3d, 0xfa, 0xe8, 0xa3, 0x7d, 0xc7, 0xcb, 0x2b, 0xbb, 0xaa, 0x11, 0x57, 0x33, 0xa6, 0x19, 0xc4, 0xc6, 0xad, 0xd7, 0xac, 0x82, 0xd8, 0xa4, 0x6d, 0x35, 0xe9, 0xf9, 0x95, 0x85, 0x8b, 0xde, 0xd5, 0xa7, 0xe5, 0x94, 0xd5, 0x2b, 0x7f, 0xd5, 0x29, 0x65, 0x59, 0xf9, 0x50, 0x97, 0x22, 0x88, 0x35, 0xd9, 0x47, 0xa7, 0xf9, 0xde, 0x11, 0xc4, 0x3a, 0xb8, 0x9e, 0x64, 0x07, 0x73, 0x46, 0xd2, 0x20, 0x56, 0x5c, 0xe7, 0xe9, 0x2b, 0x2f, 0xdd, 0x50, 0xab, 0xc1, 0x63, 0x62, 0xb5, 0x68, 0x98, 0x28, 0xb7, 0xea, 0xbc, 0x20, 0x07, 0x2a, 0xae, 0x0f, 0xf5, 0xa3, 0xe7, 0x3c, 0x4d, 0xa7, 0x16, 0xc4, 0x1a, 0x0b, 0x62, 0xdb, 0xb7, 0x6f, 0xb7, 0xa0, 0x72, 0xa2, 0x20, 0x36, 0x69, 0x5b, 0xa5, 0x9c, 0xbe, 0xa2, 0x6e, 0xbd, 0xf2, 0xc1, 0x29, 0x45, 0x59, 0xa3, 0xfa, 0xfa, 0xb8, 0x41, 0xac, 0xc9, 0x3e, 0x3a, 0xcd, 0xf7, 0x8e, 0x20, 0xd6, 0xfd, 0xf5, 0x24, 0xbb, 0x90, 0x33, 0x92, 0x05, 0xb1, 0x18, 0xb2, 0x99, 0xaf, 0xc0, 0xd1, 0xd3, 0x9f, 0x90, 0xdd, 0xbb, 0xef, 0x9e, 0x56, 0xbd, 0x80, 0x03, 0xeb, 0x43, 0x5d, 0xfe, 0x72, 0x1d, 0x5b, 0x10, 0x6b, 0x24, 0x88, 0x85, 0xb5, 0x6b, 0xd7, 0x26, 0xf9, 0x90, 0x4b, 0x7d, 0xab, 0x66, 0xd2, 0x7a, 0xcd, 0x43, 0x10, 0x8b, 0x29, 0x22, 0xea, 0x9e, 0x5f, 0xea, 0x20, 0x16, 0xc1, 0x29, 0xd5, 0x39, 0x46, 0x59, 0xf1, 0xac, 0x59, 0xaa, 0x20, 0x36, 0x8b, 0x3e, 0x3a, 0xcd, 0xf7, 0x8e, 0x20, 0xd6, 0x2d, 0x5d, 0xcd, 0x19, 0xc9, 0x82, 0x58, 0x8c, 0x36, 0x18, 0x77, 0x9d, 0xa7, 0xaa, 0x97, 0xfb, 0x52, 0x3d, 0x5c, 0xff, 0xe0, 0x1b, 0xb6, 0x0d, 0x2c, 0x0a,
		0x1a, 0xf3, 0x88, 0xe8, 0xe0, 0xdd, 0x14, 0x53, 0x4a, 0x4c, 0xb2, 0x78, 0xf2, 0xb8, 0x62, 0x86, 0xf3, 0xaa, 0x75, 0x2a, 0xfb, 0xeb, 0x7e, 0x9c, 0xe3, 0xc4, 0x74, 0x07, 0x65, 0xd3, 0x73, 0xd4, 0x11, 0xed, 0x54, 0xb5, 0x5e, 0x6d, 0x7c, 0x46, 0x6c, 0xb9, 0xb6, 0x4a, 0xd1, 0xee, 0xa9, 0xfb, 0x4a, 0x71, 0x20, 0x49, 0xdd, 0xb2, 0x52, 0xf6, 0xf5, 0x9d, 0x3b, 0x77, 0x36, 0xda, 0x47, 0x9b, 0x7a, 0xef, 0x8c, 0x33, 0xd5, 0x0c, 0xed, 0xd5, 0xd5, 0x9c, 0x91, 0x24, 0x88, 0x15, 0x2f, 0xc7, 0x55, 0x5d, 0xe7, 0x69, 0x94, 0x23, 0x17, 0x9e, 0xbb, 0x54, 0x6e, 0xf8, 0xe6, 0x86, 0x17, 0x25, 0x29, 0x73, 0x60, 0x7d, 0xa8, 0x63, 0xc7, 0xd0, 0xc1, 0xbb, 0xab, 0xca, 0xd4, 0x00, 0xcb, 0x29, 0x4e, 0x83, 0xb1, 0xdc, 0xfa, 0x81, 0xd3, 0xae, 0x53, 0xef, 0x38, 0x65, 0xd3, 0x73, 0x94, 0xa9, 0x72, 0x9c, 0xfc, 0x24, 0xb4, 0x29, 0xa7, 0x64, 0x98, 0x75, 0x10, 0x2b, 0x7b, 0x4d, 0xea, 0xf6, 0x85, 0x75, 0xeb, 0xd6, 0x55, 0x6a, 0xf7, 0x94, 0xaf, 0xe1, 0x38, 0xe7, 0x98, 0xe2, 0xfc, 0x9a, 0xee, 0xa3, 0x4d, 0xbd, 0x77, 0xaa, 0x4c, 0xba, 0x4c, 0xbb, 0x75, 0x39, 0x67, 0x24, 0x09, 0x62, 0xf9, 0x79, 0x38, 0xe2, 0x64, 0x3e, 0x76, 0xe3, 0xf5, 0xb5, 0x4f, 0xe4, 0xdf, 0xde, 0x74, 0xcd, 0xc0, 0x83, 0x6f, 0x31, 0x44, 0xb4, 0x6e, 0xb9, 0x71, 0x3f, 0xb8, 0x78, 0x69, 0x53, 0x27, 0xef, 0xb6, 0xf8, 0x65, 0x1f, 0x7f, 0x79, 0x97, 0xfd, 0x35, 0x3e, 0xea, 0x67, 0xbd, 0xab, 0x17, 0xcb, 0x6d, 0x93, 0xb2, 0x4e, 0xc3, 0xae, 0x1a, 0x14, 0x8f, 0x53, 0xb5, 0x5e, 0xa3, 0xce, 0x2f, 0xb6, 0x49, 0x39, 0x8d, 0xc2, 0xac, 0x83, 0xd8, 0xa8, 0xd7, 0x64, 0x9c, 0x76, 0x2f, 0x2b, 0x73, 0xb9, 0x76, 0x4f, 0xf9, 0x1a, 0x4e, 0x7a, 0x8e, 0x75, 0xfa, 0xfa, 0xac, 0xfa, 0xe8, 0x34, 0xdf, 0x3b, 0x29, 0x8e, 0x47, 0x3b, 0x74, 0x39, 0x67, 0xd4, 0x0e, 0x62, 0xc5, 0xf9, 0x33, 0xea, 0x0c, 0x23, 0xcd, 0xfb, 0xcc, 0x95, 0x97, 0x0d, 0xac, 0x01, 0xf5, 0xe9, 0x6d, 0x57, 0x26, 0x29, 0xfb, 0xdb, 0xe7, 0x9d, 0xd5, 0xd7, 0xf0, 0x0f, 0xbc, 0x6d, 0xa7, 0x8e, 0xce, 0x42, 0x8a, 0x0f, 0xcb, 0x94, 0xd3, 0x28, 0x34, 0x1d, 0xc4, 0xbc, 0x86, 0xd0, 0x7d, 0x5d, 0xcf, 0x19, 0xb5, 0x83, 0x58, 0xdc, 0xa3, 0xcd, 0x9f, 0xc4, 0x67, 0x5f, 0x75, 0x69, 0x92, 0x93, 0x78, 0xff, 0xdf, 0xbd, 0xbb, 0x2f, 0x01, 0x47, 0xa2, 0x7c, 0xdf, 0x5d, 0x77, 0x25, 0x29, 0xfb, 0xa1, 0xd7, 0x6d, 0xed, 0xab, 0x73, 0xaa, 0xfb, 0xcc, 0x30, 0x6f, 0xf2, 0xcf, 0xf2, 0xa4, 0x98, 0x46, 0x61, 0xd7, 0xae, 0x5d, 0x82, 0x18, 0x90, 0x54, 0xd7, 0x73, 0x46, 0xed, 0x20, 0x16, 0x0d, 0x92, 0x3f, 0xd8, 0x7f, 0xbc, 0x26, 0xdd, 0xe5, 0xdf, 0x83, 0x77, 0xdc, 0x9e, 0x7d, 0xe5, 0x2f, 0xce, 0x5f, 0x5a, 0xe1, 0xfc, 0xbe, 0x3d, 0xbb, 0x93, 0x95, 0x1b, 0x97, 0x23, 0xf3, 0x75, 0xfe, 0xdc, 0x96, 0x4b, 0x74, 0x76, 0x16, 0x52, 0xca, 0x11, 0x8a, 0x71, 0x65, 0xad, 0x89, 0x3a, 0x09, 0x62, 0xb0, 0x58, 0xba, 0x9e, 0x33, 0x6a, 0x07, 0xb1, 0x4f, 0x5d, 0x73, 0x75, 0xd2, 0x39, 0x3d, 0x9a, 0x10, 0x6b, 0x54, 0xe5, 0xeb, 0x1c, 0xe7, 0xa0, 0xb3, 0x23, 0x88, 0xd5, 0x9f, 0x46, 0x41, 0x10, 0x03, 0x52, 0xeb, 0x7a, 0xce, 0xa8, 0x1d, 0xc4, 0x62, 0xc8, 0x67, 0xfe, 0xde, 0xed, 0xcf, 0xcf, 0x58, 0xd9, 0xfa, 0x06, 0xca, 0xaf, 0x2d, 0x15, 0x75, 0x8f, 0x44, 0xac, 0xb3, 0xb3, 0xe8, 0xb7, 0x26, 0x53, 0x4c, 0xa3, 0xd0, 0x64, 0x9d, 0xc6, 0x99, 0xfa, 0x00, 0x98, 0x5f, 0x5d, 0xcf, 0x19, 0x49, 0x46, 0x4d, 0xc6, 0xac, 0xb4, 0xf9, 0x03, 0x1e, 0xb9, 0xe0, 0xec, 0xd6, 0x36, 0x4e, 0xac, 0x07, 0x95, 0x7f, 0x41, 0xeb, 0xac, 0x2d, 0x05, 0xf3, 0x6e, 0x1a, 0xd3, 0x28, 0x34, 0x55, 0x27, 0xa3, 0xe0, 0x60, 0x71, 0x74, 0x39, 0x67, 0x24, 0x09, 0x62, 0xff, 0x72, 0xdd, 0x9b, 0x06, 0x86, 0x80, 0xc6, 0x82, 0x97, 0x31, 0xd2, 0xe1, 0xde, 0xfd, 0xfb, 0x67, 0xde, 0x28, 0x51, 0x87, 0xa8, 0xcb, 0xff, 0x9e, 0xfd, 0xbc, 0x81, 0x7a, 0x3e, 0xb8, 0x63, 0xbb, 0x4e, 0xce, 0xc2, 0x87, 0xb1, 0xd4, 0xd3, 0x28, 0x4c, 0xb3, 0x4e, 0xa6, 0x22, 0x80, 0xc5, 0xd3, 0xe5, 0x9c, 0x91, 0x6c, 0x66, 0xfd, 0x78, 0xd0, 0x2d, 0x7f, 0xf0, 0xfc, 0xac, 0xb2, 0x71, 0x19, 0x71, 0x96, 0xa2, 0x0e, 0xc5, 0x7a, 0xb5, 0x3d, 0x51, 0x03, 0x00, 0xdd, 0xcf, 0x19, 0x49, 0x17, 0xfd, 0xfe, 0xe6, 0x9f, 0xbc, 0xb0, 0xb4, 0x91, 0xda, 0x26, 0xea, 0xf8, 0x8d, 0x3f, 0xfb, 0x63, 0x1d, 0x1b, 0x00, 0xe6, 0x48, 0x17, 0x73, 0x46, 0xd2, 0x20, 0x16, 0x62, 0x88, 0x66, 0xcc, 0xc5, 0xd1, 0xd6, 0xc6, 0x89, 0xba, 0x7d, 0xe1, 0x32, 0xcb, 0x5c, 0x00, 0xc0, 0x3c, 0xea, 0x5a, 0xce, 0x48, 0x1e, 0xc4, 0x96, 0xee, 0x95, 0xee, 0xbb, 0x27, 0x7b, 0xe8, 0xb5, 0x57, 0x65, 0x5f, 0x7f, 0xc9, 0xfa, 0xec, 0x7b, 0x67, 0xad, 0x5d, 0x5a, 0x77, 0x69, 0x96, 0xa2, 0x0e, 0x91, 0x4c, 0xa3, 0x4e, 0x6d, 0xb8, 0x97, 0x0c, 0x00, 0xd4, 0x78, 0x26, 0xab, 0x43, 0x39, 0x63, 0x2a, 0x41, 0x0c, 0x00, 0x00, 0x41, 0x0c, 0x00, 0x40, 0x10, 0x03, 0x00, 0x40, 0x10, 0x03, 0x00, 0x10, 0xc4, 0x00, 0x00, 0x04, 0x31, 0x41, 0x0c, 0x00, 0x40, 0x10, 0x03, 0x00, 0x10, 0xc4, 0x04, 0x31, 0x00, 0x00, 0x41, 0x0c, 0x00, 0x40, 0x10, 0x03, 0x00, 0x40, 0x10, 0x03, 0x00, 0x10, 0xc4, 0x00, 0x00, 0x10, 0xc4, 0x00, 0x00, 0x04, 0x31, 0x00, 0x00, 0x04, 0x31, 0x00, 0x00, 0x41, 0x0c, 0x00, 0x00, 0x41, 0x0c, 0x00, 0x40, 0x10, 0x03, 0x00, 0x10, 0xc4, 0x04, 0x31, 0x00, 0x00, 0x41, 0x0c, 0x00, 0x40, 0x10, 0x13, 0xc4, 0x00, 0x00, 0x04, 0x31, 0x00, 0x00, 0x41, 0x0c, 0x00, 0x00, 0x41, 0x0c, 0x00, 0x40, 0x10, 0x03, 0x00, 0x40, 0x10, 0x03, 0x00, 0x10, 0xc4, 0x00, 0x00, 0x10, 0xc4, 0x00, 0x00, 0x04, 0x31, 0x00, 0x00, 0x04, 0x31, 0x00, 0x00, 0x41, 0x0c, 0x00, 0x40, 0x10, 0x13, 0xc4, 0x00, 0x00, 0x04, 0x31, 0x00, 0x00, 0x41, 0x4c, 0x10, 0x03, 0x00, 0x10, 0xc4, 0x00, 0x00, 0x04, 0x31, 0x00, 0x00, 0x04, 0x31, 0x00, 0x00, 0x41, 0x0c, 0x00, 0x00, 0x41, 0x0c, 0x00, 0x40, 0x10, 0x03, 0x00, 0x40, 0x10, 0x03, 0x00, 0x10, 0xc4, 0x00, 0x00, 0x10, 0xc4, 0x00, 0x00, 0x04, 0x31, 0x00, 0x00, 0x41, 0x4c, 0x10, 0x03, 0x00, 0x10, 0xc4, 0x00, 0x00, 0x04, 0x31, 0x41, 0x0c, 0x00, 0x40, 0x10, 0x03, 0x00, 0x10, 0xc4, 0x00, 0x00, 0x10, 0xc4, 0x00, 0x00, 0x04, 0x31, 0x00, 0x00, 0x04, 0x31, 0x00, 0x00, 0x41, 0x0c, 0x00, 0x00, 0x41, 0x0c, 0x00, 0x40, 0x10, 0x03, 0x00, 0x40, 0x10, 0x03, 0x00, 0x10, 0xc4, 0x00, 0x00, 0x04, 0x31, 0x41, 0x0c, 0x00, 0x40, 0x10, 0x03, 0x00, 0x10, 0xc4, 0x04, 0x31, 0x00, 0x00, 0x41, 0x0c, 0x00, 0x40, 0x10, 0x03, 0x00, 0x40, 0x10, 0x03, 0x00, 0x10, 0xc4, 0x00, 0x00, 0x10, 0xc4, 0x00, 0x00, 0x04, 0x31, 0x00, 0x00, 0x04, 0x31, 0x00, 0x00, 0x41, 0x0c, 0x00, 0x00, 0x41, 0x0c, 0x00, 0x40, 0x10, 0x03, 0x00, 0x10, 0xc4, 0x04, 0x31, 0x00, 0x00, 0x41, 0x0c, 0x00, 0x40, 0x10, 0x13, 0xc4, 0x00, 0x00, 0x04, 0x31, 0x00, 0x00, 0x41, 0x0c, 0x00, 0x00, 0x41, 0x0c, 0x00, 0x40, 0x10, 0x03, 0x00, 0x40, 0x10, 0x03, 0x00, 0x10, 0xc4, 0x00, 0x00, 0x10, 0xc4, 0x00, 0x00, 0x04, 0x31, 0x00, 0x00, 0x04, 0x31, 0x00, 0x00, 0x41, 0x0c, 0x00, 0x40, 0x10, 0x13, 0xc4, 0x00, 0x00, 0x04, 0x31, 0x00, 0x00, 0x41, 0x4c, 0x10, 0x03, 0x00, 0x10, 0xc4, 0x00, 0x00, 0x04, 0x31, 0x00, 0x00, 0x04, 0x31, 0x00, 0x80, 0xee, 0x05, 0xb1, 0xc3, 0xc5, 0x20, 0x06, 0x00, 0x40, 0x7a, 0x85, 0x10, 0x16, 0x19, 0x6c, 0xc5, 0x2d, 0x25, 0xe9, 0x0c, 0x00, 0x80, 0xe9, 0x8a, 0x0c, 0xb6, 0x62, 0xe5, 0x31, 0x47, 0x35, 0x06, 0x00, 0x40, 0x63, 0x8e, 0x2e, 0x65, 0xb0, 0x2c, 0x5b, 0xba, 0x3d, 0xb9, 0x51, 0x18, 0x03, 0x00, 0x68, 0x2c, 0x84, 0x6d, 0x5c, 0xca, 0x60, 0xf1, 0x3f, 0xc7, 0xc3, 0xd8, 0xca, 0xe3, 0x97, 0xc8, 0x0e, 0x6b, 0x20, 0x00, 0x80, 0xe4, 0x0e, 0x1f, 0xcf, 0x5a, 0x2b, 0x7b, 0xf9, 0xeb, 0xff, 0x01, 0xd8, 0x21, 0x5d, 0xb7, 0xa6, 0x75, 0xed, 0x4a, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}
