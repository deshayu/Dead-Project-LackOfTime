#ifndef _GRAPHICS_H
#define _GRAPHICS_H

#include <SDL2/SDL.h>
#include "SDL2/SDL_image.h"
#include <string>
#include <stdio.h>

class Graphics{

    public:

        static const int SCREEN_WIDTH = 800;
        static const int SCREEN_HEIGHT = 600;

    private:

        static Graphics* sInstance;
        static bool sInitialized;

        SDL_Window* mWindow;
        SDL_Surface* mBackBuffer;

        SDL_Renderer* mRenderer;

    public:

        static Graphics* Instance();
        static void Release();
        static bool Initialized();

        SDL_Texture* LoadTexture(std::string path);

        void ClearBackBuffer();

        void DrawTexture(SDL_Texture* tex);

        void Render();

    private:

        Graphics();
        ~Graphics();

        bool Init();
};
#endif
