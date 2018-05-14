  if ( !root ) { return; }
        cout << root->data << " ";

        if ( root->left ) { _q.push(root->left); }
        if ( root->right ) { _q.push(root->right); }
        Node *next = _q.front();
        if ( next ) { _q.pop(); }
        levelOrder(next);
	}
    private:
    queue<Node *> _q;
