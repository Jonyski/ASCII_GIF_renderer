#include <stdlib.h>
#include <string.h>
#include "GIFs.h"

frame_t frame_create(int height, int width) {
	frame_t new_frame;
	// + 1 because of the null terminator and * 3 as a hacky way
	// to handle multy-byte characters, such as emojis (i'll solve it in a neat way later Kappa)
	new_frame.img = malloc(3 * sizeof(char) * (width * height + 1)); 
	if(new_frame.img == NULL) {
		exit(1);
	}
	new_frame.height = height;
	new_frame.width = width;
	return new_frame;
}

void frame_add_line(frame_t frame, char *line) {
	strcat(frame.img, line);
	strcat(frame.img, "\n");
}

gif_t gif_create(int len, long int dt) {
	gif_t new_gif;
	new_gif.frames = malloc(sizeof(frame_t) * len);
	if(new_gif.frames == NULL) {
		exit(1);
	}
	new_gif.next_frame = 0;
	new_gif.length = len;
	new_gif.dt = dt;
	return new_gif;
}

void gif_add_frame(gif_t *gif, frame_t frame)  {
	if(gif->next_frame >= gif->length) {
		exit(1);
	}
	gif->frames[gif->next_frame] = frame;
	gif->next_frame++;
}