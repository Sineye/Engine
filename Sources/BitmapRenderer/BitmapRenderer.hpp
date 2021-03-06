#ifndef __BITMAPRENDERER_H__
#define __BITMAPRENDERER_H__

#include <SDL.h>

class BitmapRenderer
{
public:
    static void draw_bitmap( SDL_Texture *bitmap, int pos_x, int pos_y, int size_x, int size_y, float rot, SDL_RendererFlip flip = SDL_FLIP_NONE );
    static void draw_bitmap( SDL_Texture *bitmap, SDL_Rect clipRect, int pos_x, int pos_y, int size_x, int size_y, float rot, SDL_RendererFlip flip = SDL_FLIP_NONE );
};

#endif // __BITMAPRENDERER_H__