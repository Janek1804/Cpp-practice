class BST{
    protected:
        double* value;
        BST* left;
        BST* right;
    public:
        BST(double key);
        ~BST();
        void insert(double key);
        bool search(double key);
        double minimum();
        double maximum();
        double getvalue();
        void show();
};