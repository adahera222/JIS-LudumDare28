#ifndef GAME_LOGIC_CTRLR
#define GAME_LOGIC_CTRLR

class GameObject;

class GameLogicCtrlr
{
public:
	// Singleton Access =====================

	static GameLogicCtrlr* GetInstance();		// Public singleton instance getter

	// Game Structures =====================

	void InitializeGame();					// Create objects before the main loop
	void LoopGame();						// The main loop itself
	void ReleaseGame();						// Delete objects after the main loop

	// Routines =============================

	// Get the squared distance between two objects
	static float GetSquaredDistance(GameObject* obj1, GameObject* obj2);

	// Check of two GameObjects overlap
	static bool DoObjectsOverlap(GameObject* obj1, GameObject* obj2);

private:
	// Singleton Management =================

	static GameLogicCtrlr* privGetInstance();	// Private singleton handler
	GameLogicCtrlr();							// Private constructor

	// Data =================================



};



#endif