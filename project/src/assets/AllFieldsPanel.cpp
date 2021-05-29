/****************************************************************************************/
/* AllFieldsPanel.cpp                                                                   */
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

#include "assets/AllFieldsPanel.h"

using namespace std::literals;

std::pair<std::string, std::string> Minesweeper::get_raw_all_fields_panel()
{
	return std::make_pair("AllFieldsPanel",
		"\x89\x50\x4e\x47\x0d\x0a"
		"\x1a\x0a"
		"\x00\x00\x00\x0d\x49\x48\x44\x52\x00\x00\x02\x62\x00\x00\x00\xa0\x08\x06\x00\x00\x00\xaf\xe9\x00\x70\x00\x00\x00\x01\x73\x52\x47\x42\x01\xd9\xc9\x2c\x7f\x00\x00\x00\x20\x63\x48\x52\x4d\x00\x00\x7a\x26\x00\x00\x80\x84\x00\x00\xfa\x00\x00\x00\x80\xe8\x00\x00\x75\x30\x00\x00\xea\x60\x00\x00\x3a\x98\x00\x00\x17\x70\x9c\xba\x51\x3c\x00\x00\x00\x09\x70\x48\x59\x73\x00\x00\x0b\x13\x00\x00\x0b\x13\x01\x00\x9a\x9c\x18\x00\x00\x10\x4e\x49\x44\x41\x54\x78\xda\xed\xdd\x7d\xf0\x65\x75\x5d\x07\xf0\xfd\x8b\x7f\x99\x69\xd2\x29\x19\xb7\xc6\xd8\x55\xd6\x88\xc2\xf2\xa1\xd0\x29\x08\x41\x4b\xd8\xd2\xa6\x5d\x47\x30\x70\x15\x98\x45\x54\x6a\x35\x04\xdd\x60\x10\x04\x37\x82\x5c\x1f\x80\x5d\x91\xb4\x4c\x24\xc5\x51\xd1\x1a\x12\x63\xf3\x29\xab\x19\xb2\xd6\x7c\xa0\x26\x27\x15\x1f\x37\x8d\xff\x8f\xfb\xfd\xcd\xde\x9d\x73\xcf\x7d\x38\x0f\xdf\xef\xb9\xe7\xe1\xbe\x76\xe6\xe5\xca\xfe\xee\x39\xf7\x9c\xef\x3d\xe7\xfb\x7b\x9f\xef\xfd\x9c\xf3\xdd\x94\x65\xd9\xa6\xe0\xe8\x9f\xcd\x47\xdd\x78\xd4\xa1\xa3\x32\x00\x00\x92\x3a\x74\x2c\x6b\x6d\x3e\x9e\xbf\x8e\x85\xb0\x1d\x47\x1d\xd1\x40\x00\x00\xad\x0b\x99\x6b\xc7\xb1\x0c\xb6\x31\x12\x26\x84\x01\x00\xac\x36\x8c\x85\x0c\xb6\x31\x44\xa6\x41\x00\x00\x56\x2b\x64\xb0\xe9\x9a\xb0\x6b\xae\xb9\x06\x00\x80\x16\xcc\xa9\x19\x9b\x4e\x67\xe1\x45\x77\xdd\x75\x17\x00\x00\x09\xcd\x09\x62\x99\x20\x06\x00\x20\x88\x01\x00\x08\x62\x1a\x0b\x00\x40\x10\x03\x00\x10\xc4\x00\x00\x10\xc4\x00\x00\x04\x31\x00\x00\x04\x31\x00\x00\x41\x0c\x00\x00\x41\x0c\x00\x40\x10\x03\x00\x10\xc4\x04\x31\x00\x00\x41\x0c\x00\x40\x10\x13\xc4\x00\x00\x04\x31\x00\x00\x41\x6c\xd5\x1b\xf6\xee\x77\xbd\x2b\xfb\xe0\x4d\x37\x64\x9f\xb8\xfa\xb5\x1b\x3e\xf4\xe6\x37\x65\x77\x1f\x3c\xe8\x43\x03\x00\x46\x93\x33\x7a\x17\xc4\xee\xb9\xf5\x96\xec\xf0\xf9\x67\x67\x47\x4e\x79\x42\x96\xfd\xc4\xa6\x29\xe1\xdf\xbe\x72\xee\xb3\xb3\x7b\xf7\xdd\xec\x20\x02\x00\x06\x9f\x33\x7a\x15\xc4\x3e\x75\xc5\xa5\xd9\x0f\xb7\x3e\x7e\xa6\x61\x8a\x7e\xb4\xe5\x71\xd9\xa7\x2f\x79\xa9\x03\x0a"
		"\x00\x18\x74\xce\xe8\x4d\x10\xfb\xc7\xcb\x2e\xce\xfe\xff\xe4\x9f\x2c\x6d\x9c\x89\xf0\xda\x2f\xbc\xf4\xf7\x1d\x58\x00\xc0\x60\x73\x46\x2f\x82\xd8\x7d\x37\x5c\x37\xd3\x38\x21\xb1\x1e\x3e\xef\xac\xec\xa1\xdd\xbb\xb2\x87\x2e\x7f\x45\xf6\xef\xbf\x73\xce\x4c\x8a\x0d\xcb\x7c\xe4\xda\x37\x38\xc0\x00\x80\x41\xe6\x8c\x5e\x04\xb1\xaf\x9f\x71\xda\xd4\x8e\x7f\xfb\xf4\x93\xb3\x7b\x6e\xd9\x37\xf3\xba\xf7\xdf\xf6\x67\xd9\x37\x9e\xb9\x6d\xea\xb5\x8f\x3e\x6d\x8b\x83\x0c\x00\x18\x64\xce\xe8\x3c\x88\x3d\xf8\xaa\xcb\xa6\x52\xea\xff\x3d\xe5\xa7\xb3\xf7\xed\x7f\xeb\xc2\xd7\x87\x3b\x1a\xbe\x7b\xda\xcf\x4e\xa5\xd5\xcf\x5f\xb4\xd3\x81\x46\x32\x77\xdc\x71\x47\xb6\x67\xcf\x9e\x29\xfb\xf7\xef\xd7\x36\xe0\x7c\x66\x80\xfa\x9e\x33\x3a\x0f\x62\xdf\x3f\x75\xf3\xd4\xce\x7e\xe6\xe5\x17\x96\x2e\x13\x86\x10\xf3\x8d\xfa\xc3\x27\xff\x54\xf6\xde\x77\xbe\xd3\x01\x47\xb4\x9d\x3b\x77\xce\x3b\x21\x36\x9c\x74\xd2\x49\xd9\x55\x57\x5d\xa5\x9d\xc0\xf9\xcc\x80\xf4\x3d\x67\x74\x1a\xc4\xfe\xed\x45\xbf\x35\xb5\xa3\xdf\x7c\xfa\x29\x95\x97\xfd\xc6\xb3\x7e\x7e\x6a\xe8\xf0\x3f\xb6\x3f\xd7\x01\xd7\xe0\xea\x6f\xde\xeb\xeb\x5e\x3d\x86\x9f\x97\xad\x23\xbc\x4f\x97\x6d\x50\x65\x9f\x2e\xb9\xe4\x92\x85\x9d\x76\xbe\xf3\x6e\x63\x9b\x57\xd1\x86\x7b\xf7\xee\x35\x2a\xd0\xe1\x31\xb8\x8a\x73\xa0\xab\xf7\xed\xfa\x7c\x9e\xb7\x8f\x4d\xcf\xe7\x31\xf6\x89\xeb\xdc\x1f\x0c\x21\x67\x74\x16\xc4\xc2\xf7\xb0\xf9\xc6\x09\xff\xff\x6f\xaf\xda\x53\x79\xf9\x0f\x5f\x7f\xed\xcc\xf2\xe1\x61\x6c\xae\xfe\xaa\x5f\xfd\x2d\x7b\x7d\x95\xe5\xc3\x7f\x87\x7f\xaf\xba\x8e\xf0\x7e\x5d\xb6\x41\xd9\x3e\x6d\xd9\xb2\xe5\xf8\xcf\x76\xef\xde\x3d\x65\xeb\xd6\xad\xc7\x7f\x96\xb2\xc3\x5a\x45\x1b\xee\xda\xb5\x2b\x3b\xe1\x84\x13\x8c\x0a"
		"\xf4\xe0\x3c\x6c\xf3\x1c\xe8\xea\x7d\xfb\x72\x3e\x17\xf7\xb1\xc9\xf9\x3c\xc6\x3e\x71\x9d\xfb\x83\xa1\xe4\x8c\xce\x82\xd8\x23\xbf\xf9\xcc\xa9\xa4\x19\xfe\xbb\xee\x3a\xc2\x1d\x0e\xf9\x75\x84\xf4\xba\xae\x9d\x7f\xdd\xab\xbf\x2a\xaf\x2f\xbb\x7a\xac\xd3\xe1\x4c\x84\xf7\xed\xb2\x0d\x96\xed\x53\xfe\xdf\x8b\x7f\x42\xe7\x3d\xf9\x59\xb8\x7a\x4c\xb5\xcd\x6d\xb7\xe1\x6d\xb7\xdd\xb6\xb0\xd3\x6d\x7b\x94\xcf\x79\xb8\xba\x73\xa0\xab\xf7\xed\xba\x2d\x97\xed\x63\xdd\xf3\x79\x8c\x7d\xe2\xba\xf7\x07\x43\xc9\x19\x9d\x04\xb1\x90\x48\x8b\xdf\xbd\xfe\xf5\x9f\xdf\x5a\x7b\x3d\xef\xb9\xfd\xf6\x8d\x65\xf3\x69\x35\x3c\xac\x6d\xdd\xaf\xc0\x97\x5d\xfd\x4d\xae\x78\x96\x5d\x2d\x56\xb9\x7a\x0c\x7f\x4f\xfe\x2d\xfc\xbc\x6c\x1d\x93\xd7\x86\xf7\xed\xa2\x0d\xaa\xec\xd3\xaa\x83\xd8\x2a\xda\x70\xfb\xf6\xed\xc7\x97\xdb\xb1\x63\xc7\x4a\x46\xf9\xd6\xd9\xb2\xf3\xaa\xcd\x73\xa0\xab\xf7\xed\xaa\x4f\xab\xb2\x8f\x75\xcf\xe7\xb1\xf5\x89\xeb\xde\x1f\x0c\x29\x67\x74\x12\xc4\xbe\xfb\x8b\x4f\x9a\xda\xa9\x7f\xbe\xe0\x45\x8d\xd7\x15\xee\x64\xc8\x37\x76\xb8\xd3\x61\xdd\xaf\xc0\x97\x75\x3a\x93\x30\xb6\xec\xf5\x55\x3a\xad\xf0\x77\xbe\xd3\x2a\xfb\x93\x7f\xbf\x2e\xda\xa0\x6c\x9f\xf2\xfb\x13\x13\xc4\xea\xd4\xb3\xb4\xd1\x86\xc5\xf7\xdf\xb6\x6d\xdb\xf1\x65\x1e\x7e\xf8\xe1\xd2\x7d\xaa\xb2\xfd\x6d\xd5\x94\x54\xa9\xab\x59\x56\x67\x53\xa5\x3e\xaa\x4a\x5d\x4c\x4c\x1b\x2c\x3b\x86\xf2\x3f\x4b\x5d\x2b\xd4\xe4\x7d\xdb\xae\x1d\x5d\xe5\xf9\x9c\x7f\xed\x64\xdb\xeb\x9e\xcf\x7d\xec\x13\x9b\xd6\xc7\xa5\xea\x0f\x86\x6c\x48\x39\x63\xe5\x41\xec\x9f\xfe\x60\xc7\xd4\x0e\x85\xbb\x19\x62\xd7\xf9\xe8\x2f\x3f\x79\xaa\xc1\xff\x75\xe7\xf6\xb5\x1e\x09\x2b\xfe\x39\x70\xe0\xc0\xdc\x91\xb1\xfc\x09\x99\x57\xa5\xd3\x09\xbf\xd0\xf2\x57\x56\x65\xeb\x68\x33\x88\xcd\xbb\x92\x9d\xfc\x79\xe4\x91\x47\x66\xb6\x2d\x08\xdb\xbc\x6c\x78\x7e\xd9\xeb\xc3\xbe\xa7\xa8\x67\x49\xdd\x86\x65\xef\x5f\xd6\xf1\xd6\xd9\xfe\x94\x35\x25\x75\xeb\x6a\xe6\xb5\x65\x59\x7d\x54\xd5\xba\x98\x98\x36\x28\xbb\xc0\x69\xb3\x56\xa8\xe9\xfb\xb6\x51\x3b\xda\xe6\xf9\x3c\xef\x5c\x0e\xf2\xa3\x4b\x4d\xcf\xe7\xfc\xb2\x7d\xe8\x13\x63\xea\xe3\x52\xf4\x07\x43\xfe\xdd\x38\xb4\x9c\xb1\xd2\x20\xf6\x17\x77\xde\x31\x35\xc9\x66\xd8\x99\x07\x5f\xb3\x7b\xe1\xeb\xef\xbb\xf1\xfa\xec\xab\xe7\x9c\x91\x7d\xed\xec\x67\x2d\x7d\xb2\xed\xfd\x6f\x7c\xfd\x4c\x41\x5d\x98\xd4\x73\xdd\x47\xc2\xca\x46\xc6\x16\xa9\x3a\x1a\xb4\xac\xd6\x60\x95\x41\xac\xce\x68\x60\xac\xb0\xcf\x29\xeb\x59\x52\xb5\x61\x95\xf7\x5f\xd6\xf1\x36\xd9\xfe\x54\x35\x25\x31\x21\xac\xce\xe7\x56\xb6\x0f\xb1\x6d\x50\xe7\xf3\x4b\x5d\x2b\x14\xf3\xbe\xa9\x6b\x47\x57\x35\xba\x97\xfa\x7c\xce\x7f\x6d\xd7\x75\x9f\x18\x5b\x1f\x17\xdb\x1f\x0c\x39\x88\x0d\x31\x67\xac\x34\x88\x7d\xe9\x05\x67\x4e\x15\xbd\xfd\xcf\x73\x4e\x5f\xf8\xda\xf0\x5d\x6e\x7e\xaa\x81\xb0\xd3\xe1\x0e\x88\x45\xaf\xff\xda\x73\x7f\x6d\x6a\xdd\xff\x7d\xe6\xd3\xd7\xae\x16\x65\xd1\x55\xe3\x63\x8f\x3d\xb6\x70\x64\x2c\xa6\xd3\x59\x36\xca\x30\x84\x20\x96\xdf\xf6\x26\x35\x21\x8b\x46\x73\xaa\xd6\x86\x4c\xae\x64\x63\xdb\xb0\x6a\x3d\x4d\x18\x1d\xac\xd2\x36\x65\xdb\x9f\xb2\xa6\xa4\x6e\x5d\xcd\xb2\xb6\x5c\x56\x1f\x55\xa5\x2e\x26\xb6\x0d\x8a\xfb\x30\xef\x58\x6c\xab\x56\xa8\xec\x1c\x28\xdb\xf6\x70\x0c\xc7\xd4\x59\xa6\x1c\x19\x6b\x1a\xc4\x4e\x3c\xf1\xc4\xa8\xf3\x39\x14\xb2\xe7\xd7\xd1\x45\x9f\x98\xa2\x3f\x49\xd1\x1f\x0c\x39\x88\x0d\x31\x67\xac\x2c\x88\x7d\xe4\xba\xbd\x33\x69\xf2\x6f\xde\x72\xd3\xc2\xd7\x7f\x76\xd7\x05\x33\x13\x70\x86\x09\x3b\x17\xbd\xfe\x03\x7f\xfa\x96\x99\xf5\x7f\x6c\xef\xd5\xa3\x0d\x62\x75\x3a\xab\x65\x57\x3e\xe1\x2a\x30\x5f\x37\x50\xb7\x3e\x2a\x74\x5e\x55\xd6\xd1\x87\x20\x16\xb6\x71\xa2\x78\xf5\xdb\xa4\x26\x64\xd1\x68\x4e\x9d\xda\x90\xc9\x95\x6c\xd3\x36\x6c\x32\x32\x5a\x16\xc4\x9a\x2c\xdf\xb4\xe3\xae\x5b\x57\x53\xd6\x96\x31\xe7\x42\x8a\x36\x8c\xdd\x87\x36\xce\x81\xa6\x23\xe4\x75\x97\x4f\x35\x32\x56\xf5\xf3\x6c\xe3\x7c\xae\xda\x9f\xb5\xd5\x27\xa6\xe8\x4f\xba\x3c\x9f\xbb\x36\xd4\x9c\xb1\xb2\x20\x16\x1e\xa2\x96\xdf\xd9\xc3\xe7\x9f\xbd\xf4\xf5\x9f\x7b\xd9\x4b\x66\x1a\x28\x4c\xcc\xb9\x6c\x99\xf0\x9d\x6d\xbe\x91\xc2\x77\xba\x82\x58\xb5\x21\xe8\x14\x85\xea\x5d\x04\xb1\xe2\xd5\x5f\x9d\x5f\x36\xb1\x75\x72\x8b\x46\x73\x16\x8d\x4c\x16\x47\x28\xea\xde\xe9\x35\xaf\x0d\x9b\x8c\x8c\x2e\x0b\x11\x55\xea\x71\xea\xd4\xcd\xc5\x06\xb1\x62\xdb\x95\xb5\x65\x6c\x10\x8b\x69\x83\x62\x6d\xd0\xa2\x7d\x59\x56\xdf\xd4\x46\x7f\x50\x77\x84\x3c\x66\x84\x3d\xa6\x80\x3f\xb6\xce\x2e\xb6\xc6\xab\xe9\x05\x5e\xaa\x3e\x31\x55\x7f\x92\xa2\x3f\x18\x6a\x10\x1b\x6a\xce\x58\x49\x10\x0b\xdf\xcf\x16\xe7\x79\x2a\x9b\x2a\x20\xcc\x0d\x55\x6c\xa0\x07\xf6\xbc\xba\xfc\x4e\x89\xc2\xfc\x50\xa1\xa1\x05\xb1\x71\x06\xb1\x26\x77\x8c\x56\x95\xe2\x2e\xa9\x26\x5f\x4d\xb4\xf5\xfa\x2a\x21\xa4\x69\x3d\xce\xa2\xba\xb9\x14\x41\xac\xb8\x6d\x65\xdb\xda\x65\x1b\xc4\xd6\x88\x85\x51\x94\xae\xfb\x83\x54\xfd\x49\xaa\x5a\xc1\x54\x35\x62\x43\x08\x62\x29\xfb\x93\x2e\x3f\xc7\xae\x0c\x39\x67\xac\x24\x88\xfd\xe0\xa9\x4f\x9c\xda\xe8\x65\x43\x7f\xf9\x67\x80\x14\x1b\xe8\xfe\x37\xfc\x71\xe9\x72\x9f\xbc\xf2\xf2\x99\x67\x87\xfc\xd5\xdb\xf6\x0b\x62\x23\x0c\x62\xcb\x46\x83\x8a\x77\x8c\x96\xd5\xf6\x08\x62\xcd\x7e\xe9\x85\x00\x12\xea\x62\xd6\x39\x88\x4d\xda\xa0\x18\xc6\xea\xd6\x37\x85\xaf\xb4\xd6\x35\x88\x95\x8d\x06\x55\xad\xb3\x8b\xad\xf1\x12\xc4\x86\x1b\xc4\x86\x9c\x33\x5a\x0f\x62\xc5\x79\x9e\xaa\x3e\x95\x36\xdc\xbd\x50\x6c\xa0\xfb\x6e\xb8\xae\xd2\xb2\xc5\xf9\xa1\x0e\x9f\x77\x96\x20\x36\xc2\x20\xd6\xa4\x0e\x22\x65\x9d\xdc\xba\x07\xb1\x30\x82\x11\x13\x1e\xc6\x10\xc4\xf2\x6d\x10\xfe\x6e\x5a\xdf\x14\xdb\x8e\x43\x0f\x62\x29\x6b\x05\x63\x6b\xbc\x04\xb1\xe1\x05\xb1\xa1\xe7\x8c\x56\x83\xd8\xbd\xfb\x6e\x9e\x29\x6c\xfb\xe8\x9f\x54\x5b\xd7\x07\x6f\xba\x61\xa6\x81\x42\xa1\x5c\x95\x65\xc3\xed\xa8\x63\x9f\x87\xb2\xce\x5d\x52\x55\xee\x8e\x19\xfa\x88\xd8\xa2\x5a\x90\x2a\xcf\x11\x9b\xd4\x37\xa5\x0e\x62\xc5\xcf\xa1\xef\x41\x6c\x51\xed\xc9\xb2\xd1\xc4\xd8\xe9\x59\xfa\x16\xc4\x62\xdb\xa0\x8f\x37\xac\xc4\x06\xb1\x55\xdc\x6d\xb7\xe8\x19\x5c\x31\x75\x76\x63\x0b\x62\x75\xfa\x93\x75\x0a"
		"\x62\x63\xc8\x19\xad\x06\xb1\xe2\x3c\x4f\xe1\xd6\xcf\xaa\xcb\x86\x5b\x48\x8b\x0d\xf4\xbe\xfd\x6f\xad\xbc\x7c\x71\x7e\xa8\xff\xfd\xd5\x53\xd7\x26\x88\x35\xb9\x3b\x66\x88\x41\x6c\xde\x73\x7f\xea\xd6\x88\xe5\xeb\x9b\x52\x07\xb1\x26\x77\xcb\x75\x19\xc4\x9a\xde\x2d\x17\xf3\x30\xd2\xbe\x05\xb1\xd8\x36\x18\x63\x10\x5b\xd5\xdd\x76\xa9\xeb\xec\xc6\x16\xc4\x56\x79\x07\xf1\x90\x82\xd8\x18\x72\x46\x6b\x41\x6c\x66\x9e\xa7\xad\x8f\xaf\xb5\x83\x7f\xf9\xf6\xb7\x4d\xed\x60\x58\x3e\x3c\xa8\xad\xea\xf2\x77\x1f\x3c\xb8\x51\xac\x97\x4f\xab\x0f\x5d\xfe\x0a"
		"\x41\x6c\x44\x41\x6c\xde\x73\x7f\xea\x3e\x47\x2c\x5f\xdf\x24\x88\x35\x7f\x30\x70\xd3\x69\x7a\xc6\x12\xc4\x26\x6d\x20\x88\x35\xff\x05\x9e\xba\xce\x4e\x10\x1b\x7f\x10\x1b\x4b\xce\x68\x2d\x88\x7d\xe7\x97\x7e\x6e\x6a\xe3\xc2\x94\x03\x75\x96\x0f\x3b\x98\x9f\x68\xf3\x07\xdb\xea\x3f\xa3\xe6\x73\x17\xbf\x78\xea\x43\xfa\xde\x2f\xfc\x8c\x1a\xb1\x91\x3d\xbe\xa2\xac\x2e\x67\xd9\x73\xc4\x8a\x75\x39\x6d\xd7\x88\x2d\xbb\xed\xbe\xeb\x20\xb6\x68\x6a\x98\xae\x6b\x83\x56\x19\xc4\x52\xb4\xc1\x18\x83\x58\x9d\xbb\x13\x63\xe7\xcd\x4c\x59\x67\x37\xf6\x1a\xb1\xba\x77\x8a\x8e\x31\x88\x8d\x25\x67\xb4\x12\xc4\xbe\x70\xe1\xef\x25\x99\x20\x33\x34\x4a\x6c\x88\xfa\xf6\xe9\x27\x4f\x7d\x50\xff\xf2\x92\x17\x0a"
		"\x62\x25\xbf\x7c\xca\xae\xfe\xc3\x32\x93\xba\x98\xf0\x77\x95\x75\xcc\x0b\x1f\xb1\xf5\x45\x29\x3a\xcc\xaa\xdb\xbf\xa8\x0d\x52\x74\x9c\x31\x6d\x28\x88\x0d\x33\x88\xa5\x3e\x17\xfa\x10\xc4\x62\xe7\xcb\x4c\x71\x41\x17\x7b\x3e\xc7\x2e\x1f\xdb\x27\x0a"
		"\x62\xeb\x99\x33\x92\x07\xb1\xf0\xdc\x8e\x7c\xc2\x0c\x1b\xf5\xf7\x7f\xf8\xca\x46\x3b\x97\x9f\x3d\xfd\xd1\xa7\x35\x7b\xd8\x61\x78\xea\x6d\xfe\xc3\xfa\xd1\x96\xc7\x65\xf7\xdc\xb2\x4f\x10\x6b\xf8\xe8\x86\x62\xc7\xdb\xb4\x13\x48\x55\xec\x1d\x13\xc4\x96\xcd\xc7\x56\xb7\xd6\xac\x49\xc7\x19\x3a\xde\x14\x6d\xd8\xd6\x71\xb0\x6e\x41\x2c\x45\x1b\x0c\x61\xae\xc9\xd4\x41\x2c\xe5\x45\x55\x4c\x10\x4b\x79\x3e\x77\xd9\x27\xc6\xf4\x27\xeb\x12\xc4\xc6\x96\x33\x92\x07\xb1\x3a\xf3\x3c\x95\xc9\xcf\x76\x1e\x9e\x98\xdb\x74\x3d\x5f\x39\xf7\xd9\xa3\x9b\x87\xb2\x0f\x41\x2c\x26\x14\xa4\x78\x9a\x78\x6c\x10\x5b\x36\x02\xb2\xaa\x20\x96\xa2\x0d\x05\xb1\x71\x04\xb1\xb6\x9e\xac\xbf\x8a\x11\xb1\xd8\xaf\x24\x53\x04\xb1\x94\xe7\x73\x97\x7d\xa2\x20\xb6\x7e\x39\x23\x69\x10\x0b\xcf\xe4\x28\xa6\xc2\xaa\xb7\x82\xce\x13\x1a\x37\xc5\x5d\x8f\xe1\xce\x88\xe2\x6d\xa6\x9f\xb8\xfa\xb5\x82\x58\x82\xe2\xdc\x2e\xe7\xd7\x8b\x0d\x62\x29\xdb\x20\x76\x6e\xb8\x14\xc5\xb9\xb1\x73\x0d\xc6\xec\x7b\xdb\xc5\xfa\xb1\xcf\x50\x5a\x55\x1b\x54\xf9\x4a\xaa\x8d\x73\xa1\xeb\xb9\x26\x53\xfe\xe2\x6e\x1a\xc4\x52\x9e\xcf\x5d\xf7\x89\x4d\x8f\x9f\x26\xc7\xdf\xd0\x82\xd8\x18\x73\x46\xd2\x20\x56\x9c\xe7\xe9\x8b\x2f\x7c\x7e\x54\x83\x87\x07\xab\x85\x86\x09\xeb\xad\xfa\x5c\x90\xbb\x2a\xce\x0f\xf5\xad\x5f\x79\x8a\x20\x26\x88\x09\x62\x09\x96\x5b\xc5\xe3\x2b\xfa\x1e\xc4\x26\x6d\xd0\x64\x12\x76\x41\x4c\x10\x4b\x15\xc4\x9a\x1c\x7f\x43\x0b\x62\x63\xcc\x19\xc9\x82\x58\xb8\x65\x33\xbf\x01\x47\x4e\x79\x42\x76\xf7\x81\x3b\x7b\xf5\x01\xce\xcc\x0f\x75\xf1\x8b\x07\x1b\xc4\xaa\x14\x16\x0f\x41\x8a\xaf\x26\xab\xb6\x45\x71\xd4\x26\x55\x1b\x2e\x2a\xce\x8d\xfd\x6a\xb2\xce\x7a\xba\x3a\x1e\x62\x6b\x83\x8a\x8f\x7c\x18\xa2\x62\x1b\xc4\x1c\x0f\x5d\xf5\x07\xcb\x0a"
		"\xd5\x57\xfd\xd5\x64\x95\x6d\x98\xd7\x56\x63\xea\x13\x63\x8e\x9f\x98\xcf\xb1\x8d\xcf\x33\xa5\xb1\xe6\x8c\x64\x41\x2c\xdc\x6d\x50\x77\x9e\xa7\xaa\xc3\x7d\xa9\x8a\xeb\x1f\xf8\xa3\x2b\x66\x26\x05\x0d\xcf\x11\x19\x62\x10\x5b\x56\x98\x5a\x36\xef\x5a\x2a\xcb\x0a"
		"\x53\x57\xf5\x8b\xbc\x6a\x5b\xcc\x1b\xb5\xa9\xb2\x5c\xd5\xf5\x36\x59\x57\x58\x26\x55\x1b\xa6\xd8\x97\xa6\xfb\x1e\xab\x4a\x1b\x74\xb5\x8f\x4d\xdb\xa0\xe9\xf1\xd0\xe6\x39\x50\x65\x1f\x9a\xac\x27\xd5\x71\x50\x67\x1b\xe6\xb5\x55\x1f\x8e\x8f\x2e\xcf\xe7\x7c\x9b\xa4\x3a\x1e\xfa\x66\xac\x39\x23\x49\x10\x2b\x0e\xc7\x55\x9d\xe7\xa9\xcc\xe1\xf3\xcf\xde\x58\x6f\xf0\xe5\xe7\xff\x7a\x92\x75\xce\xcc\x0f\x75\xf4\x3d\x86\x3a\x2a\xb6\xe8\xca\x67\x72\x17\x53\x78\xae\x4e\x78\xbe\x4e\xf1\x35\x65\xb7\x6a\xd7\xb9\x4b\x2a\xc5\x3a\x56\xd1\x16\x75\x97\x6b\xb2\xfd\x55\xd7\x55\x5c\x36\xd5\x36\xd4\x5d\x4f\xd3\xe3\x20\xf5\x67\x57\xe7\xf3\x2b\x7b\x5d\x9f\xda\xa0\xe9\xf1\x90\xba\x0d\xeb\xbe\xef\xaa\xb7\xbb\x4f\xe7\x73\x9f\xfa\xc4\xd8\xcf\xa1\x0f\xe7\x75\x4a\x63\xce\x19\x49\x82\x58\xfe\x39\x1c\x61\x67\x3e\x7c\xfd\xb5\xd1\x3b\xf2\x77\xaf\xbb\x72\xa6\xf0\x2d\xdc\x22\x1a\xbb\xde\xf0\x7d\x70\x71\x68\x73\x0c\xcf\x15\x03\x80\xb1\x1a\x73\xce\x88\x0e\x62\xc5\xe7\x67\xc4\xdc\x46\x9a\xf7\xe9\x4b\x2f\x9a\x99\x03\xea\x53\x57\x5c\x9a\x64\xdd\x5f\x3d\xe7\x8c\xa9\x86\xbf\xff\x8d\xaf\x77\xa0\x03\x40\x0f\x8d\x3d\x67\x44\x07\xb1\xf0\x1d\x6d\x7e\x27\x3e\xf3\xf2\x0b\x93\xec\xc4\x7b\xdf\xf1\xf6\xa9\x04\x1c\x12\xe5\x7b\x6e\xbf\x3d\xc9\xba\x1f\x7c\xcd\xee\xa9\x6d\x4e\xf5\x3d\x33\x00\x90\xd6\xd8\x73\x46\x74\x10\x0b\x0d\x92\x7f\xb3\x7f\x78\x65\xba\xef\x98\xef\xb9\xf5\x96\xec\x8b\xbf\x7b\xee\xc6\x0c\xe7\xf7\xee\xbb\x39\xd9\x7a\xc3\x70\x64\x7e\x9b\x3f\xbb\xeb\x02\x07\x3b\x00\xf4\xd0\xd8\x73\x46\x74\x10\xfb\xe4\x95\x97\x27\x7d\xa6\xc7\x2a\x84\x39\xaa\xf2\xdb\x1c\xf6\xc1\xc1\x0e\x00\xfd\x33\xf6\x9c\x11\x1d\xc4\xc2\x2d\x9f\xf9\xef\x6e\xbf\x7f\xea\xe6\xde\x37\x50\x7e\x6e\xa9\xb0\xed\x21\x11\x3b\xd8\x01\xa0\x7f\xc6\x9e\x33\x92\xdc\x35\x19\x9e\x4a\x9b\x7f\xc3\xc3\xe7\x9d\xd5\xdb\xc6\x09\xf3\x41\xe5\x3f\xd0\x98\xb9\xa5\x00\x80\xf6\x8d\x39\x67\x24\x09\x62\x1f\xbf\xe6\x75\x33\xb7\x80\x86\x09\x2f\xc3\x9d\x0e\x77\x1f\x3c\xd8\x79\xa3\x84\x6d\x08\xdb\xf2\x5f\x67\x3d\x63\x66\x3b\x1f\xd8\xf3\x6a\x07\x39\x00\xf4\xd8\x98\x73\x46\xb2\x27\xeb\x87\x42\xb7\xfc\x9b\xe7\x9f\x2a\x1b\x86\x11\xbb\x14\xb6\xa1\xb8\x5d\x7d\x4f\xd4\x00\xc0\xf8\x73\x46\xd2\x49\xbf\xbf\xfc\xbc\xe7\xcc\x6d\xa4\xbe\x09\xdb\xf8\x9f\xbf\xfd\x1b\x0e\x6c\x00\x18\x90\x31\xe6\x8c\xa4\x41\x2c\x08\xb7\x68\x86\x67\x71\xf4\xb5\x71\xc2\xb6\x7d\xfe\xa2\x9d\x0e\x68\x00\x18\xa0\xb1\xe5\x8c\xe4\x41\x6c\xe3\xbb\xd2\x03\x77\x66\x0f\xbe\xea\xb2\xec\x4b\x2f\x38\x33\xfb\xfa\x19\xa7\x6d\xcc\xbb\xd4\xa5\xb0\x0d\x21\x99\x86\x6d\xea\xc3\x77\xc9\x00\x40\x44\x4d\xd6\x88\x72\x46\x2b\x41\x0c\x00\x00\x41\x0c\x00\x40\x10\x03\x00\x40\x10\x03\x00\x10\xc4\x00\x00\x04\x31\x41\x0c\x00\x40\x10\x03\x00\x10\xc4\x04\x31\x00\x00\x41\x0c\x00\x40\x10\x03\x00\x40\x10\x03\x00\x10\xc4\x00\x00\x10\xc4\x00\x00\x04\x31\x00\x00\x04\x31\x00\x00\x41\x0c\x00\x00\x41\x0c\x00\x40\x10\x03\x00\x10\xc4\x04\x31\x00\x00\x41\x0c\x00\x40\x10\x13\xc4\x00\x00\x04\x31\x00\x00\x41\x0c\x00\x00\x41\x0c\x00\x40\x10\x03\x00\x40\x10\x03\x00\x10\xc4\x00\x00\x10\xc4\x00\x00\x04\x31\x00\x00\x04\x31\x00\x00\x41\x0c\x00\x40\x10\x13\xc4\x00\x00\x04\x31\x00\x00\x41\x4c\x10\x03\x00\x10\xc4\x00\x00\x04\x31\x00\x00\x04\x31\x00\x00\x41\x0c\x00\x00\x41\x0c\x00\x40\x10\x03\x00\x40\x10\x03\x00\x10\xc4\x00\x00\x10\xc4\x00\x00\x04\x31\x00\x00\x41\x4c\x10\x03\x00\x10\xc4\x00\x00\x04\x31\x41\x0c\x00\x40\x10\x03\x00\x10\xc4\x00\x00\x10\xc4\x00\x00\x04\x31\x00\x00\x04\x31\x00\x00\x41\x0c\x00\x00\x41\x0c\x00\x40\x10\x03\x00\x40\x10\x03\x00\x10\xc4\x00\x00\x04\x31\x41\x0c\x00\x40\x10\x03\x00\x10\xc4\x04\x31\x00\x00\x41\x0c\x00\x40\x10\x03\x00\x40\x10\x03\x00\x10\xc4\x00\x00\x10\xc4\x00\x00\x04\x31\x00\x00\x04\x31\x00\x00\x41\x0c\x00\x00\x41\x0c\x00\x40\x10\x03\x00\x10\xc4\x04\x31\x00\x00\x41\x0c\x00\x40\x10\x13\xc4\x00\x00\x04\x31\x00\x00\x41\x0c\x00\x00\x41\x0c\x00\x40\x10\x03\x00\x40\x10\x03\x00\x10\xc4\x00\x00\x10\xc4\x00\x00\x04\x31\x00\x00\x04\x31\x00\x00\x41\x0c\x00\x40\x10\x13\xc4\x00\x00\x04\x31\x00\x00\x41\x4c\x10\x03\x00\x10\xc4\x00\x00\x04\x31\x00\x00\x04\x31\x00\x80\xf1\x05\xb1\x43\xc5\x20\x06\x00\x40\x7a\x85\x10\x16\x32\xd8\xa6\x1b\xe7\xa4\x33\x00\x00\xda\x15\x32\xd8\xa6\xcd\x47\x1d\xd1\x18\x00\x00\x2b\x73\x64\x23\x83\x65\xd9\xc6\xd7\x93\x3b\x84\x31\x00\x80\x95\x85\xb0\x1d\x1b\x19\x2c\xfc\xcf\xb1\x30\xb6\xf9\xd8\x10\xd9\x21\x0d\x04\x00\x90\xdc\xa1\x63\x59\x6b\xf3\x24\x7f\xfd\x18\x4f\x9d\x19\xbb\xc3\x67\x50\x19\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82"s
	);
}
