class SinglyLinkedList{
    private:
        int* value;
        SinglyLinkedList* next;
    public:
        SinglyLinkedList(int val);
        ~SinglyLinkedList():
        void insert(int val);
        bool search(int val);
        int minimum();
        int maximum();

};