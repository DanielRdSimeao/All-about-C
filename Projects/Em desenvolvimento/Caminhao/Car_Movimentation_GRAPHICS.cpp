#include <graphics.h>
#include <dos.h>

void CaminhaoIda () {
	int i, j=0;
	for ( i=-250; i<=680; i+=10, j++ ) // IDA
   {
   	//rectangle(int esquerda, int cima, int direita, int baixo);
	
	//line for x1, y1, x2, y2
	//começo, posição1, fim, posição2
    
	  line (0, 420, 650, 420);
	
      rectangle (150+i, 350, 200+i, 400); // CABINE
      rectangle (-30+i, 325, 150+i, 400); // CORPO
      
      settextstyle(GOTHIC_FONT, 0, 22);
      outtextxy  (-15+i, 340, "DISCORD:");
      outtextxy  (-15+i, 360, "SIR TORTUGA#4015");
      
      circle    (175+i, 410, 10); // RODA 1
      circle    (120+i, 410, 10); // RODA 2
      
      line      (40+i, 405, 90+i, 405);
      line      (40+i, 410, 90+i, 410);
      line      (40+i, 410, 40+i, 400);
      line      (90+i, 410, 90+i, 400);
      
      circle    (15+i, 410, 10); // RODA 3
      circle    (-10+i, 410, 10); // RODA 4
      
      
	  setcolor  (j);
      delay     (85);
    

      if ( j == 15 )
         j = 2;

      cleardevice (); // clear screen
   }
}

void CaminhaoVolta () {
	int i, j=0;
	for (i=780; i>=-200; i-=10, j++) // VOLTA
   {
   	//line for x1, y1, x2, y2
	//começo, posição1, fim, posição2
      line (0, 420, 650, 420);
   	
	//rectangle(int esquerda, int cima, int direita, int baixo);
      rectangle (-30+i, 350, -80+i, 400); // CABINE
      rectangle (-30+i, 325, 150+i, 400); // CORPO
      
      settextstyle(GOTHIC_FONT, 0, 22);
      outtextxy  (-15+i, 340, "GitHub:");
      outtextxy  (-15+i, 360, "DanielRdSimeao");
      
      circle    (-55+i, 410, 10); // RODA 1
      circle    (5+i, 410, 10); // RODA 2
      
      line      (30+i, 405, 90+i, 405);
      line      (30+i, 410, 90+i, 410);
      line      (30+i, 410, 30+i, 400);
      line      (90+i, 410, 90+i, 400);
      
      circle    (110+i, 410, 10); // RODA 3
      circle    (135+i, 410, 10); // RODA 4
      
      
	  setcolor  (j);
      delay     (85);


      if ( j == 15 )
		 j = 2;

      cleardevice (); // clear screen
   }
}

void RepeticaoCaminhao (int qtdRpCm) {
	int i;
	for (i=1; i<=qtdRpCm; i++) {
		CaminhaoIda();
		CaminhaoVolta();
	}
}

int main()
{

   int gd=DETECT, gm;
//   initgraph (&gd, &gm, "C:\\TC\\BGI");
   initwindow (650, 600, "Car Movimentation");
   
   settextstyle (GOTHIC_FONT, HORIZ_DIR, 2);
   outtextxy (75, 240, "Press any key to view the moving car");
   getch ();

   RepeticaoCaminhao (1);
   //CaminhaoIda();
   //CaminhaoVolta();

   getch ();
   closegraph ();
   return 0;
}
