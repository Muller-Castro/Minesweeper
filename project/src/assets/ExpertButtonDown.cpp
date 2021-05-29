/****************************************************************************************/
/* ExpertButtonDown.cpp                                                                 */
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

#include "assets/ExpertButtonDown.h"

using namespace std::literals;

std::pair<std::string, std::string> Minesweeper::get_raw_expert_button_down()
{
	return std::make_pair("ExpertButtonDown",
		"\x89\x50\x4e\x47\x0d\x0a"
		"\x1a\x0a"
		"\x00\x00\x00\x0d\x49\x48\x44\x52\x00\x00\x00\xcb\x00\x00\x00\x35\x08\x06\x00\x00\x00\xef\x63\x1f\x5a\x00\x00\x01\x85\x69\x43\x43\x50\x49\x43\x43\x20\x70\x72\x6f\x66\x69\x6c\x65\x00\x00\x28\x91\x7d\x91\x3d\x48\xc3\x40\x1c\xc5\x5f\x5b\xa5\xa2\x2d\x0e\x76\x10\x91\x12\xa1\x3a\x59\x10\x15\x71\x94\x2a\x16\xc1\x42\x69\x2b\xb4\xea\x60\x72\xe9\x17\x34\x69\x48\x52\x5c\x1c\x05\xd7\x82\x83\x1f\x8b\x55\x07\x17\x67\x5d\x1d\x5c\x05\x41\xf0\x03\xc4\xc9\xd1\x49\xd1\x45\x4a\xfc\x5f\x52\x68\x11\xe3\xc1\x71\x3f\xde\xdd\x7b\xdc\xbd\x03\xbc\x8d\x0a"
		"\x53\x8c\xae\x09\x40\x51\x4d\x3d\x15\x8f\x09\xd9\xdc\xaa\xe0\x7f\x45\x1f\xc2\x08\x62\x04\x61\x91\x19\x5a\x22\xbd\x98\x81\xeb\xf8\xba\x87\x87\xaf\x77\x51\x9e\xe5\x7e\xee\xcf\x11\x94\xf3\x06\x03\x3c\x02\xf1\x1c\xd3\x74\x93\x78\x83\x78\x66\xd3\xd4\x38\xef\x13\x87\x58\x49\x94\x89\xcf\x89\xc7\x75\xba\x20\xf1\x23\xd7\x25\x87\xdf\x38\x17\x6d\xf6\xf2\xcc\x90\x9e\x49\xcd\x13\x87\x88\x85\x62\x07\x4b\x1d\xcc\x4a\xba\x42\x3c\x4d\x1c\x91\x15\x95\xf2\xbd\x59\x87\x65\xce\x5b\x9c\x95\x4a\x8d\xb5\xee\xc9\x5f\x18\xc8\xab\x2b\x69\xae\xd3\x1c\x46\x1c\x4b\x48\x20\x09\x01\x12\x6a\x28\xa3\x02\x13\x51\x5a\x55\x52\x0c\xa4\x68\x3f\xe6\xe2\x1f\xb2\xfd\x49\x72\x49\xe4\x2a\x83\x91\x63\x01\x55\x28\x10\x6d\x3f\xf8\x1f\xfc\xee\xd6\x28\x4c\x4d\x3a\x49\x81\x18\xd0\xfd\x62\x59\x1f\xa3\x80\x7f\x17\x68\xd6\x2d\xeb\xfb\xd8\xb2\x9a\x27\x80\xef\x19\xb8\x52\xdb\xfe\x6a\x03\x98\xfd\x24\xbd\xde\xd6\x22\x47\x40\xff\x36\x70\x71\xdd\xd6\xa4\x3d\xe0\x72\x07\x18\x7c\xd2\x44\x5d\xb4\x25\x1f\x4d\x6f\xa1\x00\xbc\x9f\xd1\x37\xe5\x80\x81\x5b\xa0\x77\xcd\xe9\xad\xb5\x8f\xd3\x07\x20\x43\x5d\x2d\xdf\x00\x07\x87\xc0\x58\x91\xb2\xd7\x5d\xde\xdd\xd3\xd9\xdb\xbf\x67\x5a\xfd\xfd\x00\xae\xd3\x72\xbf\xf1\xa0\x6e\xb7\x00\x00\x00\x06\x62\x4b\x47\x44\x00\x00\x00\x00\x00\x00\xf9\x43\xbb\x7f\x00\x00\x00\x09\x70\x48\x59\x73\x00\x00\x2e\x23\x00\x00\x2e\x23\x01\x78\xa5\x3f\x76\x00\x00\x00\x07\x74\x49\x4d\x45\x07\xe4\x0b\x1e\x11\x05\x2c\xd4\x5c\xb3\x68\x00\x00\x00\x19\x74\x45\x58\x74\x43\x6f\x6d\x6d\x65\x6e\x74\x00\x43\x72\x65\x61\x74\x65\x64\x20\x77\x69\x74\x68\x20\x47\x49\x4d\x50\x57\x81\x0e\x17\x00\x00\x03\x3f\x49\x44\x41\x54\x78\xda\xed\x9d\xcb\x6e\x13\x31\x14\x40\x27\x25\xaa\xa8\xe0\x4f\xf2\x6b\x88\x05\x7c\x44\x22\x48\x1a\x76\x6c\x90\x40\x55\xc5\xaa\x5b\x16\x54\x85\x0d\xb0\x00\x41\xf3\x49\xc1\x03\x03\x1d\x4d\xe7\xe1\xeb\xb7\xc7\xc7\xd2\x51\x95\x28\x4e\x26\xb6\x4f\x7c\xfd\x9a\x56\x15\x89\x44\xea\xa6\x85\xf6\x2b\xf7\xfb\x3d\x40\xd1\x20\x09\x80\x0b\x69\x28\x18\x80\x3f\x72\x2c\x26\x85\xe9\xcb\xa4\x38\xad\xff\x1e\xd7\xd5\x11\x60\xee\x34\x6d\xfe\x4c\x71\x32\x28\xcb\x80\x61\xb5\x28\xa7\x14\x22\x14\x26\xcc\xe3\x5a\x98\xc1\xde\x65\xa8\x3b\xa2\xf0\xa0\xd4\x1e\x46\x24\x4b\xf7\x0d\xd4\x73\x00\xb3\xa5\xa7\xbd\x57\xda\xa1\x18\xa2\x40\xc9\xc2\x20\x0b\x00\xb2\x00\x04\x92\x65\x6a\xcc\x42\x41\x02\xb2\x20\x0b\x00\xb2\x00\x64\x25\x8b\xc9\x1c\xf7\xbb\xf3\xcd\xec\x2b\xe5\xdb\xf6\x59\xef\x77\xff\xb1\x7d\xea\xe4\x7d\xa6\xca\xd5\x34\x9f\xeb\xef\x9b\xda\x75\x46\x93\xc5\x66\x51\x68\xce\xc2\x4c\x35\x00\x5d\x61\x24\x0d\xa9\x5d\xae\xa6\xf9\x42\x88\x12\xf3\x3a\x91\x65\xa6\xb2\xc4\x58\xd5\xfe\xf9\xf2\x49\xd0\x36\x10\xf2\x3a\xd3\x92\xe5\xa0\xc1\xfb\x02\x65\xb9\x6e\xbe\xfb\x8d\xbe\x2c\xbd\x8d\xe4\x5a\xaf\x5c\x6d\xf3\x49\x1a\x62\x2e\xd7\x99\xbd\x2c\x5d\xde\xb6\xe4\xf9\xb2\x7d\xee\xe4\x17\xc8\x26\x36\x36\xfd\xbc\xc1\x46\x70\x53\x1d\x75\xb7\x17\xc5\x6c\x84\xd6\xf5\x82\x2c\x02\x59\x2e\xcd\x1b\x77\x5d\x31\xae\x44\xb1\x8d\x8d\x9d\x31\x22\xcb\x50\xb9\x8b\xcb\xf5\x63\xf3\x9a\x4f\x0e\xf2\x99\xd6\x4b\xe0\xeb\x2c\x5e\x96\x59\x32\x03\x59\xb4\x40\x16\x8f\xb2\xd8\x16\xee\x21\x50\x58\x62\xfa\x79\x63\xaf\xdf\x08\x64\xd1\xc1\xa5\x2c\x3e\x25\x73\x98\x0f\x59\x90\x05\x59\x90\x45\x18\xa6\xdc\x6a\x34\xc2\xcb\x4c\x1a\x8f\x41\x18\x26\x16\x26\xd4\x75\xdf\xea\x4f\x0c\x20\x8b\xe9\x6c\xd8\x06\x59\xa4\xb2\xb4\x79\x73\xfe\xe2\x2e\xcf\x45\xa0\xd9\x30\x5b\x59\x2e\xf4\x67\xb5\x4c\xbe\x9f\x6b\x59\xd4\xe3\x45\xfa\xb2\xbc\x56\x7c\x57\xfc\x6a\x0a"
		"\xea\x5f\xa5\x7c\x56\x6c\x33\x91\xc5\x70\x80\xaf\x5b\xce\x51\x64\x91\xd6\x4b\xe6\xb2\x24\x19\x86\xf5\xae\x79\xbc\x52\x7c\x6d\xf2\x5f\x29\x3e\xc8\xc6\x3a\xf7\xa6\x36\x4d\xc7\x3a\x07\x3d\x59\x44\x53\xdc\x06\x8b\x92\x49\x84\x61\xd2\x7a\xd1\xec\x49\x5d\x85\x6f\xe5\xca\xd2\xfd\x45\xd9\xa4\x2f\xcb\xd8\x22\x5d\x5d\x91\xce\x57\xf0\xd7\x91\x06\xea\xba\xf5\x32\x17\x59\xf6\x03\x37\x1b\x4b\x6a\x9d\xc5\x42\x16\xaf\xe1\xd4\x88\x2c\x41\xb7\xbb\xa4\x2e\x8b\xcf\x75\x36\x64\x49\x70\x80\x9f\xa2\x2c\x29\x4d\x4c\xd8\xd6\x8b\xc3\x1f\x3f\x64\x41\x16\x64\x89\x24\x8b\x7a\xfc\x20\xbc\x2c\xba\x8b\x77\x29\x2e\x4a\x0a"
		"\xc7\x2c\x73\xdc\x75\xec\xb5\x5e\x0e\x1a\x72\xb2\xeb\x18\x59\x90\x25\x6d\x59\xfe\xf7\x2c\x6d\x59\xd4\x93\x67\x29\x1c\xfe\xf2\xba\x61\xcf\x33\x22\x59\x32\x3a\xfc\x95\x0b\x3e\x0e\x7f\x85\x5d\x94\x74\xd4\x08\x9d\x6c\x05\xf7\xbc\x45\x3f\x84\x2c\xa1\x8f\xeb\x86\x3e\x3a\x11\xeb\x84\x6d\x76\x37\xac\xb0\x3a\x64\x24\x90\xc5\xf4\xf0\x97\x8d\x28\xb9\xde\xb0\x22\xe4\xa1\xbc\x76\x0f\x51\xcc\x0d\x2b\x62\xdc\xbe\xc6\x64\x0c\x01\xa0\x11\x86\x9d\x28\x96\xc8\x02\x50\x64\xcf\x62\x11\x1a\x01\x20\x0b\xb2\x00\xb2\x4c\x0b\x83\x28\x80\x2c\x00\xc8\x02\x80\x2c\x00\xf9\xcb\xe2\x6b\x23\x25\x40\x91\xb2\x20\x0c\x94\x24\x8a\x58\x96\xfa\x7f\x81\xb3\x31\x0f\x4a\xa4\x6e\xfb\xa2\x31\x8b\x4a\xcb\xdd\x6e\xb7\xa6\xf0\xa0\x24\x56\xab\xd5\x23\xd5\xf6\x1f\x4a\x65\xa9\xb7\x25\x2f\xe9\x61\xa0\xa4\x1e\xa5\x16\xa5\xdb\xb3\xdc\x4b\x43\xe1\x18\x40\xe9\xf4\x26\x0a"
		"\x06\xe0\x6f\x54\x35\x2a\x0a"
		"\xd2\x00\xdc\x89\xd2\x93\x16\x15\x89\xe4\x3a\x4d\x86\x30\x99\xa6\xdf\x18\x09\xa6\xf6\xeb\x67\xda\xb9\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82"s
	);
}
