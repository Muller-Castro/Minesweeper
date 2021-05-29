/****************************************************************************************/
/* ExpertButtonHovered.cpp                                                              */
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

#include "assets/ExpertButtonHovered.h"

using namespace std::literals;

std::pair<std::string, std::string> Minesweeper::get_raw_expert_button_hovered()
{
	return std::make_pair("ExpertButtonHovered",
		"\x89\x50\x4e\x47\x0d\x0a"
		"\x1a\x0a"
		"\x00\x00\x00\x0d\x49\x48\x44\x52\x00\x00\x00\xcb\x00\x00\x00\x35\x08\x06\x00\x00\x00\xef\x63\x1f\x5a\x00\x00\x01\x85\x69\x43\x43\x50\x49\x43\x43\x20\x70\x72\x6f\x66\x69\x6c\x65\x00\x00\x28\x91\x7d\x91\x3d\x48\xc3\x40\x1c\xc5\x5f\x5b\xa5\xa2\x2d\x0e\x76\x10\x91\x12\xa1\x3a\x59\x10\x15\x71\x94\x2a\x16\xc1\x42\x69\x2b\xb4\xea\x60\x72\xe9\x17\x34\x69\x48\x52\x5c\x1c\x05\xd7\x82\x83\x1f\x8b\x55\x07\x17\x67\x5d\x1d\x5c\x05\x41\xf0\x03\xc4\xc9\xd1\x49\xd1\x45\x4a\xfc\x5f\x52\x68\x11\xe3\xc1\x71\x3f\xde\xdd\x7b\xdc\xbd\x03\xbc\x8d\x0a"
		"\x53\x8c\xae\x09\x40\x51\x4d\x3d\x15\x8f\x09\xd9\xdc\xaa\xe0\x7f\x45\x1f\xc2\x08\x62\x04\x61\x91\x19\x5a\x22\xbd\x98\x81\xeb\xf8\xba\x87\x87\xaf\x77\x51\x9e\xe5\x7e\xee\xcf\x11\x94\xf3\x06\x03\x3c\x02\xf1\x1c\xd3\x74\x93\x78\x83\x78\x66\xd3\xd4\x38\xef\x13\x87\x58\x49\x94\x89\xcf\x89\xc7\x75\xba\x20\xf1\x23\xd7\x25\x87\xdf\x38\x17\x6d\xf6\xf2\xcc\x90\x9e\x49\xcd\x13\x87\x88\x85\x62\x07\x4b\x1d\xcc\x4a\xba\x42\x3c\x4d\x1c\x91\x15\x95\xf2\xbd\x59\x87\x65\xce\x5b\x9c\x95\x4a\x8d\xb5\xee\xc9\x5f\x18\xc8\xab\x2b\x69\xae\xd3\x1c\x46\x1c\x4b\x48\x20\x09\x01\x12\x6a\x28\xa3\x02\x13\x51\x5a\x55\x52\x0c\xa4\x68\x3f\xe6\xe2\x1f\xb2\xfd\x49\x72\x49\xe4\x2a\x83\x91\x63\x01\x55\x28\x10\x6d\x3f\xf8\x1f\xfc\xee\xd6\x28\x4c\x4d\x3a\x49\x81\x18\xd0\xfd\x62\x59\x1f\xa3\x80\x7f\x17\x68\xd6\x2d\xeb\xfb\xd8\xb2\x9a\x27\x80\xef\x19\xb8\x52\xdb\xfe\x6a\x03\x98\xfd\x24\xbd\xde\xd6\x22\x47\x40\xff\x36\x70\x71\xdd\xd6\xa4\x3d\xe0\x72\x07\x18\x7c\xd2\x44\x5d\xb4\x25\x1f\x4d\x6f\xa1\x00\xbc\x9f\xd1\x37\xe5\x80\x81\x5b\xa0\x77\xcd\xe9\xad\xb5\x8f\xd3\x07\x20\x43\x5d\x2d\xdf\x00\x07\x87\xc0\x58\x91\xb2\xd7\x5d\xde\xdd\xd3\xd9\xdb\xbf\x67\x5a\xfd\xfd\x00\xae\xd3\x72\xbf\xf1\xa0\x6e\xb7\x00\x00\x00\x06\x62\x4b\x47\x44\x00\x00\x00\x00\x00\x00\xf9\x43\xbb\x7f\x00\x00\x00\x09\x70\x48\x59\x73\x00\x00\x2e\x23\x00\x00\x2e\x23\x01\x78\xa5\x3f\x76\x00\x00\x00\x07\x74\x49\x4d\x45\x07\xe4\x0b\x1e\x11\x04\x00\xff\x9f\xee\xca\x00\x00\x00\x19\x74\x45\x58\x74\x43\x6f\x6d\x6d\x65\x6e\x74\x00\x43\x72\x65\x61\x74\x65\x64\x20\x77\x69\x74\x68\x20\x47\x49\x4d\x50\x57\x81\x0e\x17\x00\x00\x02\xf4\x49\x44\x41\x54\x78\xda\xed\x9c\xbb\x4a\x03\x41\x14\x40\x27\x20\x16\x22\xd8\x59\x59\xf9\x09\x7e\x82\xe0\x3f\xd8\xf9\x03\x21\x45\x52\x08\x36\x16\x16\x86\x34\xb1\xd3\x4e\x48\xa9\x85\x68\x6d\x2b\x16\x82\x82\x58\x08\x62\x6d\x6f\x2b\x38\x66\xf3\xd0\x25\xee\x63\x5e\x3b\x3b\xbb\x7b\x02\x87\x40\xc8\x26\xb3\x73\xef\xd9\x99\x9d\xc7\x0a"
		"\x21\x44\x6b\xcc\x72\xf4\x2e\x8f\x85\x04\x80\x3f\x66\x7e\xac\xce\xde\x27\xa2\x2c\x53\x31\x00\xa9\xc2\xac\xce\xa0\x45\x01\x50\x6a\x61\x16\x3f\x1c\x0e\x87\x00\x30\xe6\x9f\x30\x88\x02\xa0\x26\x0c\xb2\x00\x20\x0b\x00\xb2\x00\x20\x0b\x00\xb2\x00\x20\x0b\x00\xb2\x00\x00\xb2\x00\x20\x0b\x40\x75\x65\x11\x42\x68\xd3\xef\xf7\x6b\x1f\x80\x6e\xb7\x9b\x78\xee\x9d\x4e\xc7\xc9\xef\xe4\xd5\xab\xe9\x71\xae\xcf\x37\xb4\x72\x96\x26\x8b\x89\x28\x4d\x10\x26\x2f\x01\x54\x85\xd1\x49\xa4\x78\xbd\x9a\x1e\xe7\x43\x94\x32\xcb\x89\x2c\x35\x95\xc5\xa6\x6e\x4d\x69\xb7\xdb\x5e\x73\xc0\x67\x39\x83\x92\x45\x3e\xe5\x33\x3a\x6a\x9e\x2c\x2f\x97\xd3\x73\x7f\xbd\x52\x97\x25\x29\x41\xe6\xbf\x93\x57\xaf\xb6\xc7\xe9\x24\x62\x55\xca\x59\x79\x59\xb2\x5a\x9a\x5e\xaf\xe7\xe4\x0a"
		"\x64\xd3\x37\x36\xfd\xbf\xb4\x24\x88\xcb\x32\x27\xc4\x24\xb4\x8d\x0b\xb2\x68\xc8\x72\x7e\x68\x97\xdc\xae\x44\xb1\xed\x1b\xbb\x22\x4b\x96\x34\x61\x74\xeb\xf5\xf9\x62\xfa\x9d\xb7\x6b\xfb\xe3\x4c\xe3\xe2\xbb\x9c\x8d\x97\xa5\x8e\xd4\x41\x16\x15\x90\xa5\x40\x59\x6c\x2b\xd7\xb4\xbb\xa7\xdb\xdc\x9b\xfe\x5f\xd6\xf7\x37\xd7\xd5\x65\x51\xc1\x65\x12\x16\x29\x99\xcb\xe3\x90\x05\x59\x90\x05\x59\xf4\xba\x29\xdf\x8f\xf9\x49\xe8\x2b\x09\x6c\x93\xc7\xa4\x1b\xa6\x2b\x8c\xaf\x72\x67\xc5\x05\x59\x1c\x8d\x86\xc5\xaf\xa4\xc8\xa2\x26\x4b\x9c\xc1\x60\xf0\xfb\xfd\xb3\x03\x3f\xa3\x61\xb6\xb2\xa8\x96\x33\x4a\x7a\x93\xf3\x6b\xa4\x2c\xfb\x7b\x42\x7e\xde\x09\xf9\xf5\x20\xe4\xe9\xc1\x5f\x50\xde\x6f\x84\xdc\xde\xaa\x86\x2c\xa6\x37\xf8\xaa\xf5\x5c\x86\x2c\xba\x71\x41\x96\x02\xba\x61\x49\x73\x1e\xbb\x3b\x42\x7e\xdc\x4e\x83\x71\x73\x22\xe4\xfd\x48\xc8\x8d\x35\xf5\x7b\x9d\xc5\xa1\x4d\xd3\x7b\x9d\x39\x79\xb2\xe8\x0c\x71\x9b\x4c\x4a\x86\xd0\x0d\xd3\x8d\x8b\x6a\x4b\xea\xaa\xfb\xd6\x58\x59\x16\xaf\x28\x59\x2d\x51\x28\xb2\x64\x4d\xd2\x45\x81\x74\x3d\x83\x5f\x86\x2c\x3a\x71\x41\x16\x8f\xf3\x2c\x36\xb2\x14\xd9\x9d\xca\x92\xc5\xe7\x72\x97\xd0\x65\x29\x72\x9e\x0d\x59\x02\xbc\xc1\x0f\x51\x96\x90\x06\x26\x6c\xe3\xe2\xf2\xe2\x87\x2c\xc8\x82\x2c\x4d\x1f\x3a\x4e\x1a\xd5\x08\x71\x52\x52\xf7\x9e\xa5\x8e\xab\x8e\x8b\x8c\x4b\x52\xfd\xb2\xea\x18\x59\x90\x05\x59\xca\xdf\xf8\x13\xc2\x82\x4d\x1d\x59\xaa\xb4\xf9\xab\x2a\x54\x7e\xf3\x97\xab\x24\x74\xb1\x14\xbc\xe8\x25\xfa\x3e\x64\xf1\xbd\x5d\xd7\xf7\xd6\x89\x90\x76\xd8\x06\xfd\xc0\x0a"
		"\x9b\x4d\x46\x3a\xb2\x98\x6e\xfe\x72\x11\xac\xaa\x3d\xb0\xc2\xe7\xa6\xbc\x78\x0b\xd1\x98\x07\x56\xf8\xc2\x76\x74\x0a"
		"\x00\x59\x90\x05\x90\x45\xaf\xab\x87\x2c\x80\x2c\xc8\x02\xc8\xe2\x4e\x18\x44\x01\x64\x01\x40\x16\x00\x64\x01\x40\x16\x00\x64\x01\x00\x64\x01\x40\x16\x00\x64\x01\x08\x4c\x16\x84\x01\x48\x16\x65\x22\xcb\xf8\xd5\x5a\xfc\x10\x00\xfe\x89\xd2\x8a\x64\x59\x8a\xa0\x42\x00\x52\x45\x59\x99\x31\x31\x66\x89\x16\x06\x20\xb5\x45\x89\x44\x69\xfd\x00\x2b\xed\xb8\xaa\x27\xbc\x5c\xf7\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82"s
	);
}
