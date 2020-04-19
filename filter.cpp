//
//  main.cpp
//  ImageManipulator
//
//  Created by Vruthik Thakkar on 4/19/20.
//  Copyright © 2020 Vruthik Thakkar. All rights reserved.
//

#include <iostream>
#include <vector>
#include <fstream>


using namespace std;

class filter{
    
private:

    struct pixel{
        
        int red = 0;
        int green = 0;
        int blue = 0;
        
    }; //pixel{}
    
    vector<vector<pixel>> image;
    
public:
    
    void vecResize(){
        
        image.resize(10, vector<pixel>(10));
        
    } //vecResize()
    
    void greyscale(){
        
        
            
    } //greyscale()
    
    void sepia(){
        
    }
    
    void print(){
        
        for(int row = 0; row < 10; ++row){
            for(int col = 0; col < 10; ++col){
                cout << "(" << image[row][col].red << "," << image[row][col].green << "," << image[row][col].blue << ")";
            }
            cout << "\n\n";
        }
        
    } //print()
    
    
}; //image{}
int main() {
    
    filter f;
    f.vecResize();
    
    
    f.print();

    return 0;
}
