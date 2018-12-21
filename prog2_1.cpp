#include "prog2_1.hpp"
#include <queue>
#include <string>
#include <vector>
#include <stdexcept>
#include <sstream>
#include <iostream>

using namespace std;

Tokenizer::Tokenizer(){}
Tokenizer::~Tokenizer(){}

bool isValid = true; // Used for determining if a token is suitable for pushing

bool checkNum(string tok){
  /****************************
  * Checks for numbers and int*
  *                           *
  ****************************/
  for(int i = 0; i < tok.length(); i++){
    if(tok[i] < '0' || tok[i] > '9'){
      return false;
    }
    string checkDecimal = tok;
    for(char& c : checkDecimal){
      if(c == '.'){
        return false;
      }
    }
  }
  return true;
}

void Tokenizer::Tokenize(string input){
  vector<string> subTokens;
  stringstream checkOnline(input);
  string temp;

  while(getline(checkOnline, temp, ' ')){
    subTokens.push_back(temp);
  }
  // Comparator below:
  for(int i = 0; i < subTokens.size(); i++){
    if(subTokens[i] == "push"|| subTokens[i] == "pop" || subTokens[i] == "add" ||
      subTokens[i] == "sub" || subTokens[i] == "mul" || subTokens[i] == "div" ||
      subTokens[i] == "mod" || subTokens[i] == "skip"|| subTokens[i] == "save"||
      subTokens[i] == "get" || checkNum(subTokens[i]))
      {

      }
    else{
      isValid = false;
      throw string ("Unexpected token: " + subTokens[i] + "\n");
      break;
    }
  }
  if (isValid){
    datastruct.push(subTokens);
  }
}

vector<string> Tokenizer::GetTokens(){
  /****************************
  * Basically a pop() function*
  *                           *
  ****************************/
  if(datastruct.empty()){
    throw string ("No tokens");
  }
  vector<string> first = datastruct.front();
  datastruct.pop();
  return first;
}
