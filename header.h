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
    public:
        Video();
        void insert_video();
        void rent_video(string movie_title);
        void return_video(string movie_title);
        void details_video(string movie_title);
        void display_all();
        bool check_video_status(string movie_title);
};

class Customer{
    private:
        int customer_id;
        string customer_name;
        string customer_address;
    public:
        Customer();
        void add_customer();
        void display_customer_details();
        void display_all();
};

class Customer_Rent{
    private:
        int customer_id;
        int Video_ID;
    public:
        Customer_Rent();
        void rent_video();
        void return_video();
        void display_all();
};