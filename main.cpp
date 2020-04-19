//
//  main.cpp
//  linearalgebra
//
//  Created by Tyler LaMendola on 4/19/20.
//  Copyright © 2020 Tyler LaMendola. All rights reserved.
//

#include <iostream>
using namespace std;


class pixel {
public:
    int red =0;
    int green=0;
    int blue=0;
};

int main(int argc, const char * argv[]) {
    
    pixel image[10][10];
    
    for(int i = 0; i < 10; ++i){
        for(int j = 0; j < 10; ++j){
            pixel p;
            image[i][j] = p;
        }
    }
    
    for(int i = 0; i < 10; ++i){
        for(int j = 0; j < 10; ++j){
            cout << "(" << image[i][j].red << "," << image[i][j].green << "," << image[i][j].blue<< ")";
        }
        cout << endl <<endl;
    }
    return 0;
}
