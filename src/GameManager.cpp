#include "GameManager.h"


GameManager* GameManager::sInstance = NULL;

GameManager* GameManager::Instance(){

	//Create a new instance if no instance was created before
	if(sInstance == NULL)
		sInstance = new GameManager();

	return sInstance;
}

void GameManager::Release(){

	delete sInstance;
	sInstance = NULL;
}

GameManager::GameManager(){

	mQuit = false;

	//Initialize SDL
	mGraphics = Graphics::Instance();

	// Quits the game if SDL fails to initialize
	if(!Graphics::Initialized())
		mQuit = true;

	mTimer = Timer::Instance();

	std::string path = SDL_GetBasePath();
	path.append("Assets/rankA.png");
	mTex = new Texture(path);
}

GameManager::~GameManager(){

    Graphics::Release();
	mGraphics = NULL;

	Timer::Release();
	mTimer = NULL;

	delete mTex;
	mTex = NULL;
}

void GameManager::Run(){

    while(!mQuit){

        //Update the timer
		mTimer->Update();

        while(SDL_PollEvent(&mEvents) != 0){
			//Checks if the user quit the game
			if(mEvents.type == SDL_QUIT) {

				mQuit = true;
			}
		}
		if(mTimer->DeltaTime() >= 1.0f / FRAME_RATE){

            mGraphics->ClearBackBuffer();

            mTex->Render();

			//printf("DeltaTime: %f\n", mTimer->DeltaTime());

			mGraphics->Render();
			mTimer->Reset();
		}
    }
}
