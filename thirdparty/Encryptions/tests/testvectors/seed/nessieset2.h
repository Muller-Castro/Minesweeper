#ifndef __SEEDNESSIESET2__
#define __SEEDNESSIESET2__

#include "../plainkeycipher.h"

// Test vectors from <https://www.cosic.esat.kuleuven.be/nessie/testvectors/bc/seed/Seed-128-128.unverified.test-vectors>

static const std::vector <PlainKeyCipher> SEED_NESSIE_SET_2 = {
    std::make_tuple("80000000000000000000000000000000", "00000000000000000000000000000000", "DA8F536C8A501B6EE343E42FCCAAD57C"),
    std::make_tuple("40000000000000000000000000000000", "00000000000000000000000000000000", "C750D33D1DDFD0F026133E9FF1CA1A6E"),
    std::make_tuple("20000000000000000000000000000000", "00000000000000000000000000000000", "6EF5CF17A7F5517D6A96B3183279EF12"),
    std::make_tuple("10000000000000000000000000000000", "00000000000000000000000000000000", "100C3F11C4E3AB278D97D3750802615A"),
    std::make_tuple("08000000000000000000000000000000", "00000000000000000000000000000000", "34CC872CF2574ED57DA932F1A5C12A9C"),
    std::make_tuple("04000000000000000000000000000000", "00000000000000000000000000000000", "81AE57044ED88157E67D20A0482A82B9"),
    std::make_tuple("02000000000000000000000000000000", "00000000000000000000000000000000", "D792388B07A1DE0C4E526FE43E9586FF"),
    std::make_tuple("01000000000000000000000000000000", "00000000000000000000000000000000", "EC7F53E5717A100765CD476F4A677FBA"),
    std::make_tuple("00800000000000000000000000000000", "00000000000000000000000000000000", "60072639C8DDAA1AE908BD5236F07047"),
    std::make_tuple("00400000000000000000000000000000", "00000000000000000000000000000000", "9EEAFAB9A24189C252D59C32B73349E4"),
    std::make_tuple("00200000000000000000000000000000", "00000000000000000000000000000000", "4E85BF52F156557E05EE42E8B4F499EC"),
    std::make_tuple("00100000000000000000000000000000", "00000000000000000000000000000000", "A0AF97D0F14E31085DD753B42A36D429"),
    std::make_tuple("00080000000000000000000000000000", "00000000000000000000000000000000", "EEA11187ABD5FDD76E48EE7205A251D7"),
    std::make_tuple("00040000000000000000000000000000", "00000000000000000000000000000000", "F146AA6FA3E93E6647AC323D73408DD8"),
    std::make_tuple("00020000000000000000000000000000", "00000000000000000000000000000000", "631D1C9E55C8647284CFA8B379838DBA"),
    std::make_tuple("00010000000000000000000000000000", "00000000000000000000000000000000", "C4A33504D0460F43C725FA238D749D9A"),
    std::make_tuple("00008000000000000000000000000000", "00000000000000000000000000000000", "C3DB25F3444E71FD37C8196BA5CCCF43"),
    std::make_tuple("00004000000000000000000000000000", "00000000000000000000000000000000", "6EE34394B2C9727F95EF08A42FA36C31"),
    std::make_tuple("00002000000000000000000000000000", "00000000000000000000000000000000", "1133BD4DC1B6C9847D6EF53F20791ECB"),
    std::make_tuple("00001000000000000000000000000000", "00000000000000000000000000000000", "A7670D6173E24B183BC83BF6728C06C9"),
    std::make_tuple("00000800000000000000000000000000", "00000000000000000000000000000000", "096CEC30ACEE20842B80965DA0D42C6B"),
    std::make_tuple("00000400000000000000000000000000", "00000000000000000000000000000000", "936D547B21EA333B8FA2819D1B21495C"),
    std::make_tuple("00000200000000000000000000000000", "00000000000000000000000000000000", "4BF93E5B876105E2B1960E282E7E0722"),
    std::make_tuple("00000100000000000000000000000000", "00000000000000000000000000000000", "74D3D0824C460A5AEFB082DD94EB5337"),
    std::make_tuple("00000080000000000000000000000000", "00000000000000000000000000000000", "EA42DEC40A41B540536F12DAB53C1D6D"),
    std::make_tuple("00000040000000000000000000000000", "00000000000000000000000000000000", "E4DF15A55261CAA5C6711D5B1A6C277E"),
    std::make_tuple("00000020000000000000000000000000", "00000000000000000000000000000000", "02DB3B072E432BDE57444E9F86E1DD93"),
    std::make_tuple("00000010000000000000000000000000", "00000000000000000000000000000000", "063E576CCD7AB76D011C0FC06A301895"),
    std::make_tuple("00000008000000000000000000000000", "00000000000000000000000000000000", "99FBDFD56F6C0816D042904A98ABE107"),
    std::make_tuple("00000004000000000000000000000000", "00000000000000000000000000000000", "6CAD32F6A3461E5B02C1EA2587A5B092"),
    std::make_tuple("00000002000000000000000000000000", "00000000000000000000000000000000", "C8B841954B377E3F820215D93A15E2FE"),
    std::make_tuple("00000001000000000000000000000000", "00000000000000000000000000000000", "C83EDAE374361E53C84D33C2A044A1CE"),
    std::make_tuple("00000000800000000000000000000000", "00000000000000000000000000000000", "4734F0F6BF5C9B762D9B20A0F6E886C6"),
    std::make_tuple("00000000400000000000000000000000", "00000000000000000000000000000000", "5EE20F7AF80B0FCB39DDB8A5C4C8E6C2"),
    std::make_tuple("00000000200000000000000000000000", "00000000000000000000000000000000", "04498714579D26C022B52B7F8F5CC756"),
    std::make_tuple("00000000100000000000000000000000", "00000000000000000000000000000000", "7EBB7F991B0A022D4C9F008CE3C89135"),
    std::make_tuple("00000000080000000000000000000000", "00000000000000000000000000000000", "2E0011FFADF98AB73094957F801C2592"),
    std::make_tuple("00000000040000000000000000000000", "00000000000000000000000000000000", "476BD95B970481C3C45676033A26EDD8"),
    std::make_tuple("00000000020000000000000000000000", "00000000000000000000000000000000", "E00274BEDF588CF11268BC010223457B"),
    std::make_tuple("00000000010000000000000000000000", "00000000000000000000000000000000", "73E073F8E28A5084E42F02CAA8125DE6"),
    std::make_tuple("00000000008000000000000000000000", "00000000000000000000000000000000", "DA7FF8BE9C6CBB5209C97036929B4A91"),
    std::make_tuple("00000000004000000000000000000000", "00000000000000000000000000000000", "415F278A2DACF4251625049342132BE8"),
    std::make_tuple("00000000002000000000000000000000", "00000000000000000000000000000000", "0434FECF0663D291B68E15D16C90EB7E"),
    std::make_tuple("00000000001000000000000000000000", "00000000000000000000000000000000", "315EBDC8E9B350A3D82A81B2972E3729"),
    std::make_tuple("00000000000800000000000000000000", "00000000000000000000000000000000", "1EDCB16EE425018E7F87567F3D1A21AC"),
    std::make_tuple("00000000000400000000000000000000", "00000000000000000000000000000000", "BDDBD449CB884B8D3D32E63D1053766E"),
    std::make_tuple("00000000000200000000000000000000", "00000000000000000000000000000000", "B75321342A6A4C3372D497097880B986"),
    std::make_tuple("00000000000100000000000000000000", "00000000000000000000000000000000", "79E05AEC7AF864DD1C6FF66C01BB0DE2"),
    std::make_tuple("00000000000080000000000000000000", "00000000000000000000000000000000", "B60739AEB9009A6A759712EA84C3702A"),
    std::make_tuple("00000000000040000000000000000000", "00000000000000000000000000000000", "E58F321E50A13A27DA6B04EA6033AA97"),
    std::make_tuple("00000000000020000000000000000000", "00000000000000000000000000000000", "CB4B79974535A75568037938E7E49EBC"),
    std::make_tuple("00000000000010000000000000000000", "00000000000000000000000000000000", "54C68AECF50E3308E02BEBDE2516F5DF"),
    std::make_tuple("00000000000008000000000000000000", "00000000000000000000000000000000", "9FB5882E70F3DBB8D40DDD3BFB073494"),
    std::make_tuple("00000000000004000000000000000000", "00000000000000000000000000000000", "E7223C2BA0B8680F4E44A46DC4EDA24E"),
    std::make_tuple("00000000000002000000000000000000", "00000000000000000000000000000000", "408300AAD7B81B3C81910029E1B9D5A4"),
    std::make_tuple("00000000000001000000000000000000", "00000000000000000000000000000000", "4009FA408B2A725EE3BB19F42EC4DD61"),
    std::make_tuple("00000000000000800000000000000000", "00000000000000000000000000000000", "872453DBA3F0FCAB458D000BE9030F76"),
    std::make_tuple("00000000000000400000000000000000", "00000000000000000000000000000000", "CA2FD2150800ED526C9CCA1BDC344331"),
    std::make_tuple("00000000000000200000000000000000", "00000000000000000000000000000000", "54BD5D18C6D93DB0AD13DD8283DE777D"),
    std::make_tuple("00000000000000100000000000000000", "00000000000000000000000000000000", "F668FF955605EBC3E1E5103C8360C89B"),
    std::make_tuple("00000000000000080000000000000000", "00000000000000000000000000000000", "276D564740CB5E8457DF20CEE9CF5907"),
    std::make_tuple("00000000000000040000000000000000", "00000000000000000000000000000000", "EF68344C5E5B34F7BC32CED49868C551"),
    std::make_tuple("00000000000000020000000000000000", "00000000000000000000000000000000", "D5F40F7573AF7907F7FDBF76CD252A26"),
    std::make_tuple("00000000000000010000000000000000", "00000000000000000000000000000000", "104A2B47D906F0DDEDBF7AFFED03F779"),
    std::make_tuple("00000000000000008000000000000000", "00000000000000000000000000000000", "ACB03AA9929251CC1E5B1E176C8D4A5A"),
    std::make_tuple("00000000000000004000000000000000", "00000000000000000000000000000000", "A625702DB7D29631BF08A1BD61C14D67"),
    std::make_tuple("00000000000000002000000000000000", "00000000000000000000000000000000", "2BE637A51A4EC3F680746743A0814E2C"),
    std::make_tuple("00000000000000001000000000000000", "00000000000000000000000000000000", "CD37DC01EF3F03C137DB089C0176E59C"),
    std::make_tuple("00000000000000000800000000000000", "00000000000000000000000000000000", "5695316175AD12F78A5224A855ADD205"),
    std::make_tuple("00000000000000000400000000000000", "00000000000000000000000000000000", "E6AB30B3CBE234F0EEAA36D766D868B6"),
    std::make_tuple("00000000000000000200000000000000", "00000000000000000000000000000000", "D935BC1388AB203330913341CCB8CE83"),
    std::make_tuple("00000000000000000100000000000000", "00000000000000000000000000000000", "135597CDB8D3EE3D6CBA3363C887D0A7"),
    std::make_tuple("00000000000000000080000000000000", "00000000000000000000000000000000", "BA652965261E2D8AD07F5C44A1440062"),
    std::make_tuple("00000000000000000040000000000000", "00000000000000000000000000000000", "548CE1164C1CA747A222ACF76BA64ACA"),
    std::make_tuple("00000000000000000020000000000000", "00000000000000000000000000000000", "6E5B60F0C8FD3DAFD2321BCDB51D961A"),
    std::make_tuple("00000000000000000010000000000000", "00000000000000000000000000000000", "1B6DC517BDBAB56AC03DEF76A96E3AAA"),
    std::make_tuple("00000000000000000008000000000000", "00000000000000000000000000000000", "FA6D7780F98EFDC3845E38444E5803BD"),
    std::make_tuple("00000000000000000004000000000000", "00000000000000000000000000000000", "22054B5E0DADADF01D6E466BB38240C5"),
    std::make_tuple("00000000000000000002000000000000", "00000000000000000000000000000000", "7301B50FAF7EAA768262E5998B971CE0"),
    std::make_tuple("00000000000000000001000000000000", "00000000000000000000000000000000", "570F0CE7EA7717F3A39F4CA7D97B3E66"),
    std::make_tuple("00000000000000000000800000000000", "00000000000000000000000000000000", "E4FF07F841F45B08CD47FA49E90F523D"),
    std::make_tuple("00000000000000000000400000000000", "00000000000000000000000000000000", "C7287CDF3FA030F589819E32701EDACA"),
    std::make_tuple("00000000000000000000200000000000", "00000000000000000000000000000000", "742C8FFBE3F986000F0F96CEFC6B4758"),
    std::make_tuple("00000000000000000000100000000000", "00000000000000000000000000000000", "B1397CBF83AEF406894DA05742FB7E6F"),
    std::make_tuple("00000000000000000000080000000000", "00000000000000000000000000000000", "4AF43644108AFE873EAC7D5011E382A9"),
    std::make_tuple("00000000000000000000040000000000", "00000000000000000000000000000000", "2C4BA1CF1B25FFA36AE8698A729CC204"),
    std::make_tuple("00000000000000000000020000000000", "00000000000000000000000000000000", "F1827A29858416DA5297C122FDF6806C"),
    std::make_tuple("00000000000000000000010000000000", "00000000000000000000000000000000", "FCDC379E9467BA801378EF2372B3EE86"),
    std::make_tuple("00000000000000000000008000000000", "00000000000000000000000000000000", "BCB881D578A2082790D780092644F094"),
    std::make_tuple("00000000000000000000004000000000", "00000000000000000000000000000000", "D62B3266D6BE91B76817F3129421203A"),
    std::make_tuple("00000000000000000000002000000000", "00000000000000000000000000000000", "5D7B42FC0C41A95B560F4E861575C3A6"),
    std::make_tuple("00000000000000000000001000000000", "00000000000000000000000000000000", "BBB0EF495D2C31901BED068386EE2943"),
    std::make_tuple("00000000000000000000000800000000", "00000000000000000000000000000000", "69F735B5F2C0F5AF2905E7114F5D0D24"),
    std::make_tuple("00000000000000000000000400000000", "00000000000000000000000000000000", "16D665144B6255F4627A1D085A760F78"),
    std::make_tuple("00000000000000000000000200000000", "00000000000000000000000000000000", "26882958DDFDC8411392659E63466FFB"),
    std::make_tuple("00000000000000000000000100000000", "00000000000000000000000000000000", "42495AA0F08144303E13845C1CCF45DD"),
    std::make_tuple("00000000000000000000000080000000", "00000000000000000000000000000000", "2A3A8BEFF46D9F222F95C02B5E85505C"),
    std::make_tuple("00000000000000000000000040000000", "00000000000000000000000000000000", "AA6181A6ABC071AC205A48394104BDCB"),
    std::make_tuple("00000000000000000000000020000000", "00000000000000000000000000000000", "38D209FA8B31D3B485146764A434616F"),
    std::make_tuple("00000000000000000000000010000000", "00000000000000000000000000000000", "44743E45C8DB761AD52FAB91BEAF9AAC"),
    std::make_tuple("00000000000000000000000008000000", "00000000000000000000000000000000", "3AE707145A96DDBD3E420E138EBD3C3F"),
    std::make_tuple("00000000000000000000000004000000", "00000000000000000000000000000000", "8EA781047E2D19735174FD4C042E69FE"),
    std::make_tuple("00000000000000000000000002000000", "00000000000000000000000000000000", "BCE49982D5A048DECC816BDE57A180D5"),
    std::make_tuple("00000000000000000000000001000000", "00000000000000000000000000000000", "A9231CC123A6E1AE294EE219D9D8AC48"),
    std::make_tuple("00000000000000000000000000800000", "00000000000000000000000000000000", "80AAF92D632EBD2B0F08C76BD6AADCF7"),
    std::make_tuple("00000000000000000000000000400000", "00000000000000000000000000000000", "304237E42F8DE8718BF0AAA19CF1DCC0"),
    std::make_tuple("00000000000000000000000000200000", "00000000000000000000000000000000", "9E5776E6AD479C12425617E5B48E84A5"),
    std::make_tuple("00000000000000000000000000100000", "00000000000000000000000000000000", "6341D9F8DF78A7BDC99FB1A673064028"),
    std::make_tuple("00000000000000000000000000080000", "00000000000000000000000000000000", "482AC764B89C7735EFA05E9C8338AD39"),
    std::make_tuple("00000000000000000000000000040000", "00000000000000000000000000000000", "D32811A27DA34E9C4AD1144EE04CC52F"),
    std::make_tuple("00000000000000000000000000020000", "00000000000000000000000000000000", "2524E200220F6C1B8E52517A61BFBDCC"),
    std::make_tuple("00000000000000000000000000010000", "00000000000000000000000000000000", "745974EDCF60CB55CBC6D9D2628A9397"),
    std::make_tuple("00000000000000000000000000008000", "00000000000000000000000000000000", "4C44ED6F0ED9AA2D636D1A9E9EB40A46"),
    std::make_tuple("00000000000000000000000000004000", "00000000000000000000000000000000", "5124F18D312076174AA74D35A48E260B"),
    std::make_tuple("00000000000000000000000000002000", "00000000000000000000000000000000", "94B31DD551CBCB8DB3F7F29DCE921221"),
    std::make_tuple("00000000000000000000000000001000", "00000000000000000000000000000000", "E4486B9B9D3BD871436F1D68E9C9C08A"),
    std::make_tuple("00000000000000000000000000000800", "00000000000000000000000000000000", "7BCE3E7BF78B67DF17284983CC49AB0A"),
    std::make_tuple("00000000000000000000000000000400", "00000000000000000000000000000000", "16704B64A6E63B9D599F1EC22135D489"),
    std::make_tuple("00000000000000000000000000000200", "00000000000000000000000000000000", "2E30F49E91F9BF7B21D2DFBCBB18FAFC"),
    std::make_tuple("00000000000000000000000000000100", "00000000000000000000000000000000", "75F7BC91CFCB6644A0CDFADC0694DD86"),
    std::make_tuple("00000000000000000000000000000080", "00000000000000000000000000000000", "B58DD10154C930D73A6A9EE2B82D5A15"),
    std::make_tuple("00000000000000000000000000000040", "00000000000000000000000000000000", "D12E4B6EEFE4AADD423C7615A93ACB6A"),
    std::make_tuple("00000000000000000000000000000020", "00000000000000000000000000000000", "7D1E9769F28D4613F095142E83BE8DAC"),
    std::make_tuple("00000000000000000000000000000010", "00000000000000000000000000000000", "E28FEAB3D4B9C9524BA6D0CE58FBD756"),
    std::make_tuple("00000000000000000000000000000008", "00000000000000000000000000000000", "2317393AC55AC2F8628AF17071453861"),
    std::make_tuple("00000000000000000000000000000004", "00000000000000000000000000000000", "FC723E7BCDF0580D52C6BC862D22028C"),
    std::make_tuple("00000000000000000000000000000002", "00000000000000000000000000000000", "58B491F14A8994554BD31A29B9E88D1B"),
    std::make_tuple("00000000000000000000000000000001", "00000000000000000000000000000000", "A809864319CBBE1AF28FDFB20B22C6D6"),
};

#endif // __SEEDNESSIESET2__