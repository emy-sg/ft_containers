# ifndef PAIR_HPP
#define PAIR_HPP

// How to implement a non-member template function:
// https://stackoverflow.com/questions/50082807/how-do-in-include-a-non-member-operator-overloading-for-a-template-class-in-c


template < class T1, class T2 >
class pair {
    public:
        typedef T1 first_type;
        typedef T2 second_type;

    private:
        // Member variables
        first_type first;
        second_type second;

    public:
        // Constructor
        pair() {}

        // Copy
        template <class U, class V>
        pair (const pair<U, V>& pr) {
            first = pr.first;
            second = pr.second;
        }

        // Initialization
        pair (const first_type& a, const second_type& b) : first(a), second(b) {}

        // implicitly declared:
        pair& operator=(const pair& pr) {
            first = pr.first;
            second = pr.second;
            return *this;
        }

        // Non-member function overloads
        template <class T1, class T2>
        friend bool operator== (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs);

        template <class T1, class T2>
        friend bool operator!= (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs);
        
        template <class T1, class T2>
        friend bool operator<  (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs);

        template <class T1, class T2>
        friend bool operator<= (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs);

        template <class T1, class T2>
        friend bool operator>  (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs);

        template <class T1, class T2>
        friend bool operator>= (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs);
};

template <class T1, class T2>
  bool operator== (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)
{ return lhs.first==rhs.first && lhs.second==rhs.second; }

template <class T1, class T2>
  bool operator!= (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)
{ return !(lhs==rhs); }

template <class T1, class T2>
  bool operator<  (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)
{ return lhs.first<rhs.first || (!(rhs.first<lhs.first) && lhs.second<rhs.second); }

template <class T1, class T2>
  bool operator<= (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)
{ return !(rhs<lhs); }

template <class T1, class T2>
  bool operator>  (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)
{ return rhs<lhs; }

template <class T1, class T2>
  bool operator>= (const pair<T1,T2>& lhs, const pair<T1,T2>& rhs)
{ return !(lhs<rhs); }


#endif