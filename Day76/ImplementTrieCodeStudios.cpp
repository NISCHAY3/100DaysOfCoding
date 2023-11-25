// Question Link->https://www.codingninjas.com/studio/problems/implement-trie_631356?leftPanelTabValue=SUBMISSION


class trienode

{

    public:

    char data;

    trienode* children[26];

    bool istermianl;

    

    trienode(char ch)

    {

        data=ch;

        for(int i=0;i<26;i++)

        {

            children[i]=NULL;

        }

        istermianl=false;

    }

};

class Trie {

public:

trienode* root;

    /** Initialize your data structure here. */

    Trie() {

         root=new trienode('\0');

    }

    void insertutil(trienode* root,string word)

     {

         //base case

         if(word.length()==0)

         {

             root->istermianl=true;

             return;

         }

         

         int index=word[0]-'a';

         trienode* child;

         if(root->children[index]!=NULL)

         {

             child=root->children[index];

             

             

         }

         else

         {

             child=new trienode(word[0]);

             root->children[index]=child;

         }

         insertutil(child,word.substr(1));

     }

 

    /** Inserts a word into the trie. */

    void insert(string word) {        

             insertutil(root,word);    

             }

 

    /** Returns if the word is in the trie. */

     bool searchutil(trienode* root,string word)

     {

         if(word.length()==0)

         {

             return root->istermianl;

         }

         int index=word[0]-'a';

         trienode* child;

         if(root->children[index]!=NULL)

         {

             child=root->children[index];

         }

         else

         {

             return false;

         }

          return searchutil(child,word.substr(1));

     }

     

    bool search(string word) {

 

         return searchutil(root,word);

 

    }

    

 

    /** Returns if there is any word in the trie that starts with the given prefix. */

     bool searchprefix(trienode* root,string word)

     {

         if(word.length()==0)

         {

             return true;

         }

         int index=word[0]-'a';

         trienode* child;

         if(root->children[index]!=NULL)

         {

             child=root->children[index];

         }

         else

         {

             return false;

         }

          return searchprefix(child,word.substr(1));

     }

    bool startsWith(string prefix) {

        return searchprefix(root,prefix);

 

    }

};