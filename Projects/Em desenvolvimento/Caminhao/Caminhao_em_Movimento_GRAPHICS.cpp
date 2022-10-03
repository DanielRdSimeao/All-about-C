#include <graphics.h>
#include <dos.h>

// +IDEIA: Deixar o usuario escolher quantas repetições quer ver e qual
// a velocidade desejada do caminhão.

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
//      circle    (175+i, 410, 2); // RODA 1 (meio)
      circle    (120+i, 410, 10); // RODA 2
//      circle    (120+i, 410, 2); // RODA 2 (meio)
      
      line      (40+i, 405, 90+i, 405);
      line      (40+i, 410, 90+i, 410);
      line      (40+i, 410, 40+i, 400);
      line      (90+i, 410, 90+i, 400);
      
      circle    (15+i, 410, 10); // RODA 3
//      circle    (15+i, 410, 2); // RODA 3 (meio)
      circle    (-10+i, 410, 10); // RODA 4
//      circle    (-10+i, 410, 2); // RODA 4 (meio)
      
      
	  setcolor  (j);
      delay     (85);
    

      if ( j == 15 )
         j = 2;

      cleardevice (); // Limpa tela
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
      
      settextstyle(GOTHIC_FONT, 0, 22); // 0 or HORIZ_DIR
      outtextxy  (-15+i, 340, "GitHub:");
      outtextxy  (-15+i, 360, "DanielRdSimeao");
      
      circle    (-55+i, 410, 10); // RODA 1
//      circle    (-55+i, 410, 2); // RODA 1 (meio)
      circle    (5+i, 410, 10); // RODA 2
//      circle    (5+i, 410, 2); // RODA 2 (meio)
      
      line      (30+i, 405, 90+i, 405);
      line      (30+i, 410, 90+i, 410);
      line      (30+i, 410, 30+i, 400);
      line      (90+i, 410, 90+i, 400);
      
      circle    (110+i, 410, 10); // RODA 3
//      circle    (110+i, 410, 2); // RODA 3 (meio)
      circle    (135+i, 410, 10); // RODA 4
//      circle    (135+i, 410, 2); // RODA 4 (meio)
      
      
	  setcolor  (j);
      delay     (85); // 85


      if ( j == 15 )
		 j = 2;

      cleardevice (); // Limpa tela
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

//   int gd=DETECT, gm;
//   initgraph (&gd, &gm, "C:\\TC\\BGI");
   initwindow (650, 500, "Caminhão em Movimento");
   
   settextstyle (GOTHIC_FONT, HORIZ_DIR, 2); // HORIZ_DIR or 0;
   outtextxy (75, 240, "Pressione qualquer tecla para ver o");
   outtextxy (150, 270, "caminhão em movimento");
   getch ();

// ACRESENTAR ALGO AQUI:
   RepeticaoCaminhao (5);
   //CaminhaoIda();
   //CaminhaoVolta();

   getch ();
   closegraph ();
   return 0;
}
