#ifndef _GAMEMANAGER_H
#define _GAMEMANAGER_H
// Headers
#include "Texture.h"
#include "Timer.h"

class GameManager{

    private:

        static GameManager* sInstance;

        const int FRAME_RATE = 60;

        bool mQuit;
        Graphics* mGraphics;

        Timer* mTimer;

        SDL_Event mEvents;

        Texture* mTex;

    public:

        static GameManager* Instance();
        static void Release();

        void Run();

    private:

        GameManager();
        ~GameManager();
    };

#endif
