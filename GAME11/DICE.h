#pragma once
namespace GAME11 {
	struct DICE {
		int num = 0;
		int img = 0;
		int rand = 0;
		bool setflag = false;//投げなおすならfalse、保存するならtrue

	};

	typedef struct {
		struct DICE dice[5];
	}DiceSync;
}