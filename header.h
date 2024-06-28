#pragma once
#include <iostream>
using namespace std;

class Video{
    private:
        int video_id;
        string movie_title;
        string genre;
        string production;
        string quantity;
        string filename;
    public:
        Video();
        void insert_video();
        void rent_video(string movie_title);
        void return_video(string movie_title);
        void details_video(string movie_title);
        void display_all();
        bool check_video_status(string movie_title);
};