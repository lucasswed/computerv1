#ifndef TERM_HPP
# define TERM_HPP

template <typename T>
class Term
{
    private:
        T   number;
        int degree;
    public:
        Term(T number, int degree);
        ~Term();
};

#endif