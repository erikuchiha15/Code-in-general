#include <allegro5/allegro.h>
#include <allegro5\allegro_primitives.h>
//copy paste under #includes
class brick {
private:
	int x;
	int y;
public:
	void initBrick(int num1, int num2);
	void drawBrick();
};
enum MYKEYS {
	KEY_UP, KEY_DOWN, KEY_LEFT, KEY_RIGHT
};

int main() {
	al_init();
	al_init_primitives_addon();
	ALLEGRO_DISPLAY *Breakout = al_create_display(900, 900);
	ALLEGRO_BITMAP *bouncer = NULL;
	//copy all these bricks in main, above game loop!
	brick b1;
	brick b2;
	brick b3;
	brick b4;
	brick b5;
	brick b6;
	brick b7;
	brick b8;
	brick b9;
	brick b10;
	brick b11;
	brick b12;
	brick b13;
	brick b14;
	brick b15;
	brick b16;
	brick b17;
	brick b18;
	brick b19;
	brick b20;

	//anywhere in main, above game loop
	b1.initBrick(200, 400);
	b2.initBrick(190, 400);
	b3.initBrick(180, 400);
	b4.initBrick(170, 400);
	b5.initBrick(160, 400);
	b6.initBrick(150, 350);
	b7.initBrick(140, 350);
	b8.initBrick(130, 350);
	b9.initBrick(120, 350);
	b10.initBrick(110, 350);
	b11.initBrick(100, 300);
	b12.initBrick(90, 300);
	b13.initBrick(80, 300);
	b14.initBrick(70, 300);
	b15.initBrick(60, 300);
	b16.initBrick(50, 250);
	b17.initBrick(40, 250);
	b18.initBrick(30, 250);
	b19.initBrick(20, 250);
	b20.initBrick(10, 250);


	//paste into render section (if redraw ==true)
	//under the clear to color
	b1.drawBrick();
	b2.drawBrick();
	b3.drawBrick();
	b4.drawBrick();
	b5.drawBrick();
	b6.drawBrick();
	b7.drawBrick();
	b8.drawBrick();
	b9.drawBrick();
	b10.drawBrick();
	b11.drawBrick();
	b12.drawBrick();
	b13.drawBrick();
	b14.drawBrick();
	b15.drawBrick();
	b16.drawBrick();
	b17.drawBrick();
	b18.drawBrick();
	b19.drawBrick();
	b20.drawBrick();
	al_flip_display();
	al_rest(5);
}

//paste under main
void brick::initBrick(int num1, int num2) {
	x = num1;
	y = num2;
}
void brick::drawBrick() {
	al_draw_filled_rectangle(x, y, x + 80, y + 30, al_map_rgb(50, 50, 120));
}
