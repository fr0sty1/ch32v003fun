/*
    minimidi file created by midiconverter.py v2 
        
    Times are in 10 ms (.010s)
    Assumes same instrument is on all tracks
    
    byt bit desc
    1   8   ticks
            0xff song end (max delay 253)
            0xfe extended delay (16 bit delay) two more bytecount then note info
            
    2   1.7 voicehigh.1 note.7
        6.2 velocity.6 voicelow.2, velocity 0 is note off
*/

const unsigned char song[]={

	0xfe,2,21,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((92 &0x7e)<<1)),	//# 1, ticks 3072, elapsed 533, voice: 0 note: 74 velocity 92 event ('note', 3072, 1, 74, 92)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((68 &0x7e)<<1)),	//# 2, ticks 3072, elapsed 0, voice: 1 note: 62 velocity 68 event ('note', 3072, 1, 62, 68)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((87 &0x7e)<<1)),	//# 3, ticks 3072, elapsed 0, voice: 2 note: 66 velocity 87 event ('note', 3072, 1, 66, 87)
	0,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((88 &0x7e)<<1)),	//# 4, ticks 3072, elapsed 0, voice: 3 note: 54 velocity 88 event ('note', 3072, 1, 54, 88)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((84 &0x7e)<<1)),	//# 5, ticks 3072, elapsed 0, voice: 1 note: 57 velocity 84 event ('note', 3072, 1, 57, 84)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 6, ticks 3072, elapsed 0, voice: 1 note: 50 velocity 88 event ('note', 3072, 1, 50, 88)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((81 &0x7e)<<1)),	//# 7, ticks 3072, elapsed 0, voice: 2 note: 69 velocity 81 event ('note', 3072, 1, 69, 81)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((102 &0x7e)<<1)),	//# 8, ticks 3072, elapsed 0, voice: 2 note: 38 velocity 102 event ('note', 3072, 2, 38, 102)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 9, ticks 3072, elapsed 0, voice: 1 note: 50 velocity 89 event ('note', 3072, 3, 50, 89)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((101 &0x7e)<<1)),	//# 10, ticks 3072, elapsed 0, voice: 3 note: 62 velocity 101 event ('note', 3072, 5, 62, 101)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((101 &0x7e)<<1)),	//# 11, ticks 3072, elapsed 0, voice: 1 note: 62 velocity 101 event ('note', 3072, 6, 62, 101)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((52 &0x7e)<<1)),	//# 12, ticks 3072, elapsed 0, voice: 0 note: 66 velocity 52 event ('note', 3072, 7, 66, 52)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((92 &0x7e)<<1)),	//# 13, ticks 3072, elapsed 0, voice: 0 note: 62 velocity 92 event ('note', 3072, 8, 62, 92)
	3,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 14, ticks 3092, elapsed 3, voice: 0 note: 62 velocity 0 event ('note', 3092, 5, 62, 0)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 15, ticks 3092, elapsed 0, voice: 1 note: 62 velocity 0 event ('note', 3092, 6, 62, 0)
	6,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 16, ticks 3132, elapsed 6, voice: 3 note: 62 velocity 0 event ('note', 3132, 8, 62, 0)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((102 &0x7e)<<1)),	//# 17, ticks 3132, elapsed 0, voice: 0 note: 62 velocity 102 event ('note', 3132, 8, 62, 102)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 18, ticks 3136, elapsed 0, voice: 0 note: 62 velocity 0 event ('note', 3136, 8, 62, 0)
	2,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((105 &0x7e)<<1)),	//# 19, ticks 3152, elapsed 2, voice: 0 note: 62 velocity 105 event ('note', 3152, 5, 62, 105)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((105 &0x7e)<<1)),	//# 20, ticks 3152, elapsed 0, voice: 1 note: 62 velocity 105 event ('note', 3152, 6, 62, 105)
	12,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((99 &0x7e)<<1)),	//# 21, ticks 3224, elapsed 12, voice: 3 note: 66 velocity 99 event ('note', 3224, 8, 66, 99)
	2,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((101 &0x7e)<<1)),	//# 22, ticks 3240, elapsed 2, voice: 3 note: 66 velocity 101 event ('note', 3240, 5, 66, 101)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((101 &0x7e)<<1)),	//# 23, ticks 3240, elapsed 0, voice: 3 note: 66 velocity 101 event ('note', 3240, 6, 66, 101)
	4,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 24, ticks 3264, elapsed 4, voice: 0 note: 62 velocity 0 event ('note', 3264, 5, 62, 0)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 25, ticks 3264, elapsed 0, voice: 1 note: 62 velocity 0 event ('note', 3264, 6, 62, 0)
	4,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 26, ticks 3292, elapsed 4, voice: 3 note: 66 velocity 0 event ('note', 3292, 5, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	6,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((103 &0x7e)<<1)),	//# 29, ticks 3332, elapsed 6, voice: 0 note: 66 velocity 103 event ('note', 3332, 8, 66, 103)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((103 &0x7e)<<1)),	//# 30, ticks 3336, elapsed 0, voice: 1 note: 66 velocity 103 event ('note', 3336, 5, 66, 103)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((103 &0x7e)<<1)),	//# 31, ticks 3336, elapsed 0, voice: 3 note: 66 velocity 103 event ('note', 3336, 6, 66, 103)
	15,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((106 &0x7e)<<1)),	//# 32, ticks 3424, elapsed 15, voice: 2 note: 69 velocity 106 event ('note', 3424, 8, 69, 106)
	// Note off skipped, note 50 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((93 &0x7e)<<1)),	//# 34, ticks 3432, elapsed 1, voice: 0 note: 69 velocity 93 event ('note', 3432, 5, 69, 93)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((93 &0x7e)<<1)),	//# 35, ticks 3432, elapsed 0, voice: 0 note: 69 velocity 93 event ('note', 3432, 6, 69, 93)
	2,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 36, ticks 3444, elapsed 2, voice: 1 note: 66 velocity 0 event ('note', 3444, 5, 66, 0)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 37, ticks 3444, elapsed 0, voice: 3 note: 66 velocity 0 event ('note', 3444, 6, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	6,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 39, ticks 3480, elapsed 6, voice: 0 note: 69 velocity 0 event ('note', 3480, 5, 69, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 40, ticks 3480, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 3480, 6, 69, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	7,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((111 &0x7e)<<1)),	//# 50, ticks 3524, elapsed 7, voice: 0 note: 69 velocity 111 event ('note', 3524, 8, 69, 111)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((92 &0x7e)<<1)),	//# 51, ticks 3528, elapsed 0, voice: 1 note: 69 velocity 92 event ('note', 3528, 5, 69, 92)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((92 &0x7e)<<1)),	//# 52, ticks 3528, elapsed 0, voice: 2 note: 69 velocity 92 event ('note', 3528, 6, 69, 92)
	// Note off skipped, note 62 not found in channels, probably interrupted
	15,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((94 &0x7e)<<1)),	//# 54, ticks 3616, elapsed 15, voice: 3 note: 50 velocity 94 event ('note', 3616, 3, 50, 94)
	1,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((99 &0x7e)<<1)),	//# 55, ticks 3624, elapsed 1, voice: 1 note: 74 velocity 99 event ('note', 3624, 8, 74, 99)
	2,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((93 &0x7e)<<1)),	//# 56, ticks 3636, elapsed 2, voice: 2 note: 74 velocity 93 event ('note', 3636, 5, 74, 93)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((93 &0x7e)<<1)),	//# 57, ticks 3636, elapsed 0, voice: 2 note: 74 velocity 93 event ('note', 3636, 6, 74, 93)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((72 &0x7e)<<1)),	//# 58, ticks 3636, elapsed 0, voice: 2 note: 66 velocity 72 event ('note', 3636, 7, 66, 72)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 59, ticks 3640, elapsed 0, voice: 0 note: 69 velocity 0 event ('note', 3640, 8, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((98 &0x7e)<<1)),	//# 62, ticks 3648, elapsed 1, voice: 0 note: 50 velocity 98 event ('note', 3648, 1, 50, 98)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((94 &0x7e)<<1)),	//# 63, ticks 3648, elapsed 0, voice: 2 note: 38 velocity 94 event ('note', 3648, 2, 38, 94)
	5,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 64, ticks 3680, elapsed 5, voice: 1 note: 74 velocity 0 event ('note', 3680, 5, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 66, ticks 3696, elapsed 2, voice: 0 note: 50 velocity 0 event ('note', 3696, 3, 50, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	4,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 69, ticks 3720, elapsed 4, voice: 3 note: 50 velocity 0 event ('note', 3720, 1, 50, 0)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 70, ticks 3720, elapsed 0, voice: 2 note: 38 velocity 0 event ('note', 3720, 2, 38, 0)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((104 &0x7e)<<1)),	//# 71, ticks 3720, elapsed 0, voice: 0 note: 74 velocity 104 event ('note', 3720, 8, 74, 104)
	1,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((97 &0x7e)<<1)),	//# 72, ticks 3728, elapsed 1, voice: 1 note: 74 velocity 97 event ('note', 3728, 5, 74, 97)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((97 &0x7e)<<1)),	//# 73, ticks 3728, elapsed 0, voice: 2 note: 74 velocity 97 event ('note', 3728, 6, 74, 97)
	14,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((92 &0x7e)<<1)),	//# 74, ticks 3812, elapsed 14, voice: 3 note: 73 velocity 92 event ('note', 3812, 8, 73, 92)
	1,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((63 &0x7e)<<1)),	//# 75, ticks 3820, elapsed 1, voice: 3 note: 64 velocity 63 event ('note', 3820, 7, 64, 63)
	0,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((94 &0x7e)<<1)),	//# 76, ticks 3824, elapsed 0, voice: 3 note: 57 velocity 94 event ('note', 3824, 3, 57, 94)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((106 &0x7e)<<1)),	//# 77, ticks 3828, elapsed 0, voice: 3 note: 73 velocity 106 event ('note', 3828, 5, 73, 106)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((106 &0x7e)<<1)),	//# 78, ticks 3828, elapsed 0, voice: 1 note: 73 velocity 106 event ('note', 3828, 6, 73, 106)
	1,((( 2 &4)<<5)|( 45 &0x7f)), ((2 &3)|((90 &0x7e)<<1)),	//# 79, ticks 3836, elapsed 1, voice: 2 note: 45 velocity 90 event ('note', 3836, 2, 45, 90)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((97 &0x7e)<<1)),	//# 80, ticks 3840, elapsed 0, voice: 2 note: 57 velocity 97 event ('note', 3840, 1, 57, 97)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 81, ticks 3844, elapsed 0, voice: 0 note: 74 velocity 0 event ('note', 3844, 5, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	9,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 85, ticks 3900, elapsed 9, voice: 2 note: 57 velocity 0 event ('note', 3900, 3, 57, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((103 &0x7e)<<1)),	//# 87, ticks 3912, elapsed 2, voice: 0 note: 74 velocity 103 event ('note', 3912, 8, 74, 103)
	2,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((101 &0x7e)<<1)),	//# 88, ticks 3924, elapsed 2, voice: 2 note: 74 velocity 101 event ('note', 3924, 5, 74, 101)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((101 &0x7e)<<1)),	//# 89, ticks 3924, elapsed 0, voice: 2 note: 74 velocity 101 event ('note', 3924, 6, 74, 101)
	// Note off skipped, note 57 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 91, ticks 3940, elapsed 2, voice: 1 note: 73 velocity 0 event ('note', 3940, 5, 73, 0)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 92, ticks 3940, elapsed 0, voice: 3 note: 73 velocity 0 event ('note', 3940, 6, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	11,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((102 &0x7e)<<1)),	//# 94, ticks 4008, elapsed 11, voice: 1 note: 73 velocity 102 event ('note', 4008, 8, 73, 102)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((88 &0x7e)<<1)),	//# 95, ticks 4012, elapsed 0, voice: 3 note: 47 velocity 88 event ('note', 4012, 2, 47, 88)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((87 &0x7e)<<1)),	//# 96, ticks 4012, elapsed 0, voice: 3 note: 59 velocity 87 event ('note', 4012, 3, 59, 87)
	1,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((77 &0x7e)<<1)),	//# 97, ticks 4020, elapsed 1, voice: 3 note: 62 velocity 77 event ('note', 4020, 7, 62, 77)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((109 &0x7e)<<1)),	//# 98, ticks 4024, elapsed 0, voice: 3 note: 73 velocity 109 event ('note', 4024, 5, 73, 109)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((109 &0x7e)<<1)),	//# 99, ticks 4024, elapsed 0, voice: 2 note: 73 velocity 109 event ('note', 4024, 6, 73, 109)
	1,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((94 &0x7e)<<1)),	//# 100, ticks 4032, elapsed 1, voice: 1 note: 59 velocity 94 event ('note', 4032, 1, 59, 94)
	3,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 101, ticks 4052, elapsed 3, voice: 0 note: 74 velocity 0 event ('note', 4052, 5, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	8,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 106, ticks 4100, elapsed 8, voice: 1 note: 59 velocity 0 event ('note', 4100, 3, 59, 0)
	1,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((103 &0x7e)<<1)),	//# 107, ticks 4108, elapsed 1, voice: 0 note: 71 velocity 103 event ('note', 4108, 8, 71, 103)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((94 &0x7e)<<1)),	//# 108, ticks 4112, elapsed 0, voice: 1 note: 71 velocity 94 event ('note', 4112, 5, 71, 94)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((94 &0x7e)<<1)),	//# 109, ticks 4112, elapsed 0, voice: 1 note: 71 velocity 94 event ('note', 4112, 6, 71, 94)
	// Note off skipped, note 59 not found in channels, probably interrupted
	2,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 111, ticks 4124, elapsed 2, voice: 2 note: 73 velocity 0 event ('note', 4124, 5, 73, 0)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 112, ticks 4124, elapsed 0, voice: 3 note: 73 velocity 0 event ('note', 4124, 6, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	13,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((82 &0x7e)<<1)),	//# 114, ticks 4204, elapsed 13, voice: 2 note: 64 velocity 82 event ('note', 4204, 7, 64, 82)
	0,((( 3 &4)<<5)|( 49 &0x7f)), ((3 &3)|((93 &0x7e)<<1)),	//# 115, ticks 4208, elapsed 0, voice: 3 note: 49 velocity 93 event ('note', 4208, 2, 49, 93)
	0,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((85 &0x7e)<<1)),	//# 116, ticks 4212, elapsed 0, voice: 2 note: 61 velocity 85 event ('note', 4212, 3, 61, 85)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((101 &0x7e)<<1)),	//# 117, ticks 4212, elapsed 0, voice: 2 note: 69 velocity 101 event ('note', 4212, 5, 69, 101)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((101 &0x7e)<<1)),	//# 118, ticks 4212, elapsed 0, voice: 3 note: 69 velocity 101 event ('note', 4212, 6, 69, 101)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((101 &0x7e)<<1)),	//# 119, ticks 4212, elapsed 0, voice: 1 note: 69 velocity 101 event ('note', 4212, 8, 69, 101)
	1,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 120, ticks 4220, elapsed 1, voice: 0 note: 71 velocity 0 event ('note', 4220, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((95 &0x7e)<<1)),	//# 122, ticks 4224, elapsed 0, voice: 0 note: 61 velocity 95 event ('note', 4224, 1, 61, 95)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 49 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	11,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 126, ticks 4292, elapsed 11, voice: 0 note: 61 velocity 0 event ('note', 4292, 1, 61, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((96 &0x7e)<<1)),	//# 128, ticks 4304, elapsed 2, voice: 0 note: 67 velocity 96 event ('note', 4304, 8, 67, 96)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((87 &0x7e)<<1)),	//# 129, ticks 4308, elapsed 0, voice: 0 note: 67 velocity 87 event ('note', 4308, 5, 67, 87)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((87 &0x7e)<<1)),	//# 130, ticks 4308, elapsed 0, voice: 0 note: 67 velocity 87 event ('note', 4308, 6, 67, 87)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 131, ticks 4312, elapsed 0, voice: 1 note: 69 velocity 0 event ('note', 4312, 5, 69, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 132, ticks 4312, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 4312, 6, 69, 0)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 133, ticks 4312, elapsed 0, voice: 3 note: 69 velocity 0 event ('note', 4312, 8, 69, 0)
	14,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((72 &0x7e)<<1)),	//# 134, ticks 4396, elapsed 14, voice: 1 note: 61 velocity 72 event ('note', 4396, 7, 61, 72)
	1,((( 2 &4)<<5)|( 45 &0x7f)), ((2 &3)|((88 &0x7e)<<1)),	//# 135, ticks 4404, elapsed 1, voice: 2 note: 45 velocity 88 event ('note', 4404, 2, 45, 88)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((124 &0x7e)<<1)),	//# 136, ticks 4404, elapsed 0, voice: 3 note: 66 velocity 124 event ('note', 4404, 8, 66, 124)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((76 &0x7e)<<1)),	//# 137, ticks 4408, elapsed 0, voice: 1 note: 57 velocity 76 event ('note', 4408, 3, 57, 76)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((106 &0x7e)<<1)),	//# 138, ticks 4408, elapsed 0, voice: 1 note: 66 velocity 106 event ('note', 4408, 5, 66, 106)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((106 &0x7e)<<1)),	//# 139, ticks 4408, elapsed 0, voice: 0 note: 66 velocity 106 event ('note', 4408, 6, 66, 106)
	1,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((92 &0x7e)<<1)),	//# 140, ticks 4416, elapsed 1, voice: 2 note: 57 velocity 92 event ('note', 4416, 1, 57, 92)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	11,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 144, ticks 4480, elapsed 11, voice: 2 note: 57 velocity 0 event ('note', 4480, 1, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	4,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((74 &0x7e)<<1)),	//# 148, ticks 4504, elapsed 4, voice: 2 note: 64 velocity 74 event ('note', 4504, 5, 64, 74)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((74 &0x7e)<<1)),	//# 149, ticks 4504, elapsed 0, voice: 2 note: 64 velocity 74 event ('note', 4504, 6, 64, 74)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((92 &0x7e)<<1)),	//# 150, ticks 4504, elapsed 0, voice: 2 note: 64 velocity 92 event ('note', 4504, 8, 64, 92)
	2,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 151, ticks 4520, elapsed 2, voice: 0 note: 66 velocity 0 event ('note', 4520, 5, 66, 0)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 152, ticks 4520, elapsed 0, voice: 1 note: 66 velocity 0 event ('note', 4520, 6, 66, 0)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 153, ticks 4520, elapsed 0, voice: 3 note: 66 velocity 0 event ('note', 4520, 8, 66, 0)
	11,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((68 &0x7e)<<1)),	//# 154, ticks 4584, elapsed 11, voice: 0 note: 62 velocity 68 event ('note', 4584, 7, 62, 68)
	2,((( 1 &4)<<5)|( 42 &0x7f)), ((1 &3)|((97 &0x7e)<<1)),	//# 155, ticks 4600, elapsed 2, voice: 1 note: 42 velocity 97 event ('note', 4600, 2, 42, 97)
	0,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((95 &0x7e)<<1)),	//# 156, ticks 4600, elapsed 0, voice: 3 note: 54 velocity 95 event ('note', 4600, 3, 54, 95)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((83 &0x7e)<<1)),	//# 157, ticks 4600, elapsed 0, voice: 0 note: 62 velocity 83 event ('note', 4600, 5, 62, 83)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((83 &0x7e)<<1)),	//# 158, ticks 4600, elapsed 0, voice: 0 note: 62 velocity 83 event ('note', 4600, 6, 62, 83)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((97 &0x7e)<<1)),	//# 159, ticks 4600, elapsed 0, voice: 0 note: 62 velocity 97 event ('note', 4600, 8, 62, 97)
	1,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((99 &0x7e)<<1)),	//# 160, ticks 4608, elapsed 1, voice: 2 note: 54 velocity 99 event ('note', 4608, 1, 54, 99)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	7,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 164, ticks 4652, elapsed 7, voice: 0 note: 62 velocity 0 event ('note', 4652, 5, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	3,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 168, ticks 4672, elapsed 3, voice: 2 note: 54 velocity 0 event ('note', 4672, 3, 54, 0)
	1,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 169, ticks 4680, elapsed 1, voice: 3 note: 54 velocity 0 event ('note', 4680, 1, 54, 0)
	0,((( 1 &4)<<5)|( 42 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 170, ticks 4680, elapsed 0, voice: 1 note: 42 velocity 0 event ('note', 4680, 2, 42, 0)
	1,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((97 &0x7e)<<1)),	//# 171, ticks 4688, elapsed 1, voice: 0 note: 62 velocity 97 event ('note', 4688, 8, 62, 97)
	2,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((94 &0x7e)<<1)),	//# 172, ticks 4704, elapsed 2, voice: 1 note: 62 velocity 94 event ('note', 4704, 5, 62, 94)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((94 &0x7e)<<1)),	//# 173, ticks 4704, elapsed 0, voice: 2 note: 62 velocity 94 event ('note', 4704, 6, 62, 94)
	12,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((76 &0x7e)<<1)),	//# 174, ticks 4776, elapsed 12, voice: 3 note: 57 velocity 76 event ('note', 4776, 7, 57, 76)
	1,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((103 &0x7e)<<1)),	//# 175, ticks 4784, elapsed 1, voice: 3 note: 66 velocity 103 event ('note', 4784, 8, 66, 103)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((91 &0x7e)<<1)),	//# 176, ticks 4788, elapsed 0, voice: 1 note: 40 velocity 91 event ('note', 4788, 2, 40, 91)
	0,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((92 &0x7e)<<1)),	//# 177, ticks 4792, elapsed 0, voice: 1 note: 52 velocity 92 event ('note', 4792, 3, 52, 92)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((95 &0x7e)<<1)),	//# 178, ticks 4792, elapsed 0, voice: 1 note: 66 velocity 95 event ('note', 4792, 5, 66, 95)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((95 &0x7e)<<1)),	//# 179, ticks 4792, elapsed 0, voice: 2 note: 66 velocity 95 event ('note', 4792, 6, 66, 95)
	1,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((90 &0x7e)<<1)),	//# 180, ticks 4800, elapsed 1, voice: 1 note: 52 velocity 90 event ('note', 4800, 1, 52, 90)
	4,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 181, ticks 4824, elapsed 4, voice: 0 note: 62 velocity 0 event ('note', 4824, 5, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	4,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 184, ticks 4852, elapsed 4, voice: 2 note: 66 velocity 0 event ('note', 4852, 5, 66, 0)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 185, ticks 4852, elapsed 0, voice: 3 note: 66 velocity 0 event ('note', 4852, 6, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 187, ticks 4864, elapsed 2, voice: 1 note: 52 velocity 0 event ('note', 4864, 3, 52, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 40 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((103 &0x7e)<<1)),	//# 191, ticks 4880, elapsed 2, voice: 0 note: 66 velocity 103 event ('note', 4880, 8, 66, 103)
	1,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((101 &0x7e)<<1)),	//# 192, ticks 4888, elapsed 1, voice: 1 note: 66 velocity 101 event ('note', 4888, 5, 66, 101)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((101 &0x7e)<<1)),	//# 193, ticks 4888, elapsed 0, voice: 2 note: 66 velocity 101 event ('note', 4888, 6, 66, 101)
	15,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((72 &0x7e)<<1)),	//# 194, ticks 4976, elapsed 15, voice: 3 note: 62 velocity 72 event ('note', 4976, 7, 62, 72)
	0,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((94 &0x7e)<<1)),	//# 195, ticks 4980, elapsed 0, voice: 3 note: 54 velocity 94 event ('note', 4980, 3, 54, 94)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((93 &0x7e)<<1)),	//# 196, ticks 4980, elapsed 0, voice: 3 note: 69 velocity 93 event ('note', 4980, 5, 69, 93)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((93 &0x7e)<<1)),	//# 197, ticks 4980, elapsed 0, voice: 3 note: 69 velocity 93 event ('note', 4980, 6, 69, 93)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((96 &0x7e)<<1)),	//# 198, ticks 4980, elapsed 0, voice: 3 note: 69 velocity 96 event ('note', 4980, 8, 69, 96)
	0,((( 3 &4)<<5)|( 42 &0x7f)), ((3 &3)|((99 &0x7e)<<1)),	//# 199, ticks 4984, elapsed 0, voice: 3 note: 42 velocity 99 event ('note', 4984, 2, 42, 99)
	1,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((96 &0x7e)<<1)),	//# 200, ticks 4992, elapsed 1, voice: 3 note: 54 velocity 96 event ('note', 4992, 1, 54, 96)
	3,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 201, ticks 5012, elapsed 3, voice: 0 note: 66 velocity 0 event ('note', 5012, 5, 66, 0)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 202, ticks 5012, elapsed 0, voice: 1 note: 66 velocity 0 event ('note', 5012, 6, 66, 0)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 203, ticks 5012, elapsed 0, voice: 2 note: 66 velocity 0 event ('note', 5012, 8, 66, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	8,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 207, ticks 5060, elapsed 8, voice: 3 note: 54 velocity 0 event ('note', 5060, 3, 54, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 42 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((93 &0x7e)<<1)),	//# 211, ticks 5076, elapsed 2, voice: 0 note: 69 velocity 93 event ('note', 5076, 5, 69, 93)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((93 &0x7e)<<1)),	//# 212, ticks 5076, elapsed 0, voice: 1 note: 69 velocity 93 event ('note', 5076, 6, 69, 93)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((111 &0x7e)<<1)),	//# 213, ticks 5076, elapsed 0, voice: 2 note: 69 velocity 111 event ('note', 5076, 8, 69, 111)
	15,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 214, ticks 5164, elapsed 15, voice: 3 note: 74 velocity 100 event ('note', 5164, 8, 74, 100)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((73 &0x7e)<<1)),	//# 215, ticks 5168, elapsed 0, voice: 0 note: 66 velocity 73 event ('note', 5168, 7, 66, 73)
	1,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((92 &0x7e)<<1)),	//# 216, ticks 5176, elapsed 1, voice: 0 note: 38 velocity 92 event ('note', 5176, 2, 38, 92)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 217, ticks 5176, elapsed 0, voice: 0 note: 74 velocity 88 event ('note', 5176, 5, 74, 88)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 218, ticks 5176, elapsed 0, voice: 0 note: 74 velocity 88 event ('note', 5176, 6, 74, 88)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((90 &0x7e)<<1)),	//# 219, ticks 5180, elapsed 0, voice: 0 note: 50 velocity 90 event ('note', 5180, 3, 50, 90)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((94 &0x7e)<<1)),	//# 220, ticks 5184, elapsed 0, voice: 0 note: 50 velocity 94 event ('note', 5184, 1, 50, 94)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 221, ticks 5184, elapsed 0, voice: 1 note: 69 velocity 0 event ('note', 5184, 8, 69, 0)
	2,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 222, ticks 5200, elapsed 2, voice: 2 note: 69 velocity 0 event ('note', 5200, 5, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	4,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 224, ticks 5224, elapsed 4, voice: 3 note: 74 velocity 0 event ('note', 5224, 5, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	5,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((95 &0x7e)<<1)),	//# 228, ticks 5256, elapsed 5, voice: 1 note: 74 velocity 95 event ('note', 5256, 8, 74, 95)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 229, ticks 5260, elapsed 0, voice: 0 note: 50 velocity 0 event ('note', 5260, 1, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((94 &0x7e)<<1)),	//# 232, ticks 5268, elapsed 1, voice: 0 note: 74 velocity 94 event ('note', 5268, 5, 74, 94)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((94 &0x7e)<<1)),	//# 233, ticks 5268, elapsed 0, voice: 2 note: 74 velocity 94 event ('note', 5268, 6, 74, 94)
	14,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 234, ticks 5352, elapsed 14, voice: 0 note: 74 velocity 0 event ('note', 5352, 8, 74, 0)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((98 &0x7e)<<1)),	//# 235, ticks 5352, elapsed 0, voice: 0 note: 76 velocity 98 event ('note', 5352, 8, 76, 98)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((58 &0x7e)<<1)),	//# 236, ticks 5356, elapsed 0, voice: 3 note: 61 velocity 58 event ('note', 5356, 7, 61, 58)
	2,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((69 &0x7e)<<1)),	//# 237, ticks 5368, elapsed 2, voice: 3 note: 76 velocity 69 event ('note', 5368, 5, 76, 69)
	0,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((69 &0x7e)<<1)),	//# 238, ticks 5368, elapsed 0, voice: 3 note: 76 velocity 69 event ('note', 5368, 6, 76, 69)
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((84 &0x7e)<<1)),	//# 239, ticks 5372, elapsed 0, voice: 3 note: 45 velocity 84 event ('note', 5372, 2, 45, 84)
	0,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((90 &0x7e)<<1)),	//# 240, ticks 5372, elapsed 0, voice: 3 note: 57 velocity 90 event ('note', 5372, 3, 57, 90)
	0,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((85 &0x7e)<<1)),	//# 241, ticks 5376, elapsed 0, voice: 3 note: 57 velocity 85 event ('note', 5376, 1, 57, 85)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 242, ticks 5376, elapsed 0, voice: 1 note: 74 velocity 0 event ('note', 5376, 5, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 243, ticks 5376, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 5376, 6, 74, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	13,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 246, ticks 5456, elapsed 13, voice: 3 note: 57 velocity 0 event ('note', 5456, 3, 57, 0)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 247, ticks 5460, elapsed 0, voice: 0 note: 76 velocity 0 event ('note', 5460, 8, 76, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	15,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 251, ticks 5548, elapsed 15, voice: 0 note: 47 velocity 88 event ('note', 5548, 2, 47, 88)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((85 &0x7e)<<1)),	//# 252, ticks 5552, elapsed 0, voice: 1 note: 69 velocity 85 event ('note', 5552, 8, 69, 85)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((93 &0x7e)<<1)),	//# 253, ticks 5556, elapsed 0, voice: 2 note: 59 velocity 93 event ('note', 5556, 3, 59, 93)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((72 &0x7e)<<1)),	//# 254, ticks 5556, elapsed 0, voice: 3 note: 62 velocity 72 event ('note', 5556, 7, 62, 72)
	2,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((84 &0x7e)<<1)),	//# 255, ticks 5568, elapsed 2, voice: 3 note: 59 velocity 84 event ('note', 5568, 1, 59, 84)
	1,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((94 &0x7e)<<1)),	//# 256, ticks 5576, elapsed 1, voice: 3 note: 69 velocity 94 event ('note', 5576, 5, 69, 94)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((94 &0x7e)<<1)),	//# 257, ticks 5576, elapsed 0, voice: 1 note: 69 velocity 94 event ('note', 5576, 6, 69, 94)
	10,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 258, ticks 5636, elapsed 10, voice: 2 note: 59 velocity 0 event ('note', 5636, 3, 59, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 260, ticks 5640, elapsed 0, voice: 0 note: 47 velocity 0 event ('note', 5640, 2, 47, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	6,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 262, ticks 5680, elapsed 6, voice: 1 note: 69 velocity 0 event ('note', 5680, 8, 69, 0)
	4,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 263, ticks 5704, elapsed 4, voice: 3 note: 69 velocity 0 event ('note', 5704, 5, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	7,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((76 &0x7e)<<1)),	//# 265, ticks 5748, elapsed 7, voice: 0 note: 64 velocity 76 event ('note', 5748, 7, 64, 76)
	0,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 266, ticks 5752, elapsed 0, voice: 1 note: 61 velocity 100 event ('note', 5752, 3, 61, 100)
	0,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((94 &0x7e)<<1)),	//# 267, ticks 5756, elapsed 0, voice: 2 note: 49 velocity 94 event ('note', 5756, 2, 49, 94)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((94 &0x7e)<<1)),	//# 268, ticks 5760, elapsed 0, voice: 3 note: 61 velocity 94 event ('note', 5760, 1, 61, 94)
	11,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 269, ticks 5824, elapsed 11, voice: 1 note: 61 velocity 0 event ('note', 5824, 3, 61, 0)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 270, ticks 5828, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 5828, 7, 64, 0)
	1,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 271, ticks 5836, elapsed 1, voice: 3 note: 61 velocity 0 event ('note', 5836, 1, 61, 0)
	0,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 272, ticks 5840, elapsed 0, voice: 2 note: 49 velocity 0 event ('note', 5840, 2, 49, 0)
	16,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((66 &0x7e)<<1)),	//# 273, ticks 5936, elapsed 16, voice: 0 note: 61 velocity 66 event ('note', 5936, 7, 61, 66)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((94 &0x7e)<<1)),	//# 274, ticks 5940, elapsed 0, voice: 1 note: 57 velocity 94 event ('note', 5940, 3, 57, 94)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((86 &0x7e)<<1)),	//# 275, ticks 5944, elapsed 0, voice: 2 note: 76 velocity 86 event ('note', 5944, 5, 76, 86)
	0,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((86 &0x7e)<<1)),	//# 276, ticks 5944, elapsed 0, voice: 3 note: 76 velocity 86 event ('note', 5944, 6, 76, 86)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((98 &0x7e)<<1)),	//# 277, ticks 5948, elapsed 0, voice: 0 note: 45 velocity 98 event ('note', 5948, 2, 45, 98)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((92 &0x7e)<<1)),	//# 278, ticks 5952, elapsed 0, voice: 2 note: 57 velocity 92 event ('note', 5952, 1, 57, 92)
	0,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((95 &0x7e)<<1)),	//# 279, ticks 5952, elapsed 0, voice: 3 note: 76 velocity 95 event ('note', 5952, 8, 76, 95)
	13,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 280, ticks 6028, elapsed 13, voice: 1 note: 57 velocity 0 event ('note', 6028, 3, 57, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 282, ticks 6036, elapsed 1, voice: 2 note: 57 velocity 0 event ('note', 6036, 1, 57, 0)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 283, ticks 6040, elapsed 0, voice: 0 note: 45 velocity 0 event ('note', 6040, 2, 45, 0)
	0,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 284, ticks 6044, elapsed 0, voice: 3 note: 76 velocity 0 event ('note', 6044, 8, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	13,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((74 &0x7e)<<1)),	//# 287, ticks 6124, elapsed 13, voice: 0 note: 62 velocity 74 event ('note', 6124, 7, 62, 74)
	2,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((98 &0x7e)<<1)),	//# 288, ticks 6140, elapsed 2, voice: 1 note: 78 velocity 98 event ('note', 6140, 8, 78, 98)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((93 &0x7e)<<1)),	//# 289, ticks 6144, elapsed 0, voice: 2 note: 62 velocity 93 event ('note', 6144, 1, 62, 93)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((94 &0x7e)<<1)),	//# 290, ticks 6144, elapsed 0, voice: 3 note: 50 velocity 94 event ('note', 6144, 2, 50, 94)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((95 &0x7e)<<1)),	//# 291, ticks 6144, elapsed 0, voice: 0 note: 62 velocity 95 event ('note', 6144, 3, 62, 95)
	2,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((88 &0x7e)<<1)),	//# 292, ticks 6156, elapsed 2, voice: 2 note: 78 velocity 88 event ('note', 6156, 5, 78, 88)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((88 &0x7e)<<1)),	//# 293, ticks 6156, elapsed 0, voice: 2 note: 78 velocity 88 event ('note', 6156, 6, 78, 88)
	9,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 294, ticks 6212, elapsed 9, voice: 0 note: 62 velocity 0 event ('note', 6212, 3, 62, 0)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 295, ticks 6212, elapsed 0, voice: 1 note: 78 velocity 0 event ('note', 6212, 8, 78, 0)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 296, ticks 6216, elapsed 0, voice: 2 note: 78 velocity 0 event ('note', 6216, 5, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 299, ticks 6220, elapsed 0, voice: 3 note: 50 velocity 0 event ('note', 6220, 2, 50, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((99 &0x7e)<<1)),	//# 301, ticks 6236, elapsed 2, voice: 0 note: 78 velocity 99 event ('note', 6236, 8, 78, 99)
	2,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((113 &0x7e)<<1)),	//# 302, ticks 6252, elapsed 2, voice: 1 note: 78 velocity 113 event ('note', 6252, 5, 78, 113)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((113 &0x7e)<<1)),	//# 303, ticks 6252, elapsed 0, voice: 2 note: 78 velocity 113 event ('note', 6252, 6, 78, 113)
	11,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((84 &0x7e)<<1)),	//# 304, ticks 6320, elapsed 11, voice: 3 note: 69 velocity 84 event ('note', 6320, 7, 69, 84)
	0,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((99 &0x7e)<<1)),	//# 305, ticks 6320, elapsed 0, voice: 3 note: 76 velocity 99 event ('note', 6320, 8, 76, 99)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((94 &0x7e)<<1)),	//# 306, ticks 6324, elapsed 0, voice: 0 note: 61 velocity 94 event ('note', 6324, 3, 61, 94)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((93 &0x7e)<<1)),	//# 307, ticks 6328, elapsed 0, voice: 0 note: 49 velocity 93 event ('note', 6328, 2, 49, 93)
	1,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((97 &0x7e)<<1)),	//# 308, ticks 6336, elapsed 1, voice: 0 note: 61 velocity 97 event ('note', 6336, 1, 61, 97)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 309, ticks 6336, elapsed 0, voice: 0 note: 76 velocity 88 event ('note', 6336, 5, 76, 88)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 310, ticks 6336, elapsed 0, voice: 0 note: 76 velocity 88 event ('note', 6336, 6, 76, 88)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 311, ticks 6340, elapsed 0, voice: 1 note: 78 velocity 0 event ('note', 6340, 5, 78, 0)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 312, ticks 6340, elapsed 0, voice: 2 note: 78 velocity 0 event ('note', 6340, 6, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	7,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 314, ticks 6384, elapsed 7, voice: 0 note: 76 velocity 0 event ('note', 6384, 8, 76, 0)
	2,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 315, ticks 6396, elapsed 2, voice: 3 note: 76 velocity 0 event ('note', 6396, 5, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 49 not found in channels, probably interrupted
	3,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((95 &0x7e)<<1)),	//# 320, ticks 6416, elapsed 3, voice: 0 note: 76 velocity 95 event ('note', 6416, 8, 76, 95)
	// Note off skipped, note 61 not found in channels, probably interrupted
	1,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 322, ticks 6424, elapsed 1, voice: 1 note: 76 velocity 89 event ('note', 6424, 5, 76, 89)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((89 &0x7e)<<1)),	//# 323, ticks 6424, elapsed 0, voice: 2 note: 76 velocity 89 event ('note', 6424, 6, 76, 89)
	14,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((85 &0x7e)<<1)),	//# 324, ticks 6508, elapsed 14, voice: 3 note: 74 velocity 85 event ('note', 6508, 7, 74, 85)
	0,((( 3 &4)<<5)|( 79 &0x7f)), ((3 &3)|((96 &0x7e)<<1)),	//# 325, ticks 6512, elapsed 0, voice: 3 note: 79 velocity 96 event ('note', 6512, 8, 79, 96)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((96 &0x7e)<<1)),	//# 326, ticks 6516, elapsed 0, voice: 1 note: 79 velocity 96 event ('note', 6516, 5, 79, 96)
	0,((( 2 &4)<<5)|( 79 &0x7f)), ((2 &3)|((96 &0x7e)<<1)),	//# 327, ticks 6516, elapsed 0, voice: 2 note: 79 velocity 96 event ('note', 6516, 6, 79, 96)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((93 &0x7e)<<1)),	//# 328, ticks 6520, elapsed 0, voice: 0 note: 59 velocity 93 event ('note', 6520, 3, 59, 93)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((91 &0x7e)<<1)),	//# 329, ticks 6524, elapsed 0, voice: 0 note: 47 velocity 91 event ('note', 6524, 2, 47, 91)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((98 &0x7e)<<1)),	//# 330, ticks 6528, elapsed 0, voice: 0 note: 59 velocity 98 event ('note', 6528, 1, 59, 98)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	9,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 334, ticks 6580, elapsed 9, voice: 1 note: 79 velocity 0 event ('note', 6580, 5, 79, 0)
	0,((( 2 &4)<<5)|( 79 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 335, ticks 6580, elapsed 0, voice: 2 note: 79 velocity 0 event ('note', 6580, 6, 79, 0)
	0,((( 3 &4)<<5)|( 79 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 336, ticks 6580, elapsed 0, voice: 3 note: 79 velocity 0 event ('note', 6580, 8, 79, 0)
	2,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 337, ticks 6596, elapsed 2, voice: 0 note: 59 velocity 0 event ('note', 6596, 3, 59, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((107 &0x7e)<<1)),	//# 339, ticks 6612, elapsed 2, voice: 0 note: 79 velocity 107 event ('note', 6612, 8, 79, 107)
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	1,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((92 &0x7e)<<1)),	//# 342, ticks 6620, elapsed 1, voice: 1 note: 79 velocity 92 event ('note', 6620, 5, 79, 92)
	0,((( 2 &4)<<5)|( 79 &0x7f)), ((2 &3)|((92 &0x7e)<<1)),	//# 343, ticks 6620, elapsed 0, voice: 2 note: 79 velocity 92 event ('note', 6620, 6, 79, 92)
	13,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((94 &0x7e)<<1)),	//# 344, ticks 6700, elapsed 13, voice: 3 note: 78 velocity 94 event ('note', 6700, 8, 78, 94)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 345, ticks 6704, elapsed 0, voice: 1 note: 57 velocity 89 event ('note', 6704, 3, 57, 89)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((74 &0x7e)<<1)),	//# 346, ticks 6704, elapsed 0, voice: 1 note: 73 velocity 74 event ('note', 6704, 7, 73, 74)
	2,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((85 &0x7e)<<1)),	//# 347, ticks 6716, elapsed 2, voice: 1 note: 78 velocity 85 event ('note', 6716, 5, 78, 85)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((85 &0x7e)<<1)),	//# 348, ticks 6716, elapsed 0, voice: 1 note: 78 velocity 85 event ('note', 6716, 6, 78, 85)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((90 &0x7e)<<1)),	//# 349, ticks 6720, elapsed 0, voice: 1 note: 57 velocity 90 event ('note', 6720, 1, 57, 90)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 350, ticks 6724, elapsed 0, voice: 1 note: 45 velocity 89 event ('note', 6724, 2, 45, 89)
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 351, ticks 6728, elapsed 0, voice: 0 note: 79 velocity 0 event ('note', 6728, 8, 79, 0)
	1,((( 2 &4)<<5)|( 79 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 352, ticks 6736, elapsed 1, voice: 2 note: 79 velocity 0 event ('note', 6736, 5, 79, 0)
	// Note off skipped, note 79 not found in channels, probably interrupted
	6,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 354, ticks 6776, elapsed 6, voice: 3 note: 78 velocity 0 event ('note', 6776, 8, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	4,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((95 &0x7e)<<1)),	//# 360, ticks 6804, elapsed 4, voice: 0 note: 78 velocity 95 event ('note', 6804, 8, 78, 95)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 361, ticks 6808, elapsed 0, voice: 1 note: 45 velocity 0 event ('note', 6808, 2, 45, 0)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 362, ticks 6812, elapsed 0, voice: 1 note: 78 velocity 89 event ('note', 6812, 5, 78, 89)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((89 &0x7e)<<1)),	//# 363, ticks 6812, elapsed 0, voice: 2 note: 78 velocity 89 event ('note', 6812, 6, 78, 89)
	14,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((73 &0x7e)<<1)),	//# 364, ticks 6896, elapsed 14, voice: 3 note: 74 velocity 73 event ('note', 6896, 7, 74, 73)
	0,((( 3 &4)<<5)|( 83 &0x7f)), ((3 &3)|((84 &0x7e)<<1)),	//# 365, ticks 6896, elapsed 0, voice: 3 note: 83 velocity 84 event ('note', 6896, 8, 83, 84)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((93 &0x7e)<<1)),	//# 366, ticks 6900, elapsed 0, voice: 3 note: 55 velocity 93 event ('note', 6900, 3, 55, 93)
	0,((( 1 &4)<<5)|( 83 &0x7f)), ((1 &3)|((86 &0x7e)<<1)),	//# 367, ticks 6904, elapsed 0, voice: 1 note: 83 velocity 86 event ('note', 6904, 5, 83, 86)
	0,((( 1 &4)<<5)|( 83 &0x7f)), ((1 &3)|((86 &0x7e)<<1)),	//# 368, ticks 6904, elapsed 0, voice: 1 note: 83 velocity 86 event ('note', 6904, 6, 83, 86)
	1,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((90 &0x7e)<<1)),	//# 369, ticks 6912, elapsed 1, voice: 1 note: 55 velocity 90 event ('note', 6912, 1, 55, 90)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((88 &0x7e)<<1)),	//# 370, ticks 6916, elapsed 0, voice: 2 note: 43 velocity 88 event ('note', 6916, 2, 43, 88)
	1,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 371, ticks 6924, elapsed 1, voice: 0 note: 78 velocity 0 event ('note', 6924, 5, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	10,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 376, ticks 6984, elapsed 10, voice: 1 note: 55 velocity 0 event ('note', 6984, 3, 55, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	2,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 379, ticks 7000, elapsed 2, voice: 3 note: 55 velocity 0 event ('note', 7000, 1, 55, 0)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 380, ticks 7004, elapsed 0, voice: 2 note: 43 velocity 0 event ('note', 7004, 2, 43, 0)
	0,((( 0 &4)<<5)|( 83 &0x7f)), ((0 &3)|((85 &0x7e)<<1)),	//# 381, ticks 7004, elapsed 0, voice: 0 note: 83 velocity 85 event ('note', 7004, 5, 83, 85)
	0,((( 1 &4)<<5)|( 83 &0x7f)), ((1 &3)|((85 &0x7e)<<1)),	//# 382, ticks 7004, elapsed 0, voice: 1 note: 83 velocity 85 event ('note', 7004, 6, 83, 85)
	0,((( 2 &4)<<5)|( 83 &0x7f)), ((2 &3)|((90 &0x7e)<<1)),	//# 383, ticks 7008, elapsed 0, voice: 2 note: 83 velocity 90 event ('note', 7008, 8, 83, 90)
	14,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((77 &0x7e)<<1)),	//# 384, ticks 7092, elapsed 14, voice: 3 note: 62 velocity 77 event ('note', 7092, 7, 62, 77)
	0,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((98 &0x7e)<<1)),	//# 385, ticks 7096, elapsed 0, voice: 3 note: 54 velocity 98 event ('note', 7096, 3, 54, 98)
	0,((( 0 &4)<<5)|( 42 &0x7f)), ((0 &3)|((97 &0x7e)<<1)),	//# 386, ticks 7100, elapsed 0, voice: 0 note: 42 velocity 97 event ('note', 7100, 2, 42, 97)
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((94 &0x7e)<<1)),	//# 387, ticks 7100, elapsed 0, voice: 1 note: 81 velocity 94 event ('note', 7100, 5, 81, 94)
	0,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((94 &0x7e)<<1)),	//# 388, ticks 7100, elapsed 0, voice: 2 note: 81 velocity 94 event ('note', 7100, 6, 81, 94)
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((101 &0x7e)<<1)),	//# 389, ticks 7100, elapsed 0, voice: 1 note: 81 velocity 101 event ('note', 7100, 8, 81, 101)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((95 &0x7e)<<1)),	//# 390, ticks 7104, elapsed 0, voice: 2 note: 54 velocity 95 event ('note', 7104, 1, 54, 95)
	// Note off skipped, note 83 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	9,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 394, ticks 7160, elapsed 9, voice: 1 note: 81 velocity 0 event ('note', 7160, 5, 81, 0)
	// Note off skipped, note 81 not found in channels, probably interrupted
	2,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 396, ticks 7172, elapsed 2, voice: 2 note: 54 velocity 0 event ('note', 7172, 3, 54, 0)
	// Note off skipped, note 81 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 42 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 398, ticks 7180, elapsed 1, voice: 0 note: 42 velocity 0 event ('note', 7180, 2, 42, 0)
	0,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 399, ticks 7184, elapsed 0, voice: 3 note: 54 velocity 0 event ('note', 7184, 1, 54, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 401, ticks 7196, elapsed 2, voice: 0 note: 81 velocity 88 event ('note', 7196, 5, 81, 88)
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 402, ticks 7196, elapsed 0, voice: 1 note: 81 velocity 88 event ('note', 7196, 6, 81, 88)
	1,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((97 &0x7e)<<1)),	//# 403, ticks 7204, elapsed 1, voice: 2 note: 81 velocity 97 event ('note', 7204, 8, 81, 97)
	12,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((82 &0x7e)<<1)),	//# 404, ticks 7276, elapsed 12, voice: 3 note: 67 velocity 82 event ('note', 7276, 7, 67, 82)
	2,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((91 &0x7e)<<1)),	//# 405, ticks 7288, elapsed 2, voice: 3 note: 40 velocity 91 event ('note', 7288, 2, 40, 91)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((92 &0x7e)<<1)),	//# 406, ticks 7292, elapsed 0, voice: 0 note: 52 velocity 92 event ('note', 7292, 3, 52, 92)
	0,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((91 &0x7e)<<1)),	//# 407, ticks 7296, elapsed 0, voice: 1 note: 52 velocity 91 event ('note', 7296, 1, 52, 91)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((87 &0x7e)<<1)),	//# 408, ticks 7296, elapsed 0, voice: 1 note: 73 velocity 87 event ('note', 7296, 8, 73, 87)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((101 &0x7e)<<1)),	//# 409, ticks 7300, elapsed 0, voice: 1 note: 73 velocity 101 event ('note', 7300, 5, 73, 101)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((101 &0x7e)<<1)),	//# 410, ticks 7300, elapsed 0, voice: 3 note: 73 velocity 101 event ('note', 7300, 6, 73, 101)
	2,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 411, ticks 7316, elapsed 2, voice: 2 note: 81 velocity 0 event ('note', 7316, 8, 81, 0)
	// Note off skipped, note 81 not found in channels, probably interrupted
	// Note off skipped, note 81 not found in channels, probably interrupted
	6,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 414, ticks 7352, elapsed 6, voice: 1 note: 73 velocity 0 event ('note', 7352, 8, 73, 0)
	2,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 415, ticks 7364, elapsed 2, voice: 3 note: 73 velocity 0 event ('note', 7364, 5, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 417, ticks 7368, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 7368, 3, 52, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 40 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((90 &0x7e)<<1)),	//# 421, ticks 7380, elapsed 2, voice: 0 note: 73 velocity 90 event ('note', 7380, 8, 73, 90)
	2,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((85 &0x7e)<<1)),	//# 422, ticks 7396, elapsed 2, voice: 1 note: 73 velocity 85 event ('note', 7396, 5, 73, 85)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((85 &0x7e)<<1)),	//# 423, ticks 7396, elapsed 0, voice: 2 note: 73 velocity 85 event ('note', 7396, 6, 73, 85)
	11,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((84 &0x7e)<<1)),	//# 424, ticks 7464, elapsed 11, voice: 3 note: 74 velocity 84 event ('note', 7464, 8, 74, 84)
	2,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((85 &0x7e)<<1)),	//# 425, ticks 7476, elapsed 2, voice: 3 note: 66 velocity 85 event ('note', 7476, 7, 66, 85)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((92 &0x7e)<<1)),	//# 426, ticks 7480, elapsed 0, voice: 1 note: 50 velocity 92 event ('note', 7480, 3, 50, 92)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((93 &0x7e)<<1)),	//# 427, ticks 7484, elapsed 0, voice: 2 note: 38 velocity 93 event ('note', 7484, 2, 38, 93)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((89 &0x7e)<<1)),	//# 428, ticks 7484, elapsed 0, voice: 3 note: 74 velocity 89 event ('note', 7484, 5, 74, 89)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((89 &0x7e)<<1)),	//# 429, ticks 7484, elapsed 0, voice: 3 note: 74 velocity 89 event ('note', 7484, 6, 74, 89)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((89 &0x7e)<<1)),	//# 430, ticks 7488, elapsed 0, voice: 3 note: 50 velocity 89 event ('note', 7488, 1, 50, 89)
	2,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 431, ticks 7504, elapsed 2, voice: 0 note: 73 velocity 0 event ('note', 7504, 8, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	7,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 435, ticks 7548, elapsed 7, voice: 1 note: 50 velocity 0 event ('note', 7548, 3, 50, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	2,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 438, ticks 7564, elapsed 2, voice: 2 note: 38 velocity 0 event ('note', 7564, 2, 38, 0)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((97 &0x7e)<<1)),	//# 439, ticks 7568, elapsed 0, voice: 0 note: 74 velocity 97 event ('note', 7568, 8, 74, 97)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 440, ticks 7572, elapsed 0, voice: 3 note: 50 velocity 0 event ('note', 7572, 1, 50, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((87 &0x7e)<<1)),	//# 442, ticks 7584, elapsed 2, voice: 1 note: 74 velocity 87 event ('note', 7584, 5, 74, 87)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((87 &0x7e)<<1)),	//# 443, ticks 7584, elapsed 0, voice: 2 note: 74 velocity 87 event ('note', 7584, 6, 74, 87)
	13,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((70 &0x7e)<<1)),	//# 444, ticks 7664, elapsed 13, voice: 3 note: 64 velocity 70 event ('note', 7664, 7, 64, 70)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((98 &0x7e)<<1)),	//# 445, ticks 7668, elapsed 0, voice: 3 note: 67 velocity 98 event ('note', 7668, 8, 67, 98)
	0,((( 1 &4)<<5)|( 37 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 446, ticks 7672, elapsed 0, voice: 1 note: 37 velocity 100 event ('note', 7672, 2, 37, 100)
	0,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((96 &0x7e)<<1)),	//# 447, ticks 7676, elapsed 0, voice: 2 note: 49 velocity 96 event ('note', 7676, 3, 49, 96)
	0,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((95 &0x7e)<<1)),	//# 448, ticks 7680, elapsed 0, voice: 2 note: 49 velocity 95 event ('note', 7680, 1, 49, 95)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 449, ticks 7680, elapsed 0, voice: 0 note: 74 velocity 0 event ('note', 7680, 8, 74, 0)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((94 &0x7e)<<1)),	//# 450, ticks 7684, elapsed 0, voice: 0 note: 67 velocity 94 event ('note', 7684, 5, 67, 94)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((94 &0x7e)<<1)),	//# 451, ticks 7684, elapsed 0, voice: 0 note: 67 velocity 94 event ('note', 7684, 6, 67, 94)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	9,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 454, ticks 7736, elapsed 9, voice: 0 note: 67 velocity 0 event ('note', 7736, 8, 67, 0)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 455, ticks 7740, elapsed 0, voice: 3 note: 67 velocity 0 event ('note', 7740, 5, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 457, ticks 7748, elapsed 1, voice: 2 note: 49 velocity 0 event ('note', 7748, 3, 49, 0)
	0,((( 1 &4)<<5)|( 37 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 458, ticks 7752, elapsed 0, voice: 1 note: 37 velocity 0 event ('note', 7752, 2, 37, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((95 &0x7e)<<1)),	//# 460, ticks 7764, elapsed 2, voice: 0 note: 67 velocity 95 event ('note', 7764, 8, 67, 95)
	// Note off skipped, note 49 not found in channels, probably interrupted
	1,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 462, ticks 7772, elapsed 1, voice: 1 note: 67 velocity 88 event ('note', 7772, 5, 67, 88)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((88 &0x7e)<<1)),	//# 463, ticks 7772, elapsed 0, voice: 2 note: 67 velocity 88 event ('note', 7772, 6, 67, 88)
	13,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((70 &0x7e)<<1)),	//# 464, ticks 7852, elapsed 13, voice: 3 note: 62 velocity 70 event ('note', 7852, 7, 62, 70)
	1,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((89 &0x7e)<<1)),	//# 465, ticks 7860, elapsed 1, voice: 3 note: 50 velocity 89 event ('note', 7860, 3, 50, 89)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((95 &0x7e)<<1)),	//# 466, ticks 7860, elapsed 0, voice: 1 note: 66 velocity 95 event ('note', 7860, 8, 66, 95)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((90 &0x7e)<<1)),	//# 467, ticks 7864, elapsed 0, voice: 2 note: 38 velocity 90 event ('note', 7864, 2, 38, 90)
	1,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((90 &0x7e)<<1)),	//# 468, ticks 7872, elapsed 1, voice: 3 note: 50 velocity 90 event ('note', 7872, 1, 50, 90)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((95 &0x7e)<<1)),	//# 469, ticks 7872, elapsed 0, voice: 2 note: 66 velocity 95 event ('note', 7872, 5, 66, 95)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((95 &0x7e)<<1)),	//# 470, ticks 7872, elapsed 0, voice: 3 note: 66 velocity 95 event ('note', 7872, 6, 66, 95)
	2,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 471, ticks 7888, elapsed 2, voice: 0 note: 67 velocity 0 event ('note', 7888, 8, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	6,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 475, ticks 7924, elapsed 6, voice: 1 note: 66 velocity 0 event ('note', 7924, 5, 66, 0)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 476, ticks 7924, elapsed 0, voice: 2 note: 66 velocity 0 event ('note', 7924, 6, 66, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 478, ticks 7932, elapsed 1, voice: 3 note: 66 velocity 0 event ('note', 7932, 8, 66, 0)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	4,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 481, ticks 7956, elapsed 4, voice: 0 note: 66 velocity 100 event ('note', 7956, 8, 66, 100)
	1,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((101 &0x7e)<<1)),	//# 482, ticks 7964, elapsed 1, voice: 1 note: 66 velocity 101 event ('note', 7964, 5, 66, 101)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((101 &0x7e)<<1)),	//# 483, ticks 7964, elapsed 0, voice: 2 note: 66 velocity 101 event ('note', 7964, 6, 66, 101)
	13,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((81 &0x7e)<<1)),	//# 484, ticks 8044, elapsed 13, voice: 3 note: 62 velocity 81 event ('note', 8044, 7, 62, 81)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((90 &0x7e)<<1)),	//# 485, ticks 8048, elapsed 0, voice: 3 note: 71 velocity 90 event ('note', 8048, 8, 71, 90)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((89 &0x7e)<<1)),	//# 486, ticks 8052, elapsed 0, voice: 3 note: 43 velocity 89 event ('note', 8052, 2, 43, 89)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((89 &0x7e)<<1)),	//# 487, ticks 8052, elapsed 0, voice: 3 note: 43 velocity 89 event ('note', 8052, 3, 43, 89)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((89 &0x7e)<<1)),	//# 488, ticks 8056, elapsed 0, voice: 3 note: 71 velocity 89 event ('note', 8056, 5, 71, 89)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((89 &0x7e)<<1)),	//# 489, ticks 8056, elapsed 0, voice: 3 note: 71 velocity 89 event ('note', 8056, 6, 71, 89)
	1,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((86 &0x7e)<<1)),	//# 490, ticks 8064, elapsed 1, voice: 3 note: 43 velocity 86 event ('note', 8064, 1, 43, 86)
	3,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 491, ticks 8084, elapsed 3, voice: 0 note: 66 velocity 0 event ('note', 8084, 5, 66, 0)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 492, ticks 8084, elapsed 0, voice: 1 note: 66 velocity 0 event ('note', 8084, 6, 66, 0)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 493, ticks 8088, elapsed 0, voice: 2 note: 66 velocity 0 event ('note', 8088, 8, 66, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	7,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 497, ticks 8132, elapsed 7, voice: 3 note: 43 velocity 0 event ('note', 8132, 3, 43, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((75 &0x7e)<<1)),	//# 500, ticks 8148, elapsed 2, voice: 0 note: 71 velocity 75 event ('note', 8148, 8, 71, 75)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 501, ticks 8152, elapsed 0, voice: 1 note: 71 velocity 88 event ('note', 8152, 5, 71, 88)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((88 &0x7e)<<1)),	//# 502, ticks 8152, elapsed 0, voice: 2 note: 71 velocity 88 event ('note', 8152, 6, 71, 88)
	// Note off skipped, note 43 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 42 &0x7f)), ((3 &3)|((97 &0x7e)<<1)),	//# 504, ticks 8236, elapsed 14, voice: 3 note: 42 velocity 97 event ('note', 8236, 3, 42, 97)
	1,((( 0 &4)<<5)|( 42 &0x7f)), ((0 &3)|((91 &0x7e)<<1)),	//# 505, ticks 8244, elapsed 1, voice: 0 note: 42 velocity 91 event ('note', 8244, 2, 42, 91)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((94 &0x7e)<<1)),	//# 506, ticks 8248, elapsed 0, voice: 1 note: 69 velocity 94 event ('note', 8248, 5, 69, 94)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((94 &0x7e)<<1)),	//# 507, ticks 8248, elapsed 0, voice: 2 note: 69 velocity 94 event ('note', 8248, 6, 69, 94)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((74 &0x7e)<<1)),	//# 508, ticks 8248, elapsed 0, voice: 0 note: 62 velocity 74 event ('note', 8248, 7, 62, 74)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((109 &0x7e)<<1)),	//# 509, ticks 8248, elapsed 0, voice: 0 note: 69 velocity 109 event ('note', 8248, 8, 69, 109)
	1,((( 1 &4)<<5)|( 42 &0x7f)), ((1 &3)|((97 &0x7e)<<1)),	//# 510, ticks 8256, elapsed 1, voice: 1 note: 42 velocity 97 event ('note', 8256, 1, 42, 97)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	8,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 514, ticks 8304, elapsed 8, voice: 0 note: 69 velocity 0 event ('note', 8304, 5, 69, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 515, ticks 8304, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 8304, 6, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	3,((( 1 &4)<<5)|( 42 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 517, ticks 8324, elapsed 3, voice: 1 note: 42 velocity 0 event ('note', 8324, 3, 42, 0)
	1,((( 3 &4)<<5)|( 42 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 518, ticks 8332, elapsed 1, voice: 3 note: 42 velocity 0 event ('note', 8332, 2, 42, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((91 &0x7e)<<1)),	//# 520, ticks 8344, elapsed 2, voice: 0 note: 69 velocity 91 event ('note', 8344, 5, 69, 91)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((91 &0x7e)<<1)),	//# 521, ticks 8344, elapsed 0, voice: 1 note: 69 velocity 91 event ('note', 8344, 6, 69, 91)
	// Note off skipped, note 42 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((102 &0x7e)<<1)),	//# 523, ticks 8352, elapsed 1, voice: 2 note: 69 velocity 102 event ('note', 8352, 8, 69, 102)
	13,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((70 &0x7e)<<1)),	//# 524, ticks 8432, elapsed 13, voice: 3 note: 67 velocity 70 event ('note', 8432, 7, 67, 70)
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((93 &0x7e)<<1)),	//# 525, ticks 8436, elapsed 0, voice: 3 note: 40 velocity 93 event ('note', 8436, 3, 40, 93)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 526, ticks 8440, elapsed 0, voice: 0 note: 40 velocity 88 event ('note', 8440, 2, 40, 88)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((98 &0x7e)<<1)),	//# 527, ticks 8440, elapsed 0, voice: 0 note: 61 velocity 98 event ('note', 8440, 8, 61, 98)
	1,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 528, ticks 8448, elapsed 1, voice: 1 note: 40 velocity 88 event ('note', 8448, 1, 40, 88)
	0,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((94 &0x7e)<<1)),	//# 529, ticks 8448, elapsed 0, voice: 1 note: 61 velocity 94 event ('note', 8448, 5, 61, 94)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((94 &0x7e)<<1)),	//# 530, ticks 8448, elapsed 0, voice: 3 note: 61 velocity 94 event ('note', 8448, 6, 61, 94)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 531, ticks 8452, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 8452, 8, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	8,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 534, ticks 8500, elapsed 8, voice: 0 note: 61 velocity 0 event ('note', 8500, 8, 61, 0)
	2,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 535, ticks 8512, elapsed 2, voice: 1 note: 61 velocity 0 event ('note', 8512, 5, 61, 0)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 536, ticks 8512, elapsed 0, voice: 3 note: 61 velocity 0 event ('note', 8512, 6, 61, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 40 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((93 &0x7e)<<1)),	//# 540, ticks 8528, elapsed 2, voice: 0 note: 61 velocity 93 event ('note', 8528, 8, 61, 93)
	2,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((87 &0x7e)<<1)),	//# 541, ticks 8540, elapsed 2, voice: 1 note: 61 velocity 87 event ('note', 8540, 5, 61, 87)
	0,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((87 &0x7e)<<1)),	//# 542, ticks 8540, elapsed 0, voice: 2 note: 61 velocity 87 event ('note', 8540, 6, 61, 87)
	// Note off skipped, note 40 not found in channels, probably interrupted
	12,((( 3 &4)<<5)|( 38 &0x7f)), ((3 &3)|((94 &0x7e)<<1)),	//# 544, ticks 8612, elapsed 12, voice: 3 note: 38 velocity 94 event ('note', 8612, 3, 38, 94)
	1,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 545, ticks 8620, elapsed 1, voice: 1 note: 62 velocity 88 event ('note', 8620, 8, 62, 88)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((70 &0x7e)<<1)),	//# 546, ticks 8624, elapsed 0, voice: 2 note: 66 velocity 70 event ('note', 8624, 7, 66, 70)
	1,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((88 &0x7e)<<1)),	//# 547, ticks 8632, elapsed 1, voice: 2 note: 38 velocity 88 event ('note', 8632, 2, 38, 88)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((86 &0x7e)<<1)),	//# 548, ticks 8632, elapsed 0, voice: 1 note: 62 velocity 86 event ('note', 8632, 5, 62, 86)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((86 &0x7e)<<1)),	//# 549, ticks 8632, elapsed 0, voice: 1 note: 62 velocity 86 event ('note', 8632, 6, 62, 86)
	1,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((93 &0x7e)<<1)),	//# 550, ticks 8640, elapsed 1, voice: 1 note: 38 velocity 93 event ('note', 8640, 1, 38, 93)
	4,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 551, ticks 8668, elapsed 4, voice: 0 note: 61 velocity 0 event ('note', 8668, 5, 61, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	6,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 557, ticks 8708, elapsed 6, voice: 1 note: 38 velocity 0 event ('note', 8708, 3, 38, 0)
	2,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 558, ticks 8720, elapsed 2, voice: 2 note: 38 velocity 0 event ('note', 8720, 2, 38, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((86 &0x7e)<<1)),	//# 560, ticks 8720, elapsed 0, voice: 0 note: 62 velocity 86 event ('note', 8720, 8, 62, 86)
	1,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((85 &0x7e)<<1)),	//# 561, ticks 8728, elapsed 1, voice: 1 note: 62 velocity 85 event ('note', 8728, 5, 62, 85)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((85 &0x7e)<<1)),	//# 562, ticks 8728, elapsed 0, voice: 2 note: 62 velocity 85 event ('note', 8728, 6, 62, 85)
	1,((( 3 &4)<<5)|( 38 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 563, ticks 8736, elapsed 1, voice: 3 note: 38 velocity 0 event ('note', 8736, 1, 38, 0)
	12,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((73 &0x7e)<<1)),	//# 564, ticks 8808, elapsed 12, voice: 3 note: 64 velocity 73 event ('note', 8808, 7, 64, 73)
	0,((( 3 &4)<<5)|( 37 &0x7f)), ((3 &3)|((96 &0x7e)<<1)),	//# 565, ticks 8812, elapsed 0, voice: 3 note: 37 velocity 96 event ('note', 8812, 3, 37, 96)
	2,((( 1 &4)<<5)|( 37 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 566, ticks 8824, elapsed 2, voice: 1 note: 37 velocity 100 event ('note', 8824, 2, 37, 100)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((84 &0x7e)<<1)),	//# 567, ticks 8828, elapsed 0, voice: 2 note: 57 velocity 84 event ('note', 8828, 5, 57, 84)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((84 &0x7e)<<1)),	//# 568, ticks 8828, elapsed 0, voice: 2 note: 57 velocity 84 event ('note', 8828, 6, 57, 84)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((86 &0x7e)<<1)),	//# 569, ticks 8828, elapsed 0, voice: 2 note: 57 velocity 86 event ('note', 8828, 8, 57, 86)
	0,((( 0 &4)<<5)|( 37 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 570, ticks 8832, elapsed 0, voice: 0 note: 37 velocity 88 event ('note', 8832, 1, 37, 88)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	10,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 574, ticks 8892, elapsed 10, voice: 2 note: 57 velocity 0 event ('note', 8892, 5, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 37 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 577, ticks 8904, elapsed 2, voice: 0 note: 37 velocity 0 event ('note', 8904, 3, 37, 0)
	1,((( 1 &4)<<5)|( 37 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 578, ticks 8912, elapsed 1, voice: 1 note: 37 velocity 0 event ('note', 8912, 2, 37, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((99 &0x7e)<<1)),	//# 580, ticks 8916, elapsed 0, voice: 0 note: 57 velocity 99 event ('note', 8916, 8, 57, 99)
	0,((( 3 &4)<<5)|( 37 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 581, ticks 8920, elapsed 0, voice: 3 note: 37 velocity 0 event ('note', 8920, 1, 37, 0)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((92 &0x7e)<<1)),	//# 582, ticks 8924, elapsed 0, voice: 1 note: 57 velocity 92 event ('note', 8924, 5, 57, 92)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((92 &0x7e)<<1)),	//# 583, ticks 8924, elapsed 0, voice: 2 note: 57 velocity 92 event ('note', 8924, 6, 57, 92)
	15,((( 3 &4)<<5)|( 49 &0x7f)), ((3 &3)|((93 &0x7e)<<1)),	//# 584, ticks 9012, elapsed 15, voice: 3 note: 49 velocity 93 event ('note', 9012, 3, 49, 93)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((72 &0x7e)<<1)),	//# 585, ticks 9012, elapsed 0, voice: 1 note: 57 velocity 72 event ('note', 9012, 7, 57, 72)
	0,((( 1 &4)<<5)|( 33 &0x7f)), ((1 &3)|((90 &0x7e)<<1)),	//# 586, ticks 9016, elapsed 0, voice: 1 note: 33 velocity 90 event ('note', 9016, 2, 33, 90)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((97 &0x7e)<<1)),	//# 587, ticks 9016, elapsed 0, voice: 1 note: 67 velocity 97 event ('note', 9016, 8, 67, 97)
	1,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((88 &0x7e)<<1)),	//# 588, ticks 9024, elapsed 1, voice: 2 note: 49 velocity 88 event ('note', 9024, 1, 49, 88)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((85 &0x7e)<<1)),	//# 589, ticks 9024, elapsed 0, voice: 2 note: 67 velocity 85 event ('note', 9024, 5, 67, 85)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((85 &0x7e)<<1)),	//# 590, ticks 9024, elapsed 0, voice: 2 note: 67 velocity 85 event ('note', 9024, 6, 67, 85)
	4,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 591, ticks 9048, elapsed 4, voice: 0 note: 57 velocity 0 event ('note', 9048, 8, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	6,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 594, ticks 9084, elapsed 6, voice: 1 note: 67 velocity 0 event ('note', 9084, 8, 67, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 595, ticks 9088, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 9088, 5, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 33 not found in channels, probably interrupted
	2,((( 3 &4)<<5)|( 49 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 598, ticks 9104, elapsed 2, voice: 3 note: 49 velocity 0 event ('note', 9104, 3, 49, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((98 &0x7e)<<1)),	//# 600, ticks 9108, elapsed 0, voice: 0 note: 67 velocity 98 event ('note', 9108, 8, 67, 98)
	1,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((86 &0x7e)<<1)),	//# 601, ticks 9116, elapsed 1, voice: 1 note: 67 velocity 86 event ('note', 9116, 5, 67, 86)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((86 &0x7e)<<1)),	//# 602, ticks 9116, elapsed 0, voice: 2 note: 67 velocity 86 event ('note', 9116, 6, 67, 86)
	// Note off skipped, note 49 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((86 &0x7e)<<1)),	//# 604, ticks 9200, elapsed 14, voice: 3 note: 66 velocity 86 event ('note', 9200, 8, 66, 86)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((92 &0x7e)<<1)),	//# 605, ticks 9204, elapsed 0, voice: 1 note: 50 velocity 92 event ('note', 9204, 3, 50, 92)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((75 &0x7e)<<1)),	//# 606, ticks 9204, elapsed 0, voice: 2 note: 57 velocity 75 event ('note', 9204, 7, 57, 75)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((95 &0x7e)<<1)),	//# 607, ticks 9208, elapsed 0, voice: 2 note: 38 velocity 95 event ('note', 9208, 2, 38, 95)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((83 &0x7e)<<1)),	//# 608, ticks 9208, elapsed 0, voice: 3 note: 66 velocity 83 event ('note', 9208, 5, 66, 83)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((83 &0x7e)<<1)),	//# 609, ticks 9208, elapsed 0, voice: 3 note: 66 velocity 83 event ('note', 9208, 6, 66, 83)
	1,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((86 &0x7e)<<1)),	//# 610, ticks 9216, elapsed 1, voice: 3 note: 50 velocity 86 event ('note', 9216, 1, 50, 86)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 611, ticks 9220, elapsed 0, voice: 0 note: 67 velocity 0 event ('note', 9220, 8, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	11,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 614, ticks 9284, elapsed 11, voice: 1 note: 50 velocity 0 event ('note', 9284, 1, 50, 0)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 615, ticks 9284, elapsed 0, voice: 3 note: 50 velocity 0 event ('note', 9284, 3, 50, 0)
	0,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 616, ticks 9288, elapsed 0, voice: 2 note: 38 velocity 0 event ('note', 9288, 2, 38, 0)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((93 &0x7e)<<1)),	//# 617, ticks 9292, elapsed 0, voice: 0 note: 64 velocity 93 event ('note', 9292, 8, 64, 93)
	1,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((86 &0x7e)<<1)),	//# 618, ticks 9300, elapsed 1, voice: 1 note: 64 velocity 86 event ('note', 9300, 5, 64, 86)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((86 &0x7e)<<1)),	//# 619, ticks 9300, elapsed 0, voice: 2 note: 64 velocity 86 event ('note', 9300, 6, 64, 86)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((94 &0x7e)<<1)),	//# 624, ticks 9384, elapsed 14, voice: 3 note: 66 velocity 94 event ('note', 9384, 8, 66, 94)
	1,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((93 &0x7e)<<1)),	//# 625, ticks 9392, elapsed 1, voice: 1 note: 47 velocity 93 event ('note', 9392, 3, 47, 93)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((69 &0x7e)<<1)),	//# 626, ticks 9392, elapsed 0, voice: 2 note: 62 velocity 69 event ('note', 9392, 7, 62, 69)
	1,((( 2 &4)<<5)|( 35 &0x7f)), ((2 &3)|((94 &0x7e)<<1)),	//# 627, ticks 9400, elapsed 1, voice: 2 note: 35 velocity 94 event ('note', 9400, 2, 35, 94)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((80 &0x7e)<<1)),	//# 628, ticks 9400, elapsed 0, voice: 0 note: 66 velocity 80 event ('note', 9400, 5, 66, 80)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((80 &0x7e)<<1)),	//# 629, ticks 9400, elapsed 0, voice: 0 note: 66 velocity 80 event ('note', 9400, 6, 66, 80)
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((90 &0x7e)<<1)),	//# 630, ticks 9408, elapsed 1, voice: 0 note: 47 velocity 90 event ('note', 9408, 1, 47, 90)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	10,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((97 &0x7e)<<1)),	//# 634, ticks 9468, elapsed 10, voice: 0 note: 62 velocity 97 event ('note', 9468, 8, 62, 97)
	0,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 635, ticks 9472, elapsed 0, voice: 1 note: 47 velocity 0 event ('note', 9472, 3, 47, 0)
	2,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((91 &0x7e)<<1)),	//# 636, ticks 9484, elapsed 2, voice: 1 note: 62 velocity 91 event ('note', 9484, 5, 62, 91)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((91 &0x7e)<<1)),	//# 637, ticks 9484, elapsed 0, voice: 1 note: 62 velocity 91 event ('note', 9484, 6, 62, 91)
	// Note off skipped, note 47 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 35 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 639, ticks 9492, elapsed 1, voice: 2 note: 35 velocity 0 event ('note', 9492, 2, 35, 0)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 640, ticks 9492, elapsed 0, voice: 0 note: 62 velocity 0 event ('note', 9492, 7, 62, 0)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 641, ticks 9492, elapsed 0, voice: 3 note: 66 velocity 0 event ('note', 9492, 8, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	13,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((90 &0x7e)<<1)),	//# 644, ticks 9572, elapsed 13, voice: 0 note: 64 velocity 90 event ('note', 9572, 8, 64, 90)
	1,((( 2 &4)<<5)|( 31 &0x7f)), ((2 &3)|((93 &0x7e)<<1)),	//# 645, ticks 9580, elapsed 1, voice: 2 note: 31 velocity 93 event ('note', 9580, 2, 31, 93)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((93 &0x7e)<<1)),	//# 646, ticks 9580, elapsed 0, voice: 3 note: 43 velocity 93 event ('note', 9580, 3, 43, 93)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((67 &0x7e)<<1)),	//# 647, ticks 9580, elapsed 0, voice: 0 note: 64 velocity 67 event ('note', 9580, 5, 64, 67)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((67 &0x7e)<<1)),	//# 648, ticks 9580, elapsed 0, voice: 0 note: 64 velocity 67 event ('note', 9580, 6, 64, 67)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((65 &0x7e)<<1)),	//# 649, ticks 9580, elapsed 0, voice: 0 note: 59 velocity 65 event ('note', 9580, 7, 59, 65)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 650, ticks 9584, elapsed 0, voice: 1 note: 62 velocity 0 event ('note', 9584, 8, 62, 0)
	2,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 651, ticks 9600, elapsed 2, voice: 1 note: 43 velocity 88 event ('note', 9600, 1, 43, 88)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	11,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 657, ticks 9664, elapsed 11, voice: 1 note: 43 velocity 0 event ('note', 9664, 3, 43, 0)
	0,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((101 &0x7e)<<1)),	//# 658, ticks 9668, elapsed 0, voice: 1 note: 64 velocity 101 event ('note', 9668, 8, 64, 101)
	1,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 659, ticks 9676, elapsed 1, voice: 0 note: 64 velocity 88 event ('note', 9676, 5, 64, 88)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 660, ticks 9676, elapsed 0, voice: 0 note: 64 velocity 88 event ('note', 9676, 6, 64, 88)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 661, ticks 9680, elapsed 0, voice: 3 note: 43 velocity 0 event ('note', 9680, 1, 43, 0)
	0,((( 2 &4)<<5)|( 31 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 662, ticks 9680, elapsed 0, voice: 2 note: 31 velocity 0 event ('note', 9680, 2, 31, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	15,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((97 &0x7e)<<1)),	//# 664, ticks 9768, elapsed 15, voice: 2 note: 57 velocity 97 event ('note', 9768, 8, 57, 97)
	0,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((76 &0x7e)<<1)),	//# 665, ticks 9772, elapsed 0, voice: 3 note: 57 velocity 76 event ('note', 9772, 5, 57, 76)
	0,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((76 &0x7e)<<1)),	//# 666, ticks 9772, elapsed 0, voice: 3 note: 57 velocity 76 event ('note', 9772, 6, 57, 76)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((68 &0x7e)<<1)),	//# 667, ticks 9772, elapsed 0, voice: 3 note: 61 velocity 68 event ('note', 9772, 7, 61, 68)
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((96 &0x7e)<<1)),	//# 668, ticks 9776, elapsed 0, voice: 3 note: 45 velocity 96 event ('note', 9776, 3, 45, 96)
	1,((( 0 &4)<<5)|( 33 &0x7f)), ((0 &3)|((96 &0x7e)<<1)),	//# 669, ticks 9784, elapsed 1, voice: 0 note: 33 velocity 96 event ('note', 9784, 2, 33, 96)
	0,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 670, ticks 9788, elapsed 0, voice: 1 note: 64 velocity 0 event ('note', 9788, 8, 64, 0)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((93 &0x7e)<<1)),	//# 671, ticks 9792, elapsed 0, voice: 1 note: 45 velocity 93 event ('note', 9792, 1, 45, 93)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	7,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 674, ticks 9836, elapsed 7, voice: 2 note: 57 velocity 0 event ('note', 9836, 8, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	4,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 677, ticks 9860, elapsed 4, voice: 1 note: 45 velocity 0 event ('note', 9860, 3, 45, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 679, ticks 9868, elapsed 1, voice: 3 note: 45 velocity 0 event ('note', 9868, 1, 45, 0)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((104 &0x7e)<<1)),	//# 680, ticks 9872, elapsed 0, voice: 1 note: 57 velocity 104 event ('note', 9872, 8, 57, 104)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((94 &0x7e)<<1)),	//# 681, ticks 9876, elapsed 0, voice: 2 note: 57 velocity 94 event ('note', 9876, 5, 57, 94)
	0,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((94 &0x7e)<<1)),	//# 682, ticks 9876, elapsed 0, voice: 3 note: 57 velocity 94 event ('note', 9876, 6, 57, 94)
	0,((( 0 &4)<<5)|( 33 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 683, ticks 9880, elapsed 0, voice: 0 note: 33 velocity 0 event ('note', 9880, 2, 33, 0)
	13,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 684, ticks 9960, elapsed 13, voice: 1 note: 57 velocity 0 event ('note', 9960, 5, 57, 0)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 685, ticks 9960, elapsed 0, voice: 2 note: 57 velocity 0 event ('note', 9960, 6, 57, 0)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((68 &0x7e)<<1)),	//# 686, ticks 9960, elapsed 0, voice: 0 note: 62 velocity 68 event ('note', 9960, 7, 62, 68)
	0,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 687, ticks 9960, elapsed 0, voice: 3 note: 57 velocity 0 event ('note', 9960, 8, 57, 0)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((107 &0x7e)<<1)),	//# 688, ticks 9964, elapsed 0, voice: 1 note: 62 velocity 107 event ('note', 9964, 8, 62, 107)
	1,((( 2 &4)<<5)|( 35 &0x7f)), ((2 &3)|((93 &0x7e)<<1)),	//# 689, ticks 9972, elapsed 1, voice: 2 note: 35 velocity 93 event ('note', 9972, 2, 35, 93)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((90 &0x7e)<<1)),	//# 690, ticks 9972, elapsed 0, voice: 3 note: 47 velocity 90 event ('note', 9972, 3, 47, 90)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((94 &0x7e)<<1)),	//# 691, ticks 9976, elapsed 0, voice: 0 note: 62 velocity 94 event ('note', 9976, 5, 62, 94)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((94 &0x7e)<<1)),	//# 692, ticks 9976, elapsed 0, voice: 3 note: 62 velocity 94 event ('note', 9976, 6, 62, 94)
	1,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((65 &0x7e)<<1)),	//# 693, ticks 9984, elapsed 1, voice: 2 note: 47 velocity 65 event ('note', 9984, 1, 47, 65)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((80 &0x7e)<<1)),	//# 694, ticks 9984, elapsed 0, voice: 2 note: 62 velocity 80 event ('note', 9984, 1, 62, 80)
	11,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((85 &0x7e)<<1)),	//# 695, ticks 10052, elapsed 11, voice: 2 note: 64 velocity 85 event ('note', 10052, 7, 64, 85)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((97 &0x7e)<<1)),	//# 696, ticks 10052, elapsed 0, voice: 2 note: 64 velocity 97 event ('note', 10052, 8, 64, 97)
	1,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((86 &0x7e)<<1)),	//# 697, ticks 10060, elapsed 1, voice: 0 note: 64 velocity 86 event ('note', 10060, 5, 64, 86)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((86 &0x7e)<<1)),	//# 698, ticks 10060, elapsed 0, voice: 0 note: 64 velocity 86 event ('note', 10060, 6, 64, 86)
	1,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((96 &0x7e)<<1)),	//# 699, ticks 10068, elapsed 1, voice: 0 note: 49 velocity 96 event ('note', 10068, 3, 49, 96)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 700, ticks 10068, elapsed 0, voice: 1 note: 62 velocity 0 event ('note', 10068, 7, 62, 0)
	0,((( 1 &4)<<5)|( 37 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 701, ticks 10072, elapsed 0, voice: 1 note: 37 velocity 89 event ('note', 10072, 2, 37, 89)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 702, ticks 10072, elapsed 0, voice: 3 note: 62 velocity 0 event ('note', 10072, 5, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 49 &0x7f)), ((3 &3)|((74 &0x7e)<<1)),	//# 704, ticks 10080, elapsed 1, voice: 3 note: 49 velocity 74 event ('note', 10080, 1, 49, 74)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((91 &0x7e)<<1)),	//# 705, ticks 10080, elapsed 0, voice: 3 note: 64 velocity 91 event ('note', 10080, 1, 64, 91)
	// Note off skipped, note 35 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	10,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 711, ticks 10140, elapsed 10, voice: 0 note: 49 velocity 0 event ('note', 10140, 3, 49, 0)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((85 &0x7e)<<1)),	//# 712, ticks 10144, elapsed 0, voice: 0 note: 66 velocity 85 event ('note', 10144, 7, 66, 85)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((90 &0x7e)<<1)),	//# 713, ticks 10148, elapsed 0, voice: 0 note: 66 velocity 90 event ('note', 10148, 8, 66, 90)
	1,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((81 &0x7e)<<1)),	//# 714, ticks 10156, elapsed 1, voice: 1 note: 66 velocity 81 event ('note', 10156, 5, 66, 81)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((81 &0x7e)<<1)),	//# 715, ticks 10156, elapsed 0, voice: 1 note: 66 velocity 81 event ('note', 10156, 6, 66, 81)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((90 &0x7e)<<1)),	//# 716, ticks 10160, elapsed 0, voice: 1 note: 50 velocity 90 event ('note', 10160, 3, 50, 90)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 717, ticks 10160, elapsed 0, voice: 2 note: 64 velocity 0 event ('note', 10160, 7, 64, 0)
	// Note off skipped, note 37 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((84 &0x7e)<<1)),	//# 719, ticks 10168, elapsed 1, voice: 2 note: 38 velocity 84 event ('note', 10168, 2, 38, 84)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 720, ticks 10168, elapsed 0, voice: 3 note: 64 velocity 0 event ('note', 10168, 5, 64, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((94 &0x7e)<<1)),	//# 722, ticks 10176, elapsed 1, voice: 3 note: 66 velocity 94 event ('note', 10176, 1, 66, 94)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((74 &0x7e)<<1)),	//# 723, ticks 10176, elapsed 0, voice: 2 note: 50 velocity 74 event ('note', 10176, 1, 50, 74)
	// Note off skipped, note 49 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	4,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 727, ticks 10204, elapsed 4, voice: 1 note: 50 velocity 0 event ('note', 10204, 3, 50, 0)
	4,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 728, ticks 10228, elapsed 4, voice: 0 note: 66 velocity 0 event ('note', 10228, 7, 66, 0)
	1,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((89 &0x7e)<<1)),	//# 729, ticks 10236, elapsed 1, voice: 0 note: 67 velocity 89 event ('note', 10236, 7, 67, 89)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((83 &0x7e)<<1)),	//# 730, ticks 10240, elapsed 0, voice: 1 note: 67 velocity 83 event ('note', 10240, 5, 67, 83)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((83 &0x7e)<<1)),	//# 731, ticks 10240, elapsed 0, voice: 2 note: 67 velocity 83 event ('note', 10240, 6, 67, 83)
	1,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((90 &0x7e)<<1)),	//# 732, ticks 10248, elapsed 1, voice: 1 note: 52 velocity 90 event ('note', 10248, 3, 52, 90)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((99 &0x7e)<<1)),	//# 733, ticks 10248, elapsed 0, voice: 2 note: 67 velocity 99 event ('note', 10248, 8, 67, 99)
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 735, ticks 10252, elapsed 0, voice: 3 note: 66 velocity 0 event ('note', 10252, 5, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	2,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((80 &0x7e)<<1)),	//# 739, ticks 10264, elapsed 2, voice: 3 note: 40 velocity 80 event ('note', 10264, 2, 40, 80)
	1,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((89 &0x7e)<<1)),	//# 740, ticks 10272, elapsed 1, voice: 3 note: 67 velocity 89 event ('note', 10272, 1, 67, 89)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((71 &0x7e)<<1)),	//# 741, ticks 10272, elapsed 0, voice: 0 note: 52 velocity 71 event ('note', 10272, 1, 52, 71)
	// Note off skipped, note 38 not found in channels, probably interrupted
	7,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 743, ticks 10316, elapsed 7, voice: 0 note: 52 velocity 0 event ('note', 10316, 3, 52, 0)
	4,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((99 &0x7e)<<1)),	//# 744, ticks 10344, elapsed 4, voice: 0 note: 69 velocity 99 event ('note', 10344, 7, 69, 99)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((113 &0x7e)<<1)),	//# 745, ticks 10344, elapsed 0, voice: 3 note: 69 velocity 113 event ('note', 10344, 8, 69, 113)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((102 &0x7e)<<1)),	//# 746, ticks 10348, elapsed 0, voice: 1 note: 69 velocity 102 event ('note', 10348, 5, 69, 102)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((102 &0x7e)<<1)),	//# 747, ticks 10348, elapsed 0, voice: 0 note: 69 velocity 102 event ('note', 10348, 6, 69, 102)
	1,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((97 &0x7e)<<1)),	//# 748, ticks 10356, elapsed 1, voice: 2 note: 54 velocity 97 event ('note', 10356, 3, 54, 97)
	1,((( 2 &4)<<5)|( 42 &0x7f)), ((2 &3)|((91 &0x7e)<<1)),	//# 749, ticks 10364, elapsed 1, voice: 2 note: 42 velocity 91 event ('note', 10364, 2, 42, 91)
	// Note off skipped, note 67 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((86 &0x7e)<<1)),	//# 751, ticks 10368, elapsed 0, voice: 2 note: 69 velocity 86 event ('note', 10368, 1, 69, 86)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((61 &0x7e)<<1)),	//# 752, ticks 10368, elapsed 0, voice: 2 note: 54 velocity 61 event ('note', 10368, 1, 54, 61)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 40 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	10,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 759, ticks 10428, elapsed 10, voice: 2 note: 54 velocity 0 event ('note', 10428, 3, 54, 0)
	1,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((92 &0x7e)<<1)),	//# 760, ticks 10436, elapsed 1, voice: 2 note: 71 velocity 92 event ('note', 10436, 7, 71, 92)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((104 &0x7e)<<1)),	//# 761, ticks 10436, elapsed 0, voice: 2 note: 71 velocity 104 event ('note', 10436, 8, 71, 104)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((92 &0x7e)<<1)),	//# 762, ticks 10440, elapsed 0, voice: 0 note: 71 velocity 92 event ('note', 10440, 5, 71, 92)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((92 &0x7e)<<1)),	//# 763, ticks 10440, elapsed 0, voice: 0 note: 71 velocity 92 event ('note', 10440, 6, 71, 92)
	// Note off skipped, note 42 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((90 &0x7e)<<1)),	//# 765, ticks 10452, elapsed 2, voice: 0 note: 55 velocity 90 event ('note', 10452, 3, 55, 90)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 766, ticks 10452, elapsed 0, voice: 1 note: 69 velocity 0 event ('note', 10452, 7, 69, 0)
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((81 &0x7e)<<1)),	//# 768, ticks 10456, elapsed 0, voice: 1 note: 43 velocity 81 event ('note', 10456, 2, 43, 81)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 769, ticks 10460, elapsed 0, voice: 3 note: 69 velocity 0 event ('note', 10460, 5, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((88 &0x7e)<<1)),	//# 771, ticks 10464, elapsed 0, voice: 3 note: 71 velocity 88 event ('note', 10464, 1, 71, 88)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((59 &0x7e)<<1)),	//# 772, ticks 10464, elapsed 0, voice: 1 note: 55 velocity 59 event ('note', 10464, 1, 55, 59)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	6,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 775, ticks 10504, elapsed 6, voice: 2 note: 71 velocity 0 event ('note', 10504, 7, 71, 0)
	2,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 776, ticks 10520, elapsed 2, voice: 0 note: 55 velocity 0 event ('note', 10520, 3, 55, 0)
	2,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((81 &0x7e)<<1)),	//# 777, ticks 10532, elapsed 2, voice: 0 note: 73 velocity 81 event ('note', 10532, 7, 73, 81)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((90 &0x7e)<<1)),	//# 778, ticks 10532, elapsed 0, voice: 2 note: 73 velocity 90 event ('note', 10532, 8, 73, 90)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((80 &0x7e)<<1)),	//# 779, ticks 10536, elapsed 0, voice: 1 note: 73 velocity 80 event ('note', 10536, 5, 73, 80)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((80 &0x7e)<<1)),	//# 780, ticks 10536, elapsed 0, voice: 1 note: 73 velocity 80 event ('note', 10536, 6, 73, 80)
	1,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((84 &0x7e)<<1)),	//# 781, ticks 10544, elapsed 1, voice: 1 note: 57 velocity 84 event ('note', 10544, 3, 57, 84)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((81 &0x7e)<<1)),	//# 782, ticks 10548, elapsed 0, voice: 0 note: 45 velocity 81 event ('note', 10548, 2, 45, 81)
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 784, ticks 10552, elapsed 0, voice: 3 note: 71 velocity 0 event ('note', 10552, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((87 &0x7e)<<1)),	//# 789, ticks 10560, elapsed 1, voice: 3 note: 73 velocity 87 event ('note', 10560, 1, 73, 87)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((55 &0x7e)<<1)),	//# 790, ticks 10560, elapsed 0, voice: 0 note: 57 velocity 55 event ('note', 10560, 1, 57, 55)
	9,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 791, ticks 10612, elapsed 9, voice: 0 note: 57 velocity 0 event ('note', 10612, 3, 57, 0)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 792, ticks 10612, elapsed 0, voice: 2 note: 73 velocity 0 event ('note', 10612, 7, 73, 0)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((107 &0x7e)<<1)),	//# 793, ticks 10616, elapsed 0, voice: 0 note: 69 velocity 107 event ('note', 10616, 8, 69, 107)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((95 &0x7e)<<1)),	//# 794, ticks 10620, elapsed 0, voice: 2 note: 69 velocity 95 event ('note', 10620, 7, 69, 95)
	2,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((92 &0x7e)<<1)),	//# 795, ticks 10632, elapsed 2, voice: 1 note: 69 velocity 92 event ('note', 10632, 5, 69, 92)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((92 &0x7e)<<1)),	//# 796, ticks 10632, elapsed 0, voice: 3 note: 69 velocity 92 event ('note', 10632, 6, 69, 92)
	0,((( 1 &4)<<5)|( 54 &0x7f)), ((1 &3)|((93 &0x7e)<<1)),	//# 797, ticks 10636, elapsed 0, voice: 1 note: 54 velocity 93 event ('note', 10636, 3, 54, 93)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	2,((( 3 &4)<<5)|( 42 &0x7f)), ((3 &3)|((84 &0x7e)<<1)),	//# 802, ticks 10648, elapsed 2, voice: 3 note: 42 velocity 84 event ('note', 10648, 2, 42, 84)
	// Note off skipped, note 57 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((84 &0x7e)<<1)),	//# 804, ticks 10656, elapsed 1, voice: 3 note: 69 velocity 84 event ('note', 10656, 1, 69, 84)
	0,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((82 &0x7e)<<1)),	//# 805, ticks 10656, elapsed 0, voice: 3 note: 54 velocity 82 event ('note', 10656, 1, 54, 82)
	// Note off skipped, note 73 not found in channels, probably interrupted
	9,((( 1 &4)<<5)|( 54 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 807, ticks 10708, elapsed 9, voice: 1 note: 54 velocity 0 event ('note', 10708, 3, 54, 0)
	1,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 808, ticks 10716, elapsed 1, voice: 0 note: 69 velocity 0 event ('note', 10716, 7, 69, 0)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((85 &0x7e)<<1)),	//# 809, ticks 10720, elapsed 0, voice: 0 note: 74 velocity 85 event ('note', 10720, 7, 74, 85)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((95 &0x7e)<<1)),	//# 810, ticks 10720, elapsed 0, voice: 1 note: 74 velocity 95 event ('note', 10720, 8, 74, 95)
	// Note off skipped, note 42 not found in channels, probably interrupted
	3,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((99 &0x7e)<<1)),	//# 812, ticks 10740, elapsed 3, voice: 3 note: 74 velocity 99 event ('note', 10740, 5, 74, 99)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((99 &0x7e)<<1)),	//# 813, ticks 10740, elapsed 0, voice: 0 note: 74 velocity 99 event ('note', 10740, 6, 74, 99)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 814, ticks 10740, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 10740, 8, 69, 0)
	2,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((93 &0x7e)<<1)),	//# 815, ticks 10752, elapsed 2, voice: 2 note: 74 velocity 93 event ('note', 10752, 1, 74, 93)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((71 &0x7e)<<1)),	//# 816, ticks 10752, elapsed 0, voice: 2 note: 59 velocity 71 event ('note', 10752, 1, 59, 71)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((90 &0x7e)<<1)),	//# 817, ticks 10752, elapsed 0, voice: 2 note: 47 velocity 90 event ('note', 10752, 2, 47, 90)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((97 &0x7e)<<1)),	//# 818, ticks 10756, elapsed 0, voice: 2 note: 59 velocity 97 event ('note', 10756, 3, 59, 97)
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	6,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 823, ticks 10792, elapsed 6, voice: 0 note: 74 velocity 0 event ('note', 10792, 8, 74, 0)
	1,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 824, ticks 10800, elapsed 1, voice: 1 note: 74 velocity 0 event ('note', 10800, 5, 74, 0)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 825, ticks 10800, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 10800, 6, 74, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	4,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 827, ticks 10828, elapsed 4, voice: 2 note: 59 velocity 0 event ('note', 10828, 1, 59, 0)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 828, ticks 10828, elapsed 0, voice: 0 note: 74 velocity 88 event ('note', 10828, 5, 74, 88)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 829, ticks 10828, elapsed 0, voice: 1 note: 74 velocity 88 event ('note', 10828, 6, 74, 88)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 830, ticks 10828, elapsed 0, voice: 0 note: 74 velocity 0 event ('note', 10828, 7, 74, 0)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 831, ticks 10832, elapsed 0, voice: 1 note: 74 velocity 0 event ('note', 10832, 1, 74, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((104 &0x7e)<<1)),	//# 833, ticks 10832, elapsed 0, voice: 0 note: 74 velocity 104 event ('note', 10832, 8, 74, 104)
	14,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((83 &0x7e)<<1)),	//# 834, ticks 10916, elapsed 14, voice: 1 note: 73 velocity 83 event ('note', 10916, 8, 73, 83)
	1,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((71 &0x7e)<<1)),	//# 835, ticks 10924, elapsed 1, voice: 2 note: 66 velocity 71 event ('note', 10924, 7, 66, 71)
	1,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((103 &0x7e)<<1)),	//# 836, ticks 10932, elapsed 1, voice: 3 note: 73 velocity 103 event ('note', 10932, 5, 73, 103)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((103 &0x7e)<<1)),	//# 837, ticks 10932, elapsed 0, voice: 2 note: 73 velocity 103 event ('note', 10932, 6, 73, 103)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((90 &0x7e)<<1)),	//# 838, ticks 10936, elapsed 0, voice: 1 note: 45 velocity 90 event ('note', 10936, 2, 45, 90)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 839, ticks 10936, elapsed 0, voice: 0 note: 74 velocity 0 event ('note', 10936, 8, 74, 0)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((93 &0x7e)<<1)),	//# 840, ticks 10940, elapsed 0, voice: 0 note: 57 velocity 93 event ('note', 10940, 3, 57, 93)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((86 &0x7e)<<1)),	//# 841, ticks 10944, elapsed 0, voice: 1 note: 57 velocity 86 event ('note', 10944, 1, 57, 86)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	8,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 844, ticks 10992, elapsed 8, voice: 2 note: 73 velocity 0 event ('note', 10992, 5, 73, 0)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 845, ticks 10992, elapsed 0, voice: 3 note: 73 velocity 0 event ('note', 10992, 6, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	4,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((98 &0x7e)<<1)),	//# 848, ticks 11020, elapsed 4, voice: 2 note: 73 velocity 98 event ('note', 11020, 8, 73, 98)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 849, ticks 11024, elapsed 0, voice: 0 note: 57 velocity 0 event ('note', 11024, 1, 57, 0)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 850, ticks 11024, elapsed 0, voice: 1 note: 57 velocity 0 event ('note', 11024, 3, 57, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((92 &0x7e)<<1)),	//# 852, ticks 11028, elapsed 0, voice: 0 note: 73 velocity 92 event ('note', 11028, 5, 73, 92)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((92 &0x7e)<<1)),	//# 853, ticks 11028, elapsed 0, voice: 1 note: 73 velocity 92 event ('note', 11028, 6, 73, 92)
	14,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((93 &0x7e)<<1)),	//# 854, ticks 11112, elapsed 14, voice: 3 note: 76 velocity 93 event ('note', 11112, 8, 76, 93)
	1,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((87 &0x7e)<<1)),	//# 855, ticks 11120, elapsed 1, voice: 0 note: 55 velocity 87 event ('note', 11120, 3, 55, 87)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((74 &0x7e)<<1)),	//# 856, ticks 11120, elapsed 0, voice: 0 note: 76 velocity 74 event ('note', 11120, 5, 76, 74)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((74 &0x7e)<<1)),	//# 857, ticks 11120, elapsed 0, voice: 0 note: 76 velocity 74 event ('note', 11120, 6, 76, 74)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((74 &0x7e)<<1)),	//# 858, ticks 11120, elapsed 0, voice: 0 note: 71 velocity 74 event ('note', 11120, 7, 71, 74)
	1,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((90 &0x7e)<<1)),	//# 859, ticks 11128, elapsed 1, voice: 0 note: 43 velocity 90 event ('note', 11128, 2, 43, 90)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 860, ticks 11132, elapsed 0, voice: 1 note: 73 velocity 0 event ('note', 11132, 5, 73, 0)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 861, ticks 11132, elapsed 0, voice: 2 note: 73 velocity 0 event ('note', 11132, 6, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((86 &0x7e)<<1)),	//# 863, ticks 11136, elapsed 0, voice: 1 note: 55 velocity 86 event ('note', 11136, 1, 55, 86)
	8,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 864, ticks 11184, elapsed 8, voice: 3 note: 76 velocity 0 event ('note', 11184, 5, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	4,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 868, ticks 11208, elapsed 4, voice: 1 note: 55 velocity 0 event ('note', 11208, 3, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((106 &0x7e)<<1)),	//# 870, ticks 11220, elapsed 2, voice: 1 note: 76 velocity 106 event ('note', 11220, 8, 76, 106)
	0,((( 0 &4)<<5)|( 43 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 871, ticks 11224, elapsed 0, voice: 0 note: 43 velocity 0 event ('note', 11224, 2, 43, 0)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((94 &0x7e)<<1)),	//# 872, ticks 11228, elapsed 0, voice: 0 note: 76 velocity 94 event ('note', 11228, 5, 76, 94)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((94 &0x7e)<<1)),	//# 873, ticks 11228, elapsed 0, voice: 2 note: 76 velocity 94 event ('note', 11228, 6, 76, 94)
	14,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((99 &0x7e)<<1)),	//# 874, ticks 11312, elapsed 14, voice: 3 note: 54 velocity 99 event ('note', 11312, 3, 54, 99)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((82 &0x7e)<<1)),	//# 875, ticks 11312, elapsed 0, voice: 0 note: 69 velocity 82 event ('note', 11312, 7, 69, 82)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((98 &0x7e)<<1)),	//# 876, ticks 11312, elapsed 0, voice: 0 note: 74 velocity 98 event ('note', 11312, 8, 74, 98)
	1,((( 2 &4)<<5)|( 42 &0x7f)), ((2 &3)|((99 &0x7e)<<1)),	//# 877, ticks 11320, elapsed 1, voice: 2 note: 42 velocity 99 event ('note', 11320, 2, 42, 99)
	1,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((94 &0x7e)<<1)),	//# 878, ticks 11328, elapsed 1, voice: 0 note: 54 velocity 94 event ('note', 11328, 1, 54, 94)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((89 &0x7e)<<1)),	//# 879, ticks 11328, elapsed 0, voice: 0 note: 74 velocity 89 event ('note', 11328, 5, 74, 89)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((89 &0x7e)<<1)),	//# 880, ticks 11328, elapsed 0, voice: 0 note: 74 velocity 89 event ('note', 11328, 6, 74, 89)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 881, ticks 11328, elapsed 0, voice: 1 note: 76 velocity 0 event ('note', 11328, 8, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	9,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 884, ticks 11384, elapsed 9, voice: 0 note: 74 velocity 0 event ('note', 11384, 8, 74, 0)
	1,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 885, ticks 11392, elapsed 1, voice: 3 note: 54 velocity 0 event ('note', 11392, 3, 54, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	3,((( 2 &4)<<5)|( 42 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 890, ticks 11412, elapsed 3, voice: 2 note: 42 velocity 0 event ('note', 11412, 2, 42, 0)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((102 &0x7e)<<1)),	//# 891, ticks 11412, elapsed 0, voice: 0 note: 74 velocity 102 event ('note', 11412, 8, 74, 102)
	1,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((99 &0x7e)<<1)),	//# 892, ticks 11420, elapsed 1, voice: 1 note: 74 velocity 99 event ('note', 11420, 5, 74, 99)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((99 &0x7e)<<1)),	//# 893, ticks 11420, elapsed 0, voice: 2 note: 74 velocity 99 event ('note', 11420, 6, 74, 99)
	13,((( 3 &4)<<5)|( 79 &0x7f)), ((3 &3)|((103 &0x7e)<<1)),	//# 894, ticks 11500, elapsed 13, voice: 3 note: 79 velocity 103 event ('note', 11500, 8, 79, 103)
	0,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((79 &0x7e)<<1)),	//# 895, ticks 11504, elapsed 0, voice: 1 note: 61 velocity 79 event ('note', 11504, 7, 61, 79)
	1,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 896, ticks 11512, elapsed 1, voice: 1 note: 40 velocity 89 event ('note', 11512, 2, 40, 89)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((86 &0x7e)<<1)),	//# 897, ticks 11516, elapsed 0, voice: 1 note: 79 velocity 86 event ('note', 11516, 5, 79, 86)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((86 &0x7e)<<1)),	//# 898, ticks 11516, elapsed 0, voice: 1 note: 79 velocity 86 event ('note', 11516, 6, 79, 86)
	0,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 899, ticks 11520, elapsed 0, voice: 1 note: 52 velocity 88 event ('note', 11520, 1, 52, 88)
	0,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((92 &0x7e)<<1)),	//# 900, ticks 11520, elapsed 0, voice: 1 note: 52 velocity 92 event ('note', 11520, 3, 52, 92)
	2,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 901, ticks 11536, elapsed 2, voice: 0 note: 74 velocity 0 event ('note', 11536, 8, 74, 0)
	2,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 902, ticks 11548, elapsed 2, voice: 2 note: 74 velocity 0 event ('note', 11548, 5, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	4,((( 3 &4)<<5)|( 79 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 904, ticks 11576, elapsed 4, voice: 3 note: 79 velocity 0 event ('note', 11576, 5, 79, 0)
	// Note off skipped, note 79 not found in channels, probably interrupted
	// Note off skipped, note 79 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	3,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 908, ticks 11596, elapsed 3, voice: 1 note: 52 velocity 0 event ('note', 11596, 3, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((111 &0x7e)<<1)),	//# 910, ticks 11600, elapsed 0, voice: 0 note: 79 velocity 111 event ('note', 11600, 8, 79, 111)
	// Note off skipped, note 40 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((98 &0x7e)<<1)),	//# 912, ticks 11612, elapsed 2, voice: 1 note: 79 velocity 98 event ('note', 11612, 5, 79, 98)
	0,((( 2 &4)<<5)|( 79 &0x7f)), ((2 &3)|((98 &0x7e)<<1)),	//# 913, ticks 11612, elapsed 0, voice: 2 note: 79 velocity 98 event ('note', 11612, 6, 79, 98)
	13,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((81 &0x7e)<<1)),	//# 914, ticks 11688, elapsed 13, voice: 3 note: 62 velocity 81 event ('note', 11688, 7, 62, 81)
	0,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((99 &0x7e)<<1)),	//# 915, ticks 11692, elapsed 0, voice: 3 note: 78 velocity 99 event ('note', 11692, 8, 78, 99)
	1,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 916, ticks 11700, elapsed 1, voice: 1 note: 50 velocity 89 event ('note', 11700, 3, 50, 89)
	1,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 917, ticks 11708, elapsed 1, voice: 1 note: 38 velocity 89 event ('note', 11708, 2, 38, 89)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((111 &0x7e)<<1)),	//# 918, ticks 11708, elapsed 0, voice: 1 note: 78 velocity 111 event ('note', 11708, 5, 78, 111)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((111 &0x7e)<<1)),	//# 919, ticks 11708, elapsed 0, voice: 2 note: 78 velocity 111 event ('note', 11708, 6, 78, 111)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((93 &0x7e)<<1)),	//# 920, ticks 11712, elapsed 0, voice: 3 note: 50 velocity 93 event ('note', 11712, 1, 50, 93)
	2,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 921, ticks 11728, elapsed 2, voice: 0 note: 79 velocity 0 event ('note', 11728, 8, 79, 0)
	// Note off skipped, note 79 not found in channels, probably interrupted
	// Note off skipped, note 79 not found in channels, probably interrupted
	7,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 924, ticks 11772, elapsed 7, voice: 1 note: 78 velocity 0 event ('note', 11772, 8, 78, 0)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 925, ticks 11776, elapsed 0, voice: 2 note: 78 velocity 0 event ('note', 11776, 5, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 927, ticks 11784, elapsed 1, voice: 3 note: 50 velocity 0 event ('note', 11784, 1, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((107 &0x7e)<<1)),	//# 929, ticks 11796, elapsed 2, voice: 0 note: 78 velocity 107 event ('note', 11796, 8, 78, 107)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	1,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((101 &0x7e)<<1)),	//# 932, ticks 11804, elapsed 1, voice: 1 note: 78 velocity 101 event ('note', 11804, 5, 78, 101)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((101 &0x7e)<<1)),	//# 933, ticks 11804, elapsed 0, voice: 2 note: 78 velocity 101 event ('note', 11804, 6, 78, 101)
	15,((( 3 &4)<<5)|( 49 &0x7f)), ((3 &3)|((95 &0x7e)<<1)),	//# 934, ticks 11892, elapsed 15, voice: 3 note: 49 velocity 95 event ('note', 11892, 3, 49, 95)
	0,((( 3 &4)<<5)|( 83 &0x7f)), ((3 &3)|((95 &0x7e)<<1)),	//# 935, ticks 11892, elapsed 0, voice: 3 note: 83 velocity 95 event ('note', 11892, 8, 83, 95)
	0,((( 3 &4)<<5)|( 83 &0x7f)), ((3 &3)|((87 &0x7e)<<1)),	//# 936, ticks 11896, elapsed 0, voice: 3 note: 83 velocity 87 event ('note', 11896, 5, 83, 87)
	0,((( 3 &4)<<5)|( 83 &0x7f)), ((3 &3)|((87 &0x7e)<<1)),	//# 937, ticks 11896, elapsed 0, voice: 3 note: 83 velocity 87 event ('note', 11896, 6, 83, 87)
	0,((( 3 &4)<<5)|( 37 &0x7f)), ((3 &3)|((99 &0x7e)<<1)),	//# 938, ticks 11900, elapsed 0, voice: 3 note: 37 velocity 99 event ('note', 11900, 2, 37, 99)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((70 &0x7e)<<1)),	//# 939, ticks 11900, elapsed 0, voice: 3 note: 64 velocity 70 event ('note', 11900, 7, 64, 70)
	0,((( 3 &4)<<5)|( 49 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 940, ticks 11904, elapsed 0, voice: 3 note: 49 velocity 100 event ('note', 11904, 1, 49, 100)
	3,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 941, ticks 11924, elapsed 3, voice: 0 note: 78 velocity 0 event ('note', 11924, 5, 78, 0)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 942, ticks 11924, elapsed 0, voice: 1 note: 78 velocity 0 event ('note', 11924, 6, 78, 0)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 943, ticks 11924, elapsed 0, voice: 2 note: 78 velocity 0 event ('note', 11924, 8, 78, 0)
	// Note off skipped, note 83 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	9,((( 3 &4)<<5)|( 49 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 947, ticks 11976, elapsed 9, voice: 3 note: 49 velocity 0 event ('note', 11976, 3, 49, 0)
	// Note off skipped, note 49 not found in channels, probably interrupted
	// Note off skipped, note 37 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 83 &0x7f)), ((0 &3)|((92 &0x7e)<<1)),	//# 951, ticks 11992, elapsed 2, voice: 0 note: 83 velocity 92 event ('note', 11992, 5, 83, 92)
	0,((( 1 &4)<<5)|( 83 &0x7f)), ((1 &3)|((92 &0x7e)<<1)),	//# 952, ticks 11992, elapsed 0, voice: 1 note: 83 velocity 92 event ('note', 11992, 6, 83, 92)
	0,((( 2 &4)<<5)|( 83 &0x7f)), ((2 &3)|((101 &0x7e)<<1)),	//# 953, ticks 11992, elapsed 0, voice: 2 note: 83 velocity 101 event ('note', 11992, 8, 83, 101)
	15,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((63 &0x7e)<<1)),	//# 954, ticks 12080, elapsed 15, voice: 3 note: 61 velocity 63 event ('note', 12080, 7, 61, 63)
	0,((( 3 &4)<<5)|( 81 &0x7f)), ((3 &3)|((101 &0x7e)<<1)),	//# 955, ticks 12080, elapsed 0, voice: 3 note: 81 velocity 101 event ('note', 12080, 8, 81, 101)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((90 &0x7e)<<1)),	//# 956, ticks 12084, elapsed 0, voice: 0 note: 45 velocity 90 event ('note', 12084, 3, 45, 90)
	0,((( 0 &4)<<5)|( 33 &0x7f)), ((0 &3)|((91 &0x7e)<<1)),	//# 957, ticks 12088, elapsed 0, voice: 0 note: 33 velocity 91 event ('note', 12088, 2, 33, 91)
	0,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((93 &0x7e)<<1)),	//# 958, ticks 12088, elapsed 0, voice: 0 note: 81 velocity 93 event ('note', 12088, 5, 81, 93)
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((93 &0x7e)<<1)),	//# 959, ticks 12088, elapsed 0, voice: 1 note: 81 velocity 93 event ('note', 12088, 6, 81, 93)
	1,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((94 &0x7e)<<1)),	//# 960, ticks 12096, elapsed 1, voice: 0 note: 45 velocity 94 event ('note', 12096, 1, 45, 94)
	4,((( 2 &4)<<5)|( 83 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 961, ticks 12124, elapsed 4, voice: 2 note: 83 velocity 0 event ('note', 12124, 8, 83, 0)
	// Note off skipped, note 83 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	4,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 964, ticks 12152, elapsed 4, voice: 1 note: 81 velocity 0 event ('note', 12152, 8, 81, 0)
	1,((( 3 &4)<<5)|( 81 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 965, ticks 12160, elapsed 1, voice: 3 note: 81 velocity 0 event ('note', 12160, 5, 81, 0)
	// Note off skipped, note 81 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 967, ticks 12164, elapsed 0, voice: 0 note: 45 velocity 0 event ('note', 12164, 3, 45, 0)
	2,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((112 &0x7e)<<1)),	//# 968, ticks 12180, elapsed 2, voice: 0 note: 81 velocity 112 event ('note', 12180, 8, 81, 112)
	// Note off skipped, note 33 not found in channels, probably interrupted
	1,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((96 &0x7e)<<1)),	//# 970, ticks 12188, elapsed 1, voice: 1 note: 81 velocity 96 event ('note', 12188, 5, 81, 96)
	0,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((96 &0x7e)<<1)),	//# 971, ticks 12188, elapsed 0, voice: 2 note: 81 velocity 96 event ('note', 12188, 6, 81, 96)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	15,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((90 &0x7e)<<1)),	//# 974, ticks 12276, elapsed 15, voice: 3 note: 50 velocity 90 event ('note', 12276, 3, 50, 90)
	0,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 975, ticks 12276, elapsed 0, voice: 0 note: 81 velocity 0 event ('note', 12276, 5, 81, 0)
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 976, ticks 12276, elapsed 0, voice: 1 note: 81 velocity 0 event ('note', 12276, 6, 81, 0)
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((113 &0x7e)<<1)),	//# 977, ticks 12280, elapsed 0, voice: 0 note: 79 velocity 113 event ('note', 12280, 8, 79, 113)
	0,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 978, ticks 12284, elapsed 0, voice: 1 note: 38 velocity 89 event ('note', 12284, 2, 38, 89)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((71 &0x7e)<<1)),	//# 979, ticks 12284, elapsed 0, voice: 1 note: 62 velocity 71 event ('note', 12284, 7, 62, 71)
	0,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 980, ticks 12284, elapsed 0, voice: 2 note: 81 velocity 0 event ('note', 12284, 8, 81, 0)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((88 &0x7e)<<1)),	//# 981, ticks 12288, elapsed 0, voice: 2 note: 50 velocity 88 event ('note', 12288, 1, 50, 88)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((96 &0x7e)<<1)),	//# 982, ticks 12288, elapsed 0, voice: 1 note: 79 velocity 96 event ('note', 12288, 5, 79, 96)
	0,((( 2 &4)<<5)|( 79 &0x7f)), ((2 &3)|((96 &0x7e)<<1)),	//# 983, ticks 12288, elapsed 0, voice: 2 note: 79 velocity 96 event ('note', 12288, 6, 79, 96)
	12,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 984, ticks 12360, elapsed 12, voice: 3 note: 50 velocity 0 event ('note', 12360, 3, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	2,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((102 &0x7e)<<1)),	//# 987, ticks 12372, elapsed 2, voice: 3 note: 78 velocity 102 event ('note', 12372, 8, 78, 102)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((80 &0x7e)<<1)),	//# 988, ticks 12376, elapsed 0, voice: 1 note: 78 velocity 80 event ('note', 12376, 5, 78, 80)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((80 &0x7e)<<1)),	//# 989, ticks 12376, elapsed 0, voice: 1 note: 78 velocity 80 event ('note', 12376, 6, 78, 80)
	2,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 990, ticks 12388, elapsed 2, voice: 0 note: 79 velocity 0 event ('note', 12388, 5, 79, 0)
	0,((( 2 &4)<<5)|( 79 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 991, ticks 12388, elapsed 0, voice: 2 note: 79 velocity 0 event ('note', 12388, 6, 79, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 79 not found in channels, probably interrupted
	13,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((93 &0x7e)<<1)),	//# 994, ticks 12464, elapsed 13, voice: 0 note: 76 velocity 93 event ('note', 12464, 8, 76, 93)
	1,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((81 &0x7e)<<1)),	//# 995, ticks 12472, elapsed 1, voice: 2 note: 76 velocity 81 event ('note', 12472, 5, 76, 81)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((81 &0x7e)<<1)),	//# 996, ticks 12472, elapsed 0, voice: 1 note: 76 velocity 81 event ('note', 12472, 6, 76, 81)
	0,((( 1 &4)<<5)|( 54 &0x7f)), ((1 &3)|((96 &0x7e)<<1)),	//# 997, ticks 12476, elapsed 0, voice: 1 note: 54 velocity 96 event ('note', 12476, 3, 54, 96)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((91 &0x7e)<<1)),	//# 998, ticks 12476, elapsed 0, voice: 2 note: 69 velocity 91 event ('note', 12476, 7, 69, 91)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((94 &0x7e)<<1)),	//# 999, ticks 12480, elapsed 0, voice: 2 note: 54 velocity 94 event ('note', 12480, 1, 54, 94)
	0,((( 0 &4)<<5)|( 42 &0x7f)), ((0 &3)|((97 &0x7e)<<1)),	//# 1000, ticks 12480, elapsed 0, voice: 0 note: 42 velocity 97 event ('note', 12480, 2, 42, 97)
	0,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1001, ticks 12484, elapsed 0, voice: 3 note: 78 velocity 0 event ('note', 12484, 5, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	12,((( 1 &4)<<5)|( 54 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1004, ticks 12556, elapsed 12, voice: 1 note: 54 velocity 0 event ('note', 12556, 1, 54, 0)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((99 &0x7e)<<1)),	//# 1005, ticks 12560, elapsed 0, voice: 1 note: 74 velocity 99 event ('note', 12560, 5, 74, 99)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((99 &0x7e)<<1)),	//# 1006, ticks 12560, elapsed 0, voice: 3 note: 74 velocity 99 event ('note', 12560, 6, 74, 99)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((114 &0x7e)<<1)),	//# 1007, ticks 12560, elapsed 0, voice: 2 note: 74 velocity 114 event ('note', 12560, 8, 74, 114)
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 42 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1010, ticks 12572, elapsed 2, voice: 0 note: 42 velocity 0 event ('note', 12572, 2, 42, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	13,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 1014, ticks 12652, elapsed 13, voice: 0 note: 76 velocity 88 event ('note', 12652, 8, 76, 88)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((89 &0x7e)<<1)),	//# 1015, ticks 12656, elapsed 0, voice: 0 note: 76 velocity 89 event ('note', 12656, 5, 76, 89)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((89 &0x7e)<<1)),	//# 1016, ticks 12656, elapsed 0, voice: 0 note: 76 velocity 89 event ('note', 12656, 6, 76, 89)
	2,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((85 &0x7e)<<1)),	//# 1017, ticks 12672, elapsed 2, voice: 0 note: 55 velocity 85 event ('note', 12672, 1, 55, 85)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1018, ticks 12672, elapsed 0, voice: 1 note: 74 velocity 0 event ('note', 12672, 5, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1019, ticks 12672, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 12672, 6, 74, 0)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((75 &0x7e)<<1)),	//# 1020, ticks 12672, elapsed 0, voice: 1 note: 71 velocity 75 event ('note', 12672, 7, 71, 75)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((88 &0x7e)<<1)),	//# 1021, ticks 12676, elapsed 0, voice: 2 note: 43 velocity 88 event ('note', 12676, 2, 43, 88)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 1022, ticks 12676, elapsed 0, voice: 1 note: 55 velocity 89 event ('note', 12676, 3, 55, 89)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1023, ticks 12676, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 12676, 8, 74, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	24,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1028, ticks 12820, elapsed 24, voice: 2 note: 43 velocity 0 event ('note', 12820, 2, 43, 0)
	3,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1029, ticks 12840, elapsed 3, voice: 0 note: 55 velocity 0 event ('note', 12840, 3, 55, 0)
	1,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((83 &0x7e)<<1)),	//# 1030, ticks 12848, elapsed 1, voice: 0 note: 57 velocity 83 event ('note', 12848, 3, 57, 83)
	1,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((92 &0x7e)<<1)),	//# 1031, ticks 12856, elapsed 1, voice: 2 note: 69 velocity 92 event ('note', 12856, 5, 69, 92)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((92 &0x7e)<<1)),	//# 1032, ticks 12856, elapsed 0, voice: 3 note: 69 velocity 92 event ('note', 12856, 6, 69, 92)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((91 &0x7e)<<1)),	//# 1033, ticks 12856, elapsed 0, voice: 0 note: 69 velocity 91 event ('note', 12856, 8, 69, 91)
	1,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((83 &0x7e)<<1)),	//# 1034, ticks 12864, elapsed 1, voice: 1 note: 57 velocity 83 event ('note', 12864, 1, 57, 83)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((83 &0x7e)<<1)),	//# 1035, ticks 12864, elapsed 0, voice: 1 note: 45 velocity 83 event ('note', 12864, 2, 45, 83)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((72 &0x7e)<<1)),	//# 1036, ticks 12868, elapsed 0, voice: 1 note: 73 velocity 72 event ('note', 12868, 7, 73, 72)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((82 &0x7e)<<1)),	//# 1040, ticks 12948, elapsed 13, voice: 1 note: 55 velocity 82 event ('note', 12948, 3, 55, 82)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 1041, ticks 12948, elapsed 0, voice: 1 note: 71 velocity 89 event ('note', 12948, 8, 71, 89)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 1042, ticks 12952, elapsed 0, voice: 1 note: 71 velocity 88 event ('note', 12952, 5, 71, 88)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 1043, ticks 12952, elapsed 0, voice: 1 note: 71 velocity 88 event ('note', 12952, 6, 71, 88)
	1,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((90 &0x7e)<<1)),	//# 1044, ticks 12960, elapsed 1, voice: 1 note: 55 velocity 90 event ('note', 12960, 1, 55, 90)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((75 &0x7e)<<1)),	//# 1045, ticks 12960, elapsed 0, voice: 1 note: 43 velocity 75 event ('note', 12960, 2, 43, 75)
	// Note off skipped, note 73 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1047, ticks 12976, elapsed 2, voice: 0 note: 69 velocity 0 event ('note', 12976, 5, 69, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1048, ticks 12976, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 12976, 6, 69, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1050, ticks 12980, elapsed 0, voice: 3 note: 69 velocity 0 event ('note', 12980, 8, 69, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	8,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1052, ticks 13028, elapsed 8, voice: 1 note: 43 velocity 0 event ('note', 13028, 2, 43, 0)
	2,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((102 &0x7e)<<1)),	//# 1053, ticks 13044, elapsed 2, voice: 0 note: 72 velocity 102 event ('note', 13044, 8, 72, 102)
	0,((( 1 &4)<<5)|( 72 &0x7f)), ((1 &3)|((86 &0x7e)<<1)),	//# 1054, ticks 13048, elapsed 0, voice: 1 note: 72 velocity 86 event ('note', 13048, 5, 72, 86)
	0,((( 2 &4)<<5)|( 72 &0x7f)), ((2 &3)|((86 &0x7e)<<1)),	//# 1055, ticks 13048, elapsed 0, voice: 2 note: 72 velocity 86 event ('note', 13048, 6, 72, 86)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((78 &0x7e)<<1)),	//# 1056, ticks 13048, elapsed 0, voice: 3 note: 69 velocity 78 event ('note', 13048, 7, 69, 78)
	0,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((93 &0x7e)<<1)),	//# 1057, ticks 13052, elapsed 0, voice: 3 note: 54 velocity 93 event ('note', 13052, 3, 54, 93)
	0,((( 1 &4)<<5)|( 54 &0x7f)), ((1 &3)|((98 &0x7e)<<1)),	//# 1058, ticks 13056, elapsed 0, voice: 1 note: 54 velocity 98 event ('note', 13056, 1, 54, 98)
	1,((( 2 &4)<<5)|( 42 &0x7f)), ((2 &3)|((80 &0x7e)<<1)),	//# 1059, ticks 13064, elapsed 1, voice: 2 note: 42 velocity 80 event ('note', 13064, 2, 42, 80)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	11,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((96 &0x7e)<<1)),	//# 1064, ticks 13128, elapsed 11, voice: 2 note: 69 velocity 96 event ('note', 13128, 8, 69, 96)
	0,((( 1 &4)<<5)|( 54 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1065, ticks 13132, elapsed 0, voice: 1 note: 54 velocity 0 event ('note', 13132, 3, 54, 0)
	2,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((91 &0x7e)<<1)),	//# 1066, ticks 13144, elapsed 2, voice: 1 note: 69 velocity 91 event ('note', 13144, 5, 69, 91)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((91 &0x7e)<<1)),	//# 1067, ticks 13144, elapsed 0, voice: 1 note: 69 velocity 91 event ('note', 13144, 6, 69, 91)
	0,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1068, ticks 13148, elapsed 0, voice: 3 note: 54 velocity 0 event ('note', 13148, 1, 54, 0)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1069, ticks 13148, elapsed 0, voice: 0 note: 72 velocity 0 event ('note', 13148, 8, 72, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 42 not found in channels, probably interrupted
	8,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1073, ticks 13196, elapsed 8, voice: 1 note: 69 velocity 0 event ('note', 13196, 7, 69, 0)
	5,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((89 &0x7e)<<1)),	//# 1074, ticks 13228, elapsed 5, voice: 0 note: 67 velocity 89 event ('note', 13228, 7, 67, 89)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 1075, ticks 13228, elapsed 0, voice: 1 note: 71 velocity 89 event ('note', 13228, 8, 71, 89)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((89 &0x7e)<<1)),	//# 1076, ticks 13232, elapsed 0, voice: 3 note: 43 velocity 89 event ('note', 13232, 2, 43, 89)
	2,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((87 &0x7e)<<1)),	//# 1077, ticks 13244, elapsed 2, voice: 0 note: 55 velocity 87 event ('note', 13244, 3, 55, 87)
	0,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((74 &0x7e)<<1)),	//# 1078, ticks 13248, elapsed 0, voice: 0 note: 55 velocity 74 event ('note', 13248, 1, 55, 74)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((92 &0x7e)<<1)),	//# 1079, ticks 13248, elapsed 0, voice: 0 note: 71 velocity 92 event ('note', 13248, 5, 71, 92)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((92 &0x7e)<<1)),	//# 1080, ticks 13248, elapsed 0, voice: 1 note: 71 velocity 92 event ('note', 13248, 6, 71, 92)
	2,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1081, ticks 13260, elapsed 2, voice: 2 note: 69 velocity 0 event ('note', 13260, 8, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	9,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((101 &0x7e)<<1)),	//# 1084, ticks 13316, elapsed 9, voice: 2 note: 74 velocity 101 event ('note', 13316, 8, 74, 101)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((75 &0x7e)<<1)),	//# 1085, ticks 13320, elapsed 0, voice: 3 note: 66 velocity 75 event ('note', 13320, 7, 66, 75)
	// Note off skipped, note 67 not found in channels, probably interrupted
	2,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((67 &0x7e)<<1)),	//# 1087, ticks 13336, elapsed 2, voice: 3 note: 74 velocity 67 event ('note', 13336, 5, 74, 67)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((67 &0x7e)<<1)),	//# 1088, ticks 13336, elapsed 0, voice: 3 note: 74 velocity 67 event ('note', 13336, 6, 74, 67)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1089, ticks 13336, elapsed 0, voice: 0 note: 71 velocity 0 event ('note', 13336, 8, 71, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	4,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1091, ticks 13360, elapsed 4, voice: 1 note: 71 velocity 0 event ('note', 13360, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	9,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((110 &0x7e)<<1)),	//# 1096, ticks 13416, elapsed 9, voice: 0 note: 73 velocity 110 event ('note', 13416, 8, 73, 110)
	2,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((82 &0x7e)<<1)),	//# 1097, ticks 13428, elapsed 2, voice: 1 note: 64 velocity 82 event ('note', 13428, 7, 64, 82)
	1,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 1098, ticks 13436, elapsed 1, voice: 3 note: 73 velocity 100 event ('note', 13436, 5, 73, 100)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1099, ticks 13436, elapsed 0, voice: 1 note: 73 velocity 100 event ('note', 13436, 6, 73, 100)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1100, ticks 13436, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 13436, 8, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	13,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((89 &0x7e)<<1)),	//# 1104, ticks 13512, elapsed 13, voice: 2 note: 76 velocity 89 event ('note', 13512, 8, 76, 89)
	1,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((77 &0x7e)<<1)),	//# 1105, ticks 13520, elapsed 1, voice: 2 note: 76 velocity 77 event ('note', 13520, 5, 76, 77)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((77 &0x7e)<<1)),	//# 1106, ticks 13520, elapsed 0, voice: 2 note: 76 velocity 77 event ('note', 13520, 6, 76, 77)
	2,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1107, ticks 13532, elapsed 2, voice: 0 note: 73 velocity 0 event ('note', 13532, 8, 73, 0)
	3,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1108, ticks 13552, elapsed 3, voice: 1 note: 73 velocity 0 event ('note', 13552, 5, 73, 0)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1109, ticks 13552, elapsed 0, voice: 3 note: 73 velocity 0 event ('note', 13552, 6, 73, 0)
	9,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1110, ticks 13604, elapsed 9, voice: 2 note: 76 velocity 0 event ('note', 13604, 5, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((103 &0x7e)<<1)),	//# 1113, ticks 13612, elapsed 1, voice: 0 note: 69 velocity 103 event ('note', 13612, 8, 69, 103)
	0,((( 1 &4)<<5)|( 37 &0x7f)), ((1 &3)|((99 &0x7e)<<1)),	//# 1114, ticks 13616, elapsed 0, voice: 1 note: 37 velocity 99 event ('note', 13616, 2, 37, 99)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((93 &0x7e)<<1)),	//# 1115, ticks 13620, elapsed 0, voice: 2 note: 69 velocity 93 event ('note', 13620, 5, 69, 93)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((93 &0x7e)<<1)),	//# 1116, ticks 13620, elapsed 0, voice: 3 note: 69 velocity 93 event ('note', 13620, 6, 69, 93)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((75 &0x7e)<<1)),	//# 1117, ticks 13620, elapsed 0, voice: 2 note: 64 velocity 75 event ('note', 13620, 7, 64, 75)
	0,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((95 &0x7e)<<1)),	//# 1118, ticks 13624, elapsed 0, voice: 2 note: 49 velocity 95 event ('note', 13624, 3, 49, 95)
	1,((( 3 &4)<<5)|( 49 &0x7f)), ((3 &3)|((94 &0x7e)<<1)),	//# 1119, ticks 13632, elapsed 1, voice: 3 note: 49 velocity 94 event ('note', 13632, 1, 49, 94)
	6,((( 1 &4)<<5)|( 37 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1120, ticks 13668, elapsed 6, voice: 1 note: 37 velocity 0 event ('note', 13668, 2, 37, 0)
	2,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1121, ticks 13680, elapsed 2, voice: 2 note: 49 velocity 0 event ('note', 13680, 1, 49, 0)
	0,((( 3 &4)<<5)|( 49 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1122, ticks 13684, elapsed 0, voice: 3 note: 49 velocity 0 event ('note', 13684, 3, 49, 0)
	4,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 1123, ticks 13708, elapsed 4, voice: 1 note: 67 velocity 88 event ('note', 13708, 5, 67, 88)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((88 &0x7e)<<1)),	//# 1124, ticks 13708, elapsed 0, voice: 2 note: 67 velocity 88 event ('note', 13708, 6, 67, 88)
	// Note off skipped, note 64 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((112 &0x7e)<<1)),	//# 1126, ticks 13716, elapsed 1, voice: 3 note: 67 velocity 112 event ('note', 13716, 8, 67, 112)
	0,((( 1 &4)<<5)|( 37 &0x7f)), ((1 &3)|((92 &0x7e)<<1)),	//# 1127, ticks 13720, elapsed 0, voice: 1 note: 37 velocity 92 event ('note', 13720, 2, 37, 92)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1128, ticks 13720, elapsed 0, voice: 0 note: 69 velocity 0 event ('note', 13720, 5, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((87 &0x7e)<<1)),	//# 1130, ticks 13728, elapsed 1, voice: 0 note: 49 velocity 87 event ('note', 13728, 1, 49, 87)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((98 &0x7e)<<1)),	//# 1131, ticks 13728, elapsed 0, voice: 0 note: 49 velocity 98 event ('note', 13728, 3, 49, 98)
	// Note off skipped, note 69 not found in channels, probably interrupted
	8,((( 1 &4)<<5)|( 37 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1133, ticks 13776, elapsed 8, voice: 1 note: 37 velocity 0 event ('note', 13776, 2, 37, 0)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1134, ticks 13780, elapsed 0, voice: 0 note: 49 velocity 0 event ('note', 13780, 3, 49, 0)
	// Note off skipped, note 49 not found in channels, probably interrupted
	4,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((106 &0x7e)<<1)),	//# 1136, ticks 13804, elapsed 4, voice: 0 note: 66 velocity 106 event ('note', 13804, 5, 66, 106)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((106 &0x7e)<<1)),	//# 1137, ticks 13804, elapsed 0, voice: 1 note: 66 velocity 106 event ('note', 13804, 6, 66, 106)
	1,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((115 &0x7e)<<1)),	//# 1138, ticks 13812, elapsed 1, voice: 2 note: 66 velocity 115 event ('note', 13812, 8, 66, 115)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 1139, ticks 13816, elapsed 0, voice: 0 note: 50 velocity 88 event ('note', 13816, 3, 50, 88)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((82 &0x7e)<<1)),	//# 1140, ticks 13816, elapsed 0, voice: 0 note: 57 velocity 82 event ('note', 13816, 7, 57, 82)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((91 &0x7e)<<1)),	//# 1141, ticks 13820, elapsed 0, voice: 0 note: 38 velocity 91 event ('note', 13820, 2, 38, 91)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((83 &0x7e)<<1)),	//# 1142, ticks 13824, elapsed 0, voice: 0 note: 50 velocity 83 event ('note', 13824, 1, 50, 83)
	2,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1143, ticks 13836, elapsed 2, voice: 3 note: 67 velocity 0 event ('note', 13836, 5, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	3,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1146, ticks 13856, elapsed 3, voice: 0 note: 50 velocity 0 event ('note', 13856, 3, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	8,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((87 &0x7e)<<1)),	//# 1150, ticks 13904, elapsed 8, voice: 0 note: 50 velocity 87 event ('note', 13904, 3, 50, 87)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((86 &0x7e)<<1)),	//# 1151, ticks 13908, elapsed 0, voice: 3 note: 62 velocity 86 event ('note', 13908, 5, 62, 86)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((86 &0x7e)<<1)),	//# 1152, ticks 13908, elapsed 0, voice: 3 note: 62 velocity 86 event ('note', 13908, 6, 62, 86)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((97 &0x7e)<<1)),	//# 1153, ticks 13908, elapsed 0, voice: 3 note: 62 velocity 97 event ('note', 13908, 8, 62, 97)
	1,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((87 &0x7e)<<1)),	//# 1154, ticks 13916, elapsed 1, voice: 0 note: 38 velocity 87 event ('note', 13916, 2, 38, 87)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((78 &0x7e)<<1)),	//# 1155, ticks 13920, elapsed 0, voice: 0 note: 50 velocity 78 event ('note', 13920, 1, 50, 78)
	2,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1156, ticks 13932, elapsed 2, voice: 1 note: 66 velocity 0 event ('note', 13932, 5, 66, 0)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1157, ticks 13932, elapsed 0, voice: 2 note: 66 velocity 0 event ('note', 13932, 6, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	4,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1159, ticks 13960, elapsed 4, voice: 0 note: 50 velocity 0 event ('note', 13960, 3, 50, 0)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	5,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((71 &0x7e)<<1)),	//# 1162, ticks 13992, elapsed 5, voice: 0 note: 57 velocity 71 event ('note', 13992, 7, 57, 71)
	0,((( 1 &4)<<5)|( 49 &0x7f)), ((1 &3)|((93 &0x7e)<<1)),	//# 1163, ticks 13996, elapsed 0, voice: 1 note: 49 velocity 93 event ('note', 13996, 3, 49, 93)
	1,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((91 &0x7e)<<1)),	//# 1164, ticks 14004, elapsed 1, voice: 2 note: 64 velocity 91 event ('note', 14004, 8, 64, 91)
	0,((( 0 &4)<<5)|( 37 &0x7f)), ((0 &3)|((92 &0x7e)<<1)),	//# 1165, ticks 14008, elapsed 0, voice: 0 note: 37 velocity 92 event ('note', 14008, 2, 37, 92)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((85 &0x7e)<<1)),	//# 1166, ticks 14008, elapsed 0, voice: 2 note: 64 velocity 85 event ('note', 14008, 5, 64, 85)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((85 &0x7e)<<1)),	//# 1167, ticks 14008, elapsed 0, voice: 2 note: 64 velocity 85 event ('note', 14008, 6, 64, 85)
	1,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((88 &0x7e)<<1)),	//# 1168, ticks 14016, elapsed 1, voice: 2 note: 49 velocity 88 event ('note', 14016, 1, 49, 88)
	3,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1169, ticks 14036, elapsed 3, voice: 3 note: 62 velocity 0 event ('note', 14036, 5, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 49 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1172, ticks 14048, elapsed 2, voice: 1 note: 49 velocity 0 event ('note', 14048, 3, 49, 0)
	1,((( 0 &4)<<5)|( 37 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1173, ticks 14056, elapsed 1, voice: 0 note: 37 velocity 0 event ('note', 14056, 2, 37, 0)
	2,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1174, ticks 14068, elapsed 2, voice: 2 note: 49 velocity 0 event ('note', 14068, 1, 49, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	4,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((97 &0x7e)<<1)),	//# 1176, ticks 14092, elapsed 4, voice: 0 note: 49 velocity 97 event ('note', 14092, 3, 49, 97)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 1177, ticks 14096, elapsed 0, voice: 1 note: 67 velocity 100 event ('note', 14096, 8, 67, 100)
	0,((( 2 &4)<<5)|( 37 &0x7f)), ((2 &3)|((102 &0x7e)<<1)),	//# 1178, ticks 14100, elapsed 0, voice: 2 note: 37 velocity 102 event ('note', 14100, 2, 37, 102)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((86 &0x7e)<<1)),	//# 1179, ticks 14100, elapsed 0, voice: 3 note: 67 velocity 86 event ('note', 14100, 5, 67, 86)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((86 &0x7e)<<1)),	//# 1180, ticks 14100, elapsed 0, voice: 3 note: 67 velocity 86 event ('note', 14100, 6, 67, 86)
	2,((( 3 &4)<<5)|( 49 &0x7f)), ((3 &3)|((77 &0x7e)<<1)),	//# 1181, ticks 14112, elapsed 2, voice: 3 note: 49 velocity 77 event ('note', 14112, 1, 49, 77)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	6,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1185, ticks 14148, elapsed 6, voice: 0 note: 49 velocity 0 event ('note', 14148, 3, 49, 0)
	0,((( 2 &4)<<5)|( 37 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1186, ticks 14152, elapsed 0, voice: 2 note: 37 velocity 0 event ('note', 14152, 2, 37, 0)
	2,((( 3 &4)<<5)|( 49 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1187, ticks 14168, elapsed 2, voice: 3 note: 49 velocity 0 event ('note', 14168, 1, 49, 0)
	2,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((89 &0x7e)<<1)),	//# 1188, ticks 14180, elapsed 2, voice: 0 note: 50 velocity 89 event ('note', 14180, 3, 50, 89)
	1,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((118 &0x7e)<<1)),	//# 1189, ticks 14188, elapsed 1, voice: 2 note: 66 velocity 118 event ('note', 14188, 8, 66, 118)
	0,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((60 &0x7e)<<1)),	//# 1190, ticks 14192, elapsed 0, voice: 3 note: 57 velocity 60 event ('note', 14192, 7, 57, 60)
	0,((( 3 &4)<<5)|( 38 &0x7f)), ((3 &3)|((88 &0x7e)<<1)),	//# 1191, ticks 14196, elapsed 0, voice: 3 note: 38 velocity 88 event ('note', 14196, 2, 38, 88)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((101 &0x7e)<<1)),	//# 1192, ticks 14196, elapsed 0, voice: 3 note: 66 velocity 101 event ('note', 14196, 5, 66, 101)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((101 &0x7e)<<1)),	//# 1193, ticks 14196, elapsed 0, voice: 0 note: 66 velocity 101 event ('note', 14196, 6, 66, 101)
	2,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((74 &0x7e)<<1)),	//# 1194, ticks 14208, elapsed 2, voice: 1 note: 50 velocity 74 event ('note', 14208, 1, 50, 74)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	4,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1198, ticks 14232, elapsed 4, voice: 1 note: 50 velocity 0 event ('note', 14232, 3, 50, 0)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	8,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((98 &0x7e)<<1)),	//# 1201, ticks 14280, elapsed 8, voice: 1 note: 50 velocity 98 event ('note', 14280, 3, 50, 98)
	// Note off skipped, note 57 not found in channels, probably interrupted
	1,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 1203, ticks 14288, elapsed 1, voice: 1 note: 69 velocity 88 event ('note', 14288, 5, 69, 88)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 1204, ticks 14288, elapsed 0, voice: 1 note: 69 velocity 88 event ('note', 14288, 6, 69, 88)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((104 &0x7e)<<1)),	//# 1205, ticks 14288, elapsed 0, voice: 1 note: 69 velocity 104 event ('note', 14288, 8, 69, 104)
	1,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((87 &0x7e)<<1)),	//# 1206, ticks 14296, elapsed 1, voice: 0 note: 38 velocity 87 event ('note', 14296, 2, 38, 87)
	1,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((79 &0x7e)<<1)),	//# 1207, ticks 14304, elapsed 1, voice: 0 note: 50 velocity 79 event ('note', 14304, 1, 50, 79)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1208, ticks 14304, elapsed 0, voice: 2 note: 66 velocity 0 event ('note', 14304, 5, 66, 0)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1209, ticks 14304, elapsed 0, voice: 3 note: 66 velocity 0 event ('note', 14304, 6, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	6,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1211, ticks 14340, elapsed 6, voice: 0 note: 50 velocity 0 event ('note', 14340, 3, 50, 0)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	6,((( 0 &4)<<5)|( 42 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 1214, ticks 14376, elapsed 6, voice: 0 note: 42 velocity 88 event ('note', 14376, 3, 42, 88)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((92 &0x7e)<<1)),	//# 1215, ticks 14376, elapsed 0, voice: 2 note: 62 velocity 92 event ('note', 14376, 8, 62, 92)
	1,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((82 &0x7e)<<1)),	//# 1216, ticks 14384, elapsed 1, voice: 3 note: 57 velocity 82 event ('note', 14384, 7, 57, 82)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1217, ticks 14384, elapsed 0, voice: 1 note: 69 velocity 0 event ('note', 14384, 8, 69, 0)
	0,((( 1 &4)<<5)|( 30 &0x7f)), ((1 &3)|((90 &0x7e)<<1)),	//# 1218, ticks 14388, elapsed 0, voice: 1 note: 30 velocity 90 event ('note', 14388, 2, 30, 90)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((77 &0x7e)<<1)),	//# 1219, ticks 14388, elapsed 0, voice: 3 note: 62 velocity 77 event ('note', 14388, 5, 62, 77)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((77 &0x7e)<<1)),	//# 1220, ticks 14388, elapsed 0, voice: 3 note: 62 velocity 77 event ('note', 14388, 6, 62, 77)
	2,((( 3 &4)<<5)|( 42 &0x7f)), ((3 &3)|((90 &0x7e)<<1)),	//# 1221, ticks 14400, elapsed 2, voice: 3 note: 42 velocity 90 event ('note', 14400, 1, 42, 90)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	3,((( 0 &4)<<5)|( 42 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1224, ticks 14420, elapsed 3, voice: 0 note: 42 velocity 0 event ('note', 14420, 3, 42, 0)
	2,((( 1 &4)<<5)|( 30 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1225, ticks 14436, elapsed 2, voice: 1 note: 30 velocity 0 event ('note', 14436, 2, 30, 0)
	2,((( 3 &4)<<5)|( 42 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1226, ticks 14448, elapsed 2, voice: 3 note: 42 velocity 0 event ('note', 14448, 1, 42, 0)
	3,((( 0 &4)<<5)|( 42 &0x7f)), ((0 &3)|((87 &0x7e)<<1)),	//# 1227, ticks 14468, elapsed 3, voice: 0 note: 42 velocity 87 event ('note', 14468, 3, 42, 87)
	0,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((87 &0x7e)<<1)),	//# 1228, ticks 14468, elapsed 0, voice: 1 note: 61 velocity 87 event ('note', 14468, 8, 61, 87)
	// Note off skipped, note 57 not found in channels, probably interrupted
	2,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((98 &0x7e)<<1)),	//# 1230, ticks 14484, elapsed 2, voice: 3 note: 61 velocity 98 event ('note', 14484, 5, 61, 98)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((98 &0x7e)<<1)),	//# 1231, ticks 14484, elapsed 0, voice: 0 note: 61 velocity 98 event ('note', 14484, 6, 61, 98)
	0,((( 1 &4)<<5)|( 30 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 1232, ticks 14488, elapsed 0, voice: 1 note: 30 velocity 89 event ('note', 14488, 2, 30, 89)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1233, ticks 14492, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 14492, 8, 62, 0)
	0,((( 2 &4)<<5)|( 42 &0x7f)), ((2 &3)|((81 &0x7e)<<1)),	//# 1234, ticks 14496, elapsed 0, voice: 2 note: 42 velocity 81 event ('note', 14496, 1, 42, 81)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	4,((( 2 &4)<<5)|( 42 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1237, ticks 14520, elapsed 4, voice: 2 note: 42 velocity 0 event ('note', 14520, 3, 42, 0)
	4,((( 1 &4)<<5)|( 30 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1238, ticks 14544, elapsed 4, voice: 1 note: 30 velocity 0 event ('note', 14544, 2, 30, 0)
	// Note off skipped, note 42 not found in channels, probably interrupted
	6,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((93 &0x7e)<<1)),	//# 1240, ticks 14580, elapsed 6, voice: 1 note: 59 velocity 93 event ('note', 14580, 8, 59, 93)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((96 &0x7e)<<1)),	//# 1241, ticks 14584, elapsed 0, voice: 2 note: 43 velocity 96 event ('note', 14584, 3, 43, 96)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((71 &0x7e)<<1)),	//# 1242, ticks 14584, elapsed 0, voice: 1 note: 59 velocity 71 event ('note', 14584, 5, 59, 71)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((71 &0x7e)<<1)),	//# 1243, ticks 14584, elapsed 0, voice: 1 note: 59 velocity 71 event ('note', 14584, 6, 59, 71)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((81 &0x7e)<<1)),	//# 1244, ticks 14584, elapsed 0, voice: 1 note: 50 velocity 81 event ('note', 14584, 7, 50, 81)
	1,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((99 &0x7e)<<1)),	//# 1245, ticks 14592, elapsed 1, voice: 1 note: 43 velocity 99 event ('note', 14592, 1, 43, 99)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1246, ticks 14592, elapsed 0, voice: 0 note: 61 velocity 0 event ('note', 14592, 5, 61, 0)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1247, ticks 14592, elapsed 0, voice: 3 note: 61 velocity 0 event ('note', 14592, 6, 61, 0)
	1,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((91 &0x7e)<<1)),	//# 1248, ticks 14600, elapsed 1, voice: 0 note: 31 velocity 91 event ('note', 14600, 2, 31, 91)
	// Note off skipped, note 61 not found in channels, probably interrupted
	8,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1250, ticks 14648, elapsed 8, voice: 1 note: 43 velocity 0 event ('note', 14648, 1, 43, 0)
	1,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1251, ticks 14656, elapsed 1, voice: 2 note: 43 velocity 0 event ('note', 14656, 3, 43, 0)
	2,((( 0 &4)<<5)|( 31 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1252, ticks 14668, elapsed 2, voice: 0 note: 31 velocity 0 event ('note', 14668, 2, 31, 0)
	1,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((103 &0x7e)<<1)),	//# 1253, ticks 14676, elapsed 1, voice: 0 note: 67 velocity 103 event ('note', 14676, 8, 67, 103)
	// Note off skipped, note 50 not found in channels, probably interrupted
	1,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((91 &0x7e)<<1)),	//# 1255, ticks 14684, elapsed 1, voice: 1 note: 67 velocity 91 event ('note', 14684, 5, 67, 91)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((91 &0x7e)<<1)),	//# 1256, ticks 14684, elapsed 0, voice: 2 note: 67 velocity 91 event ('note', 14684, 6, 67, 91)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((90 &0x7e)<<1)),	//# 1260, ticks 14768, elapsed 14, voice: 3 note: 55 velocity 90 event ('note', 14768, 3, 55, 90)
	1,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((70 &0x7e)<<1)),	//# 1261, ticks 14776, elapsed 1, voice: 3 note: 62 velocity 70 event ('note', 14776, 7, 62, 70)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((89 &0x7e)<<1)),	//# 1262, ticks 14776, elapsed 0, voice: 3 note: 66 velocity 89 event ('note', 14776, 8, 66, 89)
	0,((( 3 &4)<<5)|( 43 &0x7f)), ((3 &3)|((85 &0x7e)<<1)),	//# 1263, ticks 14780, elapsed 0, voice: 3 note: 43 velocity 85 event ('note', 14780, 2, 43, 85)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((85 &0x7e)<<1)),	//# 1264, ticks 14784, elapsed 0, voice: 3 note: 55 velocity 85 event ('note', 14784, 1, 55, 85)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((111 &0x7e)<<1)),	//# 1265, ticks 14784, elapsed 0, voice: 3 note: 66 velocity 111 event ('note', 14784, 5, 66, 111)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((111 &0x7e)<<1)),	//# 1266, ticks 14784, elapsed 0, voice: 1 note: 66 velocity 111 event ('note', 14784, 6, 66, 111)
	2,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1267, ticks 14796, elapsed 2, voice: 0 note: 67 velocity 0 event ('note', 14796, 5, 67, 0)
	0,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1268, ticks 14796, elapsed 0, voice: 2 note: 67 velocity 0 event ('note', 14796, 6, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	13,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((93 &0x7e)<<1)),	//# 1273, ticks 14872, elapsed 13, voice: 0 note: 64 velocity 93 event ('note', 14872, 8, 64, 93)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((78 &0x7e)<<1)),	//# 1274, ticks 14876, elapsed 0, voice: 2 note: 64 velocity 78 event ('note', 14876, 5, 64, 78)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((78 &0x7e)<<1)),	//# 1275, ticks 14876, elapsed 0, voice: 2 note: 64 velocity 78 event ('note', 14876, 6, 64, 78)
	// Note off skipped, note 62 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1277, ticks 14888, elapsed 2, voice: 1 note: 66 velocity 0 event ('note', 14888, 5, 66, 0)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1278, ticks 14888, elapsed 0, voice: 3 note: 66 velocity 0 event ('note', 14888, 6, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	9,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((112 &0x7e)<<1)),	//# 1280, ticks 14940, elapsed 9, voice: 1 note: 66 velocity 112 event ('note', 14940, 8, 66, 112)
	1,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((68 &0x7e)<<1)),	//# 1281, ticks 14948, elapsed 1, voice: 3 note: 66 velocity 68 event ('note', 14948, 5, 66, 68)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((68 &0x7e)<<1)),	//# 1282, ticks 14948, elapsed 0, voice: 3 note: 66 velocity 68 event ('note', 14948, 6, 66, 68)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1283, ticks 14952, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 14952, 5, 64, 0)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1284, ticks 14952, elapsed 0, voice: 2 note: 64 velocity 0 event ('note', 14952, 6, 64, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((89 &0x7e)<<1)),	//# 1286, ticks 14956, elapsed 0, voice: 0 note: 57 velocity 89 event ('note', 14956, 3, 57, 89)
	2,((( 2 &4)<<5)|( 45 &0x7f)), ((2 &3)|((83 &0x7e)<<1)),	//# 1287, ticks 14968, elapsed 2, voice: 2 note: 45 velocity 83 event ('note', 14968, 2, 45, 83)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((74 &0x7e)<<1)),	//# 1288, ticks 14972, elapsed 0, voice: 3 note: 61 velocity 74 event ('note', 14972, 7, 61, 74)
	0,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((84 &0x7e)<<1)),	//# 1289, ticks 14976, elapsed 0, voice: 3 note: 57 velocity 84 event ('note', 14976, 1, 57, 84)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1290, ticks 14976, elapsed 0, voice: 1 note: 66 velocity 0 event ('note', 14976, 8, 66, 0)
	0,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 1291, ticks 14976, elapsed 0, voice: 1 note: 64 velocity 89 event ('note', 14976, 8, 64, 89)
	// Note off skipped, note 66 not found in channels, probably interrupted
	2,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((62 &0x7e)<<1)),	//# 1293, ticks 14988, elapsed 2, voice: 2 note: 64 velocity 62 event ('note', 14988, 5, 64, 62)
	// Note off skipped, note 66 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((62 &0x7e)<<1)),	//# 1295, ticks 14988, elapsed 0, voice: 2 note: 64 velocity 62 event ('note', 14988, 6, 64, 62)
	1,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((106 &0x7e)<<1)),	//# 1296, ticks 14996, elapsed 1, voice: 2 note: 66 velocity 106 event ('note', 14996, 8, 66, 106)
	2,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((83 &0x7e)<<1)),	//# 1297, ticks 15008, elapsed 2, voice: 3 note: 66 velocity 83 event ('note', 15008, 5, 66, 83)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((83 &0x7e)<<1)),	//# 1298, ticks 15008, elapsed 0, voice: 3 note: 66 velocity 83 event ('note', 15008, 6, 66, 83)
	4,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1299, ticks 15036, elapsed 4, voice: 0 note: 57 velocity 0 event ('note', 15036, 3, 57, 0)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1300, ticks 15040, elapsed 0, voice: 2 note: 66 velocity 0 event ('note', 15040, 8, 66, 0)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1301, ticks 15044, elapsed 0, voice: 3 note: 66 velocity 0 event ('note', 15044, 5, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	18,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((73 &0x7e)<<1)),	//# 1306, ticks 15152, elapsed 18, voice: 0 note: 67 velocity 73 event ('note', 15152, 7, 67, 73)
	2,((( 2 &4)<<5)|( 45 &0x7f)), ((2 &3)|((96 &0x7e)<<1)),	//# 1307, ticks 15164, elapsed 2, voice: 2 note: 45 velocity 96 event ('note', 15164, 3, 45, 96)
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((87 &0x7e)<<1)),	//# 1308, ticks 15168, elapsed 0, voice: 3 note: 45 velocity 87 event ('note', 15168, 1, 45, 87)
	0,((( 0 &4)<<5)|( 33 &0x7f)), ((0 &3)|((89 &0x7e)<<1)),	//# 1309, ticks 15172, elapsed 0, voice: 0 note: 33 velocity 89 event ('note', 15172, 2, 33, 89)
	13,((( 2 &4)<<5)|( 45 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1310, ticks 15248, elapsed 13, voice: 2 note: 45 velocity 0 event ('note', 15248, 1, 45, 0)
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1311, ticks 15248, elapsed 0, voice: 3 note: 45 velocity 0 event ('note', 15248, 3, 45, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((96 &0x7e)<<1)),	//# 1312, ticks 15252, elapsed 0, voice: 2 note: 62 velocity 96 event ('note', 15252, 8, 62, 96)
	0,((( 0 &4)<<5)|( 33 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1313, ticks 15256, elapsed 0, voice: 0 note: 33 velocity 0 event ('note', 15256, 2, 33, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((85 &0x7e)<<1)),	//# 1315, ticks 15268, elapsed 2, voice: 0 note: 62 velocity 85 event ('note', 15268, 5, 62, 85)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((85 &0x7e)<<1)),	//# 1316, ticks 15268, elapsed 0, voice: 3 note: 62 velocity 85 event ('note', 15268, 6, 62, 85)
	0,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1317, ticks 15268, elapsed 0, voice: 1 note: 64 velocity 0 event ('note', 15268, 8, 64, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	11,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1320, ticks 15336, elapsed 11, voice: 0 note: 62 velocity 0 event ('note', 15336, 5, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1321, ticks 15336, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 15336, 6, 62, 0)
	1,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1322, ticks 15344, elapsed 1, voice: 3 note: 62 velocity 0 event ('note', 15344, 8, 62, 0)
	2,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((93 &0x7e)<<1)),	//# 1323, ticks 15356, elapsed 2, voice: 0 note: 50 velocity 93 event ('note', 15356, 3, 50, 93)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((74 &0x7e)<<1)),	//# 1324, ticks 15360, elapsed 0, voice: 1 note: 50 velocity 74 event ('note', 15360, 1, 50, 74)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((92 &0x7e)<<1)),	//# 1325, ticks 15360, elapsed 0, voice: 2 note: 62 velocity 92 event ('note', 15360, 5, 62, 92)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((92 &0x7e)<<1)),	//# 1326, ticks 15360, elapsed 0, voice: 3 note: 62 velocity 92 event ('note', 15360, 6, 62, 92)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((66 &0x7e)<<1)),	//# 1327, ticks 15360, elapsed 0, voice: 1 note: 66 velocity 66 event ('note', 15360, 7, 66, 66)
	1,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((103 &0x7e)<<1)),	//# 1328, ticks 15368, elapsed 1, voice: 1 note: 62 velocity 103 event ('note', 15368, 8, 62, 103)
	1,((( 2 &4)<<5)|( 26 &0x7f)), ((2 &3)|((89 &0x7e)<<1)),	//# 1329, ticks 15376, elapsed 1, voice: 2 note: 26 velocity 89 event ('note', 15376, 2, 26, 89)
	13,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((59 &0x7e)<<1)),	//# 1330, ticks 15456, elapsed 13, voice: 2 note: 81 velocity 59 event ('note', 15456, 1, 81, 59)
	8,((( 2 &4)<<5)|( 79 &0x7f)), ((2 &3)|((79 &0x7e)<<1)),	//# 1331, ticks 15504, elapsed 8, voice: 2 note: 79 velocity 79 event ('note', 15504, 1, 79, 79)
	// Note off skipped, note 81 not found in channels, probably interrupted
	8,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((101 &0x7e)<<1)),	//# 1333, ticks 15552, elapsed 8, voice: 2 note: 78 velocity 101 event ('note', 15552, 1, 78, 101)
	1,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((92 &0x7e)<<1)),	//# 1334, ticks 15560, elapsed 1, voice: 3 note: 74 velocity 92 event ('note', 15560, 4, 74, 92)
	// Note off skipped, note 79 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	15,((( 3 &4)<<5)|( 81 &0x7f)), ((3 &3)|((88 &0x7e)<<1)),	//# 1337, ticks 15648, elapsed 15, voice: 3 note: 81 velocity 88 event ('note', 15648, 1, 81, 88)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1338, ticks 15648, elapsed 0, voice: 1 note: 62 velocity 0 event ('note', 15648, 8, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 26 not found in channels, probably interrupted
	15,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1342, ticks 15736, elapsed 15, voice: 2 note: 78 velocity 0 event ('note', 15736, 1, 78, 0)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1343, ticks 15740, elapsed 0, voice: 0 note: 50 velocity 0 event ('note', 15740, 3, 50, 0)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((96 &0x7e)<<1)),	//# 1344, ticks 15744, elapsed 0, voice: 0 note: 76 velocity 96 event ('note', 15744, 1, 76, 96)
	1,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((103 &0x7e)<<1)),	//# 1345, ticks 15752, elapsed 1, voice: 1 note: 73 velocity 103 event ('note', 15752, 4, 73, 103)
	6,((( 3 &4)<<5)|( 81 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1346, ticks 15788, elapsed 6, voice: 3 note: 81 velocity 0 event ('note', 15788, 1, 81, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	9,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((84 &0x7e)<<1)),	//# 1349, ticks 15840, elapsed 9, voice: 2 note: 81 velocity 84 event ('note', 15840, 1, 81, 84)
	10,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1350, ticks 15900, elapsed 10, voice: 0 note: 76 velocity 0 event ('note', 15900, 1, 76, 0)
	6,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((84 &0x7e)<<1)),	//# 1351, ticks 15936, elapsed 6, voice: 0 note: 74 velocity 84 event ('note', 15936, 1, 74, 84)
	3,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((76 &0x7e)<<1)),	//# 1352, ticks 15956, elapsed 3, voice: 3 note: 71 velocity 76 event ('note', 15956, 4, 71, 76)
	2,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1353, ticks 15972, elapsed 2, voice: 1 note: 73 velocity 0 event ('note', 15972, 4, 73, 0)
	0,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1354, ticks 15976, elapsed 0, voice: 2 note: 81 velocity 0 event ('note', 15976, 1, 81, 0)
	9,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((71 &0x7e)<<1)),	//# 1355, ticks 16032, elapsed 9, voice: 1 note: 81 velocity 71 event ('note', 16032, 1, 81, 71)
	4,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1356, ticks 16056, elapsed 4, voice: 0 note: 74 velocity 0 event ('note', 16056, 1, 74, 0)
	12,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((85 &0x7e)<<1)),	//# 1357, ticks 16128, elapsed 12, voice: 0 note: 73 velocity 85 event ('note', 16128, 1, 73, 85)
	5,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1358, ticks 16160, elapsed 5, voice: 1 note: 81 velocity 0 event ('note', 16160, 1, 81, 0)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((55 &0x7e)<<1)),	//# 1359, ticks 16160, elapsed 0, voice: 1 note: 69 velocity 55 event ('note', 16160, 4, 69, 55)
	3,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1360, ticks 16180, elapsed 3, voice: 3 note: 71 velocity 0 event ('note', 16180, 4, 71, 0)
	7,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((68 &0x7e)<<1)),	//# 1361, ticks 16224, elapsed 7, voice: 2 note: 81 velocity 68 event ('note', 16224, 1, 81, 68)
	1,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1362, ticks 16232, elapsed 1, voice: 0 note: 73 velocity 0 event ('note', 16232, 1, 73, 0)
	13,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1363, ticks 16308, elapsed 13, voice: 0 note: 78 velocity 64 event ('note', 16308, 5, 78, 64)
	0,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1364, ticks 16308, elapsed 0, voice: 3 note: 78 velocity 64 event ('note', 16308, 6, 78, 64)
	2,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((82 &0x7e)<<1)),	//# 1365, ticks 16320, elapsed 2, voice: 1 note: 74 velocity 82 event ('note', 16320, 1, 74, 82)
	4,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1366, ticks 16348, elapsed 4, voice: 2 note: 81 velocity 0 event ('note', 16348, 1, 81, 0)
	11,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((62 &0x7e)<<1)),	//# 1367, ticks 16416, elapsed 11, voice: 2 note: 81 velocity 62 event ('note', 16416, 1, 81, 62)
	3,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1368, ticks 16436, elapsed 3, voice: 1 note: 74 velocity 0 event ('note', 16436, 1, 74, 0)
	10,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((69 &0x7e)<<1)),	//# 1369, ticks 16496, elapsed 10, voice: 1 note: 76 velocity 69 event ('note', 16496, 5, 76, 69)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((69 &0x7e)<<1)),	//# 1370, ticks 16496, elapsed 0, voice: 2 note: 76 velocity 69 event ('note', 16496, 6, 76, 69)
	2,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((83 &0x7e)<<1)),	//# 1371, ticks 16512, elapsed 2, voice: 0 note: 73 velocity 83 event ('note', 16512, 1, 73, 83)
	// Note off skipped, note 81 not found in channels, probably interrupted
	4,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1373, ticks 16540, elapsed 4, voice: 3 note: 78 velocity 0 event ('note', 16540, 5, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	11,((( 3 &4)<<5)|( 81 &0x7f)), ((3 &3)|((62 &0x7e)<<1)),	//# 1375, ticks 16608, elapsed 11, voice: 3 note: 81 velocity 62 event ('note', 16608, 1, 81, 62)
	1,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1376, ticks 16616, elapsed 1, voice: 0 note: 73 velocity 0 event ('note', 16616, 1, 73, 0)
	11,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((77 &0x7e)<<1)),	//# 1377, ticks 16684, elapsed 11, voice: 0 note: 74 velocity 77 event ('note', 16684, 5, 74, 77)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((77 &0x7e)<<1)),	//# 1378, ticks 16684, elapsed 0, voice: 3 note: 74 velocity 77 event ('note', 16684, 6, 74, 77)
	3,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((71 &0x7e)<<1)),	//# 1379, ticks 16704, elapsed 3, voice: 1 note: 71 velocity 71 event ('note', 16704, 1, 71, 71)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1380, ticks 16704, elapsed 0, voice: 2 note: 76 velocity 0 event ('note', 16704, 5, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 81 not found in channels, probably interrupted
	16,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1383, ticks 16800, elapsed 16, voice: 1 note: 71 velocity 0 event ('note', 16800, 1, 71, 0)
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((60 &0x7e)<<1)),	//# 1384, ticks 16800, elapsed 0, voice: 1 note: 81 velocity 60 event ('note', 16800, 1, 81, 60)
	12,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((72 &0x7e)<<1)),	//# 1385, ticks 16872, elapsed 12, voice: 2 note: 73 velocity 72 event ('note', 16872, 5, 73, 72)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((72 &0x7e)<<1)),	//# 1386, ticks 16872, elapsed 0, voice: 1 note: 73 velocity 72 event ('note', 16872, 6, 73, 72)
	// Note off skipped, note 81 not found in channels, probably interrupted
	3,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1388, ticks 16892, elapsed 3, voice: 0 note: 74 velocity 0 event ('note', 16892, 5, 74, 0)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1389, ticks 16892, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 16892, 6, 74, 0)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((71 &0x7e)<<1)),	//# 1390, ticks 16896, elapsed 0, voice: 0 note: 69 velocity 71 event ('note', 16896, 1, 69, 71)
	16,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((59 &0x7e)<<1)),	//# 1391, ticks 16992, elapsed 16, voice: 3 note: 57 velocity 59 event ('note', 16992, 1, 57, 59)
	1,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1392, ticks 17000, elapsed 1, voice: 0 note: 69 velocity 0 event ('note', 17000, 4, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	14,((( 0 &4)<<5)|( 83 &0x7f)), ((0 &3)|((94 &0x7e)<<1)),	//# 1394, ticks 17084, elapsed 14, voice: 0 note: 83 velocity 94 event ('note', 17084, 4, 83, 94)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((72 &0x7e)<<1)),	//# 1395, ticks 17088, elapsed 0, voice: 3 note: 73 velocity 72 event ('note', 17088, 1, 73, 72)
	0,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((58 &0x7e)<<1)),	//# 1396, ticks 17088, elapsed 0, voice: 1 note: 55 velocity 58 event ('note', 17088, 1, 55, 58)
	// Note off skipped, note 57 not found in channels, probably interrupted
	9,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1398, ticks 17140, elapsed 9, voice: 2 note: 73 velocity 0 event ('note', 17140, 1, 73, 0)
	2,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((77 &0x7e)<<1)),	//# 1399, ticks 17152, elapsed 2, voice: 2 note: 71 velocity 77 event ('note', 17152, 1, 71, 77)
	2,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1400, ticks 17168, elapsed 2, voice: 1 note: 55 velocity 0 event ('note', 17168, 1, 55, 0)
	2,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((54 &0x7e)<<1)),	//# 1401, ticks 17184, elapsed 2, voice: 1 note: 57 velocity 54 event ('note', 17184, 1, 57, 54)
	5,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((80 &0x7e)<<1)),	//# 1402, ticks 17216, elapsed 5, voice: 1 note: 73 velocity 80 event ('note', 17216, 1, 73, 80)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1403, ticks 17220, elapsed 0, voice: 2 note: 71 velocity 0 event ('note', 17220, 1, 71, 0)
	7,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((88 &0x7e)<<1)),	//# 1404, ticks 17264, elapsed 7, voice: 2 note: 81 velocity 88 event ('note', 17264, 4, 81, 88)
	2,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((80 &0x7e)<<1)),	//# 1405, ticks 17280, elapsed 2, voice: 3 note: 74 velocity 80 event ('note', 17280, 1, 74, 80)
	0,((( 1 &4)<<5)|( 54 &0x7f)), ((1 &3)|((74 &0x7e)<<1)),	//# 1406, ticks 17280, elapsed 0, voice: 1 note: 54 velocity 74 event ('note', 17280, 1, 54, 74)
	// Note off skipped, note 57 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 83 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1408, ticks 17292, elapsed 2, voice: 0 note: 83 velocity 0 event ('note', 17292, 4, 83, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	9,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1412, ticks 17344, elapsed 9, voice: 3 note: 74 velocity 0 event ('note', 17344, 1, 74, 0)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((79 &0x7e)<<1)),	//# 1413, ticks 17344, elapsed 0, voice: 0 note: 73 velocity 79 event ('note', 17344, 1, 73, 79)
	4,((( 1 &4)<<5)|( 54 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1414, ticks 17368, elapsed 4, voice: 1 note: 54 velocity 0 event ('note', 17368, 1, 54, 0)
	1,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((42 &0x7e)<<1)),	//# 1415, ticks 17376, elapsed 1, voice: 1 note: 57 velocity 42 event ('note', 17376, 1, 57, 42)
	3,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1416, ticks 17396, elapsed 3, voice: 0 note: 73 velocity 0 event ('note', 17396, 1, 73, 0)
	2,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((79 &0x7e)<<1)),	//# 1417, ticks 17408, elapsed 2, voice: 0 note: 74 velocity 79 event ('note', 17408, 1, 74, 79)
	9,((( 3 &4)<<5)|( 79 &0x7f)), ((3 &3)|((88 &0x7e)<<1)),	//# 1418, ticks 17460, elapsed 9, voice: 3 note: 79 velocity 88 event ('note', 17460, 4, 79, 88)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((77 &0x7e)<<1)),	//# 1419, ticks 17460, elapsed 0, voice: 1 note: 73 velocity 77 event ('note', 17460, 5, 73, 77)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((77 &0x7e)<<1)),	//# 1420, ticks 17460, elapsed 0, voice: 1 note: 73 velocity 77 event ('note', 17460, 6, 73, 77)
	// Note off skipped, note 57 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1422, ticks 17472, elapsed 2, voice: 0 note: 74 velocity 0 event ('note', 17472, 1, 74, 0)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((83 &0x7e)<<1)),	//# 1423, ticks 17472, elapsed 0, voice: 0 note: 76 velocity 83 event ('note', 17472, 1, 76, 83)
	0,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((52 &0x7e)<<1)),	//# 1424, ticks 17472, elapsed 0, voice: 1 note: 52 velocity 52 event ('note', 17472, 1, 52, 52)
	2,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1425, ticks 17484, elapsed 2, voice: 2 note: 81 velocity 0 event ('note', 17484, 4, 81, 0)
	9,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1426, ticks 17536, elapsed 9, voice: 0 note: 76 velocity 0 event ('note', 17536, 1, 76, 0)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((77 &0x7e)<<1)),	//# 1427, ticks 17536, elapsed 0, voice: 0 note: 74 velocity 77 event ('note', 17536, 1, 74, 77)
	3,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1428, ticks 17556, elapsed 3, voice: 1 note: 52 velocity 0 event ('note', 17556, 1, 52, 0)
	2,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((54 &0x7e)<<1)),	//# 1429, ticks 17568, elapsed 2, voice: 1 note: 57 velocity 54 event ('note', 17568, 1, 57, 54)
	4,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1430, ticks 17592, elapsed 4, voice: 0 note: 74 velocity 0 event ('note', 17592, 1, 74, 0)
	1,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((78 &0x7e)<<1)),	//# 1431, ticks 17600, elapsed 1, voice: 0 note: 76 velocity 78 event ('note', 17600, 1, 76, 78)
	8,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((83 &0x7e)<<1)),	//# 1432, ticks 17648, elapsed 8, voice: 2 note: 78 velocity 83 event ('note', 17648, 4, 78, 83)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((112 &0x7e)<<1)),	//# 1433, ticks 17652, elapsed 0, voice: 1 note: 62 velocity 112 event ('note', 17652, 8, 62, 112)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((58 &0x7e)<<1)),	//# 1434, ticks 17656, elapsed 0, voice: 0 note: 69 velocity 58 event ('note', 17656, 7, 69, 58)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 1435, ticks 17660, elapsed 0, voice: 0 note: 50 velocity 88 event ('note', 17660, 3, 50, 88)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((84 &0x7e)<<1)),	//# 1436, ticks 17660, elapsed 0, voice: 2 note: 74 velocity 84 event ('note', 17660, 5, 74, 84)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((84 &0x7e)<<1)),	//# 1437, ticks 17660, elapsed 0, voice: 2 note: 74 velocity 84 event ('note', 17660, 6, 74, 84)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((90 &0x7e)<<1)),	//# 1438, ticks 17664, elapsed 0, voice: 2 note: 78 velocity 90 event ('note', 17664, 1, 78, 90)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((62 &0x7e)<<1)),	//# 1439, ticks 17664, elapsed 0, voice: 0 note: 50 velocity 62 event ('note', 17664, 1, 50, 62)
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((83 &0x7e)<<1)),	//# 1440, ticks 17668, elapsed 0, voice: 0 note: 38 velocity 83 event ('note', 17668, 2, 38, 83)
	0,((( 3 &4)<<5)|( 79 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1441, ticks 17668, elapsed 0, voice: 3 note: 79 velocity 0 event ('note', 17668, 4, 79, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	4,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1444, ticks 17696, elapsed 4, voice: 1 note: 62 velocity 0 event ('note', 17696, 8, 62, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	6,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((102 &0x7e)<<1)),	//# 1447, ticks 17736, elapsed 6, voice: 1 note: 62 velocity 102 event ('note', 17736, 8, 62, 102)
	2,((( 3 &4)<<5)|( 79 &0x7f)), ((3 &3)|((85 &0x7e)<<1)),	//# 1448, ticks 17748, elapsed 2, voice: 3 note: 79 velocity 85 event ('note', 17748, 4, 79, 85)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((81 &0x7e)<<1)),	//# 1449, ticks 17748, elapsed 0, voice: 0 note: 67 velocity 81 event ('note', 17748, 7, 67, 81)
	2,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((81 &0x7e)<<1)),	//# 1450, ticks 17760, elapsed 2, voice: 0 note: 76 velocity 81 event ('note', 17760, 1, 76, 81)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1451, ticks 17760, elapsed 0, voice: 2 note: 78 velocity 0 event ('note', 17760, 4, 78, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	11,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1457, ticks 17828, elapsed 11, voice: 2 note: 66 velocity 100 event ('note', 17828, 8, 66, 100)
	2,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((86 &0x7e)<<1)),	//# 1458, ticks 17844, elapsed 2, voice: 0 note: 81 velocity 86 event ('note', 17844, 4, 81, 86)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1459, ticks 17848, elapsed 0, voice: 1 note: 62 velocity 0 event ('note', 17848, 8, 62, 0)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((77 &0x7e)<<1)),	//# 1460, ticks 17852, elapsed 0, voice: 1 note: 69 velocity 77 event ('note', 17852, 5, 69, 77)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((77 &0x7e)<<1)),	//# 1461, ticks 17852, elapsed 0, voice: 1 note: 69 velocity 77 event ('note', 17852, 6, 69, 77)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((67 &0x7e)<<1)),	//# 1462, ticks 17852, elapsed 0, voice: 1 note: 66 velocity 67 event ('note', 17852, 7, 66, 67)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((87 &0x7e)<<1)),	//# 1463, ticks 17856, elapsed 0, voice: 1 note: 74 velocity 87 event ('note', 17856, 1, 74, 87)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1464, ticks 17856, elapsed 0, voice: 3 note: 62 velocity 64 event ('note', 17856, 1, 62, 64)
	// Note off skipped, note 79 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	5,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1468, ticks 17888, elapsed 5, voice: 2 note: 66 velocity 0 event ('note', 17888, 8, 66, 0)
	4,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((103 &0x7e)<<1)),	//# 1469, ticks 17916, elapsed 4, voice: 2 note: 66 velocity 103 event ('note', 17916, 8, 66, 103)
	3,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((73 &0x7e)<<1)),	//# 1470, ticks 17936, elapsed 3, voice: 3 note: 64 velocity 73 event ('note', 17936, 7, 64, 73)
	1,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1471, ticks 17944, elapsed 1, voice: 2 note: 66 velocity 0 event ('note', 17944, 7, 66, 0)
	1,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((86 &0x7e)<<1)),	//# 1472, ticks 17952, elapsed 1, voice: 2 note: 76 velocity 86 event ('note', 17952, 1, 76, 86)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((80 &0x7e)<<1)),	//# 1473, ticks 17952, elapsed 0, voice: 3 note: 61 velocity 80 event ('note', 17952, 1, 61, 80)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	4,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1477, ticks 17976, elapsed 4, voice: 1 note: 74 velocity 0 event ('note', 17976, 1, 74, 0)
	6,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((108 &0x7e)<<1)),	//# 1478, ticks 18016, elapsed 6, voice: 1 note: 69 velocity 108 event ('note', 18016, 8, 69, 108)
	// Note off skipped, note 50 not found in channels, probably interrupted
	3,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((51 &0x7e)<<1)),	//# 1480, ticks 18036, elapsed 3, voice: 3 note: 62 velocity 51 event ('note', 18036, 7, 62, 51)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((91 &0x7e)<<1)),	//# 1483, ticks 18044, elapsed 1, voice: 3 note: 74 velocity 91 event ('note', 18044, 5, 74, 91)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((91 &0x7e)<<1)),	//# 1484, ticks 18044, elapsed 0, voice: 0 note: 74 velocity 91 event ('note', 18044, 6, 74, 91)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1485, ticks 18048, elapsed 0, voice: 2 note: 78 velocity 100 event ('note', 18048, 1, 78, 100)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((73 &0x7e)<<1)),	//# 1486, ticks 18048, elapsed 0, voice: 0 note: 62 velocity 73 event ('note', 18048, 1, 62, 73)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	4,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1490, ticks 18076, elapsed 4, voice: 1 note: 69 velocity 0 event ('note', 18076, 8, 69, 0)
	4,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1491, ticks 18104, elapsed 4, voice: 0 note: 62 velocity 0 event ('note', 18104, 7, 62, 0)
	2,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((113 &0x7e)<<1)),	//# 1492, ticks 18116, elapsed 2, voice: 0 note: 69 velocity 113 event ('note', 18116, 8, 69, 113)
	// Note off skipped, note 62 not found in channels, probably interrupted
	4,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((83 &0x7e)<<1)),	//# 1494, ticks 18140, elapsed 4, voice: 1 note: 76 velocity 83 event ('note', 18140, 5, 76, 83)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((83 &0x7e)<<1)),	//# 1495, ticks 18140, elapsed 0, voice: 1 note: 76 velocity 83 event ('note', 18140, 6, 76, 83)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((76 &0x7e)<<1)),	//# 1496, ticks 18144, elapsed 0, voice: 1 note: 79 velocity 76 event ('note', 18144, 1, 79, 76)
	3,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1497, ticks 18164, elapsed 3, voice: 2 note: 78 velocity 0 event ('note', 18164, 1, 78, 0)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1498, ticks 18168, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 18168, 5, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	7,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((102 &0x7e)<<1)),	//# 1500, ticks 18212, elapsed 7, voice: 2 note: 74 velocity 102 event ('note', 18212, 8, 74, 102)
	1,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((89 &0x7e)<<1)),	//# 1501, ticks 18220, elapsed 1, voice: 3 note: 50 velocity 89 event ('note', 18220, 3, 50, 89)
	1,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((90 &0x7e)<<1)),	//# 1502, ticks 18228, elapsed 1, voice: 1 note: 38 velocity 90 event ('note', 18228, 2, 38, 90)
	0,((( 3 &4)<<5)|( 79 &0x7f)), ((3 &3)|((94 &0x7e)<<1)),	//# 1503, ticks 18232, elapsed 0, voice: 3 note: 79 velocity 94 event ('note', 18232, 4, 79, 94)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((77 &0x7e)<<1)),	//# 1504, ticks 18232, elapsed 0, voice: 1 note: 78 velocity 77 event ('note', 18232, 5, 78, 77)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((77 &0x7e)<<1)),	//# 1505, ticks 18232, elapsed 0, voice: 1 note: 78 velocity 77 event ('note', 18232, 6, 78, 77)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((80 &0x7e)<<1)),	//# 1506, ticks 18232, elapsed 0, voice: 1 note: 57 velocity 80 event ('note', 18232, 7, 57, 80)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1507, ticks 18232, elapsed 0, voice: 0 note: 69 velocity 0 event ('note', 18232, 8, 69, 0)
	1,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((78 &0x7e)<<1)),	//# 1508, ticks 18240, elapsed 1, voice: 0 note: 81 velocity 78 event ('note', 18240, 1, 81, 78)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((67 &0x7e)<<1)),	//# 1509, ticks 18240, elapsed 0, voice: 0 note: 50 velocity 67 event ('note', 18240, 1, 50, 67)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	4,((( 3 &4)<<5)|( 79 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1512, ticks 18268, elapsed 4, voice: 3 note: 79 velocity 0 event ('note', 18268, 1, 79, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1513, ticks 18272, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 18272, 8, 74, 0)
	// Note off skipped, note 81 not found in channels, probably interrupted
	5,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1515, ticks 18304, elapsed 5, voice: 1 note: 57 velocity 0 event ('note', 18304, 7, 57, 0)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((99 &0x7e)<<1)),	//# 1516, ticks 18304, elapsed 0, voice: 1 note: 74 velocity 99 event ('note', 18304, 8, 74, 99)
	1,((( 2 &4)<<5)|( 79 &0x7f)), ((2 &3)|((93 &0x7e)<<1)),	//# 1517, ticks 18312, elapsed 1, voice: 2 note: 79 velocity 93 event ('note', 18312, 5, 79, 93)
	0,((( 3 &4)<<5)|( 79 &0x7f)), ((3 &3)|((93 &0x7e)<<1)),	//# 1518, ticks 18312, elapsed 0, voice: 3 note: 79 velocity 93 event ('note', 18312, 6, 79, 93)
	// Note off skipped, note 38 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1520, ticks 18316, elapsed 0, voice: 0 note: 50 velocity 0 event ('note', 18316, 3, 50, 0)
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((101 &0x7e)<<1)),	//# 1521, ticks 18316, elapsed 0, voice: 0 note: 78 velocity 101 event ('note', 18316, 4, 78, 101)
	2,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1522, ticks 18332, elapsed 2, voice: 0 note: 78 velocity 0 event ('note', 18332, 5, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 83 &0x7f)), ((0 &3)|((76 &0x7e)<<1)),	//# 1524, ticks 18336, elapsed 0, voice: 0 note: 83 velocity 76 event ('note', 18336, 1, 83, 76)
	0,((( 2 &4)<<5)|( 79 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1525, ticks 18340, elapsed 0, voice: 2 note: 79 velocity 0 event ('note', 18340, 4, 79, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 81 not found in channels, probably interrupted
	10,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((90 &0x7e)<<1)),	//# 1528, ticks 18400, elapsed 10, voice: 2 note: 73 velocity 90 event ('note', 18400, 8, 73, 90)
	3,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((90 &0x7e)<<1)),	//# 1529, ticks 18420, elapsed 3, voice: 0 note: 57 velocity 90 event ('note', 18420, 3, 57, 90)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((72 &0x7e)<<1)),	//# 1530, ticks 18424, elapsed 0, voice: 0 note: 57 velocity 72 event ('note', 18424, 7, 57, 72)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1531, ticks 18424, elapsed 0, voice: 1 note: 74 velocity 0 event ('note', 18424, 8, 74, 0)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((84 &0x7e)<<1)),	//# 1532, ticks 18428, elapsed 0, voice: 1 note: 76 velocity 84 event ('note', 18428, 4, 76, 84)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((79 &0x7e)<<1)),	//# 1533, ticks 18432, elapsed 0, voice: 0 note: 76 velocity 79 event ('note', 18432, 1, 76, 79)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((68 &0x7e)<<1)),	//# 1534, ticks 18432, elapsed 0, voice: 0 note: 57 velocity 68 event ('note', 18432, 1, 57, 68)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((77 &0x7e)<<1)),	//# 1535, ticks 18432, elapsed 0, voice: 0 note: 45 velocity 77 event ('note', 18432, 2, 45, 77)
	0,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((81 &0x7e)<<1)),	//# 1536, ticks 18432, elapsed 0, voice: 0 note: 81 velocity 81 event ('note', 18432, 5, 81, 81)
	0,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((81 &0x7e)<<1)),	//# 1537, ticks 18432, elapsed 0, voice: 0 note: 81 velocity 81 event ('note', 18432, 6, 81, 81)
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	9,((( 3 &4)<<5)|( 79 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1540, ticks 18488, elapsed 9, voice: 3 note: 79 velocity 0 event ('note', 18488, 5, 79, 0)
	// Note off skipped, note 79 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	2,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((96 &0x7e)<<1)),	//# 1543, ticks 18500, elapsed 2, voice: 3 note: 74 velocity 96 event ('note', 18500, 8, 74, 96)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	4,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 1547, ticks 18528, elapsed 4, voice: 0 note: 78 velocity 88 event ('note', 18528, 1, 78, 88)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1548, ticks 18528, elapsed 0, voice: 2 note: 73 velocity 0 event ('note', 18528, 8, 73, 0)
	2,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1549, ticks 18540, elapsed 2, voice: 1 note: 76 velocity 0 event ('note', 18540, 1, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 81 not found in channels, probably interrupted
	// Note off skipped, note 81 not found in channels, probably interrupted
	10,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((98 &0x7e)<<1)),	//# 1553, ticks 18600, elapsed 10, voice: 1 note: 73 velocity 98 event ('note', 18600, 8, 73, 98)
	2,((( 2 &4)<<5)|( 45 &0x7f)), ((2 &3)|((93 &0x7e)<<1)),	//# 1554, ticks 18612, elapsed 2, voice: 2 note: 45 velocity 93 event ('note', 18612, 3, 45, 93)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((67 &0x7e)<<1)),	//# 1555, ticks 18612, elapsed 0, voice: 0 note: 61 velocity 67 event ('note', 18612, 7, 61, 67)
	0,((( 0 &4)<<5)|( 33 &0x7f)), ((0 &3)|((86 &0x7e)<<1)),	//# 1556, ticks 18616, elapsed 0, voice: 0 note: 33 velocity 86 event ('note', 18616, 2, 33, 86)
	1,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((77 &0x7e)<<1)),	//# 1557, ticks 18624, elapsed 1, voice: 0 note: 45 velocity 77 event ('note', 18624, 1, 45, 77)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((84 &0x7e)<<1)),	//# 1558, ticks 18624, elapsed 0, voice: 0 note: 76 velocity 84 event ('note', 18624, 1, 76, 84)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1559, ticks 18624, elapsed 0, voice: 0 note: 73 velocity 64 event ('note', 18624, 5, 73, 64)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 1560, ticks 18624, elapsed 0, voice: 0 note: 73 velocity 64 event ('note', 18624, 6, 73, 64)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((78 &0x7e)<<1)),	//# 1561, ticks 18628, elapsed 0, voice: 0 note: 69 velocity 78 event ('note', 18628, 4, 69, 78)
	// Note off skipped, note 78 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1563, ticks 18636, elapsed 1, voice: 3 note: 74 velocity 0 event ('note', 18636, 8, 74, 0)
	9,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((99 &0x7e)<<1)),	//# 1564, ticks 18692, elapsed 9, voice: 3 note: 71 velocity 99 event ('note', 18692, 8, 71, 99)
	1,((( 2 &4)<<5)|( 45 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1565, ticks 18700, elapsed 1, voice: 2 note: 45 velocity 0 event ('note', 18700, 3, 45, 0)
	// Note off skipped, note 33 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	3,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((84 &0x7e)<<1)),	//# 1569, ticks 18720, elapsed 3, voice: 2 note: 74 velocity 84 event ('note', 18720, 1, 74, 84)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1570, ticks 18724, elapsed 0, voice: 1 note: 73 velocity 0 event ('note', 18724, 8, 73, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	12,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 1572, ticks 18796, elapsed 12, voice: 1 note: 47 velocity 89 event ('note', 18796, 3, 47, 89)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((97 &0x7e)<<1)),	//# 1573, ticks 18796, elapsed 0, voice: 0 note: 69 velocity 97 event ('note', 18796, 8, 69, 97)
	1,((( 2 &4)<<5)|( 35 &0x7f)), ((2 &3)|((89 &0x7e)<<1)),	//# 1574, ticks 18804, elapsed 1, voice: 2 note: 35 velocity 89 event ('note', 18804, 2, 35, 89)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((77 &0x7e)<<1)),	//# 1575, ticks 18804, elapsed 0, voice: 1 note: 74 velocity 77 event ('note', 18804, 5, 74, 77)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((77 &0x7e)<<1)),	//# 1576, ticks 18804, elapsed 0, voice: 1 note: 74 velocity 77 event ('note', 18804, 6, 74, 77)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 1577, ticks 18804, elapsed 0, voice: 1 note: 62 velocity 64 event ('note', 18804, 7, 62, 64)
	2,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((79 &0x7e)<<1)),	//# 1578, ticks 18816, elapsed 2, voice: 1 note: 73 velocity 79 event ('note', 18816, 1, 73, 79)
	0,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((74 &0x7e)<<1)),	//# 1579, ticks 18816, elapsed 0, voice: 1 note: 47 velocity 74 event ('note', 18816, 1, 47, 74)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1580, ticks 18820, elapsed 0, voice: 3 note: 71 velocity 0 event ('note', 18820, 8, 71, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	4,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1582, ticks 18844, elapsed 4, voice: 0 note: 69 velocity 0 event ('note', 18844, 4, 69, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	6,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1585, ticks 18880, elapsed 6, voice: 1 note: 47 velocity 0 event ('note', 18880, 3, 47, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	2,((( 2 &4)<<5)|( 35 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1587, ticks 18896, elapsed 2, voice: 2 note: 35 velocity 0 event ('note', 18896, 2, 35, 0)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((106 &0x7e)<<1)),	//# 1588, ticks 18896, elapsed 0, voice: 0 note: 67 velocity 106 event ('note', 18896, 8, 67, 106)
	// Note off skipped, note 69 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 1590, ticks 18912, elapsed 2, voice: 1 note: 71 velocity 88 event ('note', 18912, 1, 71, 88)
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	14,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((98 &0x7e)<<1)),	//# 1593, ticks 18996, elapsed 14, voice: 2 note: 49 velocity 98 event ('note', 18996, 3, 49, 98)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 1594, ticks 18996, elapsed 0, voice: 3 note: 64 velocity 64 event ('note', 18996, 7, 64, 64)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((102 &0x7e)<<1)),	//# 1595, ticks 18996, elapsed 0, voice: 3 note: 66 velocity 102 event ('note', 18996, 8, 66, 102)
	0,((( 1 &4)<<5)|( 37 &0x7f)), ((1 &3)|((97 &0x7e)<<1)),	//# 1596, ticks 19000, elapsed 0, voice: 1 note: 37 velocity 97 event ('note', 19000, 2, 37, 97)
	// Note off skipped, note 71 not found in channels, probably interrupted
	1,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((77 &0x7e)<<1)),	//# 1598, ticks 19008, elapsed 1, voice: 1 note: 69 velocity 77 event ('note', 19008, 1, 69, 77)
	0,((( 1 &4)<<5)|( 49 &0x7f)), ((1 &3)|((76 &0x7e)<<1)),	//# 1599, ticks 19008, elapsed 0, voice: 1 note: 49 velocity 76 event ('note', 19008, 1, 49, 76)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((69 &0x7e)<<1)),	//# 1600, ticks 19012, elapsed 0, voice: 1 note: 76 velocity 69 event ('note', 19012, 5, 76, 69)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((69 &0x7e)<<1)),	//# 1601, ticks 19012, elapsed 0, voice: 1 note: 76 velocity 69 event ('note', 19012, 6, 76, 69)
	2,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1602, ticks 19028, elapsed 2, voice: 0 note: 67 velocity 0 event ('note', 19028, 8, 67, 0)
	6,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1603, ticks 19064, elapsed 6, voice: 2 note: 49 velocity 0 event ('note', 19064, 3, 49, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 37 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	4,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((99 &0x7e)<<1)),	//# 1608, ticks 19088, elapsed 4, voice: 0 note: 64 velocity 99 event ('note', 19088, 8, 64, 99)
	// Note off skipped, note 49 not found in channels, probably interrupted
	2,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((68 &0x7e)<<1)),	//# 1610, ticks 19104, elapsed 2, voice: 2 note: 67 velocity 68 event ('note', 19104, 1, 67, 68)
	1,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1611, ticks 19112, elapsed 1, voice: 3 note: 66 velocity 0 event ('note', 19112, 8, 66, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	13,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((88 &0x7e)<<1)),	//# 1613, ticks 19192, elapsed 13, voice: 3 note: 50 velocity 88 event ('note', 19192, 3, 50, 88)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((56 &0x7e)<<1)),	//# 1614, ticks 19192, elapsed 0, voice: 2 note: 57 velocity 56 event ('note', 19192, 7, 57, 56)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((91 &0x7e)<<1)),	//# 1615, ticks 19192, elapsed 0, voice: 2 note: 62 velocity 91 event ('note', 19192, 8, 62, 91)
	1,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((76 &0x7e)<<1)),	//# 1616, ticks 19200, elapsed 1, voice: 1 note: 66 velocity 76 event ('note', 19200, 1, 66, 76)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((50 &0x7e)<<1)),	//# 1617, ticks 19200, elapsed 0, voice: 1 note: 50 velocity 50 event ('note', 19200, 1, 50, 50)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((68 &0x7e)<<1)),	//# 1618, ticks 19200, elapsed 0, voice: 1 note: 78 velocity 68 event ('note', 19200, 5, 78, 68)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((68 &0x7e)<<1)),	//# 1619, ticks 19200, elapsed 0, voice: 1 note: 78 velocity 68 event ('note', 19200, 6, 78, 68)
	0,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 1620, ticks 19204, elapsed 0, voice: 1 note: 38 velocity 89 event ('note', 19204, 2, 38, 89)
	2,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1621, ticks 19216, elapsed 2, voice: 0 note: 64 velocity 0 event ('note', 19216, 8, 64, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	13,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((83 &0x7e)<<1)),	//# 1625, ticks 19296, elapsed 13, voice: 0 note: 64 velocity 83 event ('note', 19296, 1, 64, 83)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	16,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 1629, ticks 19392, elapsed 16, voice: 0 note: 66 velocity 88 event ('note', 19392, 1, 66, 88)
	4,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((75 &0x7e)<<1)),	//# 1630, ticks 19420, elapsed 4, voice: 0 note: 74 velocity 75 event ('note', 19420, 5, 74, 75)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((75 &0x7e)<<1)),	//# 1631, ticks 19420, elapsed 0, voice: 0 note: 74 velocity 75 event ('note', 19420, 6, 74, 75)
	// Note off skipped, note 64 not found in channels, probably interrupted
	4,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1633, ticks 19444, elapsed 4, voice: 2 note: 62 velocity 0 event ('note', 19444, 8, 62, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	7,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((77 &0x7e)<<1)),	//# 1635, ticks 19488, elapsed 7, voice: 2 note: 69 velocity 77 event ('note', 19488, 1, 69, 77)
	// Note off skipped, note 66 not found in channels, probably interrupted
	13,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1637, ticks 19568, elapsed 13, voice: 3 note: 50 velocity 0 event ('note', 19568, 3, 50, 0)
	2,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((88 &0x7e)<<1)),	//# 1638, ticks 19584, elapsed 2, voice: 3 note: 64 velocity 88 event ('note', 19584, 1, 64, 88)
	2,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((77 &0x7e)<<1)),	//# 1639, ticks 19596, elapsed 2, voice: 0 note: 73 velocity 77 event ('note', 19596, 5, 73, 77)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((77 &0x7e)<<1)),	//# 1640, ticks 19596, elapsed 0, voice: 0 note: 73 velocity 77 event ('note', 19596, 6, 73, 77)
	0,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1641, ticks 19600, elapsed 0, voice: 1 note: 38 velocity 0 event ('note', 19600, 2, 38, 0)
	1,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1642, ticks 19608, elapsed 1, voice: 2 note: 69 velocity 0 event ('note', 19608, 1, 69, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	12,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((66 &0x7e)<<1)),	//# 1646, ticks 19680, elapsed 12, voice: 1 note: 69 velocity 66 event ('note', 19680, 1, 69, 66)
	5,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1647, ticks 19712, elapsed 5, voice: 3 note: 64 velocity 0 event ('note', 19712, 1, 64, 0)
	10,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((75 &0x7e)<<1)),	//# 1648, ticks 19772, elapsed 10, voice: 2 note: 71 velocity 75 event ('note', 19772, 5, 71, 75)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((75 &0x7e)<<1)),	//# 1649, ticks 19772, elapsed 0, voice: 3 note: 71 velocity 75 event ('note', 19772, 6, 71, 75)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((83 &0x7e)<<1)),	//# 1650, ticks 19776, elapsed 0, voice: 1 note: 62 velocity 83 event ('note', 19776, 1, 62, 83)
	4,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1651, ticks 19800, elapsed 4, voice: 0 note: 73 velocity 0 event ('note', 19800, 5, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	12,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((62 &0x7e)<<1)),	//# 1654, ticks 19872, elapsed 12, voice: 0 note: 69 velocity 62 event ('note', 19872, 1, 69, 62)
	4,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1655, ticks 19900, elapsed 4, voice: 1 note: 62 velocity 0 event ('note', 19900, 1, 62, 0)
	11,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((70 &0x7e)<<1)),	//# 1656, ticks 19964, elapsed 11, voice: 1 note: 69 velocity 70 event ('note', 19964, 5, 69, 70)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((70 &0x7e)<<1)),	//# 1657, ticks 19964, elapsed 0, voice: 0 note: 69 velocity 70 event ('note', 19964, 6, 69, 70)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((89 &0x7e)<<1)),	//# 1658, ticks 19968, elapsed 0, voice: 0 note: 61 velocity 89 event ('note', 19968, 1, 61, 89)
	3,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1659, ticks 19988, elapsed 3, voice: 2 note: 71 velocity 0 event ('note', 19988, 5, 71, 0)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1660, ticks 19988, elapsed 0, voice: 3 note: 71 velocity 0 event ('note', 19988, 6, 71, 0)
	1,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1661, ticks 19996, elapsed 1, voice: 1 note: 69 velocity 0 event ('note', 19996, 1, 69, 0)
	11,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((65 &0x7e)<<1)),	//# 1662, ticks 20064, elapsed 11, voice: 1 note: 69 velocity 65 event ('note', 20064, 1, 69, 65)
	2,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1663, ticks 20080, elapsed 2, voice: 0 note: 61 velocity 0 event ('note', 20080, 1, 61, 0)
	13,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((86 &0x7e)<<1)),	//# 1664, ticks 20160, elapsed 13, voice: 0 note: 62 velocity 86 event ('note', 20160, 1, 62, 86)
	2,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((67 &0x7e)<<1)),	//# 1665, ticks 20172, elapsed 2, voice: 2 note: 78 velocity 67 event ('note', 20172, 4, 78, 67)
	2,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1666, ticks 20188, elapsed 2, voice: 1 note: 69 velocity 0 event ('note', 20188, 1, 69, 0)
	11,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((65 &0x7e)<<1)),	//# 1667, ticks 20256, elapsed 11, voice: 1 note: 69 velocity 65 event ('note', 20256, 1, 69, 65)
	3,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1668, ticks 20276, elapsed 3, voice: 0 note: 62 velocity 0 event ('note', 20276, 1, 62, 0)
	13,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((90 &0x7e)<<1)),	//# 1669, ticks 20352, elapsed 13, voice: 0 note: 61 velocity 90 event ('note', 20352, 1, 61, 90)
	2,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((72 &0x7e)<<1)),	//# 1670, ticks 20364, elapsed 2, voice: 3 note: 76 velocity 72 event ('note', 20364, 4, 76, 72)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1671, ticks 20368, elapsed 0, voice: 1 note: 69 velocity 0 event ('note', 20368, 1, 69, 0)
	4,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1672, ticks 20392, elapsed 4, voice: 2 note: 78 velocity 0 event ('note', 20392, 4, 78, 0)
	9,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((68 &0x7e)<<1)),	//# 1673, ticks 20448, elapsed 9, voice: 1 note: 69 velocity 68 event ('note', 20448, 1, 69, 68)
	3,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1674, ticks 20468, elapsed 3, voice: 0 note: 61 velocity 0 event ('note', 20468, 1, 61, 0)
	13,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((84 &0x7e)<<1)),	//# 1675, ticks 20544, elapsed 13, voice: 0 note: 59 velocity 84 event ('note', 20544, 1, 59, 84)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((75 &0x7e)<<1)),	//# 1676, ticks 20548, elapsed 0, voice: 2 note: 74 velocity 75 event ('note', 20548, 4, 74, 75)
	2,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1677, ticks 20560, elapsed 2, voice: 3 note: 76 velocity 0 event ('note', 20560, 4, 76, 0)
	1,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1678, ticks 20568, elapsed 1, voice: 1 note: 69 velocity 0 event ('note', 20568, 1, 69, 0)
	12,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((73 &0x7e)<<1)),	//# 1679, ticks 20640, elapsed 12, voice: 1 note: 69 velocity 73 event ('note', 20640, 1, 69, 73)
	1,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1680, ticks 20648, elapsed 1, voice: 0 note: 59 velocity 0 event ('note', 20648, 1, 59, 0)
	12,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1681, ticks 20720, elapsed 12, voice: 1 note: 69 velocity 0 event ('note', 20720, 1, 69, 0)
	2,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((79 &0x7e)<<1)),	//# 1682, ticks 20736, elapsed 2, voice: 0 note: 57 velocity 79 event ('note', 20736, 1, 57, 79)
	1,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((48 &0x7e)<<1)),	//# 1683, ticks 20744, elapsed 1, voice: 1 note: 73 velocity 48 event ('note', 20744, 4, 73, 48)
	1,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1684, ticks 20752, elapsed 1, voice: 2 note: 74 velocity 0 event ('note', 20752, 4, 74, 0)
	13,((( 2 &4)<<5)|( 45 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1685, ticks 20832, elapsed 13, voice: 2 note: 45 velocity 64 event ('note', 20832, 1, 45, 64)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	3,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1688, ticks 20852, elapsed 3, voice: 0 note: 57 velocity 0 event ('note', 20852, 1, 57, 0)
	12,((( 0 &4)<<5)|( 83 &0x7f)), ((0 &3)|((78 &0x7e)<<1)),	//# 1689, ticks 20924, elapsed 12, voice: 0 note: 83 velocity 78 event ('note', 20924, 5, 83, 78)
	0,((( 3 &4)<<5)|( 83 &0x7f)), ((3 &3)|((78 &0x7e)<<1)),	//# 1690, ticks 20924, elapsed 0, voice: 3 note: 83 velocity 78 event ('note', 20924, 6, 83, 78)
	0,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((83 &0x7e)<<1)),	//# 1691, ticks 20928, elapsed 0, voice: 1 note: 61 velocity 83 event ('note', 20928, 1, 61, 83)
	0,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((70 &0x7e)<<1)),	//# 1692, ticks 20928, elapsed 0, voice: 2 note: 43 velocity 70 event ('note', 20928, 1, 43, 70)
	// Note off skipped, note 45 not found in channels, probably interrupted
	9,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1694, ticks 20984, elapsed 9, voice: 1 note: 61 velocity 0 event ('note', 20984, 1, 61, 0)
	1,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((73 &0x7e)<<1)),	//# 1695, ticks 20992, elapsed 1, voice: 1 note: 59 velocity 73 event ('note', 20992, 1, 59, 73)
	2,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1696, ticks 21004, elapsed 2, voice: 2 note: 43 velocity 0 event ('note', 21004, 1, 43, 0)
	3,((( 2 &4)<<5)|( 45 &0x7f)), ((2 &3)|((52 &0x7e)<<1)),	//# 1697, ticks 21024, elapsed 3, voice: 2 note: 45 velocity 52 event ('note', 21024, 1, 45, 52)
	5,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((89 &0x7e)<<1)),	//# 1698, ticks 21056, elapsed 5, voice: 2 note: 61 velocity 89 event ('note', 21056, 1, 61, 89)
	1,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1699, ticks 21064, elapsed 1, voice: 1 note: 59 velocity 0 event ('note', 21064, 1, 59, 0)
	6,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1700, ticks 21104, elapsed 6, voice: 2 note: 61 velocity 0 event ('note', 21104, 1, 61, 0)
	1,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((93 &0x7e)<<1)),	//# 1701, ticks 21112, elapsed 1, voice: 1 note: 81 velocity 93 event ('note', 21112, 5, 81, 93)
	0,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((93 &0x7e)<<1)),	//# 1702, ticks 21112, elapsed 0, voice: 2 note: 81 velocity 93 event ('note', 21112, 6, 81, 93)
	1,((( 0 &4)<<5)|( 42 &0x7f)), ((0 &3)|((79 &0x7e)<<1)),	//# 1703, ticks 21120, elapsed 1, voice: 0 note: 42 velocity 79 event ('note', 21120, 1, 42, 79)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((82 &0x7e)<<1)),	//# 1704, ticks 21120, elapsed 0, voice: 3 note: 62 velocity 82 event ('note', 21120, 1, 62, 82)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	11,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1709, ticks 21184, elapsed 11, voice: 3 note: 62 velocity 0 event ('note', 21184, 1, 62, 0)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((78 &0x7e)<<1)),	//# 1710, ticks 21184, elapsed 0, voice: 3 note: 61 velocity 78 event ('note', 21184, 1, 61, 78)
	5,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((55 &0x7e)<<1)),	//# 1711, ticks 21216, elapsed 5, voice: 3 note: 45 velocity 55 event ('note', 21216, 1, 45, 55)
	0,((( 0 &4)<<5)|( 42 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1712, ticks 21220, elapsed 0, voice: 0 note: 42 velocity 0 event ('note', 21220, 1, 42, 0)
	4,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((71 &0x7e)<<1)),	//# 1713, ticks 21248, elapsed 4, voice: 0 note: 62 velocity 71 event ('note', 21248, 1, 62, 71)
	// Note off skipped, note 61 not found in channels, probably interrupted
	7,((( 3 &4)<<5)|( 79 &0x7f)), ((3 &3)|((81 &0x7e)<<1)),	//# 1715, ticks 21292, elapsed 7, voice: 3 note: 79 velocity 81 event ('note', 21292, 5, 79, 81)
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((81 &0x7e)<<1)),	//# 1716, ticks 21292, elapsed 0, voice: 0 note: 79 velocity 81 event ('note', 21292, 6, 79, 81)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((65 &0x7e)<<1)),	//# 1717, ticks 21296, elapsed 0, voice: 0 note: 73 velocity 65 event ('note', 21296, 4, 73, 65)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((79 &0x7e)<<1)),	//# 1720, ticks 21312, elapsed 2, voice: 0 note: 64 velocity 79 event ('note', 21312, 1, 64, 79)
	0,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((61 &0x7e)<<1)),	//# 1721, ticks 21312, elapsed 0, voice: 0 note: 40 velocity 61 event ('note', 21312, 1, 40, 61)
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1722, ticks 21316, elapsed 0, voice: 1 note: 81 velocity 0 event ('note', 21316, 5, 81, 0)
	0,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1723, ticks 21316, elapsed 0, voice: 2 note: 81 velocity 0 event ('note', 21316, 6, 81, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	10,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((76 &0x7e)<<1)),	//# 1725, ticks 21376, elapsed 10, voice: 1 note: 62 velocity 76 event ('note', 21376, 1, 62, 76)
	1,((( 0 &4)<<5)|( 40 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1726, ticks 21384, elapsed 1, voice: 0 note: 40 velocity 0 event ('note', 21384, 1, 40, 0)
	4,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((45 &0x7e)<<1)),	//# 1727, ticks 21408, elapsed 4, voice: 0 note: 45 velocity 45 event ('note', 21408, 1, 45, 45)
	4,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1728, ticks 21432, elapsed 4, voice: 1 note: 62 velocity 0 event ('note', 21432, 1, 62, 0)
	1,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((81 &0x7e)<<1)),	//# 1729, ticks 21440, elapsed 1, voice: 1 note: 64 velocity 81 event ('note', 21440, 1, 64, 81)
	8,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((79 &0x7e)<<1)),	//# 1730, ticks 21488, elapsed 8, voice: 2 note: 78 velocity 79 event ('note', 21488, 5, 78, 79)
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((79 &0x7e)<<1)),	//# 1731, ticks 21488, elapsed 0, voice: 0 note: 78 velocity 79 event ('note', 21488, 6, 78, 79)
	1,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((89 &0x7e)<<1)),	//# 1732, ticks 21496, elapsed 1, voice: 0 note: 50 velocity 89 event ('note', 21496, 3, 50, 89)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((57 &0x7e)<<1)),	//# 1733, ticks 21496, elapsed 0, voice: 2 note: 69 velocity 57 event ('note', 21496, 7, 69, 57)
	1,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((94 &0x7e)<<1)),	//# 1734, ticks 21504, elapsed 1, voice: 2 note: 66 velocity 94 event ('note', 21504, 1, 66, 94)
	0,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((69 &0x7e)<<1)),	//# 1735, ticks 21504, elapsed 0, voice: 1 note: 38 velocity 69 event ('note', 21504, 1, 38, 69)
	0,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((80 &0x7e)<<1)),	//# 1736, ticks 21504, elapsed 0, voice: 1 note: 38 velocity 80 event ('note', 21504, 2, 38, 80)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((53 &0x7e)<<1)),	//# 1737, ticks 21504, elapsed 0, voice: 1 note: 74 velocity 53 event ('note', 21504, 4, 74, 53)
	0,((( 3 &4)<<5)|( 79 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1738, ticks 21508, elapsed 0, voice: 3 note: 79 velocity 0 event ('note', 21508, 5, 79, 0)
	// Note off skipped, note 79 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((89 &0x7e)<<1)),	//# 1740, ticks 21508, elapsed 0, voice: 3 note: 62 velocity 89 event ('note', 21508, 8, 62, 89)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	7,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1744, ticks 21552, elapsed 7, voice: 3 note: 62 velocity 0 event ('note', 21552, 8, 62, 0)
	5,((( 3 &4)<<5)|( 79 &0x7f)), ((3 &3)|((88 &0x7e)<<1)),	//# 1745, ticks 21584, elapsed 5, voice: 3 note: 79 velocity 88 event ('note', 21584, 5, 79, 88)
	0,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 1746, ticks 21584, elapsed 0, voice: 1 note: 79 velocity 88 event ('note', 21584, 6, 79, 88)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((79 &0x7e)<<1)),	//# 1747, ticks 21584, elapsed 0, voice: 1 note: 67 velocity 79 event ('note', 21584, 7, 67, 79)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 1748, ticks 21588, elapsed 0, voice: 1 note: 62 velocity 88 event ('note', 21588, 8, 62, 88)
	2,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 1749, ticks 21600, elapsed 2, voice: 1 note: 64 velocity 89 event ('note', 21600, 1, 64, 89)
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	6,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1754, ticks 21636, elapsed 6, voice: 2 note: 66 velocity 0 event ('note', 21636, 1, 66, 0)
	6,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((92 &0x7e)<<1)),	//# 1755, ticks 21676, elapsed 6, voice: 2 note: 66 velocity 92 event ('note', 21676, 8, 66, 92)
	1,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((77 &0x7e)<<1)),	//# 1756, ticks 21684, elapsed 1, voice: 3 note: 66 velocity 77 event ('note', 21684, 7, 66, 77)
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 81 &0x7f)), ((3 &3)|((82 &0x7e)<<1)),	//# 1758, ticks 21688, elapsed 0, voice: 3 note: 81 velocity 82 event ('note', 21688, 5, 81, 82)
	0,((( 3 &4)<<5)|( 81 &0x7f)), ((3 &3)|((82 &0x7e)<<1)),	//# 1759, ticks 21688, elapsed 0, voice: 3 note: 81 velocity 82 event ('note', 21688, 6, 81, 82)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((69 &0x7e)<<1)),	//# 1760, ticks 21692, elapsed 0, voice: 3 note: 69 velocity 69 event ('note', 21692, 4, 69, 69)
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((89 &0x7e)<<1)),	//# 1762, ticks 21696, elapsed 0, voice: 3 note: 62 velocity 89 event ('note', 21696, 1, 62, 89)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((67 &0x7e)<<1)),	//# 1763, ticks 21696, elapsed 0, voice: 0 note: 50 velocity 67 event ('note', 21696, 1, 50, 67)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 79 not found in channels, probably interrupted
	// Note off skipped, note 79 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1767, ticks 21712, elapsed 2, voice: 1 note: 64 velocity 0 event ('note', 21712, 1, 64, 0)
	4,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1768, ticks 21740, elapsed 4, voice: 2 note: 66 velocity 0 event ('note', 21740, 8, 66, 0)
	4,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((68 &0x7e)<<1)),	//# 1769, ticks 21768, elapsed 4, voice: 1 note: 64 velocity 68 event ('note', 21768, 7, 64, 68)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((87 &0x7e)<<1)),	//# 1770, ticks 21772, elapsed 0, voice: 2 note: 66 velocity 87 event ('note', 21772, 8, 66, 87)
	1,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1771, ticks 21780, elapsed 1, voice: 2 note: 66 velocity 0 event ('note', 21780, 7, 66, 0)
	2,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((88 &0x7e)<<1)),	//# 1772, ticks 21792, elapsed 2, voice: 2 note: 64 velocity 88 event ('note', 21792, 1, 64, 88)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((82 &0x7e)<<1)),	//# 1773, ticks 21792, elapsed 0, voice: 0 note: 49 velocity 82 event ('note', 21792, 1, 49, 82)
	// Note off skipped, note 50 not found in channels, probably interrupted
	2,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1775, ticks 21808, elapsed 2, voice: 3 note: 62 velocity 0 event ('note', 21808, 1, 62, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	9,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((65 &0x7e)<<1)),	//# 1779, ticks 21864, elapsed 9, voice: 3 note: 62 velocity 65 event ('note', 21864, 7, 62, 65)
	1,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((97 &0x7e)<<1)),	//# 1780, ticks 21872, elapsed 1, voice: 3 note: 69 velocity 97 event ('note', 21872, 8, 69, 97)
	0,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1781, ticks 21876, elapsed 0, voice: 1 note: 64 velocity 0 event ('note', 21876, 7, 64, 0)
	2,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((93 &0x7e)<<1)),	//# 1782, ticks 21888, elapsed 2, voice: 1 note: 66 velocity 93 event ('note', 21888, 1, 66, 93)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((81 &0x7e)<<1)),	//# 1783, ticks 21888, elapsed 0, voice: 0 note: 50 velocity 81 event ('note', 21888, 1, 50, 81)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((89 &0x7e)<<1)),	//# 1784, ticks 21888, elapsed 0, voice: 0 note: 74 velocity 89 event ('note', 21888, 4, 74, 89)
	// Note off skipped, note 49 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1786, ticks 21904, elapsed 2, voice: 1 note: 66 velocity 0 event ('note', 21904, 8, 66, 0)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1787, ticks 21908, elapsed 0, voice: 2 note: 64 velocity 0 event ('note', 21908, 1, 64, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	3,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1789, ticks 21928, elapsed 3, voice: 3 note: 69 velocity 0 event ('note', 21928, 8, 69, 0)
	4,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((95 &0x7e)<<1)),	//# 1790, ticks 21956, elapsed 4, voice: 1 note: 69 velocity 95 event ('note', 21956, 8, 69, 95)
	// Note off skipped, note 66 not found in channels, probably interrupted
	4,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((91 &0x7e)<<1)),	//# 1792, ticks 21984, elapsed 4, voice: 2 note: 67 velocity 91 event ('note', 21984, 1, 67, 91)
	0,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((84 &0x7e)<<1)),	//# 1793, ticks 21988, elapsed 0, voice: 3 note: 76 velocity 84 event ('note', 21988, 4, 76, 84)
	// Note off skipped, note 50 not found in channels, probably interrupted
	4,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1795, ticks 22012, elapsed 4, voice: 0 note: 74 velocity 0 event ('note', 22012, 4, 74, 0)
	7,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((90 &0x7e)<<1)),	//# 1796, ticks 22056, elapsed 7, voice: 0 note: 38 velocity 90 event ('note', 22056, 3, 38, 90)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((86 &0x7e)<<1)),	//# 1797, ticks 22056, elapsed 0, voice: 3 note: 74 velocity 86 event ('note', 22056, 8, 74, 86)
	0,((( 3 &4)<<5)|( 26 &0x7f)), ((3 &3)|((89 &0x7e)<<1)),	//# 1798, ticks 22060, elapsed 0, voice: 3 note: 26 velocity 89 event ('note', 22060, 2, 26, 89)
	2,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((75 &0x7e)<<1)),	//# 1799, ticks 22072, elapsed 2, voice: 3 note: 57 velocity 75 event ('note', 22072, 7, 57, 75)
	0,((( 3 &4)<<5)|( 79 &0x7f)), ((3 &3)|((86 &0x7e)<<1)),	//# 1800, ticks 22076, elapsed 0, voice: 3 note: 79 velocity 86 event ('note', 22076, 5, 79, 86)
	0,((( 3 &4)<<5)|( 79 &0x7f)), ((3 &3)|((86 &0x7e)<<1)),	//# 1801, ticks 22076, elapsed 0, voice: 3 note: 79 velocity 86 event ('note', 22076, 6, 79, 86)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1802, ticks 22076, elapsed 0, voice: 1 note: 69 velocity 0 event ('note', 22076, 8, 69, 0)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((84 &0x7e)<<1)),	//# 1803, ticks 22080, elapsed 0, voice: 1 note: 69 velocity 84 event ('note', 22080, 1, 69, 84)
	0,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((72 &0x7e)<<1)),	//# 1804, ticks 22080, elapsed 0, voice: 1 note: 38 velocity 72 event ('note', 22080, 1, 38, 72)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 1805, ticks 22080, elapsed 0, voice: 1 note: 78 velocity 88 event ('note', 22080, 4, 78, 88)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	6,((( 2 &4)<<5)|( 67 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1808, ticks 22120, elapsed 6, voice: 2 note: 67 velocity 0 event ('note', 22120, 1, 67, 0)
	// Note off skipped, note 26 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 38 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1810, ticks 22124, elapsed 0, voice: 0 note: 38 velocity 0 event ('note', 22124, 3, 38, 0)
	// Note off skipped, note 81 not found in channels, probably interrupted
	// Note off skipped, note 81 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	4,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((82 &0x7e)<<1)),	//# 1814, ticks 22148, elapsed 4, voice: 0 note: 74 velocity 82 event ('note', 22148, 8, 74, 82)
	3,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 1815, ticks 22168, elapsed 3, voice: 2 note: 78 velocity 100 event ('note', 22168, 5, 78, 100)
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 1816, ticks 22168, elapsed 0, voice: 0 note: 78 velocity 100 event ('note', 22168, 6, 78, 100)
	0,((( 3 &4)<<5)|( 79 &0x7f)), ((3 &3)|((82 &0x7e)<<1)),	//# 1817, ticks 22172, elapsed 0, voice: 3 note: 79 velocity 82 event ('note', 22172, 4, 79, 82)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((90 &0x7e)<<1)),	//# 1818, ticks 22176, elapsed 0, voice: 3 note: 71 velocity 90 event ('note', 22176, 1, 71, 90)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 79 not found in channels, probably interrupted
	// Note off skipped, note 79 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	3,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1823, ticks 22196, elapsed 3, voice: 0 note: 78 velocity 0 event ('note', 22196, 4, 78, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	8,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((82 &0x7e)<<1)),	//# 1825, ticks 22244, elapsed 8, voice: 0 note: 76 velocity 82 event ('note', 22244, 8, 76, 82)
	2,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((68 &0x7e)<<1)),	//# 1826, ticks 22256, elapsed 2, voice: 0 note: 69 velocity 68 event ('note', 22256, 7, 69, 68)
	2,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((81 &0x7e)<<1)),	//# 1827, ticks 22268, elapsed 2, voice: 0 note: 45 velocity 81 event ('note', 22268, 3, 45, 81)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((89 &0x7e)<<1)),	//# 1828, ticks 22272, elapsed 0, voice: 0 note: 73 velocity 89 event ('note', 22272, 1, 73, 89)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((78 &0x7e)<<1)),	//# 1829, ticks 22272, elapsed 0, voice: 1 note: 45 velocity 78 event ('note', 22272, 1, 45, 78)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((71 &0x7e)<<1)),	//# 1830, ticks 22272, elapsed 0, voice: 1 note: 76 velocity 71 event ('note', 22272, 5, 76, 71)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((71 &0x7e)<<1)),	//# 1831, ticks 22272, elapsed 0, voice: 1 note: 76 velocity 71 event ('note', 22272, 6, 76, 71)
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((80 &0x7e)<<1)),	//# 1832, ticks 22276, elapsed 0, voice: 1 note: 81 velocity 80 event ('note', 22276, 4, 81, 80)
	0,((( 1 &4)<<5)|( 33 &0x7f)), ((1 &3)|((80 &0x7e)<<1)),	//# 1833, ticks 22280, elapsed 0, voice: 1 note: 33 velocity 80 event ('note', 22280, 2, 33, 80)
	2,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1834, ticks 22292, elapsed 2, voice: 3 note: 71 velocity 0 event ('note', 22292, 1, 71, 0)
	// Note off skipped, note 79 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1836, ticks 22296, elapsed 0, voice: 2 note: 78 velocity 0 event ('note', 22296, 5, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	12,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((88 &0x7e)<<1)),	//# 1841, ticks 22368, elapsed 12, voice: 2 note: 74 velocity 88 event ('note', 22368, 1, 74, 88)
	4,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1842, ticks 22392, elapsed 4, voice: 0 note: 73 velocity 0 event ('note', 22392, 1, 73, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 81 not found in channels, probably interrupted
	10,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((72 &0x7e)<<1)),	//# 1846, ticks 22452, elapsed 10, voice: 0 note: 69 velocity 72 event ('note', 22452, 8, 69, 72)
	1,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((106 &0x7e)<<1)),	//# 1847, ticks 22460, elapsed 1, voice: 3 note: 73 velocity 106 event ('note', 22460, 5, 73, 106)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((106 &0x7e)<<1)),	//# 1848, ticks 22460, elapsed 0, voice: 0 note: 73 velocity 106 event ('note', 22460, 6, 73, 106)
	0,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((52 &0x7e)<<1)),	//# 1849, ticks 22460, elapsed 0, voice: 1 note: 64 velocity 52 event ('note', 22460, 7, 64, 52)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((68 &0x7e)<<1)),	//# 1850, ticks 22464, elapsed 0, voice: 1 note: 57 velocity 68 event ('note', 22464, 1, 57, 68)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((90 &0x7e)<<1)),	//# 1851, ticks 22464, elapsed 0, voice: 1 note: 73 velocity 90 event ('note', 22464, 1, 73, 90)
	1,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 1852, ticks 22472, elapsed 1, voice: 2 note: 69 velocity 64 event ('note', 22472, 4, 69, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	9,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((86 &0x7e)<<1)),	//# 1854, ticks 22528, elapsed 9, voice: 2 note: 71 velocity 86 event ('note', 22528, 5, 71, 86)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((86 &0x7e)<<1)),	//# 1855, ticks 22528, elapsed 0, voice: 2 note: 71 velocity 86 event ('note', 22528, 6, 71, 86)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1856, ticks 22532, elapsed 0, voice: 0 note: 73 velocity 0 event ('note', 22532, 5, 73, 0)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1857, ticks 22532, elapsed 0, voice: 1 note: 73 velocity 0 event ('note', 22532, 6, 73, 0)
	4,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((87 &0x7e)<<1)),	//# 1858, ticks 22560, elapsed 4, voice: 0 note: 71 velocity 87 event ('note', 22560, 1, 71, 87)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	3,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((108 &0x7e)<<1)),	//# 1861, ticks 22580, elapsed 3, voice: 1 note: 73 velocity 108 event ('note', 22580, 5, 73, 108)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((108 &0x7e)<<1)),	//# 1862, ticks 22580, elapsed 0, voice: 2 note: 73 velocity 108 event ('note', 22580, 6, 73, 108)
	1,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1863, ticks 22588, elapsed 1, voice: 1 note: 73 velocity 0 event ('note', 22588, 1, 73, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1865, ticks 22604, elapsed 2, voice: 0 note: 71 velocity 0 event ('note', 22604, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 33 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	6,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 1869, ticks 22644, elapsed 6, voice: 0 note: 74 velocity 88 event ('note', 22644, 5, 74, 88)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 1870, ticks 22644, elapsed 0, voice: 1 note: 74 velocity 88 event ('note', 22644, 6, 74, 88)
	1,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1871, ticks 22652, elapsed 1, voice: 2 note: 73 velocity 0 event ('note', 22652, 5, 73, 0)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1872, ticks 22652, elapsed 0, voice: 3 note: 73 velocity 0 event ('note', 22652, 6, 73, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((83 &0x7e)<<1)),	//# 1873, ticks 22656, elapsed 0, voice: 2 note: 69 velocity 83 event ('note', 22656, 1, 69, 83)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((63 &0x7e)<<1)),	//# 1874, ticks 22656, elapsed 0, voice: 3 note: 59 velocity 63 event ('note', 22656, 1, 59, 63)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1875, ticks 22656, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 22656, 4, 69, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	9,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((85 &0x7e)<<1)),	//# 1877, ticks 22708, elapsed 9, voice: 2 note: 73 velocity 85 event ('note', 22708, 5, 73, 85)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((85 &0x7e)<<1)),	//# 1878, ticks 22708, elapsed 0, voice: 3 note: 73 velocity 85 event ('note', 22708, 6, 73, 85)
	2,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1879, ticks 22720, elapsed 2, voice: 0 note: 74 velocity 0 event ('note', 22720, 5, 74, 0)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1880, ticks 22720, elapsed 0, voice: 1 note: 74 velocity 0 event ('note', 22720, 6, 74, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	5,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((73 &0x7e)<<1)),	//# 1883, ticks 22752, elapsed 5, voice: 0 note: 67 velocity 73 event ('note', 22752, 1, 67, 73)
	2,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((82 &0x7e)<<1)),	//# 1884, ticks 22768, elapsed 2, voice: 1 note: 74 velocity 82 event ('note', 22768, 5, 74, 82)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((82 &0x7e)<<1)),	//# 1885, ticks 22768, elapsed 0, voice: 0 note: 74 velocity 82 event ('note', 22768, 6, 74, 82)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1886, ticks 22772, elapsed 0, voice: 2 note: 73 velocity 0 event ('note', 22772, 5, 73, 0)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1887, ticks 22772, elapsed 0, voice: 3 note: 73 velocity 0 event ('note', 22772, 6, 73, 0)
	10,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((86 &0x7e)<<1)),	//# 1888, ticks 22832, elapsed 10, voice: 2 note: 76 velocity 86 event ('note', 22832, 5, 76, 86)
	0,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((86 &0x7e)<<1)),	//# 1889, ticks 22832, elapsed 0, voice: 3 note: 76 velocity 86 event ('note', 22832, 6, 76, 86)
	2,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((79 &0x7e)<<1)),	//# 1890, ticks 22848, elapsed 2, voice: 0 note: 66 velocity 79 event ('note', 22848, 1, 66, 79)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((62 &0x7e)<<1)),	//# 1891, ticks 22848, elapsed 0, voice: 0 note: 61 velocity 62 event ('note', 22848, 1, 61, 62)
	1,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1892, ticks 22856, elapsed 1, voice: 1 note: 74 velocity 0 event ('note', 22856, 5, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	7,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((80 &0x7e)<<1)),	//# 1895, ticks 22900, elapsed 7, voice: 1 note: 74 velocity 80 event ('note', 22900, 5, 74, 80)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((80 &0x7e)<<1)),	//# 1896, ticks 22900, elapsed 0, voice: 0 note: 74 velocity 80 event ('note', 22900, 6, 74, 80)
	// Note off skipped, note 61 not found in channels, probably interrupted
	2,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1898, ticks 22912, elapsed 2, voice: 2 note: 76 velocity 0 event ('note', 22912, 5, 76, 0)
	0,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1899, ticks 22912, elapsed 0, voice: 3 note: 76 velocity 0 event ('note', 22912, 6, 76, 0)
	5,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((87 &0x7e)<<1)),	//# 1900, ticks 22944, elapsed 5, voice: 2 note: 64 velocity 87 event ('note', 22944, 1, 64, 87)
	// Note off skipped, note 66 not found in channels, probably interrupted
	3,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((74 &0x7e)<<1)),	//# 1902, ticks 22964, elapsed 3, voice: 3 note: 76 velocity 74 event ('note', 22964, 5, 76, 74)
	0,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((74 &0x7e)<<1)),	//# 1903, ticks 22964, elapsed 0, voice: 3 note: 76 velocity 74 event ('note', 22964, 6, 76, 74)
	4,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1904, ticks 22992, elapsed 4, voice: 0 note: 74 velocity 0 event ('note', 22992, 5, 74, 0)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1905, ticks 22992, elapsed 0, voice: 1 note: 74 velocity 0 event ('note', 22992, 6, 74, 0)
	6,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 1906, ticks 23028, elapsed 6, voice: 0 note: 78 velocity 88 event ('note', 23028, 5, 78, 88)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 1907, ticks 23028, elapsed 0, voice: 1 note: 78 velocity 88 event ('note', 23028, 6, 78, 88)
	2,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1908, ticks 23040, elapsed 2, voice: 2 note: 64 velocity 0 event ('note', 23040, 1, 64, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((78 &0x7e)<<1)),	//# 1909, ticks 23040, elapsed 0, voice: 2 note: 62 velocity 78 event ('note', 23040, 1, 62, 78)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((76 &0x7e)<<1)),	//# 1910, ticks 23040, elapsed 0, voice: 3 note: 50 velocity 76 event ('note', 23040, 1, 50, 76)
	1,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1911, ticks 23048, elapsed 1, voice: 2 note: 62 velocity 0 event ('note', 23048, 1, 62, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	11,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1914, ticks 23112, elapsed 11, voice: 3 note: 50 velocity 0 event ('note', 23112, 1, 50, 0)
	4,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((76 &0x7e)<<1)),	//# 1915, ticks 23136, elapsed 4, voice: 2 note: 78 velocity 76 event ('note', 23136, 1, 78, 76)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((22 &0x7e)<<1)),	//# 1916, ticks 23136, elapsed 0, voice: 3 note: 62 velocity 22 event ('note', 23136, 1, 62, 22)
	16,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1917, ticks 23232, elapsed 16, voice: 3 note: 62 velocity 0 event ('note', 23232, 1, 62, 0)
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1918, ticks 23232, elapsed 0, voice: 0 note: 78 velocity 0 event ('note', 23232, 1, 78, 0)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((78 &0x7e)<<1)),	//# 1919, ticks 23232, elapsed 0, voice: 0 note: 76 velocity 78 event ('note', 23232, 1, 76, 78)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((74 &0x7e)<<1)),	//# 1920, ticks 23232, elapsed 0, voice: 3 note: 61 velocity 74 event ('note', 23232, 1, 61, 74)
	0,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((75 &0x7e)<<1)),	//# 1921, ticks 23232, elapsed 0, voice: 3 note: 78 velocity 75 event ('note', 23232, 4, 78, 75)
	// Note off skipped, note 61 not found in channels, probably interrupted
	11,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((72 &0x7e)<<1)),	//# 1923, ticks 23300, elapsed 11, voice: 3 note: 76 velocity 72 event ('note', 23300, 4, 76, 72)
	1,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1924, ticks 23308, elapsed 1, voice: 1 note: 78 velocity 0 event ('note', 23308, 4, 78, 0)
	2,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1925, ticks 23320, elapsed 2, voice: 0 note: 76 velocity 0 event ('note', 23320, 1, 76, 0)
	1,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((92 &0x7e)<<1)),	//# 1926, ticks 23328, elapsed 1, voice: 0 note: 78 velocity 92 event ('note', 23328, 1, 78, 92)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((36 &0x7e)<<1)),	//# 1927, ticks 23328, elapsed 0, voice: 1 note: 62 velocity 36 event ('note', 23328, 1, 62, 36)
	4,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((75 &0x7e)<<1)),	//# 1928, ticks 23352, elapsed 4, voice: 1 note: 78 velocity 75 event ('note', 23352, 4, 78, 75)
	4,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1929, ticks 23376, elapsed 4, voice: 3 note: 76 velocity 0 event ('note', 23376, 4, 76, 0)
	6,((( 3 &4)<<5)|( 80 &0x7f)), ((3 &3)|((79 &0x7e)<<1)),	//# 1930, ticks 23416, elapsed 6, voice: 3 note: 80 velocity 79 event ('note', 23416, 4, 80, 79)
	1,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((96 &0x7e)<<1)),	//# 1931, ticks 23424, elapsed 1, voice: 1 note: 74 velocity 96 event ('note', 23424, 1, 74, 96)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((71 &0x7e)<<1)),	//# 1932, ticks 23424, elapsed 0, voice: 2 note: 59 velocity 71 event ('note', 23424, 1, 59, 71)
	// Note off skipped, note 62 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1934, ticks 23432, elapsed 1, voice: 0 note: 78 velocity 0 event ('note', 23432, 4, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	7,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((73 &0x7e)<<1)),	//# 1936, ticks 23476, elapsed 7, voice: 0 note: 78 velocity 73 event ('note', 23476, 4, 78, 73)
	2,((( 3 &4)<<5)|( 80 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1937, ticks 23492, elapsed 2, voice: 3 note: 80 velocity 0 event ('note', 23492, 4, 80, 0)
	3,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1938, ticks 23512, elapsed 3, voice: 2 note: 59 velocity 0 event ('note', 23512, 1, 59, 0)
	1,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((96 &0x7e)<<1)),	//# 1939, ticks 23520, elapsed 1, voice: 2 note: 78 velocity 96 event ('note', 23520, 1, 78, 96)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((60 &0x7e)<<1)),	//# 1940, ticks 23520, elapsed 0, voice: 3 note: 62 velocity 60 event ('note', 23520, 1, 62, 60)
	1,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1941, ticks 23528, elapsed 1, voice: 1 note: 74 velocity 0 event ('note', 23528, 1, 74, 0)
	2,((( 1 &4)<<5)|( 80 &0x7f)), ((1 &3)|((71 &0x7e)<<1)),	//# 1942, ticks 23540, elapsed 2, voice: 1 note: 80 velocity 71 event ('note', 23540, 4, 80, 71)
	4,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1943, ticks 23564, elapsed 4, voice: 0 note: 78 velocity 0 event ('note', 23564, 4, 78, 0)
	6,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((83 &0x7e)<<1)),	//# 1944, ticks 23604, elapsed 6, voice: 0 note: 81 velocity 83 event ('note', 23604, 4, 81, 83)
	2,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((94 &0x7e)<<1)),	//# 1945, ticks 23616, elapsed 2, voice: 3 note: 73 velocity 94 event ('note', 23616, 1, 73, 94)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((76 &0x7e)<<1)),	//# 1946, ticks 23616, elapsed 0, voice: 1 note: 57 velocity 76 event ('note', 23616, 1, 57, 76)
	// Note off skipped, note 80 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1948, ticks 23624, elapsed 1, voice: 2 note: 78 velocity 0 event ('note', 23624, 1, 78, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	7,((( 2 &4)<<5)|( 80 &0x7f)), ((2 &3)|((79 &0x7e)<<1)),	//# 1950, ticks 23668, elapsed 7, voice: 2 note: 80 velocity 79 event ('note', 23668, 4, 80, 79)
	2,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1951, ticks 23684, elapsed 2, voice: 0 note: 81 velocity 0 event ('note', 23684, 4, 81, 0)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1952, ticks 23688, elapsed 0, voice: 1 note: 57 velocity 0 event ('note', 23688, 1, 57, 0)
	4,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((59 &0x7e)<<1)),	//# 1953, ticks 23712, elapsed 4, voice: 0 note: 62 velocity 59 event ('note', 23712, 1, 62, 59)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((90 &0x7e)<<1)),	//# 1954, ticks 23712, elapsed 0, voice: 1 note: 78 velocity 90 event ('note', 23712, 1, 78, 90)
	1,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1955, ticks 23720, elapsed 1, voice: 3 note: 73 velocity 0 event ('note', 23720, 1, 73, 0)
	2,((( 3 &4)<<5)|( 81 &0x7f)), ((3 &3)|((80 &0x7e)<<1)),	//# 1956, ticks 23732, elapsed 2, voice: 3 note: 81 velocity 80 event ('note', 23732, 4, 81, 80)
	2,((( 2 &4)<<5)|( 80 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1957, ticks 23748, elapsed 2, voice: 2 note: 80 velocity 0 event ('note', 23748, 4, 80, 0)
	9,((( 2 &4)<<5)|( 83 &0x7f)), ((2 &3)|((70 &0x7e)<<1)),	//# 1958, ticks 23800, elapsed 9, voice: 2 note: 83 velocity 70 event ('note', 23800, 4, 83, 70)
	1,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((92 &0x7e)<<1)),	//# 1959, ticks 23808, elapsed 1, voice: 0 note: 71 velocity 92 event ('note', 23808, 1, 71, 92)
	0,((( 2 &4)<<5)|( 56 &0x7f)), ((2 &3)|((89 &0x7e)<<1)),	//# 1960, ticks 23808, elapsed 0, voice: 2 note: 56 velocity 89 event ('note', 23808, 1, 56, 89)
	1,((( 3 &4)<<5)|( 81 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1961, ticks 23816, elapsed 1, voice: 3 note: 81 velocity 0 event ('note', 23816, 4, 81, 0)
	1,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1962, ticks 23824, elapsed 1, voice: 1 note: 78 velocity 0 event ('note', 23824, 1, 78, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	13,((( 2 &4)<<5)|( 56 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1966, ticks 23904, elapsed 13, voice: 2 note: 56 velocity 0 event ('note', 23904, 1, 56, 0)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((84 &0x7e)<<1)),	//# 1967, ticks 23904, elapsed 0, voice: 1 note: 78 velocity 84 event ('note', 23904, 1, 78, 84)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((37 &0x7e)<<1)),	//# 1968, ticks 23904, elapsed 0, voice: 2 note: 62 velocity 37 event ('note', 23904, 1, 62, 37)
	2,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1969, ticks 23916, elapsed 2, voice: 0 note: 71 velocity 0 event ('note', 23916, 1, 71, 0)
	13,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((72 &0x7e)<<1)),	//# 1970, ticks 23992, elapsed 13, voice: 0 note: 71 velocity 72 event ('note', 23992, 5, 71, 72)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((72 &0x7e)<<1)),	//# 1971, ticks 23992, elapsed 0, voice: 3 note: 71 velocity 72 event ('note', 23992, 6, 71, 72)
	1,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((79 &0x7e)<<1)),	//# 1972, ticks 24000, elapsed 1, voice: 2 note: 69 velocity 79 event ('note', 24000, 1, 69, 79)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((76 &0x7e)<<1)),	//# 1973, ticks 24000, elapsed 0, voice: 0 note: 54 velocity 76 event ('note', 24000, 1, 54, 76)
	// Note off skipped, note 62 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1975, ticks 24012, elapsed 2, voice: 1 note: 78 velocity 0 event ('note', 24012, 1, 78, 0)
	8,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((78 &0x7e)<<1)),	//# 1976, ticks 24060, elapsed 8, voice: 1 note: 69 velocity 78 event ('note', 24060, 5, 69, 78)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((78 &0x7e)<<1)),	//# 1977, ticks 24060, elapsed 0, voice: 3 note: 69 velocity 78 event ('note', 24060, 6, 69, 78)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	4,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1980, ticks 24088, elapsed 4, voice: 0 note: 54 velocity 0 event ('note', 24088, 1, 54, 0)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1981, ticks 24088, elapsed 0, voice: 1 note: 69 velocity 0 event ('note', 24088, 1, 69, 0)
	1,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((83 &0x7e)<<1)),	//# 1982, ticks 24096, elapsed 1, voice: 0 note: 78 velocity 83 event ('note', 24096, 1, 78, 83)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((50 &0x7e)<<1)),	//# 1983, ticks 24096, elapsed 0, voice: 1 note: 62 velocity 50 event ('note', 24096, 1, 62, 50)
	3,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((75 &0x7e)<<1)),	//# 1984, ticks 24116, elapsed 3, voice: 1 note: 71 velocity 75 event ('note', 24116, 5, 71, 75)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((75 &0x7e)<<1)),	//# 1985, ticks 24116, elapsed 0, voice: 1 note: 71 velocity 75 event ('note', 24116, 6, 71, 75)
	5,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 1986, ticks 24148, elapsed 5, voice: 2 note: 69 velocity 0 event ('note', 24148, 5, 69, 0)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 1987, ticks 24148, elapsed 0, voice: 3 note: 69 velocity 0 event ('note', 24148, 6, 69, 0)
	4,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((73 &0x7e)<<1)),	//# 1988, ticks 24176, elapsed 4, voice: 2 note: 73 velocity 73 event ('note', 24176, 5, 73, 73)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((73 &0x7e)<<1)),	//# 1989, ticks 24176, elapsed 0, voice: 3 note: 73 velocity 73 event ('note', 24176, 6, 73, 73)
	// Note off skipped, note 62 not found in channels, probably interrupted
	2,((( 2 &4)<<5)|( 68 &0x7f)), ((2 &3)|((89 &0x7e)<<1)),	//# 1991, ticks 24192, elapsed 2, voice: 2 note: 68 velocity 89 event ('note', 24192, 1, 68, 89)
	0,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((60 &0x7e)<<1)),	//# 1992, ticks 24192, elapsed 0, voice: 3 note: 52 velocity 60 event ('note', 24192, 1, 52, 60)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 1993, ticks 24192, elapsed 0, voice: 1 note: 71 velocity 0 event ('note', 24192, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 1995, ticks 24204, elapsed 2, voice: 0 note: 78 velocity 0 event ('note', 24204, 1, 78, 0)
	6,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((74 &0x7e)<<1)),	//# 1996, ticks 24244, elapsed 6, voice: 0 note: 71 velocity 74 event ('note', 24244, 5, 71, 74)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((74 &0x7e)<<1)),	//# 1997, ticks 24244, elapsed 0, voice: 1 note: 71 velocity 74 event ('note', 24244, 6, 71, 74)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	4,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2000, ticks 24268, elapsed 4, voice: 3 note: 52 velocity 0 event ('note', 24268, 1, 52, 0)
	3,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((49 &0x7e)<<1)),	//# 2001, ticks 24288, elapsed 3, voice: 3 note: 62 velocity 49 event ('note', 24288, 1, 62, 49)
	0,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((86 &0x7e)<<1)),	//# 2002, ticks 24288, elapsed 0, voice: 3 note: 78 velocity 86 event ('note', 24288, 1, 78, 86)
	1,((( 2 &4)<<5)|( 68 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2003, ticks 24296, elapsed 1, voice: 2 note: 68 velocity 0 event ('note', 24296, 1, 68, 0)
	2,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((81 &0x7e)<<1)),	//# 2004, ticks 24312, elapsed 2, voice: 2 note: 73 velocity 81 event ('note', 24312, 5, 73, 81)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((81 &0x7e)<<1)),	//# 2005, ticks 24312, elapsed 0, voice: 0 note: 73 velocity 81 event ('note', 24312, 6, 73, 81)
	6,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2006, ticks 24352, elapsed 6, voice: 1 note: 71 velocity 0 event ('note', 24352, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	2,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2008, ticks 24368, elapsed 2, voice: 3 note: 78 velocity 0 event ('note', 24368, 1, 78, 0)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((86 &0x7e)<<1)),	//# 2009, ticks 24372, elapsed 0, voice: 1 note: 74 velocity 86 event ('note', 24372, 5, 74, 86)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((86 &0x7e)<<1)),	//# 2010, ticks 24372, elapsed 0, voice: 3 note: 74 velocity 86 event ('note', 24372, 6, 74, 86)
	// Note off skipped, note 62 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((84 &0x7e)<<1)),	//# 2012, ticks 24384, elapsed 2, voice: 0 note: 66 velocity 84 event ('note', 24384, 1, 66, 84)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((71 &0x7e)<<1)),	//# 2013, ticks 24384, elapsed 0, voice: 2 note: 50 velocity 71 event ('note', 24384, 1, 50, 71)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	9,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((78 &0x7e)<<1)),	//# 2016, ticks 24440, elapsed 9, voice: 2 note: 73 velocity 78 event ('note', 24440, 5, 73, 78)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((78 &0x7e)<<1)),	//# 2017, ticks 24440, elapsed 0, voice: 2 note: 73 velocity 78 event ('note', 24440, 6, 73, 78)
	3,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2018, ticks 24460, elapsed 3, voice: 1 note: 74 velocity 0 event ('note', 24460, 5, 74, 0)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2019, ticks 24460, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 24460, 6, 74, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	3,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((71 &0x7e)<<1)),	//# 2021, ticks 24480, elapsed 3, voice: 1 note: 62 velocity 71 event ('note', 24480, 1, 62, 71)
	0,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((82 &0x7e)<<1)),	//# 2022, ticks 24480, elapsed 0, voice: 3 note: 78 velocity 82 event ('note', 24480, 1, 78, 82)
	2,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2023, ticks 24492, elapsed 2, voice: 0 note: 66 velocity 0 event ('note', 24492, 1, 66, 0)
	2,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2024, ticks 24508, elapsed 2, voice: 3 note: 78 velocity 0 event ('note', 24508, 1, 78, 0)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((87 &0x7e)<<1)),	//# 2025, ticks 24508, elapsed 0, voice: 0 note: 74 velocity 87 event ('note', 24508, 5, 74, 87)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((87 &0x7e)<<1)),	//# 2026, ticks 24508, elapsed 0, voice: 3 note: 74 velocity 87 event ('note', 24508, 6, 74, 87)
	1,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2027, ticks 24516, elapsed 1, voice: 1 note: 62 velocity 0 event ('note', 24516, 1, 62, 0)
	2,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2028, ticks 24532, elapsed 2, voice: 2 note: 73 velocity 0 event ('note', 24532, 5, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	7,((( 1 &4)<<5)|( 49 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 2030, ticks 24576, elapsed 7, voice: 1 note: 49 velocity 89 event ('note', 24576, 1, 49, 89)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((84 &0x7e)<<1)),	//# 2031, ticks 24576, elapsed 0, voice: 2 note: 64 velocity 84 event ('note', 24576, 1, 64, 84)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((74 &0x7e)<<1)),	//# 2032, ticks 24580, elapsed 0, voice: 2 note: 76 velocity 74 event ('note', 24580, 5, 76, 74)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((74 &0x7e)<<1)),	//# 2033, ticks 24580, elapsed 0, voice: 2 note: 76 velocity 74 event ('note', 24580, 6, 76, 74)
	3,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2034, ticks 24600, elapsed 3, voice: 0 note: 74 velocity 0 event ('note', 24600, 5, 74, 0)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2035, ticks 24600, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 24600, 6, 74, 0)
	10,((( 1 &4)<<5)|( 49 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2036, ticks 24660, elapsed 10, voice: 1 note: 49 velocity 0 event ('note', 24660, 1, 49, 0)
	2,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((76 &0x7e)<<1)),	//# 2037, ticks 24672, elapsed 2, voice: 0 note: 76 velocity 76 event ('note', 24672, 1, 76, 76)
	0,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((77 &0x7e)<<1)),	//# 2038, ticks 24672, elapsed 0, voice: 1 note: 61 velocity 77 event ('note', 24672, 1, 61, 77)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	16,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((93 &0x7e)<<1)),	//# 2041, ticks 24768, elapsed 16, voice: 3 note: 74 velocity 93 event ('note', 24768, 1, 74, 93)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((72 &0x7e)<<1)),	//# 2042, ticks 24768, elapsed 0, voice: 2 note: 59 velocity 72 event ('note', 24768, 1, 59, 72)
	1,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((66 &0x7e)<<1)),	//# 2043, ticks 24776, elapsed 1, voice: 2 note: 76 velocity 66 event ('note', 24776, 4, 76, 66)
	0,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2044, ticks 24780, elapsed 0, voice: 1 note: 61 velocity 0 event ('note', 24780, 1, 61, 0)
	1,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2045, ticks 24788, elapsed 1, voice: 0 note: 76 velocity 0 event ('note', 24788, 1, 76, 0)
	8,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((75 &0x7e)<<1)),	//# 2046, ticks 24836, elapsed 8, voice: 0 note: 74 velocity 75 event ('note', 24836, 4, 74, 75)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2047, ticks 24840, elapsed 0, voice: 2 note: 76 velocity 0 event ('note', 24840, 4, 76, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	4,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((83 &0x7e)<<1)),	//# 2049, ticks 24864, elapsed 4, voice: 1 note: 76 velocity 83 event ('note', 24864, 1, 76, 83)
	0,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((72 &0x7e)<<1)),	//# 2050, ticks 24864, elapsed 0, voice: 2 note: 61 velocity 72 event ('note', 24864, 1, 61, 72)
	3,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((78 &0x7e)<<1)),	//# 2051, ticks 24884, elapsed 3, voice: 2 note: 76 velocity 78 event ('note', 24884, 4, 76, 78)
	2,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2052, ticks 24896, elapsed 2, voice: 0 note: 74 velocity 0 event ('note', 24896, 1, 74, 0)
	2,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2053, ticks 24908, elapsed 2, voice: 3 note: 74 velocity 0 event ('note', 24908, 4, 74, 0)
	6,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((73 &0x7e)<<1)),	//# 2054, ticks 24948, elapsed 6, voice: 0 note: 78 velocity 73 event ('note', 24948, 4, 78, 73)
	2,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((91 &0x7e)<<1)),	//# 2055, ticks 24960, elapsed 2, voice: 3 note: 73 velocity 91 event ('note', 24960, 1, 73, 91)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((72 &0x7e)<<1)),	//# 2056, ticks 24960, elapsed 0, voice: 0 note: 57 velocity 72 event ('note', 24960, 1, 57, 72)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2057, ticks 24964, elapsed 0, voice: 1 note: 76 velocity 0 event ('note', 24964, 4, 76, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	4,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2059, ticks 24988, elapsed 4, voice: 2 note: 76 velocity 0 event ('note', 24988, 1, 76, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	4,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((67 &0x7e)<<1)),	//# 2061, ticks 25012, elapsed 4, voice: 1 note: 76 velocity 67 event ('note', 25012, 4, 76, 67)
	7,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((67 &0x7e)<<1)),	//# 2062, ticks 25056, elapsed 7, voice: 2 note: 61 velocity 67 event ('note', 25056, 1, 61, 67)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((82 &0x7e)<<1)),	//# 2063, ticks 25056, elapsed 0, voice: 1 note: 76 velocity 82 event ('note', 25056, 1, 76, 82)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2064, ticks 25060, elapsed 0, voice: 0 note: 57 velocity 0 event ('note', 25060, 1, 57, 0)
	1,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2065, ticks 25068, elapsed 1, voice: 3 note: 73 velocity 0 event ('note', 25068, 1, 73, 0)
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((92 &0x7e)<<1)),	//# 2066, ticks 25072, elapsed 0, voice: 0 note: 78 velocity 92 event ('note', 25072, 4, 78, 92)
	3,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2067, ticks 25092, elapsed 3, voice: 1 note: 76 velocity 0 event ('note', 25092, 4, 76, 0)
	6,((( 1 &4)<<5)|( 80 &0x7f)), ((1 &3)|((74 &0x7e)<<1)),	//# 2068, ticks 25128, elapsed 6, voice: 1 note: 80 velocity 74 event ('note', 25128, 4, 80, 74)
	3,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2069, ticks 25148, elapsed 3, voice: 0 note: 78 velocity 0 event ('note', 25148, 4, 78, 0)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((90 &0x7e)<<1)),	//# 2070, ticks 25152, elapsed 0, voice: 0 note: 71 velocity 90 event ('note', 25152, 1, 71, 90)
	0,((( 3 &4)<<5)|( 56 &0x7f)), ((3 &3)|((88 &0x7e)<<1)),	//# 2071, ticks 25152, elapsed 0, voice: 3 note: 56 velocity 88 event ('note', 25152, 1, 56, 88)
	// Note off skipped, note 76 not found in channels, probably interrupted
	5,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2073, ticks 25184, elapsed 5, voice: 2 note: 61 velocity 0 event ('note', 25184, 1, 61, 0)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((80 &0x7e)<<1)),	//# 2074, ticks 25184, elapsed 0, voice: 2 note: 78 velocity 80 event ('note', 25184, 4, 78, 80)
	2,((( 1 &4)<<5)|( 80 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2075, ticks 25200, elapsed 2, voice: 1 note: 80 velocity 0 event ('note', 25200, 4, 80, 0)
	7,((( 3 &4)<<5)|( 56 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2076, ticks 25244, elapsed 7, voice: 3 note: 56 velocity 0 event ('note', 25244, 1, 56, 0)
	0,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((61 &0x7e)<<1)),	//# 2077, ticks 25248, elapsed 0, voice: 1 note: 61 velocity 61 event ('note', 25248, 1, 61, 61)
	0,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((72 &0x7e)<<1)),	//# 2078, ticks 25248, elapsed 0, voice: 3 note: 76 velocity 72 event ('note', 25248, 1, 76, 72)
	0,((( 1 &4)<<5)|( 80 &0x7f)), ((1 &3)|((80 &0x7e)<<1)),	//# 2079, ticks 25252, elapsed 0, voice: 1 note: 80 velocity 80 event ('note', 25252, 4, 80, 80)
	1,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2080, ticks 25260, elapsed 1, voice: 0 note: 71 velocity 0 event ('note', 25260, 1, 71, 0)
	2,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2081, ticks 25272, elapsed 2, voice: 2 note: 78 velocity 0 event ('note', 25272, 4, 78, 0)
	9,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((75 &0x7e)<<1)),	//# 2082, ticks 25324, elapsed 9, voice: 0 note: 81 velocity 75 event ('note', 25324, 4, 81, 75)
	3,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((81 &0x7e)<<1)),	//# 2083, ticks 25344, elapsed 3, voice: 2 note: 69 velocity 81 event ('note', 25344, 1, 69, 81)
	0,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((80 &0x7e)<<1)),	//# 2084, ticks 25344, elapsed 0, voice: 3 note: 54 velocity 80 event ('note', 25344, 1, 54, 80)
	// Note off skipped, note 61 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 80 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2086, ticks 25356, elapsed 2, voice: 1 note: 80 velocity 0 event ('note', 25356, 4, 80, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	8,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2088, ticks 25404, elapsed 8, voice: 3 note: 54 velocity 0 event ('note', 25404, 1, 54, 0)
	6,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((60 &0x7e)<<1)),	//# 2089, ticks 25440, elapsed 6, voice: 1 note: 61 velocity 60 event ('note', 25440, 1, 61, 60)
	0,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((76 &0x7e)<<1)),	//# 2090, ticks 25440, elapsed 0, voice: 3 note: 76 velocity 76 event ('note', 25440, 1, 76, 76)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2091, ticks 25444, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 25444, 1, 69, 0)
	4,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2092, ticks 25468, elapsed 4, voice: 3 note: 76 velocity 0 event ('note', 25468, 5, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	11,((( 2 &4)<<5)|( 68 &0x7f)), ((2 &3)|((90 &0x7e)<<1)),	//# 2094, ticks 25536, elapsed 11, voice: 2 note: 68 velocity 90 event ('note', 25536, 1, 68, 90)
	0,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((68 &0x7e)<<1)),	//# 2095, ticks 25536, elapsed 0, voice: 3 note: 52 velocity 68 event ('note', 25536, 1, 52, 68)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((87 &0x7e)<<1)),	//# 2096, ticks 25536, elapsed 0, voice: 1 note: 69 velocity 87 event ('note', 25536, 5, 69, 87)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((87 &0x7e)<<1)),	//# 2097, ticks 25536, elapsed 0, voice: 3 note: 69 velocity 87 event ('note', 25536, 6, 69, 87)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	11,((( 0 &4)<<5)|( 68 &0x7f)), ((0 &3)|((83 &0x7e)<<1)),	//# 2100, ticks 25600, elapsed 11, voice: 0 note: 68 velocity 83 event ('note', 25600, 5, 68, 83)
	0,((( 0 &4)<<5)|( 68 &0x7f)), ((0 &3)|((83 &0x7e)<<1)),	//# 2101, ticks 25600, elapsed 0, voice: 0 note: 68 velocity 83 event ('note', 25600, 6, 68, 83)
	3,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2102, ticks 25620, elapsed 3, voice: 1 note: 69 velocity 0 event ('note', 25620, 5, 69, 0)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2103, ticks 25620, elapsed 0, voice: 3 note: 69 velocity 0 event ('note', 25620, 6, 69, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 68 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2105, ticks 25632, elapsed 2, voice: 0 note: 68 velocity 0 event ('note', 25632, 1, 68, 0)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((67 &0x7e)<<1)),	//# 2106, ticks 25632, elapsed 0, voice: 0 note: 61 velocity 67 event ('note', 25632, 1, 61, 67)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((70 &0x7e)<<1)),	//# 2107, ticks 25632, elapsed 0, voice: 1 note: 76 velocity 70 event ('note', 25632, 1, 76, 70)
	5,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((88 &0x7e)<<1)),	//# 2108, ticks 25664, elapsed 5, voice: 3 note: 69 velocity 88 event ('note', 25664, 5, 69, 88)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 2109, ticks 25664, elapsed 0, voice: 0 note: 69 velocity 88 event ('note', 25664, 6, 69, 88)
	0,((( 2 &4)<<5)|( 68 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2110, ticks 25668, elapsed 0, voice: 2 note: 68 velocity 0 event ('note', 25668, 5, 68, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	10,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((91 &0x7e)<<1)),	//# 2112, ticks 25728, elapsed 10, voice: 2 note: 66 velocity 91 event ('note', 25728, 1, 66, 91)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((79 &0x7e)<<1)),	//# 2113, ticks 25728, elapsed 0, voice: 1 note: 50 velocity 79 event ('note', 25728, 1, 50, 79)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((77 &0x7e)<<1)),	//# 2114, ticks 25728, elapsed 0, voice: 1 note: 71 velocity 77 event ('note', 25728, 5, 71, 77)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((77 &0x7e)<<1)),	//# 2115, ticks 25728, elapsed 0, voice: 1 note: 71 velocity 77 event ('note', 25728, 6, 71, 77)
	// Note off skipped, note 76 not found in channels, probably interrupted
	4,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2117, ticks 25752, elapsed 4, voice: 0 note: 69 velocity 0 event ('note', 25752, 5, 69, 0)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2118, ticks 25752, elapsed 0, voice: 3 note: 69 velocity 0 event ('note', 25752, 6, 69, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	6,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((85 &0x7e)<<1)),	//# 2120, ticks 25792, elapsed 6, voice: 0 note: 69 velocity 85 event ('note', 25792, 5, 69, 85)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((85 &0x7e)<<1)),	//# 2121, ticks 25792, elapsed 0, voice: 3 note: 69 velocity 85 event ('note', 25792, 6, 69, 85)
	2,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2122, ticks 25808, elapsed 2, voice: 1 note: 71 velocity 0 event ('note', 25808, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((77 &0x7e)<<1)),	//# 2124, ticks 25824, elapsed 2, voice: 1 note: 76 velocity 77 event ('note', 25824, 1, 76, 77)
	0,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((56 &0x7e)<<1)),	//# 2125, ticks 25824, elapsed 0, voice: 1 note: 61 velocity 56 event ('note', 25824, 1, 61, 56)
	// Note off skipped, note 50 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2127, ticks 25832, elapsed 1, voice: 2 note: 66 velocity 0 event ('note', 25832, 1, 66, 0)
	4,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((82 &0x7e)<<1)),	//# 2128, ticks 25856, elapsed 4, voice: 2 note: 71 velocity 82 event ('note', 25856, 5, 71, 82)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((82 &0x7e)<<1)),	//# 2129, ticks 25856, elapsed 0, voice: 1 note: 71 velocity 82 event ('note', 25856, 6, 71, 82)
	6,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2130, ticks 25896, elapsed 6, voice: 0 note: 69 velocity 0 event ('note', 25896, 5, 69, 0)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2131, ticks 25896, elapsed 0, voice: 3 note: 69 velocity 0 event ('note', 25896, 6, 69, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((83 &0x7e)<<1)),	//# 2133, ticks 25908, elapsed 2, voice: 0 note: 73 velocity 83 event ('note', 25908, 5, 73, 83)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((83 &0x7e)<<1)),	//# 2134, ticks 25908, elapsed 0, voice: 3 note: 73 velocity 83 event ('note', 25908, 6, 73, 83)
	2,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((68 &0x7e)<<1)),	//# 2135, ticks 25920, elapsed 2, voice: 1 note: 64 velocity 68 event ('note', 25920, 1, 64, 68)
	0,((( 1 &4)<<5)|( 49 &0x7f)), ((1 &3)|((74 &0x7e)<<1)),	//# 2136, ticks 25920, elapsed 0, voice: 1 note: 49 velocity 74 event ('note', 25920, 1, 49, 74)
	1,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2137, ticks 25928, elapsed 1, voice: 2 note: 71 velocity 0 event ('note', 25928, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	8,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((77 &0x7e)<<1)),	//# 2140, ticks 25976, elapsed 8, voice: 2 note: 71 velocity 77 event ('note', 25976, 5, 71, 77)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((77 &0x7e)<<1)),	//# 2141, ticks 25976, elapsed 0, voice: 1 note: 71 velocity 77 event ('note', 25976, 6, 71, 77)
	3,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2142, ticks 25996, elapsed 3, voice: 0 note: 73 velocity 0 event ('note', 25996, 5, 73, 0)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2143, ticks 25996, elapsed 0, voice: 3 note: 73 velocity 0 event ('note', 25996, 6, 73, 0)
	// Note off skipped, note 49 not found in channels, probably interrupted
	3,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((63 &0x7e)<<1)),	//# 2145, ticks 26016, elapsed 3, voice: 0 note: 61 velocity 63 event ('note', 26016, 1, 61, 63)
	0,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((76 &0x7e)<<1)),	//# 2146, ticks 26016, elapsed 0, voice: 3 note: 76 velocity 76 event ('note', 26016, 1, 76, 76)
	// Note off skipped, note 64 not found in channels, probably interrupted
	4,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 2148, ticks 26044, elapsed 4, voice: 0 note: 73 velocity 88 event ('note', 26044, 5, 73, 88)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((88 &0x7e)<<1)),	//# 2149, ticks 26044, elapsed 0, voice: 3 note: 73 velocity 88 event ('note', 26044, 6, 73, 88)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	4,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2152, ticks 26068, elapsed 4, voice: 1 note: 71 velocity 0 event ('note', 26068, 5, 71, 0)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2153, ticks 26068, elapsed 0, voice: 2 note: 71 velocity 0 event ('note', 26068, 6, 71, 0)
	7,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 2154, ticks 26112, elapsed 7, voice: 1 note: 62 velocity 88 event ('note', 26112, 1, 62, 88)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((73 &0x7e)<<1)),	//# 2155, ticks 26112, elapsed 0, voice: 2 note: 47 velocity 73 event ('note', 26112, 1, 47, 73)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((81 &0x7e)<<1)),	//# 2156, ticks 26116, elapsed 0, voice: 2 note: 74 velocity 81 event ('note', 26116, 5, 74, 81)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((81 &0x7e)<<1)),	//# 2157, ticks 26116, elapsed 0, voice: 2 note: 74 velocity 81 event ('note', 26116, 6, 74, 81)
	6,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2158, ticks 26152, elapsed 6, voice: 0 note: 73 velocity 0 event ('note', 26152, 5, 73, 0)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2159, ticks 26152, elapsed 0, voice: 3 note: 73 velocity 0 event ('note', 26152, 6, 73, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	9,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2161, ticks 26208, elapsed 9, voice: 1 note: 62 velocity 0 event ('note', 26208, 1, 62, 0)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((96 &0x7e)<<1)),	//# 2162, ticks 26208, elapsed 0, voice: 0 note: 74 velocity 96 event ('note', 26208, 1, 74, 96)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2163, ticks 26208, elapsed 0, voice: 1 note: 59 velocity 64 event ('note', 26208, 1, 59, 64)
	// Note off skipped, note 81 not found in channels, probably interrupted
	16,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((93 &0x7e)<<1)),	//# 2165, ticks 26304, elapsed 16, voice: 3 note: 73 velocity 93 event ('note', 26304, 1, 73, 93)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((67 &0x7e)<<1)),	//# 2166, ticks 26304, elapsed 0, voice: 1 note: 57 velocity 67 event ('note', 26304, 1, 57, 67)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((68 &0x7e)<<1)),	//# 2167, ticks 26308, elapsed 0, voice: 1 note: 74 velocity 68 event ('note', 26308, 4, 74, 68)
	// Note off skipped, note 59 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2169, ticks 26320, elapsed 2, voice: 0 note: 74 velocity 0 event ('note', 26320, 1, 74, 0)
	6,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((70 &0x7e)<<1)),	//# 2170, ticks 26360, elapsed 6, voice: 0 note: 73 velocity 70 event ('note', 26360, 4, 73, 70)
	2,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2171, ticks 26372, elapsed 2, voice: 1 note: 74 velocity 0 event ('note', 26372, 4, 74, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	4,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((85 &0x7e)<<1)),	//# 2173, ticks 26400, elapsed 4, voice: 1 note: 74 velocity 85 event ('note', 26400, 1, 74, 85)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((64 &0x7e)<<1)),	//# 2174, ticks 26400, elapsed 0, voice: 0 note: 59 velocity 64 event ('note', 26400, 1, 59, 64)
	3,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2175, ticks 26420, elapsed 3, voice: 3 note: 73 velocity 0 event ('note', 26420, 1, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((77 &0x7e)<<1)),	//# 2177, ticks 26420, elapsed 0, voice: 3 note: 74 velocity 77 event ('note', 26420, 4, 74, 77)
	10,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((60 &0x7e)<<1)),	//# 2178, ticks 26480, elapsed 10, voice: 0 note: 76 velocity 60 event ('note', 26480, 4, 76, 60)
	2,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((89 &0x7e)<<1)),	//# 2179, ticks 26496, elapsed 2, voice: 0 note: 71 velocity 89 event ('note', 26496, 1, 71, 89)
	0,((( 3 &4)<<5)|( 56 &0x7f)), ((3 &3)|((73 &0x7e)<<1)),	//# 2180, ticks 26496, elapsed 0, voice: 3 note: 56 velocity 73 event ('note', 26496, 1, 56, 73)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2181, ticks 26500, elapsed 0, voice: 1 note: 74 velocity 0 event ('note', 26500, 1, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2182, ticks 26500, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 26500, 4, 74, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	7,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((81 &0x7e)<<1)),	//# 2184, ticks 26544, elapsed 7, voice: 1 note: 74 velocity 81 event ('note', 26544, 4, 74, 81)
	// Note off skipped, note 76 not found in channels, probably interrupted
	5,((( 3 &4)<<5)|( 56 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2186, ticks 26576, elapsed 5, voice: 3 note: 56 velocity 0 event ('note', 26576, 1, 56, 0)
	2,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2187, ticks 26588, elapsed 2, voice: 0 note: 71 velocity 0 event ('note', 26588, 1, 71, 0)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((71 &0x7e)<<1)),	//# 2188, ticks 26592, elapsed 0, voice: 0 note: 74 velocity 71 event ('note', 26592, 1, 74, 71)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((50 &0x7e)<<1)),	//# 2189, ticks 26592, elapsed 0, voice: 2 note: 59 velocity 50 event ('note', 26592, 1, 59, 50)
	1,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((86 &0x7e)<<1)),	//# 2190, ticks 26600, elapsed 1, voice: 3 note: 76 velocity 86 event ('note', 26600, 4, 76, 86)
	4,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2191, ticks 26624, elapsed 4, voice: 0 note: 74 velocity 0 event ('note', 26624, 4, 74, 0)
	5,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((97 &0x7e)<<1)),	//# 2192, ticks 26656, elapsed 5, voice: 0 note: 78 velocity 97 event ('note', 26656, 4, 78, 97)
	2,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2193, ticks 26672, elapsed 2, voice: 3 note: 76 velocity 0 event ('note', 26672, 4, 76, 0)
	2,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((84 &0x7e)<<1)),	//# 2194, ticks 26688, elapsed 2, voice: 3 note: 69 velocity 84 event ('note', 26688, 1, 69, 84)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((77 &0x7e)<<1)),	//# 2195, ticks 26688, elapsed 0, voice: 2 note: 54 velocity 77 event ('note', 26688, 1, 54, 77)
	1,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2196, ticks 26696, elapsed 1, voice: 1 note: 74 velocity 0 event ('note', 26696, 1, 74, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((81 &0x7e)<<1)),	//# 2198, ticks 26712, elapsed 2, voice: 1 note: 76 velocity 81 event ('note', 26712, 4, 76, 81)
	2,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2199, ticks 26728, elapsed 2, voice: 0 note: 78 velocity 0 event ('note', 26728, 4, 78, 0)
	9,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2200, ticks 26780, elapsed 9, voice: 2 note: 54 velocity 0 event ('note', 26780, 1, 54, 0)
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((84 &0x7e)<<1)),	//# 2201, ticks 26780, elapsed 0, voice: 0 note: 78 velocity 84 event ('note', 26780, 4, 78, 84)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((76 &0x7e)<<1)),	//# 2202, ticks 26784, elapsed 0, voice: 2 note: 74 velocity 76 event ('note', 26784, 1, 74, 76)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((53 &0x7e)<<1)),	//# 2203, ticks 26784, elapsed 0, voice: 2 note: 59 velocity 53 event ('note', 26784, 1, 59, 53)
	2,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2204, ticks 26796, elapsed 2, voice: 1 note: 76 velocity 0 event ('note', 26796, 4, 76, 0)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2205, ticks 26800, elapsed 0, voice: 3 note: 69 velocity 0 event ('note', 26800, 1, 69, 0)
	8,((( 1 &4)<<5)|( 68 &0x7f)), ((1 &3)|((84 &0x7e)<<1)),	//# 2206, ticks 26848, elapsed 8, voice: 1 note: 68 velocity 84 event ('note', 26848, 4, 68, 84)
	1,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2207, ticks 26856, elapsed 1, voice: 0 note: 78 velocity 0 event ('note', 26856, 4, 78, 0)
	2,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2208, ticks 26872, elapsed 2, voice: 2 note: 59 velocity 0 event ('note', 26872, 1, 59, 0)
	1,((( 0 &4)<<5)|( 68 &0x7f)), ((0 &3)|((83 &0x7e)<<1)),	//# 2209, ticks 26880, elapsed 1, voice: 0 note: 68 velocity 83 event ('note', 26880, 1, 68, 83)
	0,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((60 &0x7e)<<1)),	//# 2210, ticks 26880, elapsed 0, voice: 2 note: 52 velocity 60 event ('note', 26880, 1, 52, 60)
	// Note off skipped, note 74 not found in channels, probably interrupted
	11,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2212, ticks 26944, elapsed 11, voice: 2 note: 52 velocity 0 event ('note', 26944, 1, 52, 0)
	5,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((59 &0x7e)<<1)),	//# 2213, ticks 26976, elapsed 5, voice: 2 note: 59 velocity 59 event ('note', 26976, 1, 59, 59)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((77 &0x7e)<<1)),	//# 2214, ticks 26976, elapsed 0, voice: 3 note: 74 velocity 77 event ('note', 26976, 1, 74, 77)
	0,((( 0 &4)<<5)|( 68 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2215, ticks 26976, elapsed 0, voice: 0 note: 68 velocity 0 event ('note', 26976, 4, 68, 0)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2216, ticks 26980, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 26980, 5, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	1,((( 1 &4)<<5)|( 68 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2218, ticks 26988, elapsed 1, voice: 1 note: 68 velocity 0 event ('note', 26988, 1, 68, 0)
	9,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((71 &0x7e)<<1)),	//# 2219, ticks 27044, elapsed 9, voice: 0 note: 78 velocity 71 event ('note', 27044, 4, 78, 71)
	3,((( 1 &4)<<5)|( 68 &0x7f)), ((1 &3)|((83 &0x7e)<<1)),	//# 2220, ticks 27064, elapsed 3, voice: 1 note: 68 velocity 83 event ('note', 27064, 5, 68, 83)
	0,((( 3 &4)<<5)|( 68 &0x7f)), ((3 &3)|((83 &0x7e)<<1)),	//# 2221, ticks 27064, elapsed 0, voice: 3 note: 68 velocity 83 event ('note', 27064, 6, 68, 83)
	1,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((74 &0x7e)<<1)),	//# 2222, ticks 27072, elapsed 1, voice: 2 note: 50 velocity 74 event ('note', 27072, 1, 50, 74)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((85 &0x7e)<<1)),	//# 2223, ticks 27072, elapsed 0, voice: 0 note: 71 velocity 85 event ('note', 27072, 1, 71, 85)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	8,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((89 &0x7e)<<1)),	//# 2226, ticks 27120, elapsed 8, voice: 2 note: 66 velocity 89 event ('note', 27120, 5, 66, 89)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 2227, ticks 27120, elapsed 0, voice: 1 note: 66 velocity 89 event ('note', 27120, 6, 66, 89)
	2,((( 3 &4)<<5)|( 68 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2228, ticks 27136, elapsed 2, voice: 3 note: 68 velocity 0 event ('note', 27136, 5, 68, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	5,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((84 &0x7e)<<1)),	//# 2231, ticks 27168, elapsed 5, voice: 3 note: 74 velocity 84 event ('note', 27168, 1, 74, 84)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((48 &0x7e)<<1)),	//# 2232, ticks 27168, elapsed 0, voice: 3 note: 59 velocity 48 event ('note', 27168, 1, 59, 48)
	1,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2233, ticks 27176, elapsed 1, voice: 0 note: 71 velocity 0 event ('note', 27176, 1, 71, 0)
	1,((( 0 &4)<<5)|( 68 &0x7f)), ((0 &3)|((81 &0x7e)<<1)),	//# 2234, ticks 27184, elapsed 1, voice: 0 note: 68 velocity 81 event ('note', 27184, 5, 68, 81)
	0,((( 3 &4)<<5)|( 68 &0x7f)), ((3 &3)|((81 &0x7e)<<1)),	//# 2235, ticks 27184, elapsed 0, voice: 3 note: 68 velocity 81 event ('note', 27184, 6, 68, 81)
	4,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2236, ticks 27212, elapsed 4, voice: 1 note: 66 velocity 0 event ('note', 27212, 5, 66, 0)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2237, ticks 27212, elapsed 0, voice: 2 note: 66 velocity 0 event ('note', 27212, 6, 66, 0)
	4,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((81 &0x7e)<<1)),	//# 2238, ticks 27240, elapsed 4, voice: 1 note: 76 velocity 81 event ('note', 27240, 4, 76, 81)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((83 &0x7e)<<1)),	//# 2239, ticks 27240, elapsed 0, voice: 2 note: 69 velocity 83 event ('note', 27240, 5, 69, 83)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((83 &0x7e)<<1)),	//# 2240, ticks 27240, elapsed 0, voice: 0 note: 69 velocity 83 event ('note', 27240, 6, 69, 83)
	2,((( 3 &4)<<5)|( 68 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2241, ticks 27256, elapsed 2, voice: 3 note: 68 velocity 0 event ('note', 27256, 5, 68, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((82 &0x7e)<<1)),	//# 2243, ticks 27264, elapsed 1, voice: 3 note: 64 velocity 82 event ('note', 27264, 1, 64, 82)
	0,((( 1 &4)<<5)|( 49 &0x7f)), ((1 &3)|((78 &0x7e)<<1)),	//# 2244, ticks 27264, elapsed 0, voice: 1 note: 49 velocity 78 event ('note', 27264, 1, 49, 78)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	6,((( 1 &4)<<5)|( 68 &0x7f)), ((1 &3)|((71 &0x7e)<<1)),	//# 2248, ticks 27304, elapsed 6, voice: 1 note: 68 velocity 71 event ('note', 27304, 5, 68, 71)
	0,((( 1 &4)<<5)|( 68 &0x7f)), ((1 &3)|((71 &0x7e)<<1)),	//# 2249, ticks 27304, elapsed 0, voice: 1 note: 68 velocity 71 event ('note', 27304, 6, 68, 71)
	2,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2250, ticks 27320, elapsed 2, voice: 0 note: 69 velocity 0 event ('note', 27320, 5, 69, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2251, ticks 27320, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 27320, 6, 69, 0)
	// Note off skipped, note 49 not found in channels, probably interrupted
	6,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((59 &0x7e)<<1)),	//# 2253, ticks 27360, elapsed 6, voice: 0 note: 59 velocity 59 event ('note', 27360, 1, 59, 59)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((85 &0x7e)<<1)),	//# 2254, ticks 27360, elapsed 0, voice: 2 note: 74 velocity 85 event ('note', 27360, 1, 74, 85)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((78 &0x7e)<<1)),	//# 2255, ticks 27364, elapsed 0, voice: 0 note: 69 velocity 78 event ('note', 27364, 5, 69, 78)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((78 &0x7e)<<1)),	//# 2256, ticks 27364, elapsed 0, voice: 1 note: 69 velocity 78 event ('note', 27364, 6, 69, 78)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2257, ticks 27368, elapsed 0, voice: 3 note: 64 velocity 0 event ('note', 27368, 1, 64, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	// Note off skipped, note 68 not found in channels, probably interrupted
	10,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((72 &0x7e)<<1)),	//# 2260, ticks 27428, elapsed 10, voice: 3 note: 71 velocity 72 event ('note', 27428, 5, 71, 72)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((72 &0x7e)<<1)),	//# 2261, ticks 27428, elapsed 0, voice: 3 note: 71 velocity 72 event ('note', 27428, 6, 71, 72)
	2,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((87 &0x7e)<<1)),	//# 2262, ticks 27444, elapsed 2, voice: 3 note: 74 velocity 87 event ('note', 27444, 4, 74, 87)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2263, ticks 27448, elapsed 0, voice: 0 note: 69 velocity 0 event ('note', 27448, 5, 69, 0)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2264, ticks 27448, elapsed 0, voice: 1 note: 69 velocity 0 event ('note', 27448, 6, 69, 0)
	1,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((71 &0x7e)<<1)),	//# 2265, ticks 27456, elapsed 1, voice: 0 note: 47 velocity 71 event ('note', 27456, 1, 47, 71)
	0,((( 1 &4)<<5)|( 68 &0x7f)), ((1 &3)|((85 &0x7e)<<1)),	//# 2266, ticks 27456, elapsed 0, voice: 1 note: 68 velocity 85 event ('note', 27456, 1, 68, 85)
	// Note off skipped, note 76 not found in channels, probably interrupted
	3,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2268, ticks 27476, elapsed 3, voice: 2 note: 74 velocity 0 event ('note', 27476, 1, 74, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	2,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((86 &0x7e)<<1)),	//# 2270, ticks 27492, elapsed 2, voice: 2 note: 69 velocity 86 event ('note', 27492, 5, 69, 86)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((86 &0x7e)<<1)),	//# 2271, ticks 27492, elapsed 0, voice: 0 note: 69 velocity 86 event ('note', 27492, 6, 69, 86)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	10,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((80 &0x7e)<<1)),	//# 2275, ticks 27552, elapsed 10, voice: 1 note: 74 velocity 80 event ('note', 27552, 1, 74, 80)
	0,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((39 &0x7e)<<1)),	//# 2276, ticks 27552, elapsed 0, voice: 1 note: 59 velocity 39 event ('note', 27552, 1, 59, 39)
	1,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((80 &0x7e)<<1)),	//# 2277, ticks 27560, elapsed 1, voice: 1 note: 71 velocity 80 event ('note', 27560, 5, 71, 80)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((80 &0x7e)<<1)),	//# 2278, ticks 27560, elapsed 0, voice: 1 note: 71 velocity 80 event ('note', 27560, 6, 71, 80)
	// Note off skipped, note 68 not found in channels, probably interrupted
	3,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2280, ticks 27580, elapsed 3, voice: 0 note: 69 velocity 0 event ('note', 27580, 5, 69, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2281, ticks 27580, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 27580, 6, 69, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	7,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2283, ticks 27624, elapsed 7, voice: 3 note: 74 velocity 0 event ('note', 27624, 1, 74, 0)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((77 &0x7e)<<1)),	//# 2284, ticks 27628, elapsed 0, voice: 0 note: 64 velocity 77 event ('note', 27628, 5, 64, 77)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((77 &0x7e)<<1)),	//# 2285, ticks 27628, elapsed 0, voice: 2 note: 64 velocity 77 event ('note', 27628, 6, 64, 77)
	1,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((88 &0x7e)<<1)),	//# 2286, ticks 27636, elapsed 1, voice: 3 note: 73 velocity 88 event ('note', 27636, 4, 73, 88)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2287, ticks 27640, elapsed 0, voice: 1 note: 71 velocity 0 event ('note', 27640, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	1,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((86 &0x7e)<<1)),	//# 2289, ticks 27648, elapsed 1, voice: 1 note: 73 velocity 86 event ('note', 27648, 1, 73, 86)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((55 &0x7e)<<1)),	//# 2290, ticks 27648, elapsed 0, voice: 0 note: 45 velocity 55 event ('note', 27648, 1, 45, 55)
	// Note off skipped, note 74 not found in channels, probably interrupted
	15,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2292, ticks 27736, elapsed 15, voice: 0 note: 45 velocity 0 event ('note', 27736, 1, 45, 0)
	1,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((77 &0x7e)<<1)),	//# 2293, ticks 27744, elapsed 1, voice: 0 note: 69 velocity 77 event ('note', 27744, 1, 69, 77)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((57 &0x7e)<<1)),	//# 2294, ticks 27744, elapsed 0, voice: 0 note: 57 velocity 57 event ('note', 27744, 1, 57, 57)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2295, ticks 27748, elapsed 0, voice: 1 note: 73 velocity 0 event ('note', 27748, 1, 73, 0)
	15,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((91 &0x7e)<<1)),	//# 2296, ticks 27840, elapsed 15, voice: 1 note: 74 velocity 91 event ('note', 27840, 1, 74, 91)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((72 &0x7e)<<1)),	//# 2297, ticks 27840, elapsed 0, voice: 0 note: 47 velocity 72 event ('note', 27840, 1, 47, 72)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((72 &0x7e)<<1)),	//# 2298, ticks 27844, elapsed 0, voice: 0 note: 71 velocity 72 event ('note', 27844, 4, 71, 72)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	2,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2301, ticks 27860, elapsed 2, voice: 3 note: 73 velocity 0 event ('note', 27860, 4, 73, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	13,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((77 &0x7e)<<1)),	//# 2303, ticks 27936, elapsed 13, voice: 3 note: 69 velocity 77 event ('note', 27936, 1, 69, 77)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((54 &0x7e)<<1)),	//# 2304, ticks 27936, elapsed 0, voice: 0 note: 57 velocity 54 event ('note', 27936, 1, 57, 54)
	1,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2305, ticks 27944, elapsed 1, voice: 1 note: 74 velocity 0 event ('note', 27944, 1, 74, 0)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((99 &0x7e)<<1)),	//# 2306, ticks 27944, elapsed 0, voice: 1 note: 69 velocity 99 event ('note', 27944, 4, 69, 99)
	// Note off skipped, note 71 not found in channels, probably interrupted
	11,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2308, ticks 28008, elapsed 11, voice: 2 note: 64 velocity 0 event ('note', 28008, 5, 64, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	4,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((80 &0x7e)<<1)),	//# 2310, ticks 28032, elapsed 4, voice: 2 note: 49 velocity 80 event ('note', 28032, 1, 49, 80)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 2311, ticks 28032, elapsed 0, voice: 0 note: 76 velocity 88 event ('note', 28032, 1, 76, 88)
	0,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((81 &0x7e)<<1)),	//# 2312, ticks 28036, elapsed 0, voice: 3 note: 76 velocity 81 event ('note', 28036, 4, 76, 81)
	// Note off skipped, note 57 not found in channels, probably interrupted
	3,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2314, ticks 28056, elapsed 3, voice: 1 note: 69 velocity 0 event ('note', 28056, 1, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	9,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2316, ticks 28112, elapsed 9, voice: 2 note: 49 velocity 0 event ('note', 28112, 1, 49, 0)
	1,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2317, ticks 28120, elapsed 1, voice: 0 note: 76 velocity 0 event ('note', 28120, 1, 76, 0)
	1,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((83 &0x7e)<<1)),	//# 2318, ticks 28128, elapsed 1, voice: 0 note: 69 velocity 83 event ('note', 28128, 1, 69, 83)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((63 &0x7e)<<1)),	//# 2319, ticks 28128, elapsed 0, voice: 1 note: 57 velocity 63 event ('note', 28128, 1, 57, 63)
	14,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((74 &0x7e)<<1)),	//# 2320, ticks 28212, elapsed 14, voice: 2 note: 69 velocity 74 event ('note', 28212, 5, 69, 74)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((74 &0x7e)<<1)),	//# 2321, ticks 28212, elapsed 0, voice: 1 note: 69 velocity 74 event ('note', 28212, 6, 69, 74)
	2,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((97 &0x7e)<<1)),	//# 2322, ticks 28224, elapsed 2, voice: 1 note: 73 velocity 97 event ('note', 28224, 1, 73, 97)
	0,((( 2 &4)<<5)|( 45 &0x7f)), ((2 &3)|((52 &0x7e)<<1)),	//# 2323, ticks 28224, elapsed 0, voice: 2 note: 45 velocity 52 event ('note', 28224, 1, 45, 52)
	// Note off skipped, note 57 not found in channels, probably interrupted
	4,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2325, ticks 28252, elapsed 4, voice: 0 note: 69 velocity 0 event ('note', 28252, 1, 69, 0)
	4,((( 2 &4)<<5)|( 45 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2326, ticks 28280, elapsed 4, voice: 2 note: 45 velocity 0 event ('note', 28280, 1, 45, 0)
	6,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((61 &0x7e)<<1)),	//# 2327, ticks 28320, elapsed 6, voice: 0 note: 57 velocity 61 event ('note', 28320, 1, 57, 61)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((76 &0x7e)<<1)),	//# 2328, ticks 28320, elapsed 0, voice: 2 note: 76 velocity 76 event ('note', 28320, 1, 76, 76)
	4,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2329, ticks 28344, elapsed 4, voice: 1 note: 73 velocity 0 event ('note', 28344, 1, 73, 0)
	9,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((81 &0x7e)<<1)),	//# 2330, ticks 28396, elapsed 9, voice: 1 note: 78 velocity 81 event ('note', 28396, 5, 78, 81)
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((81 &0x7e)<<1)),	//# 2331, ticks 28396, elapsed 0, voice: 0 note: 78 velocity 81 event ('note', 28396, 6, 78, 81)
	3,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((104 &0x7e)<<1)),	//# 2332, ticks 28416, elapsed 3, voice: 2 note: 78 velocity 104 event ('note', 28416, 1, 78, 104)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((77 &0x7e)<<1)),	//# 2333, ticks 28416, elapsed 0, voice: 0 note: 50 velocity 77 event ('note', 28416, 1, 50, 77)
	// Note off skipped, note 57 not found in channels, probably interrupted
	3,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2335, ticks 28436, elapsed 3, voice: 3 note: 76 velocity 0 event ('note', 28436, 1, 76, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	11,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((88 &0x7e)<<1)),	//# 2338, ticks 28504, elapsed 11, voice: 3 note: 74 velocity 88 event ('note', 28504, 4, 74, 88)
	1,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2339, ticks 28512, elapsed 1, voice: 0 note: 50 velocity 0 event ('note', 28512, 1, 50, 0)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((89 &0x7e)<<1)),	//# 2340, ticks 28512, elapsed 0, voice: 0 note: 74 velocity 89 event ('note', 28512, 1, 74, 89)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((51 &0x7e)<<1)),	//# 2341, ticks 28512, elapsed 0, voice: 1 note: 57 velocity 51 event ('note', 28512, 1, 57, 51)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2342, ticks 28516, elapsed 0, voice: 2 note: 78 velocity 0 event ('note', 28516, 1, 78, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	13,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((60 &0x7e)<<1)),	//# 2344, ticks 28592, elapsed 13, voice: 2 note: 73 velocity 60 event ('note', 28592, 4, 73, 60)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((83 &0x7e)<<1)),	//# 2345, ticks 28596, elapsed 0, voice: 1 note: 76 velocity 83 event ('note', 28596, 5, 76, 83)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((83 &0x7e)<<1)),	//# 2346, ticks 28596, elapsed 0, voice: 2 note: 76 velocity 83 event ('note', 28596, 6, 76, 83)
	1,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2347, ticks 28604, elapsed 1, voice: 0 note: 74 velocity 0 event ('note', 28604, 4, 74, 0)
	0,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((83 &0x7e)<<1)),	//# 2348, ticks 28608, elapsed 0, voice: 0 note: 81 velocity 83 event ('note', 28608, 1, 81, 83)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((61 &0x7e)<<1)),	//# 2349, ticks 28608, elapsed 0, voice: 0 note: 52 velocity 61 event ('note', 28608, 1, 52, 61)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	7,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2353, ticks 28652, elapsed 7, voice: 3 note: 74 velocity 0 event ('note', 28652, 1, 74, 0)
	5,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2354, ticks 28684, elapsed 5, voice: 0 note: 52 velocity 0 event ('note', 28684, 1, 52, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((87 &0x7e)<<1)),	//# 2356, ticks 28684, elapsed 0, voice: 0 note: 74 velocity 87 event ('note', 28684, 4, 74, 87)
	3,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((59 &0x7e)<<1)),	//# 2357, ticks 28704, elapsed 3, voice: 3 note: 57 velocity 59 event ('note', 28704, 1, 57, 59)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((90 &0x7e)<<1)),	//# 2358, ticks 28704, elapsed 0, voice: 3 note: 73 velocity 90 event ('note', 28704, 1, 73, 90)
	// Note off skipped, note 81 not found in channels, probably interrupted
	12,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((96 &0x7e)<<1)),	//# 2360, ticks 28776, elapsed 12, voice: 1 note: 74 velocity 96 event ('note', 28776, 5, 74, 96)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((96 &0x7e)<<1)),	//# 2361, ticks 28776, elapsed 0, voice: 2 note: 74 velocity 96 event ('note', 28776, 6, 74, 96)
	1,((( 0 &4)<<5)|( 83 &0x7f)), ((0 &3)|((77 &0x7e)<<1)),	//# 2362, ticks 28784, elapsed 1, voice: 0 note: 83 velocity 77 event ('note', 28784, 4, 83, 77)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((93 &0x7e)<<1)),	//# 2365, ticks 28800, elapsed 2, voice: 0 note: 74 velocity 93 event ('note', 28800, 1, 74, 93)
	0,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((79 &0x7e)<<1)),	//# 2366, ticks 28800, elapsed 0, voice: 3 note: 54 velocity 79 event ('note', 28800, 1, 54, 79)
	1,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2367, ticks 28808, elapsed 1, voice: 0 note: 74 velocity 0 event ('note', 28808, 4, 74, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	9,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((87 &0x7e)<<1)),	//# 2370, ticks 28864, elapsed 9, voice: 0 note: 73 velocity 87 event ('note', 28864, 5, 73, 87)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((87 &0x7e)<<1)),	//# 2371, ticks 28864, elapsed 0, voice: 3 note: 73 velocity 87 event ('note', 28864, 6, 73, 87)
	// Note off skipped, note 54 not found in channels, probably interrupted
	3,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2373, ticks 28884, elapsed 3, voice: 1 note: 74 velocity 0 event ('note', 28884, 5, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2374, ticks 28884, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 28884, 6, 74, 0)
	2,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((62 &0x7e)<<1)),	//# 2375, ticks 28896, elapsed 2, voice: 1 note: 57 velocity 62 event ('note', 28896, 1, 57, 62)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((84 &0x7e)<<1)),	//# 2376, ticks 28896, elapsed 0, voice: 2 note: 76 velocity 84 event ('note', 28896, 1, 76, 84)
	// Note off skipped, note 74 not found in channels, probably interrupted
	11,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((82 &0x7e)<<1)),	//# 2378, ticks 28960, elapsed 11, voice: 1 note: 74 velocity 82 event ('note', 28960, 5, 74, 82)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((82 &0x7e)<<1)),	//# 2379, ticks 28960, elapsed 0, voice: 1 note: 74 velocity 82 event ('note', 28960, 6, 74, 82)
	4,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2380, ticks 28984, elapsed 4, voice: 0 note: 73 velocity 0 event ('note', 28984, 5, 73, 0)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2381, ticks 28984, elapsed 0, voice: 3 note: 73 velocity 0 event ('note', 28984, 6, 73, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((93 &0x7e)<<1)),	//# 2383, ticks 28992, elapsed 1, voice: 0 note: 78 velocity 93 event ('note', 28992, 1, 78, 93)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((59 &0x7e)<<1)),	//# 2384, ticks 28992, elapsed 0, voice: 3 note: 50 velocity 59 event ('note', 28992, 1, 50, 59)
	0,((( 3 &4)<<5)|( 81 &0x7f)), ((3 &3)|((88 &0x7e)<<1)),	//# 2385, ticks 28992, elapsed 0, voice: 3 note: 81 velocity 88 event ('note', 28992, 4, 81, 88)
	// Note off skipped, note 83 not found in channels, probably interrupted
	3,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2387, ticks 29012, elapsed 3, voice: 2 note: 76 velocity 0 event ('note', 29012, 1, 76, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	13,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((63 &0x7e)<<1)),	//# 2389, ticks 29088, elapsed 13, voice: 2 note: 57 velocity 63 event ('note', 29088, 1, 57, 63)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((88 &0x7e)<<1)),	//# 2390, ticks 29088, elapsed 0, voice: 2 note: 74 velocity 88 event ('note', 29088, 1, 74, 88)
	1,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2391, ticks 29096, elapsed 1, voice: 0 note: 78 velocity 0 event ('note', 29096, 1, 78, 0)
	13,((( 3 &4)<<5)|( 81 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2392, ticks 29176, elapsed 13, voice: 3 note: 81 velocity 0 event ('note', 29176, 4, 81, 0)
	1,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((87 &0x7e)<<1)),	//# 2393, ticks 29184, elapsed 1, voice: 0 note: 71 velocity 87 event ('note', 29184, 1, 71, 87)
	0,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((75 &0x7e)<<1)),	//# 2394, ticks 29184, elapsed 0, voice: 3 note: 52 velocity 75 event ('note', 29184, 1, 52, 75)
	2,((( 3 &4)<<5)|( 80 &0x7f)), ((3 &3)|((109 &0x7e)<<1)),	//# 2395, ticks 29196, elapsed 2, voice: 3 note: 80 velocity 109 event ('note', 29196, 4, 80, 109)
	// Note off skipped, note 57 not found in channels, probably interrupted
	3,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2397, ticks 29216, elapsed 3, voice: 1 note: 74 velocity 0 event ('note', 29216, 1, 74, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	9,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((72 &0x7e)<<1)),	//# 2399, ticks 29268, elapsed 9, voice: 1 note: 73 velocity 72 event ('note', 29268, 5, 73, 72)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((72 &0x7e)<<1)),	//# 2400, ticks 29268, elapsed 0, voice: 1 note: 73 velocity 72 event ('note', 29268, 6, 73, 72)
	2,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((77 &0x7e)<<1)),	//# 2401, ticks 29280, elapsed 2, voice: 1 note: 76 velocity 77 event ('note', 29280, 1, 76, 77)
	1,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2402, ticks 29288, elapsed 1, voice: 2 note: 74 velocity 0 event ('note', 29288, 5, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2404, ticks 29296, elapsed 1, voice: 0 note: 71 velocity 0 event ('note', 29296, 1, 71, 0)
	11,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((80 &0x7e)<<1)),	//# 2405, ticks 29360, elapsed 11, voice: 0 note: 78 velocity 80 event ('note', 29360, 4, 78, 80)
	2,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((87 &0x7e)<<1)),	//# 2406, ticks 29372, elapsed 2, voice: 2 note: 74 velocity 87 event ('note', 29372, 5, 74, 87)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((87 &0x7e)<<1)),	//# 2407, ticks 29372, elapsed 0, voice: 1 note: 74 velocity 87 event ('note', 29372, 6, 74, 87)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((94 &0x7e)<<1)),	//# 2408, ticks 29376, elapsed 0, voice: 0 note: 74 velocity 94 event ('note', 29376, 1, 74, 94)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((87 &0x7e)<<1)),	//# 2409, ticks 29376, elapsed 0, voice: 1 note: 40 velocity 87 event ('note', 29376, 1, 40, 87)
	0,((( 3 &4)<<5)|( 80 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2410, ticks 29380, elapsed 0, voice: 3 note: 80 velocity 0 event ('note', 29380, 4, 80, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	12,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2414, ticks 29452, elapsed 12, voice: 1 note: 40 velocity 0 event ('note', 29452, 1, 40, 0)
	1,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((87 &0x7e)<<1)),	//# 2415, ticks 29460, elapsed 1, voice: 1 note: 76 velocity 87 event ('note', 29460, 4, 76, 87)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((75 &0x7e)<<1)),	//# 2416, ticks 29460, elapsed 0, voice: 3 note: 71 velocity 75 event ('note', 29460, 5, 71, 75)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((75 &0x7e)<<1)),	//# 2417, ticks 29460, elapsed 0, voice: 3 note: 71 velocity 75 event ('note', 29460, 6, 71, 75)
	2,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((82 &0x7e)<<1)),	//# 2418, ticks 29472, elapsed 2, voice: 3 note: 76 velocity 82 event ('note', 29472, 1, 76, 82)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2419, ticks 29472, elapsed 0, voice: 0 note: 74 velocity 0 event ('note', 29472, 5, 74, 0)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2420, ticks 29472, elapsed 0, voice: 2 note: 74 velocity 0 event ('note', 29472, 6, 74, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	15,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((86 &0x7e)<<1)),	//# 2423, ticks 29564, elapsed 15, voice: 0 note: 81 velocity 86 event ('note', 29564, 4, 81, 86)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((80 &0x7e)<<1)),	//# 2424, ticks 29564, elapsed 0, voice: 2 note: 73 velocity 80 event ('note', 29564, 5, 73, 80)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((80 &0x7e)<<1)),	//# 2425, ticks 29564, elapsed 0, voice: 2 note: 73 velocity 80 event ('note', 29564, 6, 73, 80)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((88 &0x7e)<<1)),	//# 2426, ticks 29568, elapsed 0, voice: 2 note: 73 velocity 88 event ('note', 29568, 1, 73, 88)
	1,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2427, ticks 29576, elapsed 1, voice: 1 note: 76 velocity 0 event ('note', 29576, 1, 76, 0)
	2,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2428, ticks 29592, elapsed 2, voice: 3 note: 76 velocity 0 event ('note', 29592, 4, 76, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	12,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((84 &0x7e)<<1)),	//# 2431, ticks 29664, elapsed 12, voice: 1 note: 81 velocity 84 event ('note', 29664, 1, 81, 84)
	0,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((83 &0x7e)<<1)),	//# 2432, ticks 29664, elapsed 0, voice: 3 note: 54 velocity 83 event ('note', 29664, 1, 54, 83)
	2,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2433, ticks 29676, elapsed 2, voice: 2 note: 73 velocity 0 event ('note', 29676, 1, 73, 0)
	12,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((89 &0x7e)<<1)),	//# 2434, ticks 29748, elapsed 12, voice: 2 note: 74 velocity 89 event ('note', 29748, 5, 74, 89)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((89 &0x7e)<<1)),	//# 2435, ticks 29748, elapsed 0, voice: 3 note: 74 velocity 89 event ('note', 29748, 6, 74, 89)
	2,((( 1 &4)<<5)|( 80 &0x7f)), ((1 &3)|((96 &0x7e)<<1)),	//# 2436, ticks 29760, elapsed 2, voice: 1 note: 80 velocity 96 event ('note', 29760, 1, 80, 96)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((71 &0x7e)<<1)),	//# 2437, ticks 29760, elapsed 0, voice: 0 note: 52 velocity 71 event ('note', 29760, 1, 52, 71)
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 81 not found in channels, probably interrupted
	16,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((105 &0x7e)<<1)),	//# 2442, ticks 29856, elapsed 16, voice: 0 note: 78 velocity 105 event ('note', 29856, 1, 78, 105)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((61 &0x7e)<<1)),	//# 2443, ticks 29856, elapsed 0, voice: 2 note: 50 velocity 61 event ('note', 29856, 1, 50, 61)
	// Note off skipped, note 52 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 80 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2445, ticks 29868, elapsed 2, voice: 1 note: 80 velocity 0 event ('note', 29868, 1, 80, 0)
	13,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((85 &0x7e)<<1)),	//# 2446, ticks 29944, elapsed 13, voice: 1 note: 76 velocity 85 event ('note', 29944, 5, 76, 85)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((85 &0x7e)<<1)),	//# 2447, ticks 29944, elapsed 0, voice: 2 note: 76 velocity 85 event ('note', 29944, 6, 76, 85)
	1,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((94 &0x7e)<<1)),	//# 2448, ticks 29952, elapsed 1, voice: 1 note: 76 velocity 94 event ('note', 29952, 1, 76, 94)
	0,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((88 &0x7e)<<1)),	//# 2449, ticks 29952, elapsed 0, voice: 2 note: 49 velocity 88 event ('note', 29952, 1, 49, 88)
	1,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2450, ticks 29960, elapsed 1, voice: 3 note: 74 velocity 0 event ('note', 29960, 5, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2453, ticks 29976, elapsed 2, voice: 0 note: 78 velocity 0 event ('note', 29976, 1, 78, 0)
	11,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2454, ticks 30040, elapsed 11, voice: 2 note: 49 velocity 0 event ('note', 30040, 1, 49, 0)
	1,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2455, ticks 30048, elapsed 1, voice: 1 note: 76 velocity 0 event ('note', 30048, 1, 76, 0)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((90 &0x7e)<<1)),	//# 2456, ticks 30048, elapsed 0, voice: 0 note: 74 velocity 90 event ('note', 30048, 1, 74, 90)
	16,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((83 &0x7e)<<1)),	//# 2457, ticks 30144, elapsed 16, voice: 1 note: 73 velocity 83 event ('note', 30144, 1, 73, 83)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((76 &0x7e)<<1)),	//# 2458, ticks 30144, elapsed 0, voice: 2 note: 50 velocity 76 event ('note', 30144, 1, 50, 76)
	4,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2459, ticks 30168, elapsed 4, voice: 0 note: 74 velocity 0 event ('note', 30168, 1, 74, 0)
	10,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((84 &0x7e)<<1)),	//# 2460, ticks 30228, elapsed 10, voice: 0 note: 78 velocity 84 event ('note', 30228, 5, 78, 84)
	0,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((84 &0x7e)<<1)),	//# 2461, ticks 30228, elapsed 0, voice: 3 note: 78 velocity 84 event ('note', 30228, 6, 78, 84)
	0,((( 2 &4)<<5)|( 83 &0x7f)), ((2 &3)|((83 &0x7e)<<1)),	//# 2462, ticks 30232, elapsed 0, voice: 2 note: 83 velocity 83 event ('note', 30232, 4, 83, 83)
	1,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((78 &0x7e)<<1)),	//# 2463, ticks 30240, elapsed 1, voice: 1 note: 76 velocity 78 event ('note', 30240, 1, 76, 78)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 81 not found in channels, probably interrupted
	6,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2467, ticks 30280, elapsed 6, voice: 1 note: 76 velocity 0 event ('note', 30280, 5, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	7,((( 1 &4)<<5)|( 80 &0x7f)), ((1 &3)|((78 &0x7e)<<1)),	//# 2469, ticks 30324, elapsed 7, voice: 1 note: 80 velocity 78 event ('note', 30324, 4, 80, 78)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((82 &0x7e)<<1)),	//# 2470, ticks 30328, elapsed 0, voice: 1 note: 71 velocity 82 event ('note', 30328, 5, 71, 82)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((82 &0x7e)<<1)),	//# 2471, ticks 30328, elapsed 0, voice: 1 note: 71 velocity 82 event ('note', 30328, 6, 71, 82)
	1,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((68 &0x7e)<<1)),	//# 2472, ticks 30336, elapsed 1, voice: 1 note: 52 velocity 68 event ('note', 30336, 1, 52, 68)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((97 &0x7e)<<1)),	//# 2473, ticks 30336, elapsed 0, voice: 1 note: 74 velocity 97 event ('note', 30336, 1, 74, 97)
	2,((( 2 &4)<<5)|( 83 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2474, ticks 30348, elapsed 2, voice: 2 note: 83 velocity 0 event ('note', 30348, 4, 83, 0)
	2,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2475, ticks 30364, elapsed 2, voice: 0 note: 78 velocity 0 event ('note', 30364, 5, 78, 0)
	0,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2476, ticks 30364, elapsed 0, voice: 3 note: 78 velocity 0 event ('note', 30364, 6, 78, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	11,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((94 &0x7e)<<1)),	//# 2479, ticks 30432, elapsed 11, voice: 0 note: 73 velocity 94 event ('note', 30432, 1, 73, 94)
	4,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2480, ticks 30460, elapsed 4, voice: 1 note: 74 velocity 0 event ('note', 30460, 1, 74, 0)
	11,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((92 &0x7e)<<1)),	//# 2481, ticks 30528, elapsed 11, voice: 1 note: 71 velocity 92 event ('note', 30528, 1, 71, 92)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((72 &0x7e)<<1)),	//# 2482, ticks 30528, elapsed 0, voice: 2 note: 40 velocity 72 event ('note', 30528, 1, 40, 72)
	4,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2483, ticks 30552, elapsed 4, voice: 0 note: 73 velocity 0 event ('note', 30552, 1, 73, 0)
	6,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2484, ticks 30592, elapsed 6, voice: 2 note: 40 velocity 0 event ('note', 30592, 1, 40, 0)
	4,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((77 &0x7e)<<1)),	//# 2485, ticks 30616, elapsed 4, voice: 0 note: 69 velocity 77 event ('note', 30616, 5, 69, 77)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((77 &0x7e)<<1)),	//# 2486, ticks 30616, elapsed 0, voice: 2 note: 69 velocity 77 event ('note', 30616, 6, 69, 77)
	0,((( 3 &4)<<5)|( 81 &0x7f)), ((3 &3)|((88 &0x7e)<<1)),	//# 2487, ticks 30620, elapsed 0, voice: 3 note: 81 velocity 88 event ('note', 30620, 4, 81, 88)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((96 &0x7e)<<1)),	//# 2488, ticks 30624, elapsed 0, voice: 0 note: 74 velocity 96 event ('note', 30624, 1, 74, 96)
	2,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2489, ticks 30636, elapsed 2, voice: 1 note: 71 velocity 0 event ('note', 30636, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 80 not found in channels, probably interrupted
	10,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2493, ticks 30696, elapsed 10, voice: 2 note: 69 velocity 0 event ('note', 30696, 5, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 81 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2495, ticks 30704, elapsed 1, voice: 3 note: 81 velocity 0 event ('note', 30704, 4, 81, 0)
	1,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((68 &0x7e)<<1)),	//# 2496, ticks 30712, elapsed 1, voice: 1 note: 61 velocity 68 event ('note', 30712, 7, 61, 68)
	1,((( 2 &4)<<5)|( 45 &0x7f)), ((2 &3)|((98 &0x7e)<<1)),	//# 2497, ticks 30720, elapsed 1, voice: 2 note: 45 velocity 98 event ('note', 30720, 1, 45, 98)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((104 &0x7e)<<1)),	//# 2498, ticks 30720, elapsed 0, voice: 3 note: 73 velocity 104 event ('note', 30720, 1, 73, 104)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((74 &0x7e)<<1)),	//# 2499, ticks 30720, elapsed 0, voice: 1 note: 69 velocity 74 event ('note', 30720, 5, 69, 74)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((74 &0x7e)<<1)),	//# 2500, ticks 30720, elapsed 0, voice: 1 note: 69 velocity 74 event ('note', 30720, 6, 69, 74)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((87 &0x7e)<<1)),	//# 2501, ticks 30724, elapsed 0, voice: 1 note: 57 velocity 87 event ('note', 30724, 3, 57, 87)
	0,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((99 &0x7e)<<1)),	//# 2502, ticks 30724, elapsed 0, voice: 1 note: 81 velocity 99 event ('note', 30724, 4, 81, 99)
	2,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((86 &0x7e)<<1)),	//# 2503, ticks 30736, elapsed 2, voice: 0 note: 45 velocity 86 event ('note', 30736, 2, 45, 86)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((99 &0x7e)<<1)),	//# 2504, ticks 30740, elapsed 0, voice: 0 note: 57 velocity 99 event ('note', 30740, 8, 57, 99)
	// Note off skipped, note 74 not found in channels, probably interrupted
	7,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2506, ticks 30784, elapsed 7, voice: 0 note: 57 velocity 0 event ('note', 30784, 8, 57, 0)
	1,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2507, ticks 30792, elapsed 1, voice: 3 note: 73 velocity 0 event ('note', 30792, 1, 73, 0)
	4,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((92 &0x7e)<<1)),	//# 2508, ticks 30816, elapsed 4, voice: 0 note: 57 velocity 92 event ('note', 30816, 8, 57, 92)
	15,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((96 &0x7e)<<1)),	//# 2509, ticks 30904, elapsed 15, voice: 3 note: 61 velocity 96 event ('note', 30904, 8, 61, 96)
	1,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((96 &0x7e)<<1)),	//# 2510, ticks 30912, elapsed 1, voice: 0 note: 69 velocity 96 event ('note', 30912, 1, 69, 96)
	// Note off skipped, note 57 not found in channels, probably interrupted
	9,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2512, ticks 30964, elapsed 9, voice: 3 note: 61 velocity 0 event ('note', 30964, 8, 61, 0)
	5,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2513, ticks 30996, elapsed 5, voice: 0 note: 69 velocity 0 event ('note', 30996, 1, 69, 0)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((98 &0x7e)<<1)),	//# 2514, ticks 30996, elapsed 0, voice: 0 note: 61 velocity 98 event ('note', 30996, 8, 61, 98)
	2,((( 2 &4)<<5)|( 45 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2515, ticks 31012, elapsed 2, voice: 2 note: 45 velocity 0 event ('note', 31012, 1, 45, 0)
	9,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2516, ticks 31064, elapsed 9, voice: 0 note: 61 velocity 0 event ('note', 31064, 7, 61, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	4,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((95 &0x7e)<<1)),	//# 2519, ticks 31088, elapsed 4, voice: 0 note: 64 velocity 95 event ('note', 31088, 8, 64, 95)
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	9,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2523, ticks 31144, elapsed 9, voice: 1 note: 81 velocity 0 event ('note', 31144, 4, 81, 0)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2524, ticks 31148, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 31148, 8, 64, 0)
	5,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((98 &0x7e)<<1)),	//# 2525, ticks 31180, elapsed 5, voice: 0 note: 64 velocity 98 event ('note', 31180, 8, 64, 98)
	15,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((101 &0x7e)<<1)),	//# 2526, ticks 31268, elapsed 15, voice: 1 note: 45 velocity 101 event ('note', 31268, 3, 45, 101)
	0,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((69 &0x7e)<<1)),	//# 2527, ticks 31268, elapsed 0, voice: 2 note: 61 velocity 69 event ('note', 31268, 7, 61, 69)
	0,((( 3 &4)<<5)|( 33 &0x7f)), ((3 &3)|((99 &0x7e)<<1)),	//# 2528, ticks 31272, elapsed 0, voice: 3 note: 33 velocity 99 event ('note', 31272, 2, 33, 99)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((104 &0x7e)<<1)),	//# 2529, ticks 31272, elapsed 0, voice: 2 note: 69 velocity 104 event ('note', 31272, 8, 69, 104)
	2,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2530, ticks 31284, elapsed 2, voice: 0 note: 64 velocity 0 event ('note', 31284, 8, 64, 0)
	2,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((99 &0x7e)<<1)),	//# 2531, ticks 31296, elapsed 2, voice: 0 note: 45 velocity 99 event ('note', 31296, 1, 45, 99)
	5,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2532, ticks 31328, elapsed 5, voice: 2 note: 69 velocity 0 event ('note', 31328, 8, 69, 0)
	2,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2533, ticks 31344, elapsed 2, voice: 0 note: 45 velocity 0 event ('note', 31344, 3, 45, 0)
	1,((( 3 &4)<<5)|( 33 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2534, ticks 31352, elapsed 1, voice: 3 note: 33 velocity 0 event ('note', 31352, 2, 33, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((102 &0x7e)<<1)),	//# 2536, ticks 31368, elapsed 2, voice: 0 note: 69 velocity 102 event ('note', 31368, 8, 69, 102)
	1,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2537, ticks 31376, elapsed 1, voice: 1 note: 45 velocity 0 event ('note', 31376, 1, 45, 0)
	15,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((80 &0x7e)<<1)),	//# 2538, ticks 31464, elapsed 15, voice: 1 note: 59 velocity 80 event ('note', 31464, 7, 59, 80)
	0,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((99 &0x7e)<<1)),	//# 2539, ticks 31468, elapsed 0, voice: 2 note: 52 velocity 99 event ('note', 31468, 3, 52, 99)
	0,((( 3 &4)<<5)|( 68 &0x7f)), ((3 &3)|((93 &0x7e)<<1)),	//# 2540, ticks 31468, elapsed 0, voice: 3 note: 68 velocity 93 event ('note', 31468, 8, 68, 93)
	2,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((97 &0x7e)<<1)),	//# 2541, ticks 31484, elapsed 2, voice: 1 note: 40 velocity 97 event ('note', 31484, 2, 40, 97)
	0,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((96 &0x7e)<<1)),	//# 2542, ticks 31488, elapsed 0, voice: 3 note: 52 velocity 96 event ('note', 31488, 1, 52, 96)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2543, ticks 31488, elapsed 0, voice: 0 note: 69 velocity 0 event ('note', 31488, 8, 69, 0)
	8,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2544, ticks 31536, elapsed 8, voice: 2 note: 52 velocity 0 event ('note', 31536, 3, 52, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	4,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2546, ticks 31560, elapsed 4, voice: 3 note: 52 velocity 0 event ('note', 31560, 1, 52, 0)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((97 &0x7e)<<1)),	//# 2547, ticks 31564, elapsed 0, voice: 0 note: 69 velocity 97 event ('note', 31564, 8, 69, 97)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2548, ticks 31568, elapsed 0, voice: 1 note: 40 velocity 0 event ('note', 31568, 2, 40, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	16,((( 1 &4)<<5)|( 54 &0x7f)), ((1 &3)|((100 &0x7e)<<1)),	//# 2550, ticks 31664, elapsed 16, voice: 1 note: 54 velocity 100 event ('note', 31664, 3, 54, 100)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((91 &0x7e)<<1)),	//# 2551, ticks 31664, elapsed 0, voice: 2 note: 57 velocity 91 event ('note', 31664, 7, 57, 91)
	0,((( 3 &4)<<5)|( 68 &0x7f)), ((3 &3)|((83 &0x7e)<<1)),	//# 2552, ticks 31668, elapsed 0, voice: 3 note: 68 velocity 83 event ('note', 31668, 8, 68, 83)
	1,((( 3 &4)<<5)|( 42 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2553, ticks 31676, elapsed 1, voice: 3 note: 42 velocity 100 event ('note', 31676, 2, 42, 100)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((98 &0x7e)<<1)),	//# 2554, ticks 31680, elapsed 0, voice: 2 note: 54 velocity 98 event ('note', 31680, 1, 54, 98)
	4,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2555, ticks 31704, elapsed 4, voice: 0 note: 69 velocity 0 event ('note', 31704, 8, 69, 0)
	4,((( 1 &4)<<5)|( 54 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2556, ticks 31728, elapsed 4, voice: 1 note: 54 velocity 0 event ('note', 31728, 3, 54, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	5,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((83 &0x7e)<<1)),	//# 2558, ticks 31760, elapsed 5, voice: 0 note: 66 velocity 83 event ('note', 31760, 8, 66, 83)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2559, ticks 31764, elapsed 0, voice: 2 note: 54 velocity 0 event ('note', 31764, 1, 54, 0)
	0,((( 3 &4)<<5)|( 42 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2560, ticks 31764, elapsed 0, voice: 3 note: 42 velocity 0 event ('note', 31764, 2, 42, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	15,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((69 &0x7e)<<1)),	//# 2562, ticks 31856, elapsed 15, voice: 1 note: 59 velocity 69 event ('note', 31856, 7, 59, 69)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((95 &0x7e)<<1)),	//# 2563, ticks 31856, elapsed 0, voice: 2 note: 64 velocity 95 event ('note', 31856, 8, 64, 95)
	0,((( 3 &4)<<5)|( 56 &0x7f)), ((3 &3)|((102 &0x7e)<<1)),	//# 2564, ticks 31860, elapsed 0, voice: 3 note: 56 velocity 102 event ('note', 31860, 3, 56, 102)
	0,((( 1 &4)<<5)|( 44 &0x7f)), ((1 &3)|((99 &0x7e)<<1)),	//# 2565, ticks 31864, elapsed 0, voice: 1 note: 44 velocity 99 event ('note', 31864, 2, 44, 99)
	1,((( 0 &4)<<5)|( 56 &0x7f)), ((0 &3)|((101 &0x7e)<<1)),	//# 2566, ticks 31872, elapsed 1, voice: 0 note: 56 velocity 101 event ('note', 31872, 1, 56, 101)
	// Note off skipped, note 66 not found in channels, probably interrupted
	8,((( 0 &4)<<5)|( 56 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2568, ticks 31920, elapsed 8, voice: 0 note: 56 velocity 0 event ('note', 31920, 3, 56, 0)
	2,((( 3 &4)<<5)|( 56 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2569, ticks 31936, elapsed 2, voice: 3 note: 56 velocity 0 event ('note', 31936, 1, 56, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 44 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2571, ticks 31948, elapsed 2, voice: 1 note: 44 velocity 0 event ('note', 31948, 2, 44, 0)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((98 &0x7e)<<1)),	//# 2572, ticks 31948, elapsed 0, voice: 0 note: 62 velocity 98 event ('note', 31948, 8, 62, 98)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2573, ticks 31952, elapsed 0, voice: 2 note: 64 velocity 0 event ('note', 31952, 8, 64, 0)
	16,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((90 &0x7e)<<1)),	//# 2574, ticks 32048, elapsed 16, voice: 1 note: 52 velocity 90 event ('note', 32048, 3, 52, 90)
	0,((( 2 &4)<<5)|( 56 &0x7f)), ((2 &3)|((79 &0x7e)<<1)),	//# 2575, ticks 32048, elapsed 0, voice: 2 note: 56 velocity 79 event ('note', 32048, 7, 56, 79)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((118 &0x7e)<<1)),	//# 2576, ticks 32048, elapsed 0, voice: 3 note: 61 velocity 118 event ('note', 32048, 8, 61, 118)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((90 &0x7e)<<1)),	//# 2577, ticks 32052, elapsed 0, voice: 2 note: 40 velocity 90 event ('note', 32052, 2, 40, 90)
	2,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((91 &0x7e)<<1)),	//# 2578, ticks 32064, elapsed 2, voice: 1 note: 52 velocity 91 event ('note', 32064, 1, 52, 91)
	2,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2579, ticks 32080, elapsed 2, voice: 0 note: 62 velocity 0 event ('note', 32080, 8, 62, 0)
	6,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2580, ticks 32120, elapsed 6, voice: 1 note: 52 velocity 0 event ('note', 32120, 1, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	2,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2582, ticks 32132, elapsed 2, voice: 2 note: 40 velocity 0 event ('note', 32132, 2, 40, 0)
	// Note off skipped, note 56 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((87 &0x7e)<<1)),	//# 2584, ticks 32140, elapsed 1, voice: 0 note: 59 velocity 87 event ('note', 32140, 8, 59, 87)
	2,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2585, ticks 32152, elapsed 2, voice: 3 note: 61 velocity 0 event ('note', 32152, 8, 61, 0)
	14,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((97 &0x7e)<<1)),	//# 2586, ticks 32236, elapsed 14, voice: 1 note: 57 velocity 97 event ('note', 32236, 8, 57, 97)
	0,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((101 &0x7e)<<1)),	//# 2587, ticks 32240, elapsed 0, voice: 2 note: 49 velocity 101 event ('note', 32240, 3, 49, 101)
	1,((( 3 &4)<<5)|( 37 &0x7f)), ((3 &3)|((103 &0x7e)<<1)),	//# 2588, ticks 32248, elapsed 1, voice: 3 note: 37 velocity 103 event ('note', 32248, 2, 37, 103)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((67 &0x7e)<<1)),	//# 2589, ticks 32248, elapsed 0, voice: 0 note: 52 velocity 67 event ('note', 32248, 7, 52, 67)
	// Note off skipped, note 59 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((97 &0x7e)<<1)),	//# 2591, ticks 32256, elapsed 1, voice: 0 note: 49 velocity 97 event ('note', 32256, 1, 49, 97)
	6,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2592, ticks 32292, elapsed 6, voice: 1 note: 57 velocity 0 event ('note', 32292, 8, 57, 0)
	4,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2593, ticks 32316, elapsed 4, voice: 0 note: 49 velocity 0 event ('note', 32316, 3, 49, 0)
	0,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2594, ticks 32320, elapsed 0, voice: 2 note: 49 velocity 0 event ('note', 32320, 1, 49, 0)
	0,((( 3 &4)<<5)|( 37 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2595, ticks 32320, elapsed 0, voice: 3 note: 37 velocity 0 event ('note', 32320, 2, 37, 0)
	1,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((102 &0x7e)<<1)),	//# 2596, ticks 32328, elapsed 1, voice: 0 note: 57 velocity 102 event ('note', 32328, 8, 57, 102)
	// Note off skipped, note 52 not found in channels, probably interrupted
	15,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((104 &0x7e)<<1)),	//# 2598, ticks 32420, elapsed 15, voice: 1 note: 61 velocity 104 event ('note', 32420, 8, 61, 104)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((73 &0x7e)<<1)),	//# 2599, ticks 32424, elapsed 0, voice: 2 note: 64 velocity 73 event ('note', 32424, 7, 64, 73)
	0,((( 3 &4)<<5)|( 35 &0x7f)), ((3 &3)|((101 &0x7e)<<1)),	//# 2600, ticks 32428, elapsed 0, voice: 3 note: 35 velocity 101 event ('note', 32428, 2, 35, 101)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((96 &0x7e)<<1)),	//# 2601, ticks 32428, elapsed 0, voice: 2 note: 47 velocity 96 event ('note', 32428, 3, 47, 96)
	3,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((94 &0x7e)<<1)),	//# 2602, ticks 32448, elapsed 3, voice: 2 note: 47 velocity 94 event ('note', 32448, 1, 47, 94)
	1,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2603, ticks 32456, elapsed 1, voice: 0 note: 57 velocity 0 event ('note', 32456, 8, 57, 0)
	4,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2604, ticks 32484, elapsed 4, voice: 1 note: 61 velocity 0 event ('note', 32484, 8, 61, 0)
	3,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2605, ticks 32504, elapsed 3, voice: 2 note: 47 velocity 0 event ('note', 32504, 3, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	2,((( 3 &4)<<5)|( 35 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2607, ticks 32520, elapsed 2, voice: 3 note: 35 velocity 0 event ('note', 32520, 2, 35, 0)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((107 &0x7e)<<1)),	//# 2608, ticks 32520, elapsed 0, voice: 0 note: 61 velocity 107 event ('note', 32520, 8, 61, 107)
	// Note off skipped, note 64 not found in channels, probably interrupted
	17,((( 1 &4)<<5)|( 49 &0x7f)), ((1 &3)|((95 &0x7e)<<1)),	//# 2610, ticks 32620, elapsed 17, voice: 1 note: 49 velocity 95 event ('note', 32620, 3, 49, 95)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((95 &0x7e)<<1)),	//# 2611, ticks 32620, elapsed 0, voice: 2 note: 64 velocity 95 event ('note', 32620, 8, 64, 95)
	2,((( 3 &4)<<5)|( 37 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 2612, ticks 32632, elapsed 2, voice: 3 note: 37 velocity 100 event ('note', 32632, 2, 37, 100)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((91 &0x7e)<<1)),	//# 2613, ticks 32632, elapsed 0, voice: 1 note: 57 velocity 91 event ('note', 32632, 7, 57, 91)
	1,((( 1 &4)<<5)|( 49 &0x7f)), ((1 &3)|((97 &0x7e)<<1)),	//# 2614, ticks 32640, elapsed 1, voice: 1 note: 49 velocity 97 event ('note', 32640, 1, 49, 97)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2615, ticks 32644, elapsed 0, voice: 0 note: 61 velocity 0 event ('note', 32644, 8, 61, 0)
	6,((( 1 &4)<<5)|( 49 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2616, ticks 32684, elapsed 6, voice: 1 note: 49 velocity 0 event ('note', 32684, 3, 49, 0)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2617, ticks 32684, elapsed 0, voice: 2 note: 64 velocity 0 event ('note', 32684, 8, 64, 0)
	// Note off skipped, note 49 not found in channels, probably interrupted
	4,((( 3 &4)<<5)|( 37 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2619, ticks 32712, elapsed 4, voice: 3 note: 37 velocity 0 event ('note', 32712, 2, 37, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((99 &0x7e)<<1)),	//# 2621, ticks 32712, elapsed 0, voice: 0 note: 64 velocity 99 event ('note', 32712, 8, 64, 99)
	16,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((90 &0x7e)<<1)),	//# 2622, ticks 32808, elapsed 16, voice: 1 note: 45 velocity 90 event ('note', 32808, 3, 45, 90)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((98 &0x7e)<<1)),	//# 2623, ticks 32808, elapsed 0, voice: 2 note: 69 velocity 98 event ('note', 32808, 8, 69, 98)
	1,((( 3 &4)<<5)|( 33 &0x7f)), ((3 &3)|((97 &0x7e)<<1)),	//# 2624, ticks 32816, elapsed 1, voice: 3 note: 33 velocity 97 event ('note', 32816, 2, 33, 97)
	0,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((80 &0x7e)<<1)),	//# 2625, ticks 32816, elapsed 0, voice: 1 note: 61 velocity 80 event ('note', 32816, 7, 61, 80)
	2,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((90 &0x7e)<<1)),	//# 2626, ticks 32832, elapsed 2, voice: 1 note: 45 velocity 90 event ('note', 32832, 1, 45, 90)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2627, ticks 32832, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 32832, 8, 64, 0)
	6,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2628, ticks 32868, elapsed 6, voice: 2 note: 69 velocity 0 event ('note', 32868, 8, 69, 0)
	2,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2629, ticks 32880, elapsed 2, voice: 1 note: 45 velocity 0 event ('note', 32880, 3, 45, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((98 &0x7e)<<1)),	//# 2631, ticks 32892, elapsed 2, voice: 0 note: 69 velocity 98 event ('note', 32892, 8, 69, 98)
	0,((( 3 &4)<<5)|( 33 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2632, ticks 32896, elapsed 0, voice: 3 note: 33 velocity 0 event ('note', 32896, 2, 33, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	18,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 2634, ticks 33004, elapsed 18, voice: 1 note: 71 velocity 88 event ('note', 33004, 8, 71, 88)
	2,((( 2 &4)<<5)|( 56 &0x7f)), ((2 &3)|((61 &0x7e)<<1)),	//# 2635, ticks 33016, elapsed 2, voice: 2 note: 56 velocity 61 event ('note', 33016, 7, 56, 61)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2636, ticks 33020, elapsed 0, voice: 0 note: 69 velocity 0 event ('note', 33020, 8, 69, 0)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((86 &0x7e)<<1)),	//# 2637, ticks 33024, elapsed 0, voice: 0 note: 52 velocity 86 event ('note', 33024, 1, 52, 86)
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((94 &0x7e)<<1)),	//# 2638, ticks 33024, elapsed 0, voice: 3 note: 40 velocity 94 event ('note', 33024, 2, 40, 94)
	0,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((84 &0x7e)<<1)),	//# 2639, ticks 33024, elapsed 0, voice: 2 note: 52 velocity 84 event ('note', 33024, 3, 52, 84)
	14,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2640, ticks 33108, elapsed 14, voice: 1 note: 71 velocity 0 event ('note', 33108, 8, 71, 0)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2641, ticks 33112, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 33112, 1, 52, 0)
	1,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((76 &0x7e)<<1)),	//# 2642, ticks 33120, elapsed 1, voice: 0 note: 64 velocity 76 event ('note', 33120, 1, 64, 76)
	15,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((73 &0x7e)<<1)),	//# 2643, ticks 33208, elapsed 15, voice: 1 note: 71 velocity 73 event ('note', 33208, 5, 71, 73)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((73 &0x7e)<<1)),	//# 2644, ticks 33208, elapsed 0, voice: 1 note: 71 velocity 73 event ('note', 33208, 6, 71, 73)
	// Note off skipped, note 56 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((77 &0x7e)<<1)),	//# 2646, ticks 33212, elapsed 0, voice: 1 note: 64 velocity 77 event ('note', 33212, 8, 64, 77)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((84 &0x7e)<<1)),	//# 2647, ticks 33216, elapsed 0, voice: 0 note: 62 velocity 84 event ('note', 33216, 1, 62, 84)
	4,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2648, ticks 33240, elapsed 4, voice: 1 note: 64 velocity 0 event ('note', 33240, 1, 64, 0)
	12,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2649, ticks 33312, elapsed 12, voice: 0 note: 62 velocity 0 event ('note', 33312, 1, 62, 0)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((73 &0x7e)<<1)),	//# 2650, ticks 33312, elapsed 0, voice: 0 note: 64 velocity 73 event ('note', 33312, 1, 64, 73)
	2,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2651, ticks 33328, elapsed 2, voice: 2 note: 52 velocity 0 event ('note', 33328, 3, 52, 0)
	2,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2652, ticks 33344, elapsed 2, voice: 0 note: 64 velocity 0 event ('note', 33344, 8, 64, 0)
	6,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2653, ticks 33384, elapsed 6, voice: 3 note: 40 velocity 0 event ('note', 33384, 2, 40, 0)
	2,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((71 &0x7e)<<1)),	//# 2654, ticks 33400, elapsed 2, voice: 0 note: 76 velocity 71 event ('note', 33400, 5, 76, 71)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((71 &0x7e)<<1)),	//# 2655, ticks 33400, elapsed 0, voice: 1 note: 76 velocity 71 event ('note', 33400, 6, 76, 71)
	1,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((86 &0x7e)<<1)),	//# 2656, ticks 33408, elapsed 1, voice: 2 note: 61 velocity 86 event ('note', 33408, 1, 61, 86)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	15,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2660, ticks 33500, elapsed 15, voice: 2 note: 61 velocity 0 event ('note', 33500, 1, 61, 0)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((77 &0x7e)<<1)),	//# 2661, ticks 33504, elapsed 0, voice: 2 note: 76 velocity 77 event ('note', 33504, 1, 76, 77)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((57 &0x7e)<<1)),	//# 2662, ticks 33504, elapsed 0, voice: 3 note: 64 velocity 57 event ('note', 33504, 1, 64, 57)
	12,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((68 &0x7e)<<1)),	//# 2663, ticks 33576, elapsed 12, voice: 3 note: 71 velocity 68 event ('note', 33576, 4, 71, 68)
	0,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((86 &0x7e)<<1)),	//# 2664, ticks 33576, elapsed 0, voice: 3 note: 76 velocity 86 event ('note', 33576, 8, 76, 86)
	1,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((71 &0x7e)<<1)),	//# 2665, ticks 33584, elapsed 1, voice: 0 note: 52 velocity 71 event ('note', 33584, 3, 52, 71)
	0,((( 0 &4)<<5)|( 68 &0x7f)), ((0 &3)|((57 &0x7e)<<1)),	//# 2666, ticks 33584, elapsed 0, voice: 0 note: 68 velocity 57 event ('note', 33584, 7, 68, 57)
	// Note off skipped, note 64 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2668, ticks 33596, elapsed 2, voice: 1 note: 76 velocity 0 event ('note', 33596, 1, 76, 0)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((87 &0x7e)<<1)),	//# 2669, ticks 33600, elapsed 0, voice: 1 note: 74 velocity 87 event ('note', 33600, 1, 74, 87)
	0,((( 0 &4)<<5)|( 68 &0x7f)), ((0 &3)|((72 &0x7e)<<1)),	//# 2670, ticks 33600, elapsed 0, voice: 0 note: 68 velocity 72 event ('note', 33600, 1, 68, 72)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((65 &0x7e)<<1)),	//# 2671, ticks 33600, elapsed 0, voice: 0 note: 59 velocity 65 event ('note', 33600, 1, 59, 65)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 68 not found in channels, probably interrupted
	8,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2674, ticks 33648, elapsed 8, voice: 2 note: 76 velocity 0 event ('note', 33648, 8, 76, 0)
	4,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2675, ticks 33676, elapsed 4, voice: 0 note: 59 velocity 0 event ('note', 33676, 1, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 68 not found in channels, probably interrupted
	3,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((75 &0x7e)<<1)),	//# 2678, ticks 33696, elapsed 3, voice: 0 note: 76 velocity 75 event ('note', 33696, 1, 76, 75)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((50 &0x7e)<<1)),	//# 2679, ticks 33696, elapsed 0, voice: 2 note: 64 velocity 50 event ('note', 33696, 1, 64, 50)
	1,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2680, ticks 33704, elapsed 1, voice: 1 note: 74 velocity 0 event ('note', 33704, 1, 74, 0)
	11,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((60 &0x7e)<<1)),	//# 2681, ticks 33768, elapsed 11, voice: 1 note: 57 velocity 60 event ('note', 33768, 3, 57, 60)
	1,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((63 &0x7e)<<1)),	//# 2682, ticks 33776, elapsed 1, voice: 2 note: 73 velocity 63 event ('note', 33776, 4, 73, 63)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((51 &0x7e)<<1)),	//# 2683, ticks 33776, elapsed 0, voice: 1 note: 69 velocity 51 event ('note', 33776, 7, 69, 51)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((78 &0x7e)<<1)),	//# 2684, ticks 33776, elapsed 0, voice: 1 note: 73 velocity 78 event ('note', 33776, 8, 73, 78)
	2,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2685, ticks 33788, elapsed 2, voice: 0 note: 76 velocity 0 event ('note', 33788, 1, 76, 0)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((85 &0x7e)<<1)),	//# 2686, ticks 33792, elapsed 0, voice: 0 note: 73 velocity 85 event ('note', 33792, 1, 73, 85)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((73 &0x7e)<<1)),	//# 2687, ticks 33792, elapsed 0, voice: 2 note: 69 velocity 73 event ('note', 33792, 1, 69, 73)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((76 &0x7e)<<1)),	//# 2688, ticks 33792, elapsed 0, voice: 2 note: 57 velocity 76 event ('note', 33792, 1, 57, 76)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	16,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((71 &0x7e)<<1)),	//# 2691, ticks 33888, elapsed 16, voice: 2 note: 76 velocity 71 event ('note', 33888, 1, 76, 71)
	2,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2692, ticks 33900, elapsed 2, voice: 0 note: 73 velocity 0 event ('note', 33900, 1, 73, 0)
	3,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2693, ticks 33920, elapsed 3, voice: 1 note: 73 velocity 0 event ('note', 33920, 8, 73, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	9,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((67 &0x7e)<<1)),	//# 2697, ticks 33972, elapsed 9, voice: 0 note: 71 velocity 67 event ('note', 33972, 4, 71, 67)
	2,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((73 &0x7e)<<1)),	//# 2698, ticks 33984, elapsed 2, voice: 1 note: 67 velocity 73 event ('note', 33984, 1, 67, 73)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((75 &0x7e)<<1)),	//# 2699, ticks 33984, elapsed 0, voice: 0 note: 71 velocity 75 event ('note', 33984, 1, 71, 75)
	// Note off skipped, note 73 not found in channels, probably interrupted
	2,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2701, ticks 34000, elapsed 2, voice: 2 note: 76 velocity 0 event ('note', 34000, 1, 76, 0)
	12,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2702, ticks 34072, elapsed 12, voice: 0 note: 71 velocity 0 event ('note', 34072, 1, 71, 0)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2703, ticks 34072, elapsed 0, voice: 1 note: 67 velocity 0 event ('note', 34072, 1, 67, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((81 &0x7e)<<1)),	//# 2705, ticks 34080, elapsed 1, voice: 0 note: 76 velocity 81 event ('note', 34080, 1, 76, 81)
	15,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((72 &0x7e)<<1)),	//# 2706, ticks 34168, elapsed 15, voice: 1 note: 74 velocity 72 event ('note', 34168, 4, 74, 72)
	1,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2707, ticks 34176, elapsed 1, voice: 0 note: 76 velocity 0 event ('note', 34176, 1, 76, 0)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((76 &0x7e)<<1)),	//# 2708, ticks 34176, elapsed 0, voice: 0 note: 66 velocity 76 event ('note', 34176, 1, 66, 76)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((59 &0x7e)<<1)),	//# 2709, ticks 34176, elapsed 0, voice: 2 note: 69 velocity 59 event ('note', 34176, 1, 69, 59)
	13,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2710, ticks 34256, elapsed 13, voice: 0 note: 66 velocity 0 event ('note', 34256, 1, 66, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2711, ticks 34260, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 34260, 1, 69, 0)
	2,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((86 &0x7e)<<1)),	//# 2712, ticks 34272, elapsed 2, voice: 0 note: 74 velocity 86 event ('note', 34272, 1, 74, 86)
	5,((( 2 &4)<<5)|( 45 &0x7f)), ((2 &3)|((73 &0x7e)<<1)),	//# 2713, ticks 34304, elapsed 5, voice: 2 note: 45 velocity 73 event ('note', 34304, 3, 45, 73)
	6,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((77 &0x7e)<<1)),	//# 2714, ticks 34344, elapsed 6, voice: 1 note: 81 velocity 77 event ('note', 34344, 8, 81, 77)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((72 &0x7e)<<1)),	//# 2715, ticks 34348, elapsed 0, voice: 2 note: 73 velocity 72 event ('note', 34348, 4, 73, 72)
	// Note off skipped, note 45 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2717, ticks 34360, elapsed 2, voice: 0 note: 74 velocity 0 event ('note', 34360, 4, 74, 0)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((49 &0x7e)<<1)),	//# 2718, ticks 34360, elapsed 0, voice: 0 note: 73 velocity 49 event ('note', 34360, 7, 73, 49)
	// Note off skipped, note 74 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((60 &0x7e)<<1)),	//# 2720, ticks 34368, elapsed 1, voice: 0 note: 64 velocity 60 event ('note', 34368, 1, 64, 60)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((71 &0x7e)<<1)),	//# 2721, ticks 34368, elapsed 0, voice: 0 note: 67 velocity 71 event ('note', 34368, 1, 67, 71)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((71 &0x7e)<<1)),	//# 2722, ticks 34368, elapsed 0, voice: 0 note: 45 velocity 71 event ('note', 34368, 1, 45, 71)
	8,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2723, ticks 34416, elapsed 8, voice: 1 note: 81 velocity 0 event ('note', 34416, 8, 81, 0)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2724, ticks 34420, elapsed 0, voice: 2 note: 73 velocity 0 event ('note', 34420, 7, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	3,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2726, ticks 34440, elapsed 3, voice: 0 note: 45 velocity 0 event ('note', 34440, 1, 45, 0)
	4,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 2727, ticks 34464, elapsed 4, voice: 0 note: 73 velocity 88 event ('note', 34464, 1, 73, 88)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	8,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2730, ticks 34512, elapsed 8, voice: 0 note: 73 velocity 0 event ('note', 34512, 1, 73, 0)
	3,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((71 &0x7e)<<1)),	//# 2731, ticks 34532, elapsed 3, voice: 0 note: 78 velocity 71 event ('note', 34532, 4, 78, 71)
	2,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((68 &0x7e)<<1)),	//# 2732, ticks 34544, elapsed 2, voice: 1 note: 69 velocity 68 event ('note', 34544, 7, 69, 68)
	1,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2733, ticks 34552, elapsed 1, voice: 2 note: 50 velocity 64 event ('note', 34552, 3, 50, 64)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((84 &0x7e)<<1)),	//# 2734, ticks 34556, elapsed 0, voice: 2 note: 78 velocity 84 event ('note', 34556, 8, 78, 84)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((77 &0x7e)<<1)),	//# 2735, ticks 34560, elapsed 0, voice: 1 note: 74 velocity 77 event ('note', 34560, 1, 74, 77)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((71 &0x7e)<<1)),	//# 2736, ticks 34560, elapsed 0, voice: 0 note: 50 velocity 71 event ('note', 34560, 1, 50, 71)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((67 &0x7e)<<1)),	//# 2737, ticks 34560, elapsed 0, voice: 0 note: 66 velocity 67 event ('note', 34560, 1, 66, 67)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((59 &0x7e)<<1)),	//# 2738, ticks 34560, elapsed 0, voice: 0 note: 69 velocity 59 event ('note', 34560, 1, 69, 59)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((41 &0x7e)<<1)),	//# 2739, ticks 34560, elapsed 0, voice: 0 note: 62 velocity 41 event ('note', 34560, 1, 62, 41)
	7,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2740, ticks 34604, elapsed 7, voice: 3 note: 76 velocity 0 event ('note', 34604, 5, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	9,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((69 &0x7e)<<1)),	//# 2743, ticks 34656, elapsed 9, voice: 3 note: 57 velocity 69 event ('note', 34656, 1, 57, 69)
	6,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2744, ticks 34692, elapsed 6, voice: 2 note: 78 velocity 0 event ('note', 34692, 8, 78, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	6,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((65 &0x7e)<<1)),	//# 2746, ticks 34732, elapsed 6, voice: 2 note: 69 velocity 65 event ('note', 34732, 5, 69, 65)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((65 &0x7e)<<1)),	//# 2747, ticks 34732, elapsed 0, voice: 0 note: 69 velocity 65 event ('note', 34732, 6, 69, 65)
	// Note off skipped, note 62 not found in channels, probably interrupted
	3,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((78 &0x7e)<<1)),	//# 2749, ticks 34752, elapsed 3, voice: 0 note: 55 velocity 78 event ('note', 34752, 1, 55, 78)
	1,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2750, ticks 34760, elapsed 1, voice: 1 note: 74 velocity 0 event ('note', 34760, 1, 74, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2752, ticks 34768, elapsed 1, voice: 2 note: 69 velocity 0 event ('note', 34768, 1, 69, 0)
	1,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2753, ticks 34776, elapsed 1, voice: 3 note: 57 velocity 0 event ('note', 34776, 1, 57, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	10,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2756, ticks 34836, elapsed 10, voice: 0 note: 55 velocity 0 event ('note', 34836, 1, 55, 0)
	2,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((66 &0x7e)<<1)),	//# 2757, ticks 34848, elapsed 2, voice: 0 note: 57 velocity 66 event ('note', 34848, 1, 57, 66)
	14,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((65 &0x7e)<<1)),	//# 2758, ticks 34932, elapsed 14, voice: 1 note: 74 velocity 65 event ('note', 34932, 5, 74, 65)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((65 &0x7e)<<1)),	//# 2759, ticks 34932, elapsed 0, voice: 2 note: 74 velocity 65 event ('note', 34932, 6, 74, 65)
	2,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((76 &0x7e)<<1)),	//# 2760, ticks 34944, elapsed 2, voice: 3 note: 54 velocity 76 event ('note', 34944, 1, 54, 76)
	1,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2761, ticks 34952, elapsed 1, voice: 0 note: 57 velocity 0 event ('note', 34952, 1, 57, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2764, ticks 35036, elapsed 14, voice: 3 note: 54 velocity 0 event ('note', 35036, 1, 54, 0)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((70 &0x7e)<<1)),	//# 2765, ticks 35040, elapsed 0, voice: 0 note: 57 velocity 70 event ('note', 35040, 1, 57, 70)
	13,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((67 &0x7e)<<1)),	//# 2766, ticks 35116, elapsed 13, voice: 3 note: 50 velocity 67 event ('note', 35116, 3, 50, 67)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 2767, ticks 35116, elapsed 0, voice: 1 note: 78 velocity 88 event ('note', 35116, 8, 78, 88)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((81 &0x7e)<<1)),	//# 2768, ticks 35120, elapsed 0, voice: 2 note: 69 velocity 81 event ('note', 35120, 7, 69, 81)
	1,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((80 &0x7e)<<1)),	//# 2769, ticks 35128, elapsed 1, voice: 3 note: 78 velocity 80 event ('note', 35128, 4, 78, 80)
	1,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((81 &0x7e)<<1)),	//# 2770, ticks 35136, elapsed 1, voice: 0 note: 50 velocity 81 event ('note', 35136, 1, 50, 81)
	// Note off skipped, note 57 not found in channels, probably interrupted
	6,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2772, ticks 35172, elapsed 6, voice: 0 note: 50 velocity 0 event ('note', 35172, 3, 50, 0)
	2,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2773, ticks 35184, elapsed 2, voice: 2 note: 69 velocity 0 event ('note', 35184, 7, 69, 0)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2774, ticks 35184, elapsed 0, voice: 1 note: 78 velocity 0 event ('note', 35184, 8, 78, 0)
	4,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2775, ticks 35208, elapsed 4, voice: 3 note: 78 velocity 0 event ('note', 35208, 4, 78, 0)
	4,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((80 &0x7e)<<1)),	//# 2776, ticks 35232, elapsed 4, voice: 0 note: 54 velocity 80 event ('note', 35232, 1, 54, 80)
	// Note off skipped, note 50 not found in channels, probably interrupted
	9,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2778, ticks 35284, elapsed 9, voice: 0 note: 54 velocity 0 event ('note', 35284, 1, 54, 0)
	4,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((59 &0x7e)<<1)),	//# 2779, ticks 35312, elapsed 4, voice: 0 note: 71 velocity 59 event ('note', 35312, 7, 71, 59)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((82 &0x7e)<<1)),	//# 2780, ticks 35316, elapsed 0, voice: 1 note: 74 velocity 82 event ('note', 35316, 8, 74, 82)
	0,((( 2 &4)<<5)|( 80 &0x7f)), ((2 &3)|((80 &0x7e)<<1)),	//# 2781, ticks 35320, elapsed 0, voice: 2 note: 80 velocity 80 event ('note', 35320, 4, 80, 80)
	1,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((83 &0x7e)<<1)),	//# 2782, ticks 35328, elapsed 1, voice: 3 note: 47 velocity 83 event ('note', 35328, 1, 47, 83)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((70 &0x7e)<<1)),	//# 2783, ticks 35332, elapsed 0, voice: 0 note: 47 velocity 70 event ('note', 35332, 3, 47, 70)
	15,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((92 &0x7e)<<1)),	//# 2784, ticks 35424, elapsed 15, voice: 0 note: 74 velocity 92 event ('note', 35424, 1, 74, 92)
	12,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 2785, ticks 35496, elapsed 12, voice: 2 note: 78 velocity 64 event ('note', 35496, 4, 78, 64)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 80 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2788, ticks 35512, elapsed 2, voice: 0 note: 74 velocity 0 event ('note', 35512, 8, 74, 0)
	1,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((98 &0x7e)<<1)),	//# 2789, ticks 35520, elapsed 1, voice: 0 note: 78 velocity 98 event ('note', 35520, 1, 78, 98)
	5,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2790, ticks 35552, elapsed 5, voice: 1 note: 74 velocity 0 event ('note', 35552, 1, 74, 0)
	1,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2791, ticks 35560, elapsed 1, voice: 3 note: 47 velocity 0 event ('note', 35560, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	4,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2793, ticks 35584, elapsed 4, voice: 0 note: 78 velocity 0 event ('note', 35584, 4, 78, 0)
	5,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((84 &0x7e)<<1)),	//# 2794, ticks 35616, elapsed 5, voice: 0 note: 76 velocity 84 event ('note', 35616, 1, 76, 84)
	4,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2795, ticks 35644, elapsed 4, voice: 2 note: 78 velocity 0 event ('note', 35644, 1, 78, 0)
	6,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((78 &0x7e)<<1)),	//# 2796, ticks 35680, elapsed 6, voice: 1 note: 81 velocity 78 event ('note', 35680, 4, 81, 78)
	4,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2797, ticks 35704, elapsed 4, voice: 0 note: 76 velocity 0 event ('note', 35704, 1, 76, 0)
	1,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((84 &0x7e)<<1)),	//# 2798, ticks 35712, elapsed 1, voice: 0 note: 74 velocity 84 event ('note', 35712, 1, 74, 84)
	16,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((79 &0x7e)<<1)),	//# 2799, ticks 35808, elapsed 16, voice: 2 note: 73 velocity 79 event ('note', 35808, 1, 73, 79)
	4,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2800, ticks 35832, elapsed 4, voice: 0 note: 74 velocity 0 event ('note', 35832, 1, 74, 0)
	6,((( 0 &4)<<5)|( 80 &0x7f)), ((0 &3)|((87 &0x7e)<<1)),	//# 2801, ticks 35872, elapsed 6, voice: 0 note: 80 velocity 87 event ('note', 35872, 4, 80, 87)
	3,((( 1 &4)<<5)|( 81 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2802, ticks 35892, elapsed 3, voice: 1 note: 81 velocity 0 event ('note', 35892, 4, 81, 0)
	2,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 2803, ticks 35904, elapsed 2, voice: 1 note: 71 velocity 89 event ('note', 35904, 1, 71, 89)
	6,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2804, ticks 35940, elapsed 6, voice: 2 note: 73 velocity 0 event ('note', 35940, 1, 73, 0)
	2,((( 0 &4)<<5)|( 80 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2805, ticks 35956, elapsed 2, voice: 0 note: 80 velocity 0 event ('note', 35956, 4, 80, 0)
	7,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((78 &0x7e)<<1)),	//# 2806, ticks 36000, elapsed 7, voice: 0 note: 69 velocity 78 event ('note', 36000, 1, 69, 78)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2807, ticks 36004, elapsed 0, voice: 1 note: 71 velocity 0 event ('note', 36004, 1, 71, 0)
	11,((( 1 &4)<<5)|( 83 &0x7f)), ((1 &3)|((69 &0x7e)<<1)),	//# 2808, ticks 36072, elapsed 11, voice: 1 note: 83 velocity 69 event ('note', 36072, 4, 83, 69)
	4,((( 2 &4)<<5)|( 68 &0x7f)), ((2 &3)|((88 &0x7e)<<1)),	//# 2809, ticks 36096, elapsed 4, voice: 2 note: 68 velocity 88 event ('note', 36096, 1, 68, 88)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	4,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2812, ticks 36124, elapsed 4, voice: 0 note: 69 velocity 0 event ('note', 36124, 1, 69, 0)
	8,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((75 &0x7e)<<1)),	//# 2813, ticks 36172, elapsed 8, voice: 0 note: 78 velocity 75 event ('note', 36172, 5, 78, 75)
	0,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((75 &0x7e)<<1)),	//# 2814, ticks 36172, elapsed 0, voice: 3 note: 78 velocity 75 event ('note', 36172, 6, 78, 75)
	3,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((85 &0x7e)<<1)),	//# 2815, ticks 36192, elapsed 3, voice: 1 note: 74 velocity 85 event ('note', 36192, 1, 74, 85)
	2,((( 2 &4)<<5)|( 68 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2816, ticks 36208, elapsed 2, voice: 2 note: 68 velocity 0 event ('note', 36208, 1, 68, 0)
	// Note off skipped, note 83 not found in channels, probably interrupted
	10,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((79 &0x7e)<<1)),	//# 2818, ticks 36268, elapsed 10, voice: 2 note: 52 velocity 79 event ('note', 36268, 3, 52, 79)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((72 &0x7e)<<1)),	//# 2819, ticks 36268, elapsed 0, voice: 0 note: 71 velocity 72 event ('note', 36268, 8, 71, 72)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((78 &0x7e)<<1)),	//# 2820, ticks 36272, elapsed 0, voice: 0 note: 76 velocity 78 event ('note', 36272, 5, 76, 78)
	0,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((78 &0x7e)<<1)),	//# 2821, ticks 36272, elapsed 0, voice: 3 note: 76 velocity 78 event ('note', 36272, 6, 76, 78)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((66 &0x7e)<<1)),	//# 2822, ticks 36272, elapsed 0, voice: 0 note: 64 velocity 66 event ('note', 36272, 7, 64, 66)
	2,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((92 &0x7e)<<1)),	//# 2823, ticks 36288, elapsed 2, voice: 0 note: 73 velocity 92 event ('note', 36288, 1, 73, 92)
	0,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((69 &0x7e)<<1)),	//# 2824, ticks 36288, elapsed 0, voice: 3 note: 52 velocity 69 event ('note', 36288, 1, 52, 69)
	0,((( 3 &4)<<5)|( 68 &0x7f)), ((3 &3)|((62 &0x7e)<<1)),	//# 2825, ticks 36292, elapsed 0, voice: 3 note: 68 velocity 62 event ('note', 36292, 4, 68, 62)
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	6,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2828, ticks 36328, elapsed 6, voice: 1 note: 74 velocity 0 event ('note', 36328, 1, 74, 0)
	1,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2829, ticks 36336, elapsed 1, voice: 2 note: 52 velocity 0 event ('note', 36336, 3, 52, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	6,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((82 &0x7e)<<1)),	//# 2833, ticks 36372, elapsed 6, voice: 1 note: 74 velocity 82 event ('note', 36372, 5, 74, 82)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((82 &0x7e)<<1)),	//# 2834, ticks 36372, elapsed 0, voice: 2 note: 74 velocity 82 event ('note', 36372, 6, 74, 82)
	2,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((87 &0x7e)<<1)),	//# 2835, ticks 36384, elapsed 2, voice: 3 note: 71 velocity 87 event ('note', 36384, 1, 71, 87)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	4,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2838, ticks 36412, elapsed 4, voice: 0 note: 73 velocity 0 event ('note', 36412, 1, 73, 0)
	9,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((66 &0x7e)<<1)),	//# 2839, ticks 36468, elapsed 9, voice: 0 note: 73 velocity 66 event ('note', 36468, 5, 73, 66)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((66 &0x7e)<<1)),	//# 2840, ticks 36468, elapsed 0, voice: 0 note: 73 velocity 66 event ('note', 36468, 6, 73, 66)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((72 &0x7e)<<1)),	//# 2841, ticks 36468, elapsed 0, voice: 0 note: 64 velocity 72 event ('note', 36468, 7, 64, 72)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((85 &0x7e)<<1)),	//# 2842, ticks 36468, elapsed 0, voice: 0 note: 73 velocity 85 event ('note', 36468, 8, 73, 85)
	1,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((83 &0x7e)<<1)),	//# 2843, ticks 36476, elapsed 1, voice: 1 note: 57 velocity 83 event ('note', 36476, 3, 57, 83)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((62 &0x7e)<<1)),	//# 2844, ticks 36480, elapsed 0, voice: 2 note: 57 velocity 62 event ('note', 36480, 1, 57, 62)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((73 &0x7e)<<1)),	//# 2845, ticks 36480, elapsed 0, voice: 2 note: 69 velocity 73 event ('note', 36480, 1, 69, 73)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((78 &0x7e)<<1)),	//# 2846, ticks 36480, elapsed 0, voice: 2 note: 73 velocity 78 event ('note', 36480, 4, 73, 78)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2849, ticks 36488, elapsed 1, voice: 3 note: 71 velocity 0 event ('note', 36488, 1, 71, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	6,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2851, ticks 36528, elapsed 6, voice: 1 note: 57 velocity 0 event ('note', 36528, 3, 57, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2853, ticks 36536, elapsed 1, voice: 0 note: 73 velocity 0 event ('note', 36536, 8, 73, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	5,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((87 &0x7e)<<1)),	//# 2855, ticks 36568, elapsed 5, voice: 0 note: 71 velocity 87 event ('note', 36568, 5, 71, 87)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((87 &0x7e)<<1)),	//# 2856, ticks 36568, elapsed 0, voice: 1 note: 71 velocity 87 event ('note', 36568, 6, 71, 87)
	1,((( 3 &4)<<5)|( 68 &0x7f)), ((3 &3)|((70 &0x7e)<<1)),	//# 2857, ticks 36576, elapsed 1, voice: 3 note: 68 velocity 70 event ('note', 36576, 1, 68, 70)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2858, ticks 36580, elapsed 0, voice: 2 note: 73 velocity 0 event ('note', 36580, 5, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	13,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((87 &0x7e)<<1)),	//# 2861, ticks 36660, elapsed 13, voice: 2 note: 49 velocity 87 event ('note', 36660, 3, 49, 87)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((73 &0x7e)<<1)),	//# 2862, ticks 36664, elapsed 0, voice: 3 note: 61 velocity 73 event ('note', 36664, 7, 61, 73)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((79 &0x7e)<<1)),	//# 2863, ticks 36664, elapsed 0, voice: 3 note: 71 velocity 79 event ('note', 36664, 8, 71, 79)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((84 &0x7e)<<1)),	//# 2864, ticks 36668, elapsed 0, voice: 3 note: 69 velocity 84 event ('note', 36668, 5, 69, 84)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((84 &0x7e)<<1)),	//# 2865, ticks 36668, elapsed 0, voice: 3 note: 69 velocity 84 event ('note', 36668, 6, 69, 84)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((92 &0x7e)<<1)),	//# 2866, ticks 36672, elapsed 0, voice: 3 note: 66 velocity 92 event ('note', 36672, 1, 66, 92)
	0,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((74 &0x7e)<<1)),	//# 2867, ticks 36672, elapsed 0, voice: 0 note: 49 velocity 74 event ('note', 36672, 1, 49, 74)
	// Note off skipped, note 68 not found in channels, probably interrupted
	4,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2869, ticks 36700, elapsed 4, voice: 1 note: 71 velocity 0 event ('note', 36700, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	5,((( 0 &4)<<5)|( 49 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2871, ticks 36732, elapsed 5, voice: 0 note: 49 velocity 0 event ('note', 36732, 3, 49, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	3,((( 0 &4)<<5)|( 68 &0x7f)), ((0 &3)|((87 &0x7e)<<1)),	//# 2874, ticks 36752, elapsed 3, voice: 0 note: 68 velocity 87 event ('note', 36752, 5, 68, 87)
	0,((( 1 &4)<<5)|( 68 &0x7f)), ((1 &3)|((87 &0x7e)<<1)),	//# 2875, ticks 36752, elapsed 0, voice: 1 note: 68 velocity 87 event ('note', 36752, 6, 68, 87)
	1,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2876, ticks 36760, elapsed 1, voice: 2 note: 49 velocity 0 event ('note', 36760, 1, 49, 0)
	1,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2877, ticks 36768, elapsed 1, voice: 3 note: 66 velocity 0 event ('note', 36768, 1, 66, 0)
	0,((( 2 &4)<<5)|( 65 &0x7f)), ((2 &3)|((76 &0x7e)<<1)),	//# 2878, ticks 36768, elapsed 0, voice: 2 note: 65 velocity 76 event ('note', 36768, 1, 65, 76)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	11,((( 0 &4)<<5)|( 68 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2881, ticks 36836, elapsed 11, voice: 0 note: 68 velocity 0 event ('note', 36836, 5, 68, 0)
	0,((( 1 &4)<<5)|( 68 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2882, ticks 36836, elapsed 0, voice: 1 note: 68 velocity 0 event ('note', 36836, 6, 68, 0)
	2,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((83 &0x7e)<<1)),	//# 2883, ticks 36852, elapsed 2, voice: 0 note: 54 velocity 83 event ('note', 36852, 3, 54, 83)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((79 &0x7e)<<1)),	//# 2884, ticks 36852, elapsed 0, voice: 1 note: 69 velocity 79 event ('note', 36852, 8, 69, 79)
	2,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((72 &0x7e)<<1)),	//# 2885, ticks 36864, elapsed 2, voice: 3 note: 66 velocity 72 event ('note', 36864, 1, 66, 72)
	0,((( 3 &4)<<5)|( 54 &0x7f)), ((3 &3)|((51 &0x7e)<<1)),	//# 2886, ticks 36864, elapsed 0, voice: 3 note: 54 velocity 51 event ('note', 36864, 1, 54, 51)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((60 &0x7e)<<1)),	//# 2887, ticks 36864, elapsed 0, voice: 3 note: 69 velocity 60 event ('note', 36864, 1, 69, 60)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((87 &0x7e)<<1)),	//# 2888, ticks 36864, elapsed 0, voice: 3 note: 69 velocity 87 event ('note', 36864, 5, 69, 87)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((87 &0x7e)<<1)),	//# 2889, ticks 36864, elapsed 0, voice: 2 note: 69 velocity 87 event ('note', 36864, 6, 69, 87)
	0,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((64 &0x7e)<<1)),	//# 2890, ticks 36864, elapsed 0, voice: 1 note: 61 velocity 64 event ('note', 36864, 7, 61, 64)
	// Note off skipped, note 65 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	16,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((73 &0x7e)<<1)),	//# 2893, ticks 36960, elapsed 16, voice: 1 note: 73 velocity 73 event ('note', 36960, 1, 73, 73)
	2,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2894, ticks 36972, elapsed 2, voice: 2 note: 69 velocity 0 event ('note', 36972, 1, 69, 0)
	8,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2895, ticks 37020, elapsed 8, voice: 3 note: 69 velocity 0 event ('note', 37020, 8, 69, 0)
	2,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2896, ticks 37036, elapsed 2, voice: 0 note: 54 velocity 0 event ('note', 37036, 3, 54, 0)
	1,((( 0 &4)<<5)|( 68 &0x7f)), ((0 &3)|((61 &0x7e)<<1)),	//# 2897, ticks 37044, elapsed 1, voice: 0 note: 68 velocity 61 event ('note', 37044, 5, 68, 61)
	0,((( 2 &4)<<5)|( 68 &0x7f)), ((2 &3)|((61 &0x7e)<<1)),	//# 2898, ticks 37044, elapsed 0, voice: 2 note: 68 velocity 61 event ('note', 37044, 6, 68, 61)
	// Note off skipped, note 61 not found in channels, probably interrupted
	2,((( 3 &4)<<5)|( 68 &0x7f)), ((3 &3)|((76 &0x7e)<<1)),	//# 2900, ticks 37056, elapsed 2, voice: 3 note: 68 velocity 76 event ('note', 37056, 1, 68, 76)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((52 &0x7e)<<1)),	//# 2901, ticks 37056, elapsed 0, voice: 0 note: 64 velocity 52 event ('note', 37056, 1, 64, 52)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2904, ticks 37060, elapsed 0, voice: 1 note: 73 velocity 0 event ('note', 37060, 1, 73, 0)
	15,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((84 &0x7e)<<1)),	//# 2905, ticks 37152, elapsed 15, voice: 1 note: 73 velocity 84 event ('note', 37152, 1, 73, 84)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2906, ticks 37156, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 37156, 1, 64, 0)
	1,((( 2 &4)<<5)|( 68 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2907, ticks 37164, elapsed 1, voice: 2 note: 68 velocity 0 event ('note', 37164, 1, 68, 0)
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,((( 3 &4)<<5)|( 68 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2909, ticks 37168, elapsed 0, voice: 3 note: 68 velocity 0 event ('note', 37168, 5, 68, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	10,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((77 &0x7e)<<1)),	//# 2911, ticks 37228, elapsed 10, voice: 0 note: 71 velocity 77 event ('note', 37228, 5, 71, 77)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((77 &0x7e)<<1)),	//# 2912, ticks 37228, elapsed 0, voice: 2 note: 71 velocity 77 event ('note', 37228, 6, 71, 77)
	1,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2913, ticks 37236, elapsed 1, voice: 1 note: 73 velocity 0 event ('note', 37236, 1, 73, 0)
	2,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((76 &0x7e)<<1)),	//# 2914, ticks 37248, elapsed 2, voice: 1 note: 62 velocity 76 event ('note', 37248, 1, 62, 76)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((71 &0x7e)<<1)),	//# 2915, ticks 37248, elapsed 0, voice: 3 note: 66 velocity 71 event ('note', 37248, 1, 66, 71)
	13,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2916, ticks 37328, elapsed 13, voice: 3 note: 66 velocity 0 event ('note', 37328, 1, 66, 0)
	1,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2917, ticks 37336, elapsed 1, voice: 1 note: 62 velocity 0 event ('note', 37336, 1, 62, 0)
	1,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((81 &0x7e)<<1)),	//# 2918, ticks 37344, elapsed 1, voice: 1 note: 71 velocity 81 event ('note', 37344, 1, 71, 81)
	9,((( 3 &4)<<5)|( 42 &0x7f)), ((3 &3)|((86 &0x7e)<<1)),	//# 2919, ticks 37396, elapsed 9, voice: 3 note: 42 velocity 86 event ('note', 37396, 3, 42, 86)
	4,((( 0 &4)<<5)|( 70 &0x7f)), ((0 &3)|((49 &0x7e)<<1)),	//# 2920, ticks 37420, elapsed 4, voice: 0 note: 70 velocity 49 event ('note', 37420, 5, 70, 49)
	0,((( 0 &4)<<5)|( 70 &0x7f)), ((0 &3)|((49 &0x7e)<<1)),	//# 2921, ticks 37420, elapsed 0, voice: 0 note: 70 velocity 49 event ('note', 37420, 6, 70, 49)
	0,((( 0 &4)<<5)|( 70 &0x7f)), ((0 &3)|((69 &0x7e)<<1)),	//# 2922, ticks 37420, elapsed 0, voice: 0 note: 70 velocity 69 event ('note', 37420, 7, 70, 69)
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((77 &0x7e)<<1)),	//# 2923, ticks 37424, elapsed 0, voice: 0 note: 78 velocity 77 event ('note', 37424, 8, 78, 77)
	1,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2924, ticks 37432, elapsed 1, voice: 1 note: 71 velocity 0 event ('note', 37432, 5, 71, 0)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2925, ticks 37432, elapsed 0, voice: 2 note: 71 velocity 0 event ('note', 37432, 6, 71, 0)
	1,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((72 &0x7e)<<1)),	//# 2926, ticks 37440, elapsed 1, voice: 1 note: 61 velocity 72 event ('note', 37440, 1, 61, 72)
	0,((( 2 &4)<<5)|( 42 &0x7f)), ((2 &3)|((71 &0x7e)<<1)),	//# 2927, ticks 37440, elapsed 0, voice: 2 note: 42 velocity 71 event ('note', 37440, 1, 42, 71)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((57 &0x7e)<<1)),	//# 2928, ticks 37440, elapsed 0, voice: 2 note: 64 velocity 57 event ('note', 37440, 1, 64, 57)
	4,((( 3 &4)<<5)|( 42 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2929, ticks 37464, elapsed 4, voice: 3 note: 42 velocity 0 event ('note', 37464, 3, 42, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 70 not found in channels, probably interrupted
	6,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2932, ticks 37500, elapsed 6, voice: 0 note: 78 velocity 0 event ('note', 37500, 8, 78, 0)
	// Note off skipped, note 42 not found in channels, probably interrupted
	6,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2934, ticks 37536, elapsed 6, voice: 2 note: 64 velocity 0 event ('note', 37536, 1, 64, 0)
	0,((( 0 &4)<<5)|( 70 &0x7f)), ((0 &3)|((89 &0x7e)<<1)),	//# 2935, ticks 37536, elapsed 0, voice: 0 note: 70 velocity 89 event ('note', 37536, 1, 70, 89)
	0,((( 0 &4)<<5)|( 70 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2936, ticks 37540, elapsed 0, voice: 0 note: 70 velocity 0 event ('note', 37540, 5, 70, 0)
	// Note off skipped, note 70 not found in channels, probably interrupted
	1,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2938, ticks 37548, elapsed 1, voice: 1 note: 61 velocity 0 event ('note', 37548, 1, 61, 0)
	// Note off skipped, note 70 not found in channels, probably interrupted
	11,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((75 &0x7e)<<1)),	//# 2940, ticks 37612, elapsed 11, voice: 0 note: 47 velocity 75 event ('note', 37612, 3, 47, 75)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((76 &0x7e)<<1)),	//# 2941, ticks 37612, elapsed 0, voice: 1 note: 74 velocity 76 event ('note', 37612, 5, 74, 76)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((76 &0x7e)<<1)),	//# 2942, ticks 37612, elapsed 0, voice: 2 note: 74 velocity 76 event ('note', 37612, 6, 74, 76)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((57 &0x7e)<<1)),	//# 2943, ticks 37616, elapsed 0, voice: 3 note: 66 velocity 57 event ('note', 37616, 7, 66, 57)
	2,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((91 &0x7e)<<1)),	//# 2944, ticks 37628, elapsed 2, voice: 3 note: 74 velocity 91 event ('note', 37628, 8, 74, 91)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((61 &0x7e)<<1)),	//# 2945, ticks 37632, elapsed 0, voice: 0 note: 71 velocity 61 event ('note', 37632, 1, 71, 61)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((57 &0x7e)<<1)),	//# 2946, ticks 37632, elapsed 0, voice: 0 note: 62 velocity 57 event ('note', 37632, 1, 62, 57)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((61 &0x7e)<<1)),	//# 2947, ticks 37632, elapsed 0, voice: 0 note: 47 velocity 61 event ('note', 37632, 1, 47, 61)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((67 &0x7e)<<1)),	//# 2948, ticks 37632, elapsed 0, voice: 0 note: 66 velocity 67 event ('note', 37632, 1, 66, 67)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((38 &0x7e)<<1)),	//# 2949, ticks 37632, elapsed 0, voice: 0 note: 59 velocity 38 event ('note', 37632, 1, 59, 38)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	16,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((79 &0x7e)<<1)),	//# 2952, ticks 37728, elapsed 16, voice: 0 note: 54 velocity 79 event ('note', 37728, 1, 54, 79)
	// Note off skipped, note 66 not found in channels, probably interrupted
	9,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2954, ticks 37780, elapsed 9, voice: 1 note: 74 velocity 0 event ('note', 37780, 8, 74, 0)
	6,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((61 &0x7e)<<1)),	//# 2955, ticks 37816, elapsed 6, voice: 1 note: 66 velocity 61 event ('note', 37816, 4, 66, 61)
	// Note off skipped, note 47 not found in channels, probably interrupted
	1,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((70 &0x7e)<<1)),	//# 2957, ticks 37824, elapsed 1, voice: 1 note: 52 velocity 70 event ('note', 37824, 1, 52, 70)
	2,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2958, ticks 37840, elapsed 2, voice: 0 note: 54 velocity 0 event ('note', 37840, 1, 54, 0)
	9,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2959, ticks 37896, elapsed 9, voice: 1 note: 52 velocity 0 event ('note', 37896, 1, 52, 0)
	4,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((72 &0x7e)<<1)),	//# 2960, ticks 37920, elapsed 4, voice: 0 note: 54 velocity 72 event ('note', 37920, 1, 54, 72)
	6,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2961, ticks 37956, elapsed 6, voice: 0 note: 54 velocity 0 event ('note', 37956, 1, 54, 0)
	2,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2962, ticks 37972, elapsed 2, voice: 2 note: 74 velocity 0 event ('note', 37972, 5, 74, 0)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2963, ticks 37972, elapsed 0, voice: 3 note: 74 velocity 0 event ('note', 37972, 6, 74, 0)
	6,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((62 &0x7e)<<1)),	//# 2964, ticks 38012, elapsed 6, voice: 0 note: 71 velocity 62 event ('note', 38012, 4, 71, 62)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((74 &0x7e)<<1)),	//# 2965, ticks 38016, elapsed 0, voice: 1 note: 50 velocity 74 event ('note', 38016, 1, 50, 74)
	// Note off skipped, note 66 not found in channels, probably interrupted
	16,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((69 &0x7e)<<1)),	//# 2967, ticks 38112, elapsed 16, voice: 2 note: 54 velocity 69 event ('note', 38112, 1, 54, 69)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2968, ticks 38116, elapsed 0, voice: 1 note: 50 velocity 0 event ('note', 38116, 1, 50, 0)
	6,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2969, ticks 38156, elapsed 6, voice: 2 note: 54 velocity 0 event ('note', 38156, 1, 54, 0)
	4,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((77 &0x7e)<<1)),	//# 2970, ticks 38184, elapsed 4, voice: 1 note: 71 velocity 77 event ('note', 38184, 7, 71, 77)
	0,((( 2 &4)<<5)|( 47 &0x7f)), ((2 &3)|((73 &0x7e)<<1)),	//# 2971, ticks 38188, elapsed 0, voice: 2 note: 47 velocity 73 event ('note', 38188, 3, 47, 73)
	0,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((82 &0x7e)<<1)),	//# 2972, ticks 38192, elapsed 0, voice: 3 note: 78 velocity 82 event ('note', 38192, 8, 78, 82)
	0,((( 0 &4)<<5)|( 75 &0x7f)), ((0 &3)|((75 &0x7e)<<1)),	//# 2973, ticks 38196, elapsed 0, voice: 0 note: 75 velocity 75 event ('note', 38196, 5, 75, 75)
	0,((( 2 &4)<<5)|( 75 &0x7f)), ((2 &3)|((75 &0x7e)<<1)),	//# 2974, ticks 38196, elapsed 0, voice: 2 note: 75 velocity 75 event ('note', 38196, 6, 75, 75)
	2,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((72 &0x7e)<<1)),	//# 2975, ticks 38208, elapsed 2, voice: 0 note: 47 velocity 72 event ('note', 38208, 1, 47, 72)
	4,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2976, ticks 38236, elapsed 4, voice: 0 note: 47 velocity 0 event ('note', 38236, 3, 47, 0)
	1,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 2977, ticks 38244, elapsed 1, voice: 1 note: 71 velocity 0 event ('note', 38244, 7, 71, 0)
	1,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 2978, ticks 38252, elapsed 1, voice: 3 note: 78 velocity 0 event ('note', 38252, 8, 78, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	6,((( 2 &4)<<5)|( 75 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 2980, ticks 38292, elapsed 6, voice: 2 note: 75 velocity 0 event ('note', 38292, 5, 75, 0)
	// Note off skipped, note 75 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((51 &0x7e)<<1)),	//# 2983, ticks 38304, elapsed 2, voice: 0 note: 50 velocity 51 event ('note', 38304, 1, 50, 51)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	4,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2986, ticks 38328, elapsed 4, voice: 0 note: 50 velocity 0 event ('note', 38328, 1, 50, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	9,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((69 &0x7e)<<1)),	//# 2988, ticks 38384, elapsed 9, voice: 0 note: 74 velocity 69 event ('note', 38384, 7, 74, 69)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((65 &0x7e)<<1)),	//# 2989, ticks 38388, elapsed 0, voice: 1 note: 71 velocity 65 event ('note', 38388, 8, 71, 65)
	0,((( 2 &4)<<5)|( 44 &0x7f)), ((2 &3)|((85 &0x7e)<<1)),	//# 2990, ticks 38392, elapsed 0, voice: 2 note: 44 velocity 85 event ('note', 38392, 3, 44, 85)
	0,((( 3 &4)<<5)|( 77 &0x7f)), ((3 &3)|((83 &0x7e)<<1)),	//# 2991, ticks 38396, elapsed 0, voice: 3 note: 77 velocity 83 event ('note', 38396, 5, 77, 83)
	0,((( 1 &4)<<5)|( 77 &0x7f)), ((1 &3)|((83 &0x7e)<<1)),	//# 2992, ticks 38396, elapsed 0, voice: 1 note: 77 velocity 83 event ('note', 38396, 6, 77, 83)
	0,((( 0 &4)<<5)|( 44 &0x7f)), ((0 &3)|((78 &0x7e)<<1)),	//# 2993, ticks 38400, elapsed 0, voice: 0 note: 44 velocity 78 event ('note', 38400, 1, 44, 78)
	16,((( 0 &4)<<5)|( 68 &0x7f)), ((0 &3)|((90 &0x7e)<<1)),	//# 2994, ticks 38496, elapsed 16, voice: 0 note: 68 velocity 90 event ('note', 38496, 1, 68, 90)
	// Note off skipped, note 74 not found in channels, probably interrupted
	16,((( 0 &4)<<5)|( 68 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 2996, ticks 38592, elapsed 16, voice: 0 note: 68 velocity 0 event ('note', 38592, 1, 68, 0)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((83 &0x7e)<<1)),	//# 2997, ticks 38592, elapsed 0, voice: 0 note: 69 velocity 83 event ('note', 38592, 1, 69, 83)
	0,((( 0 &4)<<5)|( 75 &0x7f)), ((0 &3)|((66 &0x7e)<<1)),	//# 2998, ticks 38592, elapsed 0, voice: 0 note: 75 velocity 66 event ('note', 38592, 5, 75, 66)
	0,((( 0 &4)<<5)|( 75 &0x7f)), ((0 &3)|((66 &0x7e)<<1)),	//# 2999, ticks 38592, elapsed 0, voice: 0 note: 75 velocity 66 event ('note', 38592, 6, 75, 66)
	// Note off skipped, note 71 not found in channels, probably interrupted
	3,((( 1 &4)<<5)|( 77 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3001, ticks 38612, elapsed 3, voice: 1 note: 77 velocity 0 event ('note', 38612, 5, 77, 0)
	0,((( 3 &4)<<5)|( 77 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3002, ticks 38612, elapsed 0, voice: 3 note: 77 velocity 0 event ('note', 38612, 6, 77, 0)
	13,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((82 &0x7e)<<1)),	//# 3003, ticks 38688, elapsed 13, voice: 1 note: 73 velocity 82 event ('note', 38688, 1, 73, 82)
	0,((( 0 &4)<<5)|( 75 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3004, ticks 38688, elapsed 0, voice: 0 note: 75 velocity 0 event ('note', 38688, 5, 75, 0)
	// Note off skipped, note 75 not found in channels, probably interrupted
	3,((( 2 &4)<<5)|( 44 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3006, ticks 38708, elapsed 3, voice: 2 note: 44 velocity 0 event ('note', 38708, 3, 44, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	11,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 3008, ticks 38772, elapsed 11, voice: 0 note: 78 velocity 88 event ('note', 38772, 5, 78, 88)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((88 &0x7e)<<1)),	//# 3009, ticks 38772, elapsed 0, voice: 2 note: 78 velocity 88 event ('note', 38772, 6, 78, 88)
	2,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((90 &0x7e)<<1)),	//# 3010, ticks 38784, elapsed 2, voice: 3 note: 71 velocity 90 event ('note', 38784, 1, 71, 90)
	3,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3011, ticks 38804, elapsed 3, voice: 1 note: 73 velocity 0 event ('note', 38804, 1, 73, 0)
	13,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3012, ticks 38880, elapsed 13, voice: 3 note: 71 velocity 0 event ('note', 38880, 1, 71, 0)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((80 &0x7e)<<1)),	//# 3013, ticks 38880, elapsed 0, voice: 1 note: 69 velocity 80 event ('note', 38880, 1, 69, 80)
	14,((( 3 &4)<<5)|( 77 &0x7f)), ((3 &3)|((73 &0x7e)<<1)),	//# 3014, ticks 38964, elapsed 14, voice: 3 note: 77 velocity 73 event ('note', 38964, 5, 77, 73)
	0,((( 3 &4)<<5)|( 77 &0x7f)), ((3 &3)|((73 &0x7e)<<1)),	//# 3015, ticks 38964, elapsed 0, voice: 3 note: 77 velocity 73 event ('note', 38964, 6, 77, 73)
	2,((( 3 &4)<<5)|( 68 &0x7f)), ((3 &3)|((76 &0x7e)<<1)),	//# 3016, ticks 38976, elapsed 2, voice: 3 note: 68 velocity 76 event ('note', 38976, 1, 68, 76)
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3017, ticks 38980, elapsed 0, voice: 0 note: 78 velocity 0 event ('note', 38980, 5, 78, 0)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3018, ticks 38980, elapsed 0, voice: 2 note: 78 velocity 0 event ('note', 38980, 6, 78, 0)
	4,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3019, ticks 39008, elapsed 4, voice: 1 note: 69 velocity 0 event ('note', 39008, 1, 69, 0)
	// Note off skipped, note 44 not found in channels, probably interrupted
	11,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((96 &0x7e)<<1)),	//# 3021, ticks 39072, elapsed 11, voice: 0 note: 66 velocity 96 event ('note', 39072, 1, 66, 96)
	// Note off skipped, note 77 not found in channels, probably interrupted
	// Note off skipped, note 77 not found in channels, probably interrupted
	3,((( 3 &4)<<5)|( 68 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3024, ticks 39092, elapsed 3, voice: 3 note: 68 velocity 0 event ('note', 39092, 1, 68, 0)
	5,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3025, ticks 39124, elapsed 5, voice: 0 note: 66 velocity 0 event ('note', 39124, 1, 66, 0)
	4,((( 0 &4)<<5)|( 80 &0x7f)), ((0 &3)|((83 &0x7e)<<1)),	//# 3026, ticks 39148, elapsed 4, voice: 0 note: 80 velocity 83 event ('note', 39148, 5, 80, 83)
	0,((( 1 &4)<<5)|( 80 &0x7f)), ((1 &3)|((83 &0x7e)<<1)),	//# 3027, ticks 39148, elapsed 0, voice: 1 note: 80 velocity 83 event ('note', 39148, 6, 80, 83)
	3,((( 2 &4)<<5)|( 65 &0x7f)), ((2 &3)|((83 &0x7e)<<1)),	//# 3028, ticks 39168, elapsed 3, voice: 2 note: 65 velocity 83 event ('note', 39168, 1, 65, 83)
	// Note off skipped, note 71 not found in channels, probably interrupted
	16,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((86 &0x7e)<<1)),	//# 3030, ticks 39264, elapsed 16, voice: 3 note: 71 velocity 86 event ('note', 39264, 1, 71, 86)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((81 &0x7e)<<1)),	//# 3031, ticks 39264, elapsed 0, voice: 0 note: 74 velocity 81 event ('note', 39264, 4, 74, 81)
	5,((( 2 &4)<<5)|( 65 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3032, ticks 39296, elapsed 5, voice: 2 note: 65 velocity 0 event ('note', 39296, 1, 65, 0)
	1,((( 1 &4)<<5)|( 80 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3033, ticks 39304, elapsed 1, voice: 1 note: 80 velocity 0 event ('note', 39304, 5, 80, 0)
	// Note off skipped, note 80 not found in channels, probably interrupted
	6,((( 1 &4)<<5)|( 49 &0x7f)), ((1 &3)|((78 &0x7e)<<1)),	//# 3035, ticks 39340, elapsed 6, voice: 1 note: 49 velocity 78 event ('note', 39340, 3, 49, 78)
	0,((( 2 &4)<<5)|( 68 &0x7f)), ((2 &3)|((79 &0x7e)<<1)),	//# 3036, ticks 39340, elapsed 0, voice: 2 note: 68 velocity 79 event ('note', 39340, 8, 68, 79)
	2,((( 1 &4)<<5)|( 65 &0x7f)), ((1 &3)|((81 &0x7e)<<1)),	//# 3037, ticks 39352, elapsed 2, voice: 1 note: 65 velocity 81 event ('note', 39352, 5, 65, 81)
	0,((( 2 &4)<<5)|( 65 &0x7f)), ((2 &3)|((81 &0x7e)<<1)),	//# 3038, ticks 39352, elapsed 0, voice: 2 note: 65 velocity 81 event ('note', 39352, 6, 65, 81)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((60 &0x7e)<<1)),	//# 3039, ticks 39352, elapsed 0, voice: 0 note: 61 velocity 60 event ('note', 39352, 7, 61, 60)
	1,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((83 &0x7e)<<1)),	//# 3040, ticks 39360, elapsed 1, voice: 0 note: 69 velocity 83 event ('note', 39360, 1, 69, 83)
	0,((( 1 &4)<<5)|( 49 &0x7f)), ((1 &3)|((76 &0x7e)<<1)),	//# 3041, ticks 39360, elapsed 0, voice: 1 note: 49 velocity 76 event ('note', 39360, 1, 49, 76)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((74 &0x7e)<<1)),	//# 3042, ticks 39364, elapsed 0, voice: 1 note: 73 velocity 74 event ('note', 39364, 4, 73, 74)
	// Note off skipped, note 74 not found in channels, probably interrupted
	4,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3044, ticks 39392, elapsed 4, voice: 3 note: 71 velocity 0 event ('note', 39392, 1, 71, 0)
	// Note off skipped, note 49 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 68 not found in channels, probably interrupted
	// Note off skipped, note 49 not found in channels, probably interrupted
	10,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((83 &0x7e)<<1)),	//# 3049, ticks 39452, elapsed 10, voice: 3 note: 71 velocity 83 event ('note', 39452, 4, 71, 83)
	0,((( 1 &4)<<5)|( 68 &0x7f)), ((1 &3)|((90 &0x7e)<<1)),	//# 3050, ticks 39456, elapsed 0, voice: 1 note: 68 velocity 90 event ('note', 39456, 1, 68, 90)
	// Note off skipped, note 73 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3052, ticks 39472, elapsed 2, voice: 0 note: 69 velocity 0 event ('note', 39472, 1, 69, 0)
	11,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((83 &0x7e)<<1)),	//# 3053, ticks 39540, elapsed 11, voice: 0 note: 54 velocity 83 event ('note', 39540, 3, 54, 83)
	0,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((68 &0x7e)<<1)),	//# 3054, ticks 39540, elapsed 0, voice: 2 note: 61 velocity 68 event ('note', 39540, 7, 61, 68)
	1,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((88 &0x7e)<<1)),	//# 3055, ticks 39548, elapsed 1, voice: 2 note: 69 velocity 88 event ('note', 39548, 5, 69, 88)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 3056, ticks 39548, elapsed 0, voice: 0 note: 69 velocity 88 event ('note', 39548, 6, 69, 88)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((89 &0x7e)<<1)),	//# 3057, ticks 39548, elapsed 0, voice: 3 note: 69 velocity 89 event ('note', 39548, 8, 69, 89)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((94 &0x7e)<<1)),	//# 3058, ticks 39552, elapsed 0, voice: 0 note: 66 velocity 94 event ('note', 39552, 1, 66, 94)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((70 &0x7e)<<1)),	//# 3059, ticks 39552, elapsed 0, voice: 2 note: 54 velocity 70 event ('note', 39552, 1, 54, 70)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((85 &0x7e)<<1)),	//# 3060, ticks 39552, elapsed 0, voice: 2 note: 69 velocity 85 event ('note', 39552, 4, 69, 85)
	// Note off skipped, note 71 not found in channels, probably interrupted
	6,((( 1 &4)<<5)|( 68 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3062, ticks 39588, elapsed 6, voice: 1 note: 68 velocity 0 event ('note', 39588, 1, 68, 0)
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 65 not found in channels, probably interrupted
	// Note off skipped, note 65 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	4,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3068, ticks 39612, elapsed 4, voice: 2 note: 69 velocity 0 event ('note', 39612, 8, 69, 0)
	6,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3069, ticks 39648, elapsed 6, voice: 0 note: 66 velocity 0 event ('note', 39648, 1, 66, 0)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((80 &0x7e)<<1)),	//# 3070, ticks 39648, elapsed 0, voice: 0 note: 64 velocity 80 event ('note', 39648, 1, 64, 80)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((80 &0x7e)<<1)),	//# 3071, ticks 39648, elapsed 0, voice: 1 note: 67 velocity 80 event ('note', 39648, 4, 67, 80)
	4,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3072, ticks 39676, elapsed 4, voice: 3 note: 69 velocity 0 event ('note', 39676, 4, 69, 0)
	10,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((57 &0x7e)<<1)),	//# 3073, ticks 39736, elapsed 10, voice: 2 note: 57 velocity 57 event ('note', 39736, 7, 57, 57)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((88 &0x7e)<<1)),	//# 3074, ticks 39736, elapsed 0, voice: 3 note: 67 velocity 88 event ('note', 39736, 8, 67, 88)
	0,((( 2 &4)<<5)|( 45 &0x7f)), ((2 &3)|((77 &0x7e)<<1)),	//# 3075, ticks 39740, elapsed 0, voice: 2 note: 45 velocity 77 event ('note', 39740, 3, 45, 77)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((84 &0x7e)<<1)),	//# 3076, ticks 39744, elapsed 0, voice: 2 note: 62 velocity 84 event ('note', 39744, 1, 62, 84)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((53 &0x7e)<<1)),	//# 3077, ticks 39744, elapsed 0, voice: 0 note: 45 velocity 53 event ('note', 39744, 1, 45, 53)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((69 &0x7e)<<1)),	//# 3078, ticks 39748, elapsed 0, voice: 0 note: 66 velocity 69 event ('note', 39748, 4, 66, 69)
	// Note off skipped, note 64 not found in channels, probably interrupted
	4,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3080, ticks 39772, elapsed 4, voice: 1 note: 67 velocity 0 event ('note', 39772, 4, 67, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	8,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3083, ticks 39820, elapsed 8, voice: 3 note: 67 velocity 0 event ('note', 39820, 8, 67, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	3,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3085, ticks 39840, elapsed 3, voice: 2 note: 62 velocity 0 event ('note', 39840, 1, 62, 0)
	0,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((91 &0x7e)<<1)),	//# 3086, ticks 39840, elapsed 0, voice: 1 note: 61 velocity 91 event ('note', 39840, 1, 61, 91)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((67 &0x7e)<<1)),	//# 3087, ticks 39840, elapsed 0, voice: 2 note: 64 velocity 67 event ('note', 39840, 4, 64, 67)
	1,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3088, ticks 39848, elapsed 1, voice: 0 note: 66 velocity 0 event ('note', 39848, 4, 66, 0)
	9,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3089, ticks 39900, elapsed 9, voice: 2 note: 64 velocity 0 event ('note', 39900, 4, 64, 0)
	4,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3090, ticks 39924, elapsed 4, voice: 1 note: 61 velocity 0 event ('note', 39924, 1, 61, 0)
	1,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((60 &0x7e)<<1)),	//# 3091, ticks 39932, elapsed 1, voice: 0 note: 57 velocity 60 event ('note', 39932, 7, 57, 60)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((84 &0x7e)<<1)),	//# 3092, ticks 39936, elapsed 0, voice: 1 note: 62 velocity 84 event ('note', 39936, 1, 62, 84)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((72 &0x7e)<<1)),	//# 3093, ticks 39936, elapsed 0, voice: 2 note: 50 velocity 72 event ('note', 39936, 1, 50, 72)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((70 &0x7e)<<1)),	//# 3094, ticks 39936, elapsed 0, voice: 3 note: 66 velocity 70 event ('note', 39936, 8, 66, 70)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((73 &0x7e)<<1)),	//# 3095, ticks 39940, elapsed 0, voice: 0 note: 50 velocity 73 event ('note', 39940, 3, 50, 73)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((78 &0x7e)<<1)),	//# 3096, ticks 39940, elapsed 0, voice: 3 note: 66 velocity 78 event ('note', 39940, 4, 66, 78)
	12,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3097, ticks 40012, elapsed 12, voice: 1 note: 62 velocity 0 event ('note', 40012, 1, 62, 0)
	3,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((80 &0x7e)<<1)),	//# 3098, ticks 40032, elapsed 3, voice: 1 note: 74 velocity 80 event ('note', 40032, 1, 74, 80)
	13,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((81 &0x7e)<<1)),	//# 3099, ticks 40112, elapsed 13, voice: 2 note: 64 velocity 81 event ('note', 40112, 4, 64, 81)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3100, ticks 40116, elapsed 0, voice: 3 note: 66 velocity 0 event ('note', 40116, 8, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	2,((( 3 &4)<<5)|( 72 &0x7f)), ((3 &3)|((107 &0x7e)<<1)),	//# 3102, ticks 40128, elapsed 2, voice: 3 note: 72 velocity 107 event ('note', 40128, 1, 72, 107)
	// Note off skipped, note 57 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3104, ticks 40144, elapsed 2, voice: 1 note: 74 velocity 0 event ('note', 40144, 1, 74, 0)
	2,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3105, ticks 40156, elapsed 2, voice: 0 note: 50 velocity 0 event ('note', 40156, 1, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	10,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3107, ticks 40216, elapsed 10, voice: 2 note: 64 velocity 0 event ('note', 40216, 4, 64, 0)
	1,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((84 &0x7e)<<1)),	//# 3108, ticks 40224, elapsed 1, voice: 0 note: 74 velocity 84 event ('note', 40224, 1, 74, 84)
	2,((( 3 &4)<<5)|( 72 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3109, ticks 40240, elapsed 2, voice: 3 note: 72 velocity 0 event ('note', 40240, 1, 72, 0)
	12,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((73 &0x7e)<<1)),	//# 3110, ticks 40312, elapsed 12, voice: 1 note: 67 velocity 73 event ('note', 40312, 4, 67, 73)
	1,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((74 &0x7e)<<1)),	//# 3111, ticks 40320, elapsed 1, voice: 2 note: 71 velocity 74 event ('note', 40320, 1, 71, 74)
	2,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3112, ticks 40336, elapsed 2, voice: 0 note: 74 velocity 0 event ('note', 40336, 1, 74, 0)
	12,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3113, ticks 40408, elapsed 12, voice: 2 note: 71 velocity 0 event ('note', 40408, 1, 71, 0)
	1,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((75 &0x7e)<<1)),	//# 3114, ticks 40416, elapsed 1, voice: 0 note: 74 velocity 75 event ('note', 40416, 1, 74, 75)
	4,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3115, ticks 40444, elapsed 4, voice: 0 note: 74 velocity 0 event ('note', 40444, 1, 74, 0)
	6,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((75 &0x7e)<<1)),	//# 3116, ticks 40480, elapsed 6, voice: 0 note: 50 velocity 75 event ('note', 40480, 3, 50, 75)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((59 &0x7e)<<1)),	//# 3117, ticks 40480, elapsed 0, voice: 2 note: 66 velocity 59 event ('note', 40480, 7, 66, 59)
	2,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((85 &0x7e)<<1)),	//# 3118, ticks 40492, elapsed 2, voice: 3 note: 66 velocity 85 event ('note', 40492, 4, 66, 85)
	1,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((75 &0x7e)<<1)),	//# 3119, ticks 40500, elapsed 1, voice: 2 note: 74 velocity 75 event ('note', 40500, 8, 74, 75)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3120, ticks 40504, elapsed 0, voice: 1 note: 67 velocity 0 event ('note', 40504, 4, 67, 0)
	1,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((55 &0x7e)<<1)),	//# 3121, ticks 40512, elapsed 1, voice: 1 note: 69 velocity 55 event ('note', 40512, 1, 69, 55)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((77 &0x7e)<<1)),	//# 3122, ticks 40512, elapsed 0, voice: 1 note: 78 velocity 77 event ('note', 40512, 1, 78, 77)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((53 &0x7e)<<1)),	//# 3123, ticks 40512, elapsed 0, voice: 0 note: 50 velocity 53 event ('note', 40512, 1, 50, 53)
	5,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3124, ticks 40544, elapsed 5, voice: 0 note: 50 velocity 0 event ('note', 40544, 3, 50, 0)
	1,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3125, ticks 40552, elapsed 1, voice: 3 note: 66 velocity 0 event ('note', 40552, 7, 66, 0)
	4,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3126, ticks 40576, elapsed 4, voice: 2 note: 74 velocity 0 event ('note', 40576, 8, 74, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	5,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((93 &0x7e)<<1)),	//# 3129, ticks 40608, elapsed 5, voice: 0 note: 72 velocity 93 event ('note', 40608, 1, 72, 93)
	1,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3130, ticks 40616, elapsed 1, voice: 1 note: 78 velocity 0 event ('note', 40616, 1, 78, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3132, ticks 40632, elapsed 2, voice: 0 note: 72 velocity 0 event ('note', 40632, 1, 72, 0)
	9,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((73 &0x7e)<<1)),	//# 3133, ticks 40688, elapsed 9, voice: 0 note: 62 velocity 73 event ('note', 40688, 7, 62, 73)
	2,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((73 &0x7e)<<1)),	//# 3134, ticks 40700, elapsed 2, voice: 1 note: 55 velocity 73 event ('note', 40700, 3, 55, 73)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((79 &0x7e)<<1)),	//# 3135, ticks 40700, elapsed 0, voice: 2 note: 71 velocity 79 event ('note', 40700, 8, 71, 79)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((62 &0x7e)<<1)),	//# 3136, ticks 40704, elapsed 0, voice: 3 note: 71 velocity 62 event ('note', 40704, 1, 71, 62)
	0,((( 3 &4)<<5)|( 79 &0x7f)), ((3 &3)|((71 &0x7e)<<1)),	//# 3137, ticks 40704, elapsed 0, voice: 3 note: 79 velocity 71 event ('note', 40704, 1, 79, 71)
	0,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((37 &0x7e)<<1)),	//# 3138, ticks 40704, elapsed 0, voice: 3 note: 67 velocity 37 event ('note', 40704, 1, 67, 37)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3139, ticks 40704, elapsed 0, voice: 3 note: 74 velocity 64 event ('note', 40704, 1, 74, 64)
	0,((( 3 &4)<<5)|( 55 &0x7f)), ((3 &3)|((63 &0x7e)<<1)),	//# 3140, ticks 40704, elapsed 0, voice: 3 note: 55 velocity 63 event ('note', 40704, 1, 55, 63)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((74 &0x7e)<<1)),	//# 3141, ticks 40708, elapsed 0, voice: 3 note: 71 velocity 74 event ('note', 40708, 4, 71, 74)
	13,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3142, ticks 40784, elapsed 13, voice: 1 note: 55 velocity 0 event ('note', 40784, 1, 55, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((65 &0x7e)<<1)),	//# 3145, ticks 40800, elapsed 2, voice: 1 note: 62 velocity 65 event ('note', 40800, 1, 62, 65)
	// Note off skipped, note 55 not found in channels, probably interrupted
	12,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3147, ticks 40872, elapsed 12, voice: 2 note: 71 velocity 0 event ('note', 40872, 8, 71, 0)
	3,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((76 &0x7e)<<1)),	//# 3148, ticks 40892, elapsed 3, voice: 2 note: 62 velocity 76 event ('note', 40892, 5, 62, 76)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((76 &0x7e)<<1)),	//# 3149, ticks 40892, elapsed 0, voice: 1 note: 62 velocity 76 event ('note', 40892, 6, 62, 76)
	0,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((71 &0x7e)<<1)),	//# 3150, ticks 40896, elapsed 0, voice: 0 note: 60 velocity 71 event ('note', 40896, 1, 60, 71)
	1,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3151, ticks 40904, elapsed 1, voice: 1 note: 62 velocity 0 event ('note', 40904, 7, 62, 0)
	4,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3152, ticks 40928, elapsed 4, voice: 2 note: 62 velocity 0 event ('note', 40928, 1, 62, 0)
	8,((( 0 &4)<<5)|( 60 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3153, ticks 40976, elapsed 8, voice: 0 note: 60 velocity 0 event ('note', 40976, 1, 60, 0)
	2,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((66 &0x7e)<<1)),	//# 3154, ticks 40992, elapsed 2, voice: 0 note: 62 velocity 66 event ('note', 40992, 1, 62, 66)
	6,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3155, ticks 41028, elapsed 6, voice: 3 note: 71 velocity 0 event ('note', 41028, 4, 71, 0)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3156, ticks 41032, elapsed 0, voice: 0 note: 62 velocity 0 event ('note', 41032, 1, 62, 0)
	9,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((85 &0x7e)<<1)),	//# 3157, ticks 41084, elapsed 9, voice: 0 note: 67 velocity 85 event ('note', 41084, 5, 67, 85)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((85 &0x7e)<<1)),	//# 3158, ticks 41084, elapsed 0, voice: 1 note: 67 velocity 85 event ('note', 41084, 6, 67, 85)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((84 &0x7e)<<1)),	//# 3159, ticks 41088, elapsed 0, voice: 2 note: 59 velocity 84 event ('note', 41088, 1, 59, 84)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	16,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((76 &0x7e)<<1)),	//# 3162, ticks 41184, elapsed 16, voice: 3 note: 62 velocity 76 event ('note', 41184, 1, 62, 76)
	1,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3163, ticks 41192, elapsed 1, voice: 2 note: 59 velocity 0 event ('note', 41192, 1, 59, 0)
	6,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3164, ticks 41228, elapsed 6, voice: 3 note: 62 velocity 0 event ('note', 41228, 1, 62, 0)
	3,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3165, ticks 41248, elapsed 3, voice: 0 note: 67 velocity 0 event ('note', 41248, 1, 67, 0)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((71 &0x7e)<<1)),	//# 3166, ticks 41248, elapsed 0, voice: 0 note: 71 velocity 71 event ('note', 41248, 7, 71, 71)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((70 &0x7e)<<1)),	//# 3167, ticks 41252, elapsed 0, voice: 2 note: 55 velocity 70 event ('note', 41252, 3, 55, 70)
	// Note off skipped, note 74 not found in channels, probably interrupted
	2,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((81 &0x7e)<<1)),	//# 3169, ticks 41264, elapsed 2, voice: 3 note: 74 velocity 81 event ('note', 41264, 8, 74, 81)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((76 &0x7e)<<1)),	//# 3170, ticks 41268, elapsed 0, voice: 2 note: 71 velocity 76 event ('note', 41268, 4, 71, 76)
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3171, ticks 41272, elapsed 0, voice: 0 note: 71 velocity 0 event ('note', 41272, 1, 71, 0)
	1,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((71 &0x7e)<<1)),	//# 3172, ticks 41280, elapsed 1, voice: 0 note: 55 velocity 71 event ('note', 41280, 1, 55, 71)
	// Note off skipped, note 79 not found in channels, probably interrupted
	4,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3174, ticks 41304, elapsed 4, voice: 2 note: 71 velocity 0 event ('note', 41304, 7, 71, 0)
	1,((( 0 &4)<<5)|( 55 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3175, ticks 41312, elapsed 1, voice: 0 note: 55 velocity 0 event ('note', 41312, 3, 55, 0)
	3,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3176, ticks 41332, elapsed 3, voice: 3 note: 74 velocity 0 event ('note', 41332, 8, 74, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	7,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((71 &0x7e)<<1)),	//# 3179, ticks 41376, elapsed 7, voice: 0 note: 59 velocity 71 event ('note', 41376, 1, 59, 71)
	6,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3180, ticks 41416, elapsed 6, voice: 0 note: 59 velocity 0 event ('note', 41416, 1, 59, 0)
	4,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((45 &0x7e)<<1)),	//# 3181, ticks 41444, elapsed 4, voice: 0 note: 67 velocity 45 event ('note', 41444, 7, 67, 45)
	2,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((83 &0x7e)<<1)),	//# 3182, ticks 41460, elapsed 2, voice: 2 note: 73 velocity 83 event ('note', 41460, 8, 73, 83)
	2,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((76 &0x7e)<<1)),	//# 3183, ticks 41472, elapsed 2, voice: 3 note: 52 velocity 76 event ('note', 41472, 1, 52, 76)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((74 &0x7e)<<1)),	//# 3184, ticks 41472, elapsed 0, voice: 0 note: 73 velocity 74 event ('note', 41472, 4, 73, 74)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((66 &0x7e)<<1)),	//# 3185, ticks 41476, elapsed 0, voice: 0 note: 52 velocity 66 event ('note', 41476, 3, 52, 66)
	15,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((78 &0x7e)<<1)),	//# 3186, ticks 41568, elapsed 15, voice: 0 note: 79 velocity 78 event ('note', 41568, 1, 79, 78)
	12,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((74 &0x7e)<<1)),	//# 3187, ticks 41640, elapsed 12, voice: 3 note: 71 velocity 74 event ('note', 41640, 4, 71, 74)
	4,((( 3 &4)<<5)|( 83 &0x7f)), ((3 &3)|((87 &0x7e)<<1)),	//# 3188, ticks 41664, elapsed 4, voice: 3 note: 83 velocity 87 event ('note', 41664, 1, 83, 87)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3189, ticks 41664, elapsed 0, voice: 2 note: 73 velocity 0 event ('note', 41664, 4, 73, 0)
	4,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3190, ticks 41692, elapsed 4, voice: 0 note: 79 velocity 0 event ('note', 41692, 1, 79, 0)
	2,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3191, ticks 41708, elapsed 2, voice: 1 note: 67 velocity 0 event ('note', 41708, 7, 67, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	9,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((84 &0x7e)<<1)),	//# 3194, ticks 41760, elapsed 9, voice: 0 note: 81 velocity 84 event ('note', 41760, 1, 81, 84)
	3,((( 3 &4)<<5)|( 83 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3195, ticks 41780, elapsed 3, voice: 3 note: 83 velocity 0 event ('note', 41780, 1, 83, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	11,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((62 &0x7e)<<1)),	//# 3197, ticks 41844, elapsed 11, voice: 1 note: 74 velocity 62 event ('note', 41844, 4, 74, 62)
	2,((( 2 &4)<<5)|( 79 &0x7f)), ((2 &3)|((82 &0x7e)<<1)),	//# 3198, ticks 41856, elapsed 2, voice: 2 note: 79 velocity 82 event ('note', 41856, 1, 79, 82)
	4,((( 0 &4)<<5)|( 81 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3199, ticks 41884, elapsed 4, voice: 0 note: 81 velocity 0 event ('note', 41884, 1, 81, 0)
	11,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((98 &0x7e)<<1)),	//# 3200, ticks 41952, elapsed 11, voice: 0 note: 78 velocity 98 event ('note', 41952, 1, 78, 98)
	2,((( 2 &4)<<5)|( 79 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3201, ticks 41968, elapsed 2, voice: 2 note: 79 velocity 0 event ('note', 41968, 1, 79, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	10,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((74 &0x7e)<<1)),	//# 3203, ticks 42028, elapsed 10, voice: 2 note: 73 velocity 74 event ('note', 42028, 4, 73, 74)
	2,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3204, ticks 42044, elapsed 2, voice: 1 note: 74 velocity 0 event ('note', 42044, 4, 74, 0)
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3205, ticks 42048, elapsed 0, voice: 0 note: 78 velocity 0 event ('note', 42048, 1, 78, 0)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((85 &0x7e)<<1)),	//# 3206, ticks 42048, elapsed 0, voice: 0 note: 76 velocity 85 event ('note', 42048, 1, 76, 85)
	13,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3207, ticks 42124, elapsed 13, voice: 2 note: 73 velocity 0 event ('note', 42124, 4, 73, 0)
	3,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((85 &0x7e)<<1)),	//# 3208, ticks 42144, elapsed 3, voice: 1 note: 74 velocity 85 event ('note', 42144, 1, 74, 85)
	2,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3209, ticks 42160, elapsed 2, voice: 0 note: 76 velocity 0 event ('note', 42160, 1, 76, 0)
	11,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((69 &0x7e)<<1)),	//# 3210, ticks 42228, elapsed 11, voice: 0 note: 76 velocity 69 event ('note', 42228, 4, 76, 69)
	2,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((93 &0x7e)<<1)),	//# 3211, ticks 42240, elapsed 2, voice: 2 note: 73 velocity 93 event ('note', 42240, 1, 73, 93)
	5,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3212, ticks 42272, elapsed 5, voice: 1 note: 74 velocity 0 event ('note', 42272, 1, 74, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	9,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((70 &0x7e)<<1)),	//# 3215, ticks 42328, elapsed 9, voice: 1 note: 71 velocity 70 event ('note', 42328, 5, 71, 70)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((70 &0x7e)<<1)),	//# 3216, ticks 42328, elapsed 0, voice: 3 note: 71 velocity 70 event ('note', 42328, 6, 71, 70)
	1,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((92 &0x7e)<<1)),	//# 3217, ticks 42336, elapsed 1, voice: 0 note: 74 velocity 92 event ('note', 42336, 1, 74, 92)
	2,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3218, ticks 42348, elapsed 2, voice: 2 note: 73 velocity 0 event ('note', 42348, 1, 73, 0)
	11,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((84 &0x7e)<<1)),	//# 3219, ticks 42416, elapsed 11, voice: 2 note: 69 velocity 84 event ('note', 42416, 5, 69, 84)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((84 &0x7e)<<1)),	//# 3220, ticks 42416, elapsed 0, voice: 1 note: 69 velocity 84 event ('note', 42416, 6, 69, 84)
	0,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((73 &0x7e)<<1)),	//# 3221, ticks 42420, elapsed 0, voice: 3 note: 52 velocity 73 event ('note', 42420, 3, 52, 73)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((63 &0x7e)<<1)),	//# 3222, ticks 42420, elapsed 0, voice: 3 note: 61 velocity 63 event ('note', 42420, 7, 61, 63)
	0,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((79 &0x7e)<<1)),	//# 3223, ticks 42420, elapsed 0, voice: 3 note: 76 velocity 79 event ('note', 42420, 8, 76, 79)
	2,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((93 &0x7e)<<1)),	//# 3224, ticks 42432, elapsed 2, voice: 3 note: 73 velocity 93 event ('note', 42432, 1, 73, 93)
	0,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((80 &0x7e)<<1)),	//# 3225, ticks 42432, elapsed 0, voice: 1 note: 52 velocity 80 event ('note', 42432, 1, 52, 80)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	3,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3228, ticks 42452, elapsed 3, voice: 0 note: 74 velocity 0 event ('note', 42452, 1, 74, 0)
	4,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3229, ticks 42480, elapsed 4, voice: 1 note: 52 velocity 0 event ('note', 42480, 3, 52, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	5,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((67 &0x7e)<<1)),	//# 3232, ticks 42512, elapsed 5, voice: 0 note: 67 velocity 67 event ('note', 42512, 5, 67, 67)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((67 &0x7e)<<1)),	//# 3233, ticks 42512, elapsed 0, voice: 1 note: 67 velocity 67 event ('note', 42512, 6, 67, 67)
	// Note off skipped, note 52 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((92 &0x7e)<<1)),	//# 3235, ticks 42528, elapsed 2, voice: 0 note: 71 velocity 92 event ('note', 42528, 1, 71, 92)
	1,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3236, ticks 42536, elapsed 1, voice: 2 note: 69 velocity 0 event ('note', 42536, 5, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3238, ticks 42544, elapsed 1, voice: 3 note: 73 velocity 0 event ('note', 42544, 1, 73, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	11,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((64 &0x7e)<<1)),	//# 3240, ticks 42612, elapsed 11, voice: 2 note: 66 velocity 64 event ('note', 42612, 5, 66, 64)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((64 &0x7e)<<1)),	//# 3241, ticks 42612, elapsed 0, voice: 3 note: 66 velocity 64 event ('note', 42612, 6, 66, 64)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((68 &0x7e)<<1)),	//# 3242, ticks 42616, elapsed 0, voice: 2 note: 57 velocity 68 event ('note', 42616, 3, 57, 68)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((61 &0x7e)<<1)),	//# 3243, ticks 42620, elapsed 0, voice: 3 note: 62 velocity 61 event ('note', 42620, 7, 62, 61)
	0,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((93 &0x7e)<<1)),	//# 3244, ticks 42620, elapsed 0, voice: 3 note: 78 velocity 93 event ('note', 42620, 8, 78, 93)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((84 &0x7e)<<1)),	//# 3245, ticks 42624, elapsed 0, voice: 1 note: 69 velocity 84 event ('note', 42624, 1, 69, 84)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((71 &0x7e)<<1)),	//# 3246, ticks 42624, elapsed 0, voice: 2 note: 57 velocity 71 event ('note', 42624, 1, 57, 71)
	1,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3247, ticks 42632, elapsed 1, voice: 0 note: 71 velocity 0 event ('note', 42632, 1, 71, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	8,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3250, ticks 42680, elapsed 8, voice: 2 note: 57 velocity 0 event ('note', 42680, 3, 57, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	1,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3252, ticks 42688, elapsed 1, voice: 3 note: 78 velocity 0 event ('note', 42688, 8, 78, 0)
	3,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((82 &0x7e)<<1)),	//# 3253, ticks 42708, elapsed 3, voice: 0 note: 64 velocity 82 event ('note', 42708, 5, 64, 82)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((82 &0x7e)<<1)),	//# 3254, ticks 42708, elapsed 0, voice: 2 note: 64 velocity 82 event ('note', 42708, 6, 64, 82)
	// Note off skipped, note 57 not found in channels, probably interrupted
	2,((( 3 &4)<<5)|( 67 &0x7f)), ((3 &3)|((81 &0x7e)<<1)),	//# 3256, ticks 42720, elapsed 2, voice: 3 note: 67 velocity 81 event ('note', 42720, 1, 67, 81)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	3,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3259, ticks 42740, elapsed 3, voice: 1 note: 69 velocity 0 event ('note', 42740, 1, 69, 0)
	11,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((76 &0x7e)<<1)),	//# 3260, ticks 42808, elapsed 11, voice: 1 note: 45 velocity 76 event ('note', 42808, 3, 45, 76)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((65 &0x7e)<<1)),	//# 3261, ticks 42808, elapsed 0, voice: 1 note: 62 velocity 65 event ('note', 42808, 5, 62, 65)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((65 &0x7e)<<1)),	//# 3262, ticks 42808, elapsed 0, voice: 1 note: 62 velocity 65 event ('note', 42808, 6, 62, 65)
	1,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 3263, ticks 42816, elapsed 1, voice: 1 note: 66 velocity 89 event ('note', 42816, 1, 66, 89)
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((87 &0x7e)<<1)),	//# 3264, ticks 42816, elapsed 0, voice: 3 note: 45 velocity 87 event ('note', 42816, 1, 45, 87)
	0,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((97 &0x7e)<<1)),	//# 3265, ticks 42816, elapsed 0, voice: 0 note: 79 velocity 97 event ('note', 42816, 8, 79, 97)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((62 &0x7e)<<1)),	//# 3266, ticks 42820, elapsed 0, voice: 2 note: 64 velocity 62 event ('note', 42820, 7, 64, 62)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((76 &0x7e)<<1)),	//# 3267, ticks 42824, elapsed 0, voice: 2 note: 76 velocity 76 event ('note', 42824, 4, 76, 76)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	9,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3271, ticks 42876, elapsed 9, voice: 3 note: 45 velocity 0 event ('note', 42876, 3, 45, 0)
	1,((( 0 &4)<<5)|( 79 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3272, ticks 42884, elapsed 1, voice: 0 note: 79 velocity 0 event ('note', 42884, 8, 79, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	2,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3274, ticks 42900, elapsed 2, voice: 2 note: 76 velocity 0 event ('note', 42900, 4, 76, 0)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((73 &0x7e)<<1)),	//# 3275, ticks 42900, elapsed 0, voice: 0 note: 61 velocity 73 event ('note', 42900, 5, 61, 73)
	0,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((73 &0x7e)<<1)),	//# 3276, ticks 42900, elapsed 0, voice: 2 note: 61 velocity 73 event ('note', 42900, 6, 61, 73)
	2,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((90 &0x7e)<<1)),	//# 3277, ticks 42912, elapsed 2, voice: 3 note: 64 velocity 90 event ('note', 42912, 1, 64, 90)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	4,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3281, ticks 42940, elapsed 4, voice: 1 note: 66 velocity 0 event ('note', 42940, 1, 66, 0)
	10,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((48 &0x7e)<<1)),	//# 3282, ticks 43000, elapsed 10, voice: 1 note: 57 velocity 48 event ('note', 43000, 7, 57, 48)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((81 &0x7e)<<1)),	//# 3283, ticks 43004, elapsed 0, voice: 1 note: 78 velocity 81 event ('note', 43004, 8, 78, 81)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((99 &0x7e)<<1)),	//# 3284, ticks 43008, elapsed 0, voice: 0 note: 62 velocity 99 event ('note', 43008, 1, 62, 99)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((89 &0x7e)<<1)),	//# 3285, ticks 43008, elapsed 0, voice: 2 note: 78 velocity 89 event ('note', 43008, 4, 78, 89)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((76 &0x7e)<<1)),	//# 3286, ticks 43012, elapsed 0, voice: 1 note: 50 velocity 76 event ('note', 43012, 3, 50, 76)
	2,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((87 &0x7e)<<1)),	//# 3287, ticks 43024, elapsed 2, voice: 1 note: 62 velocity 87 event ('note', 43024, 5, 62, 87)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((87 &0x7e)<<1)),	//# 3288, ticks 43024, elapsed 0, voice: 1 note: 62 velocity 87 event ('note', 43024, 6, 62, 87)
	1,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3289, ticks 43032, elapsed 1, voice: 3 note: 64 velocity 0 event ('note', 43032, 1, 64, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	12,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((84 &0x7e)<<1)),	//# 3292, ticks 43104, elapsed 12, voice: 3 note: 50 velocity 84 event ('note', 43104, 1, 50, 84)
	13,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3293, ticks 43184, elapsed 13, voice: 3 note: 50 velocity 0 event ('note', 43184, 3, 50, 0)
	1,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3294, ticks 43192, elapsed 1, voice: 0 note: 62 velocity 0 event ('note', 43192, 1, 62, 0)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3295, ticks 43196, elapsed 0, voice: 2 note: 78 velocity 0 event ('note', 43196, 4, 78, 0)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 3296, ticks 43196, elapsed 0, voice: 0 note: 76 velocity 88 event ('note', 43196, 4, 76, 88)
	0,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((79 &0x7e)<<1)),	//# 3297, ticks 43200, elapsed 0, voice: 2 note: 48 velocity 79 event ('note', 43200, 1, 48, 79)
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	13,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3301, ticks 43280, elapsed 13, voice: 0 note: 76 velocity 0 event ('note', 43280, 4, 76, 0)
	2,((( 2 &4)<<5)|( 48 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3302, ticks 43296, elapsed 2, voice: 2 note: 48 velocity 0 event ('note', 43296, 1, 48, 0)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((70 &0x7e)<<1)),	//# 3303, ticks 43296, elapsed 0, voice: 0 note: 50 velocity 70 event ('note', 43296, 1, 50, 70)
	14,((( 2 &4)<<5)|( 79 &0x7f)), ((2 &3)|((97 &0x7e)<<1)),	//# 3304, ticks 43380, elapsed 14, voice: 2 note: 79 velocity 97 event ('note', 43380, 4, 79, 97)
	2,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((84 &0x7e)<<1)),	//# 3305, ticks 43392, elapsed 2, voice: 3 note: 64 velocity 84 event ('note', 43392, 1, 64, 84)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((70 &0x7e)<<1)),	//# 3306, ticks 43392, elapsed 0, voice: 0 note: 47 velocity 70 event ('note', 43392, 1, 47, 70)
	// Note off skipped, note 50 not found in channels, probably interrupted
	10,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3308, ticks 43452, elapsed 10, voice: 3 note: 64 velocity 0 event ('note', 43452, 1, 64, 0)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((84 &0x7e)<<1)),	//# 3309, ticks 43456, elapsed 0, voice: 3 note: 62 velocity 84 event ('note', 43456, 1, 62, 84)
	4,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3310, ticks 43484, elapsed 4, voice: 0 note: 47 velocity 0 event ('note', 43484, 1, 47, 0)
	0,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((52 &0x7e)<<1)),	//# 3311, ticks 43488, elapsed 0, voice: 0 note: 50 velocity 52 event ('note', 43488, 1, 50, 52)
	5,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((74 &0x7e)<<1)),	//# 3312, ticks 43520, elapsed 5, voice: 0 note: 64 velocity 74 event ('note', 43520, 1, 64, 74)
	1,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3313, ticks 43528, elapsed 1, voice: 1 note: 62 velocity 0 event ('note', 43528, 1, 62, 0)
	4,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((74 &0x7e)<<1)),	//# 3314, ticks 43556, elapsed 4, voice: 1 note: 78 velocity 74 event ('note', 43556, 4, 78, 74)
	4,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((90 &0x7e)<<1)),	//# 3315, ticks 43584, elapsed 4, voice: 0 note: 66 velocity 90 event ('note', 43584, 1, 66, 90)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((68 &0x7e)<<1)),	//# 3316, ticks 43584, elapsed 0, voice: 1 note: 45 velocity 68 event ('note', 43584, 1, 45, 68)
	0,((( 2 &4)<<5)|( 79 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3317, ticks 43584, elapsed 0, voice: 2 note: 79 velocity 0 event ('note', 43584, 4, 79, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	10,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3320, ticks 43644, elapsed 10, voice: 0 note: 66 velocity 0 event ('note', 43644, 1, 66, 0)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((69 &0x7e)<<1)),	//# 3321, ticks 43648, elapsed 0, voice: 0 note: 64 velocity 69 event ('note', 43648, 1, 64, 69)
	// Note off skipped, note 78 not found in channels, probably interrupted
	4,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3323, ticks 43676, elapsed 4, voice: 1 note: 45 velocity 0 event ('note', 43676, 1, 45, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((44 &0x7e)<<1)),	//# 3324, ticks 43680, elapsed 0, voice: 1 note: 50 velocity 44 event ('note', 43680, 1, 50, 44)
	5,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((84 &0x7e)<<1)),	//# 3325, ticks 43712, elapsed 5, voice: 2 note: 66 velocity 84 event ('note', 43712, 1, 66, 84)
	1,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3326, ticks 43720, elapsed 1, voice: 0 note: 64 velocity 0 event ('note', 43720, 1, 64, 0)
	6,((( 0 &4)<<5)|( 83 &0x7f)), ((0 &3)|((82 &0x7e)<<1)),	//# 3327, ticks 43760, elapsed 6, voice: 0 note: 83 velocity 82 event ('note', 43760, 4, 83, 82)
	2,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3328, ticks 43772, elapsed 2, voice: 1 note: 50 velocity 0 event ('note', 43772, 1, 50, 0)
	0,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((77 &0x7e)<<1)),	//# 3329, ticks 43776, elapsed 0, voice: 1 note: 67 velocity 77 event ('note', 43776, 1, 67, 77)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((72 &0x7e)<<1)),	//# 3330, ticks 43776, elapsed 0, voice: 1 note: 43 velocity 72 event ('note', 43776, 1, 43, 72)
	1,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3331, ticks 43784, elapsed 1, voice: 2 note: 66 velocity 0 event ('note', 43784, 1, 66, 0)
	9,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((86 &0x7e)<<1)),	//# 3332, ticks 43840, elapsed 9, voice: 2 note: 66 velocity 86 event ('note', 43840, 1, 66, 86)
	// Note off skipped, note 67 not found in channels, probably interrupted
	4,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3334, ticks 43864, elapsed 4, voice: 1 note: 43 velocity 0 event ('note', 43864, 1, 43, 0)
	1,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((54 &0x7e)<<1)),	//# 3335, ticks 43872, elapsed 1, voice: 1 note: 50 velocity 54 event ('note', 43872, 1, 50, 54)
	5,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((71 &0x7e)<<1)),	//# 3336, ticks 43904, elapsed 5, voice: 1 note: 67 velocity 71 event ('note', 43904, 1, 67, 71)
	2,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3337, ticks 43920, elapsed 2, voice: 2 note: 66 velocity 0 event ('note', 43920, 1, 66, 0)
	6,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((83 &0x7e)<<1)),	//# 3338, ticks 43960, elapsed 6, voice: 2 note: 81 velocity 83 event ('note', 43960, 4, 81, 83)
	1,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((85 &0x7e)<<1)),	//# 3339, ticks 43968, elapsed 1, voice: 1 note: 69 velocity 85 event ('note', 43968, 1, 69, 85)
	0,((( 0 &4)<<5)|( 42 &0x7f)), ((0 &3)|((70 &0x7e)<<1)),	//# 3340, ticks 43968, elapsed 0, voice: 0 note: 42 velocity 70 event ('note', 43968, 1, 42, 70)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	11,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((89 &0x7e)<<1)),	//# 3344, ticks 44032, elapsed 11, voice: 0 note: 71 velocity 89 event ('note', 44032, 1, 71, 89)
	// Note off skipped, note 42 not found in channels, probably interrupted
	3,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3346, ticks 44052, elapsed 3, voice: 1 note: 69 velocity 0 event ('note', 44052, 1, 69, 0)
	1,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3347, ticks 44060, elapsed 1, voice: 2 note: 81 velocity 0 event ('note', 44060, 4, 81, 0)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((47 &0x7e)<<1)),	//# 3348, ticks 44064, elapsed 0, voice: 1 note: 50 velocity 47 event ('note', 44064, 1, 50, 47)
	5,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((67 &0x7e)<<1)),	//# 3349, ticks 44096, elapsed 5, voice: 2 note: 69 velocity 67 event ('note', 44096, 1, 69, 67)
	2,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3350, ticks 44112, elapsed 2, voice: 0 note: 71 velocity 0 event ('note', 44112, 1, 71, 0)
	6,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((101 &0x7e)<<1)),	//# 3351, ticks 44152, elapsed 6, voice: 0 note: 73 velocity 101 event ('note', 44152, 4, 73, 101)
	1,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((82 &0x7e)<<1)),	//# 3352, ticks 44160, elapsed 1, voice: 1 note: 67 velocity 82 event ('note', 44160, 1, 67, 82)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((63 &0x7e)<<1)),	//# 3353, ticks 44160, elapsed 0, voice: 2 note: 40 velocity 63 event ('note', 44160, 1, 40, 63)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	11,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((77 &0x7e)<<1)),	//# 3356, ticks 44224, elapsed 11, voice: 2 note: 69 velocity 77 event ('note', 44224, 1, 69, 77)
	2,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3357, ticks 44240, elapsed 2, voice: 1 note: 67 velocity 0 event ('note', 44240, 1, 67, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((39 &0x7e)<<1)),	//# 3359, ticks 44256, elapsed 2, voice: 1 note: 50 velocity 39 event ('note', 44256, 1, 50, 39)
	5,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((79 &0x7e)<<1)),	//# 3360, ticks 44288, elapsed 5, voice: 1 note: 67 velocity 79 event ('note', 44288, 1, 67, 79)
	1,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3361, ticks 44296, elapsed 1, voice: 2 note: 69 velocity 0 event ('note', 44296, 1, 69, 0)
	8,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((78 &0x7e)<<1)),	//# 3362, ticks 44344, elapsed 8, voice: 2 note: 74 velocity 78 event ('note', 44344, 4, 74, 78)
	// Note off skipped, note 50 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 38 &0x7f)), ((2 &3)|((69 &0x7e)<<1)),	//# 3364, ticks 44352, elapsed 1, voice: 2 note: 38 velocity 69 event ('note', 44352, 1, 38, 69)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((88 &0x7e)<<1)),	//# 3365, ticks 44352, elapsed 0, voice: 2 note: 66 velocity 88 event ('note', 44352, 1, 66, 88)
	2,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3366, ticks 44368, elapsed 2, voice: 1 note: 67 velocity 0 event ('note', 44368, 1, 67, 0)
	2,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3367, ticks 44380, elapsed 2, voice: 0 note: 73 velocity 0 event ('note', 44380, 4, 73, 0)
	6,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3368, ticks 44416, elapsed 6, voice: 2 note: 66 velocity 0 event ('note', 44416, 1, 66, 0)
	0,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((68 &0x7e)<<1)),	//# 3369, ticks 44416, elapsed 0, voice: 0 note: 67 velocity 68 event ('note', 44416, 1, 67, 68)
	// Note off skipped, note 38 not found in channels, probably interrupted
	5,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((56 &0x7e)<<1)),	//# 3371, ticks 44448, elapsed 5, voice: 1 note: 50 velocity 56 event ('note', 44448, 1, 50, 56)
	// Note off skipped, note 74 not found in channels, probably interrupted
	5,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3373, ticks 44480, elapsed 5, voice: 0 note: 67 velocity 0 event ('note', 44480, 1, 67, 0)
	0,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 3374, ticks 44480, elapsed 0, voice: 0 note: 66 velocity 88 event ('note', 44480, 1, 66, 88)
	6,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3375, ticks 44520, elapsed 6, voice: 0 note: 66 velocity 0 event ('note', 44520, 1, 66, 0)
	3,((( 0 &4)<<5)|( 68 &0x7f)), ((0 &3)|((46 &0x7e)<<1)),	//# 3376, ticks 44540, elapsed 3, voice: 0 note: 68 velocity 46 event ('note', 44540, 4, 68, 46)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((86 &0x7e)<<1)),	//# 3377, ticks 44544, elapsed 0, voice: 2 note: 74 velocity 86 event ('note', 44544, 1, 74, 86)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((74 &0x7e)<<1)),	//# 3378, ticks 44544, elapsed 0, voice: 0 note: 47 velocity 74 event ('note', 44544, 1, 47, 74)
	2,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3379, ticks 44556, elapsed 2, voice: 1 note: 50 velocity 0 event ('note', 44556, 1, 50, 0)
	14,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((82 &0x7e)<<1)),	//# 3380, ticks 44640, elapsed 14, voice: 1 note: 71 velocity 82 event ('note', 44640, 1, 71, 82)
	2,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3381, ticks 44656, elapsed 2, voice: 2 note: 74 velocity 0 event ('note', 44656, 1, 74, 0)
	12,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((75 &0x7e)<<1)),	//# 3382, ticks 44728, elapsed 12, voice: 2 note: 69 velocity 75 event ('note', 44728, 4, 69, 75)
	1,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((84 &0x7e)<<1)),	//# 3383, ticks 44736, elapsed 1, voice: 0 note: 69 velocity 84 event ('note', 44736, 1, 69, 84)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3384, ticks 44740, elapsed 0, voice: 1 note: 71 velocity 0 event ('note', 44740, 1, 71, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	1,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((85 &0x7e)<<1)),	//# 3386, ticks 44748, elapsed 1, voice: 1 note: 61 velocity 85 event ('note', 44748, 5, 61, 85)
	0,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((85 &0x7e)<<1)),	//# 3387, ticks 44748, elapsed 0, voice: 2 note: 61 velocity 85 event ('note', 44748, 6, 61, 85)
	2,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3388, ticks 44764, elapsed 2, voice: 3 note: 62 velocity 0 event ('note', 44764, 5, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	11,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((82 &0x7e)<<1)),	//# 3390, ticks 44832, elapsed 11, voice: 3 note: 71 velocity 82 event ('note', 44832, 1, 71, 82)
	2,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3391, ticks 44844, elapsed 2, voice: 0 note: 69 velocity 0 event ('note', 44844, 1, 69, 0)
	13,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((80 &0x7e)<<1)),	//# 3392, ticks 44924, elapsed 13, voice: 0 note: 71 velocity 80 event ('note', 44924, 4, 71, 80)
	0,((( 0 &4)<<5)|( 68 &0x7f)), ((0 &3)|((83 &0x7e)<<1)),	//# 3393, ticks 44928, elapsed 0, voice: 0 note: 68 velocity 83 event ('note', 44928, 1, 68, 83)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((73 &0x7e)<<1)),	//# 3394, ticks 44928, elapsed 0, voice: 3 note: 59 velocity 73 event ('note', 44928, 5, 59, 73)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((73 &0x7e)<<1)),	//# 3395, ticks 44928, elapsed 0, voice: 3 note: 59 velocity 73 event ('note', 44928, 6, 59, 73)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	6,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3398, ticks 44964, elapsed 6, voice: 1 note: 61 velocity 0 event ('note', 44964, 5, 61, 0)
	0,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3399, ticks 44964, elapsed 0, voice: 2 note: 61 velocity 0 event ('note', 44964, 6, 61, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	10,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((73 &0x7e)<<1)),	//# 3401, ticks 45024, elapsed 10, voice: 1 note: 71 velocity 73 event ('note', 45024, 1, 71, 73)
	3,((( 0 &4)<<5)|( 68 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3402, ticks 45044, elapsed 3, voice: 0 note: 68 velocity 0 event ('note', 45044, 1, 68, 0)
	11,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((67 &0x7e)<<1)),	//# 3403, ticks 45112, elapsed 11, voice: 0 note: 73 velocity 67 event ('note', 45112, 4, 73, 67)
	1,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((86 &0x7e)<<1)),	//# 3404, ticks 45120, elapsed 1, voice: 2 note: 66 velocity 86 event ('note', 45120, 1, 66, 86)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((74 &0x7e)<<1)),	//# 3405, ticks 45120, elapsed 0, voice: 0 note: 57 velocity 74 event ('note', 45120, 5, 57, 74)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((74 &0x7e)<<1)),	//# 3406, ticks 45120, elapsed 0, voice: 1 note: 57 velocity 74 event ('note', 45120, 6, 57, 74)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	2,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3409, ticks 45136, elapsed 2, voice: 3 note: 59 velocity 0 event ('note', 45136, 5, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	13,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((67 &0x7e)<<1)),	//# 3411, ticks 45216, elapsed 13, voice: 3 note: 71 velocity 67 event ('note', 45216, 1, 71, 67)
	1,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3412, ticks 45224, elapsed 1, voice: 2 note: 66 velocity 0 event ('note', 45224, 1, 66, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	13,((( 2 &4)<<5)|( 56 &0x7f)), ((2 &3)|((72 &0x7e)<<1)),	//# 3414, ticks 45304, elapsed 13, voice: 2 note: 56 velocity 72 event ('note', 45304, 5, 56, 72)
	0,((( 3 &4)<<5)|( 56 &0x7f)), ((3 &3)|((72 &0x7e)<<1)),	//# 3415, ticks 45304, elapsed 0, voice: 3 note: 56 velocity 72 event ('note', 45304, 6, 56, 72)
	1,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((82 &0x7e)<<1)),	//# 3416, ticks 45312, elapsed 1, voice: 2 note: 64 velocity 82 event ('note', 45312, 1, 64, 82)
	// Note off skipped, note 71 not found in channels, probably interrupted
	2,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((78 &0x7e)<<1)),	//# 3418, ticks 45328, elapsed 2, voice: 3 note: 74 velocity 78 event ('note', 45328, 4, 74, 78)
	2,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3419, ticks 45344, elapsed 2, voice: 0 note: 57 velocity 0 event ('note', 45344, 5, 57, 0)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3420, ticks 45344, elapsed 0, voice: 1 note: 57 velocity 0 event ('note', 45344, 6, 57, 0)
	11,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((67 &0x7e)<<1)),	//# 3421, ticks 45408, elapsed 11, voice: 0 note: 71 velocity 67 event ('note', 45408, 1, 71, 67)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3422, ticks 45412, elapsed 0, voice: 2 note: 64 velocity 0 event ('note', 45412, 1, 64, 0)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((68 &0x7e)<<1)),	//# 3423, ticks 45416, elapsed 0, voice: 1 note: 73 velocity 68 event ('note', 45416, 4, 73, 68)
	3,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3424, ticks 45436, elapsed 3, voice: 3 note: 74 velocity 0 event ('note', 45436, 4, 74, 0)
	11,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((78 &0x7e)<<1)),	//# 3425, ticks 45504, elapsed 11, voice: 2 note: 62 velocity 78 event ('note', 45504, 1, 62, 78)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((79 &0x7e)<<1)),	//# 3426, ticks 45504, elapsed 0, voice: 3 note: 47 velocity 79 event ('note', 45504, 1, 47, 79)
	2,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((86 &0x7e)<<1)),	//# 3427, ticks 45516, elapsed 2, voice: 0 note: 74 velocity 86 event ('note', 45516, 4, 74, 86)
	// Note off skipped, note 71 not found in channels, probably interrupted
	3,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3429, ticks 45536, elapsed 3, voice: 1 note: 73 velocity 0 event ('note', 45536, 4, 73, 0)
	11,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((72 &0x7e)<<1)),	//# 3430, ticks 45600, elapsed 11, voice: 1 note: 71 velocity 72 event ('note', 45600, 1, 71, 72)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((80 &0x7e)<<1)),	//# 3431, ticks 45604, elapsed 0, voice: 1 note: 76 velocity 80 event ('note', 45604, 4, 76, 80)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3432, ticks 45608, elapsed 0, voice: 3 note: 47 velocity 0 event ('note', 45608, 1, 47, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3433, ticks 45608, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 45608, 1, 62, 0)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3434, ticks 45612, elapsed 0, voice: 0 note: 74 velocity 0 event ('note', 45612, 4, 74, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3436, ticks 45692, elapsed 13, voice: 1 note: 76 velocity 0 event ('note', 45692, 4, 76, 0)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((91 &0x7e)<<1)),	//# 3437, ticks 45696, elapsed 0, voice: 0 note: 61 velocity 91 event ('note', 45696, 1, 61, 91)
	0,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((76 &0x7e)<<1)),	//# 3438, ticks 45696, elapsed 0, voice: 1 note: 52 velocity 76 event ('note', 45696, 1, 52, 76)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((92 &0x7e)<<1)),	//# 3439, ticks 45696, elapsed 0, voice: 2 note: 74 velocity 92 event ('note', 45696, 4, 74, 92)
	// Note off skipped, note 56 not found in channels, probably interrupted
	// Note off skipped, note 56 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((84 &0x7e)<<1)),	//# 3442, ticks 45780, elapsed 14, voice: 3 note: 78 velocity 84 event ('note', 45780, 4, 78, 84)
	2,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3443, ticks 45792, elapsed 2, voice: 1 note: 52 velocity 0 event ('note', 45792, 1, 52, 0)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((74 &0x7e)<<1)),	//# 3444, ticks 45792, elapsed 0, voice: 1 note: 69 velocity 74 event ('note', 45792, 1, 69, 74)
	2,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3445, ticks 45804, elapsed 2, voice: 2 note: 74 velocity 0 event ('note', 45804, 4, 74, 0)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3446, ticks 45808, elapsed 0, voice: 0 note: 61 velocity 0 event ('note', 45808, 1, 61, 0)
	10,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((93 &0x7e)<<1)),	//# 3447, ticks 45868, elapsed 10, voice: 0 note: 52 velocity 93 event ('note', 45868, 3, 52, 93)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((102 &0x7e)<<1)),	//# 3448, ticks 45872, elapsed 0, voice: 2 note: 71 velocity 102 event ('note', 45872, 8, 71, 102)
	0,((( 1 &4)<<5)|( 68 &0x7f)), ((1 &3)|((76 &0x7e)<<1)),	//# 3449, ticks 45876, elapsed 0, voice: 1 note: 68 velocity 76 event ('note', 45876, 7, 68, 76)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((83 &0x7e)<<1)),	//# 3450, ticks 45880, elapsed 0, voice: 1 note: 71 velocity 83 event ('note', 45880, 5, 71, 83)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((83 &0x7e)<<1)),	//# 3451, ticks 45880, elapsed 0, voice: 1 note: 71 velocity 83 event ('note', 45880, 6, 71, 83)
	1,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((80 &0x7e)<<1)),	//# 3452, ticks 45888, elapsed 1, voice: 1 note: 59 velocity 80 event ('note', 45888, 1, 59, 80)
	0,((( 1 &4)<<5)|( 40 &0x7f)), ((1 &3)|((70 &0x7e)<<1)),	//# 3453, ticks 45888, elapsed 0, voice: 1 note: 40 velocity 70 event ('note', 45888, 1, 40, 70)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((83 &0x7e)<<1)),	//# 3454, ticks 45888, elapsed 0, voice: 1 note: 76 velocity 83 event ('note', 45888, 4, 76, 83)
	// Note off skipped, note 69 not found in channels, probably interrupted
	3,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3456, ticks 45908, elapsed 3, voice: 3 note: 78 velocity 0 event ('note', 45908, 4, 78, 0)
	5,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3457, ticks 45940, elapsed 5, voice: 2 note: 71 velocity 0 event ('note', 45940, 8, 71, 0)
	0,((( 0 &4)<<5)|( 52 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3458, ticks 45944, elapsed 0, voice: 0 note: 52 velocity 0 event ('note', 45944, 3, 52, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	3,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3460, ticks 45964, elapsed 3, voice: 1 note: 76 velocity 0 event ('note', 45964, 4, 76, 0)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((89 &0x7e)<<1)),	//# 3461, ticks 45968, elapsed 0, voice: 0 note: 74 velocity 89 event ('note', 45968, 4, 74, 89)
	// Note off skipped, note 40 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 68 &0x7f)), ((1 &3)|((84 &0x7e)<<1)),	//# 3463, ticks 45984, elapsed 2, voice: 1 note: 68 velocity 84 event ('note', 45984, 1, 68, 84)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	11,((( 1 &4)<<5)|( 68 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3467, ticks 46048, elapsed 11, voice: 1 note: 68 velocity 0 event ('note', 46048, 1, 68, 0)
	2,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 3468, ticks 46064, elapsed 2, voice: 1 note: 57 velocity 89 event ('note', 46064, 3, 57, 89)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((91 &0x7e)<<1)),	//# 3469, ticks 46064, elapsed 0, voice: 2 note: 69 velocity 91 event ('note', 46064, 7, 69, 91)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((55 &0x7e)<<1)),	//# 3470, ticks 46068, elapsed 0, voice: 3 note: 73 velocity 55 event ('note', 46068, 4, 73, 55)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((89 &0x7e)<<1)),	//# 3471, ticks 46068, elapsed 0, voice: 3 note: 73 velocity 89 event ('note', 46068, 8, 73, 89)
	0,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((93 &0x7e)<<1)),	//# 3472, ticks 46072, elapsed 0, voice: 0 note: 45 velocity 93 event ('note', 46072, 2, 45, 93)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((103 &0x7e)<<1)),	//# 3473, ticks 46072, elapsed 0, voice: 1 note: 73 velocity 103 event ('note', 46072, 5, 73, 103)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((103 &0x7e)<<1)),	//# 3474, ticks 46072, elapsed 0, voice: 3 note: 73 velocity 103 event ('note', 46072, 6, 73, 103)
	1,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((91 &0x7e)<<1)),	//# 3475, ticks 46080, elapsed 1, voice: 2 note: 61 velocity 91 event ('note', 46080, 1, 61, 91)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((80 &0x7e)<<1)),	//# 3476, ticks 46080, elapsed 0, voice: 2 note: 69 velocity 80 event ('note', 46080, 1, 69, 80)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((80 &0x7e)<<1)),	//# 3477, ticks 46080, elapsed 0, voice: 2 note: 64 velocity 80 event ('note', 46080, 1, 64, 80)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((74 &0x7e)<<1)),	//# 3478, ticks 46080, elapsed 0, voice: 2 note: 57 velocity 74 event ('note', 46080, 1, 57, 74)
	// Note off skipped, note 74 not found in channels, probably interrupted
	7,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3480, ticks 46124, elapsed 7, voice: 1 note: 73 velocity 0 event ('note', 46124, 8, 73, 0)
	2,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3481, ticks 46136, elapsed 2, voice: 2 note: 57 velocity 0 event ('note', 46136, 3, 57, 0)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3482, ticks 46140, elapsed 0, voice: 3 note: 73 velocity 0 event ('note', 46140, 5, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3485, ticks 46148, elapsed 1, voice: 0 note: 45 velocity 0 event ('note', 46148, 2, 45, 0)
	2,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((110 &0x7e)<<1)),	//# 3486, ticks 46160, elapsed 2, voice: 0 note: 73 velocity 110 event ('note', 46160, 8, 73, 110)
	1,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((87 &0x7e)<<1)),	//# 3487, ticks 46168, elapsed 1, voice: 1 note: 73 velocity 87 event ('note', 46168, 5, 73, 87)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((87 &0x7e)<<1)),	//# 3488, ticks 46168, elapsed 0, voice: 2 note: 73 velocity 87 event ('note', 46168, 6, 73, 87)
	// Note off skipped, note 57 not found in channels, probably interrupted
	13,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((108 &0x7e)<<1)),	//# 3490, ticks 46248, elapsed 13, voice: 3 note: 71 velocity 108 event ('note', 46248, 8, 71, 108)
	0,((( 1 &4)<<5)|( 56 &0x7f)), ((1 &3)|((101 &0x7e)<<1)),	//# 3491, ticks 46252, elapsed 0, voice: 1 note: 56 velocity 101 event ('note', 46252, 3, 56, 101)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((75 &0x7e)<<1)),	//# 3492, ticks 46252, elapsed 0, voice: 2 note: 64 velocity 75 event ('note', 46252, 7, 64, 75)
	2,((( 2 &4)<<5)|( 44 &0x7f)), ((2 &3)|((101 &0x7e)<<1)),	//# 3493, ticks 46264, elapsed 2, voice: 2 note: 44 velocity 101 event ('note', 46264, 2, 44, 101)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((87 &0x7e)<<1)),	//# 3494, ticks 46264, elapsed 0, voice: 1 note: 71 velocity 87 event ('note', 46264, 5, 71, 87)
	0,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((87 &0x7e)<<1)),	//# 3495, ticks 46264, elapsed 0, voice: 1 note: 71 velocity 87 event ('note', 46264, 6, 71, 87)
	0,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3496, ticks 46268, elapsed 0, voice: 0 note: 73 velocity 0 event ('note', 46268, 8, 73, 0)
	0,((( 0 &4)<<5)|( 56 &0x7f)), ((0 &3)|((101 &0x7e)<<1)),	//# 3497, ticks 46272, elapsed 0, voice: 0 note: 56 velocity 101 event ('note', 46272, 1, 56, 101)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	7,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3501, ticks 46316, elapsed 7, voice: 1 note: 71 velocity 0 event ('note', 46316, 8, 71, 0)
	1,((( 0 &4)<<5)|( 56 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3502, ticks 46324, elapsed 1, voice: 0 note: 56 velocity 0 event ('note', 46324, 3, 56, 0)
	1,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3503, ticks 46332, elapsed 1, voice: 3 note: 71 velocity 0 event ('note', 46332, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	2,((( 2 &4)<<5)|( 44 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3506, ticks 46344, elapsed 2, voice: 2 note: 44 velocity 0 event ('note', 46344, 2, 44, 0)
	1,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((104 &0x7e)<<1)),	//# 3507, ticks 46352, elapsed 1, voice: 0 note: 71 velocity 104 event ('note', 46352, 8, 71, 104)
	1,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((94 &0x7e)<<1)),	//# 3508, ticks 46360, elapsed 1, voice: 1 note: 71 velocity 94 event ('note', 46360, 5, 71, 94)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((94 &0x7e)<<1)),	//# 3509, ticks 46360, elapsed 0, voice: 2 note: 71 velocity 94 event ('note', 46360, 6, 71, 94)
	// Note off skipped, note 56 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	15,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((91 &0x7e)<<1)),	//# 3514, ticks 46448, elapsed 15, voice: 3 note: 69 velocity 91 event ('note', 46448, 7, 69, 91)
	0,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((104 &0x7e)<<1)),	//# 3515, ticks 46448, elapsed 0, voice: 3 note: 74 velocity 104 event ('note', 46448, 8, 74, 104)
	1,((( 1 &4)<<5)|( 54 &0x7f)), ((1 &3)|((98 &0x7e)<<1)),	//# 3516, ticks 46456, elapsed 1, voice: 1 note: 54 velocity 98 event ('note', 46456, 3, 54, 98)
	0,((( 2 &4)<<5)|( 42 &0x7f)), ((2 &3)|((104 &0x7e)<<1)),	//# 3517, ticks 46460, elapsed 0, voice: 2 note: 42 velocity 104 event ('note', 46460, 2, 42, 104)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((92 &0x7e)<<1)),	//# 3518, ticks 46460, elapsed 0, voice: 1 note: 74 velocity 92 event ('note', 46460, 5, 74, 92)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((92 &0x7e)<<1)),	//# 3519, ticks 46460, elapsed 0, voice: 1 note: 74 velocity 92 event ('note', 46460, 6, 74, 92)
	0,((( 1 &4)<<5)|( 54 &0x7f)), ((1 &3)|((101 &0x7e)<<1)),	//# 3520, ticks 46464, elapsed 0, voice: 1 note: 54 velocity 101 event ('note', 46464, 1, 54, 101)
	2,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3521, ticks 46476, elapsed 2, voice: 0 note: 71 velocity 0 event ('note', 46476, 8, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	6,((( 3 &4)<<5)|( 74 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3524, ticks 46512, elapsed 6, voice: 3 note: 74 velocity 0 event ('note', 46512, 8, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 54 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3528, ticks 46528, elapsed 2, voice: 1 note: 54 velocity 0 event ('note', 46528, 3, 54, 0)
	2,((( 2 &4)<<5)|( 42 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3529, ticks 46540, elapsed 2, voice: 2 note: 42 velocity 0 event ('note', 46540, 2, 42, 0)
	0,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((106 &0x7e)<<1)),	//# 3530, ticks 46544, elapsed 0, voice: 0 note: 74 velocity 106 event ('note', 46544, 8, 74, 106)
	1,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((97 &0x7e)<<1)),	//# 3531, ticks 46552, elapsed 1, voice: 1 note: 74 velocity 97 event ('note', 46552, 5, 74, 97)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((97 &0x7e)<<1)),	//# 3532, ticks 46552, elapsed 0, voice: 2 note: 74 velocity 97 event ('note', 46552, 6, 74, 97)
	// Note off skipped, note 54 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 68 &0x7f)), ((3 &3)|((82 &0x7e)<<1)),	//# 3534, ticks 46636, elapsed 14, voice: 3 note: 68 velocity 82 event ('note', 46636, 7, 68, 82)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((95 &0x7e)<<1)),	//# 3535, ticks 46640, elapsed 0, voice: 3 note: 73 velocity 95 event ('note', 46640, 8, 73, 95)
	0,((( 3 &4)<<5)|( 40 &0x7f)), ((3 &3)|((94 &0x7e)<<1)),	//# 3536, ticks 46644, elapsed 0, voice: 3 note: 40 velocity 94 event ('note', 46644, 2, 40, 94)
	0,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((89 &0x7e)<<1)),	//# 3537, ticks 46648, elapsed 0, voice: 3 note: 52 velocity 89 event ('note', 46648, 3, 52, 89)
	1,((( 3 &4)<<5)|( 52 &0x7f)), ((3 &3)|((94 &0x7e)<<1)),	//# 3538, ticks 46656, elapsed 1, voice: 3 note: 52 velocity 94 event ('note', 46656, 1, 52, 94)
	0,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((106 &0x7e)<<1)),	//# 3539, ticks 46656, elapsed 0, voice: 3 note: 73 velocity 106 event ('note', 46656, 5, 73, 106)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((106 &0x7e)<<1)),	//# 3540, ticks 46656, elapsed 0, voice: 1 note: 73 velocity 106 event ('note', 46656, 6, 73, 106)
	1,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3541, ticks 46664, elapsed 1, voice: 0 note: 74 velocity 0 event ('note', 46664, 8, 74, 0)
	3,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3542, ticks 46684, elapsed 3, voice: 2 note: 74 velocity 0 event ('note', 46684, 5, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	3,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3544, ticks 46704, elapsed 3, voice: 1 note: 73 velocity 0 event ('note', 46704, 8, 73, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	2,((( 3 &4)<<5)|( 73 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3547, ticks 46720, elapsed 2, voice: 3 note: 73 velocity 0 event ('note', 46720, 5, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((102 &0x7e)<<1)),	//# 3549, ticks 46728, elapsed 1, voice: 0 note: 73 velocity 102 event ('note', 46728, 8, 73, 102)
	// Note off skipped, note 40 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 3551, ticks 46744, elapsed 2, voice: 1 note: 73 velocity 89 event ('note', 46744, 5, 73, 89)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((89 &0x7e)<<1)),	//# 3552, ticks 46744, elapsed 0, voice: 2 note: 73 velocity 89 event ('note', 46744, 6, 73, 89)
	// Note off skipped, note 52 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((88 &0x7e)<<1)),	//# 3554, ticks 46828, elapsed 14, voice: 3 note: 69 velocity 88 event ('note', 46828, 7, 69, 88)
	0,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((99 &0x7e)<<1)),	//# 3555, ticks 46828, elapsed 0, voice: 3 note: 78 velocity 99 event ('note', 46828, 8, 78, 99)
	0,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((97 &0x7e)<<1)),	//# 3556, ticks 46832, elapsed 0, voice: 1 note: 38 velocity 97 event ('note', 46832, 2, 38, 97)
	1,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((86 &0x7e)<<1)),	//# 3557, ticks 46840, elapsed 1, voice: 2 note: 50 velocity 86 event ('note', 46840, 3, 50, 86)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((85 &0x7e)<<1)),	//# 3558, ticks 46840, elapsed 0, voice: 2 note: 78 velocity 85 event ('note', 46840, 5, 78, 85)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((85 &0x7e)<<1)),	//# 3559, ticks 46840, elapsed 0, voice: 2 note: 78 velocity 85 event ('note', 46840, 6, 78, 85)
	1,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((97 &0x7e)<<1)),	//# 3560, ticks 46848, elapsed 1, voice: 2 note: 50 velocity 97 event ('note', 46848, 1, 50, 97)
	2,((( 0 &4)<<5)|( 73 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3561, ticks 46860, elapsed 2, voice: 0 note: 73 velocity 0 event ('note', 46860, 8, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	6,((( 3 &4)<<5)|( 78 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3564, ticks 46900, elapsed 6, voice: 3 note: 78 velocity 0 event ('note', 46900, 5, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3567, ticks 46908, elapsed 1, voice: 2 note: 50 velocity 0 event ('note', 46908, 3, 50, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 38 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3569, ticks 46920, elapsed 2, voice: 1 note: 38 velocity 0 event ('note', 46920, 2, 38, 0)
	0,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((95 &0x7e)<<1)),	//# 3570, ticks 46924, elapsed 0, voice: 0 note: 78 velocity 95 event ('note', 46924, 8, 78, 95)
	0,((( 1 &4)<<5)|( 78 &0x7f)), ((1 &3)|((84 &0x7e)<<1)),	//# 3571, ticks 46928, elapsed 0, voice: 1 note: 78 velocity 84 event ('note', 46928, 5, 78, 84)
	0,((( 2 &4)<<5)|( 78 &0x7f)), ((2 &3)|((84 &0x7e)<<1)),	//# 3572, ticks 46928, elapsed 0, voice: 2 note: 78 velocity 84 event ('note', 46928, 6, 78, 84)
	// Note off skipped, note 50 not found in channels, probably interrupted
	15,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((77 &0x7e)<<1)),	//# 3574, ticks 47016, elapsed 15, voice: 3 note: 57 velocity 77 event ('note', 47016, 7, 57, 77)
	0,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((100 &0x7e)<<1)),	//# 3575, ticks 47020, elapsed 0, voice: 3 note: 76 velocity 100 event ('note', 47020, 8, 76, 100)
	1,((( 1 &4)<<5)|( 37 &0x7f)), ((1 &3)|((104 &0x7e)<<1)),	//# 3576, ticks 47028, elapsed 1, voice: 1 note: 37 velocity 104 event ('note', 47028, 2, 37, 104)
	0,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((87 &0x7e)<<1)),	//# 3577, ticks 47028, elapsed 0, voice: 2 note: 49 velocity 87 event ('note', 47028, 3, 49, 87)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((86 &0x7e)<<1)),	//# 3578, ticks 47032, elapsed 0, voice: 2 note: 76 velocity 86 event ('note', 47032, 5, 76, 86)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((86 &0x7e)<<1)),	//# 3579, ticks 47032, elapsed 0, voice: 2 note: 76 velocity 86 event ('note', 47032, 6, 76, 86)
	1,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((95 &0x7e)<<1)),	//# 3580, ticks 47040, elapsed 1, voice: 2 note: 49 velocity 95 event ('note', 47040, 1, 49, 95)
	1,((( 0 &4)<<5)|( 78 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3581, ticks 47048, elapsed 1, voice: 0 note: 78 velocity 0 event ('note', 47048, 8, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	5,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3584, ticks 47080, elapsed 5, voice: 3 note: 76 velocity 0 event ('note', 47080, 8, 76, 0)
	3,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3585, ticks 47100, elapsed 3, voice: 2 note: 49 velocity 0 event ('note', 47100, 3, 49, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((96 &0x7e)<<1)),	//# 3589, ticks 47112, elapsed 2, voice: 0 note: 76 velocity 96 event ('note', 47112, 8, 76, 96)
	1,((( 1 &4)<<5)|( 37 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3590, ticks 47120, elapsed 1, voice: 1 note: 37 velocity 0 event ('note', 47120, 2, 37, 0)
	0,((( 1 &4)<<5)|( 76 &0x7f)), ((1 &3)|((84 &0x7e)<<1)),	//# 3591, ticks 47124, elapsed 0, voice: 1 note: 76 velocity 84 event ('note', 47124, 5, 76, 84)
	0,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((84 &0x7e)<<1)),	//# 3592, ticks 47124, elapsed 0, voice: 2 note: 76 velocity 84 event ('note', 47124, 6, 76, 84)
	// Note off skipped, note 49 not found in channels, probably interrupted
	14,((( 3 &4)<<5)|( 68 &0x7f)), ((3 &3)|((90 &0x7e)<<1)),	//# 3594, ticks 47208, elapsed 14, voice: 3 note: 68 velocity 90 event ('note', 47208, 8, 68, 90)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((78 &0x7e)<<1)),	//# 3595, ticks 47212, elapsed 0, voice: 1 note: 62 velocity 78 event ('note', 47212, 7, 62, 78)
	1,((( 1 &4)<<5)|( 47 &0x7f)), ((1 &3)|((89 &0x7e)<<1)),	//# 3596, ticks 47220, elapsed 1, voice: 1 note: 47 velocity 89 event ('note', 47220, 3, 47, 89)
	0,((( 2 &4)<<5)|( 35 &0x7f)), ((2 &3)|((103 &0x7e)<<1)),	//# 3597, ticks 47224, elapsed 0, voice: 2 note: 35 velocity 103 event ('note', 47224, 2, 35, 103)
	0,((( 1 &4)<<5)|( 68 &0x7f)), ((1 &3)|((103 &0x7e)<<1)),	//# 3598, ticks 47228, elapsed 0, voice: 1 note: 68 velocity 103 event ('note', 47228, 5, 68, 103)
	0,((( 3 &4)<<5)|( 68 &0x7f)), ((3 &3)|((103 &0x7e)<<1)),	//# 3599, ticks 47228, elapsed 0, voice: 3 note: 68 velocity 103 event ('note', 47228, 6, 68, 103)
	0,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3600, ticks 47228, elapsed 0, voice: 0 note: 76 velocity 0 event ('note', 47228, 8, 76, 0)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((93 &0x7e)<<1)),	//# 3601, ticks 47232, elapsed 0, voice: 0 note: 47 velocity 93 event ('note', 47232, 1, 47, 93)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	6,((( 1 &4)<<5)|( 68 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3604, ticks 47268, elapsed 6, voice: 1 note: 68 velocity 0 event ('note', 47268, 8, 68, 0)
	3,((( 3 &4)<<5)|( 68 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3605, ticks 47288, elapsed 3, voice: 3 note: 68 velocity 0 event ('note', 47288, 5, 68, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 68 &0x7f)), ((1 &3)|((99 &0x7e)<<1)),	//# 3608, ticks 47300, elapsed 2, voice: 1 note: 68 velocity 99 event ('note', 47300, 8, 68, 99)
	0,((( 0 &4)<<5)|( 47 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3609, ticks 47304, elapsed 0, voice: 0 note: 47 velocity 0 event ('note', 47304, 3, 47, 0)
	2,((( 0 &4)<<5)|( 68 &0x7f)), ((0 &3)|((104 &0x7e)<<1)),	//# 3610, ticks 47320, elapsed 2, voice: 0 note: 68 velocity 104 event ('note', 47320, 5, 68, 104)
	0,((( 3 &4)<<5)|( 68 &0x7f)), ((3 &3)|((104 &0x7e)<<1)),	//# 3611, ticks 47320, elapsed 0, voice: 3 note: 68 velocity 104 event ('note', 47320, 6, 68, 104)
	// Note off skipped, note 47 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 35 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3613, ticks 47328, elapsed 1, voice: 2 note: 35 velocity 0 event ('note', 47328, 2, 35, 0)
	10,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((106 &0x7e)<<1)),	//# 3614, ticks 47388, elapsed 10, voice: 2 note: 69 velocity 106 event ('note', 47388, 8, 69, 106)
	2,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((73 &0x7e)<<1)),	//# 3615, ticks 47404, elapsed 2, voice: 1 note: 61 velocity 73 event ('note', 47404, 7, 61, 73)
	1,((( 1 &4)<<5)|( 33 &0x7f)), ((1 &3)|((101 &0x7e)<<1)),	//# 3616, ticks 47412, elapsed 1, voice: 1 note: 33 velocity 101 event ('note', 47412, 2, 33, 101)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((87 &0x7e)<<1)),	//# 3617, ticks 47412, elapsed 0, voice: 1 note: 45 velocity 87 event ('note', 47412, 3, 45, 87)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((99 &0x7e)<<1)),	//# 3618, ticks 47412, elapsed 0, voice: 1 note: 69 velocity 99 event ('note', 47412, 5, 69, 99)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((99 &0x7e)<<1)),	//# 3619, ticks 47412, elapsed 0, voice: 1 note: 69 velocity 99 event ('note', 47412, 6, 69, 99)
	2,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((92 &0x7e)<<1)),	//# 3620, ticks 47424, elapsed 2, voice: 1 note: 45 velocity 92 event ('note', 47424, 1, 45, 92)
	0,((( 0 &4)<<5)|( 68 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3621, ticks 47424, elapsed 0, voice: 0 note: 68 velocity 0 event ('note', 47424, 8, 68, 0)
	2,((( 3 &4)<<5)|( 68 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3622, ticks 47440, elapsed 2, voice: 3 note: 68 velocity 0 event ('note', 47440, 5, 68, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	3,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3624, ticks 47460, elapsed 3, voice: 2 note: 69 velocity 0 event ('note', 47460, 8, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	6,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((111 &0x7e)<<1)),	//# 3628, ticks 47496, elapsed 6, voice: 0 note: 69 velocity 111 event ('note', 47496, 8, 69, 111)
	0,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3629, ticks 47500, elapsed 0, voice: 1 note: 45 velocity 0 event ('note', 47500, 3, 45, 0)
	1,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((93 &0x7e)<<1)),	//# 3630, ticks 47508, elapsed 1, voice: 1 note: 69 velocity 93 event ('note', 47508, 5, 69, 93)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((93 &0x7e)<<1)),	//# 3631, ticks 47508, elapsed 0, voice: 2 note: 69 velocity 93 event ('note', 47508, 6, 69, 93)
	// Note off skipped, note 33 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	15,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((76 &0x7e)<<1)),	//# 3634, ticks 47596, elapsed 15, voice: 3 note: 59 velocity 76 event ('note', 47596, 7, 59, 76)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((99 &0x7e)<<1)),	//# 3635, ticks 47596, elapsed 0, voice: 3 note: 62 velocity 99 event ('note', 47596, 8, 62, 99)
	0,((( 1 &4)<<5)|( 44 &0x7f)), ((1 &3)|((94 &0x7e)<<1)),	//# 3636, ticks 47600, elapsed 0, voice: 1 note: 44 velocity 94 event ('note', 47600, 3, 44, 94)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3637, ticks 47600, elapsed 0, voice: 0 note: 69 velocity 0 event ('note', 47600, 8, 69, 0)
	0,((( 0 &4)<<5)|( 32 &0x7f)), ((0 &3)|((103 &0x7e)<<1)),	//# 3638, ticks 47604, elapsed 0, voice: 0 note: 32 velocity 103 event ('note', 47604, 2, 32, 103)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((83 &0x7e)<<1)),	//# 3639, ticks 47604, elapsed 0, voice: 2 note: 62 velocity 83 event ('note', 47604, 5, 62, 83)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((83 &0x7e)<<1)),	//# 3640, ticks 47604, elapsed 0, voice: 2 note: 62 velocity 83 event ('note', 47604, 6, 62, 83)
	2,((( 2 &4)<<5)|( 44 &0x7f)), ((2 &3)|((98 &0x7e)<<1)),	//# 3641, ticks 47616, elapsed 2, voice: 2 note: 44 velocity 98 event ('note', 47616, 1, 44, 98)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	7,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3644, ticks 47660, elapsed 7, voice: 3 note: 62 velocity 0 event ('note', 47660, 5, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	4,((( 1 &4)<<5)|( 44 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3648, ticks 47684, elapsed 4, voice: 1 note: 44 velocity 0 event ('note', 47684, 3, 44, 0)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((98 &0x7e)<<1)),	//# 3649, ticks 47688, elapsed 0, voice: 1 note: 62 velocity 98 event ('note', 47688, 8, 62, 98)
	1,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((84 &0x7e)<<1)),	//# 3650, ticks 47696, elapsed 1, voice: 3 note: 62 velocity 84 event ('note', 47696, 5, 62, 84)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((84 &0x7e)<<1)),	//# 3651, ticks 47696, elapsed 0, voice: 3 note: 62 velocity 84 event ('note', 47696, 6, 62, 84)
	2,((( 0 &4)<<5)|( 32 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3652, ticks 47712, elapsed 2, voice: 0 note: 32 velocity 0 event ('note', 47712, 2, 32, 0)
	2,((( 2 &4)<<5)|( 44 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3653, ticks 47724, elapsed 2, voice: 2 note: 44 velocity 0 event ('note', 47724, 1, 44, 0)
	11,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((80 &0x7e)<<1)),	//# 3654, ticks 47788, elapsed 11, voice: 0 note: 57 velocity 80 event ('note', 47788, 7, 57, 80)
	0,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((104 &0x7e)<<1)),	//# 3655, ticks 47788, elapsed 0, voice: 2 note: 61 velocity 104 event ('note', 47788, 8, 61, 104)
	1,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 3656, ticks 47796, elapsed 1, voice: 0 note: 45 velocity 88 event ('note', 47796, 3, 45, 88)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((97 &0x7e)<<1)),	//# 3657, ticks 47796, elapsed 0, voice: 3 note: 61 velocity 97 event ('note', 47796, 5, 61, 97)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((97 &0x7e)<<1)),	//# 3658, ticks 47796, elapsed 0, voice: 0 note: 61 velocity 97 event ('note', 47796, 6, 61, 97)
	0,((( 0 &4)<<5)|( 33 &0x7f)), ((0 &3)|((95 &0x7e)<<1)),	//# 3659, ticks 47800, elapsed 0, voice: 0 note: 33 velocity 95 event ('note', 47800, 2, 33, 95)
	1,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((93 &0x7e)<<1)),	//# 3660, ticks 47808, elapsed 1, voice: 0 note: 45 velocity 93 event ('note', 47808, 1, 45, 93)
	3,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3661, ticks 47828, elapsed 3, voice: 1 note: 62 velocity 0 event ('note', 47828, 8, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	3,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3664, ticks 47848, elapsed 3, voice: 2 note: 61 velocity 0 event ('note', 47848, 5, 61, 0)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3665, ticks 47848, elapsed 0, voice: 3 note: 61 velocity 0 event ('note', 47848, 6, 61, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	5,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3668, ticks 47880, elapsed 5, voice: 0 note: 45 velocity 0 event ('note', 47880, 3, 45, 0)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((108 &0x7e)<<1)),	//# 3669, ticks 47884, elapsed 0, voice: 0 note: 61 velocity 108 event ('note', 47884, 5, 61, 108)
	0,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((108 &0x7e)<<1)),	//# 3670, ticks 47884, elapsed 0, voice: 1 note: 61 velocity 108 event ('note', 47884, 6, 61, 108)
	0,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((103 &0x7e)<<1)),	//# 3671, ticks 47884, elapsed 0, voice: 2 note: 61 velocity 103 event ('note', 47884, 8, 61, 103)
	// Note off skipped, note 33 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	15,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((79 &0x7e)<<1)),	//# 3674, ticks 47972, elapsed 15, voice: 3 note: 66 velocity 79 event ('note', 47972, 5, 66, 79)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((79 &0x7e)<<1)),	//# 3675, ticks 47972, elapsed 0, voice: 3 note: 66 velocity 79 event ('note', 47972, 6, 66, 79)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((85 &0x7e)<<1)),	//# 3676, ticks 47976, elapsed 0, voice: 3 note: 66 velocity 85 event ('note', 47976, 8, 66, 85)
	1,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((88 &0x7e)<<1)),	//# 3677, ticks 47984, elapsed 1, voice: 3 note: 50 velocity 88 event ('note', 47984, 3, 50, 88)
	0,((( 3 &4)<<5)|( 38 &0x7f)), ((3 &3)|((93 &0x7e)<<1)),	//# 3678, ticks 47988, elapsed 0, voice: 3 note: 38 velocity 93 event ('note', 47988, 2, 38, 93)
	0,((( 3 &4)<<5)|( 57 &0x7f)), ((3 &3)|((84 &0x7e)<<1)),	//# 3679, ticks 47988, elapsed 0, voice: 3 note: 57 velocity 84 event ('note', 47988, 7, 57, 84)
	2,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((92 &0x7e)<<1)),	//# 3680, ticks 48000, elapsed 2, voice: 3 note: 50 velocity 92 event ('note', 48000, 1, 50, 92)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3681, ticks 48000, elapsed 0, voice: 0 note: 61 velocity 0 event ('note', 48000, 5, 61, 0)
	0,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3682, ticks 48000, elapsed 0, voice: 1 note: 61 velocity 0 event ('note', 48000, 6, 61, 0)
	2,((( 2 &4)<<5)|( 61 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3683, ticks 48012, elapsed 2, voice: 2 note: 61 velocity 0 event ('note', 48012, 8, 61, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	7,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3687, ticks 48056, elapsed 7, voice: 3 note: 50 velocity 0 event ('note', 48056, 3, 50, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	3,((( 0 &4)<<5)|( 66 &0x7f)), ((0 &3)|((91 &0x7e)<<1)),	//# 3689, ticks 48076, elapsed 3, voice: 0 note: 66 velocity 91 event ('note', 48076, 5, 66, 91)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((91 &0x7e)<<1)),	//# 3690, ticks 48076, elapsed 0, voice: 1 note: 66 velocity 91 event ('note', 48076, 6, 66, 91)
	0,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((99 &0x7e)<<1)),	//# 3691, ticks 48076, elapsed 0, voice: 2 note: 66 velocity 99 event ('note', 48076, 8, 66, 99)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	15,((( 3 &4)<<5)|( 49 &0x7f)), ((3 &3)|((89 &0x7e)<<1)),	//# 3694, ticks 48168, elapsed 15, voice: 3 note: 49 velocity 89 event ('note', 48168, 3, 49, 89)
	1,((( 3 &4)<<5)|( 37 &0x7f)), ((3 &3)|((97 &0x7e)<<1)),	//# 3695, ticks 48176, elapsed 1, voice: 3 note: 37 velocity 97 event ('note', 48176, 2, 37, 97)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((90 &0x7e)<<1)),	//# 3696, ticks 48176, elapsed 0, voice: 0 note: 57 velocity 90 event ('note', 48176, 7, 57, 90)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 3697, ticks 48180, elapsed 0, voice: 0 note: 64 velocity 88 event ('note', 48180, 5, 64, 88)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((88 &0x7e)<<1)),	//# 3698, ticks 48180, elapsed 0, voice: 0 note: 64 velocity 88 event ('note', 48180, 6, 64, 88)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((103 &0x7e)<<1)),	//# 3699, ticks 48180, elapsed 0, voice: 0 note: 64 velocity 103 event ('note', 48180, 8, 64, 103)
	2,((( 1 &4)<<5)|( 49 &0x7f)), ((1 &3)|((92 &0x7e)<<1)),	//# 3700, ticks 48192, elapsed 2, voice: 1 note: 49 velocity 92 event ('note', 48192, 1, 49, 92)
	2,((( 2 &4)<<5)|( 66 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3701, ticks 48204, elapsed 2, voice: 2 note: 66 velocity 0 event ('note', 48204, 8, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	6,((( 1 &4)<<5)|( 49 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3704, ticks 48244, elapsed 6, voice: 1 note: 49 velocity 0 event ('note', 48244, 3, 49, 0)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3705, ticks 48244, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 48244, 5, 64, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	5,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((98 &0x7e)<<1)),	//# 3709, ticks 48276, elapsed 5, voice: 0 note: 64 velocity 98 event ('note', 48276, 8, 64, 98)
	0,((( 3 &4)<<5)|( 37 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3710, ticks 48280, elapsed 0, voice: 3 note: 37 velocity 0 event ('note', 48280, 2, 37, 0)
	0,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((91 &0x7e)<<1)),	//# 3711, ticks 48280, elapsed 0, voice: 1 note: 64 velocity 91 event ('note', 48280, 5, 64, 91)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((91 &0x7e)<<1)),	//# 3712, ticks 48280, elapsed 0, voice: 2 note: 64 velocity 91 event ('note', 48280, 6, 64, 91)
	// Note off skipped, note 49 not found in channels, probably interrupted
	13,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((86 &0x7e)<<1)),	//# 3714, ticks 48360, elapsed 13, voice: 3 note: 47 velocity 86 event ('note', 48360, 3, 47, 86)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((83 &0x7e)<<1)),	//# 3715, ticks 48364, elapsed 0, voice: 3 note: 62 velocity 83 event ('note', 48364, 7, 62, 83)
	0,((( 0 &4)<<5)|( 64 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3716, ticks 48364, elapsed 0, voice: 0 note: 64 velocity 0 event ('note', 48364, 8, 64, 0)
	0,((( 0 &4)<<5)|( 56 &0x7f)), ((0 &3)|((109 &0x7e)<<1)),	//# 3717, ticks 48364, elapsed 0, voice: 0 note: 56 velocity 109 event ('note', 48364, 8, 56, 109)
	1,((( 3 &4)<<5)|( 35 &0x7f)), ((3 &3)|((96 &0x7e)<<1)),	//# 3718, ticks 48372, elapsed 1, voice: 3 note: 35 velocity 96 event ('note', 48372, 2, 35, 96)
	1,((( 1 &4)<<5)|( 56 &0x7f)), ((1 &3)|((103 &0x7e)<<1)),	//# 3719, ticks 48380, elapsed 1, voice: 1 note: 56 velocity 103 event ('note', 48380, 5, 56, 103)
	0,((( 2 &4)<<5)|( 56 &0x7f)), ((2 &3)|((103 &0x7e)<<1)),	//# 3720, ticks 48380, elapsed 0, voice: 2 note: 56 velocity 103 event ('note', 48380, 6, 56, 103)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((89 &0x7e)<<1)),	//# 3721, ticks 48384, elapsed 0, voice: 3 note: 47 velocity 89 event ('note', 48384, 1, 47, 89)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	6,((( 0 &4)<<5)|( 56 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3724, ticks 48420, elapsed 6, voice: 0 note: 56 velocity 0 event ('note', 48420, 8, 56, 0)
	2,((( 1 &4)<<5)|( 56 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3725, ticks 48432, elapsed 2, voice: 1 note: 56 velocity 0 event ('note', 48432, 5, 56, 0)
	0,((( 2 &4)<<5)|( 56 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3726, ticks 48432, elapsed 0, voice: 2 note: 56 velocity 0 event ('note', 48432, 6, 56, 0)
	0,((( 3 &4)<<5)|( 47 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3727, ticks 48436, elapsed 0, voice: 3 note: 47 velocity 0 event ('note', 48436, 3, 47, 0)
	2,((( 0 &4)<<5)|( 56 &0x7f)), ((0 &3)|((90 &0x7e)<<1)),	//# 3728, ticks 48448, elapsed 2, voice: 0 note: 56 velocity 90 event ('note', 48448, 8, 56, 90)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	3,((( 1 &4)<<5)|( 56 &0x7f)), ((1 &3)|((95 &0x7e)<<1)),	//# 3731, ticks 48468, elapsed 3, voice: 1 note: 56 velocity 95 event ('note', 48468, 5, 56, 95)
	0,((( 2 &4)<<5)|( 56 &0x7f)), ((2 &3)|((95 &0x7e)<<1)),	//# 3732, ticks 48468, elapsed 0, voice: 2 note: 56 velocity 95 event ('note', 48468, 6, 56, 95)
	// Note off skipped, note 47 not found in channels, probably interrupted
	13,((( 0 &4)<<5)|( 56 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3734, ticks 48548, elapsed 13, voice: 0 note: 56 velocity 0 event ('note', 48548, 8, 56, 0)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((108 &0x7e)<<1)),	//# 3735, ticks 48552, elapsed 0, voice: 0 note: 57 velocity 108 event ('note', 48552, 8, 57, 108)
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((89 &0x7e)<<1)),	//# 3736, ticks 48556, elapsed 0, voice: 3 note: 45 velocity 89 event ('note', 48556, 3, 45, 89)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((72 &0x7e)<<1)),	//# 3737, ticks 48556, elapsed 0, voice: 3 note: 61 velocity 72 event ('note', 48556, 7, 61, 72)
	1,((( 3 &4)<<5)|( 33 &0x7f)), ((3 &3)|((92 &0x7e)<<1)),	//# 3738, ticks 48564, elapsed 1, voice: 3 note: 33 velocity 92 event ('note', 48564, 2, 33, 92)
	0,((( 1 &4)<<5)|( 56 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3739, ticks 48568, elapsed 0, voice: 1 note: 56 velocity 0 event ('note', 48568, 5, 56, 0)
	0,((( 2 &4)<<5)|( 56 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3740, ticks 48568, elapsed 0, voice: 2 note: 56 velocity 0 event ('note', 48568, 6, 56, 0)
	1,((( 1 &4)<<5)|( 45 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 3741, ticks 48576, elapsed 1, voice: 1 note: 45 velocity 88 event ('note', 48576, 1, 45, 88)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((88 &0x7e)<<1)),	//# 3742, ticks 48576, elapsed 0, voice: 2 note: 57 velocity 88 event ('note', 48576, 5, 57, 88)
	0,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 3743, ticks 48576, elapsed 0, voice: 1 note: 57 velocity 88 event ('note', 48576, 6, 57, 88)
	7,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3744, ticks 48620, elapsed 7, voice: 0 note: 57 velocity 0 event ('note', 48620, 8, 57, 0)
	2,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3745, ticks 48636, elapsed 2, voice: 1 note: 57 velocity 0 event ('note', 48636, 5, 57, 0)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3746, ticks 48636, elapsed 0, voice: 2 note: 57 velocity 0 event ('note', 48636, 6, 57, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((107 &0x7e)<<1)),	//# 3749, ticks 48648, elapsed 2, voice: 0 note: 57 velocity 107 event ('note', 48648, 8, 57, 107)
	3,((( 1 &4)<<5)|( 57 &0x7f)), ((1 &3)|((101 &0x7e)<<1)),	//# 3750, ticks 48668, elapsed 3, voice: 1 note: 57 velocity 101 event ('note', 48668, 5, 57, 101)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((101 &0x7e)<<1)),	//# 3751, ticks 48668, elapsed 0, voice: 2 note: 57 velocity 101 event ('note', 48668, 6, 57, 101)
	0,((( 3 &4)<<5)|( 33 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3752, ticks 48672, elapsed 0, voice: 3 note: 33 velocity 0 event ('note', 48672, 2, 33, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	13,((( 3 &4)<<5)|( 44 &0x7f)), ((3 &3)|((94 &0x7e)<<1)),	//# 3754, ticks 48748, elapsed 13, voice: 3 note: 44 velocity 94 event ('note', 48748, 3, 44, 94)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((78 &0x7e)<<1)),	//# 3755, ticks 48748, elapsed 0, voice: 3 note: 59 velocity 78 event ('note', 48748, 7, 59, 78)
	0,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((109 &0x7e)<<1)),	//# 3756, ticks 48748, elapsed 0, voice: 3 note: 62 velocity 109 event ('note', 48748, 8, 62, 109)
	2,((( 1 &4)<<5)|( 32 &0x7f)), ((1 &3)|((101 &0x7e)<<1)),	//# 3757, ticks 48760, elapsed 2, voice: 1 note: 32 velocity 101 event ('note', 48760, 2, 32, 101)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((98 &0x7e)<<1)),	//# 3758, ticks 48764, elapsed 0, voice: 1 note: 62 velocity 98 event ('note', 48764, 5, 62, 98)
	0,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((98 &0x7e)<<1)),	//# 3759, ticks 48764, elapsed 0, voice: 1 note: 62 velocity 98 event ('note', 48764, 6, 62, 98)
	0,((( 1 &4)<<5)|( 44 &0x7f)), ((1 &3)|((94 &0x7e)<<1)),	//# 3760, ticks 48768, elapsed 0, voice: 1 note: 44 velocity 94 event ('note', 48768, 1, 44, 94)
	0,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3761, ticks 48772, elapsed 0, voice: 0 note: 57 velocity 0 event ('note', 48772, 8, 57, 0)
	2,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3762, ticks 48788, elapsed 2, voice: 2 note: 57 velocity 0 event ('note', 48788, 5, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	4,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3764, ticks 48812, elapsed 4, voice: 3 note: 62 velocity 0 event ('note', 48812, 8, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	3,((( 1 &4)<<5)|( 44 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3767, ticks 48832, elapsed 3, voice: 1 note: 44 velocity 0 event ('note', 48832, 3, 44, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((103 &0x7e)<<1)),	//# 3769, ticks 48840, elapsed 1, voice: 0 note: 62 velocity 103 event ('note', 48840, 8, 62, 103)
	2,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((96 &0x7e)<<1)),	//# 3770, ticks 48852, elapsed 2, voice: 1 note: 62 velocity 96 event ('note', 48852, 5, 62, 96)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((96 &0x7e)<<1)),	//# 3771, ticks 48852, elapsed 0, voice: 2 note: 62 velocity 96 event ('note', 48852, 6, 62, 96)
	// Note off skipped, note 44 not found in channels, probably interrupted
	// Note off skipped, note 32 not found in channels, probably interrupted
	15,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((90 &0x7e)<<1)),	//# 3774, ticks 48940, elapsed 15, voice: 3 note: 71 velocity 90 event ('note', 48940, 8, 71, 90)
	1,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((86 &0x7e)<<1)),	//# 3775, ticks 48948, elapsed 1, voice: 3 note: 71 velocity 86 event ('note', 48948, 5, 71, 86)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((86 &0x7e)<<1)),	//# 3776, ticks 48948, elapsed 0, voice: 3 note: 71 velocity 86 event ('note', 48948, 6, 71, 86)
	0,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((72 &0x7e)<<1)),	//# 3777, ticks 48948, elapsed 0, voice: 3 note: 64 velocity 72 event ('note', 48948, 7, 64, 72)
	0,((( 3 &4)<<5)|( 56 &0x7f)), ((3 &3)|((93 &0x7e)<<1)),	//# 3778, ticks 48952, elapsed 0, voice: 3 note: 56 velocity 93 event ('note', 48952, 3, 56, 93)
	1,((( 3 &4)<<5)|( 56 &0x7f)), ((3 &3)|((90 &0x7e)<<1)),	//# 3779, ticks 48960, elapsed 1, voice: 3 note: 56 velocity 90 event ('note', 48960, 1, 56, 90)
	0,((( 3 &4)<<5)|( 44 &0x7f)), ((3 &3)|((97 &0x7e)<<1)),	//# 3780, ticks 48964, elapsed 0, voice: 3 note: 44 velocity 97 event ('note', 48964, 2, 44, 97)
	0,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3781, ticks 48964, elapsed 0, voice: 0 note: 62 velocity 0 event ('note', 48964, 8, 62, 0)
	1,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3782, ticks 48972, elapsed 1, voice: 1 note: 62 velocity 0 event ('note', 48972, 5, 62, 0)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3783, ticks 48972, elapsed 0, voice: 2 note: 62 velocity 0 event ('note', 48972, 6, 62, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	9,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((95 &0x7e)<<1)),	//# 3787, ticks 49024, elapsed 9, voice: 0 note: 71 velocity 95 event ('note', 49024, 8, 71, 95)
	// Note off skipped, note 56 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	3,((( 1 &4)<<5)|( 71 &0x7f)), ((1 &3)|((98 &0x7e)<<1)),	//# 3790, ticks 49044, elapsed 3, voice: 1 note: 71 velocity 98 event ('note', 49044, 5, 71, 98)
	0,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((98 &0x7e)<<1)),	//# 3791, ticks 49044, elapsed 0, voice: 2 note: 71 velocity 98 event ('note', 49044, 6, 71, 98)
	// Note off skipped, note 56 not found in channels, probably interrupted
	4,((( 3 &4)<<5)|( 44 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3793, ticks 49072, elapsed 4, voice: 3 note: 44 velocity 0 event ('note', 49072, 2, 44, 0)
	9,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((107 &0x7e)<<1)),	//# 3794, ticks 49128, elapsed 9, voice: 3 note: 61 velocity 107 event ('note', 49128, 8, 61, 107)
	2,((( 0 &4)<<5)|( 57 &0x7f)), ((0 &3)|((81 &0x7e)<<1)),	//# 3795, ticks 49144, elapsed 2, voice: 0 note: 57 velocity 81 event ('note', 49144, 3, 57, 81)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((101 &0x7e)<<1)),	//# 3796, ticks 49144, elapsed 0, voice: 0 note: 61 velocity 101 event ('note', 49144, 5, 61, 101)
	0,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((101 &0x7e)<<1)),	//# 3797, ticks 49144, elapsed 0, voice: 1 note: 61 velocity 101 event ('note', 49144, 6, 61, 101)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((82 &0x7e)<<1)),	//# 3798, ticks 49148, elapsed 0, voice: 2 note: 64 velocity 82 event ('note', 49148, 7, 64, 82)
	// Note off skipped, note 71 not found in channels, probably interrupted
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((86 &0x7e)<<1)),	//# 3800, ticks 49152, elapsed 0, voice: 2 note: 57 velocity 86 event ('note', 49152, 1, 57, 86)
	0,((( 2 &4)<<5)|( 45 &0x7f)), ((2 &3)|((91 &0x7e)<<1)),	//# 3801, ticks 49156, elapsed 0, voice: 2 note: 45 velocity 91 event ('note', 49156, 2, 45, 91)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	5,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3804, ticks 49188, elapsed 5, voice: 0 note: 61 velocity 0 event ('note', 49188, 8, 61, 0)
	3,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3805, ticks 49208, elapsed 3, voice: 1 note: 61 velocity 0 event ('note', 49208, 5, 61, 0)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3806, ticks 49208, elapsed 0, voice: 3 note: 61 velocity 0 event ('note', 49208, 6, 61, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((102 &0x7e)<<1)),	//# 3808, ticks 49216, elapsed 1, voice: 0 note: 61 velocity 102 event ('note', 49216, 8, 61, 102)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 61 &0x7f)), ((1 &3)|((94 &0x7e)<<1)),	//# 3811, ticks 49232, elapsed 2, voice: 1 note: 61 velocity 94 event ('note', 49232, 5, 61, 94)
	0,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((94 &0x7e)<<1)),	//# 3812, ticks 49232, elapsed 0, voice: 3 note: 61 velocity 94 event ('note', 49232, 6, 61, 94)
	2,((( 2 &4)<<5)|( 45 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3813, ticks 49244, elapsed 2, voice: 2 note: 45 velocity 0 event ('note', 49244, 2, 45, 0)
	11,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((96 &0x7e)<<1)),	//# 3814, ticks 49312, elapsed 11, voice: 2 note: 69 velocity 96 event ('note', 49312, 8, 69, 96)
	2,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((87 &0x7e)<<1)),	//# 3815, ticks 49328, elapsed 2, voice: 1 note: 69 velocity 87 event ('note', 49328, 5, 69, 87)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((87 &0x7e)<<1)),	//# 3816, ticks 49328, elapsed 0, voice: 1 note: 69 velocity 87 event ('note', 49328, 6, 69, 87)
	0,((( 1 &4)<<5)|( 54 &0x7f)), ((1 &3)|((92 &0x7e)<<1)),	//# 3817, ticks 49332, elapsed 0, voice: 1 note: 54 velocity 92 event ('note', 49332, 3, 54, 92)
	0,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((68 &0x7e)<<1)),	//# 3818, ticks 49332, elapsed 0, voice: 1 note: 66 velocity 68 event ('note', 49332, 7, 66, 68)
	0,((( 1 &4)<<5)|( 42 &0x7f)), ((1 &3)|((93 &0x7e)<<1)),	//# 3819, ticks 49336, elapsed 0, voice: 1 note: 42 velocity 93 event ('note', 49336, 2, 42, 93)
	0,((( 0 &4)<<5)|( 61 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3820, ticks 49336, elapsed 0, voice: 0 note: 61 velocity 0 event ('note', 49336, 8, 61, 0)
	1,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((96 &0x7e)<<1)),	//# 3821, ticks 49344, elapsed 1, voice: 0 note: 54 velocity 96 event ('note', 49344, 1, 54, 96)
	2,((( 3 &4)<<5)|( 61 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3822, ticks 49356, elapsed 2, voice: 3 note: 61 velocity 0 event ('note', 49356, 5, 61, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	2,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3824, ticks 49372, elapsed 2, voice: 2 note: 69 velocity 0 event ('note', 49372, 8, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	5,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((103 &0x7e)<<1)),	//# 3827, ticks 49404, elapsed 5, voice: 2 note: 69 velocity 103 event ('note', 49404, 8, 69, 103)
	0,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3828, ticks 49408, elapsed 0, voice: 0 note: 54 velocity 0 event ('note', 49408, 3, 54, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 42 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3831, ticks 49424, elapsed 2, voice: 1 note: 42 velocity 0 event ('note', 49424, 2, 42, 0)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((96 &0x7e)<<1)),	//# 3832, ticks 49428, elapsed 0, voice: 0 note: 69 velocity 96 event ('note', 49428, 5, 69, 96)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((96 &0x7e)<<1)),	//# 3833, ticks 49428, elapsed 0, voice: 1 note: 69 velocity 96 event ('note', 49428, 6, 69, 96)
	13,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((95 &0x7e)<<1)),	//# 3834, ticks 49504, elapsed 13, voice: 3 note: 59 velocity 95 event ('note', 49504, 8, 59, 95)
	2,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((71 &0x7e)<<1)),	//# 3835, ticks 49516, elapsed 2, voice: 3 note: 59 velocity 71 event ('note', 49516, 5, 59, 71)
	0,((( 3 &4)<<5)|( 59 &0x7f)), ((3 &3)|((71 &0x7e)<<1)),	//# 3836, ticks 49516, elapsed 0, voice: 3 note: 59 velocity 71 event ('note', 49516, 6, 59, 71)
	0,((( 3 &4)<<5)|( 38 &0x7f)), ((3 &3)|((91 &0x7e)<<1)),	//# 3837, ticks 49520, elapsed 0, voice: 3 note: 38 velocity 91 event ('note', 49520, 2, 38, 91)
	0,((( 3 &4)<<5)|( 50 &0x7f)), ((3 &3)|((88 &0x7e)<<1)),	//# 3838, ticks 49520, elapsed 0, voice: 3 note: 50 velocity 88 event ('note', 49520, 3, 50, 88)
	0,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((75 &0x7e)<<1)),	//# 3839, ticks 49520, elapsed 0, voice: 3 note: 66 velocity 75 event ('note', 49520, 7, 66, 75)
	0,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3840, ticks 49524, elapsed 0, voice: 0 note: 69 velocity 0 event ('note', 49524, 8, 69, 0)
	2,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((98 &0x7e)<<1)),	//# 3841, ticks 49536, elapsed 2, voice: 0 note: 50 velocity 98 event ('note', 49536, 1, 50, 98)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3842, ticks 49536, elapsed 0, voice: 1 note: 69 velocity 0 event ('note', 49536, 5, 69, 0)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3843, ticks 49536, elapsed 0, voice: 2 note: 69 velocity 0 event ('note', 49536, 6, 69, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	9,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3847, ticks 49592, elapsed 9, voice: 3 note: 66 velocity 0 event ('note', 49592, 7, 66, 0)
	1,((( 0 &4)<<5)|( 50 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3848, ticks 49600, elapsed 1, voice: 0 note: 50 velocity 0 event ('note', 49600, 3, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((103 &0x7e)<<1)),	//# 3851, ticks 49608, elapsed 1, voice: 0 note: 59 velocity 103 event ('note', 49608, 8, 59, 103)
	1,((( 1 &4)<<5)|( 59 &0x7f)), ((1 &3)|((86 &0x7e)<<1)),	//# 3852, ticks 49616, elapsed 1, voice: 1 note: 59 velocity 86 event ('note', 49616, 5, 59, 86)
	0,((( 2 &4)<<5)|( 59 &0x7f)), ((2 &3)|((86 &0x7e)<<1)),	//# 3853, ticks 49616, elapsed 0, voice: 2 note: 59 velocity 86 event ('note', 49616, 6, 59, 86)
	13,((( 3 &4)<<5)|( 68 &0x7f)), ((3 &3)|((110 &0x7e)<<1)),	//# 3854, ticks 49696, elapsed 13, voice: 3 note: 68 velocity 110 event ('note', 49696, 8, 68, 110)
	2,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((88 &0x7e)<<1)),	//# 3855, ticks 49708, elapsed 2, voice: 1 note: 52 velocity 88 event ('note', 49708, 3, 52, 88)
	0,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((75 &0x7e)<<1)),	//# 3856, ticks 49708, elapsed 0, voice: 2 note: 64 velocity 75 event ('note', 49708, 7, 64, 75)
	0,((( 2 &4)<<5)|( 40 &0x7f)), ((2 &3)|((86 &0x7e)<<1)),	//# 3857, ticks 49712, elapsed 0, voice: 2 note: 40 velocity 86 event ('note', 49712, 2, 40, 86)
	0,((( 2 &4)<<5)|( 68 &0x7f)), ((2 &3)|((81 &0x7e)<<1)),	//# 3858, ticks 49712, elapsed 0, voice: 2 note: 68 velocity 81 event ('note', 49712, 5, 68, 81)
	0,((( 2 &4)<<5)|( 68 &0x7f)), ((2 &3)|((81 &0x7e)<<1)),	//# 3859, ticks 49712, elapsed 0, voice: 2 note: 68 velocity 81 event ('note', 49712, 6, 68, 81)
	2,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((100 &0x7e)<<1)),	//# 3860, ticks 49728, elapsed 2, voice: 2 note: 71 velocity 100 event ('note', 49728, 1, 71, 100)
	0,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((87 &0x7e)<<1)),	//# 3861, ticks 49728, elapsed 0, voice: 1 note: 52 velocity 87 event ('note', 49728, 1, 52, 87)
	0,((( 0 &4)<<5)|( 59 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3862, ticks 49728, elapsed 0, voice: 0 note: 59 velocity 0 event ('note', 49728, 8, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	6,((( 3 &4)<<5)|( 68 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3865, ticks 49768, elapsed 6, voice: 3 note: 68 velocity 0 event ('note', 49768, 8, 68, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	// Note off skipped, note 68 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	3,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3869, ticks 49788, elapsed 3, voice: 1 note: 52 velocity 0 event ('note', 49788, 3, 52, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	1,((( 0 &4)<<5)|( 68 &0x7f)), ((0 &3)|((89 &0x7e)<<1)),	//# 3871, ticks 49796, elapsed 1, voice: 0 note: 68 velocity 89 event ('note', 49796, 8, 68, 89)
	1,((( 1 &4)<<5)|( 68 &0x7f)), ((1 &3)|((84 &0x7e)<<1)),	//# 3872, ticks 49804, elapsed 1, voice: 1 note: 68 velocity 84 event ('note', 49804, 5, 68, 84)
	0,((( 3 &4)<<5)|( 68 &0x7f)), ((3 &3)|((84 &0x7e)<<1)),	//# 3873, ticks 49804, elapsed 0, voice: 3 note: 68 velocity 84 event ('note', 49804, 6, 68, 84)
	// Note off skipped, note 52 not found in channels, probably interrupted
	1,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3875, ticks 49812, elapsed 1, voice: 2 note: 71 velocity 0 event ('note', 49812, 1, 71, 0)
	15,((( 2 &4)<<5)|( 64 &0x7f)), ((2 &3)|((74 &0x7e)<<1)),	//# 3876, ticks 49904, elapsed 15, voice: 2 note: 64 velocity 74 event ('note', 49904, 7, 64, 74)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((83 &0x7e)<<1)),	//# 3877, ticks 49908, elapsed 0, voice: 2 note: 57 velocity 83 event ('note', 49908, 3, 57, 83)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((86 &0x7e)<<1)),	//# 3878, ticks 49912, elapsed 0, voice: 2 note: 69 velocity 86 event ('note', 49912, 5, 69, 86)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((86 &0x7e)<<1)),	//# 3879, ticks 49912, elapsed 0, voice: 1 note: 69 velocity 86 event ('note', 49912, 6, 69, 86)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((77 &0x7e)<<1)),	//# 3880, ticks 49912, elapsed 0, voice: 3 note: 69 velocity 77 event ('note', 49912, 8, 69, 77)
	0,((( 3 &4)<<5)|( 33 &0x7f)), ((3 &3)|((86 &0x7e)<<1)),	//# 3881, ticks 49916, elapsed 0, voice: 3 note: 33 velocity 86 event ('note', 49916, 2, 33, 86)
	0,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((97 &0x7e)<<1)),	//# 3882, ticks 49920, elapsed 0, voice: 1 note: 73 velocity 97 event ('note', 49920, 1, 73, 97)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((71 &0x7e)<<1)),	//# 3883, ticks 49920, elapsed 0, voice: 2 note: 57 velocity 71 event ('note', 49920, 1, 57, 71)
	1,((( 0 &4)<<5)|( 68 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3884, ticks 49928, elapsed 1, voice: 0 note: 68 velocity 0 event ('note', 49928, 8, 68, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	// Note off skipped, note 68 not found in channels, probably interrupted
	9,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3887, ticks 49980, elapsed 9, voice: 2 note: 57 velocity 0 event ('note', 49980, 3, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	6,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((87 &0x7e)<<1)),	//# 3889, ticks 50016, elapsed 6, voice: 0 note: 69 velocity 87 event ('note', 50016, 1, 69, 87)
	3,((( 1 &4)<<5)|( 73 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3890, ticks 50036, elapsed 3, voice: 1 note: 73 velocity 0 event ('note', 50036, 1, 73, 0)
	9,((( 3 &4)<<5)|( 33 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3891, ticks 50092, elapsed 9, voice: 3 note: 33 velocity 0 event ('note', 50092, 2, 33, 0)
	0,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((83 &0x7e)<<1)),	//# 3892, ticks 50096, elapsed 0, voice: 1 note: 52 velocity 83 event ('note', 50096, 3, 52, 83)
	// Note off skipped, note 64 not found in channels, probably interrupted
	2,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3894, ticks 50108, elapsed 2, voice: 0 note: 69 velocity 0 event ('note', 50108, 5, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((94 &0x7e)<<1)),	//# 3896, ticks 50112, elapsed 0, voice: 0 note: 71 velocity 94 event ('note', 50112, 1, 71, 94)
	0,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((63 &0x7e)<<1)),	//# 3897, ticks 50112, elapsed 0, voice: 2 note: 52 velocity 63 event ('note', 50112, 1, 52, 63)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	9,((( 1 &4)<<5)|( 52 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3900, ticks 50168, elapsed 9, voice: 1 note: 52 velocity 0 event ('note', 50168, 3, 52, 0)
	1,((( 2 &4)<<5)|( 52 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3901, ticks 50176, elapsed 1, voice: 2 note: 52 velocity 0 event ('note', 50176, 1, 52, 0)
	5,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((93 &0x7e)<<1)),	//# 3902, ticks 50208, elapsed 5, voice: 1 note: 74 velocity 93 event ('note', 50208, 1, 74, 93)
	2,((( 0 &4)<<5)|( 71 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3903, ticks 50220, elapsed 2, voice: 0 note: 71 velocity 0 event ('note', 50220, 1, 71, 0)
	12,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((85 &0x7e)<<1)),	//# 3904, ticks 50292, elapsed 12, voice: 0 note: 45 velocity 85 event ('note', 50292, 3, 45, 85)
	1,((( 2 &4)<<5)|( 76 &0x7f)), ((2 &3)|((72 &0x7e)<<1)),	//# 3905, ticks 50300, elapsed 1, voice: 2 note: 76 velocity 72 event ('note', 50300, 5, 76, 72)
	0,((( 3 &4)<<5)|( 76 &0x7f)), ((3 &3)|((72 &0x7e)<<1)),	//# 3906, ticks 50300, elapsed 0, voice: 3 note: 76 velocity 72 event ('note', 50300, 6, 76, 72)
	0,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((98 &0x7e)<<1)),	//# 3907, ticks 50304, elapsed 0, voice: 2 note: 73 velocity 98 event ('note', 50304, 1, 73, 98)
	0,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((70 &0x7e)<<1)),	//# 3908, ticks 50304, elapsed 0, voice: 3 note: 45 velocity 70 event ('note', 50304, 1, 45, 70)
	5,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3909, ticks 50336, elapsed 5, voice: 1 note: 74 velocity 0 event ('note', 50336, 1, 74, 0)
	4,((( 0 &4)<<5)|( 45 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3910, ticks 50364, elapsed 4, voice: 0 note: 45 velocity 0 event ('note', 50364, 3, 45, 0)
	3,((( 3 &4)<<5)|( 45 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3911, ticks 50384, elapsed 3, voice: 3 note: 45 velocity 0 event ('note', 50384, 1, 45, 0)
	2,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((89 &0x7e)<<1)),	//# 3912, ticks 50400, elapsed 2, voice: 0 note: 76 velocity 89 event ('note', 50400, 1, 76, 89)
	3,((( 2 &4)<<5)|( 73 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3913, ticks 50420, elapsed 3, voice: 2 note: 73 velocity 0 event ('note', 50420, 1, 73, 0)
	9,((( 1 &4)<<5)|( 64 &0x7f)), ((1 &3)|((56 &0x7e)<<1)),	//# 3914, ticks 50472, elapsed 9, voice: 1 note: 64 velocity 56 event ('note', 50472, 7, 64, 56)
	1,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((89 &0x7e)<<1)),	//# 3915, ticks 50480, elapsed 1, voice: 2 note: 49 velocity 89 event ('note', 50480, 3, 49, 89)
	2,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((89 &0x7e)<<1)),	//# 3916, ticks 50496, elapsed 2, voice: 3 note: 69 velocity 89 event ('note', 50496, 1, 69, 89)
	0,((( 1 &4)<<5)|( 49 &0x7f)), ((1 &3)|((83 &0x7e)<<1)),	//# 3917, ticks 50496, elapsed 0, voice: 1 note: 49 velocity 83 event ('note', 50496, 1, 49, 83)
	7,((( 0 &4)<<5)|( 76 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3918, ticks 50540, elapsed 7, voice: 0 note: 76 velocity 0 event ('note', 50540, 1, 76, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	2,((( 1 &4)<<5)|( 49 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3920, ticks 50556, elapsed 2, voice: 1 note: 49 velocity 0 event ('note', 50556, 1, 49, 0)
	0,((( 2 &4)<<5)|( 49 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3921, ticks 50556, elapsed 0, voice: 2 note: 49 velocity 0 event ('note', 50556, 3, 49, 0)
	6,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((86 &0x7e)<<1)),	//# 3922, ticks 50592, elapsed 6, voice: 0 note: 67 velocity 86 event ('note', 50592, 1, 67, 86)
	0,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3923, ticks 50596, elapsed 0, voice: 3 note: 69 velocity 0 event ('note', 50596, 1, 69, 0)
	11,((( 1 &4)<<5)|( 66 &0x7f)), ((1 &3)|((67 &0x7e)<<1)),	//# 3924, ticks 50664, elapsed 11, voice: 1 note: 66 velocity 67 event ('note', 50664, 7, 66, 67)
	2,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((81 &0x7e)<<1)),	//# 3925, ticks 50680, elapsed 2, voice: 2 note: 50 velocity 81 event ('note', 50680, 3, 50, 81)
	1,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((90 &0x7e)<<1)),	//# 3926, ticks 50688, elapsed 1, voice: 3 note: 66 velocity 90 event ('note', 50688, 1, 66, 90)
	0,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((63 &0x7e)<<1)),	//# 3927, ticks 50688, elapsed 0, voice: 1 note: 50 velocity 63 event ('note', 50688, 1, 50, 63)
	1,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3928, ticks 50696, elapsed 1, voice: 0 note: 67 velocity 0 event ('note', 50696, 1, 67, 0)
	6,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3929, ticks 50736, elapsed 6, voice: 3 note: 66 velocity 0 event ('note', 50736, 7, 66, 0)
	1,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3930, ticks 50744, elapsed 1, voice: 1 note: 50 velocity 0 event ('note', 50744, 3, 50, 0)
	6,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((94 &0x7e)<<1)),	//# 3931, ticks 50784, elapsed 6, voice: 0 note: 62 velocity 94 event ('note', 50784, 1, 62, 94)
	2,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3932, ticks 50796, elapsed 2, voice: 2 note: 50 velocity 0 event ('note', 50796, 1, 50, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	10,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((78 &0x7e)<<1)),	//# 3934, ticks 50856, elapsed 10, voice: 1 note: 67 velocity 78 event ('note', 50856, 7, 67, 78)
	2,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((74 &0x7e)<<1)),	//# 3935, ticks 50868, elapsed 2, voice: 2 note: 57 velocity 74 event ('note', 50868, 3, 57, 74)
	2,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((93 &0x7e)<<1)),	//# 3936, ticks 50880, elapsed 2, voice: 3 note: 64 velocity 93 event ('note', 50880, 1, 64, 93)
	0,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((60 &0x7e)<<1)),	//# 3937, ticks 50880, elapsed 0, voice: 2 note: 57 velocity 60 event ('note', 50880, 1, 57, 60)
	5,((( 0 &4)<<5)|( 62 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3938, ticks 50912, elapsed 5, voice: 0 note: 62 velocity 0 event ('note', 50912, 1, 62, 0)
	3,((( 1 &4)<<5)|( 67 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3939, ticks 50932, elapsed 3, voice: 1 note: 67 velocity 0 event ('note', 50932, 7, 67, 0)
	1,((( 2 &4)<<5)|( 57 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3940, ticks 50940, elapsed 1, voice: 2 note: 57 velocity 0 event ('note', 50940, 3, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	6,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((84 &0x7e)<<1)),	//# 3942, ticks 50976, elapsed 6, voice: 0 note: 67 velocity 84 event ('note', 50976, 1, 67, 84)
	1,((( 3 &4)<<5)|( 64 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3943, ticks 50984, elapsed 1, voice: 3 note: 64 velocity 0 event ('note', 50984, 1, 64, 0)
	12,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((85 &0x7e)<<1)),	//# 3944, ticks 51056, elapsed 12, voice: 1 note: 62 velocity 85 event ('note', 51056, 3, 62, 85)
	0,((( 2 &4)<<5)|( 69 &0x7f)), ((2 &3)|((71 &0x7e)<<1)),	//# 3945, ticks 51056, elapsed 0, voice: 2 note: 69 velocity 71 event ('note', 51056, 7, 69, 71)
	2,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((94 &0x7e)<<1)),	//# 3946, ticks 51072, elapsed 2, voice: 3 note: 66 velocity 94 event ('note', 51072, 1, 66, 94)
	0,((( 2 &4)<<5)|( 62 &0x7f)), ((2 &3)|((57 &0x7e)<<1)),	//# 3947, ticks 51072, elapsed 0, voice: 2 note: 62 velocity 57 event ('note', 51072, 1, 62, 57)
	0,((( 2 &4)<<5)|( 81 &0x7f)), ((2 &3)|((72 &0x7e)<<1)),	//# 3948, ticks 51076, elapsed 0, voice: 2 note: 81 velocity 72 event ('note', 51076, 4, 81, 72)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((60 &0x7e)<<1)),	//# 3949, ticks 51080, elapsed 0, voice: 2 note: 74 velocity 60 event ('note', 51080, 5, 74, 60)
	0,((( 2 &4)<<5)|( 74 &0x7f)), ((2 &3)|((60 &0x7e)<<1)),	//# 3950, ticks 51080, elapsed 0, voice: 2 note: 74 velocity 60 event ('note', 51080, 6, 74, 60)
	2,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3951, ticks 51096, elapsed 2, voice: 0 note: 67 velocity 0 event ('note', 51096, 1, 67, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	4,((( 1 &4)<<5)|( 62 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3954, ticks 51120, elapsed 4, voice: 1 note: 62 velocity 0 event ('note', 51120, 1, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	8,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((82 &0x7e)<<1)),	//# 3956, ticks 51168, elapsed 8, voice: 0 note: 69 velocity 82 event ('note', 51168, 1, 69, 82)
	1,((( 3 &4)<<5)|( 66 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3957, ticks 51176, elapsed 1, voice: 3 note: 66 velocity 0 event ('note', 51176, 1, 66, 0)
	6,((( 0 &4)<<5)|( 69 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3958, ticks 51212, elapsed 6, voice: 0 note: 69 velocity 0 event ('note', 51212, 7, 69, 0)
	6,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((86 &0x7e)<<1)),	//# 3959, ticks 51248, elapsed 6, voice: 0 note: 54 velocity 86 event ('note', 51248, 3, 54, 86)
	0,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((70 &0x7e)<<1)),	//# 3960, ticks 51252, elapsed 0, voice: 1 note: 69 velocity 70 event ('note', 51252, 8, 69, 70)
	2,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((83 &0x7e)<<1)),	//# 3961, ticks 51264, elapsed 2, voice: 3 note: 62 velocity 83 event ('note', 51264, 1, 62, 83)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((84 &0x7e)<<1)),	//# 3962, ticks 51264, elapsed 0, voice: 2 note: 54 velocity 84 event ('note', 51264, 1, 54, 84)
	2,((( 1 &4)<<5)|( 69 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3963, ticks 51280, elapsed 2, voice: 1 note: 69 velocity 0 event ('note', 51280, 1, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	6,((( 0 &4)<<5)|( 54 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3965, ticks 51320, elapsed 6, voice: 0 note: 54 velocity 0 event ('note', 51320, 3, 54, 0)
	6,((( 3 &4)<<5)|( 62 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3966, ticks 51360, elapsed 6, voice: 3 note: 62 velocity 0 event ('note', 51360, 1, 62, 0)
	0,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((100 &0x7e)<<1)),	//# 3967, ticks 51360, elapsed 0, voice: 0 note: 72 velocity 100 event ('note', 51360, 1, 72, 100)
	0,((( 2 &4)<<5)|( 54 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3968, ticks 51364, elapsed 0, voice: 2 note: 54 velocity 0 event ('note', 51364, 1, 54, 0)
	13,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((83 &0x7e)<<1)),	//# 3969, ticks 51440, elapsed 13, voice: 1 note: 55 velocity 83 event ('note', 51440, 3, 55, 83)
	1,((( 2 &4)<<5)|( 71 &0x7f)), ((2 &3)|((67 &0x7e)<<1)),	//# 3970, ticks 51448, elapsed 1, voice: 2 note: 71 velocity 67 event ('note', 51448, 8, 71, 67)
	1,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((91 &0x7e)<<1)),	//# 3971, ticks 51456, elapsed 1, voice: 3 note: 71 velocity 91 event ('note', 51456, 1, 71, 91)
	0,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((68 &0x7e)<<1)),	//# 3972, ticks 51456, elapsed 0, voice: 2 note: 55 velocity 68 event ('note', 51456, 1, 55, 68)
	4,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3973, ticks 51480, elapsed 4, voice: 0 note: 72 velocity 0 event ('note', 51480, 1, 72, 0)
	4,((( 1 &4)<<5)|( 55 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3974, ticks 51504, elapsed 4, voice: 1 note: 55 velocity 0 event ('note', 51504, 3, 55, 0)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3975, ticks 51504, elapsed 0, voice: 3 note: 71 velocity 0 event ('note', 51504, 8, 71, 0)
	4,((( 2 &4)<<5)|( 55 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3976, ticks 51532, elapsed 4, voice: 2 note: 55 velocity 0 event ('note', 51532, 1, 55, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	3,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((85 &0x7e)<<1)),	//# 3978, ticks 51552, elapsed 3, voice: 0 note: 67 velocity 85 event ('note', 51552, 1, 67, 85)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((79 &0x7e)<<1)),	//# 3981, ticks 51628, elapsed 13, voice: 1 note: 50 velocity 79 event ('note', 51628, 3, 50, 79)
	2,((( 2 &4)<<5)|( 72 &0x7f)), ((2 &3)|((60 &0x7e)<<1)),	//# 3982, ticks 51640, elapsed 2, voice: 2 note: 72 velocity 60 event ('note', 51640, 8, 72, 60)
	1,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((88 &0x7e)<<1)),	//# 3983, ticks 51648, elapsed 1, voice: 3 note: 69 velocity 88 event ('note', 51648, 1, 69, 88)
	0,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((60 &0x7e)<<1)),	//# 3984, ticks 51648, elapsed 0, voice: 2 note: 50 velocity 60 event ('note', 51648, 1, 50, 60)
	6,((( 0 &4)<<5)|( 67 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3985, ticks 51688, elapsed 6, voice: 0 note: 67 velocity 0 event ('note', 51688, 1, 67, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	3,((( 1 &4)<<5)|( 50 &0x7f)), ((1 &3)|((0 &0x7e)<<1)),	//# 3987, ticks 51708, elapsed 3, voice: 1 note: 50 velocity 0 event ('note', 51708, 3, 50, 0)
	1,((( 2 &4)<<5)|( 50 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 3988, ticks 51716, elapsed 1, voice: 2 note: 50 velocity 0 event ('note', 51716, 1, 50, 0)
	4,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((101 &0x7e)<<1)),	//# 3989, ticks 51744, elapsed 4, voice: 0 note: 72 velocity 101 event ('note', 51744, 1, 72, 101)
	4,((( 3 &4)<<5)|( 69 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 3990, ticks 51768, elapsed 4, voice: 3 note: 69 velocity 0 event ('note', 51768, 1, 69, 0)
	8,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((75 &0x7e)<<1)),	//# 3991, ticks 51816, elapsed 8, voice: 1 note: 74 velocity 75 event ('note', 51816, 8, 74, 75)
	2,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((81 &0x7e)<<1)),	//# 3992, ticks 51828, elapsed 2, voice: 2 note: 43 velocity 81 event ('note', 51828, 3, 43, 81)
	2,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((92 &0x7e)<<1)),	//# 3993, ticks 51840, elapsed 2, voice: 3 note: 71 velocity 92 event ('note', 51840, 1, 71, 92)
	0,((( 1 &4)<<5)|( 43 &0x7f)), ((1 &3)|((71 &0x7e)<<1)),	//# 3994, ticks 51840, elapsed 0, voice: 1 note: 43 velocity 71 event ('note', 51840, 1, 43, 71)
	2,((( 1 &4)<<5)|( 79 &0x7f)), ((1 &3)|((60 &0x7e)<<1)),	//# 3995, ticks 51852, elapsed 2, voice: 1 note: 79 velocity 60 event ('note', 51852, 4, 79, 60)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((62 &0x7e)<<1)),	//# 3996, ticks 51852, elapsed 0, voice: 1 note: 74 velocity 62 event ('note', 51852, 5, 74, 62)
	0,((( 1 &4)<<5)|( 74 &0x7f)), ((1 &3)|((62 &0x7e)<<1)),	//# 3997, ticks 51852, elapsed 0, voice: 1 note: 74 velocity 62 event ('note', 51852, 6, 74, 62)
	1,((( 0 &4)<<5)|( 72 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 3998, ticks 51860, elapsed 1, voice: 0 note: 72 velocity 0 event ('note', 51860, 1, 72, 0)
	// Note off skipped, note 81 not found in channels, probably interrupted
	7,((( 2 &4)<<5)|( 43 &0x7f)), ((2 &3)|((0 &0x7e)<<1)),	//# 4000, ticks 51904, elapsed 7, voice: 2 note: 43 velocity 0 event ('note', 51904, 3, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	5,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((90 &0x7e)<<1)),	//# 4002, ticks 51936, elapsed 5, voice: 0 note: 74 velocity 90 event ('note', 51936, 1, 74, 90)
	0,((( 3 &4)<<5)|( 71 &0x7f)), ((3 &3)|((0 &0x7e)<<1)),	//# 4003, ticks 51940, elapsed 0, voice: 3 note: 71 velocity 0 event ('note', 51940, 1, 71, 0)
	4,((( 0 &4)<<5)|( 74 &0x7f)), ((0 &3)|((0 &0x7e)<<1)),	//# 4004, ticks 51964, elapsed 4, voice: 0 note: 74 velocity 0 event ('note', 51964, 8, 74, 0)
0xff };

