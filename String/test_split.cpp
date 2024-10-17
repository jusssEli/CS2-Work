#include "string.hpp"
int main(){
    {
        String s = "abc de fg";
        std::vector<String> splits = s.split(' ');
        assert(splits.size() == 3);
        assert(splits[0] == "abc");
        assert(splits[1] == "de");
        assert(splits[2] == "fg");
    }
    {
        String s = "5fg5wi5uek5sb";
        std::vector<String> splits = s.split('5');
        assert(splits.size() == 5);
        assert(splits[0] == "");
        assert(splits[1] == "fg");
        assert(splits[2] == "wi");
        assert(splits[3] == "uek");
        assert(splits[4] == "sb");
    }

    {
        String s = "))))))";
        std::vector<String> splits = s.split(')');
        assert(splits.size() == 7);
        assert(splits[0] == "");
        assert(splits[1] == "");
        assert(splits[2] == "");
        assert(splits[3] == "");
        assert(splits[4] == "");
        assert(splits[5] == "");
        assert(splits[6] == "");
    }
    {
        String s = "split,at,the,commas";
        std::vector<String> splits = s.split(',');
        assert(splits.size() == 4);
        assert(splits[0] == "split");
        assert(splits[1] == "at");
        assert(splits[2] == "the");
        assert(splits[3] == "commas");
    }
    {
        String s = "10*10*8*9*2";
        std::vector<String> splits = s.split('*');
        assert(splits.size() == 5);
        assert(splits[0] == "10");
        assert(splits[1] == "10");
        assert(splits[2] == "8");
        assert(splits[3] == "9");
        assert(splits[4] == "2");
    }
    {
        String s = "test.cases.are.super.repetitive....";
        std::vector<String> splits = s.split('.');
        assert(splits.size() == 9);
        assert(splits[0] == "test");
        assert(splits[1] == "cases");
        assert(splits[2] == "are");
        assert(splits[3] == "super");
        assert(splits[4] == "repetitive");
        assert(splits[5] == "");
        assert(splits[6] == "");
        assert(splits[7] == "");
        assert(splits[8] == "");
    }
    {
        String s = "im & not & passing & by & reference";
        std::vector<String> splits = s.split('&');
        assert(splits.size() == 5);
        assert(splits[0] == "im ");
        assert(splits[1] == " not ");
        assert(splits[2] == " passing ");
        assert(splits[3] == " by ");
        assert(splits[4] == " reference");
    }
    {
        String s = "im[out[of[characters[to[split";
        std::vector<String> splits = s.split('[');
        assert(splits.size() == 6);
        
        assert(splits[0] == "im");
        assert(splits[1] == "out");
        assert(splits[2] == "of");
        assert(splits[3] == "characters");
        assert(splits[4] == "to");
        assert(splits[5] == "split");
    }
    {
        String s = "ImNotSplittingThisString";
        std::vector<String> splits = s.split(' ');
        assert(splits.size() == 1);
        
        assert(splits[0] == "ImNotSplittingThisString");
    }
    {
        String s = "-a--b-";
        std::vector<String> splits = s.split('-');
        assert(splits.size() == 5);
        
        assert(splits[0] == "");
        assert(splits[1] == "a");
        assert(splits[2] == "");
        assert(splits[3] == "b");
        assert(splits[4] == "");
    }

    std::cout << "Done Testing Split" << std::endl;
}