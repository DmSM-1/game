#pragma once
#include "view.hpp"
#include <sys/ioctl.h>
#include <unistd.h>
#include <stdlib.h>
#include <vector>
#include <cstdlib>
#include <termios.h>
#include <unistd.h>

// stty sane


class Tview: public View{
    private:
        struct winsize size;
        std::vector<std::vector<Stat>> field;

        unsigned short col;
        unsigned short row;
        int botton_board;
        int left_board;

        struct termios p;
        const int fd = 0;

    public:
        Tview(){
            ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);
        }

        ~Tview(){}

        void print_name(
            std::string name = "Default"
        ){
            std::cout << name;
        }


        void set(
            const winsize& ws
        ){
            col = ws.ws_col;
            row = ws.ws_row;
            botton_board = row - 1;
            left_board = col - 1; 

            //set field size
            field.resize(col);
            for(int i = 0; i < col; ++i){
                field[i].resize(row);
                for(int j = 0; j < row; ++j)
                    field[i][j] = empt;
            }
            std::cout << "eee\n";

            //border
            for(int i = 0; i < col; ++i){
                field[i][0] = bord;
                field[i][botton_board] = bord;
            }
            for(int i = 0; i < botton_board; i++){
                field[0][i] = bord;
                field[left_board][i] = bord;
            }

        }   


        int add(
            const coor& coord,
            const Stat& stat
        ){
            field[coord.first][coord.second] = stat;
            return 0;
        }

        void show(
        ){
            system("clear");

            for(int i = 0; i < row; ++i){
                for(int j = 0; j < col; ++j){
                    switch (field[j][i]){
                        case rabb:
                            std::cout << "r";
                            break;
                        case snak:
                            std::cout << "=";
                            break;
                        case head:
                            std::cout << "o";
                            break;
                        case bord:
                            std::cout << "#";
                            break;
                        case empt:
                            std::cout << " ";
                            break;
                    }
                }

                std::cout << "\n";
            }
            
        }

        void event_loop(){
            int a = tcgetattr(fd, &p);
            p.c_lflag &= ~(ECHO| ICANON);
            tcsetattr(fd, TCSANOW, &p);

            while(true){

            }
        }
};