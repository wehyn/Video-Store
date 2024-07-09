#include "header.h"

Video::Video()
{
    video_id = 0;
    movie_title = "";
    genre = "";
    production = "";
    quantity = "";
}

void Video::insert_video(string movie_title, string genre, string production, string quantity)
{
    video_id++;
    this->movie_title = movie_title;
    this->genre = genre;
    this->production = production;
    this->quantity = quantity;
}