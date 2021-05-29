/****************************************************************************************/
/* PlayOfflineNHovered.cpp                                                              */
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

#include "assets/PlayOfflineNHovered.h"

using namespace std::literals;

std::pair<std::string, std::string> Minesweeper::get_raw_play_offline_n_hovered()
{
	return std::make_pair("PlayOfflineNHovered",
		"\x89\x50\x4e\x47\x0d\x0a"
		"\x1a\x0a"
		"\x00\x00\x00\x0d\x49\x48\x44\x52\x00\x00\x00\xcb\x00\x00\x00\x35\x08\x06\x00\x00\x00\xef\x63\x1f\x5a\x00\x00\x01\x84\x69\x43\x43\x50\x49\x43\x43\x20\x70\x72\x6f\x66\x69\x6c\x65\x00\x00\x28\x91\x7d\x91\x3d\x48\xc3\x40\x18\x86\xdf\xa6\x4a\x45\x2b\x0e\x56\x10\x71\xc8\x50\x9d\x2c\x88\x7f\x38\x4a\x15\x8b\x60\xa1\xb4\x15\x5a\x75\x30\xb9\xf4\x0f\x9a\x34\x24\x29\x2e\x8e\x82\x6b\xc1\xc1\x9f\xc5\xaa\x83\x8b\xb3\xae\x0e\xae\x82\x20\xf8\x03\xe2\xe4\xe8\xa4\xe8\x22\x25\x7e\x97\x14\x5a\xc4\x78\xc7\x71\x0f\xef\x7d\xef\xcb\xdd\x77\x80\x50\x2f\x33\xd5\xec\x18\x07\x54\xcd\x32\x92\xb1\xa8\x98\xc9\xae\x8a\x81\x57\xf4\x60\xc0\x99\xd3\x12\x33\xf5\x78\x6a\x31\x0d\xcf\xf1\x75\x0f\x1f\xdf\xef\x22\x3c\xcb\xbb\xee\xcf\xd1\xab\xe4\x4c\x06\xf8\x44\xe2\x39\xa6\x1b\x16\xf1\x06\xf1\xcc\xa6\xa5\x73\xde\x27\x0e\xb1\xa2\xa4\x10\x9f\x13\x8f\x19\x74\x41\xe2\x47\xae\xcb\x2e\xbf\x71\x2e\x38\x2c\xf0\xcc\x90\x91\x4e\xce\x13\x87\x88\xc5\x42\x1b\xcb\x6d\xcc\x8a\x86\x4a\x3c\x45\x1c\x56\x54\x8d\xf2\x85\x8c\xcb\x0a"
		"\xe7\x2d\xce\x6a\xb9\xca\x9a\xf7\xe4\x2f\x0c\xe6\xb4\x95\x14\xd7\x69\x0d\x23\x86\x25\xc4\x91\x80\x08\x19\x55\x94\x50\x86\x85\x08\xed\x1a\x29\x26\x92\x74\x1e\xf5\xf0\x0f\x39\xfe\x04\xb9\x64\x72\x95\xc0\xc8\xb1\x80\x0a"
		"\x54\x48\x8e\x1f\xfc\x0f\x7e\xf7\xd6\xcc\x4f\x4e\xb8\x49\xc1\x28\xd0\xf9\x62\xdb\x1f\x23\x40\x60\x17\x68\xd4\x6c\xfb\xfb\xd8\xb6\x1b\x27\x80\xff\x19\xb8\xd2\x5a\xfe\x4a\x1d\x98\xfd\x24\xbd\xd6\xd2\xc2\x47\x40\xdf\x36\x70\x71\xdd\xd2\xe4\x3d\xe0\x72\x07\x18\x7c\xd2\x25\x43\x72\x24\x3f\x2d\x21\x9f\x07\xde\xcf\xe8\x9b\xb2\x40\xff\x2d\xd0\xbd\xe6\xf6\xad\x79\x8e\xd3\x07\x20\x4d\xbd\x5a\xbe\x01\x0e\x0e\x81\xd1\x02\x65\xaf\x7b\xbc\xbb\xab\xbd\x6f\xff\xd6\x34\xfb\xf7\x03\xc7\x87\x72\xc9\x26\x07\xdf\xc6\x00\x00\x00\x06\x62\x4b\x47\x44\x00\xff\x00\xff\x00\xff\xa0\xbd\xa7\x93\x00\x00\x00\x09\x70\x48\x59\x73\x00\x00\x2e\x23\x00\x00\x2e\x23\x01\x78\xa5\x3f\x76\x00\x00\x00\x07\x74\x49\x4d\x45\x07\xe4\x0b\x15\x15\x22\x32\x24\x9e\x13\xb3\x00\x00\x00\x19\x74\x45\x58\x74\x43\x6f\x6d\x6d\x65\x6e\x74\x00\x43\x72\x65\x61\x74\x65\x64\x20\x77\x69\x74\x68\x20\x47\x49\x4d\x50\x57\x81\x0e\x17\x00\x00\x04\x22\x49\x44\x41\x54\x78\xda\xed\x9d\x3f\x6b\xdb\x40\x18\x87\x7f\x72\x5b\xbb\x25\xf4\x43\x04\x13\x30\x38\x81\x7e\x82\xcc\x9d\xf3\x01\x0c\x9e\xb2\x18\x63\x67\x08\xe9\xe4\xb1\x5a\x12\x97\x90\x21\x63\x20\x5f\xa2\x73\xf6\x40\x09\x21\x10\x30\x81\xfc\x19\x82\x83\xb3\x84\xd2\x16\xd3\xa8\x8b\xe5\x2a\x8a\x2c\xdd\x9d\x4e\xf2\xf9\xf4\x7b\x36\xdb\x27\xf9\xf4\xbe\x7a\xfc\xde\xd9\x3a\xd9\x01\xe0\x00\x78\x07\x60\x0c\xe0\x19\x84\x90\x20\x25\x00\x4b\x00\x7e\x3a\x00\xca\x93\x27\xff\x30\x2e\x84\x44\xf2\x11\x93\xaa\xe2\xb0\xa2\x10\x92\x5c\x61\x1c\x00\x5e\xf0\x99\x7e\xbf\xcf\xb0\x10\x02\xa0\xdb\xed\xbe\x78\xfc\x42\x16\x8a\x42\xc8\x6c\x61\x28\x0b\x21\x94\x85\x10\xca\x42\x08\x65\x09\xd2\xf9\xdd\xc5\xb7\xf7\x94\x97\x50\x96\x44\x51\x7c\x28\x0c\x29\xac\x2c\xe1\xaf\xe3\xc2\xef\x39\x15\xe5\x33\x80\xef\x14\x86\x14\x4c\x96\xb0\x20\xb3\xf0\xbe\xe2\xbf\x28\x3e\x14\x86\xd8\x2e\x8b\xa8\x20\x33\x45\xf9\xe4\x01\x3f\x1c\x0a"
		"\x43\xec\x95\x45\x56\x92\x99\xa2\xf8\x50\x18\x62\x9b\x2c\x2a\x92\xe4\x59\x59\x54\xfa\xe7\xba\x2e\x76\x76\x76\x66\xbe\x56\xa9\x54\x8c\x4b\xee\xed\xed\x2d\xf6\xf6\xf6\x84\x8f\x2f\x7c\x0c\xe3\xf1\x18\xdb\xdb\xdb\xc2\xdb\x89\xb4\x97\x89\xb7\x69\x31\xd5\x2e\x4b\x5a\x51\x44\xe6\x2c\xce\x97\xf9\xf7\xcf\xf4\xe4\xca\x88\x92\xf6\xc4\x77\x5d\x17\xa5\x52\x49\x9b\x28\xa6\xc6\xd4\x58\x59\x5e\x09\x13\x10\xc5\x94\xfe\x99\x9a\xd8\x34\xc7\xd8\x6a\xb5\x50\x2e\x97\xa5\x44\xdb\xda\xda\x92\x16\xb3\xf0\xb2\x64\x71\x22\x4e\x85\x09\x88\xa2\xab\x8f\x9e\xe7\x25\xb6\x3f\x3e\x3e\x46\xa3\xd1\x78\xd9\xa7\xc9\x76\x47\x47\x47\x68\x36\x9b\x46\x25\x36\x2a\x07\xe7\xe7\xe7\xa8\xd7\xeb\xc2\xc7\x17\xe6\xf0\xf0\x10\x9b\x9b\x9b\xc2\xdb\x25\xb5\x8f\x8a\x9f\xc9\x31\x5d\x18\x59\x7c\x61\xc2\xa2\x98\x26\x8b\xcc\xa7\xab\xe8\xfc\xe7\xee\xee\x0e\xbb\xbb\xbb\x91\x9f\xfe\xd5\x6a\xd5\x7a\x59\x54\xab\x50\xda\xb9\x5a\xe6\xb2\x64\x25\x4a\x12\x69\xfa\x29\x92\xa0\xb3\xb3\x33\xac\xad\xad\x61\x30\x18\x60\x65\x65\x45\x4b\x62\x45\x12\xf8\xf0\xf0\x10\x29\x4a\x92\x30\x3a\x8e\x2f\x2c\xd9\xe5\xe5\x25\x6a\xb5\x5a\x62\xbf\x45\xdb\x67\x15\x3f\xd7\x75\x31\x1c\x0e\x53\xcd\xd5\x28\x0b\x65\x29\x84\x2c\x69\x88\xab\xd6\x94\x25\x23\x59\x64\x87\x3c\xb3\xc6\xea\x41\x59\xa2\xfa\x60\x9b\x2c\x71\xcf\xc9\x0e\x93\x55\x73\x91\x24\x8c\x16\x59\xe6\x25\x4a\xda\xbe\x16\x51\x16\x91\x7d\x53\x16\xca\x32\xf7\x61\x98\xe8\xbe\x28\x4b\x33\xf3\xfc\xc8\xc4\x94\xb2\x68\xfe\x36\xcc\x26\x59\xe2\xe2\x52\xad\x56\x71\x75\x75\x15\x19\x0f\xd9\xf6\x85\x93\x65\xde\xa2\xa4\xe9\xaf\xa9\xb2\x00\x40\xbb\xdd\xc6\xfe\xfe\x3e\x65\xa1\x2c\x66\xc9\x22\x7b\xd2\xab\xce\x59\x7c\xb2\x4c\xac\xed\xc3\xb0\xb4\xb2\xc7\xe5\x82\xb2\x50\x16\xca\x42\x59\xcc\x92\xa5\xd7\xeb\x61\x63\x63\x03\xb5\x5a\x0d\x4f\x4f\x4f\x78\x7c\x7c\xc4\x70\x38\xc4\xfd\xfd\x3d\xae\xaf\xaf\x71\x71\x71\x81\x4e\xa7\x83\xd5\xd5\x55\xe9\x13\xd3\xc4\xaf\x8e\xfb\xfd\xfe\xab\xdc\x9b\x26\x8b\x6c\x5e\x39\xc1\x57\xf8\xe4\x8d\xfa\x35\x37\x69\xbb\x2c\x4f\x4c\x93\x64\x69\xb7\xdb\x58\x5e\x5e\x9e\xb6\x09\x5e\x5a\x12\xd7\x5e\x25\x7e\x94\x85\xb2\xc4\x9e\x98\x9e\xe7\x61\x34\x1a\xe1\xe6\xe6\x06\x83\xc1\x00\xa7\xa7\xa7\x68\x34\x1a\xa8\xd7\xeb\x94\x85\xb2\xd8\x21\x8b\xea\x9c\x25\x4c\xd4\x45\x88\x32\xe3\x6b\x9d\x17\x52\x2e\xaa\x2c\xaa\xb9\xc8\x45\x16\x7f\x47\xeb\xeb\xeb\x38\x39\x39\x31\x56\x14\xca\x42\x59\x8c\x92\x05\x40\xae\xc2\xe8\xbe\x86\x4d\x44\x16\x9d\xb4\x5a\x2d\x1c\x1c\x1c\x48\xff\x3e\x23\x7b\x99\xbe\xae\xfe\xc4\xc9\x12\xd7\x5e\x57\xfc\x44\x2e\x32\x4d\x73\xec\xb9\xc9\x02\x20\xf7\xea\xb2\xe8\xb2\x88\xa0\xf2\x03\x9a\xea\xb2\xe2\xa4\x4b\xdc\x29\x8b\x06\x59\xe6\x51\x5d\x74\x2f\x2d\x4e\x5a\xd7\x10\xb7\x9d\xca\x3a\x0a"
		"\x91\xaa\xa2\x2a\x8b\xac\x30\x22\x8b\xa7\xc2\xa2\x24\xbd\x4f\xb8\x7d\x5a\x61\x44\x17\xc6\xc9\x2e\x8b\x16\x8d\x67\x26\x2b\x25\xf3\xaa\x2e\x8b\x7e\xf3\xf2\xa8\xf1\xbe\xe8\xbc\x42\x24\xb9\x44\x2f\x99\xdc\xb0\x22\x8f\xea\x62\xc3\x5d\xfe\x29\x0b\x65\x99\x56\x97\x2c\x85\xb1\x4d\x16\xdd\x43\x06\xb2\x00\xb2\x84\x77\x9a\xc5\x90\xcc\x96\xff\x8e\x49\x7b\x6f\x2f\x62\x81\x2c\xba\x26\x74\xb6\x4a\xa2\x63\x12\x4e\x2c\x93\x45\x97\x34\xfc\x17\x32\x52\x18\x59\x54\xc4\xa1\x20\xa4\xf0\xb2\xc4\x89\x43\x41\x08\x65\x21\x84\xb2\x10\x42\x59\x28\x0b\x21\x94\x85\x10\xca\x42\xc8\x7c\x64\xa1\x30\x84\x44\x8b\xe2\xcb\xe2\x00\x78\x66\x68\x08\x89\xa5\xe4\x00\x78\x3b\x79\x30\x66\x3c\x08\x89\x64\x29\x58\x59\xde\x00\xf8\xcb\x0a"
		"\x43\xc8\xeb\x8a\x02\xe0\x03\x80\x5f\xff\x00\xed\x05\x2f\x99\xae\x21\x0c\x2b\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82"s
	);
}
