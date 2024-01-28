////
//// Created by Nu lar on 12/7/23.
////

#include "PokerDisplay.h"

PokerDisplay::PokerDisplay()
{
    float xPosition = 5.0f;

    for (int i = 0; i < 5; i++) {
        cards[i].setPosition({xPosition, 60.0f});

        xPosition += 15.0f;
    }
    xPosition=5.0f;
    for (int i = 5; i < 10; i++) {
        cards[i].setPosition({xPosition, 130.0f});
        xPosition += 15.0f;
    }
    xPosition=5.0f;
    for (int i = 10; i < 15; i++) {
        cards[i].setPosition({xPosition, 200.0f});
        xPosition += 15.0f;
    }
    xPosition=5.0f;
    for (int i = 15; i < 20; i++) {
        cards[i].setPosition({xPosition, 270.0f});
        xPosition += 15.0f;
    }
    xPosition=5.0f;
    for (int i = 20; i < 25; i++) {
        cards[i].setPosition({xPosition, 340.0f});
        xPosition += 15.0f;
    }
    xPosition=5.0f;
    for (int i = 25; i < 30; i++) {
        cards[i].setPosition({xPosition, 410.0f});
        xPosition += 15.0f;
    }
    xPosition=5.0f;
    for (int i = 30; i < 35; i++) {
        cards[i].setPosition({xPosition, 480.0f});
        xPosition += 15.0f;
    }
    xPosition=5.0f;
    for (int i = 35; i < 40; i++) {
        cards[i].setPosition({xPosition, 550.0f});
        xPosition += 15.0f;
    }
    xPosition=5.0f;
    for (int i = 40; i < 45; i++) {
        cards[i].setPosition({xPosition, 620.0f});
        xPosition += 15.0f;
    }
    xPosition=5.0f;
    for (int i =45; i < 50; i++) {
        cards[i].setPosition({xPosition, 690.0f});
        xPosition += 15.0f;
    }

}

void PokerDisplay::run() {

    ///!scoreHand.isStraight()
    while (!ScoreCard::isRoyalFlush()) {
        Deck deck;
        deck.shuffle();

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                players[j].addCard(deck);
            }
        }

        std::cout << "Mining......." << std::endl;

        scoreHand.scoreCardHand(players[0]);
        players[0].clearHand();
    }

    sf::RenderWindow window({1000, 1000, 64}, "Card");
    window.setFramerateLimit(60);


    float xPosition = 300.f;
    LetterBox letterBox("Hands", 20, sf::Color::White, sf::Vector2f(300, 10.0f));
    LetterBox letterBox2("Probability", 20, sf::Color::White, sf::Vector2f(800, 10.0f));

    LetterBox letterB1("ROYAl", 20, sf::Color::White, sf::Vector2f(xPosition, 60.0f));
    LetterBox letterB2("STRAIGHT FLUSH", 20, sf::Color::White, sf::Vector2f(xPosition, 130.0f));
    LetterBox letterB3("FOUR KIND", 20, sf::Color::White, sf::Vector2f(xPosition, 200.0f));
    LetterBox letterB4("FULL HOUSE", 20, sf::Color::White, sf::Vector2f(xPosition, 270.0f));
    LetterBox letterB5("FLUSH", 20, sf::Color::White, sf::Vector2f(xPosition, 340.0f));
    LetterBox letterB6("STRAIGHT", 20, sf::Color::White, sf::Vector2f(xPosition, 410.0f));
    LetterBox letterB7("THREE KIND", 20, sf::Color::White, sf::Vector2f(xPosition, 480.0f));
    LetterBox letterB8("TWO PAIR", 20, sf::Color::White, sf::Vector2f(xPosition, 550.0f));
    LetterBox letterB9("ONE PAIR", 20, sf::Color::White, sf::Vector2f(xPosition, 620.0f));
    LetterBox letterB10("HIGH CARD", 20, sf::Color::White, sf::Vector2f(xPosition, 690.0f));

    scoreText::calculate();
    scoreText finalscore0(scoreText::storeScores[0], {800.f,60.f});
    scoreText finalscore1(scoreText::storeScores[1], {800.f,130.f});
    scoreText finalscore2(scoreText::storeScores[2], {800.f,200.f});
    scoreText finalscore3(scoreText::storeScores[3], {800.f,270.f});
    scoreText finalscore4(scoreText::storeScores[4], {800.f,340.f});
    scoreText finalscore5(scoreText::storeScores[5], {800.f,410.f});
    scoreText finalscore6(scoreText::storeScores[6], {800.f,480.f});
    scoreText finalscore7(scoreText::storeScores[7], {800.f,550.f});
    scoreText finalscore8(scoreText::storeScores[8], {800.f,620.f});
    scoreText finalscore9(scoreText::storeScores[9], {800.f,690.f});

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (sf::Event::Closed == event.type)
                window.close();
        }
        window.clear();


        for (int i = 0; i < 5; i++) {
            window.draw(cards[i]);
        }
        for (int i = 5; i < 10; i++) {
            window.draw(cards[i]);
        }
        for (int i = 10; i < 15; i++) {
            window.draw(cards[i]);
        }
        for (int i = 15; i < 20; i++) {
            window.draw(cards[i]);
        }
        for (int i = 20; i < 25; i++) {
            window.draw(cards[i]);
        }
        for (int i = 25; i < 30; i++) {
            window.draw(cards[i]);
        }
        for (int i = 30; i < 35; i++) {
            window.draw(cards[i]);
        }
        for (int i = 35; i < 40; i++) {
            window.draw(cards[i]);
        }
        for (int i = 40; i < 45; i++) {
            window.draw(cards[i]);
        }
        for (int i = 45; i < 50; i++) {
            window.draw(cards[i]);
        }



        window.draw(letterBox);
        window.draw(letterBox2);
        window.draw(letterB1);
        window.draw(letterB2);
        window.draw(letterB3);
        window.draw(letterB4);
        window.draw(letterB5);
        window.draw(letterB6);
        window.draw(letterB7);
        window.draw(letterB8);
        window.draw(letterB9);
        window.draw(letterB10);

        window.draw(finalscore0);
        window.draw(finalscore1);
        window.draw(finalscore2);
        window.draw(finalscore3);
        window.draw(finalscore4);
        window.draw(finalscore5);
        window.draw(finalscore6);
        window.draw(finalscore7);
        window.draw(finalscore8);
        window.draw(finalscore9);

        window.display();
    }
}