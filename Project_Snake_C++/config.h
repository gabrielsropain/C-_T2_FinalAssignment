#pragma once
#include <iostream>


#define GRID_W  20
#define GRID_H  20
#define CELL_SIZE 20
#define WINDOW_W (GRID_W * CELL_SIZE)
#define WINDOW_H (GRID_H * CELL_SIZE)
#define TICK_SECONDS 0.12f
#define WINDOW_TITLE "Snake"
#ifdef _DEBUG
#define LOG(msg) (std::cout << "[" << __FILE__ << ":" << __LINE__ << "] " << msg << '\n')
#else
#define LOG(msg) ((void)0)
#endif



