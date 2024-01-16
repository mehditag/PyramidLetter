#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string pyramid{};
    cout<<"Welcome to our Letter Pyramid prog. Please put your base to your pyramid : "<<endl;
    getline(cin,pyramid);
    vector<string> vec {};
    string space {" "};
    for (char c : pyramid){
        vec.insert(vec.begin(),pyramid);
        pyramid.pop_back(); //Erase last char
        pyramid=space+pyramid;
    }
    
    for (string str : vec){
        cout<< str ;
        
        for (size_t j(str.size()-1) ; j>0 ; j--){
            cout << str[j-1];
        } 
        
        cout << endl;
    }

    return 0;
}