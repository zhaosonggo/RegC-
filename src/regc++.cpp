#include<inc/regc++.h>
#include<inc/regtype.h>


RegPattern::RegPattern()
{
    alytarget = nullptr;
}

RegPattern::RegPattern(const char *str)
{
    alytarget = str;
}