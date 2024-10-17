
#include "string.hpp"
int main(){
    {
        String test("this");
        String test2("word");
        assert(test == "this");
        assert(test2 == "word");
        String result = test + test2;
        assert(result == "thisword");
    }

    {
        String test("");
        String test2("");
        assert(test == "");
        assert(test2 == "");
        String result = test + test2;
        assert(result == "");
    }

    {
        String test("Is this a long enough of a string i hope its long enough so that i can not get any more points taken off. ");
        String test2("I am not a fan of this assginment however. It's very boring and repetitive. This sucks.");
        assert(test == "Is this a long enough of a string i hope its long enough so that i can not get any more points taken off. ");
        assert(test2 == "I am not a fan of this assginment however. It's very boring and repetitive. This sucks.");
        String result = test + test2;
        assert(result == "Is this a long enough of a string i hope its long enough so that i can not get any more points taken off. I am not a fan of this assginment however. It's very boring and repetitive. This sucks.");
    }

    {
        String test("Listen up, y'all, 'cause this is it ");
        String test2("The beat that I'm bangin' is delicious");
        assert(test == "Listen up, y'all, 'cause this is it ");
        assert(test2 == "The beat that I'm bangin' is delicious");
        String result = test + test2;
        assert(result == "Listen up, y'all, 'cause this is it The beat that I'm bangin' is delicious");
    }

    {
            String test("Fergalicious, definition make them boys go loco ");
            String test2("They want my treasure, so they get their pleasures from my photo");
            assert(test == "Fergalicious, definition make them boys go loco ");
            assert(test2 == "They want my treasure, so they get their pleasures from my photo");
            String result = test + test2;
            assert(result == "Fergalicious, definition make them boys go loco They want my treasure, so they get their pleasures from my photo");
    }
    
    {
        String test("You could see me, you can't squeeze me ");
        String test2("I ain't easy, I ain't sleazy");
        assert(test == "You could see me, you can't squeeze me ");
        assert(test2 == "I ain't easy, I ain't sleazy");
        String result = test + test2;
        assert(result == "You could see me, you can't squeeze me I ain't easy, I ain't sleazy");
    }

    
    {
        String test("I got reasons why I tease 'em ");
        String test2("Boys just come and go like seasons");
        assert(test == "I got reasons why I tease 'em ");
        assert(test2 == "Boys just come and go like seasons");
        String result = test + test2;
        assert(result == "I got reasons why I tease 'em Boys just come and go like seasons");
    }
    {
        String test("Fergalicious (so delicious) ");
        String test2("But I ain't promiscuous");
        assert(test == "Fergalicious (so delicious) ");
        assert(test2 == "But I ain't promiscuous");
        String result = test + test2;
        assert(result == "Fergalicious (so delicious) But I ain't promiscuous");
    }
    {
        String test("And if you was suspicious ");
        String test2("All that shit is fictitious");
        assert(test == "And if you was suspicious ");
        assert(test2 == "All that shit is fictitious");
        String result = test + test2;
        assert(result == "And if you was suspicious All that shit is fictitious");
    }
    {
        String test("I blow kisses (mwah) ");
        String test2("That puts them boys on rock, rock");
        assert(test == "I blow kisses (mwah) ");
        assert(test2 == "That puts them boys on rock, rock");
        String result = test + test2;
        assert(result == "I blow kisses (mwah) That puts them boys on rock, rock");
    }
    return 0;
}