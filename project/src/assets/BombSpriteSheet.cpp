/****************************************************************************************/
/* BombSpriteSheet.cpp                                                                  */
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

#include "assets/BombSpritesheet.h"

using namespace std::literals;

std::pair<std::string, std::string> Minesweeper::get_raw_bomb_sprite_sheet()
{
	return std::make_pair("BombSpritesheet",
		"\x89\x50\x4e\x47\x0d\x0a"
		"\x1a\x0a"
		"\x00\x00\x00\x0d\x49\x48\x44\x52\x00\x00\x00\xc0\x00\x00\x00\x40\x08\x06\x00\x00\x00\x4c\x6c\x78\xdf\x00\x00\x02\x5f\x49\x44\x41\x54\x78\xda\xed\x9d\xc1\x71\xc2\x40\x0c\x45\x25\x42\x11\x34\x91\x5a\xd2\x46\x38\xb9\x16\x4e\xa4\x0d\x6a\xa1\x89\x34\xe1\x38\x87\x8c\x27\xc1\x33\xc6\xbb\x6b\x7b\xb3\x92\xde\xbb\x30\x43\x26\x0c\x5f\x46\xff\x4b\x60\x83\xca\xfe\x0c\x2b\xff\x5f\xc5\x36\x55\xf4\xf7\xe7\xd3\x20\x22\xf2\x72\xfd\xd4\x88\xfa\x4b\x39\x08\x40\x60\x8e\x0d\x75\x7a\xee\xe3\x7a\x73\x3a\xf4\xff\x83\x7e\x12\x00\x42\xa3\x0d\x76\x7c\x11\xfd\xf9\x24\x95\x67\xe0\xa1\x25\xdd\x53\x2a\xd4\x61\xf0\xf0\x5a\x26\x01\x80\x1d\xc0\x78\xe7\x7b\x99\x75\x57\x39\xff\xe1\xfc\x26\x22\x22\x5f\xd7\xdb\xf8\xf7\xbd\xde\x15\x6a\xf2\xf8\x97\xea\x25\x01\x80\x04\x30\xde\xf9\x0f\x0e\xd8\xcb\xcd\xb5\xf3\xcd\x39\x7f\x85\x24\x68\x75\xe7\x9b\x7b\x9e\x9a\xa2\x9f\x04\x80\xd0\xa8\xb5\xce\x4f\x9d\x81\x47\xbc\x38\xdf\x92\xf3\xcb\xeb\xc7\xcf\xed\xfd\xfd\xe1\xee\x0d\xea\xd1\xf4\xce\x37\x9d\x00\x46\xbd\x7f\x92\x41\xd9\x01\x00\x0a"
		"\x12\xa0\xc9\x99\xaf\xa2\x03\x0e\x2d\xe9\x5d\xd4\x3d\x65\xa1\x0e\x09\xf5\x30\x95\xfc\x53\x52\x8f\x3b\x09\x00\x24\x80\xa5\x99\xaf\x60\x07\xc8\xdd\x7b\x6c\x3a\xdf\x76\x09\x68\xea\x73\x9e\x84\x1d\xe0\xe9\xf1\x27\x01\x80\x04\x88\xec\x00\xd6\xf4\xaf\x98\x81\x5d\xe8\x5f\xaa\xcb\x93\xe3\x4e\x02\x00\x3c\xeb\x06\xd3\xe7\xf8\x64\x38\xc0\x9c\x13\x9a\x4c\xbe\x82\x1d\xc8\xb4\xfe\xb9\xe3\x3c\xbd\x3f\xe1\xf5\xa0\x24\x00\x90\x00\x24\x80\x8f\xd9\x77\x4a\xee\x2c\x2c\xf1\xce\xf2\x25\x01\x00\x34\xba\x03\x90\x80\x24\x00\x40\x58\x8e\x12\xf7\x0a"
		"\x2f\xae\x6c\x43\x3f\x09\x00\xec\x00\x03\x65\x80\xa8\x90\x00\x40\x03\x00\xd0\x00\x00\x34\x00\x00\x0d\x00\x40\x03\x74\x5d\x27\x5d\xd7\x85\x2d\x0c\xfa\x63\xe8\x27\x01\x80\x04\x00\xa0\x01\x00\x68\x00\x00\x1a\x00\x20\x0c\x8b\xe7\x02\x8d\xef\x04\x5c\x2e\x97\x90\x05\x42\xbf\x6f\xfd\x24\x00\x84\xe6\x28\xbf\x57\x06\x71\x45\x18\xfa\xc3\xe9\x27\x01\x20\xfc\x0e\x90\xe4\x00\x0e\x67\xc1\x2c\x07\x44\xbf\x4f\xfd\x24\x00\x84\x26\xbb\x01\x38\x47\x06\xfd\x9e\xf4\x93\x00\xc0\x0e\x50\x32\x0b\x8e\x18\x9c\x09\x57\x7d\x3b\x32\xfa\x7d\xe9\x27\x01\x80\x04\xc8\x71\x00\x07\x4e\xb0\xc9\xf7\xe3\xa3\xdf\x87\x7e\x12\x00\x48\x80\x20\x4e\xb0\xcb\xef\xe3\xa2\xdf\xb6\x7e\x12\x00\x48\x00\xe7\x4e\x50\xe5\x97\xe2\xd1\x6f\x53\x3f\x09\x00\x24\xc0\x96\x4e\xd0\x90\x23\xe8\xc6\x8f\x87\x7e\x87\xfa\x49\x00\x20\x01\xf6\x74\x82\x39\x47\xd8\xd1\x19\x74\xe7\x9a\xa1\xdf\x91\x7e\x12\x00\x48\x80\x9a\x4e\x60\x68\xe6\x45\x7f\x00\xfd\x24\x00\x90\x00\x46\x1d\x41\x1b\xab\x25\xfa\x0d\xea\x27\x01\x80\x04\x68\xdc\x19\xd4\x78\x8d\xd1\xdf\xb0\x7e\x12\x00\x42\xf3\x0d\x29\x6a\x3c\x31\xf9\x2c\xc3\x9c\x00\x00\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82"s
	);
}
