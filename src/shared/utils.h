/*
* NEWorld: A free game with similar rules to Minecraft.
* Copyright (C) 2016 NEWorld Team
*
* This file is part of NEWorld.
* NEWorld is free software: you can redistribute it and/or modify
* it under the terms of the GNU Lesser General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* NEWorld is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public License
* along with NEWorld.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef UTILS_H_
#define UTILS_H_

#include <vector>
#include <string>
#define FUNCTION_ALIAS(A,B) template <typename... Args> auto B(Args&&... args) -> decltype(A(std::forward<Args>(args)...)){return A(std::forward<Args>(args)...);}

std::vector<std::string> split(const std::string& src, std::string separate_character);
void trim(std::string& s);
void strtolower(std::string& s);

#endif // !UTILS_H_
