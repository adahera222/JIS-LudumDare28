#include "GameObjectCtrlr.h"

#include "GameObject.h"

#include <iostream>

// Singleton ================================================

// Constructor
GameObjectCtrlr::GameObjectCtrlr()
{
	// Setup stuff here
}

// Public singleton instance getter
GameObjectCtrlr* GameObjectCtrlr::getInstance()
{
	std::cout << "Getting GameObjectCtrlr." << std::endl;
	return GameObjectCtrlr::privGetInstance();
}

// Private singleton handler
GameObjectCtrlr* GameObjectCtrlr::privGetInstance()
{
	// Static object only initializes once
	static GameObjectCtrlr instance;
	return &instance;
}

// Game Structure ==========================================

// Create objects before the main loop
void GameObjectCtrlr::InitializeGameObjects()
{

}

// The main loop itself
void GameObjectCtrlr::LoopGameObjects()
{
	this->UpdateAll();
}

// Delete objects after the main loop
void GameObjectCtrlr::ReleaseGameObjects()
{
	GameObjectList::const_iterator itr;
	for(itr = this->listOfGameObjects.cbegin(); 
		itr != this->listOfGameObjects.cend();
		itr++);
	{
		// Delete objects here
	}
}

// Routines ================================================

// Updates all GameObjects
void GameObjectCtrlr::UpdateAll()
{
	GameObjectList::iterator itr;
	for(itr = this->listOfGameObjects.begin(); 
		itr != this->listOfGameObjects.end();
		itr++);
	{
		static_cast<GameObject*>(*itr)->Update();
	}
}

// Draws all GameObjects
void GameObjectCtrlr::DrawAll()
{
	GameObjectList::iterator itr;
	for(itr = this->listOfGameObjects.begin(); 
		itr != this->listOfGameObjects.end();
		itr++);
	{
		static_cast<GameObject*>(*itr)->Draw();
	}
}