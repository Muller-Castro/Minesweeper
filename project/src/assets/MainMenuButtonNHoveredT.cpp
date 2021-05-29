/****************************************************************************************/
/* MainMenuButtonNHoveredT.cpp                                                          */
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

#include "assets/MainMenuButtonNHoveredT.h"

using namespace std::literals;

std::pair<std::string, std::string> Minesweeper::get_raw_main_menu_button_n_hovered_t()
{
	return std::make_pair("MainMenuButtonNHoveredT",
		"\x89\x50\x4e\x47\x0d\x0a"
		"\x1a\x0a"
		"\x00\x00\x00\x0d\x49\x48\x44\x52\x00\x00\x00\xcb\x00\x00\x00\x35\x08\x06\x00\x00\x00\xef\x63\x1f\x5a\x00\x00\x01\x84\x69\x43\x43\x50\x49\x43\x43\x20\x70\x72\x6f\x66\x69\x6c\x65\x00\x00\x28\x91\x7d\x91\x3d\x48\xc3\x40\x1c\xc5\x5f\x53\xa5\x22\x55\x41\x3b\x88\x38\x64\xa8\x4e\x16\xc4\x8a\x38\x4a\x15\x8b\x60\xa1\xb4\x15\x5a\x75\x30\xb9\xf4\x0b\x9a\x34\x24\x29\x2e\x8e\x82\x6b\xc1\xc1\x8f\xc5\xaa\x83\x8b\xb3\xae\x0e\xae\x82\x20\xf8\x01\xe2\xe4\xe8\xa4\xe8\x22\x25\xfe\x2f\x29\xb4\x88\xf1\xe0\xb8\x1f\xef\xee\x3d\xee\xde\x01\x42\xa3\xc2\x54\xb3\x6b\x12\x50\x35\xcb\x48\xc5\x63\x62\x36\xb7\x2a\x06\x5e\x11\x44\x3f\x86\x30\x88\xa8\xc4\x4c\x3d\x91\x5e\xcc\xc0\x73\x7c\xdd\xc3\xc7\xd7\xbb\x08\xcf\xf2\x3e\xf7\xe7\xe8\x53\xf2\x26\x03\x7c\x22\xf1\x1c\xd3\x0d\x8b\x78\x83\x78\x66\xd3\xd2\x39\xef\x13\x87\x58\x49\x52\x88\xcf\x89\x27\x0c\xba\x20\xf1\x23\xd7\x65\x97\xdf\x38\x17\x1d\x16\x78\x66\xc8\xc8\xa4\xe6\x89\x43\xc4\x62\xb1\x83\xe5\x0e\x66\x25\x43\x25\x9e\x26\x0e\x2b\xaa\x46\xf9\x42\xd6\x65\x85\xf3\x16\x67\xb5\x52\x63\xad\x7b\xf2\x17\x06\xf3\xda\x4a\x9a\xeb\x34\x47\x11\xc7\x12\x12\x48\x42\x84\x8c\x1a\xca\xa8\xc0\x42\x84\x56\x8d\x14\x13\x29\xda\x8f\x79\xf8\x47\x1c\x7f\x92\x5c\x32\xb9\xca\x60\xe4\x58\x40\x15\x2a\x24\xc7\x0f\xfe\x07\xbf\xbb\x35\x0b\xd1\x29\x37\x29\x18\x03\xba\x5f\x6c\xfb\x63\x0c\x08\xec\x02\xcd\xba\x6d\x7f\x1f\xdb\x76\xf3\x04\xf0\x3f\x03\x57\x5a\xdb\x5f\x6d\x00\xb3\x9f\xa4\xd7\xdb\x5a\xf8\x08\x18\xd8\x06\x2e\xae\xdb\x9a\xbc\x07\x5c\xee\x00\xc3\x4f\xba\x64\x48\x8e\xe4\xa7\x29\x14\x0a"
		"\xc0\xfb\x19\x7d\x53\x0e\x18\xba\x05\x7a\xd7\xdc\xde\x5a\xfb\x38\x7d\x00\x32\xd4\xd5\xf2\x0d\x70\x70\x08\x8c\x17\x29\x7b\xdd\xe3\xdd\x3d\x9d\xbd\xfd\x7b\xa6\xd5\xdf\x0f\xa6\xfe\x72\xbc\xc0\x88\xf3\x33\x00\x00\x00\x06\x62\x4b\x47\x44\x00\x69\x00\x55\x00\x4c\x78\x7c\x4f\xa3\x00\x00\x00\x09\x70\x48\x59\x73\x00\x00\x2e\x23\x00\x00\x2e\x23\x01\x78\xa5\x3f\x76\x00\x00\x00\x07\x74\x49\x4d\x45\x07\xe4\x0c\x0e\x13\x14\x22\x81\x80\xe2\x9e\x00\x00\x00\x19\x74\x45\x58\x74\x43\x6f\x6d\x6d\x65\x6e\x74\x00\x43\x72\x65\x61\x74\x65\x64\x20\x77\x69\x74\x68\x20\x47\x49\x4d\x50\x57\x81\x0e\x17\x00\x00\x05\x3c\x49\x44\x41\x54\x78\xda\xed\x9c\x4b\x28\x3d\x51\x1c\xc7\xaf\xfa\xf7\x57\x7f\x7f\x36\x4a\x29\x1b\x16\xc2\x52\xac\xa4\x94\x85\x28\x8f\x28\x91\xc7\x82\x15\x1b\x0b\x22\xf2\xc8\x2b\xf2\xdc\x28\x16\xa4\xc8\x4e\xb6\xb2\xb0\x63\xa3\x28\x8f\x22\xa2\x64\x21\xa1\xac\x94\xe7\xf9\xff\x7f\xa7\x3b\xd3\xcc\xbd\x67\xe6\xce\x9c\xb9\x8f\xb9\xd7\xf7\xd4\xa7\x9b\x71\xe7\xde\xf3\x3b\xf3\xfb\x74\x1e\x73\xe6\x7a\x3c\x1e\x4f\xdc\x7f\x7e\x7b\x5f\x19\x00\x40\x07\x79\xf1\xd7\xfb\xca\x45\xf9\x8d\x46\x01\xc0\x90\xbf\x5e\xd0\xa3\x00\x60\xb1\x87\xd1\x1f\x9c\x9f\x9f\x07\x00\xfc\x47\x20\x0c\x44\x01\xc0\xa2\x30\x90\x05\x00\xc8\x02\x00\x64\x01\x00\xb2\x00\x00\x59\x00\x80\x2c\x01\x18\x1c\x1c\xf4\x03\x17\x01\x40\x16\x1f\xfa\xfb\xfb\x59\x76\x76\xb6\x1f\x10\x06\x40\x16\x1f\x51\x52\x53\x53\xfd\x48\x4b\x4b\xe3\xc2\xe0\x42\x00\xc8\xa2\x11\x45\xfb\xd9\xe3\xe3\xe3\xfc\x55\x11\x06\x17\x02\xfc\x78\x59\x44\xa2\xcc\xcd\xcd\xb1\xd7\xd7\x57\xf5\x6f\x92\xa5\xbb\xbb\x5b\x48\x4f\x4f\x0f\x1b\x18\x18\x60\x93\x93\x93\xb8\x58\x20\x76\x65\x31\x12\xe5\xe3\xe3\x83\xbd\xbf\xbf\xdb\xde\xbc\x56\x54\x54\xc4\xba\xba\xba\x70\xd1\x40\x6c\xc9\x32\x3c\x3c\x6c\x28\x0a"
		"\x15\x19\x59\x14\xca\xca\xca\xd8\xd4\xd4\x94\x4c\x70\x2a\xd4\x6b\x99\x9d\x47\xbd\x9d\xe8\xbc\xce\xce\x4e\xa7\x0d\x6c\xb9\x0e\x41\xba\xa0\x11\x89\x19\xb2\x38\x90\x45\x2b\x0a"
		"\x95\xcf\xcf\x4f\xb6\xba\xba\x6a\xc8\xf2\xf2\x32\x17\xa2\xa9\xa9\x49\x78\x01\x0b\x0a"
		"\x0a"
		"\x02\x0a"
		"\x13\x48\x3a\xa3\xe4\x31\x4a\x1a\x99\xe4\x91\xad\x43\xb0\x45\x09\x67\xcc\x90\xc5\x81\x2c\x7d\x7d\x7d\x3a\x51\xec\x96\x87\x87\x07\xb6\xbe\xbe\xce\x12\x13\x13\xfd\x84\x99\x9e\x9e\x96\x4e\x1c\xa2\xba\xba\x5a\x7d\x7f\x6f\x6f\xaf\xa5\x73\xa2\x59\x96\x70\xc4\x0c\x59\x1c\xc8\x92\x99\x99\xc9\xce\xcf\xcf\x75\x02\x7c\x7f\x7f\xb3\xc7\xc7\x47\x43\x9e\x9e\x9e\xf8\x22\x80\xb6\xdc\xde\xde\xb2\xf2\xf2\x72\x5d\x85\x2b\x2a\x2a\x2c\x05\xa6\x14\xea\xb5\x44\xc9\x63\x94\x34\x34\x5c\xa4\xb2\xb1\xb1\xe1\x58\x16\x51\x1d\x42\x29\x4b\xa4\x62\x86\x2c\x0e\x87\x61\xbe\xc2\x58\x9d\xb3\xb4\xb7\xb7\xb3\xfd\xfd\x7d\x3e\x6c\xa3\xf2\xfc\xfc\xcc\x4a\x4b\x4b\x75\xef\xa1\x8b\xee\x24\x71\xcc\x10\x25\x4e\x6d\x6d\xad\xd4\x5c\x4b\xb6\x0e\x0a"
		"\x56\x16\x37\xdc\x10\x33\xd5\x53\x36\x3e\x2b\x3d\x70\x5d\x5d\x9d\xf0\x3d\x55\x55\x55\xd1\x29\x0b\xcd\x51\x6a\x6a\x6a\x74\x1f\xae\x15\xc6\xee\x04\x7f\x6c\x6c\x4c\xed\x69\xae\xaf\xaf\x75\xff\xa3\xde\xc6\x6a\xe2\x28\xe5\xe2\xe2\xc2\xf0\xbb\x16\x16\x16\xfc\xde\xaf\x4d\x9c\x48\x12\x48\x98\x58\x8c\x59\x2b\x8c\x91\x28\xe1\x12\x26\x64\x4b\xc7\x66\xc2\x68\x65\xa1\xc9\x65\x61\x61\x21\x87\xe6\x21\x59\x59\x59\xc2\x86\x98\x98\x98\xe0\xc3\x37\x2a\x8b\x8b\x8b\xea\xf1\xe4\xe4\x64\x36\x3b\x3b\xfb\x63\x12\xc7\x2c\x21\x20\x4b\x94\xca\x62\x26\xcc\xf1\xf1\xb1\x4e\x16\xdf\xf3\xe8\x0e\x7f\x4b\x4b\x0b\x17\x41\x7b\xee\xe1\xe1\x21\xbf\x90\x37\x37\x37\x7e\x3b\x02\xec\x0c\x49\x96\x96\x96\xd4\x63\x19\x19\x19\xfc\xd8\xc9\xc9\x09\xff\xfb\xea\xea\xca\x74\x48\xa2\x70\x76\x76\x66\xb8\x28\xb1\xb6\xb6\x66\x69\x18\x66\xa5\x88\x3e\xcb\x28\x29\xdc\x1a\xb3\xdd\xf8\x8c\xe6\x77\x5a\x59\x44\x75\x8f\x6a\x59\x8c\x84\x51\x96\x2a\xe9\xd5\x6c\xbb\x0b\x6d\xb2\x4c\x48\x48\xd0\x0d\xc7\x94\xa5\xe7\xfc\xfc\x7c\xf5\xf8\xc8\xc8\x08\x64\x81\x2c\xd1\x2f\x8b\x56\x18\x45\x0e\x2d\xf5\xf5\xf5\xa6\xe7\x36\x36\x36\xaa\x75\xca\xcd\xcd\x55\x1b\xb2\xad\xad\x4d\x5a\x16\x2d\xca\xd0\x4e\x74\xd1\xcc\x12\xc7\x0c\xd1\x85\x34\x93\xc5\x6c\x12\x6e\x27\x29\x42\x15\xb3\x6c\x3d\x83\x79\xde\x8f\x91\x45\x11\x86\xc4\xf0\x85\x8e\x9b\x9d\x47\x8d\xa4\xad\xd7\xd7\xd7\x17\x6f\x24\xed\xd2\x27\x64\x81\x2c\x31\x25\x8b\x22\x8c\x2f\x81\xce\x29\x2e\x2e\x56\xeb\x54\x59\x59\xa9\x36\xa4\xf6\xee\xbe\x13\x59\xec\x2e\xa3\xc6\x82\x2c\x76\x63\x86\x2c\x2e\x7f\xac\x98\x56\xb8\x5a\x5b\x5b\x75\x15\x5c\x59\x59\xe1\x0d\x44\xcb\xc8\x29\x29\x29\x11\x95\xc5\x6c\xfc\xae\x14\x19\x59\x9c\x24\x45\xa8\x65\xb1\x52\x82\x91\xf4\x90\xc5\xdb\xb3\x8c\x8e\x8e\x9a\x42\x5b\xf2\x69\x3e\x92\x97\x97\xa7\xab\x1c\x6d\x77\xb9\xbf\xbf\xe7\x0d\x74\x74\x74\xa4\xfb\x9f\x68\x0b\x7f\xa0\xc4\xd1\x2e\x1c\x88\x16\x1f\x62\x51\x16\xd9\x98\x21\x4b\x04\xe6\x2c\x24\x83\xec\x3a\xfb\xee\xee\x2e\x6f\x1c\x9a\xb3\xd0\x9d\x7d\xe5\x38\x3d\x69\x29\x1a\xce\xc9\x6e\x35\x09\x94\x38\x43\x43\x43\x7c\xe9\xfb\xed\xed\x8d\x6f\xcb\xb9\xbc\xbc\x64\x7b\x7b\x7b\x6c\x73\x73\x53\xed\x0d\x4f\x4f\x4f\x5d\x29\x8b\x6c\xcc\xb2\xbd\x54\x30\x65\x71\x32\x3c\x8d\x3a\x59\x66\x66\x66\xa4\x24\xc9\xc9\xc9\xe1\xc9\xa8\x94\xed\xed\x6d\xdd\xff\x1b\x1a\x1a\x5c\x97\x38\x4e\xe6\x2c\x90\x05\xb2\xe8\x64\xa1\xf9\x06\x6d\xce\x33\x82\x1a\x94\x76\x14\xef\xec\xec\xb0\x97\x97\x17\xb5\xf1\x0e\x0e\x0e\x74\x15\x4e\x4a\x4a\x12\xde\x90\x84\x2c\x90\x25\x66\x64\xa1\xad\x2d\x76\x0a"
		"\x0d\x79\xb6\xb6\xb6\x84\x1b\x2d\x83\xbd\xe3\x37\x96\xe7\x2c\x6e\x88\xd9\x4a\x7c\xb2\xdf\xf7\x23\x65\xa1\xfb\x00\xb4\xe2\x75\x77\x77\xc7\x87\x5d\xb4\x64\xec\xdb\x90\xcd\xcd\xcd\x21\xd9\x1e\x0f\x59\x20\x4b\xd4\xce\x59\x44\x04\x12\x25\x94\x4f\x0d\xba\x79\xc3\x60\x34\xc4\x6c\x25\xbe\x50\x6c\x32\xfd\x71\xb2\xa4\xa7\xa7\xb3\x8e\x8e\x8e\x88\x3e\x62\x0b\x59\x20\x4b\x58\xee\xb3\xd8\x15\x26\x3e\x3e\x9e\x2f\x0d\x97\x94\x94\xf0\xf9\x89\xd5\x1f\xaa\x08\xe5\x8f\x37\xc8\x3e\xfc\x65\x35\x91\x9c\x3e\xe4\xe4\xe6\x98\xad\xc6\x27\xf3\x7d\x51\xfb\xf0\x17\x00\x78\xac\x18\x00\xc8\x02\x59\x00\x80\x2c\x00\x40\x16\x00\x20\x0b\x00\x90\x05\x00\xc8\x02\x00\x64\x01\x00\x40\x16\x00\x20\x0b\x00\x61\x96\x05\xc2\x00\x60\xba\xe7\xce\x13\xe7\xa6\xdf\xb7\x05\xc0\xa5\x90\x27\x9e\x5f\x5e\xd0\x20\x00\x88\xf9\xe3\x85\x1b\xf3\x0b\x3d\x0c\x00\x86\x3d\x0a"
		"\x89\x12\xf7\x0f\x72\xa1\x3b\xaf\x44\x69\x51\xf4\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82"s
	);
}
