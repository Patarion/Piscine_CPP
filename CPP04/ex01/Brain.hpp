//
// Created by Jasmin Gagnon on 2/2/23.
//

#ifndef CPP_BRAIN_HPP
#define CPP_BRAIN_HPP

#include <iostream>

class Brain{
public :
    Brain();
    Brain(Brain &cpy);
    virtual ~Brain();
    void        setIdea(std::string idea, int i);
    std::string getIdea(int i);
    void        getIdeas() const;
    void        fullIdeas(std::string idea);

    Brain & operator=(Brain &cpy);
protected:
    std::string ideas[100];
};

#endif //CPP_BRAIN_HPP
