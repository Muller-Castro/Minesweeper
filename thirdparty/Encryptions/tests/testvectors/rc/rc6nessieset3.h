#ifndef __RC6nessieset3__
#define __RC6nessieset3__

#include "../plainkeycipher.h"

// Test vector from <https://www.cosic.esat.kuleuven.be/nessie/testvectors/bc/rc6/Rc6-192-128.verified.test-vectors>

static const std::vector <PlainKeyCipher> RC6_NESSIE_SET_3 = {
    std::make_tuple("00000000000000000000000000000000", "000000000000000000000000000000000000000000000000", "6CD61BCB190B30384E8A3F168690AE82"),
    std::make_tuple("01010101010101010101010101010101", "010101010101010101010101010101010101010101010101", "142AA9F25DD64A8A6444304735AA6641"),
    std::make_tuple("02020202020202020202020202020202", "020202020202020202020202020202020202020202020202", "027D0E59F566E4EB40C59028971DE4DC"),
    std::make_tuple("03030303030303030303030303030303", "030303030303030303030303030303030303030303030303", "A9D4D9EF1B3CE468861211E5A738978F"),
    std::make_tuple("04040404040404040404040404040404", "040404040404040404040404040404040404040404040404", "9B944CD76B1C1AFD8E4D479D31A170C2"),
    std::make_tuple("05050505050505050505050505050505", "050505050505050505050505050505050505050505050505", "C773DDAE2D6DBB11AE23A98D78A2BFD7"),
    std::make_tuple("06060606060606060606060606060606", "060606060606060606060606060606060606060606060606", "890C6F733FCF1D7E41A468B341213ED6"),
    std::make_tuple("07070707070707070707070707070707", "070707070707070707070707070707070707070707070707", "477C7DD627EB6699EB1B31AE9059D9FC"),
    std::make_tuple("08080808080808080808080808080808", "080808080808080808080808080808080808080808080808", "0C0C610409A8D91FEA4571F3E2928FA2"),
    std::make_tuple("09090909090909090909090909090909", "090909090909090909090909090909090909090909090909", "D045C56F48507DD57F530AC780B25588"),
    std::make_tuple("0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A", "0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A", "BCFC44E38461031178EC0172B0360946"),
    std::make_tuple("0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B", "0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B", "88C1E0B1822115AD4989AAEB0AE8AEA7"),
    std::make_tuple("0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C", "0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C", "56EB958E5FCA5254221BE0A2FFA051D7"),
    std::make_tuple("0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D", "0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D", "D7DB722328CAD284BD4AAD1DEA2FAF62"),
    std::make_tuple("0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E", "0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E", "E078A45C84ECFE8C92122CEAA1E8BCBC"),
    std::make_tuple("0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F", "0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F", "F36960995C348DBD8DD062D4D5A89DCD"),
    std::make_tuple("10101010101010101010101010101010", "101010101010101010101010101010101010101010101010", "A8AA6F653475EC3F44253D171EF80054"),
    std::make_tuple("11111111111111111111111111111111", "111111111111111111111111111111111111111111111111", "AD7E4BA8610D935ABAF1544F93726A78"),
    std::make_tuple("12121212121212121212121212121212", "121212121212121212121212121212121212121212121212", "9EDA195C727103015CD512E058791749"),
    std::make_tuple("13131313131313131313131313131313", "131313131313131313131313131313131313131313131313", "76DAE7FD31F3B7317B40C35BAD704AAB"),
    std::make_tuple("14141414141414141414141414141414", "141414141414141414141414141414141414141414141414", "0EA9AD6FBD0BAE067EBEBF3D5593196E"),
    std::make_tuple("15151515151515151515151515151515", "151515151515151515151515151515151515151515151515", "B5875237099EEC0A4C53202235A33D15"),
    std::make_tuple("16161616161616161616161616161616", "161616161616161616161616161616161616161616161616", "F12DBE56066290FA3A7CD1C22E73DDDD"),
    std::make_tuple("17171717171717171717171717171717", "171717171717171717171717171717171717171717171717", "ABC9F137F453E79DCF2D6AABE4E7858D"),
    std::make_tuple("18181818181818181818181818181818", "181818181818181818181818181818181818181818181818", "5D846BBA803CE96E5A842B409C470745"),
    std::make_tuple("19191919191919191919191919191919", "191919191919191919191919191919191919191919191919", "12E6B6E0167FB418D929AFB38A029189"),
    std::make_tuple("1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A", "1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A", "D8D9BBE0A2DE0A70106F560BBBB02A8F"),
    std::make_tuple("1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B", "1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B", "5560DE385820F3FA6C138767FBADA226"),
    std::make_tuple("1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C", "1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C", "F53279EAC16C11FED708C4DB841DB372"),
    std::make_tuple("1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D", "1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D", "E6704A7E55D35C2636BCEF75A9004442"),
    std::make_tuple("1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E", "1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E", "48B51FD3C42320E42ABCC3C1D9C68FC8"),
    std::make_tuple("1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F", "1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F", "DDB77628D91D3C410D9FA61D57285D1C"),
    std::make_tuple("20202020202020202020202020202020", "202020202020202020202020202020202020202020202020", "67718DA41AA70EA260A05C4357F7CF9B"),
    std::make_tuple("21212121212121212121212121212121", "212121212121212121212121212121212121212121212121", "794C763D6A8CDB04231E8D1D06328A05"),
    std::make_tuple("22222222222222222222222222222222", "222222222222222222222222222222222222222222222222", "5982B918E193D69420DFAF9707083CB4"),
    std::make_tuple("23232323232323232323232323232323", "232323232323232323232323232323232323232323232323", "DA4D581382B09DD7DC8195FED2C5A51C"),
    std::make_tuple("24242424242424242424242424242424", "242424242424242424242424242424242424242424242424", "D5212C15A5C197D7CFC5B0C5B992F368"),
    std::make_tuple("25252525252525252525252525252525", "252525252525252525252525252525252525252525252525", "714B8415147ABCAC84BC737F4564CAC5"),
    std::make_tuple("26262626262626262626262626262626", "262626262626262626262626262626262626262626262626", "A12882BF1C4C764EDC0DE3BB194E7133"),
    std::make_tuple("27272727272727272727272727272727", "272727272727272727272727272727272727272727272727", "AFB7B55686201AFF7317E1B51CC1EBA2"),
    std::make_tuple("28282828282828282828282828282828", "282828282828282828282828282828282828282828282828", "41628154531FF7B12020706484FEFEA2"),
    std::make_tuple("29292929292929292929292929292929", "292929292929292929292929292929292929292929292929", "DC1E858FDC36FBF3FCEE00039F2AA0B5"),
    std::make_tuple("2A2A2A2A2A2A2A2A2A2A2A2A2A2A2A2A", "2A2A2A2A2A2A2A2A2A2A2A2A2A2A2A2A2A2A2A2A2A2A2A2A", "35762CCFABF983E2E70DBCE5AEBE7219"),
    std::make_tuple("2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B", "2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B", "285EA5899F0FEAB729974A75E40D3E8C"),
    std::make_tuple("2C2C2C2C2C2C2C2C2C2C2C2C2C2C2C2C", "2C2C2C2C2C2C2C2C2C2C2C2C2C2C2C2C2C2C2C2C2C2C2C2C", "A308360BCC0C2CB210F6B16C64567010"),
    std::make_tuple("2D2D2D2D2D2D2D2D2D2D2D2D2D2D2D2D", "2D2D2D2D2D2D2D2D2D2D2D2D2D2D2D2D2D2D2D2D2D2D2D2D", "E56FB73531A6E6BB83783C3896D6F027"),
    std::make_tuple("2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E", "2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E", "9A7A4908AEACC28F55C0E79CB33EF20A"),
    std::make_tuple("2F2F2F2F2F2F2F2F2F2F2F2F2F2F2F2F", "2F2F2F2F2F2F2F2F2F2F2F2F2F2F2F2F2F2F2F2F2F2F2F2F", "76D5DC61B62C82CF86B853321682AECD"),
    std::make_tuple("30303030303030303030303030303030", "303030303030303030303030303030303030303030303030", "E4FE632B6D3BDF0C4763557DCB46DA9B"),
    std::make_tuple("31313131313131313131313131313131", "313131313131313131313131313131313131313131313131", "69DFBE7D5240AC8838F4F32B669A8C28"),
    std::make_tuple("32323232323232323232323232323232", "323232323232323232323232323232323232323232323232", "28F6797D7416C245B77679E15AF77DA1"),
    std::make_tuple("33333333333333333333333333333333", "333333333333333333333333333333333333333333333333", "990BC9672F79EEAB8D0E6EC351FD57A6"),
    std::make_tuple("34343434343434343434343434343434", "343434343434343434343434343434343434343434343434", "802C87F88AF644AB0A045D679876B5CB"),
    std::make_tuple("35353535353535353535353535353535", "353535353535353535353535353535353535353535353535", "F9CF723564C34AE5B702AFD8392B15EA"),
    std::make_tuple("36363636363636363636363636363636", "363636363636363636363636363636363636363636363636", "D5B223E24A77978DA25D9392634B3C11"),
    std::make_tuple("37373737373737373737373737373737", "373737373737373737373737373737373737373737373737", "45262C366C3AB97F1ECD9197E6BC4F5F"),
    std::make_tuple("38383838383838383838383838383838", "383838383838383838383838383838383838383838383838", "A0535C0EE4CD69D8296A7B680A343AC4"),
    std::make_tuple("39393939393939393939393939393939", "393939393939393939393939393939393939393939393939", "88052146B98BAB8ACE2FC5A91BF4B7A7"),
    std::make_tuple("3A3A3A3A3A3A3A3A3A3A3A3A3A3A3A3A", "3A3A3A3A3A3A3A3A3A3A3A3A3A3A3A3A3A3A3A3A3A3A3A3A", "F7562819928EEEA2486B56BD932EDF1E"),
    std::make_tuple("3B3B3B3B3B3B3B3B3B3B3B3B3B3B3B3B", "3B3B3B3B3B3B3B3B3B3B3B3B3B3B3B3B3B3B3B3B3B3B3B3B", "F55C01154B81E31C56F821A4F06FF244"),
    std::make_tuple("3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C", "3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C", "D5ED34A900D38DB5632F0BBAFAD5792E"),
    std::make_tuple("3D3D3D3D3D3D3D3D3D3D3D3D3D3D3D3D", "3D3D3D3D3D3D3D3D3D3D3D3D3D3D3D3D3D3D3D3D3D3D3D3D", "13BCD4A8E28C352A305BAC636ABF0200"),
    std::make_tuple("3E3E3E3E3E3E3E3E3E3E3E3E3E3E3E3E", "3E3E3E3E3E3E3E3E3E3E3E3E3E3E3E3E3E3E3E3E3E3E3E3E", "677C7E5157A116FF5B92A2C21A846DCD"),
    std::make_tuple("3F3F3F3F3F3F3F3F3F3F3F3F3F3F3F3F", "3F3F3F3F3F3F3F3F3F3F3F3F3F3F3F3F3F3F3F3F3F3F3F3F", "2D2A719202601C1B2EF6D05BCC5C7DB9"),
    std::make_tuple("40404040404040404040404040404040", "404040404040404040404040404040404040404040404040", "0E4D9981D1E4D3D23811323E7E16B950"),
    std::make_tuple("41414141414141414141414141414141", "414141414141414141414141414141414141414141414141", "66EF378278F3F79BB7811C3D6FB90AD3"),
    std::make_tuple("42424242424242424242424242424242", "424242424242424242424242424242424242424242424242", "BFF5340ED842F459595F5FD38471C1CA"),
    std::make_tuple("43434343434343434343434343434343", "434343434343434343434343434343434343434343434343", "2A60F3E11DEF6D5A9F107455CF691D0E"),
    std::make_tuple("44444444444444444444444444444444", "444444444444444444444444444444444444444444444444", "28668C5387430A84C5899DD89D1B8A0E"),
    std::make_tuple("45454545454545454545454545454545", "454545454545454545454545454545454545454545454545", "490F01E815B7BC930F552DD96F4BBFFA"),
    std::make_tuple("46464646464646464646464646464646", "464646464646464646464646464646464646464646464646", "314B128A98582E634005133246D8788F"),
    std::make_tuple("47474747474747474747474747474747", "474747474747474747474747474747474747474747474747", "CBAFF2B405310E2923A366FE2B034A9B"),
    std::make_tuple("48484848484848484848484848484848", "484848484848484848484848484848484848484848484848", "D12855EC3FBEC40E1027BE3FAEF261D3"),
    std::make_tuple("49494949494949494949494949494949", "494949494949494949494949494949494949494949494949", "EF6F46A131469062E487C2E13608CBC4"),
    std::make_tuple("4A4A4A4A4A4A4A4A4A4A4A4A4A4A4A4A", "4A4A4A4A4A4A4A4A4A4A4A4A4A4A4A4A4A4A4A4A4A4A4A4A", "B20950595CBF0218E287C13C93AB9CF1"),
    std::make_tuple("4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B", "4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B", "203AE2C13AE730BFB03DDDE321699844"),
    std::make_tuple("4C4C4C4C4C4C4C4C4C4C4C4C4C4C4C4C", "4C4C4C4C4C4C4C4C4C4C4C4C4C4C4C4C4C4C4C4C4C4C4C4C", "475C99D8572AE22B0798A5DC38A49FCD"),
    std::make_tuple("4D4D4D4D4D4D4D4D4D4D4D4D4D4D4D4D", "4D4D4D4D4D4D4D4D4D4D4D4D4D4D4D4D4D4D4D4D4D4D4D4D", "FE801D4D9371187118FF3F64FC9B0218"),
    std::make_tuple("4E4E4E4E4E4E4E4E4E4E4E4E4E4E4E4E", "4E4E4E4E4E4E4E4E4E4E4E4E4E4E4E4E4E4E4E4E4E4E4E4E", "14A41A5626E7203266E2BE73287EE701"),
    std::make_tuple("4F4F4F4F4F4F4F4F4F4F4F4F4F4F4F4F", "4F4F4F4F4F4F4F4F4F4F4F4F4F4F4F4F4F4F4F4F4F4F4F4F", "190D0B71ED9EB775131A5AD5D2904B3B"),
    std::make_tuple("50505050505050505050505050505050", "505050505050505050505050505050505050505050505050", "8466377860649BD193978BF983271713"),
    std::make_tuple("51515151515151515151515151515151", "515151515151515151515151515151515151515151515151", "B405D04EB9E353BDE5223B4DD42163F5"),
    std::make_tuple("52525252525252525252525252525252", "525252525252525252525252525252525252525252525252", "A5529CD9487910E04F537B36B5BBA808"),
    std::make_tuple("53535353535353535353535353535353", "535353535353535353535353535353535353535353535353", "6B842FC9A563545D03685BCCDCD6B856"),
    std::make_tuple("54545454545454545454545454545454", "545454545454545454545454545454545454545454545454", "CE74C716ADCDD2C60B034CC3BC1613A0"),
    std::make_tuple("55555555555555555555555555555555", "555555555555555555555555555555555555555555555555", "A36DCFAC253D160667FACA1DC00BF429"),
    std::make_tuple("56565656565656565656565656565656", "565656565656565656565656565656565656565656565656", "D013F46A15095A3D4E7164B691270CC8"),
    std::make_tuple("57575757575757575757575757575757", "575757575757575757575757575757575757575757575757", "76128D217A927C703B526258F320B9EF"),
    std::make_tuple("58585858585858585858585858585858", "585858585858585858585858585858585858585858585858", "661D43017C1B48AE5CC709A56882DFFC"),
    std::make_tuple("59595959595959595959595959595959", "595959595959595959595959595959595959595959595959", "5619896CB9D9E4A765AA22E10AED86F9"),
    std::make_tuple("5A5A5A5A5A5A5A5A5A5A5A5A5A5A5A5A", "5A5A5A5A5A5A5A5A5A5A5A5A5A5A5A5A5A5A5A5A5A5A5A5A", "E9D552F76E7D739A3EF120573D7247E9"),
    std::make_tuple("5B5B5B5B5B5B5B5B5B5B5B5B5B5B5B5B", "5B5B5B5B5B5B5B5B5B5B5B5B5B5B5B5B5B5B5B5B5B5B5B5B", "8725E61063335C0A1599EAEE5870D6EB"),
    std::make_tuple("5C5C5C5C5C5C5C5C5C5C5C5C5C5C5C5C", "5C5C5C5C5C5C5C5C5C5C5C5C5C5C5C5C5C5C5C5C5C5C5C5C", "7411C01B3A5FF29BC2A834EEA1197112"),
    std::make_tuple("5D5D5D5D5D5D5D5D5D5D5D5D5D5D5D5D", "5D5D5D5D5D5D5D5D5D5D5D5D5D5D5D5D5D5D5D5D5D5D5D5D", "0BF495D77BF198EC62ED19DD0DB92FF7"),
    std::make_tuple("5E5E5E5E5E5E5E5E5E5E5E5E5E5E5E5E", "5E5E5E5E5E5E5E5E5E5E5E5E5E5E5E5E5E5E5E5E5E5E5E5E", "46A8341F67C7B4D3CCB9A67BAD2DABAA"),
    std::make_tuple("5F5F5F5F5F5F5F5F5F5F5F5F5F5F5F5F", "5F5F5F5F5F5F5F5F5F5F5F5F5F5F5F5F5F5F5F5F5F5F5F5F", "A41463ECE5B7F7F96AFC4A4FF514F3DE"),
    std::make_tuple("60606060606060606060606060606060", "606060606060606060606060606060606060606060606060", "893FD602ACE200D0746A5085311BAA8E"),
    std::make_tuple("61616161616161616161616161616161", "616161616161616161616161616161616161616161616161", "468A2FA54B6649291E02BE96BB67B0D2"),
    std::make_tuple("62626262626262626262626262626262", "626262626262626262626262626262626262626262626262", "73A1A244E502E7E250440D4745FA4550"),
    std::make_tuple("63636363636363636363636363636363", "636363636363636363636363636363636363636363636363", "822B7EDD011C0D8535050D9A42FA47C8"),
    std::make_tuple("64646464646464646464646464646464", "646464646464646464646464646464646464646464646464", "335D38E80004980416623D3F6D84EC54"),
    std::make_tuple("65656565656565656565656565656565", "656565656565656565656565656565656565656565656565", "A89C7B47EFAD33FA01A421D159E306D2"),
    std::make_tuple("66666666666666666666666666666666", "666666666666666666666666666666666666666666666666", "2685B8C0EAE7466D14DECB25102B3944"),
    std::make_tuple("67676767676767676767676767676767", "676767676767676767676767676767676767676767676767", "2E121F60C6661AA2C3D6CEA0D3227C46"),
    std::make_tuple("68686868686868686868686868686868", "686868686868686868686868686868686868686868686868", "08CA41A6D00B6C500A5C484222788E49"),
    std::make_tuple("69696969696969696969696969696969", "696969696969696969696969696969696969696969696969", "BB14DA91539A29F86B3B701C1F60CED3"),
    std::make_tuple("6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A", "6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A", "794CA5C449A316FAA0FC9A24199A1DC6"),
    std::make_tuple("6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B", "6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B", "6B68ACF55556986F9868A11E037A763C"),
    std::make_tuple("6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C", "6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C", "B784A6ADD6361B4B2CC0E3890B8C8647"),
    std::make_tuple("6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D", "6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D", "811EAA0B4EE6EC59024E650C5FA33D99"),
    std::make_tuple("6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E", "6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E", "948272EAA7547ACEB09D468D1DB794E8"),
    std::make_tuple("6F6F6F6F6F6F6F6F6F6F6F6F6F6F6F6F", "6F6F6F6F6F6F6F6F6F6F6F6F6F6F6F6F6F6F6F6F6F6F6F6F", "527E0AC9703F7391A4759353897E23FC"),
    std::make_tuple("70707070707070707070707070707070", "707070707070707070707070707070707070707070707070", "467F170403F1076E9F044DFEC1ADA103"),
    std::make_tuple("71717171717171717171717171717171", "717171717171717171717171717171717171717171717171", "0E57883FD7B0B29D8BF1648CAC05AE76"),
    std::make_tuple("72727272727272727272727272727272", "727272727272727272727272727272727272727272727272", "804AB457ACC8469D1B276D94F6A61321"),
    std::make_tuple("73737373737373737373737373737373", "737373737373737373737373737373737373737373737373", "9594EAE3F66E62A0092661755D961345"),
    std::make_tuple("74747474747474747474747474747474", "747474747474747474747474747474747474747474747474", "A9F6A08C545D1CACBF582168C49008A1"),
    std::make_tuple("75757575757575757575757575757575", "757575757575757575757575757575757575757575757575", "D2D5860796AAACA230FB103F64AD6C33"),
    std::make_tuple("76767676767676767676767676767676", "767676767676767676767676767676767676767676767676", "FB0EA0047D883FAD8D9389435941F273"),
    std::make_tuple("77777777777777777777777777777777", "777777777777777777777777777777777777777777777777", "8879538F10FDA289AC832170042B4969"),
    std::make_tuple("78787878787878787878787878787878", "787878787878787878787878787878787878787878787878", "B8E0812BB125789FE2830BB48152CD65"),
    std::make_tuple("79797979797979797979797979797979", "797979797979797979797979797979797979797979797979", "5001C9708981C78EAC4BF720EC9106C6"),
    std::make_tuple("7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A", "7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A", "A15740D064C98916A439FF78416F1FAD"),
    std::make_tuple("7B7B7B7B7B7B7B7B7B7B7B7B7B7B7B7B", "7B7B7B7B7B7B7B7B7B7B7B7B7B7B7B7B7B7B7B7B7B7B7B7B", "A2D4FBD605D8240385A15BBBD89BF234"),
    std::make_tuple("7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C", "7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C", "603D248544382578273F848640DCFE85"),
    std::make_tuple("7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D", "7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D", "CCEDEB7D3543B5D586D7C833D0CC1FC6"),
    std::make_tuple("7E7E7E7E7E7E7E7E7E7E7E7E7E7E7E7E", "7E7E7E7E7E7E7E7E7E7E7E7E7E7E7E7E7E7E7E7E7E7E7E7E", "6C0BCBC223F68EB65308D36E6A7CE054"),
    std::make_tuple("7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F", "7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F", "D587B07A5495E3B2594A8DA3BE4BCA62"),
    std::make_tuple("80808080808080808080808080808080", "808080808080808080808080808080808080808080808080", "99F0E435570BCBC800796CC0DF6D7654"),
    std::make_tuple("81818181818181818181818181818181", "818181818181818181818181818181818181818181818181", "B61AA33F5AA1FE871DEC688104F0C85D"),
    std::make_tuple("82828282828282828282828282828282", "828282828282828282828282828282828282828282828282", "B97EC69E0AEB4BB3EFD172E847D9697E"),
    std::make_tuple("83838383838383838383838383838383", "838383838383838383838383838383838383838383838383", "2AD952070BC16E82DF70257F3D0CC503"),
    std::make_tuple("84848484848484848484848484848484", "848484848484848484848484848484848484848484848484", "4998548EA747DDC9685E44DAF0B0EDBB"),
    std::make_tuple("85858585858585858585858585858585", "858585858585858585858585858585858585858585858585", "951A162352C8600A12AFF320E77BD4A6"),
    std::make_tuple("86868686868686868686868686868686", "868686868686868686868686868686868686868686868686", "20CED7A7FE2758AE27DACD889B7D5026"),
    std::make_tuple("87878787878787878787878787878787", "878787878787878787878787878787878787878787878787", "54061DF579C6F376A91E68CC6D9BD8DC"),
    std::make_tuple("88888888888888888888888888888888", "888888888888888888888888888888888888888888888888", "62C0001AD9D2CE1146B7037296DED530"),
    std::make_tuple("89898989898989898989898989898989", "898989898989898989898989898989898989898989898989", "0D6EF429DC67AFDE52F82F6B5847099E"),
    std::make_tuple("8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A", "8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A", "29FED62B4604F50BB77FD29034D95F89"),
    std::make_tuple("8B8B8B8B8B8B8B8B8B8B8B8B8B8B8B8B", "8B8B8B8B8B8B8B8B8B8B8B8B8B8B8B8B8B8B8B8B8B8B8B8B", "D56E7E74658B09DE318A661B71085A56"),
    std::make_tuple("8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C", "8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C", "7CE0A202393A018BD321FB660D8A156A"),
    std::make_tuple("8D8D8D8D8D8D8D8D8D8D8D8D8D8D8D8D", "8D8D8D8D8D8D8D8D8D8D8D8D8D8D8D8D8D8D8D8D8D8D8D8D", "AE89F2A8EF2023423D71AA9E01C816D1"),
    std::make_tuple("8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E", "8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E", "1249EF77D53670615581E7000FC6DAF9"),
    std::make_tuple("8F8F8F8F8F8F8F8F8F8F8F8F8F8F8F8F", "8F8F8F8F8F8F8F8F8F8F8F8F8F8F8F8F8F8F8F8F8F8F8F8F", "0DE028C4B302634BA8BD59104A0D48B1"),
    std::make_tuple("90909090909090909090909090909090", "909090909090909090909090909090909090909090909090", "CD689E38556B4C539EE457FD63298430"),
    std::make_tuple("91919191919191919191919191919191", "919191919191919191919191919191919191919191919191", "45CDF5FAA28D79100DD4A47000C5BEB0"),
    std::make_tuple("92929292929292929292929292929292", "929292929292929292929292929292929292929292929292", "5095E718A9DDA4D2798F5DD9B636F449"),
    std::make_tuple("93939393939393939393939393939393", "939393939393939393939393939393939393939393939393", "B4DA15E1D7211AE28EBD667C399D6281"),
    std::make_tuple("94949494949494949494949494949494", "949494949494949494949494949494949494949494949494", "AA304DDA87A3BB6C7FFB9692E034CCE9"),
    std::make_tuple("95959595959595959595959595959595", "959595959595959595959595959595959595959595959595", "796A7CDB8DF126B635E7C175834BC7C7"),
    std::make_tuple("96969696969696969696969696969696", "969696969696969696969696969696969696969696969696", "E5E956AC096977A8115AEEC027EB1F25"),
    std::make_tuple("97979797979797979797979797979797", "979797979797979797979797979797979797979797979797", "CC0D0AADA60579BF4B143564B57B3208"),
    std::make_tuple("98989898989898989898989898989898", "989898989898989898989898989898989898989898989898", "B76AFCA75AE9C61EA7E267F1E06C3C44"),
    std::make_tuple("99999999999999999999999999999999", "999999999999999999999999999999999999999999999999", "E3531E7712594758528B4532CDF08965"),
    std::make_tuple("9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A", "9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A", "156F4464FC8E457915262A024C8ED5AB"),
    std::make_tuple("9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B", "9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B", "114DA9E6BFE05D8D2707D0B31F4F2F0A"),
    std::make_tuple("9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C", "9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C", "6E53680FE6160DDADC1855C75C42366F"),
    std::make_tuple("9D9D9D9D9D9D9D9D9D9D9D9D9D9D9D9D", "9D9D9D9D9D9D9D9D9D9D9D9D9D9D9D9D9D9D9D9D9D9D9D9D", "F58D0495A8CDEB1070B089F103BCF02D"),
    std::make_tuple("9E9E9E9E9E9E9E9E9E9E9E9E9E9E9E9E", "9E9E9E9E9E9E9E9E9E9E9E9E9E9E9E9E9E9E9E9E9E9E9E9E", "D3E04C33260283834E1CEBCE907D0FD1"),
    std::make_tuple("9F9F9F9F9F9F9F9F9F9F9F9F9F9F9F9F", "9F9F9F9F9F9F9F9F9F9F9F9F9F9F9F9F9F9F9F9F9F9F9F9F", "18AE46B8BE8FBDFEDD1D9050305C1259"),
    std::make_tuple("A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0", "A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0", "871A2560BEB03121506274FC6ED2FD7E"),
    std::make_tuple("A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1", "A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1", "6C3912B32DA7EE58922CC2DF12A7F8B2"),
    std::make_tuple("A2A2A2A2A2A2A2A2A2A2A2A2A2A2A2A2", "A2A2A2A2A2A2A2A2A2A2A2A2A2A2A2A2A2A2A2A2A2A2A2A2", "E1B5C94595A43BBC79466C04B054D0D2"),
    std::make_tuple("A3A3A3A3A3A3A3A3A3A3A3A3A3A3A3A3", "A3A3A3A3A3A3A3A3A3A3A3A3A3A3A3A3A3A3A3A3A3A3A3A3", "A71912665283F0BA0A7383E33390F638"),
    std::make_tuple("A4A4A4A4A4A4A4A4A4A4A4A4A4A4A4A4", "A4A4A4A4A4A4A4A4A4A4A4A4A4A4A4A4A4A4A4A4A4A4A4A4", "AF9CC25E259A2C611CC02D0879055F42"),
    std::make_tuple("A5A5A5A5A5A5A5A5A5A5A5A5A5A5A5A5", "A5A5A5A5A5A5A5A5A5A5A5A5A5A5A5A5A5A5A5A5A5A5A5A5", "09895C28CAA32440AC84C74A00890AC6"),
    std::make_tuple("A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6", "A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6", "C4549E4724627C7E24359F804D8B774A"),
    std::make_tuple("A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7", "A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7", "B97867B7CD8D07A6EB8469A0E6CD19D0"),
    std::make_tuple("A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8", "A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8", "7C94ACCFECE37C652D5F492BB35B1D67"),
    std::make_tuple("A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9", "A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9", "F95F9C46A6323CE4EA3DBBE18B10BAD6"),
    std::make_tuple("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "CF7444A1264DD32D674DBEC5F9DE4F32"),
    std::make_tuple("ABABABABABABABABABABABABABABABAB", "ABABABABABABABABABABABABABABABABABABABABABABABAB", "45EE88448607FCCA142CAE0B38B89630"),
    std::make_tuple("ACACACACACACACACACACACACACACACAC", "ACACACACACACACACACACACACACACACACACACACACACACACAC", "C57F88EE947BCBB35ECD90DF8ACD41AA"),
    std::make_tuple("ADADADADADADADADADADADADADADADAD", "ADADADADADADADADADADADADADADADADADADADADADADADAD", "6A391CD6138800A43A310D94F51645A6"),
    std::make_tuple("AEAEAEAEAEAEAEAEAEAEAEAEAEAEAEAE", "AEAEAEAEAEAEAEAEAEAEAEAEAEAEAEAEAEAEAEAEAEAEAEAE", "F3325B5B39AD26CE85CFFED58D95605B"),
    std::make_tuple("AFAFAFAFAFAFAFAFAFAFAFAFAFAFAFAF", "AFAFAFAFAFAFAFAFAFAFAFAFAFAFAFAFAFAFAFAFAFAFAFAF", "185B3CBD17BF760FB2FEF42811D0A152"),
    std::make_tuple("B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0", "B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0", "6A69BDF1DF06CEA149DB27FA74693796"),
    std::make_tuple("B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1", "B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1", "FCB340CCE23A67DD8462D8784B704A81"),
    std::make_tuple("B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2", "B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2B2", "D10D476C5E2B4BD17495163315D331C7"),
    std::make_tuple("B3B3B3B3B3B3B3B3B3B3B3B3B3B3B3B3", "B3B3B3B3B3B3B3B3B3B3B3B3B3B3B3B3B3B3B3B3B3B3B3B3", "74F62F91CE7E898BC23F9C288ECA8131"),
    std::make_tuple("B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4", "B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4B4", "221AA35E8FA963289BF954402C7F5767"),
    std::make_tuple("B5B5B5B5B5B5B5B5B5B5B5B5B5B5B5B5", "B5B5B5B5B5B5B5B5B5B5B5B5B5B5B5B5B5B5B5B5B5B5B5B5", "D9CADD4001B469C58E8AFEB2045DC14E"),
    std::make_tuple("B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6", "B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6", "E956B091DA8616BC967EAE2BB93F0EFF"),
    std::make_tuple("B7B7B7B7B7B7B7B7B7B7B7B7B7B7B7B7", "B7B7B7B7B7B7B7B7B7B7B7B7B7B7B7B7B7B7B7B7B7B7B7B7", "E8AF5AABFD522FE792E4CB58CBA4FC06"),
    std::make_tuple("B8B8B8B8B8B8B8B8B8B8B8B8B8B8B8B8", "B8B8B8B8B8B8B8B8B8B8B8B8B8B8B8B8B8B8B8B8B8B8B8B8", "E2CC97CDA0F4CB35F59F8299221549CB"),
    std::make_tuple("B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9", "B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9B9", "37641DC8E518119705733B0E0CC211B6"),
    std::make_tuple("BABABABABABABABABABABABABABABABA", "BABABABABABABABABABABABABABABABABABABABABABABABA", "1414899DEC805AEC9710AE6254C39010"),
    std::make_tuple("BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "7442704A4793030E31B7CF71ABE37399"),
    std::make_tuple("BCBCBCBCBCBCBCBCBCBCBCBCBCBCBCBC", "BCBCBCBCBCBCBCBCBCBCBCBCBCBCBCBCBCBCBCBCBCBCBCBC", "891D119206B454760DED44763ACDEA2F"),
    std::make_tuple("BDBDBDBDBDBDBDBDBDBDBDBDBDBDBDBD", "BDBDBDBDBDBDBDBDBDBDBDBDBDBDBDBDBDBDBDBDBDBDBDBD", "AE56363468DD5F20CD55D1F36E53D078"),
    std::make_tuple("BEBEBEBEBEBEBEBEBEBEBEBEBEBEBEBE", "BEBEBEBEBEBEBEBEBEBEBEBEBEBEBEBEBEBEBEBEBEBEBEBE", "490F5846EBB52D8090F7032D20AC7700"),
    std::make_tuple("BFBFBFBFBFBFBFBFBFBFBFBFBFBFBFBF", "BFBFBFBFBFBFBFBFBFBFBFBFBFBFBFBFBFBFBFBFBFBFBFBF", "C0BFCC236DAB252ECB52F44F8E4BFD23"),
    std::make_tuple("C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0", "C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0", "8903043F51EB14D66D9340668F0A16A5"),
    std::make_tuple("C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1", "C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1", "0D49D39E655C6C3CB463B6B6D9D42DAC"),
    std::make_tuple("C2C2C2C2C2C2C2C2C2C2C2C2C2C2C2C2", "C2C2C2C2C2C2C2C2C2C2C2C2C2C2C2C2C2C2C2C2C2C2C2C2", "D727F873EE8881D9EA091137272C5EE0"),
    std::make_tuple("C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3", "C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3C3", "FA6EBF4490B740EF17004860CA5B445F"),
    std::make_tuple("C4C4C4C4C4C4C4C4C4C4C4C4C4C4C4C4", "C4C4C4C4C4C4C4C4C4C4C4C4C4C4C4C4C4C4C4C4C4C4C4C4", "28AF740124F0785368E2E2231D579082"),
    std::make_tuple("C5C5C5C5C5C5C5C5C5C5C5C5C5C5C5C5", "C5C5C5C5C5C5C5C5C5C5C5C5C5C5C5C5C5C5C5C5C5C5C5C5", "10AD33CFE5D9EF6687ABB9D065715F19"),
    std::make_tuple("C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6", "C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6", "45F94DFA6B19E28CAC6B6AB84907DBA1"),
    std::make_tuple("C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7", "C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7", "797B8A4D65FA02247D0F2F7603C2FC65"),
    std::make_tuple("C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8", "C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8C8", "467B4CBF6E1E2A00619326E782B2FDED"),
    std::make_tuple("C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9", "C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9", "E3338D230F714E09BEAFB19254757C04"),
    std::make_tuple("CACACACACACACACACACACACACACACACA", "CACACACACACACACACACACACACACACACACACACACACACACACA", "E9F8E6856F91E653E19471DA5A36FF6D"),
    std::make_tuple("CBCBCBCBCBCBCBCBCBCBCBCBCBCBCBCB", "CBCBCBCBCBCBCBCBCBCBCBCBCBCBCBCBCBCBCBCBCBCBCBCB", "2D2A2F80D265F48D16852878EBA3D802"),
    std::make_tuple("CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "826441F87A9A09A34D7C78889270425F"),
    std::make_tuple("CDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCD", "CDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCD", "E544A455674A3DB0EEF54E73DAAD7E2F"),
    std::make_tuple("CECECECECECECECECECECECECECECECE", "CECECECECECECECECECECECECECECECECECECECECECECECE", "6B0B240400BE03A62B45C62B0633B68A"),
    std::make_tuple("CFCFCFCFCFCFCFCFCFCFCFCFCFCFCFCF", "CFCFCFCFCFCFCFCFCFCFCFCFCFCFCFCFCFCFCFCFCFCFCFCF", "BF33AF930893CC1DD62728B3C8C4CE68"),
    std::make_tuple("D0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D0", "D0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D0", "D6C0FC873214D089D1B41842529C891F"),
    std::make_tuple("D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1", "D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1", "BA1C211B97C974D7ABF16C9314F4BD7A"),
    std::make_tuple("D2D2D2D2D2D2D2D2D2D2D2D2D2D2D2D2", "D2D2D2D2D2D2D2D2D2D2D2D2D2D2D2D2D2D2D2D2D2D2D2D2", "6601680BB93A76A76148B84B0A6CA22F"),
    std::make_tuple("D3D3D3D3D3D3D3D3D3D3D3D3D3D3D3D3", "D3D3D3D3D3D3D3D3D3D3D3D3D3D3D3D3D3D3D3D3D3D3D3D3", "0C21133D1EF307663230ADD65E8AA621"),
    std::make_tuple("D4D4D4D4D4D4D4D4D4D4D4D4D4D4D4D4", "D4D4D4D4D4D4D4D4D4D4D4D4D4D4D4D4D4D4D4D4D4D4D4D4", "0E9DB7642E76801B56E7AA10659E8A74"),
    std::make_tuple("D5D5D5D5D5D5D5D5D5D5D5D5D5D5D5D5", "D5D5D5D5D5D5D5D5D5D5D5D5D5D5D5D5D5D5D5D5D5D5D5D5", "FFBABBBBA569736616BD8F5A57C67092"),
    std::make_tuple("D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6", "D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6", "DF7C69A685C40EDA694DC6F05C3DA5AB"),
    std::make_tuple("D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7", "D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7", "3539B288714A2C183EF795BDC16E0913"),
    std::make_tuple("D8D8D8D8D8D8D8D8D8D8D8D8D8D8D8D8", "D8D8D8D8D8D8D8D8D8D8D8D8D8D8D8D8D8D8D8D8D8D8D8D8", "BB715ABD1805724B70672F09C937C2EA"),
    std::make_tuple("D9D9D9D9D9D9D9D9D9D9D9D9D9D9D9D9", "D9D9D9D9D9D9D9D9D9D9D9D9D9D9D9D9D9D9D9D9D9D9D9D9", "86CEF5D91A4EC4FB60AEFA4CD2FAA449"),
    std::make_tuple("DADADADADADADADADADADADADADADADA", "DADADADADADADADADADADADADADADADADADADADADADADADA", "4535248C00F1B9745F30C0238EE5B37C"),
    std::make_tuple("DBDBDBDBDBDBDBDBDBDBDBDBDBDBDBDB", "DBDBDBDBDBDBDBDBDBDBDBDBDBDBDBDBDBDBDBDBDBDBDBDB", "98038B500EEC91FFD310AEE631D32FB2"),
    std::make_tuple("DCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDC", "DCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDC", "CF95D278FF432001BF462C9C6AFE0E61"),
    std::make_tuple("DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "A907678A089F78CCE753D36655ED301E"),
    std::make_tuple("DEDEDEDEDEDEDEDEDEDEDEDEDEDEDEDE", "DEDEDEDEDEDEDEDEDEDEDEDEDEDEDEDEDEDEDEDEDEDEDEDE", "81EDED22C3F8B03FD81DD7A4C484A9F0"),
    std::make_tuple("DFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDF", "DFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDF", "5F168314CFF7C28AB431568797F70102"),
    std::make_tuple("E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0", "E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0", "B503E49FEB6C6B558202A2AC0731B0AC"),
    std::make_tuple("E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1", "E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1", "DBF4F2F13406F1123ED2CBECA9B37209"),
    std::make_tuple("E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2", "E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2", "027AEB003AD0CAD0EE73CA79CFE22002"),
    std::make_tuple("E3E3E3E3E3E3E3E3E3E3E3E3E3E3E3E3", "E3E3E3E3E3E3E3E3E3E3E3E3E3E3E3E3E3E3E3E3E3E3E3E3", "E320D12F068244F2E8B5D34EFD5EC9FD"),
    std::make_tuple("E4E4E4E4E4E4E4E4E4E4E4E4E4E4E4E4", "E4E4E4E4E4E4E4E4E4E4E4E4E4E4E4E4E4E4E4E4E4E4E4E4", "26F3F4B12F14E0F8E21E6DB77080B6AD"),
    std::make_tuple("E5E5E5E5E5E5E5E5E5E5E5E5E5E5E5E5", "E5E5E5E5E5E5E5E5E5E5E5E5E5E5E5E5E5E5E5E5E5E5E5E5", "F6A80024655F2E885A55D4F4AED3B2C6"),
    std::make_tuple("E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6", "E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6", "B12E64D7541843AE65EEB98D6B8AC52C"),
    std::make_tuple("E7E7E7E7E7E7E7E7E7E7E7E7E7E7E7E7", "E7E7E7E7E7E7E7E7E7E7E7E7E7E7E7E7E7E7E7E7E7E7E7E7", "031809FDFB7813A5F36E7248D3765C17"),
    std::make_tuple("E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8", "E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8", "CE00D9344DC17DD46E47CDA0C1E6DFF4"),
    std::make_tuple("E9E9E9E9E9E9E9E9E9E9E9E9E9E9E9E9", "E9E9E9E9E9E9E9E9E9E9E9E9E9E9E9E9E9E9E9E9E9E9E9E9", "30655F5A08BC1C9886A820F8F81DA572"),
    std::make_tuple("EAEAEAEAEAEAEAEAEAEAEAEAEAEAEAEA", "EAEAEAEAEAEAEAEAEAEAEAEAEAEAEAEAEAEAEAEAEAEAEAEA", "F45717E9DEFD895B4327EDAC26E25EBC"),
    std::make_tuple("EBEBEBEBEBEBEBEBEBEBEBEBEBEBEBEB", "EBEBEBEBEBEBEBEBEBEBEBEBEBEBEBEBEBEBEBEBEBEBEBEB", "87F30E1AF9A27A875EE181241395EE96"),
    std::make_tuple("ECECECECECECECECECECECECECECECEC", "ECECECECECECECECECECECECECECECECECECECECECECECEC", "211005B8FDF30146001568F06D1BC44D"),
    std::make_tuple("EDEDEDEDEDEDEDEDEDEDEDEDEDEDEDED", "EDEDEDEDEDEDEDEDEDEDEDEDEDEDEDEDEDEDEDEDEDEDEDED", "CE4CF623B3FB765BA55C79AE0D3A5124"),
    std::make_tuple("EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "EEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE", "54763022AE7632112D410CF2DF6399E5"),
    std::make_tuple("EFEFEFEFEFEFEFEFEFEFEFEFEFEFEFEF", "EFEFEFEFEFEFEFEFEFEFEFEFEFEFEFEFEFEFEFEFEFEFEFEF", "B52DC47F8019984327218BC2AEAED3DC"),
    std::make_tuple("F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0", "F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0", "7F1F93044414603842EC01F4D142C3C6"),
    std::make_tuple("F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1", "F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1", "065B470D99883781F9C83F504B51A3D8"),
    std::make_tuple("F2F2F2F2F2F2F2F2F2F2F2F2F2F2F2F2", "F2F2F2F2F2F2F2F2F2F2F2F2F2F2F2F2F2F2F2F2F2F2F2F2", "B0EC21D31BF5C015BF6947D788BAF805"),
    std::make_tuple("F3F3F3F3F3F3F3F3F3F3F3F3F3F3F3F3", "F3F3F3F3F3F3F3F3F3F3F3F3F3F3F3F3F3F3F3F3F3F3F3F3", "E86178C63091C9AF6C4BBBC0635049BF"),
    std::make_tuple("F4F4F4F4F4F4F4F4F4F4F4F4F4F4F4F4", "F4F4F4F4F4F4F4F4F4F4F4F4F4F4F4F4F4F4F4F4F4F4F4F4", "9CBACD826DEBB69F996F25DF5B7BBE22"),
    std::make_tuple("F5F5F5F5F5F5F5F5F5F5F5F5F5F5F5F5", "F5F5F5F5F5F5F5F5F5F5F5F5F5F5F5F5F5F5F5F5F5F5F5F5", "C72F225961872C1224D0623F9CD0C06F"),
    std::make_tuple("F6F6F6F6F6F6F6F6F6F6F6F6F6F6F6F6", "F6F6F6F6F6F6F6F6F6F6F6F6F6F6F6F6F6F6F6F6F6F6F6F6", "242FB42309111B33D25CCB9D7684BB9D"),
    std::make_tuple("F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7", "F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7", "CC094AD32E382F3B4B306C0D6EA4BFA3"),
    std::make_tuple("F8F8F8F8F8F8F8F8F8F8F8F8F8F8F8F8", "F8F8F8F8F8F8F8F8F8F8F8F8F8F8F8F8F8F8F8F8F8F8F8F8", "31B2E295D5C15293670F0189521A8CD6"),
    std::make_tuple("F9F9F9F9F9F9F9F9F9F9F9F9F9F9F9F9", "F9F9F9F9F9F9F9F9F9F9F9F9F9F9F9F9F9F9F9F9F9F9F9F9", "04E816EC01432DC0C64955758337F1D5"),
    std::make_tuple("FAFAFAFAFAFAFAFAFAFAFAFAFAFAFAFA", "FAFAFAFAFAFAFAFAFAFAFAFAFAFAFAFAFAFAFAFAFAFAFAFA", "B522DEB854C7BF853699EDCB94D5574E"),
    std::make_tuple("FBFBFBFBFBFBFBFBFBFBFBFBFBFBFBFB", "FBFBFBFBFBFBFBFBFBFBFBFBFBFBFBFBFBFBFBFBFBFBFBFB", "D70C4BD2927D2764D3050E243218C870"),
    std::make_tuple("FCFCFCFCFCFCFCFCFCFCFCFCFCFCFCFC", "FCFCFCFCFCFCFCFCFCFCFCFCFCFCFCFCFCFCFCFCFCFCFCFC", "EAC28B0CD7F1201BD090F3ADD8CF646C"),
    std::make_tuple("FDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFD", "FDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFDFD", "D2D7D8214A7A6640D91A9D8EBB463625"),
    std::make_tuple("FEFEFEFEFEFEFEFEFEFEFEFEFEFEFEFE", "FEFEFEFEFEFEFEFEFEFEFEFEFEFEFEFEFEFEFEFEFEFEFEFE", "60BBF3046D7012FA00C4F3353F1D7E3C"),
    std::make_tuple("FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "F33D1E49C3D6266C7F1C7238BBE7AB1F"),
};

#endif // __RC6nessieset3__
