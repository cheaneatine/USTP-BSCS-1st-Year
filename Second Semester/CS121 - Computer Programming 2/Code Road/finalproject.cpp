#include <graphics.h>
#include <iostream>
using namespace std;

int main(){
	int page = 1;
	int sp;
	
	cout << "INPUT SPEED: " << endl;
	cin >> sp;
	 
	initwindow(1000,800);
	
	int i = 0, j,maxx;
	maxx = getmaxx();
	for(int i = 0; i < maxx; i ++){
		setactivepage(page);
		setvisualpage(1-page);
		cleardevice();
		int cloudc = 7;
		setcolor(7);
		setfillstyle(SOLID_FILL,7);

		///clouds
		rectangle(0 +i*2, 20, 50 +i*2, 30);
		floodfill(1 + i*2, 21, cloudc);
		rectangle(25 + i*2, 30, 75 +i*2, 40);
		floodfill(26 + i*2, 31, cloudc);
		rectangle(-90 + i*2, 10, -145 +i*2, 28);
		floodfill(-91 + i*2, 11, cloudc);
		rectangle(-1000 + i*4, 50, -1060 + i*4, 65);
		floodfill(-1001 + i*4, 51, cloudc);
		rectangle(-800 + i*3, 40, -850 + i*3, 55);
		floodfill(-801 + i*3, 41, cloudc);
		rectangle(-500 + i*2, 25, -530 + i*2, 40);
		floodfill(-501, 26, cloudc);
		rectangle(-140 +i*3, 65, -180 +i*3, 80);
		floodfill(-141 + i*3, 66, cloudc);
		rectangle(900+i*2, 30, 980 + i*2, 60);
		floodfill(901 + i*2, 31, cloudc);
		rectangle(750 +i*2, 10, 810 + i*2, 25);
		floodfill(751 + i*2, 11, cloudc);
		rectangle(500 + i*2, 20, 560 +i*2, 45);
		floodfill(501 + i*2, 21, cloudc);
		rectangle(250 + i*3, 40, 330 + i*3, 60);	
		floodfill(251 + i*3, 41, cloudc);
		rectangle(-570 + i*3, 60, -620 + i*3, 80);
		floodfill(-571 + i*3, 61, cloudc);
		rectangle(-700 +i*2, 70, -760 +i*2, 90);
		floodfill(-701 +i*2, 71, cloudc);
		rectangle(195 +i*4, 90, 255 +i*4, 115);
		floodfill(196 + i*4, 91, cloudc);
		rectangle(-400 +i*2, 10, -500 +i*2, 25);
		floodfill(-401 +i*2, 11, cloudc);
		rectangle(-1050 + i*3, 30, -1070 + i*3, 50);
		floodfill(-1051, 31, cloudc);		
		rectangle(-1100 + i*2, 35, -1144 + i*2, 50);
		floodfill(-1101, 36, cloudc);
		rectangle(-1105 + i*3, 5, -1132 + i*3, 16);
		floodfill(-1106, 6, cloudc);
	
		delay(15);
		
		// building y size length
		int Bysize = 440;
		
		//backbuildings
		int backg = 1;
		setcolor(backg); 
		setfillstyle(SOLID_FILL, backg);
		rectangle(0, 245, maxx, Bysize);		
		floodfill(1, 246, backg);
		rectangle(0, 220, 35, Bysize);
		floodfill(1, 221, backg);	
		rectangle(35, 190, 90, Bysize); 
		floodfill(36, 191, backg);
		rectangle(100, 220, 140, Bysize);
		floodfill(101, 221, backg);
		rectangle(140, 200, 170, Bysize);
		floodfill(141, 201, backg);
		rectangle(185, 220, 240, Bysize);
		floodfill(186, 221, backg);
		rectangle(240, 200, 300, Bysize);
		floodfill(241, 201, backg);
		rectangle(320, 225, 370, Bysize);
		floodfill(321, 226, backg);		
		rectangle(380, 210, 450, Bysize);
		floodfill(381, 211, backg);
		rectangle(450, 220, 610, Bysize);
		floodfill(451, 221, backg);
		rectangle(500, 195, 550, 220);
		floodfill(501, 196 , backg);
		rectangle(600, 210, 650, Bysize);
		floodfill(601, 211, backg);
		rectangle(700, 205, 770, Bysize);
		floodfill(701, 206, backg);
		rectangle(770, 225, 830, Bysize);
		floodfill(771, 226, backg);
		rectangle(840, 200, 890, Bysize);
		floodfill(841, 201, backg);
		rectangle(895, 225, 940, Bysize);
		floodfill(896, 226, backg);
		rectangle(940, 210, 1000, Bysize);
		floodfill(941, 211, backg);

		// middleground building
		int mbackg = 9;	
		setcolor(mbackg);
		setfillstyle(SOLID_FILL, mbackg);
		rectangle(0, 300, maxx, Bysize);
		floodfill(1, 301, mbackg);
		rectangle(0, 260, 20, Bysize);
		floodfill(1, 261, mbackg);
		rectangle(20, 250, 45, Bysize);
		floodfill(21, 251, mbackg); 
		rectangle(55, 270, 90, Bysize);
		floodfill(56, 271, mbackg);
		rectangle(90, 265, 125, Bysize);
		floodfill(91, 266, mbackg);
		rectangle(125, 285, 180, Bysize);
		floodfill(126, 286, mbackg);
		rectangle(200, 265, 240, Bysize);
		floodfill(201, 266, mbackg);
		rectangle(255, 265, 280, Bysize);
		floodfill(256, 266, mbackg);
		rectangle(280, 250, 335, Bysize);
		floodfill(281, 251, mbackg);
		rectangle(350, 275, 420, Bysize);
		floodfill(351, 276, mbackg);
		rectangle(435, 265, 460, Bysize);
		floodfill(436, 266, mbackg);
		rectangle(460, 245, 480, Bysize);
		floodfill(461, 246, mbackg);
		rectangle(490, 280, 560, Bysize);
		floodfill(491, 281, mbackg);
		rectangle(580, 270, 630, Bysize);
		floodfill(581, 271, mbackg);
		rectangle(630, 250, 680, Bysize);
		floodfill(631, 251, mbackg);
		rectangle(680, 280, 715, Bysize);
		floodfill(681, 281, mbackg);
		rectangle(725, 270, 755, Bysize);
		floodfill(726, 271, mbackg);
		rectangle(755, 255, 800, Bysize);
		floodfill(756, 256, mbackg);
		rectangle(815, 270, 850, Bysize);
		floodfill(816, 271, mbackg);
		rectangle(850, 280, 890, Bysize);
		floodfill(851, 281, mbackg);
		rectangle(900, 255, 930, Bysize);
		floodfill(901, 256, mbackg);
		rectangle(930, 270, 960, Bysize);
		floodfill(931, 271, mbackg);
		rectangle(975, 260, maxx, Bysize);
		floodfill(976, 261, mbackg);
		
		//foreground
		int fbgc = 0;
		setcolor(fbgc);
		setfillstyle(SOLID_FILL, fbgc);
		
		rectangle(0, 351, maxx, Bysize);
		floodfill(1, 352, fbgc);
		rectangle(0, 315, 20, Bysize);
		floodfill(1, 316, fbgc);
		rectangle(30, 325, 100, Bysize);
		floodfill(31, 326, fbgc);	
		rectangle(110, 305, 170, Bysize);
		floodfill(111, 306, fbgc);		
		rectangle(185, 315, 250, Bysize);
		floodfill(186, 316, fbgc);
		rectangle(250, 300, 310, Bysize);
		floodfill(251, 301, fbgc);
		rectangle(325, 310, 380, Bysize);
		floodfill(326, 311, fbgc);
		rectangle(390, 320, 445, Bysize);
		floodfill(391, 321, fbgc);
		rectangle(450, 305, 510, Bysize);
		floodfill(451, 306, fbgc);
		rectangle(515, 315, 560, Bysize);
		floodfill(516, 316, fbgc);
		rectangle(570, 325, 619, Bysize);
		floodfill(571, 326, fbgc);
		rectangle(619, 295, 643, Bysize);
		floodfill(620, 296, fbgc);
		rectangle(650, 298, 688, Bysize);
		floodfill(651, 299, fbgc);
		rectangle(710, 337, 743, Bysize);
		floodfill(711, 338, fbgc);
		rectangle(743, 300, 788, Bysize);
		floodfill(744, 301, fbgc);
		rectangle(788, 315, 820, Bysize);
		floodfill(789, 316, fbgc);
		rectangle(833, 285, 849, Bysize);
		floodfill(834, 286, fbgc);
		rectangle(849, 305, 878, Bysize);
		floodfill(850, 306,fbgc);
		rectangle(895, 330, 920, Bysize);
		floodfill(896, 331, fbgc);
		rectangle(920, 315, 950, Bysize);
		floodfill(921, 316, fbgc);
		rectangle(960, 340, 1000, Bysize);
		floodfill(961, 341, fbgc);
		
		// details for the background
		int col = 0;
		setcolor(col);
		setfillstyle(SOLID_FILL, col);

		rectangle(0, 390, 20, Bysize);
		floodfill(1, 391, col);
		rectangle(20, 420, 43, Bysize);
		floodfill(21, 421, col);
		rectangle(43, 400, 77, Bysize);
		floodfill(44, 401, col);
		rectangle(77, 407, 95, Bysize);
		floodfill(78, 408, col);
		rectangle(95, 415, 128, Bysize);
		floodfill(96, 416, col);
		rectangle(128, 398, 155, Bysize);
		floodfill(129, 399, col);
		rectangle(155, 417, 165, Bysize);
		floodfill(156, 418, col);
		rectangle(165, 430, 182, Bysize);
		floodfill(166, 431, col);
		rectangle(369, 438, 402, Bysize);
		floodfill(370, 439, col);
		rectangle(402, 419, 435, Bysize);
		floodfill(403, 420, col);
		rectangle(435, 430, 455, Bysize);
		floodfill(436, 431, col);
		rectangle(455, 402, 490, Bysize);
		floodfill(456, 403, col);
		rectangle(490, 380, 500, Bysize);
		floodfill(491, 381, col);
		rectangle(500, 425, 530, Bysize);
		floodfill(501, 426, col);
		rectangle(530, 413, 555, Bysize);
		floodfill(531, 414, col);
		rectangle(555, 390, 594, Bysize);
		floodfill(556, 391, col);
		rectangle(594, 429, 609, Bysize);
		floodfill(595, 430, col);
		rectangle(609, 415, 634, Bysize);
		floodfill(610, 416, col);
		rectangle(634, 442, 655, Bysize);
		floodfill(635, 443, col);
		rectangle(795, 433, 824, Bysize);
		floodfill(796, 434, col);
		rectangle(824, 420, 852, Bysize);
		floodfill(825, 421, col);
		rectangle(852, 398, 872, Bysize);
		floodfill(853, 399, col);
		rectangle(872, 395, 906, Bysize);
		floodfill(873, 396, col);
		rectangle(906, 418, 934, Bysize);
		floodfill(907, 419, col);
		rectangle(934, 410, 957, Bysize);
		floodfill(935, 411, col);
		rectangle(957, 400, 980, Bysize);
		floodfill(958, 401, col);
		rectangle(980, 411, 990, Bysize);
		floodfill(981, 412, col);
		rectangle(990, 390, maxx, Bysize);
		floodfill(991, 391, col);
		
		// first wheel
		int carcolor = 8;
		setcolor(carcolor);
		setfillstyle(SOLID_FILL, carcolor);
		pieslice(1 + i*sp, 570, 0 - i*sp, 90 - i*sp, 30);
		pieslice(1 + i*sp, 570, 180 - i*sp, 270 - i*sp, 30);
		circle(1 + i*sp , 570, 30);
		arc(1 + i*sp, 570, 0, 180, 35);
		
		// second wheel
		pieslice(250 + i*sp, 570, 0 - i*sp, 90 - i*sp, 30);
		pieslice(250 + i*sp, 570, 180 - i*sp, 270 - i*sp, 30);
		circle(250 + i*sp, 570, 30);
		arc(250 + i*sp, 570, 0, 180, 35);
		
		// car
		line(36 + i*sp, 570, 215 + i*sp, 570);	// center
		line(-76 + i*sp, 570, -33 + i*sp, 570);	// back
		line(-76 + i*sp, 520, -76 + i*sp, 570); // back height
		line(335 + i*sp, 570, 285 + i*sp, 570);	// front
		line(336 + i*sp, 570, 336 + i*sp, 535); // front height
		line(336 + i*sp, 535, 240 + i*sp, 510); // front slant
		line(240 + i*sp, 510, 195 + i*sp, 455); // front window
		line(-8 + i*sp, 455, 195 + i*sp, 455); // ceiling
		line(-8 + i*sp, 455, -33 + i*sp, 500); // back slant
		line(-76 + i*sp, 520, -33 + i*sp, 500); // trunk
		
		// windows
		line(95 + i*sp, 464, 95 + i*sp, 510); // middle front line
		line(95 + i*sp, 510, 230 + i*sp, 510); // lower front line
		line(230 + i*sp, 510, 195 + i*sp, 464); // front line slant
		line(95 + i*sp, 464, 195 + i*sp, 464); // front line middle
		line(89 + i*sp, 464, 89 + i*sp, 510); // middle back line
		line(-30 + i*sp, 510, 89 + i*sp, 510); // lower back line
		line(-6 + i*sp, 464, -32 + i*sp, 510); // lower back slant
		line(-5 + i*sp, 464, 89 + i*sp, 464); // back line middle		 
		
		circle(135 + i*sp, 490, 20);
		
		line(0, 445, maxx, 445); 
	
		setcolor(WHITE);
		setfillstyle(SOLID_FILL, WHITE);
		line(0, 600, maxx, 600); // road
		// text
		outtextxy(450, 620, "THE MOVING CAR");
		
		page = 1-page;
	}
	
	getch();
	closegraph();
	return 0;
	
}

