/****************************************************************************************/
/* MainMenuButtonPressed.cpp                                                            */
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

#include "assets/MainMenuButtonPressed.h"

using namespace std::literals;

std::pair<std::string, std::string> Minesweeper::get_raw_main_menu_button_pressed()
{
	return std::make_pair("MainMenuButtonPressed",
		"\x52\x49\x46\x46\xa6\x0c\x00\x00\x57\x41\x56\x45\x66\x6d\x74\x20\x10\x00\x00\x00\x01\x00\x01\x00\x11\x2b\x00\x00\x22\x56\x00\x00\x02\x00\x10\x00\x64\x61\x74\x61\xb8\x0b\x00\x00\x00\x06\x00\x06\xff\x06\x42\x05\x74\x05\xe2\x06\xa6\x06\x7a\x07\xb2\x08\x71\x08\xa3\x07\xea\x07\xe7\x08\xc0\x09\xde\x0a"
		"\x23\x0a"
		"\xf9\x09\xe4\x09\x8c\x09\xca\x0a"
		"\xc9\x0c\xc1\x0c\xe4\x0b\x63\x0b\xe9\x0a"
		"\xc0\x0c\xb6\x0d\xe2\x0e\xac\x0d\xc1\x0e\x92\x0c\x48\x0e\x89\x0f\xa2\x11\xfd\x10\x88\x0f\xec\x0e\xab\x10\xac\x10\xe7\x12\xe2\x12\xe1\x14\x93\x11\xc8\x11\x23\x11\xab\x14\x65\x16\x40\x15\xd8\x13\x48\x14\x80\x12\x43\x16\x1a\x19\x59\x19\x59\x16\x9b\x16\x28\x15\x18\x18\x11\x19\xa2\x1d\x9f\x1a\x7a\x18\xe2\x16\x3d\x18\xa2\x1a\x0e\x1f\xca\x1e\x98\x19\x22\x17\xed\x16\xdb\x1a\xde\x1f\x49\x1f\x4d\x1c\x40\x17\xeb\x13\x47\x18\xac\x1c\xa9\x22\xf9\x1e\xd9\x16\x4f\x13\xa9\x17\x98\x1b\xc5\x24\x0d\x24\x2d\x1a\xf9\x12\x23\x13\xb4\x1c\x88\x24\xdb\x26\x64\x1e\x88\x12\xf7\x10\x85\x13\x08\x21\x73\x26\xed\x26\xbc\x18\xab\x0a"
		"\x92\x0f\xa7\x1c\x3a\x24\x32\x29\x39\x1e\xf7\x08\x6f\x07\x83\x17\x4e\x23\xa5\x2b\xd8\x22\xc6\x0d\x6c\xfd\x48\x08\xfb\x1f\x78\x29\x57\x29\x96\x13\x84\xf8\x88\x00\x70\x1b\x80\x29\xbb\x26\xa2\x15\xa2\xf7\xb9\xf6\x4a\x0e\x7e\x24\xf4\x2a\x9c\x16\x1f\xee\x74\xe4\xf1\x0c\xc8\x2c\xd6\x38\x75\x2e\xff\xed\x5a\xba\xe6\xb9\xfa\xe5\xd6\x1f\xac\x4f\xc9\x42\x40\x0e\x99\xee\xcd\xde\xef\xdc\xb0\xf2\xc2\x06\x22\x0e\x93\x29\xd2\x3b\xd7\x25\x89\xfc\xe9\xd1\xc3\xb6\xb9\xd3\x4e\x28\xd5\x65\x75\x5f\x23\x2b\x8e\xce\x32\x8d\x90\xb3\xae\x05\xfa\x4d\x3d\x72\x2f\x4d\x20\xea\x86\xa3\x3f\xb7\x77\xe4\xca\x25\xdf\x52\x82\x3a\x84\x0e\x59\xea\x31\xe2\x8d\xde\x1c\xf5\xa4\x07\x98\x15\x5d\x2d\x75\x3d\x40\x20\xb5\xf9\xf7\xcd\x17\xb9\x3c\xe0\xf8\x2f\x38\x66\xb0\x5f\x65\x1e\xd3\xc2\x0b\x8d\x0c\xaf\xf1\x14\x6a\x69\x8d\x78\x83\x3b\x3a\xdc\x22\xa3\x0c\xbd\x9c\xed\x58\x2d\x19\x56\xb7\x3b\x6c\x0d\x1f\xef\x7a\xe1\x92\xe0\xa9\xfd\x0c\x0e\xa2\x17\xb5\x31\xbb\x36\xda\x1e\x9c\xf6\xf1\xc8\x33\xb4\xab\xe1\x05\x3b\xe6\x75\x6d\x57\x05\x1b\x33\xba\xb8\x8f\x99\xcf\x96\x1b\xaa\x68\x9a\x76\xdb\x38\xaf\xd0\x42\xa8\x06\xc5\xfa\xfe\x9c\x3c\xc3\x5d\x4f\x35\xb6\xfc\xf6\xe8\xc3\xdf\x76\xe3\x3a\x00\x00\x0d\xa5\x19\x0c\x36\x84\x3b\xea\x1a\x3f\xf3\xcd\xc7\x01\xbb\x0c\xec\x99\x4f\x65\x6f\xa3\x55\x19\x07\xf6\xb2\xd8\x8c\xf5\xcf\xc9\x32\x51\x79\x94\x7b\xc0\x23\xbf\xc6\x10\xab\xde\xc6\x5f\x08\x9e\x40\x54\x5b\x14\x2f\x39\x00\x5c\xe9\x1a\xdd\x04\xe7\x7c\x00\xfb\x10\x4f\x1f\x50\x3a\xe8\x3c\x3e\x12\xbc\xe4\xb4\xc5\x77\xbf\xa5\xf3\xb7\x55\xc3\x72\xa7\x55\xce\x04\xb5\xa5\x62\x95\x91\xe4\x9a\x36\x78\x6c\x9f\x74\x3c\x1e\xa1\xc4\x9b\xa4\x2a\xce\x5a\x11\xc6\x47\x5b\x55\x14\x2a\x1b\xfa\x4e\xea\x12\xe4\xc9\xef\x97\x06\x48\x13\x79\x21\xf5\x40\x78\x3a\x6e\x0b\x88\xdc\x54\xbf\x0d\xc4\x96\x0a"
		"\x80\x55\x59\x79\x08\x48\x77\xf5\xd3\xa4\x01\xa1\xb6\xf5\x55\x46\x08\x75\xe4\x65\x76\x0d\x46\xb8\x3a\xad\xd6\xd9\x1d\x1b\x9d\x55\xed\x50\xf7\x1e\xc5\xfa\x42\xe8\x69\xe0\x1b\xef\x3c\x07\x5d\x12\x97\x27\x19\x43\xfd\x34\xf0\x07\x1b\xdc\xd9\xbc\x30\xd0\xc8\x1e\x73\x5a\x9e\x6e\x33\x40\x36\xe9\x93\x99\x40\xaa\x2f\xfb\x4f\x46\x0c\x70\xa5\x5f\x1a\x01\x03\xab\xd5\xb7\x89\xde\x0e\x1f\xeb\x4d\x75\x4d\xc6\x23\x8d\xfb\xb3\xe2\x0a"
		"\xe0\x9a\xf1\xea\x06\xa3\x17\x7c\x29\x1a\x44\x10\x32\x83\x07\x1b\xde\x4d\xbf\xa1\xd6\x61\x26\x48\x60\x9f\x70\xe0\x33\x68\xd5\xbb\x8f\x1e\xb3\x48\x03\x17\x5c\xfe\x7f\x8b\x54\x4d\xf4\xc4\xac\xe1\xbd\x32\xe6\xf5\x22\x01\x5a\xe3\x46\xf7\x1a\x8d\xf2\xfa\xe3\x4b\xe1\x19\xf8\xc0\x0f\xb5\x19\x00\x32\x24\x45\x4a\x2e\xce\x01\xcd\xd8\x2c\xbd\xbb\xdd\xaa\x34\xb9\x6f\x4c\x63\x09\x28\xf0\xcf\x1b\x92\x05\xba\xe3\x1d\x38\x6d\x00\x7d\xd9\x4e\xd5\xe2\xc2\xac\x63\xc2\x0d\xed\x16\x30\xbd\x5a\x31\x3d\x6a\x0b\xb8\xf5\xe2\xe5\x57\xe1\xbd\xfc\xd1\x10\xab\x1c\xe5\x34\xb4\x3e\x39\x22\x8d\xfb\xfb\xce\xf9\xb8\x45\xdf\xa3\x39\xde\x75\x45\x5d\xfd\x23\xe6\xbc\x3e\x8f\xd8\xc2\xc5\x18\x56\x5d\x7a\x78\xa7\x40\x2a\xd6\x40\xab\x39\xc6\x58\xf4\xfe\x3d\x48\x61\xc9\x37\x44\xfd\xb4\xf3\xa0\xef\xaa\xe6\x8c\xfc\xb3\x11\x34\x1e\x8f\x34\xc3\x3b\xe3\x19\x76\xf1\x9d\xc8\x57\xb8\xce\xdf\xc5\x47\x60\x78\x74\x66\x94\x11\x83\xb0\xb6\x8e\x5a\xd1\xb5\x30\xe1\x74\xb1\x78\xda\x28\x26\xd1\xbf\xa7\x09\xc8\x55\xfa\xcb\x3d\xe4\x5a\x3e\x2b\x96\xfc\x85\xea\x2b\xe2\xd3\xe5\x36\xfb\x01\x0b\x00\x1c\xb7\x3a\x8b\x40\xc3\x15\xda\xe6\xc1\xc5\x99\xbd\x52\xf3\xf1\x4d\x94\x6c\x9b\x55\xb4\x05\x0a"
		"\xab\xb3\x95\x71\xde\xe8\x2c\x34\x63\x2e\x6f\xf2\x1d\x12\xc9\x5a\x9e\x06\xcd\x71\x0a"
		"\x2b\x3e\xc5\x55\x24\x2b\x63\xf4\x49\xe9\x7d\xdd\xc3\xdf\x6b\xfe\xf8\x0b\x68\x1a\x92\x35\x16\x3a\x20\x08\xd3\xd7\x14\xbb\xe8\xba\x73\x01\xc6\x4f\x6e\x6b\x16\x44\x3d\xf1\xfa\xa1\x9c\x97\x72\xe4\x6c\x34\x37\x69\xf9\x64\xba\x0d\x89\xb9\x27\xa0\x1d\xce\x7b\x0a"
		"\x1f\x46\xf5\x49\x32\x1c\x96\xee\xe4\xe2\x47\xdc\xb0\xe3\x98\xfa\x5a\x07\x2a\x19\x20\x38\xf6\x2e\x42\xff\x4e\xd4\x0b\xb2\x03\xc0\xc0\x05\x21\x4e\x3d\x68\x5d\x3d\xa0\xde\x45\x95\x63\x95\x28\xed\xc0\x43\xd8\x78\x1f\x55\x4a\xf2\xd9\x9d\x9a\xa4\x06\xcd\xbc\x04\x77\x41\xa1\x3f\xc6\x12\xc5\xeb\xcd\xd7\xca\xd4\x40\xe2\x9e\xf9\x05\x07\xa6\x19\x4d\x31\x98\x20\x80\xf9\xe6\xcd\xb5\xaf\x78\xc3\xe2\x0f\x1f\x4f\xce\x54\x51\x26\x3c\xd3\xbc\x88\xf4\x9c\x0e\xf1\xe3\x42\x63\x68\x15\x44\x4f\xe4\xef\x97\xe5\xa1\x3b\xce\x12\x09\xfb\x3a\x2f\x2f\x52\x08\xfa\xe1\xf1\xd2\x9d\xce\x39\xdd\x7d\xf7\x05\x02\xa9\x14\xaa\x26\xa1\x10\x75\xee\xca\xc7\xf9\xac\x1d\xc5\x52\x15\x02\x56\xc2\x43\xc4\x19\x01\xba\x00\x80\x4e\xa2\x2b\xf0\xa7\x3c\x76\x58\xba\x2e\xf5\xce\xa5\x96\xef\xa0\xe1\xcd\x6a\x09\xda\x3b\x7b\x21\x10\xfd\x23\xdd\x45\xcd\xa1\xc5\x88\xd4\x66\xf2\xb9\xf7\xb6\x07\x7b\x1a\x3e\x01\x8b\xdf\xa2\xba\x82\xa2\xae\xbe\x5a\x12\xc7\x41\x2b\x37\xd0\xfe\x0d\xad\x0f\x82\xdc\xab\x67\xfb\x15\x33\x51\x4a\xbd\x17\xdc\xc3\x79\x9b\x5b\xa8\xdb\xd4\x6a\x0d\x85\x2a\xb7\x0e\xef\xef\x1c\xda\x82\xd4\xe2\xd6\x75\xe8\xe1\xf2\xd7\xfa\xbc\x09\x9b\x13\xea\xfd\xa0\xe3\x14\xc9\xa6\xbf\xf5\xd9\xa0\x0e\xc6\x2b\x6c\x1e\x40\xf7\x09\xc2\x05\xa9\x42\xcf\x30\x04\x74\x2a\xa9\x2e\xbf\x06\x3f\xd8\x02\xc4\xdc\xd4\x49\xf4\x0d\x10\x0b\x1a\xd3\x08\xf3\xf5\x93\xe8\x42\xe5\xb6\xe8\x8d\xf4\x14\xf8\x3b\xfe\x78\x04\x75\x08\x65\xfc\xd7\xf2\x5a\xe4\x9c\xe1\x09\xf6\xbe\x0f\xec\x1a\x97\x12\x0e\xff\xfb\xe6\x8e\xde\x84\xec\x77\x00\x34\x0d\x73\x11\xae\x0c\x9a\x03\x5e\xfd\xc1\xfe\x78\x00\x37\x00\xed\xff\xab\xff\x92\xff\xa3\xff\xd5\xff\x3b\xff\xb7\xff\x49\x00\x0b\x00\xdb\xff\xb0\xff\xb1\xff\x0b\xfd\x0b\xf8\x78\xf6\xa4\xf8\x0e\xf7\xfc\xf8\x8e\xf7\x70\xf9\xea\xf8\x55\xf8\x28\xf8\x96\xf7\x34\xf7\x79\xf7\xab\xf7\x2f\xf6\x78\xf8\x84\xf6\x10\xf6\x6e\xf7\x8f\xf6\x23\xf6\x9e\xf6\xba\xf6\xb9\xf5\xf0\xf5\x2f\xf6\xb3\xf5\x1c\xf5\x22\xf5\xfd\xf5\xc4\xf5\x52\xf6\xfc\xf4\x9c\xf4\x21\xf4\x2f\xf4\x1a\xf5\xb9\xf4\x30\xf5\x24\xf5\x0b\xf5\x33\xf4\x73\xf3\x89\xf3\x98\xf3\x12\xf4\xed\xf3\xcc\xf3\x2d\xf4\x1b\xf4\x21\xf4\x64\xf3\xc3\xf2\xef\xf2\xfc\xf2\x59\xf3\x0c\xf3\xc3\xf2\x1f\xf3\x12\xf3\x33\xf3\x82\xf2\x9c\xf3\x36\xf3\x45\xf2\xaf\xf1\x33\xf2\x50\xf1\xdf\xf1\x16\xf2\x77\xf2\xea\xf1\x46\xf1\x64\xf1\x2c\xf1\x54\xf1\x4e\xf2\x5a\xf1\x88\xf1\x1b\xf1\xef\xf0\x95\xf1\x4f\xf0\x73\xf0\x26\xf0\x40\xf0\x3b\xf1\x22\xf0\x56\xf0\x0f\xf2\x27\xf1\x42\xf1\xa8\xf0\x48\xf0\xce\xf0\xfe\xf0\x5f\xf1\xc8\xf0\x1d\xf0\x48\xf0\x1d\xf0\x4b\xf0\xb4\xef\x3a\xf1\x34\xef\xc3\xf0\x32\xf0\xf4\xf0\x01\xef\x20\xf1\xae\xef\x2f\xef\x30\xf0\xa2\xf0\xff\xee\x52\xef\x92\xef\x6a\xf0\x4f\xf0\x15\xf0\x7a\xf0\x2b\xf0\x0d\xf0\xb4\xf0\x45\xef\x45\xef\x1b\xf1\x53\xf0\xbc\xf0\x55\xf0\x15\xf0\x95\xf0\x11\xef\x10\xef\xf8\xf0\x51\xf0\xd2\xf0\x7f\xf0\x39\xf0\xb0\xf0\x12\xef\x78\xf1\x31\xf0\x9b\xef\x10\xee\x0e\xef\x8f\xf0\x04\xef\x42\xf1\xdf\xee\x28\xf0\x48\xef\xee\xef\x23\xf0\x72\xf0\xa8\xef\xd9\xee\xee\xee\xc2\xee\x01\xef\x42\xf0\x30\xef\x66\xef\x2d\xf1\x0c\xf0\x0c\xf0\x54\xef\xea\xee\x91\xef\x3a\xee\x90\xee\x6e\xee\xb3\xee\xd4\xef\x8e\xee\x9d\xee\x62\xf0\x43\xef\x5c\xef\xc3\xee\x72\xee\x29\xef\x6f\xef\xde\xef\x25\xef\x54\xee\x6e\xee\x27\xee\x77\xf0\x07\xef\x30\xee\xb2\xee\x83\xee\x64\xee\x1f\xef\x26\xef\x45\xef\x10\xf0\xba\xf1\x9d\xf8\x32\xfc\xd6\xf8\x73\xf8\xf1\xfa\xf1\xfa\xfa\xfa\x34\xfb\xbc\xfb\x14\xfb\x2c\xfb\xda\xfa\x8f\xfb\x3f\xfb\x32\xfb\x8b\xfb\x12\xfb\x73\xfc\x17\xfb\xa9\xfb\xa1\xfc\xa1\xfc\xec\xfc\x7c\xfd\x63\xfd\x96\xfd\x6e\xfd\x21\xfd\x72\xfd\x5a\xfd\x0c\xfd\xe6\xfd\x2b\xfe\x5a\xfe\x1d\xfe\x4a\xfe\x19\xff\x33\xff\x00\xff\x34\xff\x01\xff\xfe\xff\x6b\x00\x0d\x00\xe4\xff\xeb\xff\xfc\xff\x09\x00\x15\x00\x12\x00\x0e\x00\x01\x00\x65\x00\xe5\x00\x03\x01\xf9\x00\xfa\x00\x76\x01\xef\x01\xe1\x01\xd6\x01\x87\x02\xba\x02\xc0\x02\xf2\x02\xb9\x02\xb7\x03\xf7\x03\x68\x03\x6c\x03\xeb\x04\x64\x04\xa5\x04\x80\x04\x95\x04\xb6\x05\x7b\x05\xa1\x05\xc2\x05\xac\x05\xe2\x06\x8f\x06\xe6\x06\x76\x06\xcb\x07\x62\x07\xce\x07\x5e\x07\x00\x09\x96\x08\xc1\x07\xf5\x08\x9e\x09\x41\x09\x1d\x0a"
		"\xf6\x09\xd2\x09\x94\x0a"
		"\x56\x0b\x6d\x0b\x94\x0b\x49\x0b\x7a\x0b\xf1\x0c\xcd\x0c\xde\x0d\x78\x0b\x17\x0d\xce\x0e\x2d\x0d\xf8\x0c\x8e\x0d\x09\x0e\x3a\x0f\x05\x10\x98\x0f\x9c\x10\xf8\x0f\xb0\x11\xa4\x11\xae\x11\x22\x11\x6d\x11\xd1\x13\xb9\x13\x3f\x13\xee\x13\x99\x14\x36\x14\x57\x14\x15\x14\xf7\x14\xba\x15\x8e\x17\x02\x16\x58\x16\x4f\x17\x81\x17\x8d\x18\xfd\x18\xce\x17\x83\x19\xea\x18\x1e\x19\xe1\x18\x25\x1a\x2d\x1b\x8a\x1d\x8d\x1b\xed\x1b\x49\x19\x37\x1e\xbc\x1c\x3f\x1a\x2c\x1b\x74\x1d\xfd\x1e\x47\x21\x66\x1e\xe3\x1d\x58\x1e\xec\x21\x23\x21\xc0\x1f\x19\x1d\x8e\x1f\x03\x20\xfd\x21\x28\x1f\xda\x1b\x10\x22\x7e\x21\x29\x20\x7d\x1d\x38\x1e\xa0\x24\xe0\x26\xf6\x1e\xa2\x1c\x9e\x1e\xb2\x26\xca\x24\xdb\x1e\xbf\x1a\x43\x20\x76\x25\xa6\x21\x81\x1b\xfe\x18\x5f\x25\x8f\x22\x74\x21\x57\x1a\x74\x1b\x00\x27\x1a\x29\x34\x21\xaa\x17\xce\x1c\x19\x25\x35\x25\x30\x1d\x71\x15\xf0\x1d\x6d\x29\x50\x24\x20\x18\xea\x0e\x41\x23\x75\x28\xfe\x1d\xbd\x12\x04\x0a"
		"\x85\x24\xe0\x2e\xa7\x26\xb5\x10\x1b\x11\xcb\x2a\x87\x28\x43\x17\xe2\xfe\x90\x19\x24\x28\x4f\x26\x48\x16\x64\xff\x07\x16\x43\x22\x86\x20\x4a\x08\xfc\x01\x2c\x1d\xb1\x16\x50\x08\x27\xf8\xaa\x1f\x9c\x37\x24\x09\xa3\xdb\xfe\xbf\xf6\x0e\xe1\x50\x14\x3d\xfc\xe7\xc1\xb7\x83\xee\xb5\x26\x1b\x4b\x1e\x1c\xfb\xe6\x05\xea\x06\xf5\x58\x0e\xec\x1f\xde\x23\x01\x1a\x00\xea\x53\xd8\xb4\xf6\x0a"
		"\x45\xc8\x44\xa7\x0f\x68\xcd\x2e\xd0\x46\x26\xf5\x50\x9c\x33\xbf\xe3\x71\xc4\xa4\x02\x11\x3a\xe3\x42\x93\x0e\x88\xe9\xcd\xec\xfb\xf6\x07\x0f\x39\x1f\x65\x2b\x42\x0d\xf3\xec\x81\xdd\x98\x00\x3e\x44\xbd\x3c\x3b\x05\x49\xc5\xb4\xd5\x3f\x37\xe0\x52\xd3\x28\x0d\xd3\x4d\xd0\x83\x02\x16\x2f\xc1\x37\xd0\x04\x8a\xeb\xad\xf0\x18\xfb\xcb\x16\xfe\x1f\x92\x29\xe4\x04\xce\xe1\x6d\xde\x54\x0e\xe5\x4c\xae\x31\xc7\xf4\xcf\xc1\xb6\xe3\x24\x40\xf5\x4d\xbf\x21\x5d\xd4\x03\xd6\xb5\x0a"
		"\x6e\x36\x5a\x3b\x05\x03\x76\xf1\x57\xf1\x12\x00\xb5\x15\x39\x21\xe5\x25\xb9\x03\x5a\xe3\xc8\xdd\x94\x0e\x60\x51\x61\x30\x1e\xec\xc9\xb5\x9b\xf1\x43\x47\x6e\x4b\xfd\x1d\xb1\xd6\x5c\xd8\x52\x16\x1d\x46\x55\x32\x7d\xf7\xd8\xf6\xb2\xf9\xd5\x0c\x62\x19\x37\x1b\x46\x27\x79\xfe\x0e\xda\x2f\xe5\x0c\x26\x93\x52\x96\x28\xe6\xe3\x32\xb0\x46\xf6\x6a\x39\xfa\x45\xf9\x06\x4d\xcb\x2f\xe3\x1c\x15\x69\x3a\x2c\x2a\x00\xff\xf2\xee\x06\xf1\xd4\x0a"
		"\x27\x1e\x61\x24\xfc\x22\xcc\xf6\xbb\xdb\x74\xea\x09\x2e\xfa\x59\x08\x1b\xcf\xd7\xd3\xbd\x19\x18\xe4\x60\x67\x4b\xad\x04\xda\xc2\x37\xe8\x08\x13\xa8\x32\x6d\x2a\xe8\x02\x82\xec\x7e\xec\x2b\x0b\xc4\x22\x1f\x2b\x85\x22\x5c\xef\x7c\xd9\xa4\xec\xc2\x38\xd3\x56\x19\x12\x0c\xcd\xb4\xc3\x86\x1e\x65\x65\x8a\x3d\x97\xee\x50\xbf\x86\xfc\x4a\x35\xc0\x54\xc1\x13\xed\xe3\xec\xf4\x7e\x08\x05\x17\x94\x1b\xf7\x2a\x1c\x1f\x80\xee\x8f\xe0\xd3\xfb\x52\x40\x4f\x4b\x97\x08\xf1\xc8\xfa\xca\x02\x27\x55\x54\xb5\x33\xd8\xef\x62\xc9\x02\xf8\x48\x25\x4d\x40\x6c\x14\x3f\xf2\x3c\xf0\x5c\xf4\xa1\x0f\x87\x22\x6b\x2e\xeb\x12\xa2\xec\x70\xdc\x65\xfe\x0c\x42\x26\x3b\xa3\x04\xd1\xc5\x3f\xd7\x7e\x39\xb5\x54\x67\x29\x67\xe2\x57\xca\x39\x0a"
		"\x48\x40\x58\x46\xa5\x0f\x64\xe7\x6d\xe7\xee\xfc\x91\x11\xae\x1d\x69\x26\xfa\x07\x66\xe9\x9d\xdc\xbe\x06\x24\x46\x77\x33\x4e\x00\x6d\xc4\xbb\xe0\xe2\x3f\x8b\x5b\xb2\x23\xba\xd5\x13\xd1\x93\x0b\x38\x3c\x7e\x39\xb7\x00\x32\xf4\x3c\xed\x12\x03\xb5\x15\x6f\x1e\x3a\x2a\xc0\x02\xfb\xdd\x0d\xdd\x95\x15\xcf\x4e\x60\x32\x7c\xf6\xc7\xc3\x17\xf6\xf9\x3f\xdd\x54\x52\x20\xc8\xd2\x70\xdd\x3f\x07\x67\x2a\xe5\x2a\x6d\xff\x3d\xf1\xeb\xe9\xb4\xff\x98\x13\x3b\x1e\xdf\x23\xb2\xfa\x5f\xd7\xdb\xe2\x7c\x22\x36\x4f\x80\x29\x2a\xe9\x75\xb7\xcf\xf7\x37\x35\xe5\x58\xb4\x13\x98\xcd\x03\xd8\x67\x11\xe4\x3e\x9f\x28\x41\xf9\x11\xf1\x3a\xef\x31\x05\x4c\x49\x53\x54\x5e\x00\x00\x00\x49\x4e\x46\x4f\x49\x53\x46\x54\x52\x00\x00\x00\x46\x69\x6c\x65\x20\x63\x72\x65\x61\x74\x65\x64\x20\x62\x79\x20\x47\x6f\x6c\x64\x57\x61\x76\x65\x2e\x20\x20\x47\x6f\x6c\x64\x57\x61\x76\x65\x20\x63\x6f\x70\x79\x72\x69\x67\x68\x74\x20\x28\x43\x29\x20\x43\x68\x72\x69\x73\x20\x43\x72\x61\x69\x67\x20\x28\x6c\x69\x62\x73\x6e\x64\x66\x69\x6c\x65\x2d\x31\x2e\x30\x2e\x32\x34\x29\x00\x69\x64\x33\x20\x5c\x00\x00\x00\x49\x44\x33\x03\x00\x00\x00\x00\x00\x51\x54\x58\x58\x58\x00\x00\x00\x47\x00\x00\x00\x53\x6f\x66\x74\x77\x61\x72\x65\x00\x46\x69\x6c\x65\x20\x63\x72\x65\x61\x74\x65\x64\x20\x62\x79\x20\x47\x6f\x6c\x64\x57\x61\x76\x65\x2e\x20\x20\x47\x6f\x6c\x64\x57\x61\x76\x65\x20\x63\x6f\x70\x79\x72\x69\x67\x68\x74\x20\x28\x43\x29\x20\x43\x68\x72\x69\x73\x20\x43\x72\x61\x69\x67\x00"s
	);
}
