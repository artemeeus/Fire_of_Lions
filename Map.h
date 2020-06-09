/*!
 \file
 \brief Map Description File
 Contains map's array and constants to create it
 */
#include "SFML/Graphics.hpp"
#ifndef BASICSMETHODS_MAP_H
#define BASICSMETHODS_MAP_H
inline const int HEIGHT_MAP = 47;//размер карты высота
inline const int WIDTH_MAP = 81;//размер карты ширина
inline sf::String TileMap[HEIGHT_MAP] = {
        "000000000000000000000000000000000000000000000000000000000000000000000000000000000",
        "0                                       0                                       0",
        "0                                       0                                       0",
        "0                                       0                                       0",
        "0                                       0                                       0",
        "0                                       0                                       0",
        "0                                       0                                       0",
        "0                                       0                                       0",
        "0                                       0                                       0",
        "0                                       0                                       0",
        "0                                       0                                       0",
        "0                                       0                                       0",
        "0                      00000000000000000000000000000000000                      0",
        "0                                       0                                       0",
        "0                                       0                                       0",
        "0                                       0                                       0",
        "0                                       0                                       0",
        "0                                       0                                       0",
        "0                                       0                                       0",
        "0                                       0                                       0",
        "0                                       0                                       0",
        "0                                       0                                       0",
        "0                                       0                                       0",
        "000000000000000000                      0                      000000000000000000",
        "0                                                                               0",
        "0                                                                               0",
        "0                                                                               0",
        "0                                                                               0",
        "0                                                                               0",
        "0                                                                               0",
        "0                                                                               0",
        "0                                                                               0",
        "0                                                                               0",
        "0                                                                               0",
        "0              00000000000000000                 00000000000000000              0",
        "0                                                                               0",
        "0                                                                               0",
        "0                                                                               0",
        "0                                                                               0",
        "0                                                                               0",
        "0                                                                               0",
        "0                                                                               0",
        "0                                                                               0",
        "0                                                                               0",
        "0                                                                               0",
        "0                    ss                                  ss                     0",
        "000000000000000000000000000000000000000000000000000000000000000000000000000000000",
};
#endif //BASICSMETHODS_MAP_H
