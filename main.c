#include <stdio.h>
#include "GIFs.h"
#include "render.h"

int main(int argc, char const *argv[]) {

	gif_t orbit_gif = gif_from_file("./gifs/orbit.txt", 250);
	render_gif(orbit_gif);

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

	//render_gif(ship_in_the_sea);

	gif_t fist_bump = gif_create(AVG_GIF_LEN, 80);

	frame_t bump_f1 = frame_create(3, 5);
	frame_add_line(bump_f1, " ");
	frame_add_line(bump_f1, "🤜   🤛");
	frame_add_line(bump_f1, " ");

	frame_t bump_f2 = frame_create(3, 5);
	frame_add_line(bump_f2, " ");
	frame_add_line(bump_f2, " 🤜 🤛 ");
	frame_add_line(bump_f2, " ");

	frame_t bump_f3 = frame_create(3, 5);
	frame_add_line(bump_f3, " ");
	frame_add_line(bump_f3, "  🤜🤛 ");
	frame_add_line(bump_f3, " ");

	frame_t bump_f4 = frame_create(3, 5);
	frame_add_line(bump_f4, " ");
	frame_add_line(bump_f4, "   💥");
	frame_add_line(bump_f4, " ");

	frame_t bump_f5 = frame_create(3, 5);
	frame_add_line(bump_f5, " ");
	frame_add_line(bump_f5, "   🔥");
	frame_add_line(bump_f5, " ");

	frame_t bump_f6 = frame_create(3, 5);
	frame_add_line(bump_f6, " ");
	frame_add_line(bump_f6, "   🔥");
	frame_add_line(bump_f6, " ");

	frame_t bump_f7 = frame_create(3, 5);
	frame_add_line(bump_f7, " ");
	frame_add_line(bump_f7, " ");
	frame_add_line(bump_f7, " ");

	frame_t bump_f8 = frame_create(3, 5);
	frame_add_line(bump_f8, " ");
	frame_add_line(bump_f8, "🤜   🤛");
	frame_add_line(bump_f8, " ");

	gif_add_frame(&fist_bump, bump_f1);
	gif_add_frame(&fist_bump, bump_f2);
	gif_add_frame(&fist_bump, bump_f3);
	gif_add_frame(&fist_bump, bump_f4);
	gif_add_frame(&fist_bump, bump_f5);
	gif_add_frame(&fist_bump, bump_f6);
	gif_add_frame(&fist_bump, bump_f7);
	gif_add_frame(&fist_bump, bump_f8);

	// render_gif(fist_bump);

	gif_t orbit = gif_create(LONG_GIF_LEN, 250);

	frame_t orbit_f1 = frame_create(3, 5);
	frame_add_line(orbit_f1, " ");
	frame_add_line(orbit_f1, "        🌒");
	frame_add_line(orbit_f1, "    🌎    ");
	frame_add_line(orbit_f1, " ");
	frame_add_line(orbit_f1, " ");

	frame_t orbit_f2 = frame_create(3, 5);
	frame_add_line(orbit_f2, " ");
	frame_add_line(orbit_f2, " ");
	frame_add_line(orbit_f2, "    🌎   🌓");
	frame_add_line(orbit_f2, " ");
	frame_add_line(orbit_f2, " ");

	frame_t orbit_f3 = frame_create(3, 5);
	frame_add_line(orbit_f3, " ");
	frame_add_line(orbit_f3, " ");
	frame_add_line(orbit_f3, "    🌎   ");
	frame_add_line(orbit_f3, "        🌔");
	frame_add_line(orbit_f3, " ");

	frame_t orbit_f4 = frame_create(3, 5);
	frame_add_line(orbit_f4, " ");
	frame_add_line(orbit_f4, " ");
	frame_add_line(orbit_f4, "    🌎   ");
	frame_add_line(orbit_f4, " ");
	frame_add_line(orbit_f4, "      🌔");

	frame_t orbit_f5 = frame_create(3, 5);
	frame_add_line(orbit_f5, " ");
	frame_add_line(orbit_f5, " ");
	frame_add_line(orbit_f5, "    🌎   ");
	frame_add_line(orbit_f5, " ");
	frame_add_line(orbit_f5, "    🌕");

	frame_t orbit_f6 = frame_create(3, 5);
	frame_add_line(orbit_f6, " ");
	frame_add_line(orbit_f6, " ");
	frame_add_line(orbit_f6, "    🌎   ");
	frame_add_line(orbit_f6, " ");
	frame_add_line(orbit_f6, "  🌖");

	frame_t orbit_f7 = frame_create(3, 5);
	frame_add_line(orbit_f7, " ");
	frame_add_line(orbit_f7, " ");
	frame_add_line(orbit_f7, "    🌎   ");
	frame_add_line(orbit_f7, "🌖");
	frame_add_line(orbit_f7, " ");

	frame_t orbit_f8 = frame_create(3, 5);
	frame_add_line(orbit_f8, " ");
	frame_add_line(orbit_f8, " ");
	frame_add_line(orbit_f8, "🌗  🌎   ");
	frame_add_line(orbit_f8, " ");
	frame_add_line(orbit_f8, " ");

	frame_t orbit_f9 = frame_create(3, 5);
	frame_add_line(orbit_f9, " ");
	frame_add_line(orbit_f9, "🌘     ");
	frame_add_line(orbit_f9, "    🌎   ");
	frame_add_line(orbit_f9, " ");
	frame_add_line(orbit_f9, " ");

	frame_t orbit_f10 = frame_create(3, 5);
	frame_add_line(orbit_f10, "  🌘");
	frame_add_line(orbit_f10, " ");
	frame_add_line(orbit_f10, "    🌎   ");
	frame_add_line(orbit_f10, " ");
	frame_add_line(orbit_f10, " ");

	frame_t orbit_f11 = frame_create(3, 5);
	frame_add_line(orbit_f11, "    🌑");
	frame_add_line(orbit_f11, " ");
	frame_add_line(orbit_f11, "    🌎   ");
	frame_add_line(orbit_f11, " ");
	frame_add_line(orbit_f11, " ");

	frame_t orbit_f12 = frame_create(3, 5);
	frame_add_line(orbit_f12, "      🌒");
	frame_add_line(orbit_f12, " ");
	frame_add_line(orbit_f12, "    🌎   ");
	frame_add_line(orbit_f12, " ");
	frame_add_line(orbit_f12, " ");

	gif_add_frame(&orbit, orbit_f1);
	gif_add_frame(&orbit, orbit_f2);
	gif_add_frame(&orbit, orbit_f3);
	gif_add_frame(&orbit, orbit_f4);
	gif_add_frame(&orbit, orbit_f5);
	gif_add_frame(&orbit, orbit_f6);
	gif_add_frame(&orbit, orbit_f7);
	gif_add_frame(&orbit, orbit_f8);
	gif_add_frame(&orbit, orbit_f9);
	gif_add_frame(&orbit, orbit_f10);
	gif_add_frame(&orbit, orbit_f11);
	gif_add_frame(&orbit, orbit_f12);

	//render_gif(orbit);
	return 0;
}