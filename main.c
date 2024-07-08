#include <stdio.h>
#include "GIFs.h"
#include "render.h"

int main(int argc, char const *argv[]) {

	gif_t ship_in_the_sea = gif_create(LONG_GIF_LEN, 200);

	frame_t ship_f1 = frame_create(4, 12);
	frame_add_line(ship_f1, "   ⛅       ");
	frame_add_line(ship_f1, "🌊~~~~🛳~~~~~");
	frame_add_line(ship_f1, "~~~~~~~~~~~");
	frame_add_line(ship_f1, "~~~~~~~~~~~");

	frame_t ship_f2 = frame_create(4, 12);
	frame_add_line(ship_f2, "   ⛅       ");
	frame_add_line(ship_f2, "~🌊~~~🛳~~~~~");
	frame_add_line(ship_f2, "~~~~~~~~~~~");
	frame_add_line(ship_f2, "~~~~~~~~~~~");

	frame_t ship_f3 = frame_create(4, 12);
	frame_add_line(ship_f3, "   ⛅       ");
	frame_add_line(ship_f3, "~~🌊~~🛳~~~~~");
	frame_add_line(ship_f3, "~~~~~~~~~~~");
	frame_add_line(ship_f3, "~~~~~~~~~~~");

	frame_t ship_f4 = frame_create(4, 12);
	frame_add_line(ship_f4, "   ⛅       ");
	frame_add_line(ship_f4, "~~~🌊~🛳~~~~~");
	frame_add_line(ship_f4, "~~~~~~~~~~~");
	frame_add_line(ship_f4, "~~~~~~~~~~~");

	frame_t ship_f5 = frame_create(4, 12);
	frame_add_line(ship_f5, "   ⛅       ");
	frame_add_line(ship_f5, "~~~~🌊🛳~~~~~");
	frame_add_line(ship_f5, "~~~~~~~~~~~");
	frame_add_line(ship_f5, "~~~~~~~~~~~");

	frame_t ship_f6 = frame_create(4, 12);
	frame_add_line(ship_f6, "   ⛅🛳      ");
	frame_add_line(ship_f6, "~~~~~🌊~~~~~");
	frame_add_line(ship_f6, "~~~~~~~~~~~");
	frame_add_line(ship_f6, "~~~~~~~~~~~");

	frame_t ship_f7 = frame_create(4, 12);
	frame_add_line(ship_f7, "   ⛅       ");
	frame_add_line(ship_f7, "~~~~~🛳🌊~~~~");
	frame_add_line(ship_f7, "~~~~~~~~~~~");
	frame_add_line(ship_f7, "~~~~~~~~~~~");

	frame_t ship_f8 = frame_create(4, 12);
	frame_add_line(ship_f8, "   ⛅       ");
	frame_add_line(ship_f8, "~~~~~🛳~🌊~~~");
	frame_add_line(ship_f8, "~~~~~~~~~~~");
	frame_add_line(ship_f8, "~~~~~~~~~~~");

	frame_t ship_f9 = frame_create(4, 12);
	frame_add_line(ship_f9, "   ⛅       ");
	frame_add_line(ship_f9, "~~~~~🛳~~🌊~~");
	frame_add_line(ship_f9, "~~~~~~~~~~~");
	frame_add_line(ship_f9, "~~~~~~~~~~~");

	frame_t ship_f10 = frame_create(4, 12);
	frame_add_line(ship_f10, "   ⛅       ");
	frame_add_line(ship_f10, "~~~~~🛳~~~🌊~");
	frame_add_line(ship_f10, "~~~~~~~~~~~");
	frame_add_line(ship_f10, "~~~~~~~~~~~");

	frame_t ship_f11 = frame_create(4, 12);
	frame_add_line(ship_f11, "   ⛅       ");
	frame_add_line(ship_f11, "~~~~~🛳~~~~🌊");
	frame_add_line(ship_f11, "~~~~~~~~~~~");
	frame_add_line(ship_f11, "~~~~~~~~~~~");

	frame_t ship_f12 = frame_create(4, 12);
	frame_add_line(ship_f12, "   ⛅       ");
	frame_add_line(ship_f12, "~~~~~🛳~~~~~");
	frame_add_line(ship_f12, "~~~~~~~~~~~");
	frame_add_line(ship_f12, "~~~~~~~~~~~");

	gif_add_frame(&ship_in_the_sea, ship_f1);
	gif_add_frame(&ship_in_the_sea, ship_f2);
	gif_add_frame(&ship_in_the_sea, ship_f3);
	gif_add_frame(&ship_in_the_sea, ship_f4);
	gif_add_frame(&ship_in_the_sea, ship_f5);
	gif_add_frame(&ship_in_the_sea, ship_f6);
	gif_add_frame(&ship_in_the_sea, ship_f7);
	gif_add_frame(&ship_in_the_sea, ship_f8);
	gif_add_frame(&ship_in_the_sea, ship_f9);
	gif_add_frame(&ship_in_the_sea, ship_f10);
	gif_add_frame(&ship_in_the_sea, ship_f11);
	gif_add_frame(&ship_in_the_sea, ship_f12);

	render_gif(ship_in_the_sea);

	gif_t hand_bump;
	gif_t time_passing;
	gif_t wild_fire;
	gif_t wheel_chair_train;
	return 0;
}