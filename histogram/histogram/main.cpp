//
//  main.cpp
//  histogram
//
//  Created by Abhinav Verma on 20/10/18.
//  Copyright © 2018 com.abhinav. All rights reserved.
//

#include <iostream>
#include<vector>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<float> myFloat ;
    myFloat = {3.0,2.7,1.3,0.5,6.0};
    
    for(int i=0;i<myFloat.size();i++){
        cout<<"element"<<myFloat[i]<<endl;
    }
    
    vector<float> example;
    
    for (int i = 0; i < 5; i++) {
        example.push_back(i*5.231);
    }
    
    for (int i = 0; i < example.size(); i++) {
        cout << example[i] << endl;
    }
    
    vector<int> vec1;
    vector<int> vec2;
    vector<int> vec3;
    
    vec1 = {5,10,27};
    vec2 = {3,17,12};
    for(int i=0;i<vec1.size();i++){
        vec3.push_back(vec1[i] - vec2[i]);
        
    }
    for(int i=0;i<vec3.size();i++){
        cout<<vec3[i]<<endl;
    }
    cout << "Hello, World!\n";
    return 0;
}
