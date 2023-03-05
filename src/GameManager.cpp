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
}

GameManager::~GameManager(){
    
    Graphics::Release();
	mGraphics = NULL;
}

void GameManager::Run(){
    
    while(!mQuit){

        while(SDL_PollEvent(&mEvents) != 0){
			//Checks if the user quit the game
			if(mEvents.type == SDL_QUIT) {

				mQuit = true;
			}
            mGraphics->Render();
		}
    }
}