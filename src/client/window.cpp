/*
* NEWorld: An free game with similar rules to Minecraft.
* Copyright (C) 2016 NEWorld Team
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "window.h"

const char* WindowName = "NEWorld";
const int WindowH = 852, WindowW = 480;

bool Window::init()
{
    static bool inited = false;
    if (!inited)
    {
        glfwInit();
        inited = true;
    }

    m_win = glfwCreateWindow(WindowH, WindowW, WindowName, nullptr, nullptr);

    if (!m_win)
    {
        glfwTerminate();
        return false;
    }

    setCurrentDraw();

    return true;
}
