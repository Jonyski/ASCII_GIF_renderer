#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "GIFs.h"

void render_gif(gif_t gif) {
	int i = 0;
	while(1) {
		system("clear");
		printf("\n\n%s\n\n", gif.frames[i % gif.length].img);
		i = i == gif.length ? 1 : i+1;
		usleep(gif.dt * 1000);
	}
}