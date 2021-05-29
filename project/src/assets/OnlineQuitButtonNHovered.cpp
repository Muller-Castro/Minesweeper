/****************************************************************************************/
/* OnlineQuitButtonNHovered.cpp                                                         */
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

#include "assets/OnlineQuitButtonNHovered.h"

using namespace std::literals;

std::pair<std::string, std::string> Minesweeper::get_raw_online_quit_button_n_hovered()
{
	return std::make_pair("OnlineQuitButtonNHovered",
		"\x89\x50\x4e\x47\x0d\x0a"
		"\x1a\x0a"
		"\x00\x00\x00\x0d\x49\x48\x44\x52\x00\x00\x00\xa3\x00\x00\x00\x2b\x08\x06\x00\x00\x00\x14\x8f\x38\x35\x00\x00\x01\x6e\x69\x43\x43\x50\x69\x63\x63\x00\x00\x28\x91\x75\x91\xbd\x4b\x42\x51\x18\xc6\x7f\x6a\x66\x94\xe1\x50\x43\x44\x83\x83\x45\x83\x42\x14\x45\x63\x18\xe4\x62\x0d\x6a\x90\xd5\xa2\xd7\xaf\x40\xed\x72\xaf\x12\xd2\x1a\xb4\x34\x08\x0d\x51\x4b\x5f\x43\xff\x41\xad\x41\x6b\x41\x10\x14\x41\x44\x4b\xff\x40\x5f\x4b\xc8\xed\x3d\x29\x28\x61\xe7\x72\xee\xfb\xe3\x39\xe7\x79\x39\xe7\x39\x60\x0f\xe7\xb5\x82\xd9\x31\x06\x85\x62\xc9\x88\x84\x82\xde\xa5\xf8\xb2\xd7\xf5\x8a\x93\x4e\x3c\xb8\x98\x4c\x68\xa6\x3e\x1f\x9d\x8b\xf1\xef\xf8\xba\xc7\xa6\xea\x5d\x40\xf5\xfa\x7f\x5f\xdb\xd1\x93\x4a\x9b\x1a\xd8\xba\x84\xa7\x34\xdd\x28\x09\xcf\x08\x87\x37\x4a\xba\xe2\x1d\xe1\x7e\x2d\x97\x48\x09\x1f\x09\xfb\x0d\x39\xa0\xf0\xb5\xd2\x93\x75\x7e\x51\x9c\xad\xf3\x87\x62\x23\x16\x99\x05\xbb\xea\xe9\xcd\xb6\x70\xb2\x85\xb5\x9c\x51\x10\x1e\x15\xf6\x15\xf2\x65\xad\x71\x1e\x75\x13\x77\xba\xb8\x18\x95\x3a\x28\x73\x08\x93\x08\x21\x82\x78\x49\x52\x66\x8d\x3c\x25\x02\x52\x8b\x92\x59\x7b\xdf\xd8\xaf\x6f\x81\x75\xf1\x68\xf2\xd7\xa9\x60\x88\x23\x4b\x4e\xbc\x7e\x51\xcb\xd2\x35\x2d\x35\x23\x7a\x5a\xbe\x3c\x15\x95\xfb\xdf\x3c\xcd\xcc\xc4\x78\xbd\xbb\x3b\x08\xce\x67\xcb\x7a\x1f\x06\xd7\x2e\xd4\xaa\x96\xf5\x7d\x6c\x59\xb5\x13\x70\x3c\xc1\x65\xb1\xe9\x5f\x97\x9c\xa6\x3f\x45\xaf\x36\x35\xdf\x21\x78\xb6\xe0\xfc\xaa\xa9\x25\xf7\xe0\x62\x1b\x06\x1e\xf5\x84\x91\xf8\x95\x1c\x32\xed\x99\x0c\xbc\x9d\x41\x6f\x1c\xfa\x6e\xa1\x7b\xa5\x9e\x55\x63\x9d\xd3\x07\x88\x6d\xca\x13\xdd\xc0\xfe\x01\x8c\xc8\x7e\xcf\xea\x0f\xe0\xc5\x67\xfc\x32\x6e\xf0\xdb\x00\x00\x00\x09\x70\x48\x59\x73\x00\x00\x0f\x61\x00\x00\x0f\x61\x01\xa8\x3f\xa7\x69\x00\x00\x01\xf9\x49\x44\x41\x54\x78\xda\xed\xdd\x4f\x6e\x82\x40\x18\x87\xe1\xb9\x04\x17\xf0\x20\x9c\x88\xb0\x90\x43\xd4\x9d\x47\x20\xe1\x42\x4d\x0c\x0b\x12\x8e\x61\x5c\x10\x12\x68\x87\x74\x1a\x95\x51\x11\xe7\x0f\x03\xef\x24\xbf\xb8\xa8\x8d\x3a\x3c\x1d\xe4\x9b\xaf\x41\x74\x5d\x27\x9a\xa6\x11\xbf\xa3\x27\xc4\x75\xa4\xbf\xf3\xf9\x2c\xe4\xe3\x00\x11\x8c\xc4\x67\x24\x46\x99\x1b\x84\xc7\xe3\x91\x10\x67\xd1\xc0\x04\x22\x59\x0c\x48\x30\x12\x30\x12\xb2\x0c\x8c\xfd\x17\x7f\x00\x64\x41\x18\x01\x49\x9c\x60\xbc\xbf\x52\x1a\x41\xfc\x16\x80\x24\x76\x31\xbe\xaa\x29\x29\x80\x03\x46\x40\x82\xd1\x24\xc6\xa9\x85\xcd\x11\x42\x35\xae\x50\x72\x70\xc0\x38\x0b\xe3\x9c\x4a\xfb\x0d\xc8\x15\x41\xdc\xef\xf7\x2f\x3f\xfb\xa7\xf3\x7b\x38\x1c\xb4\xaf\x93\xa6\x29\x18\xe7\x6e\xfd\xac\xed\x34\x3d\x05\xa2\xc2\x64\x6b\x6e\x43\x06\xe9\x15\xe3\x3f\xc8\x2b\x88\xa1\xd6\x39\xdf\xfd\xdc\x49\x92\x80\xd1\x34\x46\x13\x9b\xe3\x0a"
		"\x61\xa8\x7b\xe3\xf7\xef\xbd\x2c\xcb\x5e\x37\x8a\xa2\x98\xb4\x5a\x6a\xe7\xe8\x6f\xe4\x79\x3e\x7a\xad\xaa\xaa\xfa\x35\xf4\x15\x7c\x84\xd1\x76\x07\x47\x88\x93\xa8\x03\xa3\x72\x3a\x9d\x86\x9f\x3f\x03\x99\x65\xd9\x5b\x73\xa4\xc3\xb8\x92\xb3\x0b\x18\xc1\x08\xc6\x4d\x62\x54\x43\x87\x51\x3d\xb7\xae\x6b\xed\x69\xfa\xd1\xd8\xed\x76\xdb\xc3\xe8\xaa\xd9\x32\x74\x8c\x12\x98\x0d\x8c\xac\x8c\x60\x04\xe3\xd2\x30\xba\x6e\x45\x07\x23\x57\xd3\x60\x34\x80\x31\x8a\x22\xa7\x18\x37\x57\x67\x04\xa3\x9d\x0b\x18\xdd\x73\xc1\xc8\x77\x46\xa3\x18\xbb\xae\xd3\x16\xbd\xc1\x08\x46\x30\x82\x71\x1b\x18\x75\xdb\x81\xaa\xf6\xf7\xa8\xe8\xfd\x6c\x80\xf1\x8d\x5f\x8e\xe3\x78\xf3\x45\x6f\x1f\xdf\xa3\x69\x94\x60\x07\xc6\x48\x0b\x19\x18\x2d\x76\xed\xd8\x58\x1d\xd7\xde\xd3\x28\x5b\xc8\xe6\xe2\xa5\xb9\x16\x8c\x24\x94\xe6\x5a\x09\xd2\x14\x4a\x0e\x0c\x18\x8d\x74\x7a\x9b\x00\xc9\x81\x01\xa3\xb3\xff\x0e\x04\x21\xb1\x8e\x71\x2e\x4a\x0e\x04\xb1\x86\xf1\x15\x4e\x26\x9e\x78\xc3\x48\x08\x18\x09\x18\x09\x01\x23\x59\x1f\x46\x40\x12\xef\x8d\x26\xc3\xfd\x37\xb8\xfd\x03\x59\xc0\xfd\x60\x44\xdb\xb6\x43\x98\x10\xe2\x2b\x97\xcb\x45\xc8\x0c\x2b\x23\x18\x89\xcf\x15\x51\x42\x94\x8f\x3f\x2a\xd5\x2c\xeb\x10\xd3\xf2\xec\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82"s
	);
}
