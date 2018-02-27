#include<allegro5\allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include<allegro5/allegro_image.h>
#include<allegro5\allegro_primitives.h>
#include<allegro5/allegro_audio.h>
#include<allegro5/allegro_acodec.h>
#include <iostream>
using namespace std;

int main() {

	ALLEGRO_DISPLAY *gamewindow = NULL;
	ALLEGRO_SAMPLE *sample = NULL;
	ALLEGRO_SAMPLE *sample2 = NULL;

	al_init();
	al_init_image_addon();
	al_init_font_addon();
	al_init_ttf_addon();
	al_init_primitives_addon();
	al_install_audio();
	al_init_acodec_addon();
	al_reserve_samples(2);

	sample = al_load_sample("cheering.wav");
	sample2 = al_load_sample("drums.wav");
	//al_play_sample(sample, 1.0, 0.0, 1, ALLEGRO_PLAYMODE_LOOP, NULL);
	al_play_sample(sample2, 1.0, 0.0, 1, ALLEGRO_PLAYMODE_LOOP, NULL);
	ALLEGRO_FONT *font = al_load_ttf_font("Amatic-Bold.ttf", 72, 0);
	int score = 40;

	ALLEGRO_BITMAP *EriksPic = al_load_bitmap("stpatricksday.jpg");
	gamewindow = al_create_display(640, 480);

	al_set_window_position(gamewindow, 200, 200);

	al_set_window_title(gamewindow, "LOVING ANIME");





	//render section///////////////////////////////////////////

	al_clear_to_color(al_map_rgb(50, 10, 70));
	al_draw_bitmap(EriksPic, 0, 0, 0);
	al_draw_text(font, al_map_rgb(255, 255, 255), 640 / 2, (480 / 4), ALLEGRO_ALIGN_CENTRE, "To Brother, From Erik");
	al_draw_filled_circle(125, 350, 70, al_map_rgb(255, 215, 0));

	al_draw_filled_circle(400, 350, 50, al_map_rgb(255, 215, 0));

	



	
	al_flip_display();

	//////////////////////////////////////////////////////////////

	al_rest(10.0);

	al_destroy_display(gamewindow);
	al_destroy_sample(sample);
	return 0;

}