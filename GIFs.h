#ifndef GIFS_H
#define GIFS_H

#define MIN_GIF_LEN 2
#define SHORT_GIF_LEN 4
#define AVG_GIF_LEN 8
#define LONG_GIF_LEN 12
#define MAX_GIF_LEN 16

typedef char* img_t;

typedef struct {
	char *img;
	int height;
	int width;
} frame_t; // frames are strings

typedef struct {
	frame_t *frames; // array of frames
	int next_frame; // offset to the next empty frame
	int length; // number of frames
	long int dt; // time in ms between each frame
} gif_t;

frame_t frame_create(int height, int width); // allocates a height X width sized string and returns a frame
void frame_add_line(frame_t frame, char *line); // adds content to a frame (top to bottom)
gif_t gif_create(int len, long int dt); // creates an empty gif
void gif_add_frame(gif_t *gif, frame_t frame); // adds a frame to the frames array

#endif