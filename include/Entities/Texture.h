#ifndef _TEXTURE_H
#define _TEXTURE_H
#include "GameEntity.h"
#include "Graphics.h"

class Texture : public GameEntity{

    private:

        SDL_Texture* mTex;

        Graphics* mGraphics;

    public:

        Texture(std::string path);
        ~Texture();

        virtual void Render();
};

#endif // _TEXTURE_H
