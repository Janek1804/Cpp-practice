template <class T> class BST{
    protected:
        T* value;
        BST* left;
        BST* right;
    public:
        BST(T key);
        ~BST();
        void insert(T key);
        bool search(T key);
        T minimum();
        T maximum();
        T getvalue();
        void show();
};