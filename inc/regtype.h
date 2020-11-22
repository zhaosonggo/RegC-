#include<map>

class regtype
{
private:
    std::map<char *, int> result;

public:
    regtype()=default;
    std::map<char *, int> getresult(){return result;}
    void insert(char *_str, int _index){result.insert(std::pair<char *, int>(_str, _index));}
};