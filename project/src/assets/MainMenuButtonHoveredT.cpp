/****************************************************************************************/
/* MainMenuButtonHoveredT.cpp                                                           */
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

#include "assets/MainMenuButtonHoveredT.h"

using namespace std::literals;

std::pair<std::string, std::string> Minesweeper::get_raw_main_menu_button_hovered_t()
{
	return std::make_pair("MainMenuButtonHoveredT",
		"\x89\x50\x4e\x47\x0d\x0a"
		"\x1a\x0a"
		"\x00\x00\x00\x0d\x49\x48\x44\x52\x00\x00\x00\xcb\x00\x00\x00\x35\x08\x06\x00\x00\x00\xef\x63\x1f\x5a\x00\x00\x01\x85\x69\x43\x43\x50\x49\x43\x43\x20\x70\x72\x6f\x66\x69\x6c\x65\x00\x00\x28\x91\x7d\x91\x3d\x48\xc3\x40\x1c\xc5\x5f\x53\xa5\x22\x55\x87\x16\x11\x71\xc8\x50\x9d\x2c\x88\x8a\x88\x93\x54\xb1\x08\x16\x4a\x5b\xa1\x55\x07\x93\x4b\x3f\x84\x26\x0d\x49\x8a\x8b\xa3\xe0\x5a\x70\xf0\x63\xb1\xea\xe0\xe2\xac\xab\x83\xab\x20\x08\x7e\x80\x38\x39\x3a\x29\xba\x48\x89\xff\x4b\x0a"
		"\x2d\x62\x3c\x38\xee\xc7\xbb\x7b\x8f\xbb\x77\x80\x50\x2f\x33\xd5\xec\x18\x03\x54\xcd\x32\x52\xf1\x98\x98\xcd\xad\x88\x81\x57\x04\xd1\x8b\x10\xfa\x31\x23\x31\x53\x4f\xa4\x17\x32\xf0\x1c\x5f\xf7\xf0\xf1\xf5\x2e\xca\xb3\xbc\xcf\xfd\x39\x7a\x94\xbc\xc9\x00\x9f\x48\x3c\xcb\x74\xc3\x22\x5e\x27\x9e\xda\xb4\x74\xce\xfb\xc4\x61\x56\x92\x14\xe2\x73\xe2\x51\x83\x2e\x48\xfc\xc8\x75\xd9\xe5\x37\xce\x45\x87\x05\x9e\x19\x36\x32\xa9\x39\xe2\x30\xb1\x58\x6c\x63\xb9\x8d\x59\xc9\x50\x89\x27\x89\x23\x8a\xaa\x51\xbe\x90\x75\x59\xe1\xbc\xc5\x59\x2d\x57\x59\xf3\x9e\xfc\x85\xc1\xbc\xb6\x9c\xe6\x3a\xcd\x21\xc4\xb1\x88\x04\x92\x10\x21\xa3\x8a\x0d\x94\x61\x21\x4a\xab\x46\x8a\x89\x14\xed\xc7\x3c\xfc\x83\x8e\x3f\x49\x2e\x99\x5c\x1b\x60\xe4\x98\x47\x05\x2a\x24\xc7\x0f\xfe\x07\xbf\xbb\x35\x0b\x13\xe3\x6e\x52\x30\x06\x74\xbe\xd8\xf6\xc7\x30\x10\xd8\x05\x1a\x35\xdb\xfe\x3e\xb6\xed\xc6\x09\xe0\x7f\x06\xae\xb4\x96\xbf\x52\x07\xa6\x3f\x49\xaf\xb5\xb4\xc8\x11\xd0\xb7\x0d\x5c\x5c\xb7\x34\x79\x0f\xb8\xdc\x01\x06\x9e\x74\xc9\x90\x1c\xc9\x4f\x53\x28\x14\x80\xf7\x33\xfa\xa6\x1c\x10\xba\x05\xba\x57\xdd\xde\x9a\xfb\x38\x7d\x00\x32\xd4\xd5\xd2\x0d\x70\x70\x08\x8c\x14\x29\x7b\xcd\xe3\xdd\x5d\xed\xbd\xfd\x7b\xa6\xd9\xdf\x0f\xc2\x65\x72\xc7\xbc\x6d\xad\x6f\x00\x00\x00\x06\x62\x4b\x47\x44\x00\x69\x00\x55\x00\x4c\x78\x7c\x4f\xa3\x00\x00\x00\x09\x70\x48\x59\x73\x00\x00\x2e\x23\x00\x00\x2e\x23\x01\x78\xa5\x3f\x76\x00\x00\x00\x07\x74\x49\x4d\x45\x07\xe4\x0c\x0e\x13\x18\x0e\x1f\xed\xc1\x71\x00\x00\x00\x19\x74\x45\x58\x74\x43\x6f\x6d\x6d\x65\x6e\x74\x00\x43\x72\x65\x61\x74\x65\x64\x20\x77\x69\x74\x68\x20\x47\x49\x4d\x50\x57\x81\x0e\x17\x00\x00\x05\x4a\x49\x44\x41\x54\x78\xda\xed\x9c\x5f\x48\x25\x55\x1c\xc7\x8f\xb0\xac\x90\xbb\xf6\x20\x08\xc2\x7d\xd1\x87\xd2\x1e\x17\x7b\x49\x2e\x08\x3e\x48\x86\xae\x28\x89\xa2\xeb\x83\x17\x02\x2d\xb0\x52\x34\xc5\x3f\xe8\xed\xb2\x72\xf5\xea\xcb\x52\x11\x95\xd0\x5f\xda\x8d\x5d\x8a\xe8\x0f\xb1\x44\x54\x14\x5b\x6b\x6c\x05\x45\x51\x10\x3d\x44\x54\xd0\xd3\x42\x7f\xb6\xd3\x9c\x99\x3b\xce\x9c\xb9\xe7\xcc\x3d\x73\xe6\xfe\x99\xb9\xf7\x2b\x7c\xb8\x3a\xce\xb9\x77\x7e\xe7\xfc\x3e\x9e\x3f\x73\x46\x42\x08\x69\x30\x38\xc9\x5e\xe9\x79\x42\x01\x00\x0e\x79\x3f\x4e\xe5\x5f\x4d\x51\x4e\xa2\x62\x00\x90\x0a"
		"\x73\x2a\x0f\x7a\x14\x00\x94\x7a\x18\xef\xc1\x83\x83\x03\x00\x80\x41\x81\x30\x10\x05\x00\x35\x61\x20\x0b\x00\x90\x05\x00\xc8\x02\x00\x64\x01\x00\xb2\x00\x00\x59\x8a\xb3\xb1\xb1\x51\x00\x1a\x01\x40\x16\x0f\x6b\x6b\x6b\xb4\xab\xab\xab\x00\x08\x03\x20\x8b\x47\x94\xb6\xb6\xb6\x02\x12\x89\x84\x29\x0c\x1a\x02\x40\x16\x97\x28\x84\x90\x63\x32\x0f\x5a\xaf\xb6\x30\x68\x08\x50\xf7\xb2\x88\x44\xd9\x7f\x94\xd0\x9b\x9f\x38\x3f\x33\x59\x96\x96\x96\x84\x2c\x2f\x2f\xd3\xf5\xf5\x75\xba\xb3\xb3\x83\xc6\x02\xb5\x2b\x8b\x4c\x94\x7f\x3e\x27\xf4\xef\xcf\x08\x77\x5c\x85\xde\xde\x5e\xba\xb8\xb8\x88\x46\x03\xb5\x25\xcb\xd6\xd6\x96\x54\x14\xfa\x85\x9e\x2c\x36\x03\x03\x03\x34\x9b\xcd\x2a\x5d\x87\xec\x3d\x58\xaf\xe5\x57\x8e\xf5\x76\xa2\x72\x0b\x0b\x0b\x81\xeb\x42\xf7\x1a\x74\x89\x42\xcc\x90\x25\x84\x2c\x6e\x51\x18\xff\x1a\xdf\x1f\x6e\xca\x79\x66\x83\xd0\xec\xc3\x84\x9e\xbb\x4f\xdc\xf0\x3d\x3d\x3d\x45\x85\x29\x26\x9d\x2c\x79\x64\x49\xa3\x93\x3c\xba\xd7\x50\x6a\x51\x2a\x19\x33\x64\x09\x21\xcb\x6a\x8a\x17\x25\x28\xbf\x5e\x25\xf4\x85\x34\xa1\xa7\x4f\x17\x0a"
		"\xb3\xbb\xbb\xab\x9d\x38\x8c\x91\x91\x91\xe3\xf3\x57\x56\x56\x94\xca\xc4\x59\x96\x4a\xc4\x0c\x59\x42\xc8\x72\x47\x82\xd0\x6f\x2e\xf3\x02\xfc\x77\x44\xe8\x6f\xef\xcb\xf9\xdd\xe0\xe6\xa7\x7c\x99\x9f\xde\x22\x74\xb0\x87\x6f\xc4\xa1\xa1\x21\xa5\xc4\xb1\xdf\x83\xf5\x5a\xa2\xe4\x91\x25\x0d\x1b\x2e\xb2\x72\x2f\x65\xc2\xcb\x22\xba\x86\x72\xca\x52\xad\x98\x21\x4b\xc8\x61\x98\x57\x18\xd5\x39\xcb\xdc\xfd\x84\x7e\x7c\x68\x0c\xdb\xae\x5b\xe5\xfe\xf8\x80\xd0\x7b\xef\xe1\xcf\x61\x8d\x1e\x26\x71\xfc\x10\x25\xce\xd8\xd8\x98\xd6\x5c\x4b\xf7\x1a\x6c\x54\x16\x37\xa2\x10\x33\xbb\x4e\xdd\xf8\x54\x7a\xe0\xf1\xf1\x71\xe1\x39\xc3\xc3\xc3\xf1\x94\x65\x7f\x7f\x9f\x8e\x8e\x8e\x72\xc1\xb8\x85\x09\x3a\xc1\x7f\x7c\xce\xe9\x69\x7e\x78\x83\xff\xdd\xe0\xe0\xa0\x72\xe2\xd8\x7c\x7b\x45\xfe\x59\x17\x1e\x2b\x3c\xdf\x9d\x38\xd5\xa4\x98\x30\xb5\x18\xb3\x5b\x18\x99\x28\x95\x12\xa6\x6c\x4b\xc7\x7e\xc2\xb8\x65\x61\x93\xcb\x64\x32\x69\xc2\xe6\x21\x9d\x9d\x9d\xc2\x8a\x38\xff\x90\x35\x7c\x63\x0d\xf9\xe4\xaa\x73\xbc\xa5\xa5\x85\xe6\x72\xb9\xba\x49\x1c\xbf\x84\x80\x2c\x31\x95\xc5\x4f\x98\x1b\x17\x79\x59\xbc\xe5\x32\x99\x0c\x9d\x99\x99\x31\x45\x70\x97\xbd\xfe\x8a\xd5\x90\x3f\xbe\xc9\x57\x12\x3b\x3f\xc8\x90\xe4\xa9\x55\xe7\x58\x47\xab\x75\xec\xcb\x8b\xd6\xcf\xdf\xbf\xee\x3f\x24\xb1\xf9\xfa\x92\x7c\x51\xe2\xf9\xb4\xda\x30\x4c\x65\x81\x43\xf4\x5e\xb2\xa4\x88\x6a\xcc\x41\xe3\x93\xcd\xef\xdc\xb2\x88\xae\x3d\xd6\xb2\xc8\x84\x49\xdc\xee\x88\xe2\xb7\xdd\x85\x6d\xb2\x6c\x6a\x6a\xe2\x86\x63\xe6\xd2\xb3\x31\x87\xb9\xfb\x4e\xe7\xfd\xb6\xb7\xb7\x21\x0b\x64\x89\xbf\x2c\x6e\x61\x6c\x39\xdc\x4c\x4c\x4c\xf8\x96\x9d\x9a\x9a\x3a\xae\x8c\x33\x1d\x4e\x45\xce\x8e\xea\xcb\xe2\xc6\x1e\xda\x89\x1a\xcd\x2f\x71\xfc\x10\x35\xa4\x9f\x2c\x7e\x93\xf0\x20\x49\x51\xae\x98\x75\xaf\xb3\x94\xe5\xea\x46\x16\x5b\x18\x26\x86\x17\x76\xdc\xaf\x1c\xab\x24\x77\xe5\xde\xca\xaf\x8c\xad\xcc\x40\x16\xc8\x52\xa3\xb2\xd8\xc2\x78\x29\x56\xa6\xaf\xaf\xef\xb8\x32\xce\x26\x9d\x8a\x74\xdf\xdd\x0f\x23\x4b\xd0\x65\xd4\x5a\x90\x25\x68\xcc\x90\x25\xe2\x8f\x15\xb3\x15\xae\x54\x2a\xc5\x55\xec\xb3\x9b\x56\x05\xb1\x5d\xcb\xad\xad\xd5\x95\xc5\x6f\xfc\x6e\xa3\x23\x4b\x98\xa4\x28\xb7\x2c\x2a\x94\x22\xe9\x21\x4b\xbe\x67\x49\xa7\xd3\xbe\xb0\x2d\xf9\xb3\xb3\xb3\xb4\xbb\xbb\x9b\x6b\x44\xb6\xdd\xe5\x97\xf7\xac\x0a"
		"\x3a\x7a\x99\x6f\x60\xd1\x16\xfe\x62\x89\xe3\x5e\x38\xe0\x16\x1f\x5c\xfb\xa4\x6a\x4d\x16\xdd\x98\x21\x4b\x15\xe6\x2c\x4c\x06\xdd\x75\xf6\xab\x4f\x5b\x95\x73\xeb\xc8\xba\xb3\x6f\x1f\x67\x4f\x5a\x8a\x86\x73\xba\x5b\x4d\x8a\x25\xce\xe6\x03\x84\xde\x78\x95\xd0\xbf\xae\x59\xdb\x72\xbe\xbb\x42\xe8\x47\xcf\x11\xfa\x5a\x96\xd0\xdc\x23\x84\xa6\xce\x12\xfa\xd5\xa5\x68\xca\xa2\x1b\xb3\x6e\x2f\x55\x4a\x59\xc2\x0c\x4f\x63\x27\xcb\xde\xde\x9e\x96\x24\x77\x75\x18\xc9\x78\xe8\x54\xe0\xdb\x17\xf8\xdf\x4f\x4e\x4e\x46\x2e\x71\xc2\xcc\x59\x20\x0b\x64\xe1\x64\x61\xf3\x8d\x85\x73\x72\x96\x0c\x76\x8d\xbf\xd2\xef\x3e\x41\xe8\x9f\x1f\x3a\x95\x77\xed\x45\xbe\xc2\x9a\x9b\x9b\x85\x37\x24\x21\x0b\x64\xa9\x19\x59\x92\x67\x82\x8d\x83\xd9\x90\xe7\x72\x4e\xb0\xd1\x72\x6e\xae\xe4\x3b\x7e\x6b\x79\xce\x12\x85\x98\x55\xe2\xd3\xfd\xbc\xba\x94\x85\xdd\x07\x60\x2b\x5e\x3f\xbf\x63\x0d\xbb\xd8\x92\xb1\xb7\x22\xa7\xa7\xa7\xcb\xb2\x3d\x1e\xb2\x40\x96\xd8\xce\x59\x44\x14\x13\xa5\x9c\x4f\x0d\x46\x79\xc3\x60\x1c\x62\x56\x89\xaf\x1c\x9b\x4c\xeb\x4e\x96\xf6\xf6\x76\x3a\x3f\x3f\x5f\xd5\x47\x6c\x21\x0b\x64\xa9\xc8\x7d\x96\xa0\xc2\x34\x36\x36\x9a\x4b\xc3\xfd\xfd\xfd\xe6\xfc\x44\xf5\x1f\x55\x94\xf3\x9f\x37\xe8\x3e\xfc\xa5\x9a\x48\x61\x1f\x72\x8a\x72\xcc\xaa\xf1\xe9\x7c\x5e\x6c\x1f\xfe\x02\x00\x8f\x15\x03\x00\x59\x20\x0b\x00\x90\x05\x00\xc8\x02\x00\x64\x01\x00\xb2\x00\x00\x59\x00\x80\x2c\x00\x00\xc8\x02\x00\x64\x01\xa0\xc2\xb2\x40\x18\x00\xc4\xa2\x98\xb2\x18\x5f\x0d\xde\x83\x00\x80\x02\x51\x1a\x98\x2c\x27\x18\xa8\x10\x00\xa4\xa2\xdc\x96\xc7\x34\xe6\x04\x7a\x18\x00\xa4\x3d\x0a"
		"\x13\xa5\xe1\x7f\x8e\x33\x7b\x5a\xe5\xdd\x24\xac\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82"s
	);
}
