//
//  words.h
//  hangman
//
//  Created by Tom Smithson on 25/05/2019.
//  Copyright © 2019 Tom Smithson. All rights reserved.
//

#ifndef words_h
#define words_h

class Word {
public:
    Word();
    void getWordsFromFile();
    std::vector<std::string> generateWords();
    std::string getWord();
    long getSize();
private:
    std::string word;
    std::vector<std::string> fileWords;
    std::vector<std::string> words;
    long size = 0;
};


#endif /* words_h */
