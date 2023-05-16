class SinglyLinkedList{
    private:
        int* value;
        SinglyLinkedList* next;
    public:
        template <typename T> SinglyLinkedList(T val);
        ~SinglyLinkedList();
        template<typename T> void insert(T val);
        bool search(int val);
        int minimum();
        int maximum();

};