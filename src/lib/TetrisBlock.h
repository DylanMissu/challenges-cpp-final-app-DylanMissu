#pragma once

#include "Graphics.h"

class TetrisBlock {
    public:
        TetrisBlock(Graphics *graphics);
        bool show();
        void setAbsolutePosition(int x, int y);
        void setRelativePosition(int x, int y);
        void generateRandomBlock();

    public:
        void left();
        void right();
        void down();
        void rotate();
        void rotateHelper(int block[16]);

    public:
        int getMaxX();
        int getMinX();
        int getMaxY();

    private:
        int _block[16];
        int blocky = 0;
        int blockx = 0;
        Graphics *graphics;

    private:
        bool stopDown = false;
        bool stopLeft = false;
        bool stopRight = false;
};