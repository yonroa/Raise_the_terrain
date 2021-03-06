#ifndef _GRID_H_
#define _GRID_H_

#include <SDL2/SDL.h>

typedef struct SDL_Instance
{
	SDL_Window *window;
	SDL_Renderer *renderer;
} SDL_Instance;

int init_instance(SDL_Instance *instance);
void draw_stuff(SDL_Instance instance);
int poll_events();

#endif
