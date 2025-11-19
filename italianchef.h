#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"
#include <string>

class ItalianChef : public Chef
{
public:
    ItalianChef(const std::string &n);
    ~ItalianChef();

    void makePasta();
    std::string getName() const;
};

#endif
