template <class T> class SinglyLinkedList{
    private:
        T* value;
        SinglyLinkedList* next;
    public:
        SinglyLinkedList(T val);
        ~SinglyLinkedList();
        void insert(T val);
        bool search(T val);
        T minimum();
        T maximum();
        T getvalue();
        void print();

};