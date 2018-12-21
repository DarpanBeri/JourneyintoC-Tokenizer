#ifndef __TOKENIZER__
#define __TOKENIZER__
#include <queue>
#include <vector>
#include <string>

using namespace std;

class Tokenizer{
  private:
    queue< vector<string> > datastruct;

  public:
    Tokenizer();
    ~Tokenizer();
    void Tokenize(string input);
    vector<string> GetTokens();
};

#endif
