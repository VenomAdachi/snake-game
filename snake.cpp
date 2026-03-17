#include <iostream>
#include <vector>
#include <conio.h>
#include <windows.h>

class Snake {
    public:
        int headRow = 2, headColumn = 5;

    void moveUp(){
        headRow--;
    }

    void moveDown(){
        headRow++;
    }

    void moveLeft(){
        headColumn--;
    }

    void moveRight(){
        headColumn++;
    }
    
    void movement(){
        char ch = _getch();
        ch = toupper(ch);
        
        if(ch == 'W'){
            moveUp();
        }
        
        else if(ch == 'A'){
            moveLeft();
        }
        
        if(ch == 'S'){
            moveDown();
        }
        
        if(ch == 'D'){
            moveRight();
        }
    }

};

class Apple{

};

class Game{ 
    public:
    Snake snakeobj;
    int height = 10, width = 20;

    const int rows = height;
    const int cols = width;

    std::vector<std::vector<int>> board_matrix(int rows, int cols) {
        std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));

        return matrix;

    }

    void render() {
        std::vector<std::vector<int>> snakeMatrix = board_matrix(height, width);
        std::cout << "+-----------------------------------------+" << std::endl;
        for (int i = 0; i < rows; i++){
            std::cout << "| ";
            for(int j = 0; j < cols; j++){
                if(i == snakeobj.headRow && j == snakeobj.headColumn){
                    std::cout << 1 << " ";
                }
                else{
                    std::cout << snakeMatrix[i][j] << " ";
                }
                
            }
            std::cout << "|" << std::endl;
        }
        std::cout << "+-----------------------------------------+" << std::endl;
    }

};

int main(){
    Game Gameobj;

    while(true){
        system("cls");
        Gameobj.render();
        Gameobj.snakeobj.movement();
        system("cls");
    }
    std::cout << "Test";
    std::cout <<"Test 2";
    std::cout <<"True Ultra Test 3";
    std::cout <<"I think i understand how this works now poop oopp";
    

    return 0;
}