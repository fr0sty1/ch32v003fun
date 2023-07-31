/*
    minimidi file created by midiconverter.py
    
    Times are in ms (.001s)
    Assumes same instrument is on all tracks
    
    byt bit desc
    1   8   ticks
            0xff song end (max delay 253)
            0xfe extended delay (16 bit delay) two more bytes then note info
            
    2   1.7 channel high and note
        7.1 velocity, 0 is note off and channel low
*/

const unsigned char song[]={
	0xfe,2,21,74,184,	//# 1, ticks 3072, elapsed 533, channel: 0 event ('note', 3072, 1, 74, 92)
	0,62,137,	//# 2, ticks 3072, elapsed 0, channel: 1 event ('note', 3072, 1, 62, 68)
	0,194,174,	//# 3, ticks 3072, elapsed 0, channel: 2 event ('note', 3072, 1, 66, 87)
	0,182,177,	//# 4, ticks 3072, elapsed 0, channel: 3 event ('note', 3072, 1, 54, 88)
	0,57,169,	//# 5, ticks 3072, elapsed 0, channel: 1 event ('note', 3072, 1, 57, 84)
	0,50,177,	//# 6, ticks 3072, elapsed 0, channel: 1 event ('note', 3072, 1, 50, 88)
	0,197,162,	//# 7, ticks 3072, elapsed 0, channel: 2 event ('note', 3072, 1, 69, 81)
	0,166,204,	//# 8, ticks 3072, elapsed 0, channel: 2 event ('note', 3072, 2, 38, 102)
	0,50,179,	//# 9, ticks 3072, elapsed 0, channel: 1 event ('note', 3072, 3, 50, 89)
	0,190,203,	//# 10, ticks 3072, elapsed 0, channel: 3 event ('note', 3072, 5, 62, 101)
	0,62,203,	//# 11, ticks 3072, elapsed 0, channel: 1 event ('note', 3072, 6, 62, 101)
	0,66,104,	//# 12, ticks 3072, elapsed 0, channel: 0 event ('note', 3072, 7, 66, 52)
	0,62,184,	//# 13, ticks 3072, elapsed 0, channel: 0 event ('note', 3072, 8, 62, 92)
	3,62,0,	//# 14, ticks 3092, elapsed 3, channel: 0 event ('note', 3092, 5, 62, 0)
	0,62,1,	//# 15, ticks 3092, elapsed 0, channel: 1 event ('note', 3092, 6, 62, 0)
	6,190,1,	//# 16, ticks 3132, elapsed 6, channel: 3 event ('note', 3132, 8, 62, 0)
	0,62,204,	//# 17, ticks 3132, elapsed 0, channel: 0 event ('note', 3132, 8, 62, 102)
	0,62,0,	//# 18, ticks 3136, elapsed 0, channel: 0 event ('note', 3136, 8, 62, 0)
	2,62,210,	//# 19, ticks 3152, elapsed 2, channel: 0 event ('note', 3152, 5, 62, 105)
	0,62,211,	//# 20, ticks 3152, elapsed 0, channel: 1 event ('note', 3152, 6, 62, 105)
	12,194,199,	//# 21, ticks 3224, elapsed 12, channel: 3 event ('note', 3224, 8, 66, 99)
	2,194,203,	//# 22, ticks 3240, elapsed 2, channel: 3 event ('note', 3240, 5, 66, 101)
	0,194,203,	//# 23, ticks 3240, elapsed 0, channel: 3 event ('note', 3240, 6, 66, 101)
	4,62,0,	//# 24, ticks 3264, elapsed 4, channel: 0 event ('note', 3264, 5, 62, 0)
	0,62,1,	//# 25, ticks 3264, elapsed 0, channel: 1 event ('note', 3264, 6, 62, 0)
	4,194,1,	//# 26, ticks 3292, elapsed 4, channel: 3 event ('note', 3292, 5, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	6,66,206,	//# 29, ticks 3332, elapsed 6, channel: 0 event ('note', 3332, 8, 66, 103)
	0,66,207,	//# 30, ticks 3336, elapsed 0, channel: 1 event ('note', 3336, 5, 66, 103)
	0,194,207,	//# 31, ticks 3336, elapsed 0, channel: 3 event ('note', 3336, 6, 66, 103)
	15,197,212,	//# 32, ticks 3424, elapsed 15, channel: 2 event ('note', 3424, 8, 69, 106)
	// Note off skipped, note 50 not found in channels, probably interrupted
	1,69,186,	//# 34, ticks 3432, elapsed 1, channel: 0 event ('note', 3432, 5, 69, 93)
	0,69,186,	//# 35, ticks 3432, elapsed 0, channel: 0 event ('note', 3432, 6, 69, 93)
	2,66,1,	//# 36, ticks 3444, elapsed 2, channel: 1 event ('note', 3444, 5, 66, 0)
	0,194,1,	//# 37, ticks 3444, elapsed 0, channel: 3 event ('note', 3444, 6, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	6,69,0,	//# 39, ticks 3480, elapsed 6, channel: 0 event ('note', 3480, 5, 69, 0)
	0,197,0,	//# 40, ticks 3480, elapsed 0, channel: 2 event ('note', 3480, 6, 69, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	7,69,222,	//# 50, ticks 3524, elapsed 7, channel: 0 event ('note', 3524, 8, 69, 111)
	0,69,185,	//# 51, ticks 3528, elapsed 0, channel: 1 event ('note', 3528, 5, 69, 92)
	0,197,184,	//# 52, ticks 3528, elapsed 0, channel: 2 event ('note', 3528, 6, 69, 92)
	// Note off skipped, note 62 not found in channels, probably interrupted
	15,178,189,	//# 54, ticks 3616, elapsed 15, channel: 3 event ('note', 3616, 3, 50, 94)
	1,74,199,	//# 55, ticks 3624, elapsed 1, channel: 1 event ('note', 3624, 8, 74, 99)
	2,202,186,	//# 56, ticks 3636, elapsed 2, channel: 2 event ('note', 3636, 5, 74, 93)
	0,202,186,	//# 57, ticks 3636, elapsed 0, channel: 2 event ('note', 3636, 6, 74, 93)
	0,194,144,	//# 58, ticks 3636, elapsed 0, channel: 2 event ('note', 3636, 7, 66, 72)
	0,69,0,	//# 59, ticks 3640, elapsed 0, channel: 0 event ('note', 3640, 8, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	1,50,196,	//# 62, ticks 3648, elapsed 1, channel: 0 event ('note', 3648, 1, 50, 98)
	0,166,188,	//# 63, ticks 3648, elapsed 0, channel: 2 event ('note', 3648, 2, 38, 94)
	5,74,1,	//# 64, ticks 3680, elapsed 5, channel: 1 event ('note', 3680, 5, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	2,50,0,	//# 66, ticks 3696, elapsed 2, channel: 0 event ('note', 3696, 3, 50, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	4,178,1,	//# 69, ticks 3720, elapsed 4, channel: 3 event ('note', 3720, 1, 50, 0)
	0,166,0,	//# 70, ticks 3720, elapsed 0, channel: 2 event ('note', 3720, 2, 38, 0)
	0,74,208,	//# 71, ticks 3720, elapsed 0, channel: 0 event ('note', 3720, 8, 74, 104)
	1,74,195,	//# 72, ticks 3728, elapsed 1, channel: 1 event ('note', 3728, 5, 74, 97)
	0,202,194,	//# 73, ticks 3728, elapsed 0, channel: 2 event ('note', 3728, 6, 74, 97)
	14,201,185,	//# 74, ticks 3812, elapsed 14, channel: 3 event ('note', 3812, 8, 73, 92)
	1,192,127,	//# 75, ticks 3820, elapsed 1, channel: 3 event ('note', 3820, 7, 64, 63)
	0,185,189,	//# 76, ticks 3824, elapsed 0, channel: 3 event ('note', 3824, 3, 57, 94)
	0,201,213,	//# 77, ticks 3828, elapsed 0, channel: 3 event ('note', 3828, 5, 73, 106)
	0,73,213,	//# 78, ticks 3828, elapsed 0, channel: 1 event ('note', 3828, 6, 73, 106)
	1,173,180,	//# 79, ticks 3836, elapsed 1, channel: 2 event ('note', 3836, 2, 45, 90)
	0,185,194,	//# 80, ticks 3840, elapsed 0, channel: 2 event ('note', 3840, 1, 57, 97)
	0,74,0,	//# 81, ticks 3844, elapsed 0, channel: 0 event ('note', 3844, 5, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	9,185,0,	//# 85, ticks 3900, elapsed 9, channel: 2 event ('note', 3900, 3, 57, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	2,74,206,	//# 87, ticks 3912, elapsed 2, channel: 0 event ('note', 3912, 8, 74, 103)
	2,202,202,	//# 88, ticks 3924, elapsed 2, channel: 2 event ('note', 3924, 5, 74, 101)
	0,202,202,	//# 89, ticks 3924, elapsed 0, channel: 2 event ('note', 3924, 6, 74, 101)
	// Note off skipped, note 57 not found in channels, probably interrupted
	2,73,1,	//# 91, ticks 3940, elapsed 2, channel: 1 event ('note', 3940, 5, 73, 0)
	0,201,1,	//# 92, ticks 3940, elapsed 0, channel: 3 event ('note', 3940, 6, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	11,73,205,	//# 94, ticks 4008, elapsed 11, channel: 1 event ('note', 4008, 8, 73, 102)
	0,175,177,	//# 95, ticks 4012, elapsed 0, channel: 3 event ('note', 4012, 2, 47, 88)
	0,187,175,	//# 96, ticks 4012, elapsed 0, channel: 3 event ('note', 4012, 3, 59, 87)
	1,190,155,	//# 97, ticks 4020, elapsed 1, channel: 3 event ('note', 4020, 7, 62, 77)
	0,201,219,	//# 98, ticks 4024, elapsed 0, channel: 3 event ('note', 4024, 5, 73, 109)
	0,201,218,	//# 99, ticks 4024, elapsed 0, channel: 2 event ('note', 4024, 6, 73, 109)
	1,59,189,	//# 100, ticks 4032, elapsed 1, channel: 1 event ('note', 4032, 1, 59, 94)
	3,74,0,	//# 101, ticks 4052, elapsed 3, channel: 0 event ('note', 4052, 5, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	8,59,1,	//# 106, ticks 4100, elapsed 8, channel: 1 event ('note', 4100, 3, 59, 0)
	1,71,206,	//# 107, ticks 4108, elapsed 1, channel: 0 event ('note', 4108, 8, 71, 103)
	0,71,189,	//# 108, ticks 4112, elapsed 0, channel: 1 event ('note', 4112, 5, 71, 94)
	0,71,189,	//# 109, ticks 4112, elapsed 0, channel: 1 event ('note', 4112, 6, 71, 94)
	// Note off skipped, note 59 not found in channels, probably interrupted
	2,201,0,	//# 111, ticks 4124, elapsed 2, channel: 2 event ('note', 4124, 5, 73, 0)
	0,201,1,	//# 112, ticks 4124, elapsed 0, channel: 3 event ('note', 4124, 6, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	13,192,164,	//# 114, ticks 4204, elapsed 13, channel: 2 event ('note', 4204, 7, 64, 82)
	0,177,187,	//# 115, ticks 4208, elapsed 0, channel: 3 event ('note', 4208, 2, 49, 93)
	0,189,170,	//# 116, ticks 4212, elapsed 0, channel: 2 event ('note', 4212, 3, 61, 85)
	0,197,202,	//# 117, ticks 4212, elapsed 0, channel: 2 event ('note', 4212, 5, 69, 101)
	0,197,203,	//# 118, ticks 4212, elapsed 0, channel: 3 event ('note', 4212, 6, 69, 101)
	0,69,203,	//# 119, ticks 4212, elapsed 0, channel: 1 event ('note', 4212, 8, 69, 101)
	1,71,0,	//# 120, ticks 4220, elapsed 1, channel: 0 event ('note', 4220, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	0,61,190,	//# 122, ticks 4224, elapsed 0, channel: 0 event ('note', 4224, 1, 61, 95)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 49 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	11,61,0,	//# 126, ticks 4292, elapsed 11, channel: 0 event ('note', 4292, 1, 61, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	2,67,192,	//# 128, ticks 4304, elapsed 2, channel: 0 event ('note', 4304, 8, 67, 96)
	0,67,174,	//# 129, ticks 4308, elapsed 0, channel: 0 event ('note', 4308, 5, 67, 87)
	0,67,174,	//# 130, ticks 4308, elapsed 0, channel: 0 event ('note', 4308, 6, 67, 87)
	0,69,1,	//# 131, ticks 4312, elapsed 0, channel: 1 event ('note', 4312, 5, 69, 0)
	0,197,0,	//# 132, ticks 4312, elapsed 0, channel: 2 event ('note', 4312, 6, 69, 0)
	0,197,1,	//# 133, ticks 4312, elapsed 0, channel: 3 event ('note', 4312, 8, 69, 0)
	14,61,145,	//# 134, ticks 4396, elapsed 14, channel: 1 event ('note', 4396, 7, 61, 72)
	1,173,176,	//# 135, ticks 4404, elapsed 1, channel: 2 event ('note', 4404, 2, 45, 88)
	0,194,249,	//# 136, ticks 4404, elapsed 0, channel: 3 event ('note', 4404, 8, 66, 124)
	0,57,153,	//# 137, ticks 4408, elapsed 0, channel: 1 event ('note', 4408, 3, 57, 76)
	0,66,213,	//# 138, ticks 4408, elapsed 0, channel: 1 event ('note', 4408, 5, 66, 106)
	0,66,212,	//# 139, ticks 4408, elapsed 0, channel: 0 event ('note', 4408, 6, 66, 106)
	1,185,184,	//# 140, ticks 4416, elapsed 1, channel: 2 event ('note', 4416, 1, 57, 92)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	11,185,0,	//# 144, ticks 4480, elapsed 11, channel: 2 event ('note', 4480, 1, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	4,192,148,	//# 148, ticks 4504, elapsed 4, channel: 2 event ('note', 4504, 5, 64, 74)
	0,192,148,	//# 149, ticks 4504, elapsed 0, channel: 2 event ('note', 4504, 6, 64, 74)
	0,192,184,	//# 150, ticks 4504, elapsed 0, channel: 2 event ('note', 4504, 8, 64, 92)
	2,66,0,	//# 151, ticks 4520, elapsed 2, channel: 0 event ('note', 4520, 5, 66, 0)
	0,66,1,	//# 152, ticks 4520, elapsed 0, channel: 1 event ('note', 4520, 6, 66, 0)
	0,194,1,	//# 153, ticks 4520, elapsed 0, channel: 3 event ('note', 4520, 8, 66, 0)
	11,62,136,	//# 154, ticks 4584, elapsed 11, channel: 0 event ('note', 4584, 7, 62, 68)
	2,42,195,	//# 155, ticks 4600, elapsed 2, channel: 1 event ('note', 4600, 2, 42, 97)
	0,182,191,	//# 156, ticks 4600, elapsed 0, channel: 3 event ('note', 4600, 3, 54, 95)
	0,62,166,	//# 157, ticks 4600, elapsed 0, channel: 0 event ('note', 4600, 5, 62, 83)
	0,62,166,	//# 158, ticks 4600, elapsed 0, channel: 0 event ('note', 4600, 6, 62, 83)
	0,62,194,	//# 159, ticks 4600, elapsed 0, channel: 0 event ('note', 4600, 8, 62, 97)
	1,182,198,	//# 160, ticks 4608, elapsed 1, channel: 2 event ('note', 4608, 1, 54, 99)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	7,62,0,	//# 164, ticks 4652, elapsed 7, channel: 0 event ('note', 4652, 5, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	3,182,0,	//# 168, ticks 4672, elapsed 3, channel: 2 event ('note', 4672, 3, 54, 0)
	1,182,1,	//# 169, ticks 4680, elapsed 1, channel: 3 event ('note', 4680, 1, 54, 0)
	0,42,1,	//# 170, ticks 4680, elapsed 0, channel: 1 event ('note', 4680, 2, 42, 0)
	1,62,194,	//# 171, ticks 4688, elapsed 1, channel: 0 event ('note', 4688, 8, 62, 97)
	2,62,189,	//# 172, ticks 4704, elapsed 2, channel: 1 event ('note', 4704, 5, 62, 94)
	0,190,188,	//# 173, ticks 4704, elapsed 0, channel: 2 event ('note', 4704, 6, 62, 94)
	12,185,153,	//# 174, ticks 4776, elapsed 12, channel: 3 event ('note', 4776, 7, 57, 76)
	1,194,207,	//# 175, ticks 4784, elapsed 1, channel: 3 event ('note', 4784, 8, 66, 103)
	0,40,183,	//# 176, ticks 4788, elapsed 0, channel: 1 event ('note', 4788, 2, 40, 91)
	0,52,185,	//# 177, ticks 4792, elapsed 0, channel: 1 event ('note', 4792, 3, 52, 92)
	0,66,191,	//# 178, ticks 4792, elapsed 0, channel: 1 event ('note', 4792, 5, 66, 95)
	0,194,190,	//# 179, ticks 4792, elapsed 0, channel: 2 event ('note', 4792, 6, 66, 95)
	1,52,181,	//# 180, ticks 4800, elapsed 1, channel: 1 event ('note', 4800, 1, 52, 90)
	4,62,0,	//# 181, ticks 4824, elapsed 4, channel: 0 event ('note', 4824, 5, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	4,194,0,	//# 184, ticks 4852, elapsed 4, channel: 2 event ('note', 4852, 5, 66, 0)
	0,194,1,	//# 185, ticks 4852, elapsed 0, channel: 3 event ('note', 4852, 6, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	2,52,1,	//# 187, ticks 4864, elapsed 2, channel: 1 event ('note', 4864, 3, 52, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 40 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	2,66,206,	//# 191, ticks 4880, elapsed 2, channel: 0 event ('note', 4880, 8, 66, 103)
	1,66,203,	//# 192, ticks 4888, elapsed 1, channel: 1 event ('note', 4888, 5, 66, 101)
	0,194,202,	//# 193, ticks 4888, elapsed 0, channel: 2 event ('note', 4888, 6, 66, 101)
	15,190,145,	//# 194, ticks 4976, elapsed 15, channel: 3 event ('note', 4976, 7, 62, 72)
	0,182,189,	//# 195, ticks 4980, elapsed 0, channel: 3 event ('note', 4980, 3, 54, 94)
	0,197,187,	//# 196, ticks 4980, elapsed 0, channel: 3 event ('note', 4980, 5, 69, 93)
	0,197,187,	//# 197, ticks 4980, elapsed 0, channel: 3 event ('note', 4980, 6, 69, 93)
	0,197,193,	//# 198, ticks 4980, elapsed 0, channel: 3 event ('note', 4980, 8, 69, 96)
	0,170,199,	//# 199, ticks 4984, elapsed 0, channel: 3 event ('note', 4984, 2, 42, 99)
	1,182,193,	//# 200, ticks 4992, elapsed 1, channel: 3 event ('note', 4992, 1, 54, 96)
	3,66,0,	//# 201, ticks 5012, elapsed 3, channel: 0 event ('note', 5012, 5, 66, 0)
	0,66,1,	//# 202, ticks 5012, elapsed 0, channel: 1 event ('note', 5012, 6, 66, 0)
	0,194,0,	//# 203, ticks 5012, elapsed 0, channel: 2 event ('note', 5012, 8, 66, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	8,182,1,	//# 207, ticks 5060, elapsed 8, channel: 3 event ('note', 5060, 3, 54, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 42 not found in channels, probably interrupted
	2,69,186,	//# 211, ticks 5076, elapsed 2, channel: 0 event ('note', 5076, 5, 69, 93)
	0,69,187,	//# 212, ticks 5076, elapsed 0, channel: 1 event ('note', 5076, 6, 69, 93)
	0,197,222,	//# 213, ticks 5076, elapsed 0, channel: 2 event ('note', 5076, 8, 69, 111)
	15,202,201,	//# 214, ticks 5164, elapsed 15, channel: 3 event ('note', 5164, 8, 74, 100)
	0,66,146,	//# 215, ticks 5168, elapsed 0, channel: 0 event ('note', 5168, 7, 66, 73)
	1,38,184,	//# 216, ticks 5176, elapsed 1, channel: 0 event ('note', 5176, 2, 38, 92)
	0,74,176,	//# 217, ticks 5176, elapsed 0, channel: 0 event ('note', 5176, 5, 74, 88)
	0,74,176,	//# 218, ticks 5176, elapsed 0, channel: 0 event ('note', 5176, 6, 74, 88)
	0,50,180,	//# 219, ticks 5180, elapsed 0, channel: 0 event ('note', 5180, 3, 50, 90)
	0,50,188,	//# 220, ticks 5184, elapsed 0, channel: 0 event ('note', 5184, 1, 50, 94)
	0,69,1,	//# 221, ticks 5184, elapsed 0, channel: 1 event ('note', 5184, 8, 69, 0)
	2,197,0,	//# 222, ticks 5200, elapsed 2, channel: 2 event ('note', 5200, 5, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	4,202,1,	//# 224, ticks 5224, elapsed 4, channel: 3 event ('note', 5224, 5, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	5,74,191,	//# 228, ticks 5256, elapsed 5, channel: 1 event ('note', 5256, 8, 74, 95)
	0,50,0,	//# 229, ticks 5260, elapsed 0, channel: 0 event ('note', 5260, 1, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	1,74,188,	//# 232, ticks 5268, elapsed 1, channel: 0 event ('note', 5268, 5, 74, 94)
	0,202,188,	//# 233, ticks 5268, elapsed 0, channel: 2 event ('note', 5268, 6, 74, 94)
	14,74,0,	//# 234, ticks 5352, elapsed 14, channel: 0 event ('note', 5352, 8, 74, 0)
	0,76,196,	//# 235, ticks 5352, elapsed 0, channel: 0 event ('note', 5352, 8, 76, 98)
	0,189,117,	//# 236, ticks 5356, elapsed 0, channel: 3 event ('note', 5356, 7, 61, 58)
	2,204,139,	//# 237, ticks 5368, elapsed 2, channel: 3 event ('note', 5368, 5, 76, 69)
	0,204,139,	//# 238, ticks 5368, elapsed 0, channel: 3 event ('note', 5368, 6, 76, 69)
	0,173,169,	//# 239, ticks 5372, elapsed 0, channel: 3 event ('note', 5372, 2, 45, 84)
	0,185,181,	//# 240, ticks 5372, elapsed 0, channel: 3 event ('note', 5372, 3, 57, 90)
	0,185,171,	//# 241, ticks 5376, elapsed 0, channel: 3 event ('note', 5376, 1, 57, 85)
	0,74,1,	//# 242, ticks 5376, elapsed 0, channel: 1 event ('note', 5376, 5, 74, 0)
	0,202,0,	//# 243, ticks 5376, elapsed 0, channel: 2 event ('note', 5376, 6, 74, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	13,185,1,	//# 246, ticks 5456, elapsed 13, channel: 3 event ('note', 5456, 3, 57, 0)
	0,76,0,	//# 247, ticks 5460, elapsed 0, channel: 0 event ('note', 5460, 8, 76, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	15,47,176,	//# 251, ticks 5548, elapsed 15, channel: 0 event ('note', 5548, 2, 47, 88)
	0,69,171,	//# 252, ticks 5552, elapsed 0, channel: 1 event ('note', 5552, 8, 69, 85)
	0,187,186,	//# 253, ticks 5556, elapsed 0, channel: 2 event ('note', 5556, 3, 59, 93)
	0,190,145,	//# 254, ticks 5556, elapsed 0, channel: 3 event ('note', 5556, 7, 62, 72)
	2,187,169,	//# 255, ticks 5568, elapsed 2, channel: 3 event ('note', 5568, 1, 59, 84)
	1,197,189,	//# 256, ticks 5576, elapsed 1, channel: 3 event ('note', 5576, 5, 69, 94)
	0,69,189,	//# 257, ticks 5576, elapsed 0, channel: 1 event ('note', 5576, 6, 69, 94)
	10,187,0,	//# 258, ticks 5636, elapsed 10, channel: 2 event ('note', 5636, 3, 59, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,47,0,	//# 260, ticks 5640, elapsed 0, channel: 0 event ('note', 5640, 2, 47, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	6,69,1,	//# 262, ticks 5680, elapsed 6, channel: 1 event ('note', 5680, 8, 69, 0)
	4,197,1,	//# 263, ticks 5704, elapsed 4, channel: 3 event ('note', 5704, 5, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	7,64,152,	//# 265, ticks 5748, elapsed 7, channel: 0 event ('note', 5748, 7, 64, 76)
	0,61,201,	//# 266, ticks 5752, elapsed 0, channel: 1 event ('note', 5752, 3, 61, 100)
	0,177,188,	//# 267, ticks 5756, elapsed 0, channel: 2 event ('note', 5756, 2, 49, 94)
	0,189,189,	//# 268, ticks 5760, elapsed 0, channel: 3 event ('note', 5760, 1, 61, 94)
	11,61,1,	//# 269, ticks 5824, elapsed 11, channel: 1 event ('note', 5824, 3, 61, 0)
	0,64,0,	//# 270, ticks 5828, elapsed 0, channel: 0 event ('note', 5828, 7, 64, 0)
	1,189,1,	//# 271, ticks 5836, elapsed 1, channel: 3 event ('note', 5836, 1, 61, 0)
	0,177,0,	//# 272, ticks 5840, elapsed 0, channel: 2 event ('note', 5840, 2, 49, 0)
	16,61,132,	//# 273, ticks 5936, elapsed 16, channel: 0 event ('note', 5936, 7, 61, 66)
	0,57,189,	//# 274, ticks 5940, elapsed 0, channel: 1 event ('note', 5940, 3, 57, 94)
	0,204,172,	//# 275, ticks 5944, elapsed 0, channel: 2 event ('note', 5944, 5, 76, 86)
	0,204,173,	//# 276, ticks 5944, elapsed 0, channel: 3 event ('note', 5944, 6, 76, 86)
	0,45,196,	//# 277, ticks 5948, elapsed 0, channel: 0 event ('note', 5948, 2, 45, 98)
	0,185,184,	//# 278, ticks 5952, elapsed 0, channel: 2 event ('note', 5952, 1, 57, 92)
	0,204,191,	//# 279, ticks 5952, elapsed 0, channel: 3 event ('note', 5952, 8, 76, 95)
	13,57,1,	//# 280, ticks 6028, elapsed 13, channel: 1 event ('note', 6028, 3, 57, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	1,185,0,	//# 282, ticks 6036, elapsed 1, channel: 2 event ('note', 6036, 1, 57, 0)
	0,45,0,	//# 283, ticks 6040, elapsed 0, channel: 0 event ('note', 6040, 2, 45, 0)
	0,204,1,	//# 284, ticks 6044, elapsed 0, channel: 3 event ('note', 6044, 8, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	13,62,148,	//# 287, ticks 6124, elapsed 13, channel: 0 event ('note', 6124, 7, 62, 74)
	2,78,197,	//# 288, ticks 6140, elapsed 2, channel: 1 event ('note', 6140, 8, 78, 98)
	0,190,186,	//# 289, ticks 6144, elapsed 0, channel: 2 event ('note', 6144, 1, 62, 93)
	0,178,189,	//# 290, ticks 6144, elapsed 0, channel: 3 event ('note', 6144, 2, 50, 94)
	0,62,190,	//# 291, ticks 6144, elapsed 0, channel: 0 event ('note', 6144, 3, 62, 95)
	2,206,176,	//# 292, ticks 6156, elapsed 2, channel: 2 event ('note', 6156, 5, 78, 88)
	0,206,176,	//# 293, ticks 6156, elapsed 0, channel: 2 event ('note', 6156, 6, 78, 88)
	9,62,0,	//# 294, ticks 6212, elapsed 9, channel: 0 event ('note', 6212, 3, 62, 0)
	0,78,1,	//# 295, ticks 6212, elapsed 0, channel: 1 event ('note', 6212, 8, 78, 0)
	0,206,0,	//# 296, ticks 6216, elapsed 0, channel: 2 event ('note', 6216, 5, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,178,1,	//# 299, ticks 6220, elapsed 0, channel: 3 event ('note', 6220, 2, 50, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	2,78,198,	//# 301, ticks 6236, elapsed 2, channel: 0 event ('note', 6236, 8, 78, 99)
	2,78,227,	//# 302, ticks 6252, elapsed 2, channel: 1 event ('note', 6252, 5, 78, 113)
	0,206,226,	//# 303, ticks 6252, elapsed 0, channel: 2 event ('note', 6252, 6, 78, 113)
	11,197,169,	//# 304, ticks 6320, elapsed 11, channel: 3 event ('note', 6320, 7, 69, 84)
	0,204,199,	//# 305, ticks 6320, elapsed 0, channel: 3 event ('note', 6320, 8, 76, 99)
	0,61,188,	//# 306, ticks 6324, elapsed 0, channel: 0 event ('note', 6324, 3, 61, 94)
	0,49,186,	//# 307, ticks 6328, elapsed 0, channel: 0 event ('note', 6328, 2, 49, 93)
	1,61,194,	//# 308, ticks 6336, elapsed 1, channel: 0 event ('note', 6336, 1, 61, 97)
	0,76,176,	//# 309, ticks 6336, elapsed 0, channel: 0 event ('note', 6336, 5, 76, 88)
	0,76,176,	//# 310, ticks 6336, elapsed 0, channel: 0 event ('note', 6336, 6, 76, 88)
	0,78,1,	//# 311, ticks 6340, elapsed 0, channel: 1 event ('note', 6340, 5, 78, 0)
	0,206,0,	//# 312, ticks 6340, elapsed 0, channel: 2 event ('note', 6340, 6, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	7,76,0,	//# 314, ticks 6384, elapsed 7, channel: 0 event ('note', 6384, 8, 76, 0)
	2,204,1,	//# 315, ticks 6396, elapsed 2, channel: 3 event ('note', 6396, 5, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 49 not found in channels, probably interrupted
	3,76,190,	//# 320, ticks 6416, elapsed 3, channel: 0 event ('note', 6416, 8, 76, 95)
	// Note off skipped, note 61 not found in channels, probably interrupted
	1,76,179,	//# 322, ticks 6424, elapsed 1, channel: 1 event ('note', 6424, 5, 76, 89)
	0,204,178,	//# 323, ticks 6424, elapsed 0, channel: 2 event ('note', 6424, 6, 76, 89)
	14,202,171,	//# 324, ticks 6508, elapsed 14, channel: 3 event ('note', 6508, 7, 74, 85)
	0,207,193,	//# 325, ticks 6512, elapsed 0, channel: 3 event ('note', 6512, 8, 79, 96)
	0,79,193,	//# 326, ticks 6516, elapsed 0, channel: 1 event ('note', 6516, 5, 79, 96)
	0,207,192,	//# 327, ticks 6516, elapsed 0, channel: 2 event ('note', 6516, 6, 79, 96)
	0,59,186,	//# 328, ticks 6520, elapsed 0, channel: 0 event ('note', 6520, 3, 59, 93)
	0,47,182,	//# 329, ticks 6524, elapsed 0, channel: 0 event ('note', 6524, 2, 47, 91)
	0,59,196,	//# 330, ticks 6528, elapsed 0, channel: 0 event ('note', 6528, 1, 59, 98)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	9,79,1,	//# 334, ticks 6580, elapsed 9, channel: 1 event ('note', 6580, 5, 79, 0)
	0,207,0,	//# 335, ticks 6580, elapsed 0, channel: 2 event ('note', 6580, 6, 79, 0)
	0,207,1,	//# 336, ticks 6580, elapsed 0, channel: 3 event ('note', 6580, 8, 79, 0)
	2,59,0,	//# 337, ticks 6596, elapsed 2, channel: 0 event ('note', 6596, 3, 59, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	2,79,214,	//# 339, ticks 6612, elapsed 2, channel: 0 event ('note', 6612, 8, 79, 107)
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	1,79,185,	//# 342, ticks 6620, elapsed 1, channel: 1 event ('note', 6620, 5, 79, 92)
	0,207,184,	//# 343, ticks 6620, elapsed 0, channel: 2 event ('note', 6620, 6, 79, 92)
	13,206,189,	//# 344, ticks 6700, elapsed 13, channel: 3 event ('note', 6700, 8, 78, 94)
	0,57,179,	//# 345, ticks 6704, elapsed 0, channel: 1 event ('note', 6704, 3, 57, 89)
	0,73,149,	//# 346, ticks 6704, elapsed 0, channel: 1 event ('note', 6704, 7, 73, 74)
	2,78,171,	//# 347, ticks 6716, elapsed 2, channel: 1 event ('note', 6716, 5, 78, 85)
	0,78,171,	//# 348, ticks 6716, elapsed 0, channel: 1 event ('note', 6716, 6, 78, 85)
	0,57,181,	//# 349, ticks 6720, elapsed 0, channel: 1 event ('note', 6720, 1, 57, 90)
	0,45,179,	//# 350, ticks 6724, elapsed 0, channel: 1 event ('note', 6724, 2, 45, 89)
	0,79,0,	//# 351, ticks 6728, elapsed 0, channel: 0 event ('note', 6728, 8, 79, 0)
	1,207,0,	//# 352, ticks 6736, elapsed 1, channel: 2 event ('note', 6736, 5, 79, 0)
	// Note off skipped, note 79 not found in channels, probably interrupted
	6,206,1,	//# 354, ticks 6776, elapsed 6, channel: 3 event ('note', 6776, 8, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	4,78,190,	//# 360, ticks 6804, elapsed 4, channel: 0 event ('note', 6804, 8, 78, 95)
	0,45,1,	//# 361, ticks 6808, elapsed 0, channel: 1 event ('note', 6808, 2, 45, 0)
	0,78,179,	//# 362, ticks 6812, elapsed 0, channel: 1 event ('note', 6812, 5, 78, 89)
	0,206,178,	//# 363, ticks 6812, elapsed 0, channel: 2 event ('note', 6812, 6, 78, 89)
	14,202,147,	//# 364, ticks 6896, elapsed 14, channel: 3 event ('note', 6896, 7, 74, 73)
	0,211,169,	//# 365, ticks 6896, elapsed 0, channel: 3 event ('note', 6896, 8, 83, 84)
	0,183,187,	//# 366, ticks 6900, elapsed 0, channel: 3 event ('note', 6900, 3, 55, 93)
	0,83,173,	//# 367, ticks 6904, elapsed 0, channel: 1 event ('note', 6904, 5, 83, 86)
	0,83,173,	//# 368, ticks 6904, elapsed 0, channel: 1 event ('note', 6904, 6, 83, 86)
	1,55,181,	//# 369, ticks 6912, elapsed 1, channel: 1 event ('note', 6912, 1, 55, 90)
	0,171,176,	//# 370, ticks 6916, elapsed 0, channel: 2 event ('note', 6916, 2, 43, 88)
	1,78,0,	//# 371, ticks 6924, elapsed 1, channel: 0 event ('note', 6924, 5, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	10,55,1,	//# 376, ticks 6984, elapsed 10, channel: 1 event ('note', 6984, 3, 55, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	2,183,1,	//# 379, ticks 7000, elapsed 2, channel: 3 event ('note', 7000, 1, 55, 0)
	0,171,0,	//# 380, ticks 7004, elapsed 0, channel: 2 event ('note', 7004, 2, 43, 0)
	0,83,170,	//# 381, ticks 7004, elapsed 0, channel: 0 event ('note', 7004, 5, 83, 85)
	0,83,171,	//# 382, ticks 7004, elapsed 0, channel: 1 event ('note', 7004, 6, 83, 85)
	0,211,180,	//# 383, ticks 7008, elapsed 0, channel: 2 event ('note', 7008, 8, 83, 90)
	14,190,155,	//# 384, ticks 7092, elapsed 14, channel: 3 event ('note', 7092, 7, 62, 77)
	0,182,197,	//# 385, ticks 7096, elapsed 0, channel: 3 event ('note', 7096, 3, 54, 98)
	0,42,194,	//# 386, ticks 7100, elapsed 0, channel: 0 event ('note', 7100, 2, 42, 97)
	0,81,189,	//# 387, ticks 7100, elapsed 0, channel: 1 event ('note', 7100, 5, 81, 94)
	0,209,188,	//# 388, ticks 7100, elapsed 0, channel: 2 event ('note', 7100, 6, 81, 94)
	0,81,203,	//# 389, ticks 7100, elapsed 0, channel: 1 event ('note', 7100, 8, 81, 101)
	0,182,190,	//# 390, ticks 7104, elapsed 0, channel: 2 event ('note', 7104, 1, 54, 95)
	// Note off skipped, note 83 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	9,81,1,	//# 394, ticks 7160, elapsed 9, channel: 1 event ('note', 7160, 5, 81, 0)
	// Note off skipped, note 81 not found in channels, probably interrupted
	2,182,0,	//# 396, ticks 7172, elapsed 2, channel: 2 event ('note', 7172, 3, 54, 0)
	// Note off skipped, note 81 not found in channels, probably interrupted
	1,42,0,	//# 398, ticks 7180, elapsed 1, channel: 0 event ('note', 7180, 2, 42, 0)
	0,182,1,	//# 399, ticks 7184, elapsed 0, channel: 3 event ('note', 7184, 1, 54, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	2,81,176,	//# 401, ticks 7196, elapsed 2, channel: 0 event ('note', 7196, 5, 81, 88)
	0,81,177,	//# 402, ticks 7196, elapsed 0, channel: 1 event ('note', 7196, 6, 81, 88)
	1,209,194,	//# 403, ticks 7204, elapsed 1, channel: 2 event ('note', 7204, 8, 81, 97)
	12,195,165,	//# 404, ticks 7276, elapsed 12, channel: 3 event ('note', 7276, 7, 67, 82)
	2,168,183,	//# 405, ticks 7288, elapsed 2, channel: 3 event ('note', 7288, 2, 40, 91)
	0,52,184,	//# 406, ticks 7292, elapsed 0, channel: 0 event ('note', 7292, 3, 52, 92)
	0,52,183,	//# 407, ticks 7296, elapsed 0, channel: 1 event ('note', 7296, 1, 52, 91)
	0,73,175,	//# 408, ticks 7296, elapsed 0, channel: 1 event ('note', 7296, 8, 73, 87)
	0,73,203,	//# 409, ticks 7300, elapsed 0, channel: 1 event ('note', 7300, 5, 73, 101)
	0,201,203,	//# 410, ticks 7300, elapsed 0, channel: 3 event ('note', 7300, 6, 73, 101)
	2,209,0,	//# 411, ticks 7316, elapsed 2, channel: 2 event ('note', 7316, 8, 81, 0)
	// Note off skipped, note 81 not found in channels, probably interrupted
	// Note off skipped, note 81 not found in channels, probably interrupted
	6,73,1,	//# 414, ticks 7352, elapsed 6, channel: 1 event ('note', 7352, 8, 73, 0)
	2,201,1,	//# 415, ticks 7364, elapsed 2, channel: 3 event ('note', 7364, 5, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	0,52,0,	//# 417, ticks 7368, elapsed 0, channel: 0 event ('note', 7368, 3, 52, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 40 not found in channels, probably interrupted
	2,73,180,	//# 421, ticks 7380, elapsed 2, channel: 0 event ('note', 7380, 8, 73, 90)
	2,73,171,	//# 422, ticks 7396, elapsed 2, channel: 1 event ('note', 7396, 5, 73, 85)
	0,201,170,	//# 423, ticks 7396, elapsed 0, channel: 2 event ('note', 7396, 6, 73, 85)
	11,202,169,	//# 424, ticks 7464, elapsed 11, channel: 3 event ('note', 7464, 8, 74, 84)
	2,194,171,	//# 425, ticks 7476, elapsed 2, channel: 3 event ('note', 7476, 7, 66, 85)
	0,50,185,	//# 426, ticks 7480, elapsed 0, channel: 1 event ('note', 7480, 3, 50, 92)
	0,166,186,	//# 427, ticks 7484, elapsed 0, channel: 2 event ('note', 7484, 2, 38, 93)
	0,202,179,	//# 428, ticks 7484, elapsed 0, channel: 3 event ('note', 7484, 5, 74, 89)
	0,202,179,	//# 429, ticks 7484, elapsed 0, channel: 3 event ('note', 7484, 6, 74, 89)
	0,178,179,	//# 430, ticks 7488, elapsed 0, channel: 3 event ('note', 7488, 1, 50, 89)
	2,73,0,	//# 431, ticks 7504, elapsed 2, channel: 0 event ('note', 7504, 8, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	7,50,1,	//# 435, ticks 7548, elapsed 7, channel: 1 event ('note', 7548, 3, 50, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	2,166,0,	//# 438, ticks 7564, elapsed 2, channel: 2 event ('note', 7564, 2, 38, 0)
	0,74,194,	//# 439, ticks 7568, elapsed 0, channel: 0 event ('note', 7568, 8, 74, 97)
	0,178,1,	//# 440, ticks 7572, elapsed 0, channel: 3 event ('note', 7572, 1, 50, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	2,74,175,	//# 442, ticks 7584, elapsed 2, channel: 1 event ('note', 7584, 5, 74, 87)
	0,202,174,	//# 443, ticks 7584, elapsed 0, channel: 2 event ('note', 7584, 6, 74, 87)
	13,192,141,	//# 444, ticks 7664, elapsed 13, channel: 3 event ('note', 7664, 7, 64, 70)
	0,195,197,	//# 445, ticks 7668, elapsed 0, channel: 3 event ('note', 7668, 8, 67, 98)
	0,37,201,	//# 446, ticks 7672, elapsed 0, channel: 1 event ('note', 7672, 2, 37, 100)
	0,177,192,	//# 447, ticks 7676, elapsed 0, channel: 2 event ('note', 7676, 3, 49, 96)
	0,177,190,	//# 448, ticks 7680, elapsed 0, channel: 2 event ('note', 7680, 1, 49, 95)
	0,74,0,	//# 449, ticks 7680, elapsed 0, channel: 0 event ('note', 7680, 8, 74, 0)
	0,67,188,	//# 450, ticks 7684, elapsed 0, channel: 0 event ('note', 7684, 5, 67, 94)
	0,67,188,	//# 451, ticks 7684, elapsed 0, channel: 0 event ('note', 7684, 6, 67, 94)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	9,67,0,	//# 454, ticks 7736, elapsed 9, channel: 0 event ('note', 7736, 8, 67, 0)
	0,195,1,	//# 455, ticks 7740, elapsed 0, channel: 3 event ('note', 7740, 5, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	1,177,0,	//# 457, ticks 7748, elapsed 1, channel: 2 event ('note', 7748, 3, 49, 0)
	0,37,1,	//# 458, ticks 7752, elapsed 0, channel: 1 event ('note', 7752, 2, 37, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	2,67,190,	//# 460, ticks 7764, elapsed 2, channel: 0 event ('note', 7764, 8, 67, 95)
	// Note off skipped, note 49 not found in channels, probably interrupted
	1,67,177,	//# 462, ticks 7772, elapsed 1, channel: 1 event ('note', 7772, 5, 67, 88)
	0,195,176,	//# 463, ticks 7772, elapsed 0, channel: 2 event ('note', 7772, 6, 67, 88)
	13,190,141,	//# 464, ticks 7852, elapsed 13, channel: 3 event ('note', 7852, 7, 62, 70)
	1,178,179,	//# 465, ticks 7860, elapsed 1, channel: 3 event ('note', 7860, 3, 50, 89)
	0,66,191,	//# 466, ticks 7860, elapsed 0, channel: 1 event ('note', 7860, 8, 66, 95)
	0,166,180,	//# 467, ticks 7864, elapsed 0, channel: 2 event ('note', 7864, 2, 38, 90)
	1,178,181,	//# 468, ticks 7872, elapsed 1, channel: 3 event ('note', 7872, 1, 50, 90)
	0,194,190,	//# 469, ticks 7872, elapsed 0, channel: 2 event ('note', 7872, 5, 66, 95)
	0,194,191,	//# 470, ticks 7872, elapsed 0, channel: 3 event ('note', 7872, 6, 66, 95)
	2,67,0,	//# 471, ticks 7888, elapsed 2, channel: 0 event ('note', 7888, 8, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	6,66,1,	//# 475, ticks 7924, elapsed 6, channel: 1 event ('note', 7924, 5, 66, 0)
	0,194,0,	//# 476, ticks 7924, elapsed 0, channel: 2 event ('note', 7924, 6, 66, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	1,194,1,	//# 478, ticks 7932, elapsed 1, channel: 3 event ('note', 7932, 8, 66, 0)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	4,66,200,	//# 481, ticks 7956, elapsed 4, channel: 0 event ('note', 7956, 8, 66, 100)
	1,66,203,	//# 482, ticks 7964, elapsed 1, channel: 1 event ('note', 7964, 5, 66, 101)
	0,194,202,	//# 483, ticks 7964, elapsed 0, channel: 2 event ('note', 7964, 6, 66, 101)
	13,190,163,	//# 484, ticks 8044, elapsed 13, channel: 3 event ('note', 8044, 7, 62, 81)
	0,199,181,	//# 485, ticks 8048, elapsed 0, channel: 3 event ('note', 8048, 8, 71, 90)
	0,171,179,	//# 486, ticks 8052, elapsed 0, channel: 3 event ('note', 8052, 2, 43, 89)
	0,171,179,	//# 487, ticks 8052, elapsed 0, channel: 3 event ('note', 8052, 3, 43, 89)
	0,199,179,	//# 488, ticks 8056, elapsed 0, channel: 3 event ('note', 8056, 5, 71, 89)
	0,199,179,	//# 489, ticks 8056, elapsed 0, channel: 3 event ('note', 8056, 6, 71, 89)
	1,171,173,	//# 490, ticks 8064, elapsed 1, channel: 3 event ('note', 8064, 1, 43, 86)
	3,66,0,	//# 491, ticks 8084, elapsed 3, channel: 0 event ('note', 8084, 5, 66, 0)
	0,66,1,	//# 492, ticks 8084, elapsed 0, channel: 1 event ('note', 8084, 6, 66, 0)
	0,194,0,	//# 493, ticks 8088, elapsed 0, channel: 2 event ('note', 8088, 8, 66, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	7,171,1,	//# 497, ticks 8132, elapsed 7, channel: 3 event ('note', 8132, 3, 43, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	2,71,150,	//# 500, ticks 8148, elapsed 2, channel: 0 event ('note', 8148, 8, 71, 75)
	0,71,177,	//# 501, ticks 8152, elapsed 0, channel: 1 event ('note', 8152, 5, 71, 88)
	0,199,176,	//# 502, ticks 8152, elapsed 0, channel: 2 event ('note', 8152, 6, 71, 88)
	// Note off skipped, note 43 not found in channels, probably interrupted
	14,170,195,	//# 504, ticks 8236, elapsed 14, channel: 3 event ('note', 8236, 3, 42, 97)
	1,42,182,	//# 505, ticks 8244, elapsed 1, channel: 0 event ('note', 8244, 2, 42, 91)
	0,69,189,	//# 506, ticks 8248, elapsed 0, channel: 1 event ('note', 8248, 5, 69, 94)
	0,197,188,	//# 507, ticks 8248, elapsed 0, channel: 2 event ('note', 8248, 6, 69, 94)
	0,62,148,	//# 508, ticks 8248, elapsed 0, channel: 0 event ('note', 8248, 7, 62, 74)
	0,69,218,	//# 509, ticks 8248, elapsed 0, channel: 0 event ('note', 8248, 8, 69, 109)
	1,42,195,	//# 510, ticks 8256, elapsed 1, channel: 1 event ('note', 8256, 1, 42, 97)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	8,69,0,	//# 514, ticks 8304, elapsed 8, channel: 0 event ('note', 8304, 5, 69, 0)
	0,197,0,	//# 515, ticks 8304, elapsed 0, channel: 2 event ('note', 8304, 6, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	3,42,1,	//# 517, ticks 8324, elapsed 3, channel: 1 event ('note', 8324, 3, 42, 0)
	1,170,1,	//# 518, ticks 8332, elapsed 1, channel: 3 event ('note', 8332, 2, 42, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	2,69,182,	//# 520, ticks 8344, elapsed 2, channel: 0 event ('note', 8344, 5, 69, 91)
	0,69,183,	//# 521, ticks 8344, elapsed 0, channel: 1 event ('note', 8344, 6, 69, 91)
	// Note off skipped, note 42 not found in channels, probably interrupted
	1,197,204,	//# 523, ticks 8352, elapsed 1, channel: 2 event ('note', 8352, 8, 69, 102)
	13,195,141,	//# 524, ticks 8432, elapsed 13, channel: 3 event ('note', 8432, 7, 67, 70)
	0,168,187,	//# 525, ticks 8436, elapsed 0, channel: 3 event ('note', 8436, 3, 40, 93)
	0,40,176,	//# 526, ticks 8440, elapsed 0, channel: 0 event ('note', 8440, 2, 40, 88)
	0,61,196,	//# 527, ticks 8440, elapsed 0, channel: 0 event ('note', 8440, 8, 61, 98)
	1,40,177,	//# 528, ticks 8448, elapsed 1, channel: 1 event ('note', 8448, 1, 40, 88)
	0,61,189,	//# 529, ticks 8448, elapsed 0, channel: 1 event ('note', 8448, 5, 61, 94)
	0,189,189,	//# 530, ticks 8448, elapsed 0, channel: 3 event ('note', 8448, 6, 61, 94)
	0,197,0,	//# 531, ticks 8452, elapsed 0, channel: 2 event ('note', 8452, 8, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	8,61,0,	//# 534, ticks 8500, elapsed 8, channel: 0 event ('note', 8500, 8, 61, 0)
	2,61,1,	//# 535, ticks 8512, elapsed 2, channel: 1 event ('note', 8512, 5, 61, 0)
	0,189,1,	//# 536, ticks 8512, elapsed 0, channel: 3 event ('note', 8512, 6, 61, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 40 not found in channels, probably interrupted
	2,61,186,	//# 540, ticks 8528, elapsed 2, channel: 0 event ('note', 8528, 8, 61, 93)
	2,61,175,	//# 541, ticks 8540, elapsed 2, channel: 1 event ('note', 8540, 5, 61, 87)
	0,189,174,	//# 542, ticks 8540, elapsed 0, channel: 2 event ('note', 8540, 6, 61, 87)
	// Note off skipped, note 40 not found in channels, probably interrupted
	12,166,189,	//# 544, ticks 8612, elapsed 12, channel: 3 event ('note', 8612, 3, 38, 94)
	1,62,177,	//# 545, ticks 8620, elapsed 1, channel: 1 event ('note', 8620, 8, 62, 88)
	0,194,140,	//# 546, ticks 8624, elapsed 0, channel: 2 event ('note', 8624, 7, 66, 70)
	1,166,176,	//# 547, ticks 8632, elapsed 1, channel: 2 event ('note', 8632, 2, 38, 88)
	0,62,173,	//# 548, ticks 8632, elapsed 0, channel: 1 event ('note', 8632, 5, 62, 86)
	0,62,173,	//# 549, ticks 8632, elapsed 0, channel: 1 event ('note', 8632, 6, 62, 86)
	1,38,187,	//# 550, ticks 8640, elapsed 1, channel: 1 event ('note', 8640, 1, 38, 93)
	4,61,0,	//# 551, ticks 8668, elapsed 4, channel: 0 event ('note', 8668, 5, 61, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	6,38,1,	//# 557, ticks 8708, elapsed 6, channel: 1 event ('note', 8708, 3, 38, 0)
	2,166,0,	//# 558, ticks 8720, elapsed 2, channel: 2 event ('note', 8720, 2, 38, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	0,62,172,	//# 560, ticks 8720, elapsed 0, channel: 0 event ('note', 8720, 8, 62, 86)
	1,62,171,	//# 561, ticks 8728, elapsed 1, channel: 1 event ('note', 8728, 5, 62, 85)
	0,190,170,	//# 562, ticks 8728, elapsed 0, channel: 2 event ('note', 8728, 6, 62, 85)
	1,166,1,	//# 563, ticks 8736, elapsed 1, channel: 3 event ('note', 8736, 1, 38, 0)
	12,192,147,	//# 564, ticks 8808, elapsed 12, channel: 3 event ('note', 8808, 7, 64, 73)
	0,165,193,	//# 565, ticks 8812, elapsed 0, channel: 3 event ('note', 8812, 3, 37, 96)
	2,37,201,	//# 566, ticks 8824, elapsed 2, channel: 1 event ('note', 8824, 2, 37, 100)
	0,185,168,	//# 567, ticks 8828, elapsed 0, channel: 2 event ('note', 8828, 5, 57, 84)
	0,185,168,	//# 568, ticks 8828, elapsed 0, channel: 2 event ('note', 8828, 6, 57, 84)
	0,185,172,	//# 569, ticks 8828, elapsed 0, channel: 2 event ('note', 8828, 8, 57, 86)
	0,37,176,	//# 570, ticks 8832, elapsed 0, channel: 0 event ('note', 8832, 1, 37, 88)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	10,185,0,	//# 574, ticks 8892, elapsed 10, channel: 2 event ('note', 8892, 5, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	2,37,0,	//# 577, ticks 8904, elapsed 2, channel: 0 event ('note', 8904, 3, 37, 0)
	1,37,1,	//# 578, ticks 8912, elapsed 1, channel: 1 event ('note', 8912, 2, 37, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	0,57,198,	//# 580, ticks 8916, elapsed 0, channel: 0 event ('note', 8916, 8, 57, 99)
	0,165,1,	//# 581, ticks 8920, elapsed 0, channel: 3 event ('note', 8920, 1, 37, 0)
	0,57,185,	//# 582, ticks 8924, elapsed 0, channel: 1 event ('note', 8924, 5, 57, 92)
	0,185,184,	//# 583, ticks 8924, elapsed 0, channel: 2 event ('note', 8924, 6, 57, 92)
	15,177,187,	//# 584, ticks 9012, elapsed 15, channel: 3 event ('note', 9012, 3, 49, 93)
	0,57,145,	//# 585, ticks 9012, elapsed 0, channel: 1 event ('note', 9012, 7, 57, 72)
	0,33,181,	//# 586, ticks 9016, elapsed 0, channel: 1 event ('note', 9016, 2, 33, 90)
	0,67,195,	//# 587, ticks 9016, elapsed 0, channel: 1 event ('note', 9016, 8, 67, 97)
	1,177,176,	//# 588, ticks 9024, elapsed 1, channel: 2 event ('note', 9024, 1, 49, 88)
	0,195,170,	//# 589, ticks 9024, elapsed 0, channel: 2 event ('note', 9024, 5, 67, 85)
	0,195,170,	//# 590, ticks 9024, elapsed 0, channel: 2 event ('note', 9024, 6, 67, 85)
	4,57,0,	//# 591, ticks 9048, elapsed 4, channel: 0 event ('note', 9048, 8, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	6,67,1,	//# 594, ticks 9084, elapsed 6, channel: 1 event ('note', 9084, 8, 67, 0)
	0,195,0,	//# 595, ticks 9088, elapsed 0, channel: 2 event ('note', 9088, 5, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 33 not found in channels, probably interrupted
	2,177,1,	//# 598, ticks 9104, elapsed 2, channel: 3 event ('note', 9104, 3, 49, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,67,196,	//# 600, ticks 9108, elapsed 0, channel: 0 event ('note', 9108, 8, 67, 98)
	1,67,173,	//# 601, ticks 9116, elapsed 1, channel: 1 event ('note', 9116, 5, 67, 86)
	0,195,172,	//# 602, ticks 9116, elapsed 0, channel: 2 event ('note', 9116, 6, 67, 86)
	// Note off skipped, note 49 not found in channels, probably interrupted
	14,194,173,	//# 604, ticks 9200, elapsed 14, channel: 3 event ('note', 9200, 8, 66, 86)
	0,50,185,	//# 605, ticks 9204, elapsed 0, channel: 1 event ('note', 9204, 3, 50, 92)
	0,185,150,	//# 606, ticks 9204, elapsed 0, channel: 2 event ('note', 9204, 7, 57, 75)
	0,166,190,	//# 607, ticks 9208, elapsed 0, channel: 2 event ('note', 9208, 2, 38, 95)
	0,194,167,	//# 608, ticks 9208, elapsed 0, channel: 3 event ('note', 9208, 5, 66, 83)
	0,194,167,	//# 609, ticks 9208, elapsed 0, channel: 3 event ('note', 9208, 6, 66, 83)
	1,178,173,	//# 610, ticks 9216, elapsed 1, channel: 3 event ('note', 9216, 1, 50, 86)
	0,67,0,	//# 611, ticks 9220, elapsed 0, channel: 0 event ('note', 9220, 8, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	11,50,1,	//# 614, ticks 9284, elapsed 11, channel: 1 event ('note', 9284, 1, 50, 0)
	0,178,1,	//# 615, ticks 9284, elapsed 0, channel: 3 event ('note', 9284, 3, 50, 0)
	0,166,0,	//# 616, ticks 9288, elapsed 0, channel: 2 event ('note', 9288, 2, 38, 0)
	0,64,186,	//# 617, ticks 9292, elapsed 0, channel: 0 event ('note', 9292, 8, 64, 93)
	1,64,173,	//# 618, ticks 9300, elapsed 1, channel: 1 event ('note', 9300, 5, 64, 86)
	0,192,172,	//# 619, ticks 9300, elapsed 0, channel: 2 event ('note', 9300, 6, 64, 86)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	14,194,189,	//# 624, ticks 9384, elapsed 14, channel: 3 event ('note', 9384, 8, 66, 94)
	1,47,187,	//# 625, ticks 9392, elapsed 1, channel: 1 event ('note', 9392, 3, 47, 93)
	0,190,138,	//# 626, ticks 9392, elapsed 0, channel: 2 event ('note', 9392, 7, 62, 69)
	1,163,188,	//# 627, ticks 9400, elapsed 1, channel: 2 event ('note', 9400, 2, 35, 94)
	0,66,160,	//# 628, ticks 9400, elapsed 0, channel: 0 event ('note', 9400, 5, 66, 80)
	0,66,160,	//# 629, ticks 9400, elapsed 0, channel: 0 event ('note', 9400, 6, 66, 80)
	1,47,180,	//# 630, ticks 9408, elapsed 1, channel: 0 event ('note', 9408, 1, 47, 90)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	10,62,194,	//# 634, ticks 9468, elapsed 10, channel: 0 event ('note', 9468, 8, 62, 97)
	0,47,1,	//# 635, ticks 9472, elapsed 0, channel: 1 event ('note', 9472, 3, 47, 0)
	2,62,183,	//# 636, ticks 9484, elapsed 2, channel: 1 event ('note', 9484, 5, 62, 91)
	0,62,183,	//# 637, ticks 9484, elapsed 0, channel: 1 event ('note', 9484, 6, 62, 91)
	// Note off skipped, note 47 not found in channels, probably interrupted
	1,163,0,	//# 639, ticks 9492, elapsed 1, channel: 2 event ('note', 9492, 2, 35, 0)
	0,62,0,	//# 640, ticks 9492, elapsed 0, channel: 0 event ('note', 9492, 7, 62, 0)
	0,194,1,	//# 641, ticks 9492, elapsed 0, channel: 3 event ('note', 9492, 8, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	13,64,180,	//# 644, ticks 9572, elapsed 13, channel: 0 event ('note', 9572, 8, 64, 90)
	1,159,186,	//# 645, ticks 9580, elapsed 1, channel: 2 event ('note', 9580, 2, 31, 93)
	0,171,187,	//# 646, ticks 9580, elapsed 0, channel: 3 event ('note', 9580, 3, 43, 93)
	0,64,134,	//# 647, ticks 9580, elapsed 0, channel: 0 event ('note', 9580, 5, 64, 67)
	0,64,134,	//# 648, ticks 9580, elapsed 0, channel: 0 event ('note', 9580, 6, 64, 67)
	0,59,130,	//# 649, ticks 9580, elapsed 0, channel: 0 event ('note', 9580, 7, 59, 65)
	0,62,1,	//# 650, ticks 9584, elapsed 0, channel: 1 event ('note', 9584, 8, 62, 0)
	2,43,177,	//# 651, ticks 9600, elapsed 2, channel: 1 event ('note', 9600, 1, 43, 88)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	11,43,1,	//# 657, ticks 9664, elapsed 11, channel: 1 event ('note', 9664, 3, 43, 0)
	0,64,203,	//# 658, ticks 9668, elapsed 0, channel: 1 event ('note', 9668, 8, 64, 101)
	1,64,176,	//# 659, ticks 9676, elapsed 1, channel: 0 event ('note', 9676, 5, 64, 88)
	0,64,176,	//# 660, ticks 9676, elapsed 0, channel: 0 event ('note', 9676, 6, 64, 88)
	0,171,1,	//# 661, ticks 9680, elapsed 0, channel: 3 event ('note', 9680, 1, 43, 0)
	0,159,0,	//# 662, ticks 9680, elapsed 0, channel: 2 event ('note', 9680, 2, 31, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	15,185,194,	//# 664, ticks 9768, elapsed 15, channel: 2 event ('note', 9768, 8, 57, 97)
	0,185,153,	//# 665, ticks 9772, elapsed 0, channel: 3 event ('note', 9772, 5, 57, 76)
	0,185,153,	//# 666, ticks 9772, elapsed 0, channel: 3 event ('note', 9772, 6, 57, 76)
	0,189,137,	//# 667, ticks 9772, elapsed 0, channel: 3 event ('note', 9772, 7, 61, 68)
	0,173,193,	//# 668, ticks 9776, elapsed 0, channel: 3 event ('note', 9776, 3, 45, 96)
	1,33,192,	//# 669, ticks 9784, elapsed 1, channel: 0 event ('note', 9784, 2, 33, 96)
	0,64,1,	//# 670, ticks 9788, elapsed 0, channel: 1 event ('note', 9788, 8, 64, 0)
	0,45,187,	//# 671, ticks 9792, elapsed 0, channel: 1 event ('note', 9792, 1, 45, 93)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	7,185,0,	//# 674, ticks 9836, elapsed 7, channel: 2 event ('note', 9836, 8, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	4,45,1,	//# 677, ticks 9860, elapsed 4, channel: 1 event ('note', 9860, 3, 45, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	1,173,1,	//# 679, ticks 9868, elapsed 1, channel: 3 event ('note', 9868, 1, 45, 0)
	0,57,209,	//# 680, ticks 9872, elapsed 0, channel: 1 event ('note', 9872, 8, 57, 104)
	0,185,188,	//# 681, ticks 9876, elapsed 0, channel: 2 event ('note', 9876, 5, 57, 94)
	0,185,189,	//# 682, ticks 9876, elapsed 0, channel: 3 event ('note', 9876, 6, 57, 94)
	0,33,0,	//# 683, ticks 9880, elapsed 0, channel: 0 event ('note', 9880, 2, 33, 0)
	13,57,1,	//# 684, ticks 9960, elapsed 13, channel: 1 event ('note', 9960, 5, 57, 0)
	0,185,0,	//# 685, ticks 9960, elapsed 0, channel: 2 event ('note', 9960, 6, 57, 0)
	0,62,136,	//# 686, ticks 9960, elapsed 0, channel: 0 event ('note', 9960, 7, 62, 68)
	0,185,1,	//# 687, ticks 9960, elapsed 0, channel: 3 event ('note', 9960, 8, 57, 0)
	0,62,215,	//# 688, ticks 9964, elapsed 0, channel: 1 event ('note', 9964, 8, 62, 107)
	1,163,186,	//# 689, ticks 9972, elapsed 1, channel: 2 event ('note', 9972, 2, 35, 93)
	0,175,181,	//# 690, ticks 9972, elapsed 0, channel: 3 event ('note', 9972, 3, 47, 90)
	0,62,188,	//# 691, ticks 9976, elapsed 0, channel: 0 event ('note', 9976, 5, 62, 94)
	0,190,189,	//# 692, ticks 9976, elapsed 0, channel: 3 event ('note', 9976, 6, 62, 94)
	1,175,130,	//# 693, ticks 9984, elapsed 1, channel: 2 event ('note', 9984, 1, 47, 65)
	0,190,160,	//# 694, ticks 9984, elapsed 0, channel: 2 event ('note', 9984, 1, 62, 80)
	11,192,170,	//# 695, ticks 10052, elapsed 11, channel: 2 event ('note', 10052, 7, 64, 85)
	0,192,194,	//# 696, ticks 10052, elapsed 0, channel: 2 event ('note', 10052, 8, 64, 97)
	1,64,172,	//# 697, ticks 10060, elapsed 1, channel: 0 event ('note', 10060, 5, 64, 86)
	0,64,172,	//# 698, ticks 10060, elapsed 0, channel: 0 event ('note', 10060, 6, 64, 86)
	1,49,192,	//# 699, ticks 10068, elapsed 1, channel: 0 event ('note', 10068, 3, 49, 96)
	0,62,1,	//# 700, ticks 10068, elapsed 0, channel: 1 event ('note', 10068, 7, 62, 0)
	0,37,179,	//# 701, ticks 10072, elapsed 0, channel: 1 event ('note', 10072, 2, 37, 89)
	0,190,1,	//# 702, ticks 10072, elapsed 0, channel: 3 event ('note', 10072, 5, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	1,177,149,	//# 704, ticks 10080, elapsed 1, channel: 3 event ('note', 10080, 1, 49, 74)
	0,192,183,	//# 705, ticks 10080, elapsed 0, channel: 3 event ('note', 10080, 1, 64, 91)
	// Note off skipped, note 35 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	10,49,0,	//# 711, ticks 10140, elapsed 10, channel: 0 event ('note', 10140, 3, 49, 0)
	0,66,170,	//# 712, ticks 10144, elapsed 0, channel: 0 event ('note', 10144, 7, 66, 85)
	0,66,180,	//# 713, ticks 10148, elapsed 0, channel: 0 event ('note', 10148, 8, 66, 90)
	1,66,163,	//# 714, ticks 10156, elapsed 1, channel: 1 event ('note', 10156, 5, 66, 81)
	0,66,163,	//# 715, ticks 10156, elapsed 0, channel: 1 event ('note', 10156, 6, 66, 81)
	0,50,181,	//# 716, ticks 10160, elapsed 0, channel: 1 event ('note', 10160, 3, 50, 90)
	0,192,0,	//# 717, ticks 10160, elapsed 0, channel: 2 event ('note', 10160, 7, 64, 0)
	// Note off skipped, note 37 not found in channels, probably interrupted
	1,166,168,	//# 719, ticks 10168, elapsed 1, channel: 2 event ('note', 10168, 2, 38, 84)
	0,192,1,	//# 720, ticks 10168, elapsed 0, channel: 3 event ('note', 10168, 5, 64, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	1,194,189,	//# 722, ticks 10176, elapsed 1, channel: 3 event ('note', 10176, 1, 66, 94)
	0,178,148,	//# 723, ticks 10176, elapsed 0, channel: 2 event ('note', 10176, 1, 50, 74)
	// Note off skipped, note 49 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	4,50,1,	//# 727, ticks 10204, elapsed 4, channel: 1 event ('note', 10204, 3, 50, 0)
	4,66,0,	//# 728, ticks 10228, elapsed 4, channel: 0 event ('note', 10228, 7, 66, 0)
	1,67,178,	//# 729, ticks 10236, elapsed 1, channel: 0 event ('note', 10236, 7, 67, 89)
	0,67,167,	//# 730, ticks 10240, elapsed 0, channel: 1 event ('note', 10240, 5, 67, 83)
	0,195,166,	//# 731, ticks 10240, elapsed 0, channel: 2 event ('note', 10240, 6, 67, 83)
	1,52,181,	//# 732, ticks 10248, elapsed 1, channel: 1 event ('note', 10248, 3, 52, 90)
	0,195,198,	//# 733, ticks 10248, elapsed 0, channel: 2 event ('note', 10248, 8, 67, 99)
	// Note off skipped, note 50 not found in channels, probably interrupted
	0,194,1,	//# 735, ticks 10252, elapsed 0, channel: 3 event ('note', 10252, 5, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	2,168,161,	//# 739, ticks 10264, elapsed 2, channel: 3 event ('note', 10264, 2, 40, 80)
	1,195,179,	//# 740, ticks 10272, elapsed 1, channel: 3 event ('note', 10272, 1, 67, 89)
	0,52,142,	//# 741, ticks 10272, elapsed 0, channel: 0 event ('note', 10272, 1, 52, 71)
	// Note off skipped, note 38 not found in channels, probably interrupted
	7,52,0,	//# 743, ticks 10316, elapsed 7, channel: 0 event ('note', 10316, 3, 52, 0)
	4,69,198,	//# 744, ticks 10344, elapsed 4, channel: 0 event ('note', 10344, 7, 69, 99)
	0,197,227,	//# 745, ticks 10344, elapsed 0, channel: 3 event ('note', 10344, 8, 69, 113)
	0,69,205,	//# 746, ticks 10348, elapsed 0, channel: 1 event ('note', 10348, 5, 69, 102)
	0,69,204,	//# 747, ticks 10348, elapsed 0, channel: 0 event ('note', 10348, 6, 69, 102)
	1,182,194,	//# 748, ticks 10356, elapsed 1, channel: 2 event ('note', 10356, 3, 54, 97)
	1,170,182,	//# 749, ticks 10364, elapsed 1, channel: 2 event ('note', 10364, 2, 42, 91)
	// Note off skipped, note 67 not found in channels, probably interrupted
	0,197,172,	//# 751, ticks 10368, elapsed 0, channel: 2 event ('note', 10368, 1, 69, 86)
	0,182,122,	//# 752, ticks 10368, elapsed 0, channel: 2 event ('note', 10368, 1, 54, 61)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 40 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	10,182,0,	//# 759, ticks 10428, elapsed 10, channel: 2 event ('note', 10428, 3, 54, 0)
	1,199,184,	//# 760, ticks 10436, elapsed 1, channel: 2 event ('note', 10436, 7, 71, 92)
	0,199,208,	//# 761, ticks 10436, elapsed 0, channel: 2 event ('note', 10436, 8, 71, 104)
	0,71,184,	//# 762, ticks 10440, elapsed 0, channel: 0 event ('note', 10440, 5, 71, 92)
	0,71,184,	//# 763, ticks 10440, elapsed 0, channel: 0 event ('note', 10440, 6, 71, 92)
	// Note off skipped, note 42 not found in channels, probably interrupted
	2,55,180,	//# 765, ticks 10452, elapsed 2, channel: 0 event ('note', 10452, 3, 55, 90)
	0,69,1,	//# 766, ticks 10452, elapsed 0, channel: 1 event ('note', 10452, 7, 69, 0)
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,43,163,	//# 768, ticks 10456, elapsed 0, channel: 1 event ('note', 10456, 2, 43, 81)
	0,197,1,	//# 769, ticks 10460, elapsed 0, channel: 3 event ('note', 10460, 5, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,199,177,	//# 771, ticks 10464, elapsed 0, channel: 3 event ('note', 10464, 1, 71, 88)
	0,55,119,	//# 772, ticks 10464, elapsed 0, channel: 1 event ('note', 10464, 1, 55, 59)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	6,199,0,	//# 775, ticks 10504, elapsed 6, channel: 2 event ('note', 10504, 7, 71, 0)
	2,55,0,	//# 776, ticks 10520, elapsed 2, channel: 0 event ('note', 10520, 3, 55, 0)
	2,73,162,	//# 777, ticks 10532, elapsed 2, channel: 0 event ('note', 10532, 7, 73, 81)
	0,201,180,	//# 778, ticks 10532, elapsed 0, channel: 2 event ('note', 10532, 8, 73, 90)
	0,73,161,	//# 779, ticks 10536, elapsed 0, channel: 1 event ('note', 10536, 5, 73, 80)
	0,73,161,	//# 780, ticks 10536, elapsed 0, channel: 1 event ('note', 10536, 6, 73, 80)
	1,57,169,	//# 781, ticks 10544, elapsed 1, channel: 1 event ('note', 10544, 3, 57, 84)
	0,45,162,	//# 782, ticks 10548, elapsed 0, channel: 0 event ('note', 10548, 2, 45, 81)
	// Note off skipped, note 55 not found in channels, probably interrupted
	0,199,1,	//# 784, ticks 10552, elapsed 0, channel: 3 event ('note', 10552, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	1,201,175,	//# 789, ticks 10560, elapsed 1, channel: 3 event ('note', 10560, 1, 73, 87)
	0,57,110,	//# 790, ticks 10560, elapsed 0, channel: 0 event ('note', 10560, 1, 57, 55)
	9,57,0,	//# 791, ticks 10612, elapsed 9, channel: 0 event ('note', 10612, 3, 57, 0)
	0,201,0,	//# 792, ticks 10612, elapsed 0, channel: 2 event ('note', 10612, 7, 73, 0)
	0,69,214,	//# 793, ticks 10616, elapsed 0, channel: 0 event ('note', 10616, 8, 69, 107)
	0,197,190,	//# 794, ticks 10620, elapsed 0, channel: 2 event ('note', 10620, 7, 69, 95)
	2,69,185,	//# 795, ticks 10632, elapsed 2, channel: 1 event ('note', 10632, 5, 69, 92)
	0,197,185,	//# 796, ticks 10632, elapsed 0, channel: 3 event ('note', 10632, 6, 69, 92)
	0,54,187,	//# 797, ticks 10636, elapsed 0, channel: 1 event ('note', 10636, 3, 54, 93)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	2,170,169,	//# 802, ticks 10648, elapsed 2, channel: 3 event ('note', 10648, 2, 42, 84)
	// Note off skipped, note 57 not found in channels, probably interrupted
	1,197,169,	//# 804, ticks 10656, elapsed 1, channel: 3 event ('note', 10656, 1, 69, 84)
	0,182,165,	//# 805, ticks 10656, elapsed 0, channel: 3 event ('note', 10656, 1, 54, 82)
	// Note off skipped, note 73 not found in channels, probably interrupted
	9,54,1,	//# 807, ticks 10708, elapsed 9, channel: 1 event ('note', 10708, 3, 54, 0)
	1,69,0,	//# 808, ticks 10716, elapsed 1, channel: 0 event ('note', 10716, 7, 69, 0)
	0,74,170,	//# 809, ticks 10720, elapsed 0, channel: 0 event ('note', 10720, 7, 74, 85)
	0,74,191,	//# 810, ticks 10720, elapsed 0, channel: 1 event ('note', 10720, 8, 74, 95)
	// Note off skipped, note 42 not found in channels, probably interrupted
	3,202,199,	//# 812, ticks 10740, elapsed 3, channel: 3 event ('note', 10740, 5, 74, 99)
	0,74,198,	//# 813, ticks 10740, elapsed 0, channel: 0 event ('note', 10740, 6, 74, 99)
	0,197,0,	//# 814, ticks 10740, elapsed 0, channel: 2 event ('note', 10740, 8, 69, 0)
	2,202,186,	//# 815, ticks 10752, elapsed 2, channel: 2 event ('note', 10752, 1, 74, 93)
	0,187,142,	//# 816, ticks 10752, elapsed 0, channel: 2 event ('note', 10752, 1, 59, 71)
	0,175,180,	//# 817, ticks 10752, elapsed 0, channel: 2 event ('note', 10752, 2, 47, 90)
	0,187,194,	//# 818, ticks 10756, elapsed 0, channel: 2 event ('note', 10756, 3, 59, 97)
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	6,74,0,	//# 823, ticks 10792, elapsed 6, channel: 0 event ('note', 10792, 8, 74, 0)
	1,74,1,	//# 824, ticks 10800, elapsed 1, channel: 1 event ('note', 10800, 5, 74, 0)
	0,202,1,	//# 825, ticks 10800, elapsed 0, channel: 3 event ('note', 10800, 6, 74, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	4,187,0,	//# 827, ticks 10828, elapsed 4, channel: 2 event ('note', 10828, 1, 59, 0)
	0,74,176,	//# 828, ticks 10828, elapsed 0, channel: 0 event ('note', 10828, 5, 74, 88)
	0,74,177,	//# 829, ticks 10828, elapsed 0, channel: 1 event ('note', 10828, 6, 74, 88)
	0,74,0,	//# 830, ticks 10828, elapsed 0, channel: 0 event ('note', 10828, 7, 74, 0)
	0,74,1,	//# 831, ticks 10832, elapsed 0, channel: 1 event ('note', 10832, 1, 74, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	0,74,208,	//# 833, ticks 10832, elapsed 0, channel: 0 event ('note', 10832, 8, 74, 104)
	14,73,167,	//# 834, ticks 10916, elapsed 14, channel: 1 event ('note', 10916, 8, 73, 83)
	1,194,142,	//# 835, ticks 10924, elapsed 1, channel: 2 event ('note', 10924, 7, 66, 71)
	1,201,207,	//# 836, ticks 10932, elapsed 1, channel: 3 event ('note', 10932, 5, 73, 103)
	0,201,206,	//# 837, ticks 10932, elapsed 0, channel: 2 event ('note', 10932, 6, 73, 103)
	0,45,181,	//# 838, ticks 10936, elapsed 0, channel: 1 event ('note', 10936, 2, 45, 90)
	0,74,0,	//# 839, ticks 10936, elapsed 0, channel: 0 event ('note', 10936, 8, 74, 0)
	0,57,186,	//# 840, ticks 10940, elapsed 0, channel: 0 event ('note', 10940, 3, 57, 93)
	0,57,173,	//# 841, ticks 10944, elapsed 0, channel: 1 event ('note', 10944, 1, 57, 86)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	8,201,0,	//# 844, ticks 10992, elapsed 8, channel: 2 event ('note', 10992, 5, 73, 0)
	0,201,1,	//# 845, ticks 10992, elapsed 0, channel: 3 event ('note', 10992, 6, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	4,201,196,	//# 848, ticks 11020, elapsed 4, channel: 2 event ('note', 11020, 8, 73, 98)
	0,57,0,	//# 849, ticks 11024, elapsed 0, channel: 0 event ('note', 11024, 1, 57, 0)
	0,57,1,	//# 850, ticks 11024, elapsed 0, channel: 1 event ('note', 11024, 3, 57, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	0,73,184,	//# 852, ticks 11028, elapsed 0, channel: 0 event ('note', 11028, 5, 73, 92)
	0,73,185,	//# 853, ticks 11028, elapsed 0, channel: 1 event ('note', 11028, 6, 73, 92)
	14,204,187,	//# 854, ticks 11112, elapsed 14, channel: 3 event ('note', 11112, 8, 76, 93)
	1,55,174,	//# 855, ticks 11120, elapsed 1, channel: 0 event ('note', 11120, 3, 55, 87)
	0,76,148,	//# 856, ticks 11120, elapsed 0, channel: 0 event ('note', 11120, 5, 76, 74)
	0,76,148,	//# 857, ticks 11120, elapsed 0, channel: 0 event ('note', 11120, 6, 76, 74)
	0,71,148,	//# 858, ticks 11120, elapsed 0, channel: 0 event ('note', 11120, 7, 71, 74)
	1,43,180,	//# 859, ticks 11128, elapsed 1, channel: 0 event ('note', 11128, 2, 43, 90)
	0,73,1,	//# 860, ticks 11132, elapsed 0, channel: 1 event ('note', 11132, 5, 73, 0)
	0,201,0,	//# 861, ticks 11132, elapsed 0, channel: 2 event ('note', 11132, 6, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	0,55,173,	//# 863, ticks 11136, elapsed 0, channel: 1 event ('note', 11136, 1, 55, 86)
	8,204,1,	//# 864, ticks 11184, elapsed 8, channel: 3 event ('note', 11184, 5, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	4,55,1,	//# 868, ticks 11208, elapsed 4, channel: 1 event ('note', 11208, 3, 55, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	2,76,213,	//# 870, ticks 11220, elapsed 2, channel: 1 event ('note', 11220, 8, 76, 106)
	0,43,0,	//# 871, ticks 11224, elapsed 0, channel: 0 event ('note', 11224, 2, 43, 0)
	0,76,188,	//# 872, ticks 11228, elapsed 0, channel: 0 event ('note', 11228, 5, 76, 94)
	0,204,188,	//# 873, ticks 11228, elapsed 0, channel: 2 event ('note', 11228, 6, 76, 94)
	14,182,199,	//# 874, ticks 11312, elapsed 14, channel: 3 event ('note', 11312, 3, 54, 99)
	0,69,164,	//# 875, ticks 11312, elapsed 0, channel: 0 event ('note', 11312, 7, 69, 82)
	0,74,196,	//# 876, ticks 11312, elapsed 0, channel: 0 event ('note', 11312, 8, 74, 98)
	1,170,198,	//# 877, ticks 11320, elapsed 1, channel: 2 event ('note', 11320, 2, 42, 99)
	1,54,188,	//# 878, ticks 11328, elapsed 1, channel: 0 event ('note', 11328, 1, 54, 94)
	0,74,178,	//# 879, ticks 11328, elapsed 0, channel: 0 event ('note', 11328, 5, 74, 89)
	0,74,178,	//# 880, ticks 11328, elapsed 0, channel: 0 event ('note', 11328, 6, 74, 89)
	0,76,1,	//# 881, ticks 11328, elapsed 0, channel: 1 event ('note', 11328, 8, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	9,74,0,	//# 884, ticks 11384, elapsed 9, channel: 0 event ('note', 11384, 8, 74, 0)
	1,182,1,	//# 885, ticks 11392, elapsed 1, channel: 3 event ('note', 11392, 3, 54, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	3,170,0,	//# 890, ticks 11412, elapsed 3, channel: 2 event ('note', 11412, 2, 42, 0)
	0,74,204,	//# 891, ticks 11412, elapsed 0, channel: 0 event ('note', 11412, 8, 74, 102)
	1,74,199,	//# 892, ticks 11420, elapsed 1, channel: 1 event ('note', 11420, 5, 74, 99)
	0,202,198,	//# 893, ticks 11420, elapsed 0, channel: 2 event ('note', 11420, 6, 74, 99)
	13,207,207,	//# 894, ticks 11500, elapsed 13, channel: 3 event ('note', 11500, 8, 79, 103)
	0,61,159,	//# 895, ticks 11504, elapsed 0, channel: 1 event ('note', 11504, 7, 61, 79)
	1,40,179,	//# 896, ticks 11512, elapsed 1, channel: 1 event ('note', 11512, 2, 40, 89)
	0,79,173,	//# 897, ticks 11516, elapsed 0, channel: 1 event ('note', 11516, 5, 79, 86)
	0,79,173,	//# 898, ticks 11516, elapsed 0, channel: 1 event ('note', 11516, 6, 79, 86)
	0,52,177,	//# 899, ticks 11520, elapsed 0, channel: 1 event ('note', 11520, 1, 52, 88)
	0,52,185,	//# 900, ticks 11520, elapsed 0, channel: 1 event ('note', 11520, 3, 52, 92)
	2,74,0,	//# 901, ticks 11536, elapsed 2, channel: 0 event ('note', 11536, 8, 74, 0)
	2,202,0,	//# 902, ticks 11548, elapsed 2, channel: 2 event ('note', 11548, 5, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	4,207,1,	//# 904, ticks 11576, elapsed 4, channel: 3 event ('note', 11576, 5, 79, 0)
	// Note off skipped, note 79 not found in channels, probably interrupted
	// Note off skipped, note 79 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	3,52,1,	//# 908, ticks 11596, elapsed 3, channel: 1 event ('note', 11596, 3, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	0,79,222,	//# 910, ticks 11600, elapsed 0, channel: 0 event ('note', 11600, 8, 79, 111)
	// Note off skipped, note 40 not found in channels, probably interrupted
	2,79,197,	//# 912, ticks 11612, elapsed 2, channel: 1 event ('note', 11612, 5, 79, 98)
	0,207,196,	//# 913, ticks 11612, elapsed 0, channel: 2 event ('note', 11612, 6, 79, 98)
	13,190,163,	//# 914, ticks 11688, elapsed 13, channel: 3 event ('note', 11688, 7, 62, 81)
	0,206,199,	//# 915, ticks 11692, elapsed 0, channel: 3 event ('note', 11692, 8, 78, 99)
	1,50,179,	//# 916, ticks 11700, elapsed 1, channel: 1 event ('note', 11700, 3, 50, 89)
	1,38,179,	//# 917, ticks 11708, elapsed 1, channel: 1 event ('note', 11708, 2, 38, 89)
	0,78,223,	//# 918, ticks 11708, elapsed 0, channel: 1 event ('note', 11708, 5, 78, 111)
	0,206,222,	//# 919, ticks 11708, elapsed 0, channel: 2 event ('note', 11708, 6, 78, 111)
	0,178,187,	//# 920, ticks 11712, elapsed 0, channel: 3 event ('note', 11712, 1, 50, 93)
	2,79,0,	//# 921, ticks 11728, elapsed 2, channel: 0 event ('note', 11728, 8, 79, 0)
	// Note off skipped, note 79 not found in channels, probably interrupted
	// Note off skipped, note 79 not found in channels, probably interrupted
	7,78,1,	//# 924, ticks 11772, elapsed 7, channel: 1 event ('note', 11772, 8, 78, 0)
	0,206,0,	//# 925, ticks 11776, elapsed 0, channel: 2 event ('note', 11776, 5, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	1,178,1,	//# 927, ticks 11784, elapsed 1, channel: 3 event ('note', 11784, 1, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	2,78,214,	//# 929, ticks 11796, elapsed 2, channel: 0 event ('note', 11796, 8, 78, 107)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	1,78,203,	//# 932, ticks 11804, elapsed 1, channel: 1 event ('note', 11804, 5, 78, 101)
	0,206,202,	//# 933, ticks 11804, elapsed 0, channel: 2 event ('note', 11804, 6, 78, 101)
	15,177,191,	//# 934, ticks 11892, elapsed 15, channel: 3 event ('note', 11892, 3, 49, 95)
	0,211,191,	//# 935, ticks 11892, elapsed 0, channel: 3 event ('note', 11892, 8, 83, 95)
	0,211,175,	//# 936, ticks 11896, elapsed 0, channel: 3 event ('note', 11896, 5, 83, 87)
	0,211,175,	//# 937, ticks 11896, elapsed 0, channel: 3 event ('note', 11896, 6, 83, 87)
	0,165,199,	//# 938, ticks 11900, elapsed 0, channel: 3 event ('note', 11900, 2, 37, 99)
	0,192,141,	//# 939, ticks 11900, elapsed 0, channel: 3 event ('note', 11900, 7, 64, 70)
	0,177,201,	//# 940, ticks 11904, elapsed 0, channel: 3 event ('note', 11904, 1, 49, 100)
	3,78,0,	//# 941, ticks 11924, elapsed 3, channel: 0 event ('note', 11924, 5, 78, 0)
	0,78,1,	//# 942, ticks 11924, elapsed 0, channel: 1 event ('note', 11924, 6, 78, 0)
	0,206,0,	//# 943, ticks 11924, elapsed 0, channel: 2 event ('note', 11924, 8, 78, 0)
	// Note off skipped, note 83 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	9,177,1,	//# 947, ticks 11976, elapsed 9, channel: 3 event ('note', 11976, 3, 49, 0)
	// Note off skipped, note 49 not found in channels, probably interrupted
	// Note off skipped, note 37 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	2,83,184,	//# 951, ticks 11992, elapsed 2, channel: 0 event ('note', 11992, 5, 83, 92)
	0,83,185,	//# 952, ticks 11992, elapsed 0, channel: 1 event ('note', 11992, 6, 83, 92)
	0,211,202,	//# 953, ticks 11992, elapsed 0, channel: 2 event ('note', 11992, 8, 83, 101)
	15,189,127,	//# 954, ticks 12080, elapsed 15, channel: 3 event ('note', 12080, 7, 61, 63)
	0,209,203,	//# 955, ticks 12080, elapsed 0, channel: 3 event ('note', 12080, 8, 81, 101)
	0,45,180,	//# 956, ticks 12084, elapsed 0, channel: 0 event ('note', 12084, 3, 45, 90)
	0,33,182,	//# 957, ticks 12088, elapsed 0, channel: 0 event ('note', 12088, 2, 33, 91)
	0,81,186,	//# 958, ticks 12088, elapsed 0, channel: 0 event ('note', 12088, 5, 81, 93)
	0,81,187,	//# 959, ticks 12088, elapsed 0, channel: 1 event ('note', 12088, 6, 81, 93)
	1,45,188,	//# 960, ticks 12096, elapsed 1, channel: 0 event ('note', 12096, 1, 45, 94)
	4,211,0,	//# 961, ticks 12124, elapsed 4, channel: 2 event ('note', 12124, 8, 83, 0)
	// Note off skipped, note 83 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	4,81,1,	//# 964, ticks 12152, elapsed 4, channel: 1 event ('note', 12152, 8, 81, 0)
	1,209,1,	//# 965, ticks 12160, elapsed 1, channel: 3 event ('note', 12160, 5, 81, 0)
	// Note off skipped, note 81 not found in channels, probably interrupted
	0,45,0,	//# 967, ticks 12164, elapsed 0, channel: 0 event ('note', 12164, 3, 45, 0)
	2,81,224,	//# 968, ticks 12180, elapsed 2, channel: 0 event ('note', 12180, 8, 81, 112)
	// Note off skipped, note 33 not found in channels, probably interrupted
	1,81,193,	//# 970, ticks 12188, elapsed 1, channel: 1 event ('note', 12188, 5, 81, 96)
	0,209,192,	//# 971, ticks 12188, elapsed 0, channel: 2 event ('note', 12188, 6, 81, 96)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	15,178,181,	//# 974, ticks 12276, elapsed 15, channel: 3 event ('note', 12276, 3, 50, 90)
	0,81,0,	//# 975, ticks 12276, elapsed 0, channel: 0 event ('note', 12276, 5, 81, 0)
	0,81,1,	//# 976, ticks 12276, elapsed 0, channel: 1 event ('note', 12276, 6, 81, 0)
	0,79,226,	//# 977, ticks 12280, elapsed 0, channel: 0 event ('note', 12280, 8, 79, 113)
	0,38,179,	//# 978, ticks 12284, elapsed 0, channel: 1 event ('note', 12284, 2, 38, 89)
	0,62,143,	//# 979, ticks 12284, elapsed 0, channel: 1 event ('note', 12284, 7, 62, 71)
	0,209,0,	//# 980, ticks 12284, elapsed 0, channel: 2 event ('note', 12284, 8, 81, 0)
	0,178,176,	//# 981, ticks 12288, elapsed 0, channel: 2 event ('note', 12288, 1, 50, 88)
	0,79,193,	//# 982, ticks 12288, elapsed 0, channel: 1 event ('note', 12288, 5, 79, 96)
	0,207,192,	//# 983, ticks 12288, elapsed 0, channel: 2 event ('note', 12288, 6, 79, 96)
	12,178,1,	//# 984, ticks 12360, elapsed 12, channel: 3 event ('note', 12360, 3, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	2,206,205,	//# 987, ticks 12372, elapsed 2, channel: 3 event ('note', 12372, 8, 78, 102)
	0,78,161,	//# 988, ticks 12376, elapsed 0, channel: 1 event ('note', 12376, 5, 78, 80)
	0,78,161,	//# 989, ticks 12376, elapsed 0, channel: 1 event ('note', 12376, 6, 78, 80)
	2,79,0,	//# 990, ticks 12388, elapsed 2, channel: 0 event ('note', 12388, 5, 79, 0)
	0,207,0,	//# 991, ticks 12388, elapsed 0, channel: 2 event ('note', 12388, 6, 79, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 79 not found in channels, probably interrupted
	13,76,186,	//# 994, ticks 12464, elapsed 13, channel: 0 event ('note', 12464, 8, 76, 93)
	1,204,162,	//# 995, ticks 12472, elapsed 1, channel: 2 event ('note', 12472, 5, 76, 81)
	0,76,163,	//# 996, ticks 12472, elapsed 0, channel: 1 event ('note', 12472, 6, 76, 81)
	0,54,193,	//# 997, ticks 12476, elapsed 0, channel: 1 event ('note', 12476, 3, 54, 96)
	0,197,182,	//# 998, ticks 12476, elapsed 0, channel: 2 event ('note', 12476, 7, 69, 91)
	0,182,188,	//# 999, ticks 12480, elapsed 0, channel: 2 event ('note', 12480, 1, 54, 94)
	0,42,194,	//# 1000, ticks 12480, elapsed 0, channel: 0 event ('note', 12480, 2, 42, 97)
	0,206,1,	//# 1001, ticks 12484, elapsed 0, channel: 3 event ('note', 12484, 5, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	12,54,1,	//# 1004, ticks 12556, elapsed 12, channel: 1 event ('note', 12556, 1, 54, 0)
	0,74,199,	//# 1005, ticks 12560, elapsed 0, channel: 1 event ('note', 12560, 5, 74, 99)
	0,202,199,	//# 1006, ticks 12560, elapsed 0, channel: 3 event ('note', 12560, 6, 74, 99)
	0,202,228,	//# 1007, ticks 12560, elapsed 0, channel: 2 event ('note', 12560, 8, 74, 114)
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	2,42,0,	//# 1010, ticks 12572, elapsed 2, channel: 0 event ('note', 12572, 2, 42, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	13,76,176,	//# 1014, ticks 12652, elapsed 13, channel: 0 event ('note', 12652, 8, 76, 88)
	0,76,178,	//# 1015, ticks 12656, elapsed 0, channel: 0 event ('note', 12656, 5, 76, 89)
	0,76,178,	//# 1016, ticks 12656, elapsed 0, channel: 0 event ('note', 12656, 6, 76, 89)
	2,55,170,	//# 1017, ticks 12672, elapsed 2, channel: 0 event ('note', 12672, 1, 55, 85)
	0,74,1,	//# 1018, ticks 12672, elapsed 0, channel: 1 event ('note', 12672, 5, 74, 0)
	0,202,0,	//# 1019, ticks 12672, elapsed 0, channel: 2 event ('note', 12672, 6, 74, 0)
	0,71,151,	//# 1020, ticks 12672, elapsed 0, channel: 1 event ('note', 12672, 7, 71, 75)
	0,171,176,	//# 1021, ticks 12676, elapsed 0, channel: 2 event ('note', 12676, 2, 43, 88)
	0,55,179,	//# 1022, ticks 12676, elapsed 0, channel: 1 event ('note', 12676, 3, 55, 89)
	0,202,1,	//# 1023, ticks 12676, elapsed 0, channel: 3 event ('note', 12676, 8, 74, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	24,171,0,	//# 1028, ticks 12820, elapsed 24, channel: 2 event ('note', 12820, 2, 43, 0)
	3,55,0,	//# 1029, ticks 12840, elapsed 3, channel: 0 event ('note', 12840, 3, 55, 0)
	1,57,166,	//# 1030, ticks 12848, elapsed 1, channel: 0 event ('note', 12848, 3, 57, 83)
	1,197,184,	//# 1031, ticks 12856, elapsed 1, channel: 2 event ('note', 12856, 5, 69, 92)
	0,197,185,	//# 1032, ticks 12856, elapsed 0, channel: 3 event ('note', 12856, 6, 69, 92)
	0,69,182,	//# 1033, ticks 12856, elapsed 0, channel: 0 event ('note', 12856, 8, 69, 91)
	1,57,167,	//# 1034, ticks 12864, elapsed 1, channel: 1 event ('note', 12864, 1, 57, 83)
	0,45,167,	//# 1035, ticks 12864, elapsed 0, channel: 1 event ('note', 12864, 2, 45, 83)
	0,73,145,	//# 1036, ticks 12868, elapsed 0, channel: 1 event ('note', 12868, 7, 73, 72)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	13,55,165,	//# 1040, ticks 12948, elapsed 13, channel: 1 event ('note', 12948, 3, 55, 82)
	0,71,179,	//# 1041, ticks 12948, elapsed 0, channel: 1 event ('note', 12948, 8, 71, 89)
	0,71,177,	//# 1042, ticks 12952, elapsed 0, channel: 1 event ('note', 12952, 5, 71, 88)
	0,71,177,	//# 1043, ticks 12952, elapsed 0, channel: 1 event ('note', 12952, 6, 71, 88)
	1,55,181,	//# 1044, ticks 12960, elapsed 1, channel: 1 event ('note', 12960, 1, 55, 90)
	0,43,151,	//# 1045, ticks 12960, elapsed 0, channel: 1 event ('note', 12960, 2, 43, 75)
	// Note off skipped, note 73 not found in channels, probably interrupted
	2,69,0,	//# 1047, ticks 12976, elapsed 2, channel: 0 event ('note', 12976, 5, 69, 0)
	0,197,0,	//# 1048, ticks 12976, elapsed 0, channel: 2 event ('note', 12976, 6, 69, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,197,1,	//# 1050, ticks 12980, elapsed 0, channel: 3 event ('note', 12980, 8, 69, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	8,43,1,	//# 1052, ticks 13028, elapsed 8, channel: 1 event ('note', 13028, 2, 43, 0)
	2,72,204,	//# 1053, ticks 13044, elapsed 2, channel: 0 event ('note', 13044, 8, 72, 102)
	0,72,173,	//# 1054, ticks 13048, elapsed 0, channel: 1 event ('note', 13048, 5, 72, 86)
	0,200,172,	//# 1055, ticks 13048, elapsed 0, channel: 2 event ('note', 13048, 6, 72, 86)
	0,197,157,	//# 1056, ticks 13048, elapsed 0, channel: 3 event ('note', 13048, 7, 69, 78)
	0,182,187,	//# 1057, ticks 13052, elapsed 0, channel: 3 event ('note', 13052, 3, 54, 93)
	0,54,197,	//# 1058, ticks 13056, elapsed 0, channel: 1 event ('note', 13056, 1, 54, 98)
	1,170,160,	//# 1059, ticks 13064, elapsed 1, channel: 2 event ('note', 13064, 2, 42, 80)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	11,197,192,	//# 1064, ticks 13128, elapsed 11, channel: 2 event ('note', 13128, 8, 69, 96)
	0,54,1,	//# 1065, ticks 13132, elapsed 0, channel: 1 event ('note', 13132, 3, 54, 0)
	2,69,183,	//# 1066, ticks 13144, elapsed 2, channel: 1 event ('note', 13144, 5, 69, 91)
	0,69,183,	//# 1067, ticks 13144, elapsed 0, channel: 1 event ('note', 13144, 6, 69, 91)
	0,182,1,	//# 1068, ticks 13148, elapsed 0, channel: 3 event ('note', 13148, 1, 54, 0)
	0,72,0,	//# 1069, ticks 13148, elapsed 0, channel: 0 event ('note', 13148, 8, 72, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 72 not found in channels, probably interrupted
	// Note off skipped, note 42 not found in channels, probably interrupted
	8,69,1,	//# 1073, ticks 13196, elapsed 8, channel: 1 event ('note', 13196, 7, 69, 0)
	5,67,178,	//# 1074, ticks 13228, elapsed 5, channel: 0 event ('note', 13228, 7, 67, 89)
	0,71,179,	//# 1075, ticks 13228, elapsed 0, channel: 1 event ('note', 13228, 8, 71, 89)
	0,171,179,	//# 1076, ticks 13232, elapsed 0, channel: 3 event ('note', 13232, 2, 43, 89)
	2,55,174,	//# 1077, ticks 13244, elapsed 2, channel: 0 event ('note', 13244, 3, 55, 87)
	0,55,148,	//# 1078, ticks 13248, elapsed 0, channel: 0 event ('note', 13248, 1, 55, 74)
	0,71,184,	//# 1079, ticks 13248, elapsed 0, channel: 0 event ('note', 13248, 5, 71, 92)
	0,71,185,	//# 1080, ticks 13248, elapsed 0, channel: 1 event ('note', 13248, 6, 71, 92)
	2,197,0,	//# 1081, ticks 13260, elapsed 2, channel: 2 event ('note', 13260, 8, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	9,202,202,	//# 1084, ticks 13316, elapsed 9, channel: 2 event ('note', 13316, 8, 74, 101)
	0,194,151,	//# 1085, ticks 13320, elapsed 0, channel: 3 event ('note', 13320, 7, 66, 75)
	// Note off skipped, note 67 not found in channels, probably interrupted
	2,202,135,	//# 1087, ticks 13336, elapsed 2, channel: 3 event ('note', 13336, 5, 74, 67)
	0,202,135,	//# 1088, ticks 13336, elapsed 0, channel: 3 event ('note', 13336, 6, 74, 67)
	0,71,0,	//# 1089, ticks 13336, elapsed 0, channel: 0 event ('note', 13336, 8, 71, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	4,71,1,	//# 1091, ticks 13360, elapsed 4, channel: 1 event ('note', 13360, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	9,73,220,	//# 1096, ticks 13416, elapsed 9, channel: 0 event ('note', 13416, 8, 73, 110)
	2,64,165,	//# 1097, ticks 13428, elapsed 2, channel: 1 event ('note', 13428, 7, 64, 82)
	1,201,201,	//# 1098, ticks 13436, elapsed 1, channel: 3 event ('note', 13436, 5, 73, 100)
	0,73,201,	//# 1099, ticks 13436, elapsed 0, channel: 1 event ('note', 13436, 6, 73, 100)
	0,202,0,	//# 1100, ticks 13436, elapsed 0, channel: 2 event ('note', 13436, 8, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	13,204,178,	//# 1104, ticks 13512, elapsed 13, channel: 2 event ('note', 13512, 8, 76, 89)
	1,204,154,	//# 1105, ticks 13520, elapsed 1, channel: 2 event ('note', 13520, 5, 76, 77)
	0,204,154,	//# 1106, ticks 13520, elapsed 0, channel: 2 event ('note', 13520, 6, 76, 77)
	2,73,0,	//# 1107, ticks 13532, elapsed 2, channel: 0 event ('note', 13532, 8, 73, 0)
	3,73,1,	//# 1108, ticks 13552, elapsed 3, channel: 1 event ('note', 13552, 5, 73, 0)
	0,201,1,	//# 1109, ticks 13552, elapsed 0, channel: 3 event ('note', 13552, 6, 73, 0)
	9,204,0,	//# 1110, ticks 13604, elapsed 9, channel: 2 event ('note', 13604, 5, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	1,69,206,	//# 1113, ticks 13612, elapsed 1, channel: 0 event ('note', 13612, 8, 69, 103)
	0,37,199,	//# 1114, ticks 13616, elapsed 0, channel: 1 event ('note', 13616, 2, 37, 99)
	0,197,186,	//# 1115, ticks 13620, elapsed 0, channel: 2 event ('note', 13620, 5, 69, 93)
	0,197,187,	//# 1116, ticks 13620, elapsed 0, channel: 3 event ('note', 13620, 6, 69, 93)
	0,192,150,	//# 1117, ticks 13620, elapsed 0, channel: 2 event ('note', 13620, 7, 64, 75)
	0,177,190,	//# 1118, ticks 13624, elapsed 0, channel: 2 event ('note', 13624, 3, 49, 95)
	1,177,189,	//# 1119, ticks 13632, elapsed 1, channel: 3 event ('note', 13632, 1, 49, 94)
	6,37,1,	//# 1120, ticks 13668, elapsed 6, channel: 1 event ('note', 13668, 2, 37, 0)
	2,177,0,	//# 1121, ticks 13680, elapsed 2, channel: 2 event ('note', 13680, 1, 49, 0)
	0,177,1,	//# 1122, ticks 13684, elapsed 0, channel: 3 event ('note', 13684, 3, 49, 0)
	4,67,177,	//# 1123, ticks 13708, elapsed 4, channel: 1 event ('note', 13708, 5, 67, 88)
	0,195,176,	//# 1124, ticks 13708, elapsed 0, channel: 2 event ('note', 13708, 6, 67, 88)
	// Note off skipped, note 64 not found in channels, probably interrupted
	1,195,225,	//# 1126, ticks 13716, elapsed 1, channel: 3 event ('note', 13716, 8, 67, 112)
	0,37,185,	//# 1127, ticks 13720, elapsed 0, channel: 1 event ('note', 13720, 2, 37, 92)
	0,69,0,	//# 1128, ticks 13720, elapsed 0, channel: 0 event ('note', 13720, 5, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	1,49,174,	//# 1130, ticks 13728, elapsed 1, channel: 0 event ('note', 13728, 1, 49, 87)
	0,49,196,	//# 1131, ticks 13728, elapsed 0, channel: 0 event ('note', 13728, 3, 49, 98)
	// Note off skipped, note 69 not found in channels, probably interrupted
	8,37,1,	//# 1133, ticks 13776, elapsed 8, channel: 1 event ('note', 13776, 2, 37, 0)
	0,49,0,	//# 1134, ticks 13780, elapsed 0, channel: 0 event ('note', 13780, 3, 49, 0)
	// Note off skipped, note 49 not found in channels, probably interrupted
	4,66,212,	//# 1136, ticks 13804, elapsed 4, channel: 0 event ('note', 13804, 5, 66, 106)
	0,66,213,	//# 1137, ticks 13804, elapsed 0, channel: 1 event ('note', 13804, 6, 66, 106)
	1,194,230,	//# 1138, ticks 13812, elapsed 1, channel: 2 event ('note', 13812, 8, 66, 115)
	0,50,176,	//# 1139, ticks 13816, elapsed 0, channel: 0 event ('note', 13816, 3, 50, 88)
	0,57,164,	//# 1140, ticks 13816, elapsed 0, channel: 0 event ('note', 13816, 7, 57, 82)
	0,38,182,	//# 1141, ticks 13820, elapsed 0, channel: 0 event ('note', 13820, 2, 38, 91)
	0,50,166,	//# 1142, ticks 13824, elapsed 0, channel: 0 event ('note', 13824, 1, 50, 83)
	2,195,1,	//# 1143, ticks 13836, elapsed 2, channel: 3 event ('note', 13836, 5, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	3,50,0,	//# 1146, ticks 13856, elapsed 3, channel: 0 event ('note', 13856, 3, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	8,50,174,	//# 1150, ticks 13904, elapsed 8, channel: 0 event ('note', 13904, 3, 50, 87)
	0,190,173,	//# 1151, ticks 13908, elapsed 0, channel: 3 event ('note', 13908, 5, 62, 86)
	0,190,173,	//# 1152, ticks 13908, elapsed 0, channel: 3 event ('note', 13908, 6, 62, 86)
	0,190,195,	//# 1153, ticks 13908, elapsed 0, channel: 3 event ('note', 13908, 8, 62, 97)
	1,38,174,	//# 1154, ticks 13916, elapsed 1, channel: 0 event ('note', 13916, 2, 38, 87)
	0,50,156,	//# 1155, ticks 13920, elapsed 0, channel: 0 event ('note', 13920, 1, 50, 78)
	2,66,1,	//# 1156, ticks 13932, elapsed 2, channel: 1 event ('note', 13932, 5, 66, 0)
	0,194,0,	//# 1157, ticks 13932, elapsed 0, channel: 2 event ('note', 13932, 6, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	4,50,0,	//# 1159, ticks 13960, elapsed 4, channel: 0 event ('note', 13960, 3, 50, 0)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	5,57,142,	//# 1162, ticks 13992, elapsed 5, channel: 0 event ('note', 13992, 7, 57, 71)
	0,49,187,	//# 1163, ticks 13996, elapsed 0, channel: 1 event ('note', 13996, 3, 49, 93)
	1,192,182,	//# 1164, ticks 14004, elapsed 1, channel: 2 event ('note', 14004, 8, 64, 91)
	0,37,184,	//# 1165, ticks 14008, elapsed 0, channel: 0 event ('note', 14008, 2, 37, 92)
	0,192,170,	//# 1166, ticks 14008, elapsed 0, channel: 2 event ('note', 14008, 5, 64, 85)
	0,192,170,	//# 1167, ticks 14008, elapsed 0, channel: 2 event ('note', 14008, 6, 64, 85)
	1,177,176,	//# 1168, ticks 14016, elapsed 1, channel: 2 event ('note', 14016, 1, 49, 88)
	3,190,1,	//# 1169, ticks 14036, elapsed 3, channel: 3 event ('note', 14036, 5, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	2,49,1,	//# 1172, ticks 14048, elapsed 2, channel: 1 event ('note', 14048, 3, 49, 0)
	1,37,0,	//# 1173, ticks 14056, elapsed 1, channel: 0 event ('note', 14056, 2, 37, 0)
	2,177,0,	//# 1174, ticks 14068, elapsed 2, channel: 2 event ('note', 14068, 1, 49, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	4,49,194,	//# 1176, ticks 14092, elapsed 4, channel: 0 event ('note', 14092, 3, 49, 97)
	0,67,201,	//# 1177, ticks 14096, elapsed 0, channel: 1 event ('note', 14096, 8, 67, 100)
	0,165,204,	//# 1178, ticks 14100, elapsed 0, channel: 2 event ('note', 14100, 2, 37, 102)
	0,195,173,	//# 1179, ticks 14100, elapsed 0, channel: 3 event ('note', 14100, 5, 67, 86)
	0,195,173,	//# 1180, ticks 14100, elapsed 0, channel: 3 event ('note', 14100, 6, 67, 86)
	2,177,155,	//# 1181, ticks 14112, elapsed 2, channel: 3 event ('note', 14112, 1, 49, 77)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	6,49,0,	//# 1185, ticks 14148, elapsed 6, channel: 0 event ('note', 14148, 3, 49, 0)
	0,165,0,	//# 1186, ticks 14152, elapsed 0, channel: 2 event ('note', 14152, 2, 37, 0)
	2,177,1,	//# 1187, ticks 14168, elapsed 2, channel: 3 event ('note', 14168, 1, 49, 0)
	2,50,178,	//# 1188, ticks 14180, elapsed 2, channel: 0 event ('note', 14180, 3, 50, 89)
	1,194,236,	//# 1189, ticks 14188, elapsed 1, channel: 2 event ('note', 14188, 8, 66, 118)
	0,185,121,	//# 1190, ticks 14192, elapsed 0, channel: 3 event ('note', 14192, 7, 57, 60)
	0,166,177,	//# 1191, ticks 14196, elapsed 0, channel: 3 event ('note', 14196, 2, 38, 88)
	0,194,203,	//# 1192, ticks 14196, elapsed 0, channel: 3 event ('note', 14196, 5, 66, 101)
	0,66,202,	//# 1193, ticks 14196, elapsed 0, channel: 0 event ('note', 14196, 6, 66, 101)
	2,50,149,	//# 1194, ticks 14208, elapsed 2, channel: 1 event ('note', 14208, 1, 50, 74)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	4,50,1,	//# 1198, ticks 14232, elapsed 4, channel: 1 event ('note', 14232, 3, 50, 0)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	8,50,197,	//# 1201, ticks 14280, elapsed 8, channel: 1 event ('note', 14280, 3, 50, 98)
	// Note off skipped, note 57 not found in channels, probably interrupted
	1,69,177,	//# 1203, ticks 14288, elapsed 1, channel: 1 event ('note', 14288, 5, 69, 88)
	0,69,177,	//# 1204, ticks 14288, elapsed 0, channel: 1 event ('note', 14288, 6, 69, 88)
	0,69,209,	//# 1205, ticks 14288, elapsed 0, channel: 1 event ('note', 14288, 8, 69, 104)
	1,38,174,	//# 1206, ticks 14296, elapsed 1, channel: 0 event ('note', 14296, 2, 38, 87)
	1,50,158,	//# 1207, ticks 14304, elapsed 1, channel: 0 event ('note', 14304, 1, 50, 79)
	0,194,0,	//# 1208, ticks 14304, elapsed 0, channel: 2 event ('note', 14304, 5, 66, 0)
	0,194,1,	//# 1209, ticks 14304, elapsed 0, channel: 3 event ('note', 14304, 6, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	6,50,0,	//# 1211, ticks 14340, elapsed 6, channel: 0 event ('note', 14340, 3, 50, 0)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	6,42,176,	//# 1214, ticks 14376, elapsed 6, channel: 0 event ('note', 14376, 3, 42, 88)
	0,190,184,	//# 1215, ticks 14376, elapsed 0, channel: 2 event ('note', 14376, 8, 62, 92)
	1,185,165,	//# 1216, ticks 14384, elapsed 1, channel: 3 event ('note', 14384, 7, 57, 82)
	0,69,1,	//# 1217, ticks 14384, elapsed 0, channel: 1 event ('note', 14384, 8, 69, 0)
	0,30,181,	//# 1218, ticks 14388, elapsed 0, channel: 1 event ('note', 14388, 2, 30, 90)
	0,190,155,	//# 1219, ticks 14388, elapsed 0, channel: 3 event ('note', 14388, 5, 62, 77)
	0,190,155,	//# 1220, ticks 14388, elapsed 0, channel: 3 event ('note', 14388, 6, 62, 77)
	2,170,181,	//# 1221, ticks 14400, elapsed 2, channel: 3 event ('note', 14400, 1, 42, 90)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	3,42,0,	//# 1224, ticks 14420, elapsed 3, channel: 0 event ('note', 14420, 3, 42, 0)
	2,30,1,	//# 1225, ticks 14436, elapsed 2, channel: 1 event ('note', 14436, 2, 30, 0)
	2,170,1,	//# 1226, ticks 14448, elapsed 2, channel: 3 event ('note', 14448, 1, 42, 0)
	3,42,174,	//# 1227, ticks 14468, elapsed 3, channel: 0 event ('note', 14468, 3, 42, 87)
	0,61,175,	//# 1228, ticks 14468, elapsed 0, channel: 1 event ('note', 14468, 8, 61, 87)
	// Note off skipped, note 57 not found in channels, probably interrupted
	2,189,197,	//# 1230, ticks 14484, elapsed 2, channel: 3 event ('note', 14484, 5, 61, 98)
	0,61,196,	//# 1231, ticks 14484, elapsed 0, channel: 0 event ('note', 14484, 6, 61, 98)
	0,30,179,	//# 1232, ticks 14488, elapsed 0, channel: 1 event ('note', 14488, 2, 30, 89)
	0,190,0,	//# 1233, ticks 14492, elapsed 0, channel: 2 event ('note', 14492, 8, 62, 0)
	0,170,162,	//# 1234, ticks 14496, elapsed 0, channel: 2 event ('note', 14496, 1, 42, 81)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	4,170,0,	//# 1237, ticks 14520, elapsed 4, channel: 2 event ('note', 14520, 3, 42, 0)
	4,30,1,	//# 1238, ticks 14544, elapsed 4, channel: 1 event ('note', 14544, 2, 30, 0)
	// Note off skipped, note 42 not found in channels, probably interrupted
	6,59,187,	//# 1240, ticks 14580, elapsed 6, channel: 1 event ('note', 14580, 8, 59, 93)
	0,171,192,	//# 1241, ticks 14584, elapsed 0, channel: 2 event ('note', 14584, 3, 43, 96)
	0,59,143,	//# 1242, ticks 14584, elapsed 0, channel: 1 event ('note', 14584, 5, 59, 71)
	0,59,143,	//# 1243, ticks 14584, elapsed 0, channel: 1 event ('note', 14584, 6, 59, 71)
	0,50,163,	//# 1244, ticks 14584, elapsed 0, channel: 1 event ('note', 14584, 7, 50, 81)
	1,43,199,	//# 1245, ticks 14592, elapsed 1, channel: 1 event ('note', 14592, 1, 43, 99)
	0,61,0,	//# 1246, ticks 14592, elapsed 0, channel: 0 event ('note', 14592, 5, 61, 0)
	0,189,1,	//# 1247, ticks 14592, elapsed 0, channel: 3 event ('note', 14592, 6, 61, 0)
	1,31,182,	//# 1248, ticks 14600, elapsed 1, channel: 0 event ('note', 14600, 2, 31, 91)
	// Note off skipped, note 61 not found in channels, probably interrupted
	8,43,1,	//# 1250, ticks 14648, elapsed 8, channel: 1 event ('note', 14648, 1, 43, 0)
	1,171,0,	//# 1251, ticks 14656, elapsed 1, channel: 2 event ('note', 14656, 3, 43, 0)
	2,31,0,	//# 1252, ticks 14668, elapsed 2, channel: 0 event ('note', 14668, 2, 31, 0)
	1,67,206,	//# 1253, ticks 14676, elapsed 1, channel: 0 event ('note', 14676, 8, 67, 103)
	// Note off skipped, note 50 not found in channels, probably interrupted
	1,67,183,	//# 1255, ticks 14684, elapsed 1, channel: 1 event ('note', 14684, 5, 67, 91)
	0,195,182,	//# 1256, ticks 14684, elapsed 0, channel: 2 event ('note', 14684, 6, 67, 91)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	14,183,181,	//# 1260, ticks 14768, elapsed 14, channel: 3 event ('note', 14768, 3, 55, 90)
	1,190,141,	//# 1261, ticks 14776, elapsed 1, channel: 3 event ('note', 14776, 7, 62, 70)
	0,194,179,	//# 1262, ticks 14776, elapsed 0, channel: 3 event ('note', 14776, 8, 66, 89)
	0,171,171,	//# 1263, ticks 14780, elapsed 0, channel: 3 event ('note', 14780, 2, 43, 85)
	0,183,171,	//# 1264, ticks 14784, elapsed 0, channel: 3 event ('note', 14784, 1, 55, 85)
	0,194,223,	//# 1265, ticks 14784, elapsed 0, channel: 3 event ('note', 14784, 5, 66, 111)
	0,66,223,	//# 1266, ticks 14784, elapsed 0, channel: 1 event ('note', 14784, 6, 66, 111)
	2,67,0,	//# 1267, ticks 14796, elapsed 2, channel: 0 event ('note', 14796, 5, 67, 0)
	0,195,0,	//# 1268, ticks 14796, elapsed 0, channel: 2 event ('note', 14796, 6, 67, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 43 not found in channels, probably interrupted
	// Note off skipped, note 55 not found in channels, probably interrupted
	13,64,186,	//# 1273, ticks 14872, elapsed 13, channel: 0 event ('note', 14872, 8, 64, 93)
	0,192,156,	//# 1274, ticks 14876, elapsed 0, channel: 2 event ('note', 14876, 5, 64, 78)
	0,192,156,	//# 1275, ticks 14876, elapsed 0, channel: 2 event ('note', 14876, 6, 64, 78)
	// Note off skipped, note 62 not found in channels, probably interrupted
	2,66,1,	//# 1277, ticks 14888, elapsed 2, channel: 1 event ('note', 14888, 5, 66, 0)
	0,194,1,	//# 1278, ticks 14888, elapsed 0, channel: 3 event ('note', 14888, 6, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	9,66,225,	//# 1280, ticks 14940, elapsed 9, channel: 1 event ('note', 14940, 8, 66, 112)
	1,194,137,	//# 1281, ticks 14948, elapsed 1, channel: 3 event ('note', 14948, 5, 66, 68)
	0,194,137,	//# 1282, ticks 14948, elapsed 0, channel: 3 event ('note', 14948, 6, 66, 68)
	0,64,0,	//# 1283, ticks 14952, elapsed 0, channel: 0 event ('note', 14952, 5, 64, 0)
	0,192,0,	//# 1284, ticks 14952, elapsed 0, channel: 2 event ('note', 14952, 6, 64, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	0,57,178,	//# 1286, ticks 14956, elapsed 0, channel: 0 event ('note', 14956, 3, 57, 89)
	2,173,166,	//# 1287, ticks 14968, elapsed 2, channel: 2 event ('note', 14968, 2, 45, 83)
	0,189,149,	//# 1288, ticks 14972, elapsed 0, channel: 3 event ('note', 14972, 7, 61, 74)
	0,185,169,	//# 1289, ticks 14976, elapsed 0, channel: 3 event ('note', 14976, 1, 57, 84)
	0,66,1,	//# 1290, ticks 14976, elapsed 0, channel: 1 event ('note', 14976, 8, 66, 0)
	0,64,179,	//# 1291, ticks 14976, elapsed 0, channel: 1 event ('note', 14976, 8, 64, 89)
	// Note off skipped, note 66 not found in channels, probably interrupted
	2,192,124,	//# 1293, ticks 14988, elapsed 2, channel: 2 event ('note', 14988, 5, 64, 62)
	// Note off skipped, note 66 not found in channels, probably interrupted
	0,192,124,	//# 1295, ticks 14988, elapsed 0, channel: 2 event ('note', 14988, 6, 64, 62)
	1,194,212,	//# 1296, ticks 14996, elapsed 1, channel: 2 event ('note', 14996, 8, 66, 106)
	2,194,167,	//# 1297, ticks 15008, elapsed 2, channel: 3 event ('note', 15008, 5, 66, 83)
	0,194,167,	//# 1298, ticks 15008, elapsed 0, channel: 3 event ('note', 15008, 6, 66, 83)
	4,57,0,	//# 1299, ticks 15036, elapsed 4, channel: 0 event ('note', 15036, 3, 57, 0)
	0,194,0,	//# 1300, ticks 15040, elapsed 0, channel: 2 event ('note', 15040, 8, 66, 0)
	0,194,1,	//# 1301, ticks 15044, elapsed 0, channel: 3 event ('note', 15044, 5, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	18,67,146,	//# 1306, ticks 15152, elapsed 18, channel: 0 event ('note', 15152, 7, 67, 73)
	2,173,192,	//# 1307, ticks 15164, elapsed 2, channel: 2 event ('note', 15164, 3, 45, 96)
	0,173,175,	//# 1308, ticks 15168, elapsed 0, channel: 3 event ('note', 15168, 1, 45, 87)
	0,33,178,	//# 1309, ticks 15172, elapsed 0, channel: 0 event ('note', 15172, 2, 33, 89)
	13,173,0,	//# 1310, ticks 15248, elapsed 13, channel: 2 event ('note', 15248, 1, 45, 0)
	0,173,1,	//# 1311, ticks 15248, elapsed 0, channel: 3 event ('note', 15248, 3, 45, 0)
	0,190,192,	//# 1312, ticks 15252, elapsed 0, channel: 2 event ('note', 15252, 8, 62, 96)
	0,33,0,	//# 1313, ticks 15256, elapsed 0, channel: 0 event ('note', 15256, 2, 33, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	2,62,170,	//# 1315, ticks 15268, elapsed 2, channel: 0 event ('note', 15268, 5, 62, 85)
	0,190,171,	//# 1316, ticks 15268, elapsed 0, channel: 3 event ('note', 15268, 6, 62, 85)
	0,64,1,	//# 1317, ticks 15268, elapsed 0, channel: 1 event ('note', 15268, 8, 64, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	11,62,0,	//# 1320, ticks 15336, elapsed 11, channel: 0 event ('note', 15336, 5, 62, 0)
	0,190,0,	//# 1321, ticks 15336, elapsed 0, channel: 2 event ('note', 15336, 6, 62, 0)
	1,190,1,	//# 1322, ticks 15344, elapsed 1, channel: 3 event ('note', 15344, 8, 62, 0)
	2,50,186,	//# 1323, ticks 15356, elapsed 2, channel: 0 event ('note', 15356, 3, 50, 93)
	0,50,149,	//# 1324, ticks 15360, elapsed 0, channel: 1 event ('note', 15360, 1, 50, 74)
	0,190,184,	//# 1325, ticks 15360, elapsed 0, channel: 2 event ('note', 15360, 5, 62, 92)
	0,190,185,	//# 1326, ticks 15360, elapsed 0, channel: 3 event ('note', 15360, 6, 62, 92)
	0,66,133,	//# 1327, ticks 15360, elapsed 0, channel: 1 event ('note', 15360, 7, 66, 66)
	1,62,207,	//# 1328, ticks 15368, elapsed 1, channel: 1 event ('note', 15368, 8, 62, 103)
	1,154,178,	//# 1329, ticks 15376, elapsed 1, channel: 2 event ('note', 15376, 2, 26, 89)
	13,209,118,	//# 1330, ticks 15456, elapsed 13, channel: 2 event ('note', 15456, 1, 81, 59)
	8,207,158,	//# 1331, ticks 15504, elapsed 8, channel: 2 event ('note', 15504, 1, 79, 79)
	// Note off skipped, note 81 not found in channels, probably interrupted
	8,206,202,	//# 1333, ticks 15552, elapsed 8, channel: 2 event ('note', 15552, 1, 78, 101)
	1,202,185,	//# 1334, ticks 15560, elapsed 1, channel: 3 event ('note', 15560, 4, 74, 92)
	// Note off skipped, note 79 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	15,209,177,	//# 1337, ticks 15648, elapsed 15, channel: 3 event ('note', 15648, 1, 81, 88)
	0,62,1,	//# 1338, ticks 15648, elapsed 0, channel: 1 event ('note', 15648, 8, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 26 not found in channels, probably interrupted
	15,206,0,	//# 1342, ticks 15736, elapsed 15, channel: 2 event ('note', 15736, 1, 78, 0)
	0,50,0,	//# 1343, ticks 15740, elapsed 0, channel: 0 event ('note', 15740, 3, 50, 0)
	0,76,192,	//# 1344, ticks 15744, elapsed 0, channel: 0 event ('note', 15744, 1, 76, 96)
	1,73,207,	//# 1345, ticks 15752, elapsed 1, channel: 1 event ('note', 15752, 4, 73, 103)
	6,209,1,	//# 1346, ticks 15788, elapsed 6, channel: 3 event ('note', 15788, 1, 81, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	9,209,168,	//# 1349, ticks 15840, elapsed 9, channel: 2 event ('note', 15840, 1, 81, 84)
	10,76,0,	//# 1350, ticks 15900, elapsed 10, channel: 0 event ('note', 15900, 1, 76, 0)
	6,74,168,	//# 1351, ticks 15936, elapsed 6, channel: 0 event ('note', 15936, 1, 74, 84)
	3,199,153,	//# 1352, ticks 15956, elapsed 3, channel: 3 event ('note', 15956, 4, 71, 76)
	2,73,1,	//# 1353, ticks 15972, elapsed 2, channel: 1 event ('note', 15972, 4, 73, 0)
	0,209,0,	//# 1354, ticks 15976, elapsed 0, channel: 2 event ('note', 15976, 1, 81, 0)
	9,81,143,	//# 1355, ticks 16032, elapsed 9, channel: 1 event ('note', 16032, 1, 81, 71)
	4,74,0,	//# 1356, ticks 16056, elapsed 4, channel: 0 event ('note', 16056, 1, 74, 0)
	12,73,170,	//# 1357, ticks 16128, elapsed 12, channel: 0 event ('note', 16128, 1, 73, 85)
	5,81,1,	//# 1358, ticks 16160, elapsed 5, channel: 1 event ('note', 16160, 1, 81, 0)
	0,69,111,	//# 1359, ticks 16160, elapsed 0, channel: 1 event ('note', 16160, 4, 69, 55)
	3,199,1,	//# 1360, ticks 16180, elapsed 3, channel: 3 event ('note', 16180, 4, 71, 0)
	7,209,136,	//# 1361, ticks 16224, elapsed 7, channel: 2 event ('note', 16224, 1, 81, 68)
	1,73,0,	//# 1362, ticks 16232, elapsed 1, channel: 0 event ('note', 16232, 1, 73, 0)
	13,78,128,	//# 1363, ticks 16308, elapsed 13, channel: 0 event ('note', 16308, 5, 78, 64)
	0,206,129,	//# 1364, ticks 16308, elapsed 0, channel: 3 event ('note', 16308, 6, 78, 64)
	2,74,165,	//# 1365, ticks 16320, elapsed 2, channel: 1 event ('note', 16320, 1, 74, 82)
	4,209,0,	//# 1366, ticks 16348, elapsed 4, channel: 2 event ('note', 16348, 1, 81, 0)
	11,209,124,	//# 1367, ticks 16416, elapsed 11, channel: 2 event ('note', 16416, 1, 81, 62)
	3,74,1,	//# 1368, ticks 16436, elapsed 3, channel: 1 event ('note', 16436, 1, 74, 0)
	10,76,139,	//# 1369, ticks 16496, elapsed 10, channel: 1 event ('note', 16496, 5, 76, 69)
	0,204,138,	//# 1370, ticks 16496, elapsed 0, channel: 2 event ('note', 16496, 6, 76, 69)
	2,73,166,	//# 1371, ticks 16512, elapsed 2, channel: 0 event ('note', 16512, 1, 73, 83)
	// Note off skipped, note 81 not found in channels, probably interrupted
	4,206,1,	//# 1373, ticks 16540, elapsed 4, channel: 3 event ('note', 16540, 5, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	11,209,125,	//# 1375, ticks 16608, elapsed 11, channel: 3 event ('note', 16608, 1, 81, 62)
	1,73,0,	//# 1376, ticks 16616, elapsed 1, channel: 0 event ('note', 16616, 1, 73, 0)
	11,74,154,	//# 1377, ticks 16684, elapsed 11, channel: 0 event ('note', 16684, 5, 74, 77)
	0,202,155,	//# 1378, ticks 16684, elapsed 0, channel: 3 event ('note', 16684, 6, 74, 77)
	3,71,143,	//# 1379, ticks 16704, elapsed 3, channel: 1 event ('note', 16704, 1, 71, 71)
	0,204,0,	//# 1380, ticks 16704, elapsed 0, channel: 2 event ('note', 16704, 5, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 81 not found in channels, probably interrupted
	16,71,1,	//# 1383, ticks 16800, elapsed 16, channel: 1 event ('note', 16800, 1, 71, 0)
	0,81,121,	//# 1384, ticks 16800, elapsed 0, channel: 1 event ('note', 16800, 1, 81, 60)
	12,201,144,	//# 1385, ticks 16872, elapsed 12, channel: 2 event ('note', 16872, 5, 73, 72)
	0,73,145,	//# 1386, ticks 16872, elapsed 0, channel: 1 event ('note', 16872, 6, 73, 72)
	// Note off skipped, note 81 not found in channels, probably interrupted
	3,74,0,	//# 1388, ticks 16892, elapsed 3, channel: 0 event ('note', 16892, 5, 74, 0)
	0,202,1,	//# 1389, ticks 16892, elapsed 0, channel: 3 event ('note', 16892, 6, 74, 0)
	0,69,142,	//# 1390, ticks 16896, elapsed 0, channel: 0 event ('note', 16896, 1, 69, 71)
	16,185,119,	//# 1391, ticks 16992, elapsed 16, channel: 3 event ('note', 16992, 1, 57, 59)
	1,69,0,	//# 1392, ticks 17000, elapsed 1, channel: 0 event ('note', 17000, 4, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	14,83,188,	//# 1394, ticks 17084, elapsed 14, channel: 0 event ('note', 17084, 4, 83, 94)
	0,201,145,	//# 1395, ticks 17088, elapsed 0, channel: 3 event ('note', 17088, 1, 73, 72)
	0,55,117,	//# 1396, ticks 17088, elapsed 0, channel: 1 event ('note', 17088, 1, 55, 58)
	// Note off skipped, note 57 not found in channels, probably interrupted
	9,201,0,	//# 1398, ticks 17140, elapsed 9, channel: 2 event ('note', 17140, 1, 73, 0)
	2,199,154,	//# 1399, ticks 17152, elapsed 2, channel: 2 event ('note', 17152, 1, 71, 77)
	2,55,1,	//# 1400, ticks 17168, elapsed 2, channel: 1 event ('note', 17168, 1, 55, 0)
	2,57,109,	//# 1401, ticks 17184, elapsed 2, channel: 1 event ('note', 17184, 1, 57, 54)
	5,73,161,	//# 1402, ticks 17216, elapsed 5, channel: 1 event ('note', 17216, 1, 73, 80)
	0,199,0,	//# 1403, ticks 17220, elapsed 0, channel: 2 event ('note', 17220, 1, 71, 0)
	7,209,176,	//# 1404, ticks 17264, elapsed 7, channel: 2 event ('note', 17264, 4, 81, 88)
	2,202,161,	//# 1405, ticks 17280, elapsed 2, channel: 3 event ('note', 17280, 1, 74, 80)
	0,54,149,	//# 1406, ticks 17280, elapsed 0, channel: 1 event ('note', 17280, 1, 54, 74)
	// Note off skipped, note 57 not found in channels, probably interrupted
	2,83,0,	//# 1408, ticks 17292, elapsed 2, channel: 0 event ('note', 17292, 4, 83, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	9,202,1,	//# 1412, ticks 17344, elapsed 9, channel: 3 event ('note', 17344, 1, 74, 0)
	0,73,158,	//# 1413, ticks 17344, elapsed 0, channel: 0 event ('note', 17344, 1, 73, 79)
	4,54,1,	//# 1414, ticks 17368, elapsed 4, channel: 1 event ('note', 17368, 1, 54, 0)
	1,57,85,	//# 1415, ticks 17376, elapsed 1, channel: 1 event ('note', 17376, 1, 57, 42)
	3,73,0,	//# 1416, ticks 17396, elapsed 3, channel: 0 event ('note', 17396, 1, 73, 0)
	2,74,158,	//# 1417, ticks 17408, elapsed 2, channel: 0 event ('note', 17408, 1, 74, 79)
	9,207,177,	//# 1418, ticks 17460, elapsed 9, channel: 3 event ('note', 17460, 4, 79, 88)
	0,73,155,	//# 1419, ticks 17460, elapsed 0, channel: 1 event ('note', 17460, 5, 73, 77)
	0,73,155,	//# 1420, ticks 17460, elapsed 0, channel: 1 event ('note', 17460, 6, 73, 77)
	// Note off skipped, note 57 not found in channels, probably interrupted
	2,74,0,	//# 1422, ticks 17472, elapsed 2, channel: 0 event ('note', 17472, 1, 74, 0)
	0,76,166,	//# 1423, ticks 17472, elapsed 0, channel: 0 event ('note', 17472, 1, 76, 83)
	0,52,105,	//# 1424, ticks 17472, elapsed 0, channel: 1 event ('note', 17472, 1, 52, 52)
	2,209,0,	//# 1425, ticks 17484, elapsed 2, channel: 2 event ('note', 17484, 4, 81, 0)
	9,76,0,	//# 1426, ticks 17536, elapsed 9, channel: 0 event ('note', 17536, 1, 76, 0)
	0,74,154,	//# 1427, ticks 17536, elapsed 0, channel: 0 event ('note', 17536, 1, 74, 77)
	3,52,1,	//# 1428, ticks 17556, elapsed 3, channel: 1 event ('note', 17556, 1, 52, 0)
	2,57,109,	//# 1429, ticks 17568, elapsed 2, channel: 1 event ('note', 17568, 1, 57, 54)
	4,74,0,	//# 1430, ticks 17592, elapsed 4, channel: 0 event ('note', 17592, 1, 74, 0)
	1,76,156,	//# 1431, ticks 17600, elapsed 1, channel: 0 event ('note', 17600, 1, 76, 78)
	8,206,166,	//# 1432, ticks 17648, elapsed 8, channel: 2 event ('note', 17648, 4, 78, 83)
	0,62,225,	//# 1433, ticks 17652, elapsed 0, channel: 1 event ('note', 17652, 8, 62, 112)
	0,69,116,	//# 1434, ticks 17656, elapsed 0, channel: 0 event ('note', 17656, 7, 69, 58)
	0,50,176,	//# 1435, ticks 17660, elapsed 0, channel: 0 event ('note', 17660, 3, 50, 88)
	0,202,168,	//# 1436, ticks 17660, elapsed 0, channel: 2 event ('note', 17660, 5, 74, 84)
	0,202,168,	//# 1437, ticks 17660, elapsed 0, channel: 2 event ('note', 17660, 6, 74, 84)
	0,206,180,	//# 1438, ticks 17664, elapsed 0, channel: 2 event ('note', 17664, 1, 78, 90)
	0,50,124,	//# 1439, ticks 17664, elapsed 0, channel: 0 event ('note', 17664, 1, 50, 62)
	0,38,166,	//# 1440, ticks 17668, elapsed 0, channel: 0 event ('note', 17668, 2, 38, 83)
	0,207,1,	//# 1441, ticks 17668, elapsed 0, channel: 3 event ('note', 17668, 4, 79, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	4,62,1,	//# 1444, ticks 17696, elapsed 4, channel: 1 event ('note', 17696, 8, 62, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	6,62,205,	//# 1447, ticks 17736, elapsed 6, channel: 1 event ('note', 17736, 8, 62, 102)
	2,207,171,	//# 1448, ticks 17748, elapsed 2, channel: 3 event ('note', 17748, 4, 79, 85)
	0,67,162,	//# 1449, ticks 17748, elapsed 0, channel: 0 event ('note', 17748, 7, 67, 81)
	2,76,162,	//# 1450, ticks 17760, elapsed 2, channel: 0 event ('note', 17760, 1, 76, 81)
	0,206,0,	//# 1451, ticks 17760, elapsed 0, channel: 2 event ('note', 17760, 4, 78, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	11,194,200,	//# 1457, ticks 17828, elapsed 11, channel: 2 event ('note', 17828, 8, 66, 100)
	2,81,172,	//# 1458, ticks 17844, elapsed 2, channel: 0 event ('note', 17844, 4, 81, 86)
	0,62,1,	//# 1459, ticks 17848, elapsed 0, channel: 1 event ('note', 17848, 8, 62, 0)
	0,69,155,	//# 1460, ticks 17852, elapsed 0, channel: 1 event ('note', 17852, 5, 69, 77)
	0,69,155,	//# 1461, ticks 17852, elapsed 0, channel: 1 event ('note', 17852, 6, 69, 77)
	0,66,135,	//# 1462, ticks 17852, elapsed 0, channel: 1 event ('note', 17852, 7, 66, 67)
	0,74,175,	//# 1463, ticks 17856, elapsed 0, channel: 1 event ('note', 17856, 1, 74, 87)
	0,190,129,	//# 1464, ticks 17856, elapsed 0, channel: 3 event ('note', 17856, 1, 62, 64)
	// Note off skipped, note 79 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	5,194,0,	//# 1468, ticks 17888, elapsed 5, channel: 2 event ('note', 17888, 8, 66, 0)
	4,194,206,	//# 1469, ticks 17916, elapsed 4, channel: 2 event ('note', 17916, 8, 66, 103)
	3,192,147,	//# 1470, ticks 17936, elapsed 3, channel: 3 event ('note', 17936, 7, 64, 73)
	1,194,0,	//# 1471, ticks 17944, elapsed 1, channel: 2 event ('note', 17944, 7, 66, 0)
	1,204,172,	//# 1472, ticks 17952, elapsed 1, channel: 2 event ('note', 17952, 1, 76, 86)
	0,189,161,	//# 1473, ticks 17952, elapsed 0, channel: 3 event ('note', 17952, 1, 61, 80)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	4,74,1,	//# 1477, ticks 17976, elapsed 4, channel: 1 event ('note', 17976, 1, 74, 0)
	6,69,217,	//# 1478, ticks 18016, elapsed 6, channel: 1 event ('note', 18016, 8, 69, 108)
	// Note off skipped, note 50 not found in channels, probably interrupted
	3,190,103,	//# 1480, ticks 18036, elapsed 3, channel: 3 event ('note', 18036, 7, 62, 51)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	1,202,183,	//# 1483, ticks 18044, elapsed 1, channel: 3 event ('note', 18044, 5, 74, 91)
	0,74,182,	//# 1484, ticks 18044, elapsed 0, channel: 0 event ('note', 18044, 6, 74, 91)
	0,206,200,	//# 1485, ticks 18048, elapsed 0, channel: 2 event ('note', 18048, 1, 78, 100)
	0,62,146,	//# 1486, ticks 18048, elapsed 0, channel: 0 event ('note', 18048, 1, 62, 73)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	4,69,1,	//# 1490, ticks 18076, elapsed 4, channel: 1 event ('note', 18076, 8, 69, 0)
	4,62,0,	//# 1491, ticks 18104, elapsed 4, channel: 0 event ('note', 18104, 7, 62, 0)
	2,69,226,	//# 1492, ticks 18116, elapsed 2, channel: 0 event ('note', 18116, 8, 69, 113)
	// Note off skipped, note 62 not found in channels, probably interrupted
	4,76,167,	//# 1494, ticks 18140, elapsed 4, channel: 1 event ('note', 18140, 5, 76, 83)
	0,76,167,	//# 1495, ticks 18140, elapsed 0, channel: 1 event ('note', 18140, 6, 76, 83)
	0,79,153,	//# 1496, ticks 18144, elapsed 0, channel: 1 event ('note', 18144, 1, 79, 76)
	3,206,0,	//# 1497, ticks 18164, elapsed 3, channel: 2 event ('note', 18164, 1, 78, 0)
	0,202,1,	//# 1498, ticks 18168, elapsed 0, channel: 3 event ('note', 18168, 5, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	7,202,204,	//# 1500, ticks 18212, elapsed 7, channel: 2 event ('note', 18212, 8, 74, 102)
	1,178,179,	//# 1501, ticks 18220, elapsed 1, channel: 3 event ('note', 18220, 3, 50, 89)
	1,38,181,	//# 1502, ticks 18228, elapsed 1, channel: 1 event ('note', 18228, 2, 38, 90)
	0,207,189,	//# 1503, ticks 18232, elapsed 0, channel: 3 event ('note', 18232, 4, 79, 94)
	0,78,155,	//# 1504, ticks 18232, elapsed 0, channel: 1 event ('note', 18232, 5, 78, 77)
	0,78,155,	//# 1505, ticks 18232, elapsed 0, channel: 1 event ('note', 18232, 6, 78, 77)
	0,57,161,	//# 1506, ticks 18232, elapsed 0, channel: 1 event ('note', 18232, 7, 57, 80)
	0,69,0,	//# 1507, ticks 18232, elapsed 0, channel: 0 event ('note', 18232, 8, 69, 0)
	1,81,156,	//# 1508, ticks 18240, elapsed 1, channel: 0 event ('note', 18240, 1, 81, 78)
	0,50,134,	//# 1509, ticks 18240, elapsed 0, channel: 0 event ('note', 18240, 1, 50, 67)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	4,207,1,	//# 1512, ticks 18268, elapsed 4, channel: 3 event ('note', 18268, 1, 79, 0)
	0,202,0,	//# 1513, ticks 18272, elapsed 0, channel: 2 event ('note', 18272, 8, 74, 0)
	// Note off skipped, note 81 not found in channels, probably interrupted
	5,57,1,	//# 1515, ticks 18304, elapsed 5, channel: 1 event ('note', 18304, 7, 57, 0)
	0,74,199,	//# 1516, ticks 18304, elapsed 0, channel: 1 event ('note', 18304, 8, 74, 99)
	1,207,186,	//# 1517, ticks 18312, elapsed 1, channel: 2 event ('note', 18312, 5, 79, 93)
	0,207,187,	//# 1518, ticks 18312, elapsed 0, channel: 3 event ('note', 18312, 6, 79, 93)
	// Note off skipped, note 38 not found in channels, probably interrupted
	0,50,0,	//# 1520, ticks 18316, elapsed 0, channel: 0 event ('note', 18316, 3, 50, 0)
	0,78,202,	//# 1521, ticks 18316, elapsed 0, channel: 0 event ('note', 18316, 4, 78, 101)
	2,78,0,	//# 1522, ticks 18332, elapsed 2, channel: 0 event ('note', 18332, 5, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	0,83,152,	//# 1524, ticks 18336, elapsed 0, channel: 0 event ('note', 18336, 1, 83, 76)
	0,207,0,	//# 1525, ticks 18340, elapsed 0, channel: 2 event ('note', 18340, 4, 79, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 81 not found in channels, probably interrupted
	10,201,180,	//# 1528, ticks 18400, elapsed 10, channel: 2 event ('note', 18400, 8, 73, 90)
	3,57,180,	//# 1529, ticks 18420, elapsed 3, channel: 0 event ('note', 18420, 3, 57, 90)
	0,57,144,	//# 1530, ticks 18424, elapsed 0, channel: 0 event ('note', 18424, 7, 57, 72)
	0,74,1,	//# 1531, ticks 18424, elapsed 0, channel: 1 event ('note', 18424, 8, 74, 0)
	0,76,169,	//# 1532, ticks 18428, elapsed 0, channel: 1 event ('note', 18428, 4, 76, 84)
	0,76,158,	//# 1533, ticks 18432, elapsed 0, channel: 0 event ('note', 18432, 1, 76, 79)
	0,57,136,	//# 1534, ticks 18432, elapsed 0, channel: 0 event ('note', 18432, 1, 57, 68)
	0,45,154,	//# 1535, ticks 18432, elapsed 0, channel: 0 event ('note', 18432, 2, 45, 77)
	0,81,162,	//# 1536, ticks 18432, elapsed 0, channel: 0 event ('note', 18432, 5, 81, 81)
	0,81,162,	//# 1537, ticks 18432, elapsed 0, channel: 0 event ('note', 18432, 6, 81, 81)
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	9,207,1,	//# 1540, ticks 18488, elapsed 9, channel: 3 event ('note', 18488, 5, 79, 0)
	// Note off skipped, note 79 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	2,202,193,	//# 1543, ticks 18500, elapsed 2, channel: 3 event ('note', 18500, 8, 74, 96)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	4,78,176,	//# 1547, ticks 18528, elapsed 4, channel: 0 event ('note', 18528, 1, 78, 88)
	0,201,0,	//# 1548, ticks 18528, elapsed 0, channel: 2 event ('note', 18528, 8, 73, 0)
	2,76,1,	//# 1549, ticks 18540, elapsed 2, channel: 1 event ('note', 18540, 1, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 81 not found in channels, probably interrupted
	// Note off skipped, note 81 not found in channels, probably interrupted
	10,73,197,	//# 1553, ticks 18600, elapsed 10, channel: 1 event ('note', 18600, 8, 73, 98)
	2,173,186,	//# 1554, ticks 18612, elapsed 2, channel: 2 event ('note', 18612, 3, 45, 93)
	0,61,134,	//# 1555, ticks 18612, elapsed 0, channel: 0 event ('note', 18612, 7, 61, 67)
	0,33,172,	//# 1556, ticks 18616, elapsed 0, channel: 0 event ('note', 18616, 2, 33, 86)
	1,45,154,	//# 1557, ticks 18624, elapsed 1, channel: 0 event ('note', 18624, 1, 45, 77)
	0,76,168,	//# 1558, ticks 18624, elapsed 0, channel: 0 event ('note', 18624, 1, 76, 84)
	0,73,128,	//# 1559, ticks 18624, elapsed 0, channel: 0 event ('note', 18624, 5, 73, 64)
	0,73,128,	//# 1560, ticks 18624, elapsed 0, channel: 0 event ('note', 18624, 6, 73, 64)
	0,69,156,	//# 1561, ticks 18628, elapsed 0, channel: 0 event ('note', 18628, 4, 69, 78)
	// Note off skipped, note 78 not found in channels, probably interrupted
	1,202,1,	//# 1563, ticks 18636, elapsed 1, channel: 3 event ('note', 18636, 8, 74, 0)
	9,199,199,	//# 1564, ticks 18692, elapsed 9, channel: 3 event ('note', 18692, 8, 71, 99)
	1,173,0,	//# 1565, ticks 18700, elapsed 1, channel: 2 event ('note', 18700, 3, 45, 0)
	// Note off skipped, note 33 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	3,202,168,	//# 1569, ticks 18720, elapsed 3, channel: 2 event ('note', 18720, 1, 74, 84)
	0,73,1,	//# 1570, ticks 18724, elapsed 0, channel: 1 event ('note', 18724, 8, 73, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	12,47,179,	//# 1572, ticks 18796, elapsed 12, channel: 1 event ('note', 18796, 3, 47, 89)
	0,69,194,	//# 1573, ticks 18796, elapsed 0, channel: 0 event ('note', 18796, 8, 69, 97)
	1,163,178,	//# 1574, ticks 18804, elapsed 1, channel: 2 event ('note', 18804, 2, 35, 89)
	0,74,155,	//# 1575, ticks 18804, elapsed 0, channel: 1 event ('note', 18804, 5, 74, 77)
	0,74,155,	//# 1576, ticks 18804, elapsed 0, channel: 1 event ('note', 18804, 6, 74, 77)
	0,62,129,	//# 1577, ticks 18804, elapsed 0, channel: 1 event ('note', 18804, 7, 62, 64)
	2,73,159,	//# 1578, ticks 18816, elapsed 2, channel: 1 event ('note', 18816, 1, 73, 79)
	0,47,149,	//# 1579, ticks 18816, elapsed 0, channel: 1 event ('note', 18816, 1, 47, 74)
	0,199,1,	//# 1580, ticks 18820, elapsed 0, channel: 3 event ('note', 18820, 8, 71, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	4,69,0,	//# 1582, ticks 18844, elapsed 4, channel: 0 event ('note', 18844, 4, 69, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	6,47,1,	//# 1585, ticks 18880, elapsed 6, channel: 1 event ('note', 18880, 3, 47, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	2,163,0,	//# 1587, ticks 18896, elapsed 2, channel: 2 event ('note', 18896, 2, 35, 0)
	0,67,212,	//# 1588, ticks 18896, elapsed 0, channel: 0 event ('note', 18896, 8, 67, 106)
	// Note off skipped, note 69 not found in channels, probably interrupted
	2,71,177,	//# 1590, ticks 18912, elapsed 2, channel: 1 event ('note', 18912, 1, 71, 88)
	// Note off skipped, note 47 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	14,177,196,	//# 1593, ticks 18996, elapsed 14, channel: 2 event ('note', 18996, 3, 49, 98)
	0,192,129,	//# 1594, ticks 18996, elapsed 0, channel: 3 event ('note', 18996, 7, 64, 64)
	0,194,205,	//# 1595, ticks 18996, elapsed 0, channel: 3 event ('note', 18996, 8, 66, 102)
	0,37,195,	//# 1596, ticks 19000, elapsed 0, channel: 1 event ('note', 19000, 2, 37, 97)
	// Note off skipped, note 71 not found in channels, probably interrupted
	1,69,155,	//# 1598, ticks 19008, elapsed 1, channel: 1 event ('note', 19008, 1, 69, 77)
	0,49,153,	//# 1599, ticks 19008, elapsed 0, channel: 1 event ('note', 19008, 1, 49, 76)
	0,76,139,	//# 1600, ticks 19012, elapsed 0, channel: 1 event ('note', 19012, 5, 76, 69)
	0,76,139,	//# 1601, ticks 19012, elapsed 0, channel: 1 event ('note', 19012, 6, 76, 69)
	2,67,0,	//# 1602, ticks 19028, elapsed 2, channel: 0 event ('note', 19028, 8, 67, 0)
	6,177,0,	//# 1603, ticks 19064, elapsed 6, channel: 2 event ('note', 19064, 3, 49, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 37 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	4,64,198,	//# 1608, ticks 19088, elapsed 4, channel: 0 event ('note', 19088, 8, 64, 99)
	// Note off skipped, note 49 not found in channels, probably interrupted
	2,195,136,	//# 1610, ticks 19104, elapsed 2, channel: 2 event ('note', 19104, 1, 67, 68)
	1,194,1,	//# 1611, ticks 19112, elapsed 1, channel: 3 event ('note', 19112, 8, 66, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	13,178,177,	//# 1613, ticks 19192, elapsed 13, channel: 3 event ('note', 19192, 3, 50, 88)
	0,185,112,	//# 1614, ticks 19192, elapsed 0, channel: 2 event ('note', 19192, 7, 57, 56)
	0,190,182,	//# 1615, ticks 19192, elapsed 0, channel: 2 event ('note', 19192, 8, 62, 91)
	1,66,153,	//# 1616, ticks 19200, elapsed 1, channel: 1 event ('note', 19200, 1, 66, 76)
	0,50,101,	//# 1617, ticks 19200, elapsed 0, channel: 1 event ('note', 19200, 1, 50, 50)
	0,78,137,	//# 1618, ticks 19200, elapsed 0, channel: 1 event ('note', 19200, 5, 78, 68)
	0,78,137,	//# 1619, ticks 19200, elapsed 0, channel: 1 event ('note', 19200, 6, 78, 68)
	0,38,179,	//# 1620, ticks 19204, elapsed 0, channel: 1 event ('note', 19204, 2, 38, 89)
	2,64,0,	//# 1621, ticks 19216, elapsed 2, channel: 0 event ('note', 19216, 8, 64, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	13,64,166,	//# 1625, ticks 19296, elapsed 13, channel: 0 event ('note', 19296, 1, 64, 83)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	16,66,176,	//# 1629, ticks 19392, elapsed 16, channel: 0 event ('note', 19392, 1, 66, 88)
	4,74,150,	//# 1630, ticks 19420, elapsed 4, channel: 0 event ('note', 19420, 5, 74, 75)
	0,74,150,	//# 1631, ticks 19420, elapsed 0, channel: 0 event ('note', 19420, 6, 74, 75)
	// Note off skipped, note 64 not found in channels, probably interrupted
	4,190,0,	//# 1633, ticks 19444, elapsed 4, channel: 2 event ('note', 19444, 8, 62, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	7,197,154,	//# 1635, ticks 19488, elapsed 7, channel: 2 event ('note', 19488, 1, 69, 77)
	// Note off skipped, note 66 not found in channels, probably interrupted
	13,178,1,	//# 1637, ticks 19568, elapsed 13, channel: 3 event ('note', 19568, 3, 50, 0)
	2,192,177,	//# 1638, ticks 19584, elapsed 2, channel: 3 event ('note', 19584, 1, 64, 88)
	2,73,154,	//# 1639, ticks 19596, elapsed 2, channel: 0 event ('note', 19596, 5, 73, 77)
	0,73,154,	//# 1640, ticks 19596, elapsed 0, channel: 0 event ('note', 19596, 6, 73, 77)
	0,38,1,	//# 1641, ticks 19600, elapsed 0, channel: 1 event ('note', 19600, 2, 38, 0)
	1,197,0,	//# 1642, ticks 19608, elapsed 1, channel: 2 event ('note', 19608, 1, 69, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	12,69,133,	//# 1646, ticks 19680, elapsed 12, channel: 1 event ('note', 19680, 1, 69, 66)
	5,192,1,	//# 1647, ticks 19712, elapsed 5, channel: 3 event ('note', 19712, 1, 64, 0)
	10,199,150,	//# 1648, ticks 19772, elapsed 10, channel: 2 event ('note', 19772, 5, 71, 75)
	0,199,151,	//# 1649, ticks 19772, elapsed 0, channel: 3 event ('note', 19772, 6, 71, 75)
	0,62,167,	//# 1650, ticks 19776, elapsed 0, channel: 1 event ('note', 19776, 1, 62, 83)
	4,73,0,	//# 1651, ticks 19800, elapsed 4, channel: 0 event ('note', 19800, 5, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	12,69,124,	//# 1654, ticks 19872, elapsed 12, channel: 0 event ('note', 19872, 1, 69, 62)
	4,62,1,	//# 1655, ticks 19900, elapsed 4, channel: 1 event ('note', 19900, 1, 62, 0)
	11,69,141,	//# 1656, ticks 19964, elapsed 11, channel: 1 event ('note', 19964, 5, 69, 70)
	0,69,140,	//# 1657, ticks 19964, elapsed 0, channel: 0 event ('note', 19964, 6, 69, 70)
	0,61,178,	//# 1658, ticks 19968, elapsed 0, channel: 0 event ('note', 19968, 1, 61, 89)
	3,199,0,	//# 1659, ticks 19988, elapsed 3, channel: 2 event ('note', 19988, 5, 71, 0)
	0,199,1,	//# 1660, ticks 19988, elapsed 0, channel: 3 event ('note', 19988, 6, 71, 0)
	1,69,1,	//# 1661, ticks 19996, elapsed 1, channel: 1 event ('note', 19996, 1, 69, 0)
	11,69,131,	//# 1662, ticks 20064, elapsed 11, channel: 1 event ('note', 20064, 1, 69, 65)
	2,61,0,	//# 1663, ticks 20080, elapsed 2, channel: 0 event ('note', 20080, 1, 61, 0)
	13,62,172,	//# 1664, ticks 20160, elapsed 13, channel: 0 event ('note', 20160, 1, 62, 86)
	2,206,134,	//# 1665, ticks 20172, elapsed 2, channel: 2 event ('note', 20172, 4, 78, 67)
	2,69,1,	//# 1666, ticks 20188, elapsed 2, channel: 1 event ('note', 20188, 1, 69, 0)
	11,69,131,	//# 1667, ticks 20256, elapsed 11, channel: 1 event ('note', 20256, 1, 69, 65)
	3,62,0,	//# 1668, ticks 20276, elapsed 3, channel: 0 event ('note', 20276, 1, 62, 0)
	13,61,180,	//# 1669, ticks 20352, elapsed 13, channel: 0 event ('note', 20352, 1, 61, 90)
	2,204,145,	//# 1670, ticks 20364, elapsed 2, channel: 3 event ('note', 20364, 4, 76, 72)
	0,69,1,	//# 1671, ticks 20368, elapsed 0, channel: 1 event ('note', 20368, 1, 69, 0)
	4,206,0,	//# 1672, ticks 20392, elapsed 4, channel: 2 event ('note', 20392, 4, 78, 0)
	9,69,137,	//# 1673, ticks 20448, elapsed 9, channel: 1 event ('note', 20448, 1, 69, 68)
	3,61,0,	//# 1674, ticks 20468, elapsed 3, channel: 0 event ('note', 20468, 1, 61, 0)
	13,59,168,	//# 1675, ticks 20544, elapsed 13, channel: 0 event ('note', 20544, 1, 59, 84)
	0,202,150,	//# 1676, ticks 20548, elapsed 0, channel: 2 event ('note', 20548, 4, 74, 75)
	2,204,1,	//# 1677, ticks 20560, elapsed 2, channel: 3 event ('note', 20560, 4, 76, 0)
	1,69,1,	//# 1678, ticks 20568, elapsed 1, channel: 1 event ('note', 20568, 1, 69, 0)
	12,69,147,	//# 1679, ticks 20640, elapsed 12, channel: 1 event ('note', 20640, 1, 69, 73)
	1,59,0,	//# 1680, ticks 20648, elapsed 1, channel: 0 event ('note', 20648, 1, 59, 0)
	12,69,1,	//# 1681, ticks 20720, elapsed 12, channel: 1 event ('note', 20720, 1, 69, 0)
	2,57,158,	//# 1682, ticks 20736, elapsed 2, channel: 0 event ('note', 20736, 1, 57, 79)
	1,73,97,	//# 1683, ticks 20744, elapsed 1, channel: 1 event ('note', 20744, 4, 73, 48)
	1,202,0,	//# 1684, ticks 20752, elapsed 1, channel: 2 event ('note', 20752, 4, 74, 0)
	13,173,128,	//# 1685, ticks 20832, elapsed 13, channel: 2 event ('note', 20832, 1, 45, 64)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	3,57,0,	//# 1688, ticks 20852, elapsed 3, channel: 0 event ('note', 20852, 1, 57, 0)
	12,83,156,	//# 1689, ticks 20924, elapsed 12, channel: 0 event ('note', 20924, 5, 83, 78)
	0,211,157,	//# 1690, ticks 20924, elapsed 0, channel: 3 event ('note', 20924, 6, 83, 78)
	0,61,167,	//# 1691, ticks 20928, elapsed 0, channel: 1 event ('note', 20928, 1, 61, 83)
	0,171,140,	//# 1692, ticks 20928, elapsed 0, channel: 2 event ('note', 20928, 1, 43, 70)
	// Note off skipped, note 45 not found in channels, probably interrupted
	9,61,1,	//# 1694, ticks 20984, elapsed 9, channel: 1 event ('note', 20984, 1, 61, 0)
	1,59,147,	//# 1695, ticks 20992, elapsed 1, channel: 1 event ('note', 20992, 1, 59, 73)
	2,171,0,	//# 1696, ticks 21004, elapsed 2, channel: 2 event ('note', 21004, 1, 43, 0)
	3,173,104,	//# 1697, ticks 21024, elapsed 3, channel: 2 event ('note', 21024, 1, 45, 52)
	5,189,178,	//# 1698, ticks 21056, elapsed 5, channel: 2 event ('note', 21056, 1, 61, 89)
	1,59,1,	//# 1699, ticks 21064, elapsed 1, channel: 1 event ('note', 21064, 1, 59, 0)
	6,189,0,	//# 1700, ticks 21104, elapsed 6, channel: 2 event ('note', 21104, 1, 61, 0)
	1,81,187,	//# 1701, ticks 21112, elapsed 1, channel: 1 event ('note', 21112, 5, 81, 93)
	0,209,186,	//# 1702, ticks 21112, elapsed 0, channel: 2 event ('note', 21112, 6, 81, 93)
	1,42,158,	//# 1703, ticks 21120, elapsed 1, channel: 0 event ('note', 21120, 1, 42, 79)
	0,190,165,	//# 1704, ticks 21120, elapsed 0, channel: 3 event ('note', 21120, 1, 62, 82)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	11,190,1,	//# 1709, ticks 21184, elapsed 11, channel: 3 event ('note', 21184, 1, 62, 0)
	0,189,157,	//# 1710, ticks 21184, elapsed 0, channel: 3 event ('note', 21184, 1, 61, 78)
	5,173,111,	//# 1711, ticks 21216, elapsed 5, channel: 3 event ('note', 21216, 1, 45, 55)
	0,42,0,	//# 1712, ticks 21220, elapsed 0, channel: 0 event ('note', 21220, 1, 42, 0)
	4,62,142,	//# 1713, ticks 21248, elapsed 4, channel: 0 event ('note', 21248, 1, 62, 71)
	// Note off skipped, note 61 not found in channels, probably interrupted
	7,207,163,	//# 1715, ticks 21292, elapsed 7, channel: 3 event ('note', 21292, 5, 79, 81)
	0,79,162,	//# 1716, ticks 21292, elapsed 0, channel: 0 event ('note', 21292, 6, 79, 81)
	0,73,130,	//# 1717, ticks 21296, elapsed 0, channel: 0 event ('note', 21296, 4, 73, 65)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	2,64,158,	//# 1720, ticks 21312, elapsed 2, channel: 0 event ('note', 21312, 1, 64, 79)
	0,40,122,	//# 1721, ticks 21312, elapsed 0, channel: 0 event ('note', 21312, 1, 40, 61)
	0,81,1,	//# 1722, ticks 21316, elapsed 0, channel: 1 event ('note', 21316, 5, 81, 0)
	0,209,0,	//# 1723, ticks 21316, elapsed 0, channel: 2 event ('note', 21316, 6, 81, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	10,62,153,	//# 1725, ticks 21376, elapsed 10, channel: 1 event ('note', 21376, 1, 62, 76)
	1,40,0,	//# 1726, ticks 21384, elapsed 1, channel: 0 event ('note', 21384, 1, 40, 0)
	4,45,90,	//# 1727, ticks 21408, elapsed 4, channel: 0 event ('note', 21408, 1, 45, 45)
	4,62,1,	//# 1728, ticks 21432, elapsed 4, channel: 1 event ('note', 21432, 1, 62, 0)
	1,64,163,	//# 1729, ticks 21440, elapsed 1, channel: 1 event ('note', 21440, 1, 64, 81)
	8,206,158,	//# 1730, ticks 21488, elapsed 8, channel: 2 event ('note', 21488, 5, 78, 79)
	0,78,158,	//# 1731, ticks 21488, elapsed 0, channel: 0 event ('note', 21488, 6, 78, 79)
	1,50,178,	//# 1732, ticks 21496, elapsed 1, channel: 0 event ('note', 21496, 3, 50, 89)
	0,197,114,	//# 1733, ticks 21496, elapsed 0, channel: 2 event ('note', 21496, 7, 69, 57)
	1,194,188,	//# 1734, ticks 21504, elapsed 1, channel: 2 event ('note', 21504, 1, 66, 94)
	0,38,139,	//# 1735, ticks 21504, elapsed 0, channel: 1 event ('note', 21504, 1, 38, 69)
	0,38,161,	//# 1736, ticks 21504, elapsed 0, channel: 1 event ('note', 21504, 2, 38, 80)
	0,74,107,	//# 1737, ticks 21504, elapsed 0, channel: 1 event ('note', 21504, 4, 74, 53)
	0,207,1,	//# 1738, ticks 21508, elapsed 0, channel: 3 event ('note', 21508, 5, 79, 0)
	// Note off skipped, note 79 not found in channels, probably interrupted
	0,190,179,	//# 1740, ticks 21508, elapsed 0, channel: 3 event ('note', 21508, 8, 62, 89)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	7,190,1,	//# 1744, ticks 21552, elapsed 7, channel: 3 event ('note', 21552, 8, 62, 0)
	5,207,177,	//# 1745, ticks 21584, elapsed 5, channel: 3 event ('note', 21584, 5, 79, 88)
	0,79,177,	//# 1746, ticks 21584, elapsed 0, channel: 1 event ('note', 21584, 6, 79, 88)
	0,67,159,	//# 1747, ticks 21584, elapsed 0, channel: 1 event ('note', 21584, 7, 67, 79)
	0,62,177,	//# 1748, ticks 21588, elapsed 0, channel: 1 event ('note', 21588, 8, 62, 88)
	2,64,179,	//# 1749, ticks 21600, elapsed 2, channel: 1 event ('note', 21600, 1, 64, 89)
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	6,194,0,	//# 1754, ticks 21636, elapsed 6, channel: 2 event ('note', 21636, 1, 66, 0)
	6,194,184,	//# 1755, ticks 21676, elapsed 6, channel: 2 event ('note', 21676, 8, 66, 92)
	1,194,155,	//# 1756, ticks 21684, elapsed 1, channel: 3 event ('note', 21684, 7, 66, 77)
	// Note off skipped, note 74 not found in channels, probably interrupted
	0,209,165,	//# 1758, ticks 21688, elapsed 0, channel: 3 event ('note', 21688, 5, 81, 82)
	0,209,165,	//# 1759, ticks 21688, elapsed 0, channel: 3 event ('note', 21688, 6, 81, 82)
	0,197,139,	//# 1760, ticks 21692, elapsed 0, channel: 3 event ('note', 21692, 4, 69, 69)
	// Note off skipped, note 62 not found in channels, probably interrupted
	0,190,179,	//# 1762, ticks 21696, elapsed 0, channel: 3 event ('note', 21696, 1, 62, 89)
	0,50,134,	//# 1763, ticks 21696, elapsed 0, channel: 0 event ('note', 21696, 1, 50, 67)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 79 not found in channels, probably interrupted
	// Note off skipped, note 79 not found in channels, probably interrupted
	2,64,1,	//# 1767, ticks 21712, elapsed 2, channel: 1 event ('note', 21712, 1, 64, 0)
	4,194,0,	//# 1768, ticks 21740, elapsed 4, channel: 2 event ('note', 21740, 8, 66, 0)
	4,64,137,	//# 1769, ticks 21768, elapsed 4, channel: 1 event ('note', 21768, 7, 64, 68)
	0,194,174,	//# 1770, ticks 21772, elapsed 0, channel: 2 event ('note', 21772, 8, 66, 87)
	1,194,0,	//# 1771, ticks 21780, elapsed 1, channel: 2 event ('note', 21780, 7, 66, 0)
	2,192,176,	//# 1772, ticks 21792, elapsed 2, channel: 2 event ('note', 21792, 1, 64, 88)
	0,49,164,	//# 1773, ticks 21792, elapsed 0, channel: 0 event ('note', 21792, 1, 49, 82)
	// Note off skipped, note 50 not found in channels, probably interrupted
	2,190,1,	//# 1775, ticks 21808, elapsed 2, channel: 3 event ('note', 21808, 1, 62, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	9,190,131,	//# 1779, ticks 21864, elapsed 9, channel: 3 event ('note', 21864, 7, 62, 65)
	1,197,195,	//# 1780, ticks 21872, elapsed 1, channel: 3 event ('note', 21872, 8, 69, 97)
	0,64,1,	//# 1781, ticks 21876, elapsed 0, channel: 1 event ('note', 21876, 7, 64, 0)
	2,66,187,	//# 1782, ticks 21888, elapsed 2, channel: 1 event ('note', 21888, 1, 66, 93)
	0,50,162,	//# 1783, ticks 21888, elapsed 0, channel: 0 event ('note', 21888, 1, 50, 81)
	0,74,178,	//# 1784, ticks 21888, elapsed 0, channel: 0 event ('note', 21888, 4, 74, 89)
	// Note off skipped, note 49 not found in channels, probably interrupted
	2,66,1,	//# 1786, ticks 21904, elapsed 2, channel: 1 event ('note', 21904, 8, 66, 0)
	0,192,0,	//# 1787, ticks 21908, elapsed 0, channel: 2 event ('note', 21908, 1, 64, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	3,197,1,	//# 1789, ticks 21928, elapsed 3, channel: 3 event ('note', 21928, 8, 69, 0)
	4,69,191,	//# 1790, ticks 21956, elapsed 4, channel: 1 event ('note', 21956, 8, 69, 95)
	// Note off skipped, note 66 not found in channels, probably interrupted
	4,195,182,	//# 1792, ticks 21984, elapsed 4, channel: 2 event ('note', 21984, 1, 67, 91)
	0,204,169,	//# 1793, ticks 21988, elapsed 0, channel: 3 event ('note', 21988, 4, 76, 84)
	// Note off skipped, note 50 not found in channels, probably interrupted
	4,74,0,	//# 1795, ticks 22012, elapsed 4, channel: 0 event ('note', 22012, 4, 74, 0)
	7,38,180,	//# 1796, ticks 22056, elapsed 7, channel: 0 event ('note', 22056, 3, 38, 90)
	0,202,173,	//# 1797, ticks 22056, elapsed 0, channel: 3 event ('note', 22056, 8, 74, 86)
	0,154,179,	//# 1798, ticks 22060, elapsed 0, channel: 3 event ('note', 22060, 2, 26, 89)
	2,185,151,	//# 1799, ticks 22072, elapsed 2, channel: 3 event ('note', 22072, 7, 57, 75)
	0,207,173,	//# 1800, ticks 22076, elapsed 0, channel: 3 event ('note', 22076, 5, 79, 86)
	0,207,173,	//# 1801, ticks 22076, elapsed 0, channel: 3 event ('note', 22076, 6, 79, 86)
	0,69,1,	//# 1802, ticks 22076, elapsed 0, channel: 1 event ('note', 22076, 8, 69, 0)
	0,69,169,	//# 1803, ticks 22080, elapsed 0, channel: 1 event ('note', 22080, 1, 69, 84)
	0,38,145,	//# 1804, ticks 22080, elapsed 0, channel: 1 event ('note', 22080, 1, 38, 72)
	0,78,177,	//# 1805, ticks 22080, elapsed 0, channel: 1 event ('note', 22080, 4, 78, 88)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	6,195,0,	//# 1808, ticks 22120, elapsed 6, channel: 2 event ('note', 22120, 1, 67, 0)
	// Note off skipped, note 26 not found in channels, probably interrupted
	0,38,0,	//# 1810, ticks 22124, elapsed 0, channel: 0 event ('note', 22124, 3, 38, 0)
	// Note off skipped, note 81 not found in channels, probably interrupted
	// Note off skipped, note 81 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	4,74,164,	//# 1814, ticks 22148, elapsed 4, channel: 0 event ('note', 22148, 8, 74, 82)
	3,206,200,	//# 1815, ticks 22168, elapsed 3, channel: 2 event ('note', 22168, 5, 78, 100)
	0,78,200,	//# 1816, ticks 22168, elapsed 0, channel: 0 event ('note', 22168, 6, 78, 100)
	0,207,165,	//# 1817, ticks 22172, elapsed 0, channel: 3 event ('note', 22172, 4, 79, 82)
	0,199,181,	//# 1818, ticks 22176, elapsed 0, channel: 3 event ('note', 22176, 1, 71, 90)
	// Note off skipped, note 38 not found in channels, probably interrupted
	// Note off skipped, note 79 not found in channels, probably interrupted
	// Note off skipped, note 79 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	3,78,0,	//# 1823, ticks 22196, elapsed 3, channel: 0 event ('note', 22196, 4, 78, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	8,76,164,	//# 1825, ticks 22244, elapsed 8, channel: 0 event ('note', 22244, 8, 76, 82)
	2,69,136,	//# 1826, ticks 22256, elapsed 2, channel: 0 event ('note', 22256, 7, 69, 68)
	2,45,162,	//# 1827, ticks 22268, elapsed 2, channel: 0 event ('note', 22268, 3, 45, 81)
	0,73,178,	//# 1828, ticks 22272, elapsed 0, channel: 0 event ('note', 22272, 1, 73, 89)
	0,45,157,	//# 1829, ticks 22272, elapsed 0, channel: 1 event ('note', 22272, 1, 45, 78)
	0,76,143,	//# 1830, ticks 22272, elapsed 0, channel: 1 event ('note', 22272, 5, 76, 71)
	0,76,143,	//# 1831, ticks 22272, elapsed 0, channel: 1 event ('note', 22272, 6, 76, 71)
	0,81,161,	//# 1832, ticks 22276, elapsed 0, channel: 1 event ('note', 22276, 4, 81, 80)
	0,33,161,	//# 1833, ticks 22280, elapsed 0, channel: 1 event ('note', 22280, 2, 33, 80)
	2,199,1,	//# 1834, ticks 22292, elapsed 2, channel: 3 event ('note', 22292, 1, 71, 0)
	// Note off skipped, note 79 not found in channels, probably interrupted
	0,206,0,	//# 1836, ticks 22296, elapsed 0, channel: 2 event ('note', 22296, 5, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	12,202,176,	//# 1841, ticks 22368, elapsed 12, channel: 2 event ('note', 22368, 1, 74, 88)
	4,73,0,	//# 1842, ticks 22392, elapsed 4, channel: 0 event ('note', 22392, 1, 73, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 81 not found in channels, probably interrupted
	10,69,144,	//# 1846, ticks 22452, elapsed 10, channel: 0 event ('note', 22452, 8, 69, 72)
	1,201,213,	//# 1847, ticks 22460, elapsed 1, channel: 3 event ('note', 22460, 5, 73, 106)
	0,73,212,	//# 1848, ticks 22460, elapsed 0, channel: 0 event ('note', 22460, 6, 73, 106)
	0,64,105,	//# 1849, ticks 22460, elapsed 0, channel: 1 event ('note', 22460, 7, 64, 52)
	0,57,137,	//# 1850, ticks 22464, elapsed 0, channel: 1 event ('note', 22464, 1, 57, 68)
	0,73,181,	//# 1851, ticks 22464, elapsed 0, channel: 1 event ('note', 22464, 1, 73, 90)
	1,197,128,	//# 1852, ticks 22472, elapsed 1, channel: 2 event ('note', 22472, 4, 69, 64)
	// Note off skipped, note 74 not found in channels, probably interrupted
	9,199,172,	//# 1854, ticks 22528, elapsed 9, channel: 2 event ('note', 22528, 5, 71, 86)
	0,199,172,	//# 1855, ticks 22528, elapsed 0, channel: 2 event ('note', 22528, 6, 71, 86)
	0,73,0,	//# 1856, ticks 22532, elapsed 0, channel: 0 event ('note', 22532, 5, 73, 0)
	0,73,1,	//# 1857, ticks 22532, elapsed 0, channel: 1 event ('note', 22532, 6, 73, 0)
	4,71,174,	//# 1858, ticks 22560, elapsed 4, channel: 0 event ('note', 22560, 1, 71, 87)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	3,73,217,	//# 1861, ticks 22580, elapsed 3, channel: 1 event ('note', 22580, 5, 73, 108)
	0,201,216,	//# 1862, ticks 22580, elapsed 0, channel: 2 event ('note', 22580, 6, 73, 108)
	1,73,1,	//# 1863, ticks 22588, elapsed 1, channel: 1 event ('note', 22588, 1, 73, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	2,71,0,	//# 1865, ticks 22604, elapsed 2, channel: 0 event ('note', 22604, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 33 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	6,74,176,	//# 1869, ticks 22644, elapsed 6, channel: 0 event ('note', 22644, 5, 74, 88)
	0,74,177,	//# 1870, ticks 22644, elapsed 0, channel: 1 event ('note', 22644, 6, 74, 88)
	1,201,0,	//# 1871, ticks 22652, elapsed 1, channel: 2 event ('note', 22652, 5, 73, 0)
	0,201,1,	//# 1872, ticks 22652, elapsed 0, channel: 3 event ('note', 22652, 6, 73, 0)
	0,197,166,	//# 1873, ticks 22656, elapsed 0, channel: 2 event ('note', 22656, 1, 69, 83)
	0,187,127,	//# 1874, ticks 22656, elapsed 0, channel: 3 event ('note', 22656, 1, 59, 63)
	0,197,0,	//# 1875, ticks 22656, elapsed 0, channel: 2 event ('note', 22656, 4, 69, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	9,201,170,	//# 1877, ticks 22708, elapsed 9, channel: 2 event ('note', 22708, 5, 73, 85)
	0,201,171,	//# 1878, ticks 22708, elapsed 0, channel: 3 event ('note', 22708, 6, 73, 85)
	2,74,0,	//# 1879, ticks 22720, elapsed 2, channel: 0 event ('note', 22720, 5, 74, 0)
	0,74,1,	//# 1880, ticks 22720, elapsed 0, channel: 1 event ('note', 22720, 6, 74, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	5,67,146,	//# 1883, ticks 22752, elapsed 5, channel: 0 event ('note', 22752, 1, 67, 73)
	2,74,165,	//# 1884, ticks 22768, elapsed 2, channel: 1 event ('note', 22768, 5, 74, 82)
	0,74,164,	//# 1885, ticks 22768, elapsed 0, channel: 0 event ('note', 22768, 6, 74, 82)
	0,201,0,	//# 1886, ticks 22772, elapsed 0, channel: 2 event ('note', 22772, 5, 73, 0)
	0,201,1,	//# 1887, ticks 22772, elapsed 0, channel: 3 event ('note', 22772, 6, 73, 0)
	10,204,172,	//# 1888, ticks 22832, elapsed 10, channel: 2 event ('note', 22832, 5, 76, 86)
	0,204,173,	//# 1889, ticks 22832, elapsed 0, channel: 3 event ('note', 22832, 6, 76, 86)
	2,66,158,	//# 1890, ticks 22848, elapsed 2, channel: 0 event ('note', 22848, 1, 66, 79)
	0,61,124,	//# 1891, ticks 22848, elapsed 0, channel: 0 event ('note', 22848, 1, 61, 62)
	1,74,1,	//# 1892, ticks 22856, elapsed 1, channel: 1 event ('note', 22856, 5, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	7,74,161,	//# 1895, ticks 22900, elapsed 7, channel: 1 event ('note', 22900, 5, 74, 80)
	0,74,160,	//# 1896, ticks 22900, elapsed 0, channel: 0 event ('note', 22900, 6, 74, 80)
	// Note off skipped, note 61 not found in channels, probably interrupted
	2,204,0,	//# 1898, ticks 22912, elapsed 2, channel: 2 event ('note', 22912, 5, 76, 0)
	0,204,1,	//# 1899, ticks 22912, elapsed 0, channel: 3 event ('note', 22912, 6, 76, 0)
	5,192,174,	//# 1900, ticks 22944, elapsed 5, channel: 2 event ('note', 22944, 1, 64, 87)
	// Note off skipped, note 66 not found in channels, probably interrupted
	3,204,149,	//# 1902, ticks 22964, elapsed 3, channel: 3 event ('note', 22964, 5, 76, 74)
	0,204,149,	//# 1903, ticks 22964, elapsed 0, channel: 3 event ('note', 22964, 6, 76, 74)
	4,74,0,	//# 1904, ticks 22992, elapsed 4, channel: 0 event ('note', 22992, 5, 74, 0)
	0,74,1,	//# 1905, ticks 22992, elapsed 0, channel: 1 event ('note', 22992, 6, 74, 0)
	6,78,176,	//# 1906, ticks 23028, elapsed 6, channel: 0 event ('note', 23028, 5, 78, 88)
	0,78,177,	//# 1907, ticks 23028, elapsed 0, channel: 1 event ('note', 23028, 6, 78, 88)
	2,192,0,	//# 1908, ticks 23040, elapsed 2, channel: 2 event ('note', 23040, 1, 64, 0)
	0,190,156,	//# 1909, ticks 23040, elapsed 0, channel: 2 event ('note', 23040, 1, 62, 78)
	0,178,153,	//# 1910, ticks 23040, elapsed 0, channel: 3 event ('note', 23040, 1, 50, 76)
	1,190,0,	//# 1911, ticks 23048, elapsed 1, channel: 2 event ('note', 23048, 1, 62, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	11,178,1,	//# 1914, ticks 23112, elapsed 11, channel: 3 event ('note', 23112, 1, 50, 0)
	4,206,152,	//# 1915, ticks 23136, elapsed 4, channel: 2 event ('note', 23136, 1, 78, 76)
	0,190,45,	//# 1916, ticks 23136, elapsed 0, channel: 3 event ('note', 23136, 1, 62, 22)
	16,190,1,	//# 1917, ticks 23232, elapsed 16, channel: 3 event ('note', 23232, 1, 62, 0)
	0,78,0,	//# 1918, ticks 23232, elapsed 0, channel: 0 event ('note', 23232, 1, 78, 0)
	0,76,156,	//# 1919, ticks 23232, elapsed 0, channel: 0 event ('note', 23232, 1, 76, 78)
	0,189,149,	//# 1920, ticks 23232, elapsed 0, channel: 3 event ('note', 23232, 1, 61, 74)
	0,206,151,	//# 1921, ticks 23232, elapsed 0, channel: 3 event ('note', 23232, 4, 78, 75)
	// Note off skipped, note 61 not found in channels, probably interrupted
	11,204,145,	//# 1923, ticks 23300, elapsed 11, channel: 3 event ('note', 23300, 4, 76, 72)
	1,78,1,	//# 1924, ticks 23308, elapsed 1, channel: 1 event ('note', 23308, 4, 78, 0)
	2,76,0,	//# 1925, ticks 23320, elapsed 2, channel: 0 event ('note', 23320, 1, 76, 0)
	1,78,184,	//# 1926, ticks 23328, elapsed 1, channel: 0 event ('note', 23328, 1, 78, 92)
	0,62,73,	//# 1927, ticks 23328, elapsed 0, channel: 1 event ('note', 23328, 1, 62, 36)
	4,78,151,	//# 1928, ticks 23352, elapsed 4, channel: 1 event ('note', 23352, 4, 78, 75)
	4,204,1,	//# 1929, ticks 23376, elapsed 4, channel: 3 event ('note', 23376, 4, 76, 0)
	6,208,159,	//# 1930, ticks 23416, elapsed 6, channel: 3 event ('note', 23416, 4, 80, 79)
	1,74,193,	//# 1931, ticks 23424, elapsed 1, channel: 1 event ('note', 23424, 1, 74, 96)
	0,187,142,	//# 1932, ticks 23424, elapsed 0, channel: 2 event ('note', 23424, 1, 59, 71)
	// Note off skipped, note 62 not found in channels, probably interrupted
	1,78,0,	//# 1934, ticks 23432, elapsed 1, channel: 0 event ('note', 23432, 4, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	7,78,146,	//# 1936, ticks 23476, elapsed 7, channel: 0 event ('note', 23476, 4, 78, 73)
	2,208,1,	//# 1937, ticks 23492, elapsed 2, channel: 3 event ('note', 23492, 4, 80, 0)
	3,187,0,	//# 1938, ticks 23512, elapsed 3, channel: 2 event ('note', 23512, 1, 59, 0)
	1,206,192,	//# 1939, ticks 23520, elapsed 1, channel: 2 event ('note', 23520, 1, 78, 96)
	0,190,121,	//# 1940, ticks 23520, elapsed 0, channel: 3 event ('note', 23520, 1, 62, 60)
	1,74,1,	//# 1941, ticks 23528, elapsed 1, channel: 1 event ('note', 23528, 1, 74, 0)
	2,80,143,	//# 1942, ticks 23540, elapsed 2, channel: 1 event ('note', 23540, 4, 80, 71)
	4,78,0,	//# 1943, ticks 23564, elapsed 4, channel: 0 event ('note', 23564, 4, 78, 0)
	6,81,166,	//# 1944, ticks 23604, elapsed 6, channel: 0 event ('note', 23604, 4, 81, 83)
	2,201,189,	//# 1945, ticks 23616, elapsed 2, channel: 3 event ('note', 23616, 1, 73, 94)
	0,57,153,	//# 1946, ticks 23616, elapsed 0, channel: 1 event ('note', 23616, 1, 57, 76)
	// Note off skipped, note 80 not found in channels, probably interrupted
	1,206,0,	//# 1948, ticks 23624, elapsed 1, channel: 2 event ('note', 23624, 1, 78, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	7,208,158,	//# 1950, ticks 23668, elapsed 7, channel: 2 event ('note', 23668, 4, 80, 79)
	2,81,0,	//# 1951, ticks 23684, elapsed 2, channel: 0 event ('note', 23684, 4, 81, 0)
	0,57,1,	//# 1952, ticks 23688, elapsed 0, channel: 1 event ('note', 23688, 1, 57, 0)
	4,62,118,	//# 1953, ticks 23712, elapsed 4, channel: 0 event ('note', 23712, 1, 62, 59)
	0,78,181,	//# 1954, ticks 23712, elapsed 0, channel: 1 event ('note', 23712, 1, 78, 90)
	1,201,1,	//# 1955, ticks 23720, elapsed 1, channel: 3 event ('note', 23720, 1, 73, 0)
	2,209,161,	//# 1956, ticks 23732, elapsed 2, channel: 3 event ('note', 23732, 4, 81, 80)
	2,208,0,	//# 1957, ticks 23748, elapsed 2, channel: 2 event ('note', 23748, 4, 80, 0)
	9,211,140,	//# 1958, ticks 23800, elapsed 9, channel: 2 event ('note', 23800, 4, 83, 70)
	1,71,184,	//# 1959, ticks 23808, elapsed 1, channel: 0 event ('note', 23808, 1, 71, 92)
	0,184,178,	//# 1960, ticks 23808, elapsed 0, channel: 2 event ('note', 23808, 1, 56, 89)
	1,209,1,	//# 1961, ticks 23816, elapsed 1, channel: 3 event ('note', 23816, 4, 81, 0)
	1,78,1,	//# 1962, ticks 23824, elapsed 1, channel: 1 event ('note', 23824, 1, 78, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	13,184,0,	//# 1966, ticks 23904, elapsed 13, channel: 2 event ('note', 23904, 1, 56, 0)
	0,78,169,	//# 1967, ticks 23904, elapsed 0, channel: 1 event ('note', 23904, 1, 78, 84)
	0,190,74,	//# 1968, ticks 23904, elapsed 0, channel: 2 event ('note', 23904, 1, 62, 37)
	2,71,0,	//# 1969, ticks 23916, elapsed 2, channel: 0 event ('note', 23916, 1, 71, 0)
	13,71,144,	//# 1970, ticks 23992, elapsed 13, channel: 0 event ('note', 23992, 5, 71, 72)
	0,199,145,	//# 1971, ticks 23992, elapsed 0, channel: 3 event ('note', 23992, 6, 71, 72)
	1,197,158,	//# 1972, ticks 24000, elapsed 1, channel: 2 event ('note', 24000, 1, 69, 79)
	0,54,152,	//# 1973, ticks 24000, elapsed 0, channel: 0 event ('note', 24000, 1, 54, 76)
	// Note off skipped, note 62 not found in channels, probably interrupted
	2,78,1,	//# 1975, ticks 24012, elapsed 2, channel: 1 event ('note', 24012, 1, 78, 0)
	8,69,157,	//# 1976, ticks 24060, elapsed 8, channel: 1 event ('note', 24060, 5, 69, 78)
	0,197,157,	//# 1977, ticks 24060, elapsed 0, channel: 3 event ('note', 24060, 6, 69, 78)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	4,54,0,	//# 1980, ticks 24088, elapsed 4, channel: 0 event ('note', 24088, 1, 54, 0)
	0,69,1,	//# 1981, ticks 24088, elapsed 0, channel: 1 event ('note', 24088, 1, 69, 0)
	1,78,166,	//# 1982, ticks 24096, elapsed 1, channel: 0 event ('note', 24096, 1, 78, 83)
	0,62,101,	//# 1983, ticks 24096, elapsed 0, channel: 1 event ('note', 24096, 1, 62, 50)
	3,71,151,	//# 1984, ticks 24116, elapsed 3, channel: 1 event ('note', 24116, 5, 71, 75)
	0,71,151,	//# 1985, ticks 24116, elapsed 0, channel: 1 event ('note', 24116, 6, 71, 75)
	5,197,0,	//# 1986, ticks 24148, elapsed 5, channel: 2 event ('note', 24148, 5, 69, 0)
	0,197,1,	//# 1987, ticks 24148, elapsed 0, channel: 3 event ('note', 24148, 6, 69, 0)
	4,201,146,	//# 1988, ticks 24176, elapsed 4, channel: 2 event ('note', 24176, 5, 73, 73)
	0,201,147,	//# 1989, ticks 24176, elapsed 0, channel: 3 event ('note', 24176, 6, 73, 73)
	// Note off skipped, note 62 not found in channels, probably interrupted
	2,196,178,	//# 1991, ticks 24192, elapsed 2, channel: 2 event ('note', 24192, 1, 68, 89)
	0,180,121,	//# 1992, ticks 24192, elapsed 0, channel: 3 event ('note', 24192, 1, 52, 60)
	0,71,1,	//# 1993, ticks 24192, elapsed 0, channel: 1 event ('note', 24192, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	2,78,0,	//# 1995, ticks 24204, elapsed 2, channel: 0 event ('note', 24204, 1, 78, 0)
	6,71,148,	//# 1996, ticks 24244, elapsed 6, channel: 0 event ('note', 24244, 5, 71, 74)
	0,71,149,	//# 1997, ticks 24244, elapsed 0, channel: 1 event ('note', 24244, 6, 71, 74)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	4,180,1,	//# 2000, ticks 24268, elapsed 4, channel: 3 event ('note', 24268, 1, 52, 0)
	3,190,99,	//# 2001, ticks 24288, elapsed 3, channel: 3 event ('note', 24288, 1, 62, 49)
	0,206,173,	//# 2002, ticks 24288, elapsed 0, channel: 3 event ('note', 24288, 1, 78, 86)
	1,196,0,	//# 2003, ticks 24296, elapsed 1, channel: 2 event ('note', 24296, 1, 68, 0)
	2,201,162,	//# 2004, ticks 24312, elapsed 2, channel: 2 event ('note', 24312, 5, 73, 81)
	0,73,162,	//# 2005, ticks 24312, elapsed 0, channel: 0 event ('note', 24312, 6, 73, 81)
	6,71,1,	//# 2006, ticks 24352, elapsed 6, channel: 1 event ('note', 24352, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	2,206,1,	//# 2008, ticks 24368, elapsed 2, channel: 3 event ('note', 24368, 1, 78, 0)
	0,74,173,	//# 2009, ticks 24372, elapsed 0, channel: 1 event ('note', 24372, 5, 74, 86)
	0,202,173,	//# 2010, ticks 24372, elapsed 0, channel: 3 event ('note', 24372, 6, 74, 86)
	// Note off skipped, note 62 not found in channels, probably interrupted
	2,66,168,	//# 2012, ticks 24384, elapsed 2, channel: 0 event ('note', 24384, 1, 66, 84)
	0,178,142,	//# 2013, ticks 24384, elapsed 0, channel: 2 event ('note', 24384, 1, 50, 71)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	9,201,156,	//# 2016, ticks 24440, elapsed 9, channel: 2 event ('note', 24440, 5, 73, 78)
	0,201,156,	//# 2017, ticks 24440, elapsed 0, channel: 2 event ('note', 24440, 6, 73, 78)
	3,74,1,	//# 2018, ticks 24460, elapsed 3, channel: 1 event ('note', 24460, 5, 74, 0)
	0,202,1,	//# 2019, ticks 24460, elapsed 0, channel: 3 event ('note', 24460, 6, 74, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	3,62,143,	//# 2021, ticks 24480, elapsed 3, channel: 1 event ('note', 24480, 1, 62, 71)
	0,206,165,	//# 2022, ticks 24480, elapsed 0, channel: 3 event ('note', 24480, 1, 78, 82)
	2,66,0,	//# 2023, ticks 24492, elapsed 2, channel: 0 event ('note', 24492, 1, 66, 0)
	2,206,1,	//# 2024, ticks 24508, elapsed 2, channel: 3 event ('note', 24508, 1, 78, 0)
	0,74,174,	//# 2025, ticks 24508, elapsed 0, channel: 0 event ('note', 24508, 5, 74, 87)
	0,202,175,	//# 2026, ticks 24508, elapsed 0, channel: 3 event ('note', 24508, 6, 74, 87)
	1,62,1,	//# 2027, ticks 24516, elapsed 1, channel: 1 event ('note', 24516, 1, 62, 0)
	2,201,0,	//# 2028, ticks 24532, elapsed 2, channel: 2 event ('note', 24532, 5, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	7,49,179,	//# 2030, ticks 24576, elapsed 7, channel: 1 event ('note', 24576, 1, 49, 89)
	0,192,168,	//# 2031, ticks 24576, elapsed 0, channel: 2 event ('note', 24576, 1, 64, 84)
	0,204,148,	//# 2032, ticks 24580, elapsed 0, channel: 2 event ('note', 24580, 5, 76, 74)
	0,204,148,	//# 2033, ticks 24580, elapsed 0, channel: 2 event ('note', 24580, 6, 76, 74)
	3,74,0,	//# 2034, ticks 24600, elapsed 3, channel: 0 event ('note', 24600, 5, 74, 0)
	0,202,1,	//# 2035, ticks 24600, elapsed 0, channel: 3 event ('note', 24600, 6, 74, 0)
	10,49,1,	//# 2036, ticks 24660, elapsed 10, channel: 1 event ('note', 24660, 1, 49, 0)
	2,76,152,	//# 2037, ticks 24672, elapsed 2, channel: 0 event ('note', 24672, 1, 76, 76)
	0,61,155,	//# 2038, ticks 24672, elapsed 0, channel: 1 event ('note', 24672, 1, 61, 77)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	16,202,187,	//# 2041, ticks 24768, elapsed 16, channel: 3 event ('note', 24768, 1, 74, 93)
	0,187,144,	//# 2042, ticks 24768, elapsed 0, channel: 2 event ('note', 24768, 1, 59, 72)
	1,204,132,	//# 2043, ticks 24776, elapsed 1, channel: 2 event ('note', 24776, 4, 76, 66)
	0,61,1,	//# 2044, ticks 24780, elapsed 0, channel: 1 event ('note', 24780, 1, 61, 0)
	1,76,0,	//# 2045, ticks 24788, elapsed 1, channel: 0 event ('note', 24788, 1, 76, 0)
	8,74,150,	//# 2046, ticks 24836, elapsed 8, channel: 0 event ('note', 24836, 4, 74, 75)
	0,204,0,	//# 2047, ticks 24840, elapsed 0, channel: 2 event ('note', 24840, 4, 76, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	4,76,167,	//# 2049, ticks 24864, elapsed 4, channel: 1 event ('note', 24864, 1, 76, 83)
	0,189,144,	//# 2050, ticks 24864, elapsed 0, channel: 2 event ('note', 24864, 1, 61, 72)
	3,204,156,	//# 2051, ticks 24884, elapsed 3, channel: 2 event ('note', 24884, 4, 76, 78)
	2,74,0,	//# 2052, ticks 24896, elapsed 2, channel: 0 event ('note', 24896, 1, 74, 0)
	2,202,1,	//# 2053, ticks 24908, elapsed 2, channel: 3 event ('note', 24908, 4, 74, 0)
	6,78,146,	//# 2054, ticks 24948, elapsed 6, channel: 0 event ('note', 24948, 4, 78, 73)
	2,201,183,	//# 2055, ticks 24960, elapsed 2, channel: 3 event ('note', 24960, 1, 73, 91)
	0,57,144,	//# 2056, ticks 24960, elapsed 0, channel: 0 event ('note', 24960, 1, 57, 72)
	0,76,1,	//# 2057, ticks 24964, elapsed 0, channel: 1 event ('note', 24964, 4, 76, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	4,204,0,	//# 2059, ticks 24988, elapsed 4, channel: 2 event ('note', 24988, 1, 76, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	4,76,135,	//# 2061, ticks 25012, elapsed 4, channel: 1 event ('note', 25012, 4, 76, 67)
	7,189,134,	//# 2062, ticks 25056, elapsed 7, channel: 2 event ('note', 25056, 1, 61, 67)
	0,76,165,	//# 2063, ticks 25056, elapsed 0, channel: 1 event ('note', 25056, 1, 76, 82)
	0,57,0,	//# 2064, ticks 25060, elapsed 0, channel: 0 event ('note', 25060, 1, 57, 0)
	1,201,1,	//# 2065, ticks 25068, elapsed 1, channel: 3 event ('note', 25068, 1, 73, 0)
	0,78,184,	//# 2066, ticks 25072, elapsed 0, channel: 0 event ('note', 25072, 4, 78, 92)
	3,76,1,	//# 2067, ticks 25092, elapsed 3, channel: 1 event ('note', 25092, 4, 76, 0)
	6,80,149,	//# 2068, ticks 25128, elapsed 6, channel: 1 event ('note', 25128, 4, 80, 74)
	3,78,0,	//# 2069, ticks 25148, elapsed 3, channel: 0 event ('note', 25148, 4, 78, 0)
	0,71,180,	//# 2070, ticks 25152, elapsed 0, channel: 0 event ('note', 25152, 1, 71, 90)
	0,184,177,	//# 2071, ticks 25152, elapsed 0, channel: 3 event ('note', 25152, 1, 56, 88)
	// Note off skipped, note 76 not found in channels, probably interrupted
	5,189,0,	//# 2073, ticks 25184, elapsed 5, channel: 2 event ('note', 25184, 1, 61, 0)
	0,206,160,	//# 2074, ticks 25184, elapsed 0, channel: 2 event ('note', 25184, 4, 78, 80)
	2,80,1,	//# 2075, ticks 25200, elapsed 2, channel: 1 event ('note', 25200, 4, 80, 0)
	7,184,1,	//# 2076, ticks 25244, elapsed 7, channel: 3 event ('note', 25244, 1, 56, 0)
	0,61,123,	//# 2077, ticks 25248, elapsed 0, channel: 1 event ('note', 25248, 1, 61, 61)
	0,204,145,	//# 2078, ticks 25248, elapsed 0, channel: 3 event ('note', 25248, 1, 76, 72)
	0,80,161,	//# 2079, ticks 25252, elapsed 0, channel: 1 event ('note', 25252, 4, 80, 80)
	1,71,0,	//# 2080, ticks 25260, elapsed 1, channel: 0 event ('note', 25260, 1, 71, 0)
	2,206,0,	//# 2081, ticks 25272, elapsed 2, channel: 2 event ('note', 25272, 4, 78, 0)
	9,81,150,	//# 2082, ticks 25324, elapsed 9, channel: 0 event ('note', 25324, 4, 81, 75)
	3,197,162,	//# 2083, ticks 25344, elapsed 3, channel: 2 event ('note', 25344, 1, 69, 81)
	0,182,161,	//# 2084, ticks 25344, elapsed 0, channel: 3 event ('note', 25344, 1, 54, 80)
	// Note off skipped, note 61 not found in channels, probably interrupted
	2,80,1,	//# 2086, ticks 25356, elapsed 2, channel: 1 event ('note', 25356, 4, 80, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	8,182,1,	//# 2088, ticks 25404, elapsed 8, channel: 3 event ('note', 25404, 1, 54, 0)
	6,61,121,	//# 2089, ticks 25440, elapsed 6, channel: 1 event ('note', 25440, 1, 61, 60)
	0,204,153,	//# 2090, ticks 25440, elapsed 0, channel: 3 event ('note', 25440, 1, 76, 76)
	0,197,0,	//# 2091, ticks 25444, elapsed 0, channel: 2 event ('note', 25444, 1, 69, 0)
	4,204,1,	//# 2092, ticks 25468, elapsed 4, channel: 3 event ('note', 25468, 5, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	11,196,180,	//# 2094, ticks 25536, elapsed 11, channel: 2 event ('note', 25536, 1, 68, 90)
	0,180,137,	//# 2095, ticks 25536, elapsed 0, channel: 3 event ('note', 25536, 1, 52, 68)
	0,69,175,	//# 2096, ticks 25536, elapsed 0, channel: 1 event ('note', 25536, 5, 69, 87)
	0,197,175,	//# 2097, ticks 25536, elapsed 0, channel: 3 event ('note', 25536, 6, 69, 87)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	11,68,166,	//# 2100, ticks 25600, elapsed 11, channel: 0 event ('note', 25600, 5, 68, 83)
	0,68,166,	//# 2101, ticks 25600, elapsed 0, channel: 0 event ('note', 25600, 6, 68, 83)
	3,69,1,	//# 2102, ticks 25620, elapsed 3, channel: 1 event ('note', 25620, 5, 69, 0)
	0,197,1,	//# 2103, ticks 25620, elapsed 0, channel: 3 event ('note', 25620, 6, 69, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	2,68,0,	//# 2105, ticks 25632, elapsed 2, channel: 0 event ('note', 25632, 1, 68, 0)
	0,61,134,	//# 2106, ticks 25632, elapsed 0, channel: 0 event ('note', 25632, 1, 61, 67)
	0,76,141,	//# 2107, ticks 25632, elapsed 0, channel: 1 event ('note', 25632, 1, 76, 70)
	5,197,177,	//# 2108, ticks 25664, elapsed 5, channel: 3 event ('note', 25664, 5, 69, 88)
	0,69,176,	//# 2109, ticks 25664, elapsed 0, channel: 0 event ('note', 25664, 6, 69, 88)
	0,196,0,	//# 2110, ticks 25668, elapsed 0, channel: 2 event ('note', 25668, 5, 68, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	10,194,182,	//# 2112, ticks 25728, elapsed 10, channel: 2 event ('note', 25728, 1, 66, 91)
	0,50,159,	//# 2113, ticks 25728, elapsed 0, channel: 1 event ('note', 25728, 1, 50, 79)
	0,71,155,	//# 2114, ticks 25728, elapsed 0, channel: 1 event ('note', 25728, 5, 71, 77)
	0,71,155,	//# 2115, ticks 25728, elapsed 0, channel: 1 event ('note', 25728, 6, 71, 77)
	// Note off skipped, note 76 not found in channels, probably interrupted
	4,69,0,	//# 2117, ticks 25752, elapsed 4, channel: 0 event ('note', 25752, 5, 69, 0)
	0,197,1,	//# 2118, ticks 25752, elapsed 0, channel: 3 event ('note', 25752, 6, 69, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	6,69,170,	//# 2120, ticks 25792, elapsed 6, channel: 0 event ('note', 25792, 5, 69, 85)
	0,197,171,	//# 2121, ticks 25792, elapsed 0, channel: 3 event ('note', 25792, 6, 69, 85)
	2,71,1,	//# 2122, ticks 25808, elapsed 2, channel: 1 event ('note', 25808, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	2,76,155,	//# 2124, ticks 25824, elapsed 2, channel: 1 event ('note', 25824, 1, 76, 77)
	0,61,113,	//# 2125, ticks 25824, elapsed 0, channel: 1 event ('note', 25824, 1, 61, 56)
	// Note off skipped, note 50 not found in channels, probably interrupted
	1,194,0,	//# 2127, ticks 25832, elapsed 1, channel: 2 event ('note', 25832, 1, 66, 0)
	4,199,164,	//# 2128, ticks 25856, elapsed 4, channel: 2 event ('note', 25856, 5, 71, 82)
	0,71,165,	//# 2129, ticks 25856, elapsed 0, channel: 1 event ('note', 25856, 6, 71, 82)
	6,69,0,	//# 2130, ticks 25896, elapsed 6, channel: 0 event ('note', 25896, 5, 69, 0)
	0,197,1,	//# 2131, ticks 25896, elapsed 0, channel: 3 event ('note', 25896, 6, 69, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	2,73,166,	//# 2133, ticks 25908, elapsed 2, channel: 0 event ('note', 25908, 5, 73, 83)
	0,201,167,	//# 2134, ticks 25908, elapsed 0, channel: 3 event ('note', 25908, 6, 73, 83)
	2,64,137,	//# 2135, ticks 25920, elapsed 2, channel: 1 event ('note', 25920, 1, 64, 68)
	0,49,149,	//# 2136, ticks 25920, elapsed 0, channel: 1 event ('note', 25920, 1, 49, 74)
	1,199,0,	//# 2137, ticks 25928, elapsed 1, channel: 2 event ('note', 25928, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	8,199,154,	//# 2140, ticks 25976, elapsed 8, channel: 2 event ('note', 25976, 5, 71, 77)
	0,71,155,	//# 2141, ticks 25976, elapsed 0, channel: 1 event ('note', 25976, 6, 71, 77)
	3,73,0,	//# 2142, ticks 25996, elapsed 3, channel: 0 event ('note', 25996, 5, 73, 0)
	0,201,1,	//# 2143, ticks 25996, elapsed 0, channel: 3 event ('note', 25996, 6, 73, 0)
	// Note off skipped, note 49 not found in channels, probably interrupted
	3,61,126,	//# 2145, ticks 26016, elapsed 3, channel: 0 event ('note', 26016, 1, 61, 63)
	0,204,153,	//# 2146, ticks 26016, elapsed 0, channel: 3 event ('note', 26016, 1, 76, 76)
	// Note off skipped, note 64 not found in channels, probably interrupted
	4,73,176,	//# 2148, ticks 26044, elapsed 4, channel: 0 event ('note', 26044, 5, 73, 88)
	0,201,177,	//# 2149, ticks 26044, elapsed 0, channel: 3 event ('note', 26044, 6, 73, 88)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	4,71,1,	//# 2152, ticks 26068, elapsed 4, channel: 1 event ('note', 26068, 5, 71, 0)
	0,199,0,	//# 2153, ticks 26068, elapsed 0, channel: 2 event ('note', 26068, 6, 71, 0)
	7,62,177,	//# 2154, ticks 26112, elapsed 7, channel: 1 event ('note', 26112, 1, 62, 88)
	0,175,146,	//# 2155, ticks 26112, elapsed 0, channel: 2 event ('note', 26112, 1, 47, 73)
	0,202,162,	//# 2156, ticks 26116, elapsed 0, channel: 2 event ('note', 26116, 5, 74, 81)
	0,202,162,	//# 2157, ticks 26116, elapsed 0, channel: 2 event ('note', 26116, 6, 74, 81)
	6,73,0,	//# 2158, ticks 26152, elapsed 6, channel: 0 event ('note', 26152, 5, 73, 0)
	0,201,1,	//# 2159, ticks 26152, elapsed 0, channel: 3 event ('note', 26152, 6, 73, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	9,62,1,	//# 2161, ticks 26208, elapsed 9, channel: 1 event ('note', 26208, 1, 62, 0)
	0,74,192,	//# 2162, ticks 26208, elapsed 0, channel: 0 event ('note', 26208, 1, 74, 96)
	0,59,129,	//# 2163, ticks 26208, elapsed 0, channel: 1 event ('note', 26208, 1, 59, 64)
	// Note off skipped, note 81 not found in channels, probably interrupted
	16,201,187,	//# 2165, ticks 26304, elapsed 16, channel: 3 event ('note', 26304, 1, 73, 93)
	0,57,135,	//# 2166, ticks 26304, elapsed 0, channel: 1 event ('note', 26304, 1, 57, 67)
	0,74,137,	//# 2167, ticks 26308, elapsed 0, channel: 1 event ('note', 26308, 4, 74, 68)
	// Note off skipped, note 59 not found in channels, probably interrupted
	2,74,0,	//# 2169, ticks 26320, elapsed 2, channel: 0 event ('note', 26320, 1, 74, 0)
	6,73,140,	//# 2170, ticks 26360, elapsed 6, channel: 0 event ('note', 26360, 4, 73, 70)
	2,74,1,	//# 2171, ticks 26372, elapsed 2, channel: 1 event ('note', 26372, 4, 74, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	4,74,171,	//# 2173, ticks 26400, elapsed 4, channel: 1 event ('note', 26400, 1, 74, 85)
	0,59,128,	//# 2174, ticks 26400, elapsed 0, channel: 0 event ('note', 26400, 1, 59, 64)
	3,201,1,	//# 2175, ticks 26420, elapsed 3, channel: 3 event ('note', 26420, 1, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	0,202,155,	//# 2177, ticks 26420, elapsed 0, channel: 3 event ('note', 26420, 4, 74, 77)
	10,76,120,	//# 2178, ticks 26480, elapsed 10, channel: 0 event ('note', 26480, 4, 76, 60)
	2,71,178,	//# 2179, ticks 26496, elapsed 2, channel: 0 event ('note', 26496, 1, 71, 89)
	0,184,147,	//# 2180, ticks 26496, elapsed 0, channel: 3 event ('note', 26496, 1, 56, 73)
	0,74,1,	//# 2181, ticks 26500, elapsed 0, channel: 1 event ('note', 26500, 1, 74, 0)
	0,202,0,	//# 2182, ticks 26500, elapsed 0, channel: 2 event ('note', 26500, 4, 74, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	7,74,163,	//# 2184, ticks 26544, elapsed 7, channel: 1 event ('note', 26544, 4, 74, 81)
	// Note off skipped, note 76 not found in channels, probably interrupted
	5,184,1,	//# 2186, ticks 26576, elapsed 5, channel: 3 event ('note', 26576, 1, 56, 0)
	2,71,0,	//# 2187, ticks 26588, elapsed 2, channel: 0 event ('note', 26588, 1, 71, 0)
	0,74,142,	//# 2188, ticks 26592, elapsed 0, channel: 0 event ('note', 26592, 1, 74, 71)
	0,187,100,	//# 2189, ticks 26592, elapsed 0, channel: 2 event ('note', 26592, 1, 59, 50)
	1,204,173,	//# 2190, ticks 26600, elapsed 1, channel: 3 event ('note', 26600, 4, 76, 86)
	4,74,0,	//# 2191, ticks 26624, elapsed 4, channel: 0 event ('note', 26624, 4, 74, 0)
	5,78,194,	//# 2192, ticks 26656, elapsed 5, channel: 0 event ('note', 26656, 4, 78, 97)
	2,204,1,	//# 2193, ticks 26672, elapsed 2, channel: 3 event ('note', 26672, 4, 76, 0)
	2,197,169,	//# 2194, ticks 26688, elapsed 2, channel: 3 event ('note', 26688, 1, 69, 84)
	0,182,154,	//# 2195, ticks 26688, elapsed 0, channel: 2 event ('note', 26688, 1, 54, 77)
	1,74,1,	//# 2196, ticks 26696, elapsed 1, channel: 1 event ('note', 26696, 1, 74, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	2,76,163,	//# 2198, ticks 26712, elapsed 2, channel: 1 event ('note', 26712, 4, 76, 81)
	2,78,0,	//# 2199, ticks 26728, elapsed 2, channel: 0 event ('note', 26728, 4, 78, 0)
	9,182,0,	//# 2200, ticks 26780, elapsed 9, channel: 2 event ('note', 26780, 1, 54, 0)
	0,78,168,	//# 2201, ticks 26780, elapsed 0, channel: 0 event ('note', 26780, 4, 78, 84)
	0,202,152,	//# 2202, ticks 26784, elapsed 0, channel: 2 event ('note', 26784, 1, 74, 76)
	0,187,106,	//# 2203, ticks 26784, elapsed 0, channel: 2 event ('note', 26784, 1, 59, 53)
	2,76,1,	//# 2204, ticks 26796, elapsed 2, channel: 1 event ('note', 26796, 4, 76, 0)
	0,197,1,	//# 2205, ticks 26800, elapsed 0, channel: 3 event ('note', 26800, 1, 69, 0)
	8,68,169,	//# 2206, ticks 26848, elapsed 8, channel: 1 event ('note', 26848, 4, 68, 84)
	1,78,0,	//# 2207, ticks 26856, elapsed 1, channel: 0 event ('note', 26856, 4, 78, 0)
	2,187,0,	//# 2208, ticks 26872, elapsed 2, channel: 2 event ('note', 26872, 1, 59, 0)
	1,68,166,	//# 2209, ticks 26880, elapsed 1, channel: 0 event ('note', 26880, 1, 68, 83)
	0,180,120,	//# 2210, ticks 26880, elapsed 0, channel: 2 event ('note', 26880, 1, 52, 60)
	// Note off skipped, note 74 not found in channels, probably interrupted
	11,180,0,	//# 2212, ticks 26944, elapsed 11, channel: 2 event ('note', 26944, 1, 52, 0)
	5,187,118,	//# 2213, ticks 26976, elapsed 5, channel: 2 event ('note', 26976, 1, 59, 59)
	0,202,155,	//# 2214, ticks 26976, elapsed 0, channel: 3 event ('note', 26976, 1, 74, 77)
	0,68,0,	//# 2215, ticks 26976, elapsed 0, channel: 0 event ('note', 26976, 4, 68, 0)
	0,202,1,	//# 2216, ticks 26980, elapsed 0, channel: 3 event ('note', 26980, 5, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	1,68,1,	//# 2218, ticks 26988, elapsed 1, channel: 1 event ('note', 26988, 1, 68, 0)
	9,78,142,	//# 2219, ticks 27044, elapsed 9, channel: 0 event ('note', 27044, 4, 78, 71)
	3,68,167,	//# 2220, ticks 27064, elapsed 3, channel: 1 event ('note', 27064, 5, 68, 83)
	0,196,167,	//# 2221, ticks 27064, elapsed 0, channel: 3 event ('note', 27064, 6, 68, 83)
	1,178,148,	//# 2222, ticks 27072, elapsed 1, channel: 2 event ('note', 27072, 1, 50, 74)
	0,71,170,	//# 2223, ticks 27072, elapsed 0, channel: 0 event ('note', 27072, 1, 71, 85)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	8,194,178,	//# 2226, ticks 27120, elapsed 8, channel: 2 event ('note', 27120, 5, 66, 89)
	0,66,179,	//# 2227, ticks 27120, elapsed 0, channel: 1 event ('note', 27120, 6, 66, 89)
	2,196,1,	//# 2228, ticks 27136, elapsed 2, channel: 3 event ('note', 27136, 5, 68, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	5,202,169,	//# 2231, ticks 27168, elapsed 5, channel: 3 event ('note', 27168, 1, 74, 84)
	0,187,97,	//# 2232, ticks 27168, elapsed 0, channel: 3 event ('note', 27168, 1, 59, 48)
	1,71,0,	//# 2233, ticks 27176, elapsed 1, channel: 0 event ('note', 27176, 1, 71, 0)
	1,68,162,	//# 2234, ticks 27184, elapsed 1, channel: 0 event ('note', 27184, 5, 68, 81)
	0,196,163,	//# 2235, ticks 27184, elapsed 0, channel: 3 event ('note', 27184, 6, 68, 81)
	4,66,1,	//# 2236, ticks 27212, elapsed 4, channel: 1 event ('note', 27212, 5, 66, 0)
	0,194,0,	//# 2237, ticks 27212, elapsed 0, channel: 2 event ('note', 27212, 6, 66, 0)
	4,76,163,	//# 2238, ticks 27240, elapsed 4, channel: 1 event ('note', 27240, 4, 76, 81)
	0,197,166,	//# 2239, ticks 27240, elapsed 0, channel: 2 event ('note', 27240, 5, 69, 83)
	0,69,166,	//# 2240, ticks 27240, elapsed 0, channel: 0 event ('note', 27240, 6, 69, 83)
	2,196,1,	//# 2241, ticks 27256, elapsed 2, channel: 3 event ('note', 27256, 5, 68, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	1,192,165,	//# 2243, ticks 27264, elapsed 1, channel: 3 event ('note', 27264, 1, 64, 82)
	0,49,157,	//# 2244, ticks 27264, elapsed 0, channel: 1 event ('note', 27264, 1, 49, 78)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	6,68,143,	//# 2248, ticks 27304, elapsed 6, channel: 1 event ('note', 27304, 5, 68, 71)
	0,68,143,	//# 2249, ticks 27304, elapsed 0, channel: 1 event ('note', 27304, 6, 68, 71)
	2,69,0,	//# 2250, ticks 27320, elapsed 2, channel: 0 event ('note', 27320, 5, 69, 0)
	0,197,0,	//# 2251, ticks 27320, elapsed 0, channel: 2 event ('note', 27320, 6, 69, 0)
	// Note off skipped, note 49 not found in channels, probably interrupted
	6,59,118,	//# 2253, ticks 27360, elapsed 6, channel: 0 event ('note', 27360, 1, 59, 59)
	0,202,170,	//# 2254, ticks 27360, elapsed 0, channel: 2 event ('note', 27360, 1, 74, 85)
	0,69,156,	//# 2255, ticks 27364, elapsed 0, channel: 0 event ('note', 27364, 5, 69, 78)
	0,69,157,	//# 2256, ticks 27364, elapsed 0, channel: 1 event ('note', 27364, 6, 69, 78)
	0,192,1,	//# 2257, ticks 27368, elapsed 0, channel: 3 event ('note', 27368, 1, 64, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	// Note off skipped, note 68 not found in channels, probably interrupted
	10,199,145,	//# 2260, ticks 27428, elapsed 10, channel: 3 event ('note', 27428, 5, 71, 72)
	0,199,145,	//# 2261, ticks 27428, elapsed 0, channel: 3 event ('note', 27428, 6, 71, 72)
	2,202,175,	//# 2262, ticks 27444, elapsed 2, channel: 3 event ('note', 27444, 4, 74, 87)
	0,69,0,	//# 2263, ticks 27448, elapsed 0, channel: 0 event ('note', 27448, 5, 69, 0)
	0,69,1,	//# 2264, ticks 27448, elapsed 0, channel: 1 event ('note', 27448, 6, 69, 0)
	1,47,142,	//# 2265, ticks 27456, elapsed 1, channel: 0 event ('note', 27456, 1, 47, 71)
	0,68,171,	//# 2266, ticks 27456, elapsed 0, channel: 1 event ('note', 27456, 1, 68, 85)
	// Note off skipped, note 76 not found in channels, probably interrupted
	3,202,0,	//# 2268, ticks 27476, elapsed 3, channel: 2 event ('note', 27476, 1, 74, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	2,197,172,	//# 2270, ticks 27492, elapsed 2, channel: 2 event ('note', 27492, 5, 69, 86)
	0,69,172,	//# 2271, ticks 27492, elapsed 0, channel: 0 event ('note', 27492, 6, 69, 86)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	10,74,161,	//# 2275, ticks 27552, elapsed 10, channel: 1 event ('note', 27552, 1, 74, 80)
	0,59,79,	//# 2276, ticks 27552, elapsed 0, channel: 1 event ('note', 27552, 1, 59, 39)
	1,71,161,	//# 2277, ticks 27560, elapsed 1, channel: 1 event ('note', 27560, 5, 71, 80)
	0,71,161,	//# 2278, ticks 27560, elapsed 0, channel: 1 event ('note', 27560, 6, 71, 80)
	// Note off skipped, note 68 not found in channels, probably interrupted
	3,69,0,	//# 2280, ticks 27580, elapsed 3, channel: 0 event ('note', 27580, 5, 69, 0)
	0,197,0,	//# 2281, ticks 27580, elapsed 0, channel: 2 event ('note', 27580, 6, 69, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	7,202,1,	//# 2283, ticks 27624, elapsed 7, channel: 3 event ('note', 27624, 1, 74, 0)
	0,64,154,	//# 2284, ticks 27628, elapsed 0, channel: 0 event ('note', 27628, 5, 64, 77)
	0,192,154,	//# 2285, ticks 27628, elapsed 0, channel: 2 event ('note', 27628, 6, 64, 77)
	1,201,177,	//# 2286, ticks 27636, elapsed 1, channel: 3 event ('note', 27636, 4, 73, 88)
	0,71,1,	//# 2287, ticks 27640, elapsed 0, channel: 1 event ('note', 27640, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	1,73,173,	//# 2289, ticks 27648, elapsed 1, channel: 1 event ('note', 27648, 1, 73, 86)
	0,45,110,	//# 2290, ticks 27648, elapsed 0, channel: 0 event ('note', 27648, 1, 45, 55)
	// Note off skipped, note 74 not found in channels, probably interrupted
	15,45,0,	//# 2292, ticks 27736, elapsed 15, channel: 0 event ('note', 27736, 1, 45, 0)
	1,69,154,	//# 2293, ticks 27744, elapsed 1, channel: 0 event ('note', 27744, 1, 69, 77)
	0,57,114,	//# 2294, ticks 27744, elapsed 0, channel: 0 event ('note', 27744, 1, 57, 57)
	0,73,1,	//# 2295, ticks 27748, elapsed 0, channel: 1 event ('note', 27748, 1, 73, 0)
	15,74,183,	//# 2296, ticks 27840, elapsed 15, channel: 1 event ('note', 27840, 1, 74, 91)
	0,47,144,	//# 2297, ticks 27840, elapsed 0, channel: 0 event ('note', 27840, 1, 47, 72)
	0,71,144,	//# 2298, ticks 27844, elapsed 0, channel: 0 event ('note', 27844, 4, 71, 72)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	2,201,1,	//# 2301, ticks 27860, elapsed 2, channel: 3 event ('note', 27860, 4, 73, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	13,197,155,	//# 2303, ticks 27936, elapsed 13, channel: 3 event ('note', 27936, 1, 69, 77)
	0,57,108,	//# 2304, ticks 27936, elapsed 0, channel: 0 event ('note', 27936, 1, 57, 54)
	1,74,1,	//# 2305, ticks 27944, elapsed 1, channel: 1 event ('note', 27944, 1, 74, 0)
	0,69,199,	//# 2306, ticks 27944, elapsed 0, channel: 1 event ('note', 27944, 4, 69, 99)
	// Note off skipped, note 71 not found in channels, probably interrupted
	11,192,0,	//# 2308, ticks 28008, elapsed 11, channel: 2 event ('note', 28008, 5, 64, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	4,177,160,	//# 2310, ticks 28032, elapsed 4, channel: 2 event ('note', 28032, 1, 49, 80)
	0,76,176,	//# 2311, ticks 28032, elapsed 0, channel: 0 event ('note', 28032, 1, 76, 88)
	0,204,163,	//# 2312, ticks 28036, elapsed 0, channel: 3 event ('note', 28036, 4, 76, 81)
	// Note off skipped, note 57 not found in channels, probably interrupted
	3,69,1,	//# 2314, ticks 28056, elapsed 3, channel: 1 event ('note', 28056, 1, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	9,177,0,	//# 2316, ticks 28112, elapsed 9, channel: 2 event ('note', 28112, 1, 49, 0)
	1,76,0,	//# 2317, ticks 28120, elapsed 1, channel: 0 event ('note', 28120, 1, 76, 0)
	1,69,166,	//# 2318, ticks 28128, elapsed 1, channel: 0 event ('note', 28128, 1, 69, 83)
	0,57,127,	//# 2319, ticks 28128, elapsed 0, channel: 1 event ('note', 28128, 1, 57, 63)
	14,197,148,	//# 2320, ticks 28212, elapsed 14, channel: 2 event ('note', 28212, 5, 69, 74)
	0,69,149,	//# 2321, ticks 28212, elapsed 0, channel: 1 event ('note', 28212, 6, 69, 74)
	2,73,195,	//# 2322, ticks 28224, elapsed 2, channel: 1 event ('note', 28224, 1, 73, 97)
	0,173,104,	//# 2323, ticks 28224, elapsed 0, channel: 2 event ('note', 28224, 1, 45, 52)
	// Note off skipped, note 57 not found in channels, probably interrupted
	4,69,0,	//# 2325, ticks 28252, elapsed 4, channel: 0 event ('note', 28252, 1, 69, 0)
	4,173,0,	//# 2326, ticks 28280, elapsed 4, channel: 2 event ('note', 28280, 1, 45, 0)
	6,57,122,	//# 2327, ticks 28320, elapsed 6, channel: 0 event ('note', 28320, 1, 57, 61)
	0,204,152,	//# 2328, ticks 28320, elapsed 0, channel: 2 event ('note', 28320, 1, 76, 76)
	4,73,1,	//# 2329, ticks 28344, elapsed 4, channel: 1 event ('note', 28344, 1, 73, 0)
	9,78,163,	//# 2330, ticks 28396, elapsed 9, channel: 1 event ('note', 28396, 5, 78, 81)
	0,78,162,	//# 2331, ticks 28396, elapsed 0, channel: 0 event ('note', 28396, 6, 78, 81)
	3,206,208,	//# 2332, ticks 28416, elapsed 3, channel: 2 event ('note', 28416, 1, 78, 104)
	0,50,154,	//# 2333, ticks 28416, elapsed 0, channel: 0 event ('note', 28416, 1, 50, 77)
	// Note off skipped, note 57 not found in channels, probably interrupted
	3,204,1,	//# 2335, ticks 28436, elapsed 3, channel: 3 event ('note', 28436, 1, 76, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	11,202,177,	//# 2338, ticks 28504, elapsed 11, channel: 3 event ('note', 28504, 4, 74, 88)
	1,50,0,	//# 2339, ticks 28512, elapsed 1, channel: 0 event ('note', 28512, 1, 50, 0)
	0,74,178,	//# 2340, ticks 28512, elapsed 0, channel: 0 event ('note', 28512, 1, 74, 89)
	0,57,103,	//# 2341, ticks 28512, elapsed 0, channel: 1 event ('note', 28512, 1, 57, 51)
	0,206,0,	//# 2342, ticks 28516, elapsed 0, channel: 2 event ('note', 28516, 1, 78, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	13,201,120,	//# 2344, ticks 28592, elapsed 13, channel: 2 event ('note', 28592, 4, 73, 60)
	0,76,167,	//# 2345, ticks 28596, elapsed 0, channel: 1 event ('note', 28596, 5, 76, 83)
	0,204,166,	//# 2346, ticks 28596, elapsed 0, channel: 2 event ('note', 28596, 6, 76, 83)
	1,74,0,	//# 2347, ticks 28604, elapsed 1, channel: 0 event ('note', 28604, 4, 74, 0)
	0,81,166,	//# 2348, ticks 28608, elapsed 0, channel: 0 event ('note', 28608, 1, 81, 83)
	0,52,122,	//# 2349, ticks 28608, elapsed 0, channel: 0 event ('note', 28608, 1, 52, 61)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	7,202,1,	//# 2353, ticks 28652, elapsed 7, channel: 3 event ('note', 28652, 1, 74, 0)
	5,52,0,	//# 2354, ticks 28684, elapsed 5, channel: 0 event ('note', 28684, 1, 52, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	0,74,174,	//# 2356, ticks 28684, elapsed 0, channel: 0 event ('note', 28684, 4, 74, 87)
	3,185,119,	//# 2357, ticks 28704, elapsed 3, channel: 3 event ('note', 28704, 1, 57, 59)
	0,201,181,	//# 2358, ticks 28704, elapsed 0, channel: 3 event ('note', 28704, 1, 73, 90)
	// Note off skipped, note 81 not found in channels, probably interrupted
	12,74,193,	//# 2360, ticks 28776, elapsed 12, channel: 1 event ('note', 28776, 5, 74, 96)
	0,202,192,	//# 2361, ticks 28776, elapsed 0, channel: 2 event ('note', 28776, 6, 74, 96)
	1,83,154,	//# 2362, ticks 28784, elapsed 1, channel: 0 event ('note', 28784, 4, 83, 77)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	2,74,186,	//# 2365, ticks 28800, elapsed 2, channel: 0 event ('note', 28800, 1, 74, 93)
	0,182,159,	//# 2366, ticks 28800, elapsed 0, channel: 3 event ('note', 28800, 1, 54, 79)
	1,74,0,	//# 2367, ticks 28808, elapsed 1, channel: 0 event ('note', 28808, 4, 74, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	9,73,174,	//# 2370, ticks 28864, elapsed 9, channel: 0 event ('note', 28864, 5, 73, 87)
	0,201,175,	//# 2371, ticks 28864, elapsed 0, channel: 3 event ('note', 28864, 6, 73, 87)
	// Note off skipped, note 54 not found in channels, probably interrupted
	3,74,1,	//# 2373, ticks 28884, elapsed 3, channel: 1 event ('note', 28884, 5, 74, 0)
	0,202,0,	//# 2374, ticks 28884, elapsed 0, channel: 2 event ('note', 28884, 6, 74, 0)
	2,57,125,	//# 2375, ticks 28896, elapsed 2, channel: 1 event ('note', 28896, 1, 57, 62)
	0,204,168,	//# 2376, ticks 28896, elapsed 0, channel: 2 event ('note', 28896, 1, 76, 84)
	// Note off skipped, note 74 not found in channels, probably interrupted
	11,74,165,	//# 2378, ticks 28960, elapsed 11, channel: 1 event ('note', 28960, 5, 74, 82)
	0,74,165,	//# 2379, ticks 28960, elapsed 0, channel: 1 event ('note', 28960, 6, 74, 82)
	4,73,0,	//# 2380, ticks 28984, elapsed 4, channel: 0 event ('note', 28984, 5, 73, 0)
	0,201,1,	//# 2381, ticks 28984, elapsed 0, channel: 3 event ('note', 28984, 6, 73, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	1,78,186,	//# 2383, ticks 28992, elapsed 1, channel: 0 event ('note', 28992, 1, 78, 93)
	0,178,119,	//# 2384, ticks 28992, elapsed 0, channel: 3 event ('note', 28992, 1, 50, 59)
	0,209,177,	//# 2385, ticks 28992, elapsed 0, channel: 3 event ('note', 28992, 4, 81, 88)
	// Note off skipped, note 83 not found in channels, probably interrupted
	3,204,0,	//# 2387, ticks 29012, elapsed 3, channel: 2 event ('note', 29012, 1, 76, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	13,185,126,	//# 2389, ticks 29088, elapsed 13, channel: 2 event ('note', 29088, 1, 57, 63)
	0,202,176,	//# 2390, ticks 29088, elapsed 0, channel: 2 event ('note', 29088, 1, 74, 88)
	1,78,0,	//# 2391, ticks 29096, elapsed 1, channel: 0 event ('note', 29096, 1, 78, 0)
	13,209,1,	//# 2392, ticks 29176, elapsed 13, channel: 3 event ('note', 29176, 4, 81, 0)
	1,71,174,	//# 2393, ticks 29184, elapsed 1, channel: 0 event ('note', 29184, 1, 71, 87)
	0,180,151,	//# 2394, ticks 29184, elapsed 0, channel: 3 event ('note', 29184, 1, 52, 75)
	2,208,219,	//# 2395, ticks 29196, elapsed 2, channel: 3 event ('note', 29196, 4, 80, 109)
	// Note off skipped, note 57 not found in channels, probably interrupted
	3,74,1,	//# 2397, ticks 29216, elapsed 3, channel: 1 event ('note', 29216, 1, 74, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	9,73,145,	//# 2399, ticks 29268, elapsed 9, channel: 1 event ('note', 29268, 5, 73, 72)
	0,73,145,	//# 2400, ticks 29268, elapsed 0, channel: 1 event ('note', 29268, 6, 73, 72)
	2,76,155,	//# 2401, ticks 29280, elapsed 2, channel: 1 event ('note', 29280, 1, 76, 77)
	1,202,0,	//# 2402, ticks 29288, elapsed 1, channel: 2 event ('note', 29288, 5, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	1,71,0,	//# 2404, ticks 29296, elapsed 1, channel: 0 event ('note', 29296, 1, 71, 0)
	11,78,160,	//# 2405, ticks 29360, elapsed 11, channel: 0 event ('note', 29360, 4, 78, 80)
	2,202,174,	//# 2406, ticks 29372, elapsed 2, channel: 2 event ('note', 29372, 5, 74, 87)
	0,74,175,	//# 2407, ticks 29372, elapsed 0, channel: 1 event ('note', 29372, 6, 74, 87)
	0,74,188,	//# 2408, ticks 29376, elapsed 0, channel: 0 event ('note', 29376, 1, 74, 94)
	0,40,175,	//# 2409, ticks 29376, elapsed 0, channel: 1 event ('note', 29376, 1, 40, 87)
	0,208,1,	//# 2410, ticks 29380, elapsed 0, channel: 3 event ('note', 29380, 4, 80, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	12,40,1,	//# 2414, ticks 29452, elapsed 12, channel: 1 event ('note', 29452, 1, 40, 0)
	1,76,175,	//# 2415, ticks 29460, elapsed 1, channel: 1 event ('note', 29460, 4, 76, 87)
	0,199,151,	//# 2416, ticks 29460, elapsed 0, channel: 3 event ('note', 29460, 5, 71, 75)
	0,199,151,	//# 2417, ticks 29460, elapsed 0, channel: 3 event ('note', 29460, 6, 71, 75)
	2,204,165,	//# 2418, ticks 29472, elapsed 2, channel: 3 event ('note', 29472, 1, 76, 82)
	0,74,0,	//# 2419, ticks 29472, elapsed 0, channel: 0 event ('note', 29472, 5, 74, 0)
	0,202,0,	//# 2420, ticks 29472, elapsed 0, channel: 2 event ('note', 29472, 6, 74, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	15,81,172,	//# 2423, ticks 29564, elapsed 15, channel: 0 event ('note', 29564, 4, 81, 86)
	0,201,160,	//# 2424, ticks 29564, elapsed 0, channel: 2 event ('note', 29564, 5, 73, 80)
	0,201,160,	//# 2425, ticks 29564, elapsed 0, channel: 2 event ('note', 29564, 6, 73, 80)
	0,201,176,	//# 2426, ticks 29568, elapsed 0, channel: 2 event ('note', 29568, 1, 73, 88)
	1,76,1,	//# 2427, ticks 29576, elapsed 1, channel: 1 event ('note', 29576, 1, 76, 0)
	2,204,1,	//# 2428, ticks 29592, elapsed 2, channel: 3 event ('note', 29592, 4, 76, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	12,81,169,	//# 2431, ticks 29664, elapsed 12, channel: 1 event ('note', 29664, 1, 81, 84)
	0,182,167,	//# 2432, ticks 29664, elapsed 0, channel: 3 event ('note', 29664, 1, 54, 83)
	2,201,0,	//# 2433, ticks 29676, elapsed 2, channel: 2 event ('note', 29676, 1, 73, 0)
	12,202,178,	//# 2434, ticks 29748, elapsed 12, channel: 2 event ('note', 29748, 5, 74, 89)
	0,202,179,	//# 2435, ticks 29748, elapsed 0, channel: 3 event ('note', 29748, 6, 74, 89)
	2,80,193,	//# 2436, ticks 29760, elapsed 2, channel: 1 event ('note', 29760, 1, 80, 96)
	0,52,142,	//# 2437, ticks 29760, elapsed 0, channel: 0 event ('note', 29760, 1, 52, 71)
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 81 not found in channels, probably interrupted
	16,78,210,	//# 2442, ticks 29856, elapsed 16, channel: 0 event ('note', 29856, 1, 78, 105)
	0,178,122,	//# 2443, ticks 29856, elapsed 0, channel: 2 event ('note', 29856, 1, 50, 61)
	// Note off skipped, note 52 not found in channels, probably interrupted
	2,80,1,	//# 2445, ticks 29868, elapsed 2, channel: 1 event ('note', 29868, 1, 80, 0)
	13,76,171,	//# 2446, ticks 29944, elapsed 13, channel: 1 event ('note', 29944, 5, 76, 85)
	0,204,170,	//# 2447, ticks 29944, elapsed 0, channel: 2 event ('note', 29944, 6, 76, 85)
	1,76,189,	//# 2448, ticks 29952, elapsed 1, channel: 1 event ('note', 29952, 1, 76, 94)
	0,177,176,	//# 2449, ticks 29952, elapsed 0, channel: 2 event ('note', 29952, 1, 49, 88)
	1,202,1,	//# 2450, ticks 29960, elapsed 1, channel: 3 event ('note', 29960, 5, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	2,78,0,	//# 2453, ticks 29976, elapsed 2, channel: 0 event ('note', 29976, 1, 78, 0)
	11,177,0,	//# 2454, ticks 30040, elapsed 11, channel: 2 event ('note', 30040, 1, 49, 0)
	1,76,1,	//# 2455, ticks 30048, elapsed 1, channel: 1 event ('note', 30048, 1, 76, 0)
	0,74,180,	//# 2456, ticks 30048, elapsed 0, channel: 0 event ('note', 30048, 1, 74, 90)
	16,73,167,	//# 2457, ticks 30144, elapsed 16, channel: 1 event ('note', 30144, 1, 73, 83)
	0,178,152,	//# 2458, ticks 30144, elapsed 0, channel: 2 event ('note', 30144, 1, 50, 76)
	4,74,0,	//# 2459, ticks 30168, elapsed 4, channel: 0 event ('note', 30168, 1, 74, 0)
	10,78,168,	//# 2460, ticks 30228, elapsed 10, channel: 0 event ('note', 30228, 5, 78, 84)
	0,206,169,	//# 2461, ticks 30228, elapsed 0, channel: 3 event ('note', 30228, 6, 78, 84)
	0,211,166,	//# 2462, ticks 30232, elapsed 0, channel: 2 event ('note', 30232, 4, 83, 83)
	1,76,157,	//# 2463, ticks 30240, elapsed 1, channel: 1 event ('note', 30240, 1, 76, 78)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 81 not found in channels, probably interrupted
	6,76,1,	//# 2467, ticks 30280, elapsed 6, channel: 1 event ('note', 30280, 5, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	7,80,157,	//# 2469, ticks 30324, elapsed 7, channel: 1 event ('note', 30324, 4, 80, 78)
	0,71,165,	//# 2470, ticks 30328, elapsed 0, channel: 1 event ('note', 30328, 5, 71, 82)
	0,71,165,	//# 2471, ticks 30328, elapsed 0, channel: 1 event ('note', 30328, 6, 71, 82)
	1,52,137,	//# 2472, ticks 30336, elapsed 1, channel: 1 event ('note', 30336, 1, 52, 68)
	0,74,195,	//# 2473, ticks 30336, elapsed 0, channel: 1 event ('note', 30336, 1, 74, 97)
	2,211,0,	//# 2474, ticks 30348, elapsed 2, channel: 2 event ('note', 30348, 4, 83, 0)
	2,78,0,	//# 2475, ticks 30364, elapsed 2, channel: 0 event ('note', 30364, 5, 78, 0)
	0,206,1,	//# 2476, ticks 30364, elapsed 0, channel: 3 event ('note', 30364, 6, 78, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	11,73,188,	//# 2479, ticks 30432, elapsed 11, channel: 0 event ('note', 30432, 1, 73, 94)
	4,74,1,	//# 2480, ticks 30460, elapsed 4, channel: 1 event ('note', 30460, 1, 74, 0)
	11,71,185,	//# 2481, ticks 30528, elapsed 11, channel: 1 event ('note', 30528, 1, 71, 92)
	0,168,144,	//# 2482, ticks 30528, elapsed 0, channel: 2 event ('note', 30528, 1, 40, 72)
	4,73,0,	//# 2483, ticks 30552, elapsed 4, channel: 0 event ('note', 30552, 1, 73, 0)
	6,168,0,	//# 2484, ticks 30592, elapsed 6, channel: 2 event ('note', 30592, 1, 40, 0)
	4,69,154,	//# 2485, ticks 30616, elapsed 4, channel: 0 event ('note', 30616, 5, 69, 77)
	0,197,154,	//# 2486, ticks 30616, elapsed 0, channel: 2 event ('note', 30616, 6, 69, 77)
	0,209,177,	//# 2487, ticks 30620, elapsed 0, channel: 3 event ('note', 30620, 4, 81, 88)
	0,74,192,	//# 2488, ticks 30624, elapsed 0, channel: 0 event ('note', 30624, 1, 74, 96)
	2,71,1,	//# 2489, ticks 30636, elapsed 2, channel: 1 event ('note', 30636, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 80 not found in channels, probably interrupted
	10,197,0,	//# 2493, ticks 30696, elapsed 10, channel: 2 event ('note', 30696, 5, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	1,209,1,	//# 2495, ticks 30704, elapsed 1, channel: 3 event ('note', 30704, 4, 81, 0)
	1,61,137,	//# 2496, ticks 30712, elapsed 1, channel: 1 event ('note', 30712, 7, 61, 68)
	1,173,196,	//# 2497, ticks 30720, elapsed 1, channel: 2 event ('note', 30720, 1, 45, 98)
	0,201,209,	//# 2498, ticks 30720, elapsed 0, channel: 3 event ('note', 30720, 1, 73, 104)
	0,69,149,	//# 2499, ticks 30720, elapsed 0, channel: 1 event ('note', 30720, 5, 69, 74)
	0,69,149,	//# 2500, ticks 30720, elapsed 0, channel: 1 event ('note', 30720, 6, 69, 74)
	0,57,175,	//# 2501, ticks 30724, elapsed 0, channel: 1 event ('note', 30724, 3, 57, 87)
	0,81,199,	//# 2502, ticks 30724, elapsed 0, channel: 1 event ('note', 30724, 4, 81, 99)
	2,45,172,	//# 2503, ticks 30736, elapsed 2, channel: 0 event ('note', 30736, 2, 45, 86)
	0,57,198,	//# 2504, ticks 30740, elapsed 0, channel: 0 event ('note', 30740, 8, 57, 99)
	// Note off skipped, note 74 not found in channels, probably interrupted
	7,57,0,	//# 2506, ticks 30784, elapsed 7, channel: 0 event ('note', 30784, 8, 57, 0)
	1,201,1,	//# 2507, ticks 30792, elapsed 1, channel: 3 event ('note', 30792, 1, 73, 0)
	4,57,184,	//# 2508, ticks 30816, elapsed 4, channel: 0 event ('note', 30816, 8, 57, 92)
	15,189,193,	//# 2509, ticks 30904, elapsed 15, channel: 3 event ('note', 30904, 8, 61, 96)
	1,69,192,	//# 2510, ticks 30912, elapsed 1, channel: 0 event ('note', 30912, 1, 69, 96)
	// Note off skipped, note 57 not found in channels, probably interrupted
	9,189,1,	//# 2512, ticks 30964, elapsed 9, channel: 3 event ('note', 30964, 8, 61, 0)
	5,69,0,	//# 2513, ticks 30996, elapsed 5, channel: 0 event ('note', 30996, 1, 69, 0)
	0,61,196,	//# 2514, ticks 30996, elapsed 0, channel: 0 event ('note', 30996, 8, 61, 98)
	2,173,0,	//# 2515, ticks 31012, elapsed 2, channel: 2 event ('note', 31012, 1, 45, 0)
	9,61,0,	//# 2516, ticks 31064, elapsed 9, channel: 0 event ('note', 31064, 7, 61, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	4,64,190,	//# 2519, ticks 31088, elapsed 4, channel: 0 event ('note', 31088, 8, 64, 95)
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	9,81,1,	//# 2523, ticks 31144, elapsed 9, channel: 1 event ('note', 31144, 4, 81, 0)
	0,64,0,	//# 2524, ticks 31148, elapsed 0, channel: 0 event ('note', 31148, 8, 64, 0)
	5,64,196,	//# 2525, ticks 31180, elapsed 5, channel: 0 event ('note', 31180, 8, 64, 98)
	15,45,203,	//# 2526, ticks 31268, elapsed 15, channel: 1 event ('note', 31268, 3, 45, 101)
	0,189,138,	//# 2527, ticks 31268, elapsed 0, channel: 2 event ('note', 31268, 7, 61, 69)
	0,161,199,	//# 2528, ticks 31272, elapsed 0, channel: 3 event ('note', 31272, 2, 33, 99)
	0,197,208,	//# 2529, ticks 31272, elapsed 0, channel: 2 event ('note', 31272, 8, 69, 104)
	2,64,0,	//# 2530, ticks 31284, elapsed 2, channel: 0 event ('note', 31284, 8, 64, 0)
	2,45,198,	//# 2531, ticks 31296, elapsed 2, channel: 0 event ('note', 31296, 1, 45, 99)
	5,197,0,	//# 2532, ticks 31328, elapsed 5, channel: 2 event ('note', 31328, 8, 69, 0)
	2,45,0,	//# 2533, ticks 31344, elapsed 2, channel: 0 event ('note', 31344, 3, 45, 0)
	1,161,1,	//# 2534, ticks 31352, elapsed 1, channel: 3 event ('note', 31352, 2, 33, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	2,69,204,	//# 2536, ticks 31368, elapsed 2, channel: 0 event ('note', 31368, 8, 69, 102)
	1,45,1,	//# 2537, ticks 31376, elapsed 1, channel: 1 event ('note', 31376, 1, 45, 0)
	15,59,161,	//# 2538, ticks 31464, elapsed 15, channel: 1 event ('note', 31464, 7, 59, 80)
	0,180,198,	//# 2539, ticks 31468, elapsed 0, channel: 2 event ('note', 31468, 3, 52, 99)
	0,196,187,	//# 2540, ticks 31468, elapsed 0, channel: 3 event ('note', 31468, 8, 68, 93)
	2,40,195,	//# 2541, ticks 31484, elapsed 2, channel: 1 event ('note', 31484, 2, 40, 97)
	0,180,193,	//# 2542, ticks 31488, elapsed 0, channel: 3 event ('note', 31488, 1, 52, 96)
	0,69,0,	//# 2543, ticks 31488, elapsed 0, channel: 0 event ('note', 31488, 8, 69, 0)
	8,180,0,	//# 2544, ticks 31536, elapsed 8, channel: 2 event ('note', 31536, 3, 52, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	4,180,1,	//# 2546, ticks 31560, elapsed 4, channel: 3 event ('note', 31560, 1, 52, 0)
	0,69,194,	//# 2547, ticks 31564, elapsed 0, channel: 0 event ('note', 31564, 8, 69, 97)
	0,40,1,	//# 2548, ticks 31568, elapsed 0, channel: 1 event ('note', 31568, 2, 40, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	16,54,201,	//# 2550, ticks 31664, elapsed 16, channel: 1 event ('note', 31664, 3, 54, 100)
	0,185,182,	//# 2551, ticks 31664, elapsed 0, channel: 2 event ('note', 31664, 7, 57, 91)
	0,196,167,	//# 2552, ticks 31668, elapsed 0, channel: 3 event ('note', 31668, 8, 68, 83)
	1,170,201,	//# 2553, ticks 31676, elapsed 1, channel: 3 event ('note', 31676, 2, 42, 100)
	0,182,196,	//# 2554, ticks 31680, elapsed 0, channel: 2 event ('note', 31680, 1, 54, 98)
	4,69,0,	//# 2555, ticks 31704, elapsed 4, channel: 0 event ('note', 31704, 8, 69, 0)
	4,54,1,	//# 2556, ticks 31728, elapsed 4, channel: 1 event ('note', 31728, 3, 54, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	5,66,166,	//# 2558, ticks 31760, elapsed 5, channel: 0 event ('note', 31760, 8, 66, 83)
	0,182,0,	//# 2559, ticks 31764, elapsed 0, channel: 2 event ('note', 31764, 1, 54, 0)
	0,170,1,	//# 2560, ticks 31764, elapsed 0, channel: 3 event ('note', 31764, 2, 42, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	15,59,139,	//# 2562, ticks 31856, elapsed 15, channel: 1 event ('note', 31856, 7, 59, 69)
	0,192,190,	//# 2563, ticks 31856, elapsed 0, channel: 2 event ('note', 31856, 8, 64, 95)
	0,184,205,	//# 2564, ticks 31860, elapsed 0, channel: 3 event ('note', 31860, 3, 56, 102)
	0,44,199,	//# 2565, ticks 31864, elapsed 0, channel: 1 event ('note', 31864, 2, 44, 99)
	1,56,202,	//# 2566, ticks 31872, elapsed 1, channel: 0 event ('note', 31872, 1, 56, 101)
	// Note off skipped, note 66 not found in channels, probably interrupted
	8,56,0,	//# 2568, ticks 31920, elapsed 8, channel: 0 event ('note', 31920, 3, 56, 0)
	2,184,1,	//# 2569, ticks 31936, elapsed 2, channel: 3 event ('note', 31936, 1, 56, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	2,44,1,	//# 2571, ticks 31948, elapsed 2, channel: 1 event ('note', 31948, 2, 44, 0)
	0,62,196,	//# 2572, ticks 31948, elapsed 0, channel: 0 event ('note', 31948, 8, 62, 98)
	0,192,0,	//# 2573, ticks 31952, elapsed 0, channel: 2 event ('note', 31952, 8, 64, 0)
	16,52,181,	//# 2574, ticks 32048, elapsed 16, channel: 1 event ('note', 32048, 3, 52, 90)
	0,184,158,	//# 2575, ticks 32048, elapsed 0, channel: 2 event ('note', 32048, 7, 56, 79)
	0,189,237,	//# 2576, ticks 32048, elapsed 0, channel: 3 event ('note', 32048, 8, 61, 118)
	0,168,180,	//# 2577, ticks 32052, elapsed 0, channel: 2 event ('note', 32052, 2, 40, 90)
	2,52,183,	//# 2578, ticks 32064, elapsed 2, channel: 1 event ('note', 32064, 1, 52, 91)
	2,62,0,	//# 2579, ticks 32080, elapsed 2, channel: 0 event ('note', 32080, 8, 62, 0)
	6,52,1,	//# 2580, ticks 32120, elapsed 6, channel: 1 event ('note', 32120, 1, 52, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	2,168,0,	//# 2582, ticks 32132, elapsed 2, channel: 2 event ('note', 32132, 2, 40, 0)
	// Note off skipped, note 56 not found in channels, probably interrupted
	1,59,174,	//# 2584, ticks 32140, elapsed 1, channel: 0 event ('note', 32140, 8, 59, 87)
	2,189,1,	//# 2585, ticks 32152, elapsed 2, channel: 3 event ('note', 32152, 8, 61, 0)
	14,57,195,	//# 2586, ticks 32236, elapsed 14, channel: 1 event ('note', 32236, 8, 57, 97)
	0,177,202,	//# 2587, ticks 32240, elapsed 0, channel: 2 event ('note', 32240, 3, 49, 101)
	1,165,207,	//# 2588, ticks 32248, elapsed 1, channel: 3 event ('note', 32248, 2, 37, 103)
	0,52,134,	//# 2589, ticks 32248, elapsed 0, channel: 0 event ('note', 32248, 7, 52, 67)
	// Note off skipped, note 59 not found in channels, probably interrupted
	1,49,194,	//# 2591, ticks 32256, elapsed 1, channel: 0 event ('note', 32256, 1, 49, 97)
	6,57,1,	//# 2592, ticks 32292, elapsed 6, channel: 1 event ('note', 32292, 8, 57, 0)
	4,49,0,	//# 2593, ticks 32316, elapsed 4, channel: 0 event ('note', 32316, 3, 49, 0)
	0,177,0,	//# 2594, ticks 32320, elapsed 0, channel: 2 event ('note', 32320, 1, 49, 0)
	0,165,1,	//# 2595, ticks 32320, elapsed 0, channel: 3 event ('note', 32320, 2, 37, 0)
	1,57,204,	//# 2596, ticks 32328, elapsed 1, channel: 0 event ('note', 32328, 8, 57, 102)
	// Note off skipped, note 52 not found in channels, probably interrupted
	15,61,209,	//# 2598, ticks 32420, elapsed 15, channel: 1 event ('note', 32420, 8, 61, 104)
	0,192,146,	//# 2599, ticks 32424, elapsed 0, channel: 2 event ('note', 32424, 7, 64, 73)
	0,163,203,	//# 2600, ticks 32428, elapsed 0, channel: 3 event ('note', 32428, 2, 35, 101)
	0,175,192,	//# 2601, ticks 32428, elapsed 0, channel: 2 event ('note', 32428, 3, 47, 96)
	3,175,188,	//# 2602, ticks 32448, elapsed 3, channel: 2 event ('note', 32448, 1, 47, 94)
	1,57,0,	//# 2603, ticks 32456, elapsed 1, channel: 0 event ('note', 32456, 8, 57, 0)
	4,61,1,	//# 2604, ticks 32484, elapsed 4, channel: 1 event ('note', 32484, 8, 61, 0)
	3,175,0,	//# 2605, ticks 32504, elapsed 3, channel: 2 event ('note', 32504, 3, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	2,163,1,	//# 2607, ticks 32520, elapsed 2, channel: 3 event ('note', 32520, 2, 35, 0)
	0,61,214,	//# 2608, ticks 32520, elapsed 0, channel: 0 event ('note', 32520, 8, 61, 107)
	// Note off skipped, note 64 not found in channels, probably interrupted
	17,49,191,	//# 2610, ticks 32620, elapsed 17, channel: 1 event ('note', 32620, 3, 49, 95)
	0,192,190,	//# 2611, ticks 32620, elapsed 0, channel: 2 event ('note', 32620, 8, 64, 95)
	2,165,201,	//# 2612, ticks 32632, elapsed 2, channel: 3 event ('note', 32632, 2, 37, 100)
	0,57,183,	//# 2613, ticks 32632, elapsed 0, channel: 1 event ('note', 32632, 7, 57, 91)
	1,49,195,	//# 2614, ticks 32640, elapsed 1, channel: 1 event ('note', 32640, 1, 49, 97)
	0,61,0,	//# 2615, ticks 32644, elapsed 0, channel: 0 event ('note', 32644, 8, 61, 0)
	6,49,1,	//# 2616, ticks 32684, elapsed 6, channel: 1 event ('note', 32684, 3, 49, 0)
	0,192,0,	//# 2617, ticks 32684, elapsed 0, channel: 2 event ('note', 32684, 8, 64, 0)
	// Note off skipped, note 49 not found in channels, probably interrupted
	4,165,1,	//# 2619, ticks 32712, elapsed 4, channel: 3 event ('note', 32712, 2, 37, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	0,64,198,	//# 2621, ticks 32712, elapsed 0, channel: 0 event ('note', 32712, 8, 64, 99)
	16,45,181,	//# 2622, ticks 32808, elapsed 16, channel: 1 event ('note', 32808, 3, 45, 90)
	0,197,196,	//# 2623, ticks 32808, elapsed 0, channel: 2 event ('note', 32808, 8, 69, 98)
	1,161,195,	//# 2624, ticks 32816, elapsed 1, channel: 3 event ('note', 32816, 2, 33, 97)
	0,61,161,	//# 2625, ticks 32816, elapsed 0, channel: 1 event ('note', 32816, 7, 61, 80)
	2,45,181,	//# 2626, ticks 32832, elapsed 2, channel: 1 event ('note', 32832, 1, 45, 90)
	0,64,0,	//# 2627, ticks 32832, elapsed 0, channel: 0 event ('note', 32832, 8, 64, 0)
	6,197,0,	//# 2628, ticks 32868, elapsed 6, channel: 2 event ('note', 32868, 8, 69, 0)
	2,45,1,	//# 2629, ticks 32880, elapsed 2, channel: 1 event ('note', 32880, 3, 45, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	2,69,196,	//# 2631, ticks 32892, elapsed 2, channel: 0 event ('note', 32892, 8, 69, 98)
	0,161,1,	//# 2632, ticks 32896, elapsed 0, channel: 3 event ('note', 32896, 2, 33, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	18,71,177,	//# 2634, ticks 33004, elapsed 18, channel: 1 event ('note', 33004, 8, 71, 88)
	2,184,122,	//# 2635, ticks 33016, elapsed 2, channel: 2 event ('note', 33016, 7, 56, 61)
	0,69,0,	//# 2636, ticks 33020, elapsed 0, channel: 0 event ('note', 33020, 8, 69, 0)
	0,52,172,	//# 2637, ticks 33024, elapsed 0, channel: 0 event ('note', 33024, 1, 52, 86)
	0,168,189,	//# 2638, ticks 33024, elapsed 0, channel: 3 event ('note', 33024, 2, 40, 94)
	0,180,168,	//# 2639, ticks 33024, elapsed 0, channel: 2 event ('note', 33024, 3, 52, 84)
	14,71,1,	//# 2640, ticks 33108, elapsed 14, channel: 1 event ('note', 33108, 8, 71, 0)
	0,52,0,	//# 2641, ticks 33112, elapsed 0, channel: 0 event ('note', 33112, 1, 52, 0)
	1,64,152,	//# 2642, ticks 33120, elapsed 1, channel: 0 event ('note', 33120, 1, 64, 76)
	15,71,147,	//# 2643, ticks 33208, elapsed 15, channel: 1 event ('note', 33208, 5, 71, 73)
	0,71,147,	//# 2644, ticks 33208, elapsed 0, channel: 1 event ('note', 33208, 6, 71, 73)
	// Note off skipped, note 56 not found in channels, probably interrupted
	0,64,155,	//# 2646, ticks 33212, elapsed 0, channel: 1 event ('note', 33212, 8, 64, 77)
	0,62,168,	//# 2647, ticks 33216, elapsed 0, channel: 0 event ('note', 33216, 1, 62, 84)
	4,64,1,	//# 2648, ticks 33240, elapsed 4, channel: 1 event ('note', 33240, 1, 64, 0)
	12,62,0,	//# 2649, ticks 33312, elapsed 12, channel: 0 event ('note', 33312, 1, 62, 0)
	0,64,146,	//# 2650, ticks 33312, elapsed 0, channel: 0 event ('note', 33312, 1, 64, 73)
	2,180,0,	//# 2651, ticks 33328, elapsed 2, channel: 2 event ('note', 33328, 3, 52, 0)
	2,64,0,	//# 2652, ticks 33344, elapsed 2, channel: 0 event ('note', 33344, 8, 64, 0)
	6,168,1,	//# 2653, ticks 33384, elapsed 6, channel: 3 event ('note', 33384, 2, 40, 0)
	2,76,142,	//# 2654, ticks 33400, elapsed 2, channel: 0 event ('note', 33400, 5, 76, 71)
	0,76,143,	//# 2655, ticks 33400, elapsed 0, channel: 1 event ('note', 33400, 6, 76, 71)
	1,189,172,	//# 2656, ticks 33408, elapsed 1, channel: 2 event ('note', 33408, 1, 61, 86)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	15,189,0,	//# 2660, ticks 33500, elapsed 15, channel: 2 event ('note', 33500, 1, 61, 0)
	0,204,154,	//# 2661, ticks 33504, elapsed 0, channel: 2 event ('note', 33504, 1, 76, 77)
	0,192,115,	//# 2662, ticks 33504, elapsed 0, channel: 3 event ('note', 33504, 1, 64, 57)
	12,199,137,	//# 2663, ticks 33576, elapsed 12, channel: 3 event ('note', 33576, 4, 71, 68)
	0,204,173,	//# 2664, ticks 33576, elapsed 0, channel: 3 event ('note', 33576, 8, 76, 86)
	1,52,142,	//# 2665, ticks 33584, elapsed 1, channel: 0 event ('note', 33584, 3, 52, 71)
	0,68,114,	//# 2666, ticks 33584, elapsed 0, channel: 0 event ('note', 33584, 7, 68, 57)
	// Note off skipped, note 64 not found in channels, probably interrupted
	2,76,1,	//# 2668, ticks 33596, elapsed 2, channel: 1 event ('note', 33596, 1, 76, 0)
	0,74,175,	//# 2669, ticks 33600, elapsed 0, channel: 1 event ('note', 33600, 1, 74, 87)
	0,68,144,	//# 2670, ticks 33600, elapsed 0, channel: 0 event ('note', 33600, 1, 68, 72)
	0,59,130,	//# 2671, ticks 33600, elapsed 0, channel: 0 event ('note', 33600, 1, 59, 65)
	// Note off skipped, note 52 not found in channels, probably interrupted
	// Note off skipped, note 68 not found in channels, probably interrupted
	8,204,0,	//# 2674, ticks 33648, elapsed 8, channel: 2 event ('note', 33648, 8, 76, 0)
	4,59,0,	//# 2675, ticks 33676, elapsed 4, channel: 0 event ('note', 33676, 1, 59, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 68 not found in channels, probably interrupted
	3,76,150,	//# 2678, ticks 33696, elapsed 3, channel: 0 event ('note', 33696, 1, 76, 75)
	0,192,100,	//# 2679, ticks 33696, elapsed 0, channel: 2 event ('note', 33696, 1, 64, 50)
	1,74,1,	//# 2680, ticks 33704, elapsed 1, channel: 1 event ('note', 33704, 1, 74, 0)
	11,57,121,	//# 2681, ticks 33768, elapsed 11, channel: 1 event ('note', 33768, 3, 57, 60)
	1,201,126,	//# 2682, ticks 33776, elapsed 1, channel: 2 event ('note', 33776, 4, 73, 63)
	0,69,103,	//# 2683, ticks 33776, elapsed 0, channel: 1 event ('note', 33776, 7, 69, 51)
	0,73,157,	//# 2684, ticks 33776, elapsed 0, channel: 1 event ('note', 33776, 8, 73, 78)
	2,76,0,	//# 2685, ticks 33788, elapsed 2, channel: 0 event ('note', 33788, 1, 76, 0)
	0,73,170,	//# 2686, ticks 33792, elapsed 0, channel: 0 event ('note', 33792, 1, 73, 85)
	0,197,146,	//# 2687, ticks 33792, elapsed 0, channel: 2 event ('note', 33792, 1, 69, 73)
	0,185,152,	//# 2688, ticks 33792, elapsed 0, channel: 2 event ('note', 33792, 1, 57, 76)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	16,204,142,	//# 2691, ticks 33888, elapsed 16, channel: 2 event ('note', 33888, 1, 76, 71)
	2,73,0,	//# 2692, ticks 33900, elapsed 2, channel: 0 event ('note', 33900, 1, 73, 0)
	3,73,1,	//# 2693, ticks 33920, elapsed 3, channel: 1 event ('note', 33920, 8, 73, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	9,71,134,	//# 2697, ticks 33972, elapsed 9, channel: 0 event ('note', 33972, 4, 71, 67)
	2,67,147,	//# 2698, ticks 33984, elapsed 2, channel: 1 event ('note', 33984, 1, 67, 73)
	0,71,150,	//# 2699, ticks 33984, elapsed 0, channel: 0 event ('note', 33984, 1, 71, 75)
	// Note off skipped, note 73 not found in channels, probably interrupted
	2,204,0,	//# 2701, ticks 34000, elapsed 2, channel: 2 event ('note', 34000, 1, 76, 0)
	12,71,0,	//# 2702, ticks 34072, elapsed 12, channel: 0 event ('note', 34072, 1, 71, 0)
	0,67,1,	//# 2703, ticks 34072, elapsed 0, channel: 1 event ('note', 34072, 1, 67, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	1,76,162,	//# 2705, ticks 34080, elapsed 1, channel: 0 event ('note', 34080, 1, 76, 81)
	15,74,145,	//# 2706, ticks 34168, elapsed 15, channel: 1 event ('note', 34168, 4, 74, 72)
	1,76,0,	//# 2707, ticks 34176, elapsed 1, channel: 0 event ('note', 34176, 1, 76, 0)
	0,66,152,	//# 2708, ticks 34176, elapsed 0, channel: 0 event ('note', 34176, 1, 66, 76)
	0,197,118,	//# 2709, ticks 34176, elapsed 0, channel: 2 event ('note', 34176, 1, 69, 59)
	13,66,0,	//# 2710, ticks 34256, elapsed 13, channel: 0 event ('note', 34256, 1, 66, 0)
	0,197,0,	//# 2711, ticks 34260, elapsed 0, channel: 2 event ('note', 34260, 1, 69, 0)
	2,74,172,	//# 2712, ticks 34272, elapsed 2, channel: 0 event ('note', 34272, 1, 74, 86)
	5,173,146,	//# 2713, ticks 34304, elapsed 5, channel: 2 event ('note', 34304, 3, 45, 73)
	6,81,155,	//# 2714, ticks 34344, elapsed 6, channel: 1 event ('note', 34344, 8, 81, 77)
	0,201,144,	//# 2715, ticks 34348, elapsed 0, channel: 2 event ('note', 34348, 4, 73, 72)
	// Note off skipped, note 45 not found in channels, probably interrupted
	2,74,0,	//# 2717, ticks 34360, elapsed 2, channel: 0 event ('note', 34360, 4, 74, 0)
	0,73,98,	//# 2718, ticks 34360, elapsed 0, channel: 0 event ('note', 34360, 7, 73, 49)
	// Note off skipped, note 74 not found in channels, probably interrupted
	1,64,120,	//# 2720, ticks 34368, elapsed 1, channel: 0 event ('note', 34368, 1, 64, 60)
	0,67,142,	//# 2721, ticks 34368, elapsed 0, channel: 0 event ('note', 34368, 1, 67, 71)
	0,45,142,	//# 2722, ticks 34368, elapsed 0, channel: 0 event ('note', 34368, 1, 45, 71)
	8,81,1,	//# 2723, ticks 34416, elapsed 8, channel: 1 event ('note', 34416, 8, 81, 0)
	0,201,0,	//# 2724, ticks 34420, elapsed 0, channel: 2 event ('note', 34420, 7, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	3,45,0,	//# 2726, ticks 34440, elapsed 3, channel: 0 event ('note', 34440, 1, 45, 0)
	4,73,176,	//# 2727, ticks 34464, elapsed 4, channel: 0 event ('note', 34464, 1, 73, 88)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	8,73,0,	//# 2730, ticks 34512, elapsed 8, channel: 0 event ('note', 34512, 1, 73, 0)
	3,78,142,	//# 2731, ticks 34532, elapsed 3, channel: 0 event ('note', 34532, 4, 78, 71)
	2,69,137,	//# 2732, ticks 34544, elapsed 2, channel: 1 event ('note', 34544, 7, 69, 68)
	1,178,128,	//# 2733, ticks 34552, elapsed 1, channel: 2 event ('note', 34552, 3, 50, 64)
	0,206,168,	//# 2734, ticks 34556, elapsed 0, channel: 2 event ('note', 34556, 8, 78, 84)
	0,74,155,	//# 2735, ticks 34560, elapsed 0, channel: 1 event ('note', 34560, 1, 74, 77)
	0,50,142,	//# 2736, ticks 34560, elapsed 0, channel: 0 event ('note', 34560, 1, 50, 71)
	0,66,134,	//# 2737, ticks 34560, elapsed 0, channel: 0 event ('note', 34560, 1, 66, 67)
	0,69,118,	//# 2738, ticks 34560, elapsed 0, channel: 0 event ('note', 34560, 1, 69, 59)
	0,62,82,	//# 2739, ticks 34560, elapsed 0, channel: 0 event ('note', 34560, 1, 62, 41)
	7,204,1,	//# 2740, ticks 34604, elapsed 7, channel: 3 event ('note', 34604, 5, 76, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	9,185,139,	//# 2743, ticks 34656, elapsed 9, channel: 3 event ('note', 34656, 1, 57, 69)
	6,206,0,	//# 2744, ticks 34692, elapsed 6, channel: 2 event ('note', 34692, 8, 78, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	6,197,130,	//# 2746, ticks 34732, elapsed 6, channel: 2 event ('note', 34732, 5, 69, 65)
	0,69,130,	//# 2747, ticks 34732, elapsed 0, channel: 0 event ('note', 34732, 6, 69, 65)
	// Note off skipped, note 62 not found in channels, probably interrupted
	3,55,156,	//# 2749, ticks 34752, elapsed 3, channel: 0 event ('note', 34752, 1, 55, 78)
	1,74,1,	//# 2750, ticks 34760, elapsed 1, channel: 1 event ('note', 34760, 1, 74, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	1,197,0,	//# 2752, ticks 34768, elapsed 1, channel: 2 event ('note', 34768, 1, 69, 0)
	1,185,1,	//# 2753, ticks 34776, elapsed 1, channel: 3 event ('note', 34776, 1, 57, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	10,55,0,	//# 2756, ticks 34836, elapsed 10, channel: 0 event ('note', 34836, 1, 55, 0)
	2,57,132,	//# 2757, ticks 34848, elapsed 2, channel: 0 event ('note', 34848, 1, 57, 66)
	14,74,131,	//# 2758, ticks 34932, elapsed 14, channel: 1 event ('note', 34932, 5, 74, 65)
	0,202,130,	//# 2759, ticks 34932, elapsed 0, channel: 2 event ('note', 34932, 6, 74, 65)
	2,182,153,	//# 2760, ticks 34944, elapsed 2, channel: 3 event ('note', 34944, 1, 54, 76)
	1,57,0,	//# 2761, ticks 34952, elapsed 1, channel: 0 event ('note', 34952, 1, 57, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	14,182,1,	//# 2764, ticks 35036, elapsed 14, channel: 3 event ('note', 35036, 1, 54, 0)
	0,57,140,	//# 2765, ticks 35040, elapsed 0, channel: 0 event ('note', 35040, 1, 57, 70)
	13,178,135,	//# 2766, ticks 35116, elapsed 13, channel: 3 event ('note', 35116, 3, 50, 67)
	0,78,177,	//# 2767, ticks 35116, elapsed 0, channel: 1 event ('note', 35116, 8, 78, 88)
	0,197,162,	//# 2768, ticks 35120, elapsed 0, channel: 2 event ('note', 35120, 7, 69, 81)
	1,206,161,	//# 2769, ticks 35128, elapsed 1, channel: 3 event ('note', 35128, 4, 78, 80)
	1,50,162,	//# 2770, ticks 35136, elapsed 1, channel: 0 event ('note', 35136, 1, 50, 81)
	// Note off skipped, note 57 not found in channels, probably interrupted
	6,50,0,	//# 2772, ticks 35172, elapsed 6, channel: 0 event ('note', 35172, 3, 50, 0)
	2,197,0,	//# 2773, ticks 35184, elapsed 2, channel: 2 event ('note', 35184, 7, 69, 0)
	0,78,1,	//# 2774, ticks 35184, elapsed 0, channel: 1 event ('note', 35184, 8, 78, 0)
	4,206,1,	//# 2775, ticks 35208, elapsed 4, channel: 3 event ('note', 35208, 4, 78, 0)
	4,54,160,	//# 2776, ticks 35232, elapsed 4, channel: 0 event ('note', 35232, 1, 54, 80)
	// Note off skipped, note 50 not found in channels, probably interrupted
	9,54,0,	//# 2778, ticks 35284, elapsed 9, channel: 0 event ('note', 35284, 1, 54, 0)
	4,71,118,	//# 2779, ticks 35312, elapsed 4, channel: 0 event ('note', 35312, 7, 71, 59)
	0,74,165,	//# 2780, ticks 35316, elapsed 0, channel: 1 event ('note', 35316, 8, 74, 82)
	0,208,160,	//# 2781, ticks 35320, elapsed 0, channel: 2 event ('note', 35320, 4, 80, 80)
	1,175,167,	//# 2782, ticks 35328, elapsed 1, channel: 3 event ('note', 35328, 1, 47, 83)
	0,47,140,	//# 2783, ticks 35332, elapsed 0, channel: 0 event ('note', 35332, 3, 47, 70)
	15,74,184,	//# 2784, ticks 35424, elapsed 15, channel: 0 event ('note', 35424, 1, 74, 92)
	12,206,128,	//# 2785, ticks 35496, elapsed 12, channel: 2 event ('note', 35496, 4, 78, 64)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 80 not found in channels, probably interrupted
	2,74,0,	//# 2788, ticks 35512, elapsed 2, channel: 0 event ('note', 35512, 8, 74, 0)
	1,78,196,	//# 2789, ticks 35520, elapsed 1, channel: 0 event ('note', 35520, 1, 78, 98)
	5,74,1,	//# 2790, ticks 35552, elapsed 5, channel: 1 event ('note', 35552, 1, 74, 0)
	1,175,1,	//# 2791, ticks 35560, elapsed 1, channel: 3 event ('note', 35560, 1, 47, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	4,78,0,	//# 2793, ticks 35584, elapsed 4, channel: 0 event ('note', 35584, 4, 78, 0)
	5,76,168,	//# 2794, ticks 35616, elapsed 5, channel: 0 event ('note', 35616, 1, 76, 84)
	4,206,0,	//# 2795, ticks 35644, elapsed 4, channel: 2 event ('note', 35644, 1, 78, 0)
	6,81,157,	//# 2796, ticks 35680, elapsed 6, channel: 1 event ('note', 35680, 4, 81, 78)
	4,76,0,	//# 2797, ticks 35704, elapsed 4, channel: 0 event ('note', 35704, 1, 76, 0)
	1,74,168,	//# 2798, ticks 35712, elapsed 1, channel: 0 event ('note', 35712, 1, 74, 84)
	16,201,158,	//# 2799, ticks 35808, elapsed 16, channel: 2 event ('note', 35808, 1, 73, 79)
	4,74,0,	//# 2800, ticks 35832, elapsed 4, channel: 0 event ('note', 35832, 1, 74, 0)
	6,80,174,	//# 2801, ticks 35872, elapsed 6, channel: 0 event ('note', 35872, 4, 80, 87)
	3,81,1,	//# 2802, ticks 35892, elapsed 3, channel: 1 event ('note', 35892, 4, 81, 0)
	2,71,179,	//# 2803, ticks 35904, elapsed 2, channel: 1 event ('note', 35904, 1, 71, 89)
	6,201,0,	//# 2804, ticks 35940, elapsed 6, channel: 2 event ('note', 35940, 1, 73, 0)
	2,80,0,	//# 2805, ticks 35956, elapsed 2, channel: 0 event ('note', 35956, 4, 80, 0)
	7,69,156,	//# 2806, ticks 36000, elapsed 7, channel: 0 event ('note', 36000, 1, 69, 78)
	0,71,1,	//# 2807, ticks 36004, elapsed 0, channel: 1 event ('note', 36004, 1, 71, 0)
	11,83,139,	//# 2808, ticks 36072, elapsed 11, channel: 1 event ('note', 36072, 4, 83, 69)
	4,196,176,	//# 2809, ticks 36096, elapsed 4, channel: 2 event ('note', 36096, 1, 68, 88)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	4,69,0,	//# 2812, ticks 36124, elapsed 4, channel: 0 event ('note', 36124, 1, 69, 0)
	8,78,150,	//# 2813, ticks 36172, elapsed 8, channel: 0 event ('note', 36172, 5, 78, 75)
	0,206,151,	//# 2814, ticks 36172, elapsed 0, channel: 3 event ('note', 36172, 6, 78, 75)
	3,74,171,	//# 2815, ticks 36192, elapsed 3, channel: 1 event ('note', 36192, 1, 74, 85)
	2,196,0,	//# 2816, ticks 36208, elapsed 2, channel: 2 event ('note', 36208, 1, 68, 0)
	// Note off skipped, note 83 not found in channels, probably interrupted
	10,180,158,	//# 2818, ticks 36268, elapsed 10, channel: 2 event ('note', 36268, 3, 52, 79)
	0,71,144,	//# 2819, ticks 36268, elapsed 0, channel: 0 event ('note', 36268, 8, 71, 72)
	0,76,156,	//# 2820, ticks 36272, elapsed 0, channel: 0 event ('note', 36272, 5, 76, 78)
	0,204,157,	//# 2821, ticks 36272, elapsed 0, channel: 3 event ('note', 36272, 6, 76, 78)
	0,64,132,	//# 2822, ticks 36272, elapsed 0, channel: 0 event ('note', 36272, 7, 64, 66)
	2,73,184,	//# 2823, ticks 36288, elapsed 2, channel: 0 event ('note', 36288, 1, 73, 92)
	0,180,139,	//# 2824, ticks 36288, elapsed 0, channel: 3 event ('note', 36288, 1, 52, 69)
	0,196,125,	//# 2825, ticks 36292, elapsed 0, channel: 3 event ('note', 36292, 4, 68, 62)
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	6,74,1,	//# 2828, ticks 36328, elapsed 6, channel: 1 event ('note', 36328, 1, 74, 0)
	1,180,0,	//# 2829, ticks 36336, elapsed 1, channel: 2 event ('note', 36336, 3, 52, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	6,74,165,	//# 2833, ticks 36372, elapsed 6, channel: 1 event ('note', 36372, 5, 74, 82)
	0,202,164,	//# 2834, ticks 36372, elapsed 0, channel: 2 event ('note', 36372, 6, 74, 82)
	2,199,175,	//# 2835, ticks 36384, elapsed 2, channel: 3 event ('note', 36384, 1, 71, 87)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	4,73,0,	//# 2838, ticks 36412, elapsed 4, channel: 0 event ('note', 36412, 1, 73, 0)
	9,73,132,	//# 2839, ticks 36468, elapsed 9, channel: 0 event ('note', 36468, 5, 73, 66)
	0,73,132,	//# 2840, ticks 36468, elapsed 0, channel: 0 event ('note', 36468, 6, 73, 66)
	0,64,144,	//# 2841, ticks 36468, elapsed 0, channel: 0 event ('note', 36468, 7, 64, 72)
	0,73,170,	//# 2842, ticks 36468, elapsed 0, channel: 0 event ('note', 36468, 8, 73, 85)
	1,57,167,	//# 2843, ticks 36476, elapsed 1, channel: 1 event ('note', 36476, 3, 57, 83)
	0,185,124,	//# 2844, ticks 36480, elapsed 0, channel: 2 event ('note', 36480, 1, 57, 62)
	0,197,146,	//# 2845, ticks 36480, elapsed 0, channel: 2 event ('note', 36480, 1, 69, 73)
	0,201,156,	//# 2846, ticks 36480, elapsed 0, channel: 2 event ('note', 36480, 4, 73, 78)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	1,199,1,	//# 2849, ticks 36488, elapsed 1, channel: 3 event ('note', 36488, 1, 71, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	6,57,1,	//# 2851, ticks 36528, elapsed 6, channel: 1 event ('note', 36528, 3, 57, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	1,73,0,	//# 2853, ticks 36536, elapsed 1, channel: 0 event ('note', 36536, 8, 73, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	5,71,174,	//# 2855, ticks 36568, elapsed 5, channel: 0 event ('note', 36568, 5, 71, 87)
	0,71,175,	//# 2856, ticks 36568, elapsed 0, channel: 1 event ('note', 36568, 6, 71, 87)
	1,196,141,	//# 2857, ticks 36576, elapsed 1, channel: 3 event ('note', 36576, 1, 68, 70)
	0,201,0,	//# 2858, ticks 36580, elapsed 0, channel: 2 event ('note', 36580, 5, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	13,177,174,	//# 2861, ticks 36660, elapsed 13, channel: 2 event ('note', 36660, 3, 49, 87)
	0,189,147,	//# 2862, ticks 36664, elapsed 0, channel: 3 event ('note', 36664, 7, 61, 73)
	0,199,159,	//# 2863, ticks 36664, elapsed 0, channel: 3 event ('note', 36664, 8, 71, 79)
	0,197,169,	//# 2864, ticks 36668, elapsed 0, channel: 3 event ('note', 36668, 5, 69, 84)
	0,197,169,	//# 2865, ticks 36668, elapsed 0, channel: 3 event ('note', 36668, 6, 69, 84)
	0,194,185,	//# 2866, ticks 36672, elapsed 0, channel: 3 event ('note', 36672, 1, 66, 92)
	0,49,148,	//# 2867, ticks 36672, elapsed 0, channel: 0 event ('note', 36672, 1, 49, 74)
	// Note off skipped, note 68 not found in channels, probably interrupted
	4,71,1,	//# 2869, ticks 36700, elapsed 4, channel: 1 event ('note', 36700, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	5,49,0,	//# 2871, ticks 36732, elapsed 5, channel: 0 event ('note', 36732, 3, 49, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	3,68,174,	//# 2874, ticks 36752, elapsed 3, channel: 0 event ('note', 36752, 5, 68, 87)
	0,68,175,	//# 2875, ticks 36752, elapsed 0, channel: 1 event ('note', 36752, 6, 68, 87)
	1,177,0,	//# 2876, ticks 36760, elapsed 1, channel: 2 event ('note', 36760, 1, 49, 0)
	1,194,1,	//# 2877, ticks 36768, elapsed 1, channel: 3 event ('note', 36768, 1, 66, 0)
	0,193,152,	//# 2878, ticks 36768, elapsed 0, channel: 2 event ('note', 36768, 1, 65, 76)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	11,68,0,	//# 2881, ticks 36836, elapsed 11, channel: 0 event ('note', 36836, 5, 68, 0)
	0,68,1,	//# 2882, ticks 36836, elapsed 0, channel: 1 event ('note', 36836, 6, 68, 0)
	2,54,166,	//# 2883, ticks 36852, elapsed 2, channel: 0 event ('note', 36852, 3, 54, 83)
	0,69,159,	//# 2884, ticks 36852, elapsed 0, channel: 1 event ('note', 36852, 8, 69, 79)
	2,194,145,	//# 2885, ticks 36864, elapsed 2, channel: 3 event ('note', 36864, 1, 66, 72)
	0,182,103,	//# 2886, ticks 36864, elapsed 0, channel: 3 event ('note', 36864, 1, 54, 51)
	0,197,121,	//# 2887, ticks 36864, elapsed 0, channel: 3 event ('note', 36864, 1, 69, 60)
	0,197,175,	//# 2888, ticks 36864, elapsed 0, channel: 3 event ('note', 36864, 5, 69, 87)
	0,197,174,	//# 2889, ticks 36864, elapsed 0, channel: 2 event ('note', 36864, 6, 69, 87)
	0,61,129,	//# 2890, ticks 36864, elapsed 0, channel: 1 event ('note', 36864, 7, 61, 64)
	// Note off skipped, note 65 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	16,73,147,	//# 2893, ticks 36960, elapsed 16, channel: 1 event ('note', 36960, 1, 73, 73)
	2,197,0,	//# 2894, ticks 36972, elapsed 2, channel: 2 event ('note', 36972, 1, 69, 0)
	8,197,1,	//# 2895, ticks 37020, elapsed 8, channel: 3 event ('note', 37020, 8, 69, 0)
	2,54,0,	//# 2896, ticks 37036, elapsed 2, channel: 0 event ('note', 37036, 3, 54, 0)
	1,68,122,	//# 2897, ticks 37044, elapsed 1, channel: 0 event ('note', 37044, 5, 68, 61)
	0,196,122,	//# 2898, ticks 37044, elapsed 0, channel: 2 event ('note', 37044, 6, 68, 61)
	// Note off skipped, note 61 not found in channels, probably interrupted
	2,196,153,	//# 2900, ticks 37056, elapsed 2, channel: 3 event ('note', 37056, 1, 68, 76)
	0,64,104,	//# 2901, ticks 37056, elapsed 0, channel: 0 event ('note', 37056, 1, 64, 52)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,73,1,	//# 2904, ticks 37060, elapsed 0, channel: 1 event ('note', 37060, 1, 73, 0)
	15,73,169,	//# 2905, ticks 37152, elapsed 15, channel: 1 event ('note', 37152, 1, 73, 84)
	0,64,0,	//# 2906, ticks 37156, elapsed 0, channel: 0 event ('note', 37156, 1, 64, 0)
	1,196,0,	//# 2907, ticks 37164, elapsed 1, channel: 2 event ('note', 37164, 1, 68, 0)
	// Note off skipped, note 54 not found in channels, probably interrupted
	0,196,1,	//# 2909, ticks 37168, elapsed 0, channel: 3 event ('note', 37168, 5, 68, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	10,71,154,	//# 2911, ticks 37228, elapsed 10, channel: 0 event ('note', 37228, 5, 71, 77)
	0,199,154,	//# 2912, ticks 37228, elapsed 0, channel: 2 event ('note', 37228, 6, 71, 77)
	1,73,1,	//# 2913, ticks 37236, elapsed 1, channel: 1 event ('note', 37236, 1, 73, 0)
	2,62,153,	//# 2914, ticks 37248, elapsed 2, channel: 1 event ('note', 37248, 1, 62, 76)
	0,194,143,	//# 2915, ticks 37248, elapsed 0, channel: 3 event ('note', 37248, 1, 66, 71)
	13,194,1,	//# 2916, ticks 37328, elapsed 13, channel: 3 event ('note', 37328, 1, 66, 0)
	1,62,1,	//# 2917, ticks 37336, elapsed 1, channel: 1 event ('note', 37336, 1, 62, 0)
	1,71,163,	//# 2918, ticks 37344, elapsed 1, channel: 1 event ('note', 37344, 1, 71, 81)
	9,170,173,	//# 2919, ticks 37396, elapsed 9, channel: 3 event ('note', 37396, 3, 42, 86)
	4,70,98,	//# 2920, ticks 37420, elapsed 4, channel: 0 event ('note', 37420, 5, 70, 49)
	0,70,98,	//# 2921, ticks 37420, elapsed 0, channel: 0 event ('note', 37420, 6, 70, 49)
	0,70,138,	//# 2922, ticks 37420, elapsed 0, channel: 0 event ('note', 37420, 7, 70, 69)
	0,78,154,	//# 2923, ticks 37424, elapsed 0, channel: 0 event ('note', 37424, 8, 78, 77)
	1,71,1,	//# 2924, ticks 37432, elapsed 1, channel: 1 event ('note', 37432, 5, 71, 0)
	0,199,0,	//# 2925, ticks 37432, elapsed 0, channel: 2 event ('note', 37432, 6, 71, 0)
	1,61,145,	//# 2926, ticks 37440, elapsed 1, channel: 1 event ('note', 37440, 1, 61, 72)
	0,170,142,	//# 2927, ticks 37440, elapsed 0, channel: 2 event ('note', 37440, 1, 42, 71)
	0,192,114,	//# 2928, ticks 37440, elapsed 0, channel: 2 event ('note', 37440, 1, 64, 57)
	4,170,1,	//# 2929, ticks 37464, elapsed 4, channel: 3 event ('note', 37464, 3, 42, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 70 not found in channels, probably interrupted
	6,78,0,	//# 2932, ticks 37500, elapsed 6, channel: 0 event ('note', 37500, 8, 78, 0)
	// Note off skipped, note 42 not found in channels, probably interrupted
	6,192,0,	//# 2934, ticks 37536, elapsed 6, channel: 2 event ('note', 37536, 1, 64, 0)
	0,70,178,	//# 2935, ticks 37536, elapsed 0, channel: 0 event ('note', 37536, 1, 70, 89)
	0,70,0,	//# 2936, ticks 37540, elapsed 0, channel: 0 event ('note', 37540, 5, 70, 0)
	// Note off skipped, note 70 not found in channels, probably interrupted
	1,61,1,	//# 2938, ticks 37548, elapsed 1, channel: 1 event ('note', 37548, 1, 61, 0)
	// Note off skipped, note 70 not found in channels, probably interrupted
	11,47,150,	//# 2940, ticks 37612, elapsed 11, channel: 0 event ('note', 37612, 3, 47, 75)
	0,74,153,	//# 2941, ticks 37612, elapsed 0, channel: 1 event ('note', 37612, 5, 74, 76)
	0,202,152,	//# 2942, ticks 37612, elapsed 0, channel: 2 event ('note', 37612, 6, 74, 76)
	0,194,115,	//# 2943, ticks 37616, elapsed 0, channel: 3 event ('note', 37616, 7, 66, 57)
	2,202,183,	//# 2944, ticks 37628, elapsed 2, channel: 3 event ('note', 37628, 8, 74, 91)
	0,71,122,	//# 2945, ticks 37632, elapsed 0, channel: 0 event ('note', 37632, 1, 71, 61)
	0,62,114,	//# 2946, ticks 37632, elapsed 0, channel: 0 event ('note', 37632, 1, 62, 57)
	0,47,122,	//# 2947, ticks 37632, elapsed 0, channel: 0 event ('note', 37632, 1, 47, 61)
	0,66,134,	//# 2948, ticks 37632, elapsed 0, channel: 0 event ('note', 37632, 1, 66, 67)
	0,59,76,	//# 2949, ticks 37632, elapsed 0, channel: 0 event ('note', 37632, 1, 59, 38)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	16,54,158,	//# 2952, ticks 37728, elapsed 16, channel: 0 event ('note', 37728, 1, 54, 79)
	// Note off skipped, note 66 not found in channels, probably interrupted
	9,74,1,	//# 2954, ticks 37780, elapsed 9, channel: 1 event ('note', 37780, 8, 74, 0)
	6,66,123,	//# 2955, ticks 37816, elapsed 6, channel: 1 event ('note', 37816, 4, 66, 61)
	// Note off skipped, note 47 not found in channels, probably interrupted
	1,52,141,	//# 2957, ticks 37824, elapsed 1, channel: 1 event ('note', 37824, 1, 52, 70)
	2,54,0,	//# 2958, ticks 37840, elapsed 2, channel: 0 event ('note', 37840, 1, 54, 0)
	9,52,1,	//# 2959, ticks 37896, elapsed 9, channel: 1 event ('note', 37896, 1, 52, 0)
	4,54,144,	//# 2960, ticks 37920, elapsed 4, channel: 0 event ('note', 37920, 1, 54, 72)
	6,54,0,	//# 2961, ticks 37956, elapsed 6, channel: 0 event ('note', 37956, 1, 54, 0)
	2,202,0,	//# 2962, ticks 37972, elapsed 2, channel: 2 event ('note', 37972, 5, 74, 0)
	0,202,1,	//# 2963, ticks 37972, elapsed 0, channel: 3 event ('note', 37972, 6, 74, 0)
	6,71,124,	//# 2964, ticks 38012, elapsed 6, channel: 0 event ('note', 38012, 4, 71, 62)
	0,50,149,	//# 2965, ticks 38016, elapsed 0, channel: 1 event ('note', 38016, 1, 50, 74)
	// Note off skipped, note 66 not found in channels, probably interrupted
	16,182,138,	//# 2967, ticks 38112, elapsed 16, channel: 2 event ('note', 38112, 1, 54, 69)
	0,50,1,	//# 2968, ticks 38116, elapsed 0, channel: 1 event ('note', 38116, 1, 50, 0)
	6,182,0,	//# 2969, ticks 38156, elapsed 6, channel: 2 event ('note', 38156, 1, 54, 0)
	4,71,155,	//# 2970, ticks 38184, elapsed 4, channel: 1 event ('note', 38184, 7, 71, 77)
	0,175,146,	//# 2971, ticks 38188, elapsed 0, channel: 2 event ('note', 38188, 3, 47, 73)
	0,206,165,	//# 2972, ticks 38192, elapsed 0, channel: 3 event ('note', 38192, 8, 78, 82)
	0,75,150,	//# 2973, ticks 38196, elapsed 0, channel: 0 event ('note', 38196, 5, 75, 75)
	0,203,150,	//# 2974, ticks 38196, elapsed 0, channel: 2 event ('note', 38196, 6, 75, 75)
	2,47,144,	//# 2975, ticks 38208, elapsed 2, channel: 0 event ('note', 38208, 1, 47, 72)
	4,47,0,	//# 2976, ticks 38236, elapsed 4, channel: 0 event ('note', 38236, 3, 47, 0)
	1,71,1,	//# 2977, ticks 38244, elapsed 1, channel: 1 event ('note', 38244, 7, 71, 0)
	1,206,1,	//# 2978, ticks 38252, elapsed 1, channel: 3 event ('note', 38252, 8, 78, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	6,203,0,	//# 2980, ticks 38292, elapsed 6, channel: 2 event ('note', 38292, 5, 75, 0)
	// Note off skipped, note 75 not found in channels, probably interrupted
	// Note off skipped, note 47 not found in channels, probably interrupted
	2,50,102,	//# 2983, ticks 38304, elapsed 2, channel: 0 event ('note', 38304, 1, 50, 51)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	4,50,0,	//# 2986, ticks 38328, elapsed 4, channel: 0 event ('note', 38328, 1, 50, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	9,74,138,	//# 2988, ticks 38384, elapsed 9, channel: 0 event ('note', 38384, 7, 74, 69)
	0,71,131,	//# 2989, ticks 38388, elapsed 0, channel: 1 event ('note', 38388, 8, 71, 65)
	0,172,170,	//# 2990, ticks 38392, elapsed 0, channel: 2 event ('note', 38392, 3, 44, 85)
	0,205,167,	//# 2991, ticks 38396, elapsed 0, channel: 3 event ('note', 38396, 5, 77, 83)
	0,77,167,	//# 2992, ticks 38396, elapsed 0, channel: 1 event ('note', 38396, 6, 77, 83)
	0,44,156,	//# 2993, ticks 38400, elapsed 0, channel: 0 event ('note', 38400, 1, 44, 78)
	16,68,180,	//# 2994, ticks 38496, elapsed 16, channel: 0 event ('note', 38496, 1, 68, 90)
	// Note off skipped, note 74 not found in channels, probably interrupted
	16,68,0,	//# 2996, ticks 38592, elapsed 16, channel: 0 event ('note', 38592, 1, 68, 0)
	0,69,166,	//# 2997, ticks 38592, elapsed 0, channel: 0 event ('note', 38592, 1, 69, 83)
	0,75,132,	//# 2998, ticks 38592, elapsed 0, channel: 0 event ('note', 38592, 5, 75, 66)
	0,75,132,	//# 2999, ticks 38592, elapsed 0, channel: 0 event ('note', 38592, 6, 75, 66)
	// Note off skipped, note 71 not found in channels, probably interrupted
	3,77,1,	//# 3001, ticks 38612, elapsed 3, channel: 1 event ('note', 38612, 5, 77, 0)
	0,205,1,	//# 3002, ticks 38612, elapsed 0, channel: 3 event ('note', 38612, 6, 77, 0)
	13,73,165,	//# 3003, ticks 38688, elapsed 13, channel: 1 event ('note', 38688, 1, 73, 82)
	0,75,0,	//# 3004, ticks 38688, elapsed 0, channel: 0 event ('note', 38688, 5, 75, 0)
	// Note off skipped, note 75 not found in channels, probably interrupted
	3,172,0,	//# 3006, ticks 38708, elapsed 3, channel: 2 event ('note', 38708, 3, 44, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	11,78,176,	//# 3008, ticks 38772, elapsed 11, channel: 0 event ('note', 38772, 5, 78, 88)
	0,206,176,	//# 3009, ticks 38772, elapsed 0, channel: 2 event ('note', 38772, 6, 78, 88)
	2,199,181,	//# 3010, ticks 38784, elapsed 2, channel: 3 event ('note', 38784, 1, 71, 90)
	3,73,1,	//# 3011, ticks 38804, elapsed 3, channel: 1 event ('note', 38804, 1, 73, 0)
	13,199,1,	//# 3012, ticks 38880, elapsed 13, channel: 3 event ('note', 38880, 1, 71, 0)
	0,69,161,	//# 3013, ticks 38880, elapsed 0, channel: 1 event ('note', 38880, 1, 69, 80)
	14,205,147,	//# 3014, ticks 38964, elapsed 14, channel: 3 event ('note', 38964, 5, 77, 73)
	0,205,147,	//# 3015, ticks 38964, elapsed 0, channel: 3 event ('note', 38964, 6, 77, 73)
	2,196,153,	//# 3016, ticks 38976, elapsed 2, channel: 3 event ('note', 38976, 1, 68, 76)
	0,78,0,	//# 3017, ticks 38980, elapsed 0, channel: 0 event ('note', 38980, 5, 78, 0)
	0,206,0,	//# 3018, ticks 38980, elapsed 0, channel: 2 event ('note', 38980, 6, 78, 0)
	4,69,1,	//# 3019, ticks 39008, elapsed 4, channel: 1 event ('note', 39008, 1, 69, 0)
	// Note off skipped, note 44 not found in channels, probably interrupted
	11,66,192,	//# 3021, ticks 39072, elapsed 11, channel: 0 event ('note', 39072, 1, 66, 96)
	// Note off skipped, note 77 not found in channels, probably interrupted
	// Note off skipped, note 77 not found in channels, probably interrupted
	3,196,1,	//# 3024, ticks 39092, elapsed 3, channel: 3 event ('note', 39092, 1, 68, 0)
	5,66,0,	//# 3025, ticks 39124, elapsed 5, channel: 0 event ('note', 39124, 1, 66, 0)
	4,80,166,	//# 3026, ticks 39148, elapsed 4, channel: 0 event ('note', 39148, 5, 80, 83)
	0,80,167,	//# 3027, ticks 39148, elapsed 0, channel: 1 event ('note', 39148, 6, 80, 83)
	3,193,166,	//# 3028, ticks 39168, elapsed 3, channel: 2 event ('note', 39168, 1, 65, 83)
	// Note off skipped, note 71 not found in channels, probably interrupted
	16,199,173,	//# 3030, ticks 39264, elapsed 16, channel: 3 event ('note', 39264, 1, 71, 86)
	0,74,162,	//# 3031, ticks 39264, elapsed 0, channel: 0 event ('note', 39264, 4, 74, 81)
	5,193,0,	//# 3032, ticks 39296, elapsed 5, channel: 2 event ('note', 39296, 1, 65, 0)
	1,80,1,	//# 3033, ticks 39304, elapsed 1, channel: 1 event ('note', 39304, 5, 80, 0)
	// Note off skipped, note 80 not found in channels, probably interrupted
	6,49,157,	//# 3035, ticks 39340, elapsed 6, channel: 1 event ('note', 39340, 3, 49, 78)
	0,196,158,	//# 3036, ticks 39340, elapsed 0, channel: 2 event ('note', 39340, 8, 68, 79)
	2,65,163,	//# 3037, ticks 39352, elapsed 2, channel: 1 event ('note', 39352, 5, 65, 81)
	0,193,162,	//# 3038, ticks 39352, elapsed 0, channel: 2 event ('note', 39352, 6, 65, 81)
	0,61,120,	//# 3039, ticks 39352, elapsed 0, channel: 0 event ('note', 39352, 7, 61, 60)
	1,69,166,	//# 3040, ticks 39360, elapsed 1, channel: 0 event ('note', 39360, 1, 69, 83)
	0,49,153,	//# 3041, ticks 39360, elapsed 0, channel: 1 event ('note', 39360, 1, 49, 76)
	0,73,149,	//# 3042, ticks 39364, elapsed 0, channel: 1 event ('note', 39364, 4, 73, 74)
	// Note off skipped, note 74 not found in channels, probably interrupted
	4,199,1,	//# 3044, ticks 39392, elapsed 4, channel: 3 event ('note', 39392, 1, 71, 0)
	// Note off skipped, note 49 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 68 not found in channels, probably interrupted
	// Note off skipped, note 49 not found in channels, probably interrupted
	10,199,167,	//# 3049, ticks 39452, elapsed 10, channel: 3 event ('note', 39452, 4, 71, 83)
	0,68,181,	//# 3050, ticks 39456, elapsed 0, channel: 1 event ('note', 39456, 1, 68, 90)
	// Note off skipped, note 73 not found in channels, probably interrupted
	2,69,0,	//# 3052, ticks 39472, elapsed 2, channel: 0 event ('note', 39472, 1, 69, 0)
	11,54,166,	//# 3053, ticks 39540, elapsed 11, channel: 0 event ('note', 39540, 3, 54, 83)
	0,189,136,	//# 3054, ticks 39540, elapsed 0, channel: 2 event ('note', 39540, 7, 61, 68)
	1,197,176,	//# 3055, ticks 39548, elapsed 1, channel: 2 event ('note', 39548, 5, 69, 88)
	0,69,176,	//# 3056, ticks 39548, elapsed 0, channel: 0 event ('note', 39548, 6, 69, 88)
	0,197,179,	//# 3057, ticks 39548, elapsed 0, channel: 3 event ('note', 39548, 8, 69, 89)
	0,66,188,	//# 3058, ticks 39552, elapsed 0, channel: 0 event ('note', 39552, 1, 66, 94)
	0,182,140,	//# 3059, ticks 39552, elapsed 0, channel: 2 event ('note', 39552, 1, 54, 70)
	0,197,170,	//# 3060, ticks 39552, elapsed 0, channel: 2 event ('note', 39552, 4, 69, 85)
	// Note off skipped, note 71 not found in channels, probably interrupted
	6,68,1,	//# 3062, ticks 39588, elapsed 6, channel: 1 event ('note', 39588, 1, 68, 0)
	// Note off skipped, note 54 not found in channels, probably interrupted
	// Note off skipped, note 65 not found in channels, probably interrupted
	// Note off skipped, note 65 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	4,197,0,	//# 3068, ticks 39612, elapsed 4, channel: 2 event ('note', 39612, 8, 69, 0)
	6,66,0,	//# 3069, ticks 39648, elapsed 6, channel: 0 event ('note', 39648, 1, 66, 0)
	0,64,160,	//# 3070, ticks 39648, elapsed 0, channel: 0 event ('note', 39648, 1, 64, 80)
	0,67,161,	//# 3071, ticks 39648, elapsed 0, channel: 1 event ('note', 39648, 4, 67, 80)
	4,197,1,	//# 3072, ticks 39676, elapsed 4, channel: 3 event ('note', 39676, 4, 69, 0)
	10,185,114,	//# 3073, ticks 39736, elapsed 10, channel: 2 event ('note', 39736, 7, 57, 57)
	0,195,177,	//# 3074, ticks 39736, elapsed 0, channel: 3 event ('note', 39736, 8, 67, 88)
	0,173,154,	//# 3075, ticks 39740, elapsed 0, channel: 2 event ('note', 39740, 3, 45, 77)
	0,190,168,	//# 3076, ticks 39744, elapsed 0, channel: 2 event ('note', 39744, 1, 62, 84)
	0,45,106,	//# 3077, ticks 39744, elapsed 0, channel: 0 event ('note', 39744, 1, 45, 53)
	0,66,138,	//# 3078, ticks 39748, elapsed 0, channel: 0 event ('note', 39748, 4, 66, 69)
	// Note off skipped, note 64 not found in channels, probably interrupted
	4,67,1,	//# 3080, ticks 39772, elapsed 4, channel: 1 event ('note', 39772, 4, 67, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	8,195,1,	//# 3083, ticks 39820, elapsed 8, channel: 3 event ('note', 39820, 8, 67, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	3,190,0,	//# 3085, ticks 39840, elapsed 3, channel: 2 event ('note', 39840, 1, 62, 0)
	0,61,183,	//# 3086, ticks 39840, elapsed 0, channel: 1 event ('note', 39840, 1, 61, 91)
	0,192,134,	//# 3087, ticks 39840, elapsed 0, channel: 2 event ('note', 39840, 4, 64, 67)
	1,66,0,	//# 3088, ticks 39848, elapsed 1, channel: 0 event ('note', 39848, 4, 66, 0)
	9,192,0,	//# 3089, ticks 39900, elapsed 9, channel: 2 event ('note', 39900, 4, 64, 0)
	4,61,1,	//# 3090, ticks 39924, elapsed 4, channel: 1 event ('note', 39924, 1, 61, 0)
	1,57,120,	//# 3091, ticks 39932, elapsed 1, channel: 0 event ('note', 39932, 7, 57, 60)
	0,62,169,	//# 3092, ticks 39936, elapsed 0, channel: 1 event ('note', 39936, 1, 62, 84)
	0,178,144,	//# 3093, ticks 39936, elapsed 0, channel: 2 event ('note', 39936, 1, 50, 72)
	0,194,141,	//# 3094, ticks 39936, elapsed 0, channel: 3 event ('note', 39936, 8, 66, 70)
	0,50,146,	//# 3095, ticks 39940, elapsed 0, channel: 0 event ('note', 39940, 3, 50, 73)
	0,194,157,	//# 3096, ticks 39940, elapsed 0, channel: 3 event ('note', 39940, 4, 66, 78)
	12,62,1,	//# 3097, ticks 40012, elapsed 12, channel: 1 event ('note', 40012, 1, 62, 0)
	3,74,161,	//# 3098, ticks 40032, elapsed 3, channel: 1 event ('note', 40032, 1, 74, 80)
	13,192,162,	//# 3099, ticks 40112, elapsed 13, channel: 2 event ('note', 40112, 4, 64, 81)
	0,194,1,	//# 3100, ticks 40116, elapsed 0, channel: 3 event ('note', 40116, 8, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	2,200,215,	//# 3102, ticks 40128, elapsed 2, channel: 3 event ('note', 40128, 1, 72, 107)
	// Note off skipped, note 57 not found in channels, probably interrupted
	2,74,1,	//# 3104, ticks 40144, elapsed 2, channel: 1 event ('note', 40144, 1, 74, 0)
	2,50,0,	//# 3105, ticks 40156, elapsed 2, channel: 0 event ('note', 40156, 1, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	10,192,0,	//# 3107, ticks 40216, elapsed 10, channel: 2 event ('note', 40216, 4, 64, 0)
	1,74,168,	//# 3108, ticks 40224, elapsed 1, channel: 0 event ('note', 40224, 1, 74, 84)
	2,200,1,	//# 3109, ticks 40240, elapsed 2, channel: 3 event ('note', 40240, 1, 72, 0)
	12,67,147,	//# 3110, ticks 40312, elapsed 12, channel: 1 event ('note', 40312, 4, 67, 73)
	1,199,148,	//# 3111, ticks 40320, elapsed 1, channel: 2 event ('note', 40320, 1, 71, 74)
	2,74,0,	//# 3112, ticks 40336, elapsed 2, channel: 0 event ('note', 40336, 1, 74, 0)
	12,199,0,	//# 3113, ticks 40408, elapsed 12, channel: 2 event ('note', 40408, 1, 71, 0)
	1,74,150,	//# 3114, ticks 40416, elapsed 1, channel: 0 event ('note', 40416, 1, 74, 75)
	4,74,0,	//# 3115, ticks 40444, elapsed 4, channel: 0 event ('note', 40444, 1, 74, 0)
	6,50,150,	//# 3116, ticks 40480, elapsed 6, channel: 0 event ('note', 40480, 3, 50, 75)
	0,194,118,	//# 3117, ticks 40480, elapsed 0, channel: 2 event ('note', 40480, 7, 66, 59)
	2,194,171,	//# 3118, ticks 40492, elapsed 2, channel: 3 event ('note', 40492, 4, 66, 85)
	1,202,150,	//# 3119, ticks 40500, elapsed 1, channel: 2 event ('note', 40500, 8, 74, 75)
	0,67,1,	//# 3120, ticks 40504, elapsed 0, channel: 1 event ('note', 40504, 4, 67, 0)
	1,69,111,	//# 3121, ticks 40512, elapsed 1, channel: 1 event ('note', 40512, 1, 69, 55)
	0,78,155,	//# 3122, ticks 40512, elapsed 0, channel: 1 event ('note', 40512, 1, 78, 77)
	0,50,106,	//# 3123, ticks 40512, elapsed 0, channel: 0 event ('note', 40512, 1, 50, 53)
	5,50,0,	//# 3124, ticks 40544, elapsed 5, channel: 0 event ('note', 40544, 3, 50, 0)
	1,194,1,	//# 3125, ticks 40552, elapsed 1, channel: 3 event ('note', 40552, 7, 66, 0)
	4,202,0,	//# 3126, ticks 40576, elapsed 4, channel: 2 event ('note', 40576, 8, 74, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	5,72,186,	//# 3129, ticks 40608, elapsed 5, channel: 0 event ('note', 40608, 1, 72, 93)
	1,78,1,	//# 3130, ticks 40616, elapsed 1, channel: 1 event ('note', 40616, 1, 78, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	2,72,0,	//# 3132, ticks 40632, elapsed 2, channel: 0 event ('note', 40632, 1, 72, 0)
	9,62,146,	//# 3133, ticks 40688, elapsed 9, channel: 0 event ('note', 40688, 7, 62, 73)
	2,55,147,	//# 3134, ticks 40700, elapsed 2, channel: 1 event ('note', 40700, 3, 55, 73)
	0,199,158,	//# 3135, ticks 40700, elapsed 0, channel: 2 event ('note', 40700, 8, 71, 79)
	0,199,125,	//# 3136, ticks 40704, elapsed 0, channel: 3 event ('note', 40704, 1, 71, 62)
	0,207,143,	//# 3137, ticks 40704, elapsed 0, channel: 3 event ('note', 40704, 1, 79, 71)
	0,195,75,	//# 3138, ticks 40704, elapsed 0, channel: 3 event ('note', 40704, 1, 67, 37)
	0,202,129,	//# 3139, ticks 40704, elapsed 0, channel: 3 event ('note', 40704, 1, 74, 64)
	0,183,127,	//# 3140, ticks 40704, elapsed 0, channel: 3 event ('note', 40704, 1, 55, 63)
	0,199,149,	//# 3141, ticks 40708, elapsed 0, channel: 3 event ('note', 40708, 4, 71, 74)
	13,55,1,	//# 3142, ticks 40784, elapsed 13, channel: 1 event ('note', 40784, 1, 55, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	2,62,131,	//# 3145, ticks 40800, elapsed 2, channel: 1 event ('note', 40800, 1, 62, 65)
	// Note off skipped, note 55 not found in channels, probably interrupted
	12,199,0,	//# 3147, ticks 40872, elapsed 12, channel: 2 event ('note', 40872, 8, 71, 0)
	3,190,152,	//# 3148, ticks 40892, elapsed 3, channel: 2 event ('note', 40892, 5, 62, 76)
	0,62,153,	//# 3149, ticks 40892, elapsed 0, channel: 1 event ('note', 40892, 6, 62, 76)
	0,60,142,	//# 3150, ticks 40896, elapsed 0, channel: 0 event ('note', 40896, 1, 60, 71)
	1,62,1,	//# 3151, ticks 40904, elapsed 1, channel: 1 event ('note', 40904, 7, 62, 0)
	4,190,0,	//# 3152, ticks 40928, elapsed 4, channel: 2 event ('note', 40928, 1, 62, 0)
	8,60,0,	//# 3153, ticks 40976, elapsed 8, channel: 0 event ('note', 40976, 1, 60, 0)
	2,62,132,	//# 3154, ticks 40992, elapsed 2, channel: 0 event ('note', 40992, 1, 62, 66)
	6,199,1,	//# 3155, ticks 41028, elapsed 6, channel: 3 event ('note', 41028, 4, 71, 0)
	0,62,0,	//# 3156, ticks 41032, elapsed 0, channel: 0 event ('note', 41032, 1, 62, 0)
	9,67,170,	//# 3157, ticks 41084, elapsed 9, channel: 0 event ('note', 41084, 5, 67, 85)
	0,67,171,	//# 3158, ticks 41084, elapsed 0, channel: 1 event ('note', 41084, 6, 67, 85)
	0,187,168,	//# 3159, ticks 41088, elapsed 0, channel: 2 event ('note', 41088, 1, 59, 84)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	16,190,153,	//# 3162, ticks 41184, elapsed 16, channel: 3 event ('note', 41184, 1, 62, 76)
	1,187,0,	//# 3163, ticks 41192, elapsed 1, channel: 2 event ('note', 41192, 1, 59, 0)
	6,190,1,	//# 3164, ticks 41228, elapsed 6, channel: 3 event ('note', 41228, 1, 62, 0)
	3,67,0,	//# 3165, ticks 41248, elapsed 3, channel: 0 event ('note', 41248, 1, 67, 0)
	0,71,142,	//# 3166, ticks 41248, elapsed 0, channel: 0 event ('note', 41248, 7, 71, 71)
	0,183,140,	//# 3167, ticks 41252, elapsed 0, channel: 2 event ('note', 41252, 3, 55, 70)
	// Note off skipped, note 74 not found in channels, probably interrupted
	2,202,163,	//# 3169, ticks 41264, elapsed 2, channel: 3 event ('note', 41264, 8, 74, 81)
	0,199,152,	//# 3170, ticks 41268, elapsed 0, channel: 2 event ('note', 41268, 4, 71, 76)
	0,71,0,	//# 3171, ticks 41272, elapsed 0, channel: 0 event ('note', 41272, 1, 71, 0)
	1,55,142,	//# 3172, ticks 41280, elapsed 1, channel: 0 event ('note', 41280, 1, 55, 71)
	// Note off skipped, note 79 not found in channels, probably interrupted
	4,199,0,	//# 3174, ticks 41304, elapsed 4, channel: 2 event ('note', 41304, 7, 71, 0)
	1,55,0,	//# 3175, ticks 41312, elapsed 1, channel: 0 event ('note', 41312, 3, 55, 0)
	3,202,1,	//# 3176, ticks 41332, elapsed 3, channel: 3 event ('note', 41332, 8, 74, 0)
	// Note off skipped, note 55 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	7,59,142,	//# 3179, ticks 41376, elapsed 7, channel: 0 event ('note', 41376, 1, 59, 71)
	6,59,0,	//# 3180, ticks 41416, elapsed 6, channel: 0 event ('note', 41416, 1, 59, 0)
	4,67,90,	//# 3181, ticks 41444, elapsed 4, channel: 0 event ('note', 41444, 7, 67, 45)
	2,201,166,	//# 3182, ticks 41460, elapsed 2, channel: 2 event ('note', 41460, 8, 73, 83)
	2,180,153,	//# 3183, ticks 41472, elapsed 2, channel: 3 event ('note', 41472, 1, 52, 76)
	0,73,148,	//# 3184, ticks 41472, elapsed 0, channel: 0 event ('note', 41472, 4, 73, 74)
	0,52,132,	//# 3185, ticks 41476, elapsed 0, channel: 0 event ('note', 41476, 3, 52, 66)
	15,79,156,	//# 3186, ticks 41568, elapsed 15, channel: 0 event ('note', 41568, 1, 79, 78)
	12,199,149,	//# 3187, ticks 41640, elapsed 12, channel: 3 event ('note', 41640, 4, 71, 74)
	4,211,175,	//# 3188, ticks 41664, elapsed 4, channel: 3 event ('note', 41664, 1, 83, 87)
	0,201,0,	//# 3189, ticks 41664, elapsed 0, channel: 2 event ('note', 41664, 4, 73, 0)
	4,79,0,	//# 3190, ticks 41692, elapsed 4, channel: 0 event ('note', 41692, 1, 79, 0)
	2,67,1,	//# 3191, ticks 41708, elapsed 2, channel: 1 event ('note', 41708, 7, 67, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	9,81,168,	//# 3194, ticks 41760, elapsed 9, channel: 0 event ('note', 41760, 1, 81, 84)
	3,211,1,	//# 3195, ticks 41780, elapsed 3, channel: 3 event ('note', 41780, 1, 83, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	11,74,125,	//# 3197, ticks 41844, elapsed 11, channel: 1 event ('note', 41844, 4, 74, 62)
	2,207,164,	//# 3198, ticks 41856, elapsed 2, channel: 2 event ('note', 41856, 1, 79, 82)
	4,81,0,	//# 3199, ticks 41884, elapsed 4, channel: 0 event ('note', 41884, 1, 81, 0)
	11,78,196,	//# 3200, ticks 41952, elapsed 11, channel: 0 event ('note', 41952, 1, 78, 98)
	2,207,0,	//# 3201, ticks 41968, elapsed 2, channel: 2 event ('note', 41968, 1, 79, 0)
	// Note off skipped, note 52 not found in channels, probably interrupted
	10,201,148,	//# 3203, ticks 42028, elapsed 10, channel: 2 event ('note', 42028, 4, 73, 74)
	2,74,1,	//# 3204, ticks 42044, elapsed 2, channel: 1 event ('note', 42044, 4, 74, 0)
	0,78,0,	//# 3205, ticks 42048, elapsed 0, channel: 0 event ('note', 42048, 1, 78, 0)
	0,76,170,	//# 3206, ticks 42048, elapsed 0, channel: 0 event ('note', 42048, 1, 76, 85)
	13,201,0,	//# 3207, ticks 42124, elapsed 13, channel: 2 event ('note', 42124, 4, 73, 0)
	3,74,171,	//# 3208, ticks 42144, elapsed 3, channel: 1 event ('note', 42144, 1, 74, 85)
	2,76,0,	//# 3209, ticks 42160, elapsed 2, channel: 0 event ('note', 42160, 1, 76, 0)
	11,76,138,	//# 3210, ticks 42228, elapsed 11, channel: 0 event ('note', 42228, 4, 76, 69)
	2,201,186,	//# 3211, ticks 42240, elapsed 2, channel: 2 event ('note', 42240, 1, 73, 93)
	5,74,1,	//# 3212, ticks 42272, elapsed 5, channel: 1 event ('note', 42272, 1, 74, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	9,71,141,	//# 3215, ticks 42328, elapsed 9, channel: 1 event ('note', 42328, 5, 71, 70)
	0,199,141,	//# 3216, ticks 42328, elapsed 0, channel: 3 event ('note', 42328, 6, 71, 70)
	1,74,184,	//# 3217, ticks 42336, elapsed 1, channel: 0 event ('note', 42336, 1, 74, 92)
	2,201,0,	//# 3218, ticks 42348, elapsed 2, channel: 2 event ('note', 42348, 1, 73, 0)
	11,197,168,	//# 3219, ticks 42416, elapsed 11, channel: 2 event ('note', 42416, 5, 69, 84)
	0,69,169,	//# 3220, ticks 42416, elapsed 0, channel: 1 event ('note', 42416, 6, 69, 84)
	0,180,147,	//# 3221, ticks 42420, elapsed 0, channel: 3 event ('note', 42420, 3, 52, 73)
	0,189,127,	//# 3222, ticks 42420, elapsed 0, channel: 3 event ('note', 42420, 7, 61, 63)
	0,204,159,	//# 3223, ticks 42420, elapsed 0, channel: 3 event ('note', 42420, 8, 76, 79)
	2,201,187,	//# 3224, ticks 42432, elapsed 2, channel: 3 event ('note', 42432, 1, 73, 93)
	0,52,161,	//# 3225, ticks 42432, elapsed 0, channel: 1 event ('note', 42432, 1, 52, 80)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	3,74,0,	//# 3228, ticks 42452, elapsed 3, channel: 0 event ('note', 42452, 1, 74, 0)
	4,52,1,	//# 3229, ticks 42480, elapsed 4, channel: 1 event ('note', 42480, 3, 52, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	5,67,134,	//# 3232, ticks 42512, elapsed 5, channel: 0 event ('note', 42512, 5, 67, 67)
	0,67,135,	//# 3233, ticks 42512, elapsed 0, channel: 1 event ('note', 42512, 6, 67, 67)
	// Note off skipped, note 52 not found in channels, probably interrupted
	2,71,184,	//# 3235, ticks 42528, elapsed 2, channel: 0 event ('note', 42528, 1, 71, 92)
	1,197,0,	//# 3236, ticks 42536, elapsed 1, channel: 2 event ('note', 42536, 5, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	1,201,1,	//# 3238, ticks 42544, elapsed 1, channel: 3 event ('note', 42544, 1, 73, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	11,194,128,	//# 3240, ticks 42612, elapsed 11, channel: 2 event ('note', 42612, 5, 66, 64)
	0,194,129,	//# 3241, ticks 42612, elapsed 0, channel: 3 event ('note', 42612, 6, 66, 64)
	0,185,136,	//# 3242, ticks 42616, elapsed 0, channel: 2 event ('note', 42616, 3, 57, 68)
	0,190,123,	//# 3243, ticks 42620, elapsed 0, channel: 3 event ('note', 42620, 7, 62, 61)
	0,206,187,	//# 3244, ticks 42620, elapsed 0, channel: 3 event ('note', 42620, 8, 78, 93)
	0,69,169,	//# 3245, ticks 42624, elapsed 0, channel: 1 event ('note', 42624, 1, 69, 84)
	0,185,142,	//# 3246, ticks 42624, elapsed 0, channel: 2 event ('note', 42624, 1, 57, 71)
	1,71,0,	//# 3247, ticks 42632, elapsed 1, channel: 0 event ('note', 42632, 1, 71, 0)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	8,185,0,	//# 3250, ticks 42680, elapsed 8, channel: 2 event ('note', 42680, 3, 57, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	1,206,1,	//# 3252, ticks 42688, elapsed 1, channel: 3 event ('note', 42688, 8, 78, 0)
	3,64,164,	//# 3253, ticks 42708, elapsed 3, channel: 0 event ('note', 42708, 5, 64, 82)
	0,192,164,	//# 3254, ticks 42708, elapsed 0, channel: 2 event ('note', 42708, 6, 64, 82)
	// Note off skipped, note 57 not found in channels, probably interrupted
	2,195,163,	//# 3256, ticks 42720, elapsed 2, channel: 3 event ('note', 42720, 1, 67, 81)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	3,69,1,	//# 3259, ticks 42740, elapsed 3, channel: 1 event ('note', 42740, 1, 69, 0)
	11,45,153,	//# 3260, ticks 42808, elapsed 11, channel: 1 event ('note', 42808, 3, 45, 76)
	0,62,131,	//# 3261, ticks 42808, elapsed 0, channel: 1 event ('note', 42808, 5, 62, 65)
	0,62,131,	//# 3262, ticks 42808, elapsed 0, channel: 1 event ('note', 42808, 6, 62, 65)
	1,66,179,	//# 3263, ticks 42816, elapsed 1, channel: 1 event ('note', 42816, 1, 66, 89)
	0,173,175,	//# 3264, ticks 42816, elapsed 0, channel: 3 event ('note', 42816, 1, 45, 87)
	0,79,194,	//# 3265, ticks 42816, elapsed 0, channel: 0 event ('note', 42816, 8, 79, 97)
	0,192,124,	//# 3266, ticks 42820, elapsed 0, channel: 2 event ('note', 42820, 7, 64, 62)
	0,204,152,	//# 3267, ticks 42824, elapsed 0, channel: 2 event ('note', 42824, 4, 76, 76)
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	9,173,1,	//# 3271, ticks 42876, elapsed 9, channel: 3 event ('note', 42876, 3, 45, 0)
	1,79,0,	//# 3272, ticks 42884, elapsed 1, channel: 0 event ('note', 42884, 8, 79, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	2,204,0,	//# 3274, ticks 42900, elapsed 2, channel: 2 event ('note', 42900, 4, 76, 0)
	0,61,146,	//# 3275, ticks 42900, elapsed 0, channel: 0 event ('note', 42900, 5, 61, 73)
	0,189,146,	//# 3276, ticks 42900, elapsed 0, channel: 2 event ('note', 42900, 6, 61, 73)
	2,192,181,	//# 3277, ticks 42912, elapsed 2, channel: 3 event ('note', 42912, 1, 64, 90)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	4,66,1,	//# 3281, ticks 42940, elapsed 4, channel: 1 event ('note', 42940, 1, 66, 0)
	10,57,97,	//# 3282, ticks 43000, elapsed 10, channel: 1 event ('note', 43000, 7, 57, 48)
	0,78,163,	//# 3283, ticks 43004, elapsed 0, channel: 1 event ('note', 43004, 8, 78, 81)
	0,62,198,	//# 3284, ticks 43008, elapsed 0, channel: 0 event ('note', 43008, 1, 62, 99)
	0,206,178,	//# 3285, ticks 43008, elapsed 0, channel: 2 event ('note', 43008, 4, 78, 89)
	0,50,153,	//# 3286, ticks 43012, elapsed 0, channel: 1 event ('note', 43012, 3, 50, 76)
	2,62,175,	//# 3287, ticks 43024, elapsed 2, channel: 1 event ('note', 43024, 5, 62, 87)
	0,62,175,	//# 3288, ticks 43024, elapsed 0, channel: 1 event ('note', 43024, 6, 62, 87)
	1,192,1,	//# 3289, ticks 43032, elapsed 1, channel: 3 event ('note', 43032, 1, 64, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	12,178,169,	//# 3292, ticks 43104, elapsed 12, channel: 3 event ('note', 43104, 1, 50, 84)
	13,178,1,	//# 3293, ticks 43184, elapsed 13, channel: 3 event ('note', 43184, 3, 50, 0)
	1,62,0,	//# 3294, ticks 43192, elapsed 1, channel: 0 event ('note', 43192, 1, 62, 0)
	0,206,0,	//# 3295, ticks 43196, elapsed 0, channel: 2 event ('note', 43196, 4, 78, 0)
	0,76,176,	//# 3296, ticks 43196, elapsed 0, channel: 0 event ('note', 43196, 4, 76, 88)
	0,176,158,	//# 3297, ticks 43200, elapsed 0, channel: 2 event ('note', 43200, 1, 48, 79)
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	13,76,0,	//# 3301, ticks 43280, elapsed 13, channel: 0 event ('note', 43280, 4, 76, 0)
	2,176,0,	//# 3302, ticks 43296, elapsed 2, channel: 2 event ('note', 43296, 1, 48, 0)
	0,50,140,	//# 3303, ticks 43296, elapsed 0, channel: 0 event ('note', 43296, 1, 50, 70)
	14,207,194,	//# 3304, ticks 43380, elapsed 14, channel: 2 event ('note', 43380, 4, 79, 97)
	2,192,169,	//# 3305, ticks 43392, elapsed 2, channel: 3 event ('note', 43392, 1, 64, 84)
	0,47,140,	//# 3306, ticks 43392, elapsed 0, channel: 0 event ('note', 43392, 1, 47, 70)
	// Note off skipped, note 50 not found in channels, probably interrupted
	10,192,1,	//# 3308, ticks 43452, elapsed 10, channel: 3 event ('note', 43452, 1, 64, 0)
	0,190,169,	//# 3309, ticks 43456, elapsed 0, channel: 3 event ('note', 43456, 1, 62, 84)
	4,47,0,	//# 3310, ticks 43484, elapsed 4, channel: 0 event ('note', 43484, 1, 47, 0)
	0,50,104,	//# 3311, ticks 43488, elapsed 0, channel: 0 event ('note', 43488, 1, 50, 52)
	5,64,148,	//# 3312, ticks 43520, elapsed 5, channel: 0 event ('note', 43520, 1, 64, 74)
	1,62,1,	//# 3313, ticks 43528, elapsed 1, channel: 1 event ('note', 43528, 1, 62, 0)
	4,78,149,	//# 3314, ticks 43556, elapsed 4, channel: 1 event ('note', 43556, 4, 78, 74)
	4,66,180,	//# 3315, ticks 43584, elapsed 4, channel: 0 event ('note', 43584, 1, 66, 90)
	0,45,137,	//# 3316, ticks 43584, elapsed 0, channel: 1 event ('note', 43584, 1, 45, 68)
	0,207,0,	//# 3317, ticks 43584, elapsed 0, channel: 2 event ('note', 43584, 4, 79, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	10,66,0,	//# 3320, ticks 43644, elapsed 10, channel: 0 event ('note', 43644, 1, 66, 0)
	0,64,138,	//# 3321, ticks 43648, elapsed 0, channel: 0 event ('note', 43648, 1, 64, 69)
	// Note off skipped, note 78 not found in channels, probably interrupted
	4,45,1,	//# 3323, ticks 43676, elapsed 4, channel: 1 event ('note', 43676, 1, 45, 0)
	0,50,89,	//# 3324, ticks 43680, elapsed 0, channel: 1 event ('note', 43680, 1, 50, 44)
	5,194,168,	//# 3325, ticks 43712, elapsed 5, channel: 2 event ('note', 43712, 1, 66, 84)
	1,64,0,	//# 3326, ticks 43720, elapsed 1, channel: 0 event ('note', 43720, 1, 64, 0)
	6,83,164,	//# 3327, ticks 43760, elapsed 6, channel: 0 event ('note', 43760, 4, 83, 82)
	2,50,1,	//# 3328, ticks 43772, elapsed 2, channel: 1 event ('note', 43772, 1, 50, 0)
	0,67,155,	//# 3329, ticks 43776, elapsed 0, channel: 1 event ('note', 43776, 1, 67, 77)
	0,43,145,	//# 3330, ticks 43776, elapsed 0, channel: 1 event ('note', 43776, 1, 43, 72)
	1,194,0,	//# 3331, ticks 43784, elapsed 1, channel: 2 event ('note', 43784, 1, 66, 0)
	9,194,172,	//# 3332, ticks 43840, elapsed 9, channel: 2 event ('note', 43840, 1, 66, 86)
	// Note off skipped, note 67 not found in channels, probably interrupted
	4,43,1,	//# 3334, ticks 43864, elapsed 4, channel: 1 event ('note', 43864, 1, 43, 0)
	1,50,109,	//# 3335, ticks 43872, elapsed 1, channel: 1 event ('note', 43872, 1, 50, 54)
	5,67,143,	//# 3336, ticks 43904, elapsed 5, channel: 1 event ('note', 43904, 1, 67, 71)
	2,194,0,	//# 3337, ticks 43920, elapsed 2, channel: 2 event ('note', 43920, 1, 66, 0)
	6,209,166,	//# 3338, ticks 43960, elapsed 6, channel: 2 event ('note', 43960, 4, 81, 83)
	1,69,171,	//# 3339, ticks 43968, elapsed 1, channel: 1 event ('note', 43968, 1, 69, 85)
	0,42,140,	//# 3340, ticks 43968, elapsed 0, channel: 0 event ('note', 43968, 1, 42, 70)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 67 not found in channels, probably interrupted
	// Note off skipped, note 83 not found in channels, probably interrupted
	11,71,178,	//# 3344, ticks 44032, elapsed 11, channel: 0 event ('note', 44032, 1, 71, 89)
	// Note off skipped, note 42 not found in channels, probably interrupted
	3,69,1,	//# 3346, ticks 44052, elapsed 3, channel: 1 event ('note', 44052, 1, 69, 0)
	1,209,0,	//# 3347, ticks 44060, elapsed 1, channel: 2 event ('note', 44060, 4, 81, 0)
	0,50,95,	//# 3348, ticks 44064, elapsed 0, channel: 1 event ('note', 44064, 1, 50, 47)
	5,197,134,	//# 3349, ticks 44096, elapsed 5, channel: 2 event ('note', 44096, 1, 69, 67)
	2,71,0,	//# 3350, ticks 44112, elapsed 2, channel: 0 event ('note', 44112, 1, 71, 0)
	6,73,202,	//# 3351, ticks 44152, elapsed 6, channel: 0 event ('note', 44152, 4, 73, 101)
	1,67,165,	//# 3352, ticks 44160, elapsed 1, channel: 1 event ('note', 44160, 1, 67, 82)
	0,168,126,	//# 3353, ticks 44160, elapsed 0, channel: 2 event ('note', 44160, 1, 40, 63)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	11,197,154,	//# 3356, ticks 44224, elapsed 11, channel: 2 event ('note', 44224, 1, 69, 77)
	2,67,1,	//# 3357, ticks 44240, elapsed 2, channel: 1 event ('note', 44240, 1, 67, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	2,50,79,	//# 3359, ticks 44256, elapsed 2, channel: 1 event ('note', 44256, 1, 50, 39)
	5,67,159,	//# 3360, ticks 44288, elapsed 5, channel: 1 event ('note', 44288, 1, 67, 79)
	1,197,0,	//# 3361, ticks 44296, elapsed 1, channel: 2 event ('note', 44296, 1, 69, 0)
	8,202,156,	//# 3362, ticks 44344, elapsed 8, channel: 2 event ('note', 44344, 4, 74, 78)
	// Note off skipped, note 50 not found in channels, probably interrupted
	1,166,138,	//# 3364, ticks 44352, elapsed 1, channel: 2 event ('note', 44352, 1, 38, 69)
	0,194,176,	//# 3365, ticks 44352, elapsed 0, channel: 2 event ('note', 44352, 1, 66, 88)
	2,67,1,	//# 3366, ticks 44368, elapsed 2, channel: 1 event ('note', 44368, 1, 67, 0)
	2,73,0,	//# 3367, ticks 44380, elapsed 2, channel: 0 event ('note', 44380, 4, 73, 0)
	6,194,0,	//# 3368, ticks 44416, elapsed 6, channel: 2 event ('note', 44416, 1, 66, 0)
	0,67,136,	//# 3369, ticks 44416, elapsed 0, channel: 0 event ('note', 44416, 1, 67, 68)
	// Note off skipped, note 38 not found in channels, probably interrupted
	5,50,113,	//# 3371, ticks 44448, elapsed 5, channel: 1 event ('note', 44448, 1, 50, 56)
	// Note off skipped, note 74 not found in channels, probably interrupted
	5,67,0,	//# 3373, ticks 44480, elapsed 5, channel: 0 event ('note', 44480, 1, 67, 0)
	0,66,176,	//# 3374, ticks 44480, elapsed 0, channel: 0 event ('note', 44480, 1, 66, 88)
	6,66,0,	//# 3375, ticks 44520, elapsed 6, channel: 0 event ('note', 44520, 1, 66, 0)
	3,68,92,	//# 3376, ticks 44540, elapsed 3, channel: 0 event ('note', 44540, 4, 68, 46)
	0,202,172,	//# 3377, ticks 44544, elapsed 0, channel: 2 event ('note', 44544, 1, 74, 86)
	0,47,148,	//# 3378, ticks 44544, elapsed 0, channel: 0 event ('note', 44544, 1, 47, 74)
	2,50,1,	//# 3379, ticks 44556, elapsed 2, channel: 1 event ('note', 44556, 1, 50, 0)
	14,71,165,	//# 3380, ticks 44640, elapsed 14, channel: 1 event ('note', 44640, 1, 71, 82)
	2,202,0,	//# 3381, ticks 44656, elapsed 2, channel: 2 event ('note', 44656, 1, 74, 0)
	12,197,150,	//# 3382, ticks 44728, elapsed 12, channel: 2 event ('note', 44728, 4, 69, 75)
	1,69,168,	//# 3383, ticks 44736, elapsed 1, channel: 0 event ('note', 44736, 1, 69, 84)
	0,71,1,	//# 3384, ticks 44740, elapsed 0, channel: 1 event ('note', 44740, 1, 71, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	1,61,171,	//# 3386, ticks 44748, elapsed 1, channel: 1 event ('note', 44748, 5, 61, 85)
	0,189,170,	//# 3387, ticks 44748, elapsed 0, channel: 2 event ('note', 44748, 6, 61, 85)
	2,190,1,	//# 3388, ticks 44764, elapsed 2, channel: 3 event ('note', 44764, 5, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	11,199,165,	//# 3390, ticks 44832, elapsed 11, channel: 3 event ('note', 44832, 1, 71, 82)
	2,69,0,	//# 3391, ticks 44844, elapsed 2, channel: 0 event ('note', 44844, 1, 69, 0)
	13,71,160,	//# 3392, ticks 44924, elapsed 13, channel: 0 event ('note', 44924, 4, 71, 80)
	0,68,166,	//# 3393, ticks 44928, elapsed 0, channel: 0 event ('note', 44928, 1, 68, 83)
	0,187,147,	//# 3394, ticks 44928, elapsed 0, channel: 3 event ('note', 44928, 5, 59, 73)
	0,187,147,	//# 3395, ticks 44928, elapsed 0, channel: 3 event ('note', 44928, 6, 59, 73)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	6,61,1,	//# 3398, ticks 44964, elapsed 6, channel: 1 event ('note', 44964, 5, 61, 0)
	0,189,0,	//# 3399, ticks 44964, elapsed 0, channel: 2 event ('note', 44964, 6, 61, 0)
	// Note off skipped, note 47 not found in channels, probably interrupted
	10,71,147,	//# 3401, ticks 45024, elapsed 10, channel: 1 event ('note', 45024, 1, 71, 73)
	3,68,0,	//# 3402, ticks 45044, elapsed 3, channel: 0 event ('note', 45044, 1, 68, 0)
	11,73,134,	//# 3403, ticks 45112, elapsed 11, channel: 0 event ('note', 45112, 4, 73, 67)
	1,194,172,	//# 3404, ticks 45120, elapsed 1, channel: 2 event ('note', 45120, 1, 66, 86)
	0,57,148,	//# 3405, ticks 45120, elapsed 0, channel: 0 event ('note', 45120, 5, 57, 74)
	0,57,149,	//# 3406, ticks 45120, elapsed 0, channel: 1 event ('note', 45120, 6, 57, 74)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	2,187,1,	//# 3409, ticks 45136, elapsed 2, channel: 3 event ('note', 45136, 5, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	13,199,135,	//# 3411, ticks 45216, elapsed 13, channel: 3 event ('note', 45216, 1, 71, 67)
	1,194,0,	//# 3412, ticks 45224, elapsed 1, channel: 2 event ('note', 45224, 1, 66, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	13,184,144,	//# 3414, ticks 45304, elapsed 13, channel: 2 event ('note', 45304, 5, 56, 72)
	0,184,145,	//# 3415, ticks 45304, elapsed 0, channel: 3 event ('note', 45304, 6, 56, 72)
	1,192,164,	//# 3416, ticks 45312, elapsed 1, channel: 2 event ('note', 45312, 1, 64, 82)
	// Note off skipped, note 71 not found in channels, probably interrupted
	2,202,157,	//# 3418, ticks 45328, elapsed 2, channel: 3 event ('note', 45328, 4, 74, 78)
	2,57,0,	//# 3419, ticks 45344, elapsed 2, channel: 0 event ('note', 45344, 5, 57, 0)
	0,57,1,	//# 3420, ticks 45344, elapsed 0, channel: 1 event ('note', 45344, 6, 57, 0)
	11,71,134,	//# 3421, ticks 45408, elapsed 11, channel: 0 event ('note', 45408, 1, 71, 67)
	0,192,0,	//# 3422, ticks 45412, elapsed 0, channel: 2 event ('note', 45412, 1, 64, 0)
	0,73,137,	//# 3423, ticks 45416, elapsed 0, channel: 1 event ('note', 45416, 4, 73, 68)
	3,202,1,	//# 3424, ticks 45436, elapsed 3, channel: 3 event ('note', 45436, 4, 74, 0)
	11,190,156,	//# 3425, ticks 45504, elapsed 11, channel: 2 event ('note', 45504, 1, 62, 78)
	0,175,159,	//# 3426, ticks 45504, elapsed 0, channel: 3 event ('note', 45504, 1, 47, 79)
	2,74,172,	//# 3427, ticks 45516, elapsed 2, channel: 0 event ('note', 45516, 4, 74, 86)
	// Note off skipped, note 71 not found in channels, probably interrupted
	3,73,1,	//# 3429, ticks 45536, elapsed 3, channel: 1 event ('note', 45536, 4, 73, 0)
	11,71,145,	//# 3430, ticks 45600, elapsed 11, channel: 1 event ('note', 45600, 1, 71, 72)
	0,76,161,	//# 3431, ticks 45604, elapsed 0, channel: 1 event ('note', 45604, 4, 76, 80)
	0,175,1,	//# 3432, ticks 45608, elapsed 0, channel: 3 event ('note', 45608, 1, 47, 0)
	0,190,0,	//# 3433, ticks 45608, elapsed 0, channel: 2 event ('note', 45608, 1, 62, 0)
	0,74,0,	//# 3434, ticks 45612, elapsed 0, channel: 0 event ('note', 45612, 4, 74, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	13,76,1,	//# 3436, ticks 45692, elapsed 13, channel: 1 event ('note', 45692, 4, 76, 0)
	0,61,182,	//# 3437, ticks 45696, elapsed 0, channel: 0 event ('note', 45696, 1, 61, 91)
	0,52,153,	//# 3438, ticks 45696, elapsed 0, channel: 1 event ('note', 45696, 1, 52, 76)
	0,202,184,	//# 3439, ticks 45696, elapsed 0, channel: 2 event ('note', 45696, 4, 74, 92)
	// Note off skipped, note 56 not found in channels, probably interrupted
	// Note off skipped, note 56 not found in channels, probably interrupted
	14,206,169,	//# 3442, ticks 45780, elapsed 14, channel: 3 event ('note', 45780, 4, 78, 84)
	2,52,1,	//# 3443, ticks 45792, elapsed 2, channel: 1 event ('note', 45792, 1, 52, 0)
	0,69,149,	//# 3444, ticks 45792, elapsed 0, channel: 1 event ('note', 45792, 1, 69, 74)
	2,202,0,	//# 3445, ticks 45804, elapsed 2, channel: 2 event ('note', 45804, 4, 74, 0)
	0,61,0,	//# 3446, ticks 45808, elapsed 0, channel: 0 event ('note', 45808, 1, 61, 0)
	10,52,186,	//# 3447, ticks 45868, elapsed 10, channel: 0 event ('note', 45868, 3, 52, 93)
	0,199,204,	//# 3448, ticks 45872, elapsed 0, channel: 2 event ('note', 45872, 8, 71, 102)
	0,68,153,	//# 3449, ticks 45876, elapsed 0, channel: 1 event ('note', 45876, 7, 68, 76)
	0,71,167,	//# 3450, ticks 45880, elapsed 0, channel: 1 event ('note', 45880, 5, 71, 83)
	0,71,167,	//# 3451, ticks 45880, elapsed 0, channel: 1 event ('note', 45880, 6, 71, 83)
	1,59,161,	//# 3452, ticks 45888, elapsed 1, channel: 1 event ('note', 45888, 1, 59, 80)
	0,40,141,	//# 3453, ticks 45888, elapsed 0, channel: 1 event ('note', 45888, 1, 40, 70)
	0,76,167,	//# 3454, ticks 45888, elapsed 0, channel: 1 event ('note', 45888, 4, 76, 83)
	// Note off skipped, note 69 not found in channels, probably interrupted
	3,206,1,	//# 3456, ticks 45908, elapsed 3, channel: 3 event ('note', 45908, 4, 78, 0)
	5,199,0,	//# 3457, ticks 45940, elapsed 5, channel: 2 event ('note', 45940, 8, 71, 0)
	0,52,0,	//# 3458, ticks 45944, elapsed 0, channel: 0 event ('note', 45944, 3, 52, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	3,76,1,	//# 3460, ticks 45964, elapsed 3, channel: 1 event ('note', 45964, 4, 76, 0)
	0,74,178,	//# 3461, ticks 45968, elapsed 0, channel: 0 event ('note', 45968, 4, 74, 89)
	// Note off skipped, note 40 not found in channels, probably interrupted
	2,68,169,	//# 3463, ticks 45984, elapsed 2, channel: 1 event ('note', 45984, 1, 68, 84)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	11,68,1,	//# 3467, ticks 46048, elapsed 11, channel: 1 event ('note', 46048, 1, 68, 0)
	2,57,179,	//# 3468, ticks 46064, elapsed 2, channel: 1 event ('note', 46064, 3, 57, 89)
	0,197,182,	//# 3469, ticks 46064, elapsed 0, channel: 2 event ('note', 46064, 7, 69, 91)
	0,201,111,	//# 3470, ticks 46068, elapsed 0, channel: 3 event ('note', 46068, 4, 73, 55)
	0,201,179,	//# 3471, ticks 46068, elapsed 0, channel: 3 event ('note', 46068, 8, 73, 89)
	0,45,186,	//# 3472, ticks 46072, elapsed 0, channel: 0 event ('note', 46072, 2, 45, 93)
	0,73,207,	//# 3473, ticks 46072, elapsed 0, channel: 1 event ('note', 46072, 5, 73, 103)
	0,201,207,	//# 3474, ticks 46072, elapsed 0, channel: 3 event ('note', 46072, 6, 73, 103)
	1,189,182,	//# 3475, ticks 46080, elapsed 1, channel: 2 event ('note', 46080, 1, 61, 91)
	0,197,160,	//# 3476, ticks 46080, elapsed 0, channel: 2 event ('note', 46080, 1, 69, 80)
	0,192,160,	//# 3477, ticks 46080, elapsed 0, channel: 2 event ('note', 46080, 1, 64, 80)
	0,185,148,	//# 3478, ticks 46080, elapsed 0, channel: 2 event ('note', 46080, 1, 57, 74)
	// Note off skipped, note 74 not found in channels, probably interrupted
	7,73,1,	//# 3480, ticks 46124, elapsed 7, channel: 1 event ('note', 46124, 8, 73, 0)
	2,185,0,	//# 3481, ticks 46136, elapsed 2, channel: 2 event ('note', 46136, 3, 57, 0)
	0,201,1,	//# 3482, ticks 46140, elapsed 0, channel: 3 event ('note', 46140, 5, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	1,45,0,	//# 3485, ticks 46148, elapsed 1, channel: 0 event ('note', 46148, 2, 45, 0)
	2,73,220,	//# 3486, ticks 46160, elapsed 2, channel: 0 event ('note', 46160, 8, 73, 110)
	1,73,175,	//# 3487, ticks 46168, elapsed 1, channel: 1 event ('note', 46168, 5, 73, 87)
	0,201,174,	//# 3488, ticks 46168, elapsed 0, channel: 2 event ('note', 46168, 6, 73, 87)
	// Note off skipped, note 57 not found in channels, probably interrupted
	13,199,217,	//# 3490, ticks 46248, elapsed 13, channel: 3 event ('note', 46248, 8, 71, 108)
	0,56,203,	//# 3491, ticks 46252, elapsed 0, channel: 1 event ('note', 46252, 3, 56, 101)
	0,192,150,	//# 3492, ticks 46252, elapsed 0, channel: 2 event ('note', 46252, 7, 64, 75)
	2,172,202,	//# 3493, ticks 46264, elapsed 2, channel: 2 event ('note', 46264, 2, 44, 101)
	0,71,175,	//# 3494, ticks 46264, elapsed 0, channel: 1 event ('note', 46264, 5, 71, 87)
	0,71,175,	//# 3495, ticks 46264, elapsed 0, channel: 1 event ('note', 46264, 6, 71, 87)
	0,73,0,	//# 3496, ticks 46268, elapsed 0, channel: 0 event ('note', 46268, 8, 73, 0)
	0,56,202,	//# 3497, ticks 46272, elapsed 0, channel: 0 event ('note', 46272, 1, 56, 101)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	7,71,1,	//# 3501, ticks 46316, elapsed 7, channel: 1 event ('note', 46316, 8, 71, 0)
	1,56,0,	//# 3502, ticks 46324, elapsed 1, channel: 0 event ('note', 46324, 3, 56, 0)
	1,199,1,	//# 3503, ticks 46332, elapsed 1, channel: 3 event ('note', 46332, 5, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	2,172,0,	//# 3506, ticks 46344, elapsed 2, channel: 2 event ('note', 46344, 2, 44, 0)
	1,71,208,	//# 3507, ticks 46352, elapsed 1, channel: 0 event ('note', 46352, 8, 71, 104)
	1,71,189,	//# 3508, ticks 46360, elapsed 1, channel: 1 event ('note', 46360, 5, 71, 94)
	0,199,188,	//# 3509, ticks 46360, elapsed 0, channel: 2 event ('note', 46360, 6, 71, 94)
	// Note off skipped, note 56 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	15,197,183,	//# 3514, ticks 46448, elapsed 15, channel: 3 event ('note', 46448, 7, 69, 91)
	0,202,209,	//# 3515, ticks 46448, elapsed 0, channel: 3 event ('note', 46448, 8, 74, 104)
	1,54,197,	//# 3516, ticks 46456, elapsed 1, channel: 1 event ('note', 46456, 3, 54, 98)
	0,170,208,	//# 3517, ticks 46460, elapsed 0, channel: 2 event ('note', 46460, 2, 42, 104)
	0,74,185,	//# 3518, ticks 46460, elapsed 0, channel: 1 event ('note', 46460, 5, 74, 92)
	0,74,185,	//# 3519, ticks 46460, elapsed 0, channel: 1 event ('note', 46460, 6, 74, 92)
	0,54,203,	//# 3520, ticks 46464, elapsed 0, channel: 1 event ('note', 46464, 1, 54, 101)
	2,71,0,	//# 3521, ticks 46476, elapsed 2, channel: 0 event ('note', 46476, 8, 71, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	6,202,1,	//# 3524, ticks 46512, elapsed 6, channel: 3 event ('note', 46512, 8, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	2,54,1,	//# 3528, ticks 46528, elapsed 2, channel: 1 event ('note', 46528, 3, 54, 0)
	2,170,0,	//# 3529, ticks 46540, elapsed 2, channel: 2 event ('note', 46540, 2, 42, 0)
	0,74,212,	//# 3530, ticks 46544, elapsed 0, channel: 0 event ('note', 46544, 8, 74, 106)
	1,74,195,	//# 3531, ticks 46552, elapsed 1, channel: 1 event ('note', 46552, 5, 74, 97)
	0,202,194,	//# 3532, ticks 46552, elapsed 0, channel: 2 event ('note', 46552, 6, 74, 97)
	// Note off skipped, note 54 not found in channels, probably interrupted
	14,196,165,	//# 3534, ticks 46636, elapsed 14, channel: 3 event ('note', 46636, 7, 68, 82)
	0,201,191,	//# 3535, ticks 46640, elapsed 0, channel: 3 event ('note', 46640, 8, 73, 95)
	0,168,189,	//# 3536, ticks 46644, elapsed 0, channel: 3 event ('note', 46644, 2, 40, 94)
	0,180,179,	//# 3537, ticks 46648, elapsed 0, channel: 3 event ('note', 46648, 3, 52, 89)
	1,180,189,	//# 3538, ticks 46656, elapsed 1, channel: 3 event ('note', 46656, 1, 52, 94)
	0,201,213,	//# 3539, ticks 46656, elapsed 0, channel: 3 event ('note', 46656, 5, 73, 106)
	0,73,213,	//# 3540, ticks 46656, elapsed 0, channel: 1 event ('note', 46656, 6, 73, 106)
	1,74,0,	//# 3541, ticks 46664, elapsed 1, channel: 0 event ('note', 46664, 8, 74, 0)
	3,202,0,	//# 3542, ticks 46684, elapsed 3, channel: 2 event ('note', 46684, 5, 74, 0)
	// Note off skipped, note 74 not found in channels, probably interrupted
	3,73,1,	//# 3544, ticks 46704, elapsed 3, channel: 1 event ('note', 46704, 8, 73, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	// Note off skipped, note 52 not found in channels, probably interrupted
	2,201,1,	//# 3547, ticks 46720, elapsed 2, channel: 3 event ('note', 46720, 5, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	1,73,204,	//# 3549, ticks 46728, elapsed 1, channel: 0 event ('note', 46728, 8, 73, 102)
	// Note off skipped, note 40 not found in channels, probably interrupted
	2,73,179,	//# 3551, ticks 46744, elapsed 2, channel: 1 event ('note', 46744, 5, 73, 89)
	0,201,178,	//# 3552, ticks 46744, elapsed 0, channel: 2 event ('note', 46744, 6, 73, 89)
	// Note off skipped, note 52 not found in channels, probably interrupted
	14,197,177,	//# 3554, ticks 46828, elapsed 14, channel: 3 event ('note', 46828, 7, 69, 88)
	0,206,199,	//# 3555, ticks 46828, elapsed 0, channel: 3 event ('note', 46828, 8, 78, 99)
	0,38,195,	//# 3556, ticks 46832, elapsed 0, channel: 1 event ('note', 46832, 2, 38, 97)
	1,178,172,	//# 3557, ticks 46840, elapsed 1, channel: 2 event ('note', 46840, 3, 50, 86)
	0,206,170,	//# 3558, ticks 46840, elapsed 0, channel: 2 event ('note', 46840, 5, 78, 85)
	0,206,170,	//# 3559, ticks 46840, elapsed 0, channel: 2 event ('note', 46840, 6, 78, 85)
	1,178,194,	//# 3560, ticks 46848, elapsed 1, channel: 2 event ('note', 46848, 1, 50, 97)
	2,73,0,	//# 3561, ticks 46860, elapsed 2, channel: 0 event ('note', 46860, 8, 73, 0)
	// Note off skipped, note 73 not found in channels, probably interrupted
	// Note off skipped, note 73 not found in channels, probably interrupted
	6,206,1,	//# 3564, ticks 46900, elapsed 6, channel: 3 event ('note', 46900, 5, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	1,178,0,	//# 3567, ticks 46908, elapsed 1, channel: 2 event ('note', 46908, 3, 50, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	2,38,1,	//# 3569, ticks 46920, elapsed 2, channel: 1 event ('note', 46920, 2, 38, 0)
	0,78,190,	//# 3570, ticks 46924, elapsed 0, channel: 0 event ('note', 46924, 8, 78, 95)
	0,78,169,	//# 3571, ticks 46928, elapsed 0, channel: 1 event ('note', 46928, 5, 78, 84)
	0,206,168,	//# 3572, ticks 46928, elapsed 0, channel: 2 event ('note', 46928, 6, 78, 84)
	// Note off skipped, note 50 not found in channels, probably interrupted
	15,185,155,	//# 3574, ticks 47016, elapsed 15, channel: 3 event ('note', 47016, 7, 57, 77)
	0,204,201,	//# 3575, ticks 47020, elapsed 0, channel: 3 event ('note', 47020, 8, 76, 100)
	1,37,209,	//# 3576, ticks 47028, elapsed 1, channel: 1 event ('note', 47028, 2, 37, 104)
	0,177,174,	//# 3577, ticks 47028, elapsed 0, channel: 2 event ('note', 47028, 3, 49, 87)
	0,204,172,	//# 3578, ticks 47032, elapsed 0, channel: 2 event ('note', 47032, 5, 76, 86)
	0,204,172,	//# 3579, ticks 47032, elapsed 0, channel: 2 event ('note', 47032, 6, 76, 86)
	1,177,190,	//# 3580, ticks 47040, elapsed 1, channel: 2 event ('note', 47040, 1, 49, 95)
	1,78,0,	//# 3581, ticks 47048, elapsed 1, channel: 0 event ('note', 47048, 8, 78, 0)
	// Note off skipped, note 78 not found in channels, probably interrupted
	// Note off skipped, note 78 not found in channels, probably interrupted
	5,204,1,	//# 3584, ticks 47080, elapsed 5, channel: 3 event ('note', 47080, 8, 76, 0)
	3,177,0,	//# 3585, ticks 47100, elapsed 3, channel: 2 event ('note', 47100, 3, 49, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	2,76,192,	//# 3589, ticks 47112, elapsed 2, channel: 0 event ('note', 47112, 8, 76, 96)
	1,37,1,	//# 3590, ticks 47120, elapsed 1, channel: 1 event ('note', 47120, 2, 37, 0)
	0,76,169,	//# 3591, ticks 47124, elapsed 0, channel: 1 event ('note', 47124, 5, 76, 84)
	0,204,168,	//# 3592, ticks 47124, elapsed 0, channel: 2 event ('note', 47124, 6, 76, 84)
	// Note off skipped, note 49 not found in channels, probably interrupted
	14,196,181,	//# 3594, ticks 47208, elapsed 14, channel: 3 event ('note', 47208, 8, 68, 90)
	0,62,157,	//# 3595, ticks 47212, elapsed 0, channel: 1 event ('note', 47212, 7, 62, 78)
	1,47,179,	//# 3596, ticks 47220, elapsed 1, channel: 1 event ('note', 47220, 3, 47, 89)
	0,163,206,	//# 3597, ticks 47224, elapsed 0, channel: 2 event ('note', 47224, 2, 35, 103)
	0,68,207,	//# 3598, ticks 47228, elapsed 0, channel: 1 event ('note', 47228, 5, 68, 103)
	0,196,207,	//# 3599, ticks 47228, elapsed 0, channel: 3 event ('note', 47228, 6, 68, 103)
	0,76,0,	//# 3600, ticks 47228, elapsed 0, channel: 0 event ('note', 47228, 8, 76, 0)
	0,47,186,	//# 3601, ticks 47232, elapsed 0, channel: 0 event ('note', 47232, 1, 47, 93)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	6,68,1,	//# 3604, ticks 47268, elapsed 6, channel: 1 event ('note', 47268, 8, 68, 0)
	3,196,1,	//# 3605, ticks 47288, elapsed 3, channel: 3 event ('note', 47288, 5, 68, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	2,68,199,	//# 3608, ticks 47300, elapsed 2, channel: 1 event ('note', 47300, 8, 68, 99)
	0,47,0,	//# 3609, ticks 47304, elapsed 0, channel: 0 event ('note', 47304, 3, 47, 0)
	2,68,208,	//# 3610, ticks 47320, elapsed 2, channel: 0 event ('note', 47320, 5, 68, 104)
	0,196,209,	//# 3611, ticks 47320, elapsed 0, channel: 3 event ('note', 47320, 6, 68, 104)
	// Note off skipped, note 47 not found in channels, probably interrupted
	1,163,0,	//# 3613, ticks 47328, elapsed 1, channel: 2 event ('note', 47328, 2, 35, 0)
	10,197,212,	//# 3614, ticks 47388, elapsed 10, channel: 2 event ('note', 47388, 8, 69, 106)
	2,61,147,	//# 3615, ticks 47404, elapsed 2, channel: 1 event ('note', 47404, 7, 61, 73)
	1,33,203,	//# 3616, ticks 47412, elapsed 1, channel: 1 event ('note', 47412, 2, 33, 101)
	0,45,175,	//# 3617, ticks 47412, elapsed 0, channel: 1 event ('note', 47412, 3, 45, 87)
	0,69,199,	//# 3618, ticks 47412, elapsed 0, channel: 1 event ('note', 47412, 5, 69, 99)
	0,69,199,	//# 3619, ticks 47412, elapsed 0, channel: 1 event ('note', 47412, 6, 69, 99)
	2,45,185,	//# 3620, ticks 47424, elapsed 2, channel: 1 event ('note', 47424, 1, 45, 92)
	0,68,0,	//# 3621, ticks 47424, elapsed 0, channel: 0 event ('note', 47424, 8, 68, 0)
	2,196,1,	//# 3622, ticks 47440, elapsed 2, channel: 3 event ('note', 47440, 5, 68, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	3,197,0,	//# 3624, ticks 47460, elapsed 3, channel: 2 event ('note', 47460, 8, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 61 not found in channels, probably interrupted
	6,69,222,	//# 3628, ticks 47496, elapsed 6, channel: 0 event ('note', 47496, 8, 69, 111)
	0,45,1,	//# 3629, ticks 47500, elapsed 0, channel: 1 event ('note', 47500, 3, 45, 0)
	1,69,187,	//# 3630, ticks 47508, elapsed 1, channel: 1 event ('note', 47508, 5, 69, 93)
	0,197,186,	//# 3631, ticks 47508, elapsed 0, channel: 2 event ('note', 47508, 6, 69, 93)
	// Note off skipped, note 33 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	15,187,153,	//# 3634, ticks 47596, elapsed 15, channel: 3 event ('note', 47596, 7, 59, 76)
	0,190,199,	//# 3635, ticks 47596, elapsed 0, channel: 3 event ('note', 47596, 8, 62, 99)
	0,44,189,	//# 3636, ticks 47600, elapsed 0, channel: 1 event ('note', 47600, 3, 44, 94)
	0,69,0,	//# 3637, ticks 47600, elapsed 0, channel: 0 event ('note', 47600, 8, 69, 0)
	0,32,206,	//# 3638, ticks 47604, elapsed 0, channel: 0 event ('note', 47604, 2, 32, 103)
	0,190,166,	//# 3639, ticks 47604, elapsed 0, channel: 2 event ('note', 47604, 5, 62, 83)
	0,190,166,	//# 3640, ticks 47604, elapsed 0, channel: 2 event ('note', 47604, 6, 62, 83)
	2,172,196,	//# 3641, ticks 47616, elapsed 2, channel: 2 event ('note', 47616, 1, 44, 98)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	7,190,1,	//# 3644, ticks 47660, elapsed 7, channel: 3 event ('note', 47660, 5, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	4,44,1,	//# 3648, ticks 47684, elapsed 4, channel: 1 event ('note', 47684, 3, 44, 0)
	0,62,197,	//# 3649, ticks 47688, elapsed 0, channel: 1 event ('note', 47688, 8, 62, 98)
	1,190,169,	//# 3650, ticks 47696, elapsed 1, channel: 3 event ('note', 47696, 5, 62, 84)
	0,190,169,	//# 3651, ticks 47696, elapsed 0, channel: 3 event ('note', 47696, 6, 62, 84)
	2,32,0,	//# 3652, ticks 47712, elapsed 2, channel: 0 event ('note', 47712, 2, 32, 0)
	2,172,0,	//# 3653, ticks 47724, elapsed 2, channel: 2 event ('note', 47724, 1, 44, 0)
	11,57,160,	//# 3654, ticks 47788, elapsed 11, channel: 0 event ('note', 47788, 7, 57, 80)
	0,189,208,	//# 3655, ticks 47788, elapsed 0, channel: 2 event ('note', 47788, 8, 61, 104)
	1,45,176,	//# 3656, ticks 47796, elapsed 1, channel: 0 event ('note', 47796, 3, 45, 88)
	0,189,195,	//# 3657, ticks 47796, elapsed 0, channel: 3 event ('note', 47796, 5, 61, 97)
	0,61,194,	//# 3658, ticks 47796, elapsed 0, channel: 0 event ('note', 47796, 6, 61, 97)
	0,33,190,	//# 3659, ticks 47800, elapsed 0, channel: 0 event ('note', 47800, 2, 33, 95)
	1,45,186,	//# 3660, ticks 47808, elapsed 1, channel: 0 event ('note', 47808, 1, 45, 93)
	3,62,1,	//# 3661, ticks 47828, elapsed 3, channel: 1 event ('note', 47828, 8, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	3,189,0,	//# 3664, ticks 47848, elapsed 3, channel: 2 event ('note', 47848, 5, 61, 0)
	0,189,1,	//# 3665, ticks 47848, elapsed 0, channel: 3 event ('note', 47848, 6, 61, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	5,45,0,	//# 3668, ticks 47880, elapsed 5, channel: 0 event ('note', 47880, 3, 45, 0)
	0,61,216,	//# 3669, ticks 47884, elapsed 0, channel: 0 event ('note', 47884, 5, 61, 108)
	0,61,217,	//# 3670, ticks 47884, elapsed 0, channel: 1 event ('note', 47884, 6, 61, 108)
	0,189,206,	//# 3671, ticks 47884, elapsed 0, channel: 2 event ('note', 47884, 8, 61, 103)
	// Note off skipped, note 33 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	15,194,159,	//# 3674, ticks 47972, elapsed 15, channel: 3 event ('note', 47972, 5, 66, 79)
	0,194,159,	//# 3675, ticks 47972, elapsed 0, channel: 3 event ('note', 47972, 6, 66, 79)
	0,194,171,	//# 3676, ticks 47976, elapsed 0, channel: 3 event ('note', 47976, 8, 66, 85)
	1,178,177,	//# 3677, ticks 47984, elapsed 1, channel: 3 event ('note', 47984, 3, 50, 88)
	0,166,187,	//# 3678, ticks 47988, elapsed 0, channel: 3 event ('note', 47988, 2, 38, 93)
	0,185,169,	//# 3679, ticks 47988, elapsed 0, channel: 3 event ('note', 47988, 7, 57, 84)
	2,178,185,	//# 3680, ticks 48000, elapsed 2, channel: 3 event ('note', 48000, 1, 50, 92)
	0,61,0,	//# 3681, ticks 48000, elapsed 0, channel: 0 event ('note', 48000, 5, 61, 0)
	0,61,1,	//# 3682, ticks 48000, elapsed 0, channel: 1 event ('note', 48000, 6, 61, 0)
	2,189,0,	//# 3683, ticks 48012, elapsed 2, channel: 2 event ('note', 48012, 8, 61, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	7,178,1,	//# 3687, ticks 48056, elapsed 7, channel: 3 event ('note', 48056, 3, 50, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	3,66,182,	//# 3689, ticks 48076, elapsed 3, channel: 0 event ('note', 48076, 5, 66, 91)
	0,66,183,	//# 3690, ticks 48076, elapsed 0, channel: 1 event ('note', 48076, 6, 66, 91)
	0,194,198,	//# 3691, ticks 48076, elapsed 0, channel: 2 event ('note', 48076, 8, 66, 99)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	15,177,179,	//# 3694, ticks 48168, elapsed 15, channel: 3 event ('note', 48168, 3, 49, 89)
	1,165,195,	//# 3695, ticks 48176, elapsed 1, channel: 3 event ('note', 48176, 2, 37, 97)
	0,57,180,	//# 3696, ticks 48176, elapsed 0, channel: 0 event ('note', 48176, 7, 57, 90)
	0,64,176,	//# 3697, ticks 48180, elapsed 0, channel: 0 event ('note', 48180, 5, 64, 88)
	0,64,176,	//# 3698, ticks 48180, elapsed 0, channel: 0 event ('note', 48180, 6, 64, 88)
	0,64,206,	//# 3699, ticks 48180, elapsed 0, channel: 0 event ('note', 48180, 8, 64, 103)
	2,49,185,	//# 3700, ticks 48192, elapsed 2, channel: 1 event ('note', 48192, 1, 49, 92)
	2,194,0,	//# 3701, ticks 48204, elapsed 2, channel: 2 event ('note', 48204, 8, 66, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 66 not found in channels, probably interrupted
	6,49,1,	//# 3704, ticks 48244, elapsed 6, channel: 1 event ('note', 48244, 3, 49, 0)
	0,64,0,	//# 3705, ticks 48244, elapsed 0, channel: 0 event ('note', 48244, 5, 64, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	5,64,196,	//# 3709, ticks 48276, elapsed 5, channel: 0 event ('note', 48276, 8, 64, 98)
	0,165,1,	//# 3710, ticks 48280, elapsed 0, channel: 3 event ('note', 48280, 2, 37, 0)
	0,64,183,	//# 3711, ticks 48280, elapsed 0, channel: 1 event ('note', 48280, 5, 64, 91)
	0,192,182,	//# 3712, ticks 48280, elapsed 0, channel: 2 event ('note', 48280, 6, 64, 91)
	// Note off skipped, note 49 not found in channels, probably interrupted
	13,175,173,	//# 3714, ticks 48360, elapsed 13, channel: 3 event ('note', 48360, 3, 47, 86)
	0,190,167,	//# 3715, ticks 48364, elapsed 0, channel: 3 event ('note', 48364, 7, 62, 83)
	0,64,0,	//# 3716, ticks 48364, elapsed 0, channel: 0 event ('note', 48364, 8, 64, 0)
	0,56,218,	//# 3717, ticks 48364, elapsed 0, channel: 0 event ('note', 48364, 8, 56, 109)
	1,163,193,	//# 3718, ticks 48372, elapsed 1, channel: 3 event ('note', 48372, 2, 35, 96)
	1,56,207,	//# 3719, ticks 48380, elapsed 1, channel: 1 event ('note', 48380, 5, 56, 103)
	0,184,206,	//# 3720, ticks 48380, elapsed 0, channel: 2 event ('note', 48380, 6, 56, 103)
	0,175,179,	//# 3721, ticks 48384, elapsed 0, channel: 3 event ('note', 48384, 1, 47, 89)
	// Note off skipped, note 64 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	6,56,0,	//# 3724, ticks 48420, elapsed 6, channel: 0 event ('note', 48420, 8, 56, 0)
	2,56,1,	//# 3725, ticks 48432, elapsed 2, channel: 1 event ('note', 48432, 5, 56, 0)
	0,184,0,	//# 3726, ticks 48432, elapsed 0, channel: 2 event ('note', 48432, 6, 56, 0)
	0,175,1,	//# 3727, ticks 48436, elapsed 0, channel: 3 event ('note', 48436, 3, 47, 0)
	2,56,180,	//# 3728, ticks 48448, elapsed 2, channel: 0 event ('note', 48448, 8, 56, 90)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 35 not found in channels, probably interrupted
	3,56,191,	//# 3731, ticks 48468, elapsed 3, channel: 1 event ('note', 48468, 5, 56, 95)
	0,184,190,	//# 3732, ticks 48468, elapsed 0, channel: 2 event ('note', 48468, 6, 56, 95)
	// Note off skipped, note 47 not found in channels, probably interrupted
	13,56,0,	//# 3734, ticks 48548, elapsed 13, channel: 0 event ('note', 48548, 8, 56, 0)
	0,57,216,	//# 3735, ticks 48552, elapsed 0, channel: 0 event ('note', 48552, 8, 57, 108)
	0,173,179,	//# 3736, ticks 48556, elapsed 0, channel: 3 event ('note', 48556, 3, 45, 89)
	0,189,145,	//# 3737, ticks 48556, elapsed 0, channel: 3 event ('note', 48556, 7, 61, 72)
	1,161,185,	//# 3738, ticks 48564, elapsed 1, channel: 3 event ('note', 48564, 2, 33, 92)
	0,56,1,	//# 3739, ticks 48568, elapsed 0, channel: 1 event ('note', 48568, 5, 56, 0)
	0,184,0,	//# 3740, ticks 48568, elapsed 0, channel: 2 event ('note', 48568, 6, 56, 0)
	1,45,177,	//# 3741, ticks 48576, elapsed 1, channel: 1 event ('note', 48576, 1, 45, 88)
	0,185,176,	//# 3742, ticks 48576, elapsed 0, channel: 2 event ('note', 48576, 5, 57, 88)
	0,57,177,	//# 3743, ticks 48576, elapsed 0, channel: 1 event ('note', 48576, 6, 57, 88)
	7,57,0,	//# 3744, ticks 48620, elapsed 7, channel: 0 event ('note', 48620, 8, 57, 0)
	2,57,1,	//# 3745, ticks 48636, elapsed 2, channel: 1 event ('note', 48636, 5, 57, 0)
	0,185,0,	//# 3746, ticks 48636, elapsed 0, channel: 2 event ('note', 48636, 6, 57, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	// Note off skipped, note 45 not found in channels, probably interrupted
	2,57,214,	//# 3749, ticks 48648, elapsed 2, channel: 0 event ('note', 48648, 8, 57, 107)
	3,57,203,	//# 3750, ticks 48668, elapsed 3, channel: 1 event ('note', 48668, 5, 57, 101)
	0,185,202,	//# 3751, ticks 48668, elapsed 0, channel: 2 event ('note', 48668, 6, 57, 101)
	0,161,1,	//# 3752, ticks 48672, elapsed 0, channel: 3 event ('note', 48672, 2, 33, 0)
	// Note off skipped, note 45 not found in channels, probably interrupted
	13,172,189,	//# 3754, ticks 48748, elapsed 13, channel: 3 event ('note', 48748, 3, 44, 94)
	0,187,157,	//# 3755, ticks 48748, elapsed 0, channel: 3 event ('note', 48748, 7, 59, 78)
	0,190,219,	//# 3756, ticks 48748, elapsed 0, channel: 3 event ('note', 48748, 8, 62, 109)
	2,32,203,	//# 3757, ticks 48760, elapsed 2, channel: 1 event ('note', 48760, 2, 32, 101)
	0,62,197,	//# 3758, ticks 48764, elapsed 0, channel: 1 event ('note', 48764, 5, 62, 98)
	0,62,197,	//# 3759, ticks 48764, elapsed 0, channel: 1 event ('note', 48764, 6, 62, 98)
	0,44,189,	//# 3760, ticks 48768, elapsed 0, channel: 1 event ('note', 48768, 1, 44, 94)
	0,57,0,	//# 3761, ticks 48772, elapsed 0, channel: 0 event ('note', 48772, 8, 57, 0)
	2,185,0,	//# 3762, ticks 48788, elapsed 2, channel: 2 event ('note', 48788, 5, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	4,190,1,	//# 3764, ticks 48812, elapsed 4, channel: 3 event ('note', 48812, 8, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	// Note off skipped, note 62 not found in channels, probably interrupted
	3,44,1,	//# 3767, ticks 48832, elapsed 3, channel: 1 event ('note', 48832, 3, 44, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	1,62,206,	//# 3769, ticks 48840, elapsed 1, channel: 0 event ('note', 48840, 8, 62, 103)
	2,62,193,	//# 3770, ticks 48852, elapsed 2, channel: 1 event ('note', 48852, 5, 62, 96)
	0,190,192,	//# 3771, ticks 48852, elapsed 0, channel: 2 event ('note', 48852, 6, 62, 96)
	// Note off skipped, note 44 not found in channels, probably interrupted
	// Note off skipped, note 32 not found in channels, probably interrupted
	15,199,181,	//# 3774, ticks 48940, elapsed 15, channel: 3 event ('note', 48940, 8, 71, 90)
	1,199,173,	//# 3775, ticks 48948, elapsed 1, channel: 3 event ('note', 48948, 5, 71, 86)
	0,199,173,	//# 3776, ticks 48948, elapsed 0, channel: 3 event ('note', 48948, 6, 71, 86)
	0,192,145,	//# 3777, ticks 48948, elapsed 0, channel: 3 event ('note', 48948, 7, 64, 72)
	0,184,187,	//# 3778, ticks 48952, elapsed 0, channel: 3 event ('note', 48952, 3, 56, 93)
	1,184,181,	//# 3779, ticks 48960, elapsed 1, channel: 3 event ('note', 48960, 1, 56, 90)
	0,172,195,	//# 3780, ticks 48964, elapsed 0, channel: 3 event ('note', 48964, 2, 44, 97)
	0,62,0,	//# 3781, ticks 48964, elapsed 0, channel: 0 event ('note', 48964, 8, 62, 0)
	1,62,1,	//# 3782, ticks 48972, elapsed 1, channel: 1 event ('note', 48972, 5, 62, 0)
	0,190,0,	//# 3783, ticks 48972, elapsed 0, channel: 2 event ('note', 48972, 6, 62, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	9,71,190,	//# 3787, ticks 49024, elapsed 9, channel: 0 event ('note', 49024, 8, 71, 95)
	// Note off skipped, note 56 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	3,71,197,	//# 3790, ticks 49044, elapsed 3, channel: 1 event ('note', 49044, 5, 71, 98)
	0,199,196,	//# 3791, ticks 49044, elapsed 0, channel: 2 event ('note', 49044, 6, 71, 98)
	// Note off skipped, note 56 not found in channels, probably interrupted
	4,172,1,	//# 3793, ticks 49072, elapsed 4, channel: 3 event ('note', 49072, 2, 44, 0)
	9,189,215,	//# 3794, ticks 49128, elapsed 9, channel: 3 event ('note', 49128, 8, 61, 107)
	2,57,162,	//# 3795, ticks 49144, elapsed 2, channel: 0 event ('note', 49144, 3, 57, 81)
	0,61,202,	//# 3796, ticks 49144, elapsed 0, channel: 0 event ('note', 49144, 5, 61, 101)
	0,61,203,	//# 3797, ticks 49144, elapsed 0, channel: 1 event ('note', 49144, 6, 61, 101)
	0,192,164,	//# 3798, ticks 49148, elapsed 0, channel: 2 event ('note', 49148, 7, 64, 82)
	// Note off skipped, note 71 not found in channels, probably interrupted
	0,185,172,	//# 3800, ticks 49152, elapsed 0, channel: 2 event ('note', 49152, 1, 57, 86)
	0,173,182,	//# 3801, ticks 49156, elapsed 0, channel: 2 event ('note', 49156, 2, 45, 91)
	// Note off skipped, note 71 not found in channels, probably interrupted
	// Note off skipped, note 71 not found in channels, probably interrupted
	5,61,0,	//# 3804, ticks 49188, elapsed 5, channel: 0 event ('note', 49188, 8, 61, 0)
	3,61,1,	//# 3805, ticks 49208, elapsed 3, channel: 1 event ('note', 49208, 5, 61, 0)
	0,189,1,	//# 3806, ticks 49208, elapsed 0, channel: 3 event ('note', 49208, 6, 61, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	1,61,204,	//# 3808, ticks 49216, elapsed 1, channel: 0 event ('note', 49216, 8, 61, 102)
	// Note off skipped, note 57 not found in channels, probably interrupted
	// Note off skipped, note 57 not found in channels, probably interrupted
	2,61,189,	//# 3811, ticks 49232, elapsed 2, channel: 1 event ('note', 49232, 5, 61, 94)
	0,189,189,	//# 3812, ticks 49232, elapsed 0, channel: 3 event ('note', 49232, 6, 61, 94)
	2,173,0,	//# 3813, ticks 49244, elapsed 2, channel: 2 event ('note', 49244, 2, 45, 0)
	11,197,192,	//# 3814, ticks 49312, elapsed 11, channel: 2 event ('note', 49312, 8, 69, 96)
	2,69,175,	//# 3815, ticks 49328, elapsed 2, channel: 1 event ('note', 49328, 5, 69, 87)
	0,69,175,	//# 3816, ticks 49328, elapsed 0, channel: 1 event ('note', 49328, 6, 69, 87)
	0,54,185,	//# 3817, ticks 49332, elapsed 0, channel: 1 event ('note', 49332, 3, 54, 92)
	0,66,137,	//# 3818, ticks 49332, elapsed 0, channel: 1 event ('note', 49332, 7, 66, 68)
	0,42,187,	//# 3819, ticks 49336, elapsed 0, channel: 1 event ('note', 49336, 2, 42, 93)
	0,61,0,	//# 3820, ticks 49336, elapsed 0, channel: 0 event ('note', 49336, 8, 61, 0)
	1,54,192,	//# 3821, ticks 49344, elapsed 1, channel: 0 event ('note', 49344, 1, 54, 96)
	2,189,1,	//# 3822, ticks 49356, elapsed 2, channel: 3 event ('note', 49356, 5, 61, 0)
	// Note off skipped, note 61 not found in channels, probably interrupted
	2,197,0,	//# 3824, ticks 49372, elapsed 2, channel: 2 event ('note', 49372, 8, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	5,197,206,	//# 3827, ticks 49404, elapsed 5, channel: 2 event ('note', 49404, 8, 69, 103)
	0,54,0,	//# 3828, ticks 49408, elapsed 0, channel: 0 event ('note', 49408, 3, 54, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	// Note off skipped, note 54 not found in channels, probably interrupted
	2,42,1,	//# 3831, ticks 49424, elapsed 2, channel: 1 event ('note', 49424, 2, 42, 0)
	0,69,192,	//# 3832, ticks 49428, elapsed 0, channel: 0 event ('note', 49428, 5, 69, 96)
	0,69,193,	//# 3833, ticks 49428, elapsed 0, channel: 1 event ('note', 49428, 6, 69, 96)
	13,187,191,	//# 3834, ticks 49504, elapsed 13, channel: 3 event ('note', 49504, 8, 59, 95)
	2,187,143,	//# 3835, ticks 49516, elapsed 2, channel: 3 event ('note', 49516, 5, 59, 71)
	0,187,143,	//# 3836, ticks 49516, elapsed 0, channel: 3 event ('note', 49516, 6, 59, 71)
	0,166,183,	//# 3837, ticks 49520, elapsed 0, channel: 3 event ('note', 49520, 2, 38, 91)
	0,178,177,	//# 3838, ticks 49520, elapsed 0, channel: 3 event ('note', 49520, 3, 50, 88)
	0,194,151,	//# 3839, ticks 49520, elapsed 0, channel: 3 event ('note', 49520, 7, 66, 75)
	0,69,0,	//# 3840, ticks 49524, elapsed 0, channel: 0 event ('note', 49524, 8, 69, 0)
	2,50,196,	//# 3841, ticks 49536, elapsed 2, channel: 0 event ('note', 49536, 1, 50, 98)
	0,69,1,	//# 3842, ticks 49536, elapsed 0, channel: 1 event ('note', 49536, 5, 69, 0)
	0,197,0,	//# 3843, ticks 49536, elapsed 0, channel: 2 event ('note', 49536, 6, 69, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	9,194,1,	//# 3847, ticks 49592, elapsed 9, channel: 3 event ('note', 49592, 7, 66, 0)
	1,50,0,	//# 3848, ticks 49600, elapsed 1, channel: 0 event ('note', 49600, 3, 50, 0)
	// Note off skipped, note 50 not found in channels, probably interrupted
	// Note off skipped, note 38 not found in channels, probably interrupted
	1,59,206,	//# 3851, ticks 49608, elapsed 1, channel: 0 event ('note', 49608, 8, 59, 103)
	1,59,173,	//# 3852, ticks 49616, elapsed 1, channel: 1 event ('note', 49616, 5, 59, 86)
	0,187,172,	//# 3853, ticks 49616, elapsed 0, channel: 2 event ('note', 49616, 6, 59, 86)
	13,196,221,	//# 3854, ticks 49696, elapsed 13, channel: 3 event ('note', 49696, 8, 68, 110)
	2,52,177,	//# 3855, ticks 49708, elapsed 2, channel: 1 event ('note', 49708, 3, 52, 88)
	0,192,150,	//# 3856, ticks 49708, elapsed 0, channel: 2 event ('note', 49708, 7, 64, 75)
	0,168,172,	//# 3857, ticks 49712, elapsed 0, channel: 2 event ('note', 49712, 2, 40, 86)
	0,196,162,	//# 3858, ticks 49712, elapsed 0, channel: 2 event ('note', 49712, 5, 68, 81)
	0,196,162,	//# 3859, ticks 49712, elapsed 0, channel: 2 event ('note', 49712, 6, 68, 81)
	2,199,200,	//# 3860, ticks 49728, elapsed 2, channel: 2 event ('note', 49728, 1, 71, 100)
	0,52,175,	//# 3861, ticks 49728, elapsed 0, channel: 1 event ('note', 49728, 1, 52, 87)
	0,59,0,	//# 3862, ticks 49728, elapsed 0, channel: 0 event ('note', 49728, 8, 59, 0)
	// Note off skipped, note 59 not found in channels, probably interrupted
	// Note off skipped, note 59 not found in channels, probably interrupted
	6,196,1,	//# 3865, ticks 49768, elapsed 6, channel: 3 event ('note', 49768, 8, 68, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	// Note off skipped, note 68 not found in channels, probably interrupted
	// Note off skipped, note 64 not found in channels, probably interrupted
	3,52,1,	//# 3869, ticks 49788, elapsed 3, channel: 1 event ('note', 49788, 3, 52, 0)
	// Note off skipped, note 40 not found in channels, probably interrupted
	1,68,178,	//# 3871, ticks 49796, elapsed 1, channel: 0 event ('note', 49796, 8, 68, 89)
	1,68,169,	//# 3872, ticks 49804, elapsed 1, channel: 1 event ('note', 49804, 5, 68, 84)
	0,196,169,	//# 3873, ticks 49804, elapsed 0, channel: 3 event ('note', 49804, 6, 68, 84)
	// Note off skipped, note 52 not found in channels, probably interrupted
	1,199,0,	//# 3875, ticks 49812, elapsed 1, channel: 2 event ('note', 49812, 1, 71, 0)
	15,192,148,	//# 3876, ticks 49904, elapsed 15, channel: 2 event ('note', 49904, 7, 64, 74)
	0,185,166,	//# 3877, ticks 49908, elapsed 0, channel: 2 event ('note', 49908, 3, 57, 83)
	0,197,172,	//# 3878, ticks 49912, elapsed 0, channel: 2 event ('note', 49912, 5, 69, 86)
	0,69,173,	//# 3879, ticks 49912, elapsed 0, channel: 1 event ('note', 49912, 6, 69, 86)
	0,197,155,	//# 3880, ticks 49912, elapsed 0, channel: 3 event ('note', 49912, 8, 69, 77)
	0,161,173,	//# 3881, ticks 49916, elapsed 0, channel: 3 event ('note', 49916, 2, 33, 86)
	0,73,195,	//# 3882, ticks 49920, elapsed 0, channel: 1 event ('note', 49920, 1, 73, 97)
	0,185,142,	//# 3883, ticks 49920, elapsed 0, channel: 2 event ('note', 49920, 1, 57, 71)
	1,68,0,	//# 3884, ticks 49928, elapsed 1, channel: 0 event ('note', 49928, 8, 68, 0)
	// Note off skipped, note 68 not found in channels, probably interrupted
	// Note off skipped, note 68 not found in channels, probably interrupted
	9,185,0,	//# 3887, ticks 49980, elapsed 9, channel: 2 event ('note', 49980, 3, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	6,69,174,	//# 3889, ticks 50016, elapsed 6, channel: 0 event ('note', 50016, 1, 69, 87)
	3,73,1,	//# 3890, ticks 50036, elapsed 3, channel: 1 event ('note', 50036, 1, 73, 0)
	9,161,1,	//# 3891, ticks 50092, elapsed 9, channel: 3 event ('note', 50092, 2, 33, 0)
	0,52,167,	//# 3892, ticks 50096, elapsed 0, channel: 1 event ('note', 50096, 3, 52, 83)
	// Note off skipped, note 64 not found in channels, probably interrupted
	2,69,0,	//# 3894, ticks 50108, elapsed 2, channel: 0 event ('note', 50108, 5, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	0,71,188,	//# 3896, ticks 50112, elapsed 0, channel: 0 event ('note', 50112, 1, 71, 94)
	0,180,126,	//# 3897, ticks 50112, elapsed 0, channel: 2 event ('note', 50112, 1, 52, 63)
	// Note off skipped, note 69 not found in channels, probably interrupted
	// Note off skipped, note 69 not found in channels, probably interrupted
	9,52,1,	//# 3900, ticks 50168, elapsed 9, channel: 1 event ('note', 50168, 3, 52, 0)
	1,180,0,	//# 3901, ticks 50176, elapsed 1, channel: 2 event ('note', 50176, 1, 52, 0)
	5,74,187,	//# 3902, ticks 50208, elapsed 5, channel: 1 event ('note', 50208, 1, 74, 93)
	2,71,0,	//# 3903, ticks 50220, elapsed 2, channel: 0 event ('note', 50220, 1, 71, 0)
	12,45,170,	//# 3904, ticks 50292, elapsed 12, channel: 0 event ('note', 50292, 3, 45, 85)
	1,204,144,	//# 3905, ticks 50300, elapsed 1, channel: 2 event ('note', 50300, 5, 76, 72)
	0,204,145,	//# 3906, ticks 50300, elapsed 0, channel: 3 event ('note', 50300, 6, 76, 72)
	0,201,196,	//# 3907, ticks 50304, elapsed 0, channel: 2 event ('note', 50304, 1, 73, 98)
	0,173,141,	//# 3908, ticks 50304, elapsed 0, channel: 3 event ('note', 50304, 1, 45, 70)
	5,74,1,	//# 3909, ticks 50336, elapsed 5, channel: 1 event ('note', 50336, 1, 74, 0)
	4,45,0,	//# 3910, ticks 50364, elapsed 4, channel: 0 event ('note', 50364, 3, 45, 0)
	3,173,1,	//# 3911, ticks 50384, elapsed 3, channel: 3 event ('note', 50384, 1, 45, 0)
	2,76,178,	//# 3912, ticks 50400, elapsed 2, channel: 0 event ('note', 50400, 1, 76, 89)
	3,201,0,	//# 3913, ticks 50420, elapsed 3, channel: 2 event ('note', 50420, 1, 73, 0)
	9,64,113,	//# 3914, ticks 50472, elapsed 9, channel: 1 event ('note', 50472, 7, 64, 56)
	1,177,178,	//# 3915, ticks 50480, elapsed 1, channel: 2 event ('note', 50480, 3, 49, 89)
	2,197,179,	//# 3916, ticks 50496, elapsed 2, channel: 3 event ('note', 50496, 1, 69, 89)
	0,49,167,	//# 3917, ticks 50496, elapsed 0, channel: 1 event ('note', 50496, 1, 49, 83)
	7,76,0,	//# 3918, ticks 50540, elapsed 7, channel: 0 event ('note', 50540, 1, 76, 0)
	// Note off skipped, note 64 not found in channels, probably interrupted
	2,49,1,	//# 3920, ticks 50556, elapsed 2, channel: 1 event ('note', 50556, 1, 49, 0)
	0,177,0,	//# 3921, ticks 50556, elapsed 0, channel: 2 event ('note', 50556, 3, 49, 0)
	6,67,172,	//# 3922, ticks 50592, elapsed 6, channel: 0 event ('note', 50592, 1, 67, 86)
	0,197,1,	//# 3923, ticks 50596, elapsed 0, channel: 3 event ('note', 50596, 1, 69, 0)
	11,66,135,	//# 3924, ticks 50664, elapsed 11, channel: 1 event ('note', 50664, 7, 66, 67)
	2,178,162,	//# 3925, ticks 50680, elapsed 2, channel: 2 event ('note', 50680, 3, 50, 81)
	1,194,181,	//# 3926, ticks 50688, elapsed 1, channel: 3 event ('note', 50688, 1, 66, 90)
	0,50,127,	//# 3927, ticks 50688, elapsed 0, channel: 1 event ('note', 50688, 1, 50, 63)
	1,67,0,	//# 3928, ticks 50696, elapsed 1, channel: 0 event ('note', 50696, 1, 67, 0)
	6,194,1,	//# 3929, ticks 50736, elapsed 6, channel: 3 event ('note', 50736, 7, 66, 0)
	1,50,1,	//# 3930, ticks 50744, elapsed 1, channel: 1 event ('note', 50744, 3, 50, 0)
	6,62,188,	//# 3931, ticks 50784, elapsed 6, channel: 0 event ('note', 50784, 1, 62, 94)
	2,178,0,	//# 3932, ticks 50796, elapsed 2, channel: 2 event ('note', 50796, 1, 50, 0)
	// Note off skipped, note 66 not found in channels, probably interrupted
	10,67,157,	//# 3934, ticks 50856, elapsed 10, channel: 1 event ('note', 50856, 7, 67, 78)
	2,185,148,	//# 3935, ticks 50868, elapsed 2, channel: 2 event ('note', 50868, 3, 57, 74)
	2,192,187,	//# 3936, ticks 50880, elapsed 2, channel: 3 event ('note', 50880, 1, 64, 93)
	0,185,120,	//# 3937, ticks 50880, elapsed 0, channel: 2 event ('note', 50880, 1, 57, 60)
	5,62,0,	//# 3938, ticks 50912, elapsed 5, channel: 0 event ('note', 50912, 1, 62, 0)
	3,67,1,	//# 3939, ticks 50932, elapsed 3, channel: 1 event ('note', 50932, 7, 67, 0)
	1,185,0,	//# 3940, ticks 50940, elapsed 1, channel: 2 event ('note', 50940, 3, 57, 0)
	// Note off skipped, note 57 not found in channels, probably interrupted
	6,67,168,	//# 3942, ticks 50976, elapsed 6, channel: 0 event ('note', 50976, 1, 67, 84)
	1,192,1,	//# 3943, ticks 50984, elapsed 1, channel: 3 event ('note', 50984, 1, 64, 0)
	12,62,171,	//# 3944, ticks 51056, elapsed 12, channel: 1 event ('note', 51056, 3, 62, 85)
	0,197,142,	//# 3945, ticks 51056, elapsed 0, channel: 2 event ('note', 51056, 7, 69, 71)
	2,194,189,	//# 3946, ticks 51072, elapsed 2, channel: 3 event ('note', 51072, 1, 66, 94)
	0,190,114,	//# 3947, ticks 51072, elapsed 0, channel: 2 event ('note', 51072, 1, 62, 57)
	0,209,144,	//# 3948, ticks 51076, elapsed 0, channel: 2 event ('note', 51076, 4, 81, 72)
	0,202,120,	//# 3949, ticks 51080, elapsed 0, channel: 2 event ('note', 51080, 5, 74, 60)
	0,202,120,	//# 3950, ticks 51080, elapsed 0, channel: 2 event ('note', 51080, 6, 74, 60)
	2,67,0,	//# 3951, ticks 51096, elapsed 2, channel: 0 event ('note', 51096, 1, 67, 0)
	// Note off skipped, note 76 not found in channels, probably interrupted
	// Note off skipped, note 76 not found in channels, probably interrupted
	4,62,1,	//# 3954, ticks 51120, elapsed 4, channel: 1 event ('note', 51120, 1, 62, 0)
	// Note off skipped, note 62 not found in channels, probably interrupted
	8,69,164,	//# 3956, ticks 51168, elapsed 8, channel: 0 event ('note', 51168, 1, 69, 82)
	1,194,1,	//# 3957, ticks 51176, elapsed 1, channel: 3 event ('note', 51176, 1, 66, 0)
	6,69,0,	//# 3958, ticks 51212, elapsed 6, channel: 0 event ('note', 51212, 7, 69, 0)
	6,54,172,	//# 3959, ticks 51248, elapsed 6, channel: 0 event ('note', 51248, 3, 54, 86)
	0,69,141,	//# 3960, ticks 51252, elapsed 0, channel: 1 event ('note', 51252, 8, 69, 70)
	2,190,167,	//# 3961, ticks 51264, elapsed 2, channel: 3 event ('note', 51264, 1, 62, 83)
	0,182,168,	//# 3962, ticks 51264, elapsed 0, channel: 2 event ('note', 51264, 1, 54, 84)
	2,69,1,	//# 3963, ticks 51280, elapsed 2, channel: 1 event ('note', 51280, 1, 69, 0)
	// Note off skipped, note 69 not found in channels, probably interrupted
	6,54,0,	//# 3965, ticks 51320, elapsed 6, channel: 0 event ('note', 51320, 3, 54, 0)
	6,190,1,	//# 3966, ticks 51360, elapsed 6, channel: 3 event ('note', 51360, 1, 62, 0)
	0,72,200,	//# 3967, ticks 51360, elapsed 0, channel: 0 event ('note', 51360, 1, 72, 100)
	0,182,0,	//# 3968, ticks 51364, elapsed 0, channel: 2 event ('note', 51364, 1, 54, 0)
	13,55,167,	//# 3969, ticks 51440, elapsed 13, channel: 1 event ('note', 51440, 3, 55, 83)
	1,199,134,	//# 3970, ticks 51448, elapsed 1, channel: 2 event ('note', 51448, 8, 71, 67)
	1,199,183,	//# 3971, ticks 51456, elapsed 1, channel: 3 event ('note', 51456, 1, 71, 91)
	0,183,136,	//# 3972, ticks 51456, elapsed 0, channel: 2 event ('note', 51456, 1, 55, 68)
	4,72,0,	//# 3973, ticks 51480, elapsed 4, channel: 0 event ('note', 51480, 1, 72, 0)
	4,55,1,	//# 3974, ticks 51504, elapsed 4, channel: 1 event ('note', 51504, 3, 55, 0)
	0,199,1,	//# 3975, ticks 51504, elapsed 0, channel: 3 event ('note', 51504, 8, 71, 0)
	4,183,0,	//# 3976, ticks 51532, elapsed 4, channel: 2 event ('note', 51532, 1, 55, 0)
	// Note off skipped, note 71 not found in channels, probably interrupted
	3,67,170,	//# 3978, ticks 51552, elapsed 3, channel: 0 event ('note', 51552, 1, 67, 85)
	// Note off skipped, note 74 not found in channels, probably interrupted
	// Note off skipped, note 74 not found in channels, probably interrupted
	13,50,159,	//# 3981, ticks 51628, elapsed 13, channel: 1 event ('note', 51628, 3, 50, 79)
	2,200,120,	//# 3982, ticks 51640, elapsed 2, channel: 2 event ('note', 51640, 8, 72, 60)
	1,197,177,	//# 3983, ticks 51648, elapsed 1, channel: 3 event ('note', 51648, 1, 69, 88)
	0,178,120,	//# 3984, ticks 51648, elapsed 0, channel: 2 event ('note', 51648, 1, 50, 60)
	6,67,0,	//# 3985, ticks 51688, elapsed 6, channel: 0 event ('note', 51688, 1, 67, 0)
	// Note off skipped, note 72 not found in channels, probably interrupted
	3,50,1,	//# 3987, ticks 51708, elapsed 3, channel: 1 event ('note', 51708, 3, 50, 0)
	1,178,0,	//# 3988, ticks 51716, elapsed 1, channel: 2 event ('note', 51716, 1, 50, 0)
	4,72,202,	//# 3989, ticks 51744, elapsed 4, channel: 0 event ('note', 51744, 1, 72, 101)
	4,197,1,	//# 3990, ticks 51768, elapsed 4, channel: 3 event ('note', 51768, 1, 69, 0)
	8,74,151,	//# 3991, ticks 51816, elapsed 8, channel: 1 event ('note', 51816, 8, 74, 75)
	2,171,162,	//# 3992, ticks 51828, elapsed 2, channel: 2 event ('note', 51828, 3, 43, 81)
	2,199,185,	//# 3993, ticks 51840, elapsed 2, channel: 3 event ('note', 51840, 1, 71, 92)
	0,43,143,	//# 3994, ticks 51840, elapsed 0, channel: 1 event ('note', 51840, 1, 43, 71)
	2,79,121,	//# 3995, ticks 51852, elapsed 2, channel: 1 event ('note', 51852, 4, 79, 60)
	0,74,125,	//# 3996, ticks 51852, elapsed 0, channel: 1 event ('note', 51852, 5, 74, 62)
	0,74,125,	//# 3997, ticks 51852, elapsed 0, channel: 1 event ('note', 51852, 6, 74, 62)
	1,72,0,	//# 3998, ticks 51860, elapsed 1, channel: 0 event ('note', 51860, 1, 72, 0)
	// Note off skipped, note 81 not found in channels, probably interrupted
	7,171,0,	//# 4000, ticks 51904, elapsed 7, channel: 2 event ('note', 51904, 3, 43, 0)
	// Note off skipped, note 43 not found in channels, probably interrupted
	5,74,180,	//# 4002, ticks 51936, elapsed 5, channel: 0 event ('note', 51936, 1, 74, 90)
	0,199,1,	//# 4003, ticks 51940, elapsed 0, channel: 3 event ('note', 51940, 1, 71, 0)
	4,74,0,	//# 4004, ticks 51964, elapsed 4, channel: 0 event ('note', 51964, 8, 74, 0)
0xff };

