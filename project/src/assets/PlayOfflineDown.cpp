/****************************************************************************************/
/* PlayOfflineDown.cpp                                                                  */
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

#include "assets/PlayOfflineDown.h"

using namespace std::literals;

std::pair<std::string, std::string> Minesweeper::get_raw_play_offline_down()
{
	return std::make_pair("PlayOfflineDown",
		"\x89\x50\x4e\x47\x0d\x0a"
		"\x1a\x0a"
		"\x00\x00\x00\x0d\x49\x48\x44\x52\x00\x00\x00\xcb\x00\x00\x00\x35\x08\x06\x00\x00\x00\xef\x63\x1f\x5a\x00\x00\x01\x84\x69\x43\x43\x50\x49\x43\x43\x20\x70\x72\x6f\x66\x69\x6c\x65\x00\x00\x28\x91\x7d\x91\x3d\x48\xc3\x40\x18\x86\xdf\xa6\x4a\x45\x2b\x0e\x56\x10\x71\xc8\x50\x9d\x2c\x88\x7f\x38\x4a\x15\x8b\x60\xa1\xb4\x15\x5a\x75\x30\xb9\xf4\x0f\x9a\x34\x24\x29\x2e\x8e\x82\x6b\xc1\xc1\x9f\xc5\xaa\x83\x8b\xb3\xae\x0e\xae\x82\x20\xf8\x03\xe2\xe4\xe8\xa4\xe8\x22\x25\x7e\x97\x14\x5a\xc4\x78\xc7\x71\x0f\xef\x7d\xef\xcb\xdd\x77\x80\x50\x2f\x33\xd5\xec\x18\x07\x54\xcd\x32\x92\xb1\xa8\x98\xc9\xae\x8a\x81\x57\xf4\x60\xc0\x99\xd3\x12\x33\xf5\x78\x6a\x31\x0d\xcf\xf1\x75\x0f\x1f\xdf\xef\x22\x3c\xcb\xbb\xee\xcf\xd1\xab\xe4\x4c\x06\xf8\x44\xe2\x39\xa6\x1b\x16\xf1\x06\xf1\xcc\xa6\xa5\x73\xde\x27\x0e\xb1\xa2\xa4\x10\x9f\x13\x8f\x19\x74\x41\xe2\x47\xae\xcb\x2e\xbf\x71\x2e\x38\x2c\xf0\xcc\x90\x91\x4e\xce\x13\x87\x88\xc5\x42\x1b\xcb\x6d\xcc\x8a\x86\x4a\x3c\x45\x1c\x56\x54\x8d\xf2\x85\x8c\xcb\x0a"
		"\xe7\x2d\xce\x6a\xb9\xca\x9a\xf7\xe4\x2f\x0c\xe6\xb4\x95\x14\xd7\x69\x0d\x23\x86\x25\xc4\x91\x80\x08\x19\x55\x94\x50\x86\x85\x08\xed\x1a\x29\x26\x92\x74\x1e\xf5\xf0\x0f\x39\xfe\x04\xb9\x64\x72\x95\xc0\xc8\xb1\x80\x0a"
		"\x54\x48\x8e\x1f\xfc\x0f\x7e\xf7\xd6\xcc\x4f\x4e\xb8\x49\xc1\x28\xd0\xf9\x62\xdb\x1f\x23\x40\x60\x17\x68\xd4\x6c\xfb\xfb\xd8\xb6\x1b\x27\x80\xff\x19\xb8\xd2\x5a\xfe\x4a\x1d\x98\xfd\x24\xbd\xd6\xd2\xc2\x47\x40\xdf\x36\x70\x71\xdd\xd2\xe4\x3d\xe0\x72\x07\x18\x7c\xd2\x25\x43\x72\x24\x3f\x2d\x21\x9f\x07\xde\xcf\xe8\x9b\xb2\x40\xff\x2d\xd0\xbd\xe6\xf6\xad\x79\x8e\xd3\x07\x20\x4d\xbd\x5a\xbe\x01\x0e\x0e\x81\xd1\x02\x65\xaf\x7b\xbc\xbb\xab\xbd\x6f\xff\xd6\x34\xfb\xf7\x03\xc7\x87\x72\xc9\x26\x07\xdf\xc6\x00\x00\x00\x06\x62\x4b\x47\x44\x00\xff\x00\xff\x00\xff\xa0\xbd\xa7\x93\x00\x00\x00\x09\x70\x48\x59\x73\x00\x00\x2e\x23\x00\x00\x2e\x23\x01\x78\xa5\x3f\x76\x00\x00\x00\x07\x74\x49\x4d\x45\x07\xe4\x0b\x15\x15\x1e\x0a"
		"\x7f\x6f\xd2\xd2\x00\x00\x00\x19\x74\x45\x58\x74\x43\x6f\x6d\x6d\x65\x6e\x74\x00\x43\x72\x65\x61\x74\x65\x64\x20\x77\x69\x74\x68\x20\x47\x49\x4d\x50\x57\x81\x0e\x17\x00\x00\x03\x7d\x49\x44\x41\x54\x78\xda\xed\x9d\xdf\x6a\x14\x31\x14\x87\xb7\xb5\x94\x56\x7c\x54\xf1\x42\x1f\xc2\xa2\x4b\xf7\x42\x50\x10\x51\x11\x29\x7a\xed\x4d\x5b\xf5\x4a\xea\x85\x14\xf2\x48\x35\x81\x59\xd8\x9d\x9d\x64\x72\xf2\x67\x26\x93\x7c\x07\x7e\x94\xe9\x24\xcb\xcc\x39\xf9\x36\x27\x99\x64\x76\xb5\xc2\x30\xac\x6f\x47\xb8\x00\xc3\x30\x0c\xc3\x30\x6c\x11\x29\x98\xa9\x74\x6a\xfe\x3e\xbc\x5c\x3d\x20\x54\xbb\xba\x36\x7f\xae\x75\x2c\x85\xc5\x80\x72\x8a\x13\x51\x63\xc0\x3c\xe9\x80\x91\xf5\x2c\x38\x0f\x35\xdc\xc3\xf8\x5b\xff\x03\x36\x9b\x0d\x42\xd5\x6a\x00\x98\x30\x58\x72\x5d\x1c\x41\x42\xa5\x02\x03\x2c\x08\x2d\x0d\x16\xd2\x3b\x04\x2c\xc0\x82\x80\x25\xc3\x45\x29\x60\x41\xc0\xe2\x77\x41\x8a\xde\x05\x01\x8b\x5f\xaf\xa2\xa6\xed\x5d\x42\xe6\xdb\x3f\x5f\x5e\x58\xcf\x7d\xd2\xe7\x4a\x0c\xf8\xdd\xfa\xb9\xe8\xfe\xfa\xf5\x3f\x5c\xbe\x12\xd5\xf3\x29\xef\xab\xb9\x7d\x0a"
		"\x2c\x81\xa0\x2c\x21\xb8\x31\xa0\xc4\x36\x7c\x53\x2f\x25\x28\x25\xf8\xb4\x28\x58\xf6\x52\x30\xe5\x97\x8a\xbd\xdd\xac\x81\x25\xf3\x3d\xde\xbf\x7e\x2a\x06\x2d\x04\x4c\x60\x11\xcc\x76\xf9\xc2\x92\x1a\xd4\xbd\x80\x28\x0f\x5d\x0d\x04\x72\x7b\xee\x6b\x79\xb0\x0c\x36\xbc\x5b\xe1\xfd\xf5\xf5\x45\x58\x6f\xac\xfc\x80\xff\x4a\xf3\xe9\x7c\xb0\xa8\xc3\xe5\x32\x63\xb0\x1c\x34\xce\xc2\x61\x91\x8e\x0f\x7c\xbe\x4d\xff\xac\x5f\x58\xbf\xfd\x5b\x80\x25\x34\x85\x8c\x1d\xab\xcd\xdf\xb3\xa8\x43\x68\x6c\xb0\xd8\xea\x64\x83\xc5\x15\xa0\x9b\xae\xcc\xef\x74\x81\xf5\x49\x3f\x6c\xa0\x8c\x01\x93\xe4\xfe\xfa\x90\xfd\xf2\xbc\x76\xdf\xf2\x99\xfc\x67\x1a\x7e\xec\x58\x6d\xf6\x31\x8b\x15\x8a\xed\xb1\x31\xdb\x39\x95\x69\xac\x04\x2c\xd5\xc1\x12\x3b\x56\x2b\x07\x16\x57\xda\xb3\x0b\x8b\x92\x0d\xfa\x8b\x83\xe5\x36\xcd\xf8\x67\x0f\x96\x81\x6b\xa8\x0e\x16\xd7\xff\x54\x60\x1a\x29\x8c\xc5\xae\x4f\x67\x9d\x0d\x8b\x81\x25\xdb\x00\xb8\x41\x58\x7c\x3e\x1b\x58\x66\x80\xc5\x39\x3e\xd9\x02\xb2\x6b\x43\xe0\x24\xde\x4b\x33\x6b\x1a\xe6\xf9\x59\xc0\x32\x41\x7c\x46\x7c\x3a\x09\x2c\xa3\x0e\xea\x03\xd3\x37\x47\x2a\x96\x02\x9c\x5c\xb3\x61\x55\xc1\xe2\xf2\xc7\x85\x67\x6c\x7d\xca\x2f\x10\x16\x7d\x7c\x14\x05\x8b\xc8\x79\x2e\x50\x5c\xc0\x8c\x00\x54\x13\x2c\x46\xff\xd6\xcf\x80\xa5\xa6\x9e\x45\xe4\xb4\x18\x4b\x08\x4d\x92\x46\x1f\x3a\x66\x51\x79\x02\xdb\x52\x1a\x16\x0d\xbb\x23\x16\x93\xa4\x61\x8b\xef\x59\x80\x05\x58\x18\xb3\x4c\x08\xcb\xfb\x2e\x70\xf7\x5a\x7f\xbb\x06\xf3\x43\xeb\xbb\xd6\x47\xad\x37\x3b\x8d\x49\xda\x30\x0b\x9c\x3a\x1e\x8c\x75\x69\xb0\x08\xe3\xca\x6c\x58\xc0\x37\x6f\x50\x23\xcc\xf9\x4c\xa3\x20\x58\xcc\x58\xca\xba\xba\xd9\x51\x1e\x58\x2a\x7c\xce\x32\x3b\x2c\x46\x77\x5a\xd7\x5a\xdf\xb4\xde\x69\xfd\x04\x96\x52\x60\xd1\xc7\x8f\x78\x82\x1f\x0b\x4b\xe8\x98\xc5\x67\x11\xa2\x0a"
		"\x84\x25\x76\x21\xe5\x52\x61\x09\x8c\x45\x11\x3d\xcb\x92\xd6\x86\x01\x0b\xb0\x88\x7b\x16\xfd\xcf\xf3\xea\x57\x1d\x0b\x36\x1c\xe5\x5c\xc0\x17\xf2\x7c\x46\xbc\x4c\x3f\xd1\xf5\x38\x61\x71\x94\x9f\x72\x91\x69\x8a\xc5\x94\xd9\x1e\x4a\x2e\x76\x3f\x4b\x01\xb0\x84\x3e\xcc\x74\xc1\x12\xb3\xad\xd8\xb7\xf1\xb7\x0a"
		"\x4b\x53\x3b\x25\x5d\x81\x1b\xdb\x99\xe7\xaa\x17\xd2\x38\xbd\x7a\x95\x40\x58\x62\x36\x41\xd9\xea\xf5\x41\x91\x96\x4f\xb9\xcd\xd8\xb5\x31\x2e\x34\x16\x55\xed\xc1\xaf\x4d\x83\xf9\x7e\xc0\x0a"
		"\x59\x34\xdd\xb6\x62\x7d\x7c\xac\x75\xd2\xcc\xab\x90\x80\x05\xf1\x2a\xa4\x25\xc3\x12\x91\x32\x20\xde\x48\x09\x2c\x82\x17\x2c\x20\xde\x75\x0c\x30\x80\x02\x2c\x39\x67\xbb\x10\x02\x16\x84\xf8\xe5\x2f\x40\x41\xc0\x02\x2c\xa8\x5d\x58\x68\xd8\xa8\x25\x50\xc4\xb0\x98\xdf\x02\xe7\x37\xd1\x51\x8b\x32\x6d\x5f\x0a"
		"\x8b\x79\xbc\x7f\x82\xf3\x50\x63\xa0\x3c\xd6\x3a\x13\xf7\x2c\x1d\x30\xf4\x30\xa8\xa5\x1e\xe5\x2c\xa4\x67\xc1\x30\x0c\xc3\xb0\xd1\xac\x0a"
		"\xc3\xb0\x40\x50\x00\x08\xc3\x7c\xed\x3f\xa5\x91\xc8\x0b\xb4\x04\x31\xd3\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82"s
	);
}
