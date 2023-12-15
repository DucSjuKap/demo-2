/*  Code by DucSiukapvippro */
//* dont cry bae =))

// Problem 5 : Book n Author

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef long double ld;
#define F(i, a, b) for (i = a; i < b; ++i)
#define Fe(i, a, b) for (i = a; i <= b; ++i)
#define FD(i, a, b) for (i = a; i > b; --i)
#define FDe(i, a, b) for (i = a; i >= b; --i)
#define fi first;
#define se second;
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);

//author information
struct author{
    string name, email, gender;
};
//book information
struct book{
    // list author of this book
    vector<author> authors;
    // book infor
    string name;
    ll price, quantity;
};
//compair expression of book list
bool cmp(book &a, book &b)
{
    // compair following name
    return a.name < b.name;
}

int main()
{
    // faster();
    vector<book> books; // list of book
    int n, NA; // NA ~ Number of Authors
    string tmp;
    cin >> n;
    scanf("\n");
    // resize list of book
    books.resize(n);
    //
    for(book &b : books)
    {
        getline(cin, tmp);
        getline(cin, b.name);
        cin >> b.price >> b.quantity;
        //
        cin >> NA;
        scanf("\n");
        //resize list of authors
        b.authors.resize(NA);
        for(int i = 0; i < NA; ++i)
        {
            getline(cin, b.authors[i].name);
            getline(cin, b.authors[i].email);
            getline(cin, b.authors[i].gender);
        }
    }
    
    // sorting by book's name
    sort(books.begin(), books.end(), cmp);
    
    // display
    for(book &b : books)
    {
        cout << "-----------------------\n";
        cout << "Book information :\n";
        cout << "Name : " << b.name << '\n';
        cout << "Price : " << b.price << '\n';
        cout << "Quantity : " << b.quantity << '\n';
        cout << "Author information :\n";
        NA = 1;
        for(author &a : b.authors)
        {
            cout << '#' << NA << '\n';
            ++NA;
            cout << "Name : " << a.name << '\n';
            cout << "Email : " << a.email << '\n';
            cout << "Gender : " << a.gender << '\n';
        }
    }
    return 0;
}
/*  Code by DucSiukapvippro */
