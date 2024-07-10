#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <termios.h>
#include <unistd.h>
#include <ctype.h>
#include "render.h"
#include "GIFs.h"

volatile int interrupt = 0; // dictates when the gif stops

void render_gif(gif_t gif) {
	interrupt = 0;
	pthread_t check_interrupt;
	pthread_create(&check_interrupt, NULL, check_keypress, NULL);

	int i = 0;
	while(!interrupt) {
		system("clear");
		printf("\n%s\n", gif.frames[i % gif.length].img);
		i = i == gif.length ? 1 : i+1;
		usleep(gif.dt * 1000);
	}

	pthread_join(check_interrupt, NULL);
}

void *check_keypress(void *arg) {
	struct termios old_conf, new_conf;
	tcgetattr(STDIN_FILENO, &old_conf);
	new_conf = old_conf;
	new_conf.c_lflag &= ~(ICANON | ECHO); // turns off canon mode and input echo
	tcsetattr(STDIN_FILENO, TCSANOW, &new_conf);
	
	// interrupt the gif if a key is pressed
	while(!interrupt) {
		if(getchar()) {
			interrupt = 1;
		}
	}

	tcsetattr(STDIN_FILENO, TCSANOW, &old_conf);
	return NULL;
}