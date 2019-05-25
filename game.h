//
//  game.h
//  hangman
//
//  Created by Tom Smithson on 25/05/2019.
//  Copyright © 2019 Tom Smithson. All rights reserved.
//

#ifndef game_h
#define game_h

class Game {
public:
    Game();
    void GameLoop();
    void converWord(std::string word);
    void getGuess();
    void checkGuess(std::string word);
    void changeChar(char guess, int pos);
    bool isWordGuessed(std::string word);
private:
    std::string originalWord;
    std::string underlineWord;
    char guess;
};

#endif /* game_h */
