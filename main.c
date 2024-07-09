#include <stdio.h>
#include "GIFs.h"
#include "render.h"

int main(int argc, char const *argv[]) {

	gif_t orbit = gif_from_file("./gifs/orbit.txt", 250);
	gif_t fist_bump = gif_from_file("./gifs/fist_bump.txt", 100);
	gif_t ship_in_the_sea = gif_from_file("./gifs/ship_in_the_sea.txt", 200);
	render_gif(orbit);
	// render_gif(fist_bump);
	// render_gif(ship_in_the_sea);

	return 0;
}