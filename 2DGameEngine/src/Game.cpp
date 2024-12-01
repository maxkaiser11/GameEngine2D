#include <iostream>
#include "Game.h"
#include <SDL.h>

Game::Game()
{
	std::cout << "Game Constructer called\n";
}

Game::~Game()
{
	std::cout << "Game Destructer called\n";
}

void Game::Initialize()
{
	// Initializing SDL
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
	{
		std::cerr << "Error Initializing SDL.\n";
		return;
	}
	
	// creating a window
	SDL_Window* window = SDL_CreateWindow(
		"2DGameEngine",
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		800,
		600,
		NULL
		);
	if (!window)
	{
		std::cerr << "Error creating SDL Window!" << std::endl;
		return;
	}

	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
	if (!renderer)
	{
		std::cerr << "Error creating SDL Renderer!" << std::endl;
	}
}

void Game::Run()
{
	while (true)
	{
		ProcessInput();
		Update();
		Render();
	}
}

void Game::ProcessInput()
{
	//TODO...
}

void Game::Update()
{
	//TODO...
}

void Game::Render()
{
	//TODO...
}

void Game::Destroy()
{
	//TODO...
}
