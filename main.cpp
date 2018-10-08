#include <iostream>
#include <string>
#include <algorithm>


using namespace std;


int main() {

    string word1; string word2;
    cout << "Enter The First String You Want To Check If It Anagram Or Not!\n" ;
    getline(cin,word1);
    cout << "Enter The Second String You Want To Check If It Anagram Or Not!\n" ;
    getline(cin,word2);


    for(int i = 0; i < word1.length() ; i++)
    {
        word1[i] = toupper(word1[i]);

    }
    for(int j = 0; j < word2.length() ; j++)
    {
        word2[j] = toupper(word2[j]);
    }

//_______________________________________________________________________________________________________

    for(int i = 0; i < word1.length() ; i++)
    {
        if(word1[i] < 'A' || word1[i] > 'Z')
        {
           word1.erase(i,1);
        }
    }
    for(int j = 0; j < word2.length() ; j++)
    {
        if(word2 [j] < 'A' || word2[j] > 'Z')
        {
           word2.erase(j,1);
        }
    }

//________________________________________________________________________________________________________

    if(word1.length() == word2.length())
    {
        sort(word1.begin(), word1.end());
        sort(word2.begin(), word2.end());
        if(word1 == word2)
            cout << "The words are anagrams of each other"<<endl;
        else
            cout << "The words are not anagrams of each other"<<endl;
    }
        else
            cout << "The words are not the same length"<<endl;

return 0;
}















