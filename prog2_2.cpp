#include "prog2_1.hpp"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]){

    ifstream txtFile(argv[1]);
    Tokenizer token;
    string line;
    int count = 0;
    bool yay;
    while(getline(txtFile, line)){

      try{
        token.Tokenize(line);
      }
      catch (string num){
        cout<<"Error on line "<<count + 1<<": " <<num;
        return 1;
      }
      count += 1;
    }

    for(int i = 0; i < count; i++){
      vector<string> tokens = token.GetTokens();

      for(int k = 0; k < tokens.size(); k++){
        cout<<tokens[k];
        if( k != tokens.size()-1){
          cout<<",";
        }
      }
      cout<<endl;
    }

}
