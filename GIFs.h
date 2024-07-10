#ifndef GIFS_H
#define GIFS_H

#define MIN_GIF_LEN 2
#define SHORT_GIF_LEN 4
#define AVG_GIF_LEN 8
#define LONG_GIF_LEN 12
#define MAX_GIF_LEN 16

typedef char* img_t;

typedef struct {
	int height;
	int width;
	char *img;
} frame_t; // frames are strings

typedef struct {
	long int dt; // time in ms between each frame
	int length; // number of frames
	int next_frame; // offset to the next empty frame
	frame_t *frames; // array of frames
} gif_t;

frame_t frame_create(int height, int width); // allocates a height X width sized string and returns a frame
void frame_add_line(frame_t frame, char *line); // adds content to a frame line by line (top to bottom)
gif_t gif_create(int len, long int dt); // creates an empty gif
void gif_add_frame(gif_t *gif, frame_t frame); // adds a frame to the frames array
gif_t gif_from_file(char *path, long int dt); // creates a gif based on a file in a specific format
void free_frames(gif_t *gif);
void free_gif(gif_t *gif);

#endif