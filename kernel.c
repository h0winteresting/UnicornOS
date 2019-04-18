#define pinkyPie 0x0d

unsigned int offsettyWetty;

int print(char *intake) {
	char *screenyWeenyPointerWointer = (char*)0xb8000;
	unsigned int loopyWoopy1 = 0;
	unsigned int loopMeDaddy = 0;

	while(intake[loopMeDaddy] != '\0') {
		screenyWeenyPointerWointer[loopyWoopy1+offsettyWetty] = intake[loopMeDaddy];
		screenyWeenyPointerWointer[loopyWoopy1+1+offsettyWetty] = pinkyPie;
		++loopMeDaddy;
		loopyWoopy1 += 2;
	}
	offsettyWetty += 160;
	return 1;
}


void rainbow(void) {
	const char *art0 = "            _       _________ _______  _______  _______  _       ";
	const char *art1 = "  |\\     /|( (    /|\\__   __/(  ____ \\(  ___  )(  ____ )( (    /|";
	const char *art2 = "  | )   ( ||  \\  ( |   ) (   | (    \\/| (   ) || (    )||  \\  ( |";
	const char *art3 = "  | |   | ||   \\ | |   | |   | |      | |   | || (____)||   \\ | |";
	const char *art4 = "  | |   | || (\\ \\) |   | |   | |      | |   | ||     __)| (\\ \\) |";
	const char *art5 = "  | |   | || | \\   |   | |   | |      | |   | || (\\ (   | | \\   |";
	const char *art6 = "  | (___) || )  \\  |___) (___| (____/\\| (___) || ) \\ \\__| )  \\  |";
	const char *art7 = "  (_______)|/    )_)\\_______/(_______/(_______)|/   \\__/|/    )_)";
	const char *art8 = "                                                               ";
	const char *art9 = "                         _______  _______           ";
	const char *art10 = "                        (  ___  )(  ____ \\       \\    ";
	const char *art11 = "                        | (   ) || (    \\/       /.(((     ";
	const char *art12 = "                        | |   | || (_____        (,/\"(((__,--.  ";
	const char *art13 = "                        | |   | |(_____  )           \\  ) _( /{ ";
	const char *art14 = "                        | |   | |      ) |            !||   :||   ";
	const char *art15 = "                        | (___) |/\\____) |            !||   :||";
	const char *art16 = "                        (_______)\\_______)            '''   '''  ";
	const char *art17 = "                                                                 ";
	unsigned int em = 17;
	char *screenyWeenyPointerWointer = (char*)0xb8000;
	unsigned int loopyWoopy = 0;

	while (loopyWoopy < 80 * 25 * 2) {
		screenyWeenyPointerWointer[loopyWoopy] = ' ';
		screenyWeenyPointerWointer[loopyWoopy + 1] = 0x0;
		loopyWoopy += 2;
	}

	//print(OwO);
	print("UnicornOS dancing on Rainbow kernel");

	print("");
	print(art0);
	print(art1);
	print(art2);
	print(art3);
	print(art4);
	print(art5);
	print(art6);
	print(art7);
	print(art8);
	print(art9);
	print(art10);
	print(art11);
	print(art12);
	print(art13);
	print(art14);
	print(art15);
	print(art16);
	print(art17);
	print("Rainbow kernel -- Version 0.0.1b");
	print("UnicornOS -- Version 0.0.0 (It doesn't exist yet)");

	return;
}
