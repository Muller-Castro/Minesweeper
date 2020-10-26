#include "assets/BombIcon.h"

#include <vector>

std::pair<std::string, std::string> Minesweeper::get_raw_bomb_icon()
{
	std::pair<std::string, std::string> result = std::make_pair("BombIcon", "");

	std::vector<short> raw_data {
		
		0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a,
		0x1a, 0x0a,
		0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x40, 0x08, 0x06, 0x00, 0x00, 0x00, 0xaa, 0x69, 0x71, 0xde, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 0x42, 0x01, 0xd9, 0xc9, 0x2c, 0x7f, 0x00, 0x00, 0x00, 0x20, 0x63, 0x48, 0x52, 0x4d, 0x00, 0x00, 0x7a, 0x26, 0x00, 0x00, 0x80, 0x84, 0x00, 0x00, 0xfa, 0x00, 0x00, 0x00, 0x80, 0xe8, 0x00, 0x00, 0x75, 0x30, 0x00, 0x00, 0xea, 0x60, 0x00, 0x00, 0x3a, 0x98, 0x00, 0x00, 0x17, 0x70, 0x9c, 0xba, 0x51, 0x3c, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x13, 0x00, 0x00, 0x0b, 0x13, 0x01, 0x00, 0x9a, 0x9c, 0x18, 0x00, 0x00, 0x01, 0x3a, 0x49, 0x44, 0x41, 0x54, 0x78, 0xda, 0xed, 0xdb, 0xc9, 0x0d, 0xc2, 0x30, 0x10, 0x05, 0xd0, 0x6f, 0x68, 0x82, 0x26, 0xa8, 0x85, 0x36, 0xc8, 0x29, 0xb5, 0xe4, 0x14, 0xda, 0xa0, 0x16, 0x9a, 0xa0, 0x09, 0x08, 0x07, 0x84, 0x84, 0xac, 0x2c, 0x76, 0x26, 0x8e, 0xed, 0x99, 0x3f, 0x97, 0x44, 0xd9, 0xa4, 0xff, 0xe4, 0xc8, 0x76, 0x16, 0x87, 0xf4, 0x35, 0x08, 0xcf, 0x77, 0x21, 0x07, 0xbd, 0x9a, 0xd3, 0x00, 0x00, 0xc7, 0xfe, 0xe9, 0x36, 0xbf, 0x38, 0x01, 0xf6, 0x09, 0x2a, 0x82, 0x21, 0x40, 0x06, 0x80, 0xbd, 0x03, 0x4f, 0x35, 0xfd, 0xd1, 0xed, 0xa1, 0x10, 0x04, 0xd0, 0x12, 0xfc, 0xd0, 0x5c, 0x00, 0x00, 0xef, 0xfe, 0x1e, 0x05, 0x41, 0x00, 0x2d, 0xc1, 0xfd, 0x0a,
		0x85, 0x20, 0x80, 0x9a, 0xe0, 0xe7, 0xdb, 0x77, 0xf9, 0xb8, 0x46, 0x41, 0x10, 0xa0, 0xd4, 0xe0, 0x53, 0xdd, 0xdb, 0x64, 0x70, 0xbf, 0x16, 0x20, 0x08, 0x30, 0x03, 0x50, 0x44, 0x93, 0xcf, 0x79, 0x0b, 0x10, 0x00, 0x05, 0x97, 0xa0, 0x1b, 0x1c, 0xcd, 0x4c, 0x80, 0x5a, 0x82, 0x0b, 0x86, 0xc2, 0xb3, 0xa3, 0x60, 0x02, 0xd4, 0x0a,
		0x10, 0x30, 0x1d, 0x0e, 0x9a, 0x09, 0x13, 0xa0, 0x76, 0x00, 0x1f, 0x22, 0x20, 0x38, 0x01, 0x7c, 0x80, 0xaa, 0x83, 0x0b, 0x00, 0x40, 0x00, 0x4d, 0x00, 0x6b, 0x8b, 0x00, 0x04, 0x20, 0x00, 0x01, 0x08, 0x30, 0xb6, 0xa3, 0x6d, 0x5b, 0x00, 0x40, 0xd7, 0x75, 0x04, 0x20, 0x00, 0x01, 0x08, 0x40, 0x00, 0xb3, 0xdd, 0xa0, 0x76, 0x08, 0x02, 0xfc, 0xad, 0x5b, 0xbb, 0x15, 0x1c, 0x01, 0x10, 0xf1, 0x48, 0x4c, 0x21, 0x04, 0x01, 0x56, 0x01, 0xfc, 0x4a, 0x01, 0x04, 0x01, 0x7c, 0x00, 0x2b, 0x10, 0xb2, 0xb7, 0xc3, 0xe6, 0x01, 0x14, 0x40, 0x10, 0x60, 0x09, 0x40, 0x2b, 0x44, 0xf4, 0x87, 0x92, 0xe6, 0x01, 0xb4, 0x40, 0x88, 0x3f, 0x96, 0x36, 0x0f, 0x10, 0x05, 0x51, 0x10, 0xc8, 0xe6, 0x3f, 0x4c, 0x98, 0x07, 0x58, 0x05, 0x31, 0x05, 0x92, 0x10, 0x26, 0xf9, 0x4f, 0x53, 0xe6, 0x01, 0x44, 0x10, 0xb9, 0x9b, 0x3c, 0x01, 0x36, 0x04, 0xc8, 0x0d, 0xe2, 0x8a, 0xb9, 0x08, 0x01, 0xd2, 0xc2, 0xb8, 0xe2, 0x15, 0x6b, 0x06, 0xf8, 0x00, 0x8e, 0x34, 0x13, 0x3a, 0x0c, 0x9d, 0x34, 0x8d, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
	};

	for(short x : raw_data) result.second += static_cast<char>(x);

	return result;
}
