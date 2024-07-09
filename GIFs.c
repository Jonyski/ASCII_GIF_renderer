#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "GIFs.h"

frame_t frame_create(int height, int width) {
	frame_t new_frame;
	// + 1 because of the null terminator and * 4 as a hacky way
	// to handle multy-byte characters, such as emojis (i'll solve it in a neat way later Kappa)
	new_frame.img = malloc(4 * sizeof(char) * (width * height + 1)); 
	if(new_frame.img == NULL) {
		exit(1);
	}
	new_frame.height = height;
	new_frame.width = width;
	return new_frame;
}

void frame_add_line(frame_t frame, char *line) {
	strcat(frame.img, line);
	if(line[strlen(line) - 1] != '\n') {
		strcat(frame.img, "\n"); // adds a \n if there's not already one
	}
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

gif_t gif_from_file(char *path, long int dt) {
	/* the file must be formatted in the following way:
	- line 1: height of the gif (base 10)
	- line 2: width of the canvas (base 10)
	- line 3: number of frames in the gif (base 10)
	- line 4: blank
	- line 5 onward: every sequence [heigth + 1] lines must have a frame (in UTF-8) folowed by a blank line
	*/

	FILE *file = fopen(path, "r");

	int frame_height;
	{
		char h[10];
		fgets(h, sizeof(h), file);
		frame_height = atoi(h);	
	}
	int frame_width;
	{
		char w[10];
		fgets(w, sizeof(w), file);
		frame_width = atoi(w);
	}
	int gif_length;
	{
		char l[10];
		fgets(l, sizeof(l), file);
		gif_length = atoi(l);
	}

	gif_t gif = gif_create(gif_length, dt);
	gif.length = gif_length;

	for(int i = 0; i < gif_length; i++) {

		frame_t *new_frame = malloc(sizeof(frame_t));
		*new_frame = frame_create(frame_height, frame_width);

		for(int j = 0; j < frame_height; j++){

			// * 4 because of multi-byte chars or whatever 
			// (I tried using wchar_t but it is too broken, sorry)
			char line[frame_width * 4 + 1];
			fgets(line, sizeof(line), file);
			if(j == 0) continue; // because every j-th line is empty
			frame_add_line(*new_frame, line);
		}
		gif_add_frame(&gif, *new_frame);
	}
	fclose(file);
	return gif;

}