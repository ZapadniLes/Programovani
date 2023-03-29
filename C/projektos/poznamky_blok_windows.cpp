#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream file2;
ofstream file;

string soubor;
string line;
string text;


//Výpis do terminalu
void vypis(){
        
        file2.open(soubor);
        cout << file2.rdbuf();
        file2.close();
            
}


int main(){

    cout <<"Název souboru včetně koncovky: ";
    cin >> soubor;

  //cyklus dokud se nenapíše :q
    while (line != ":q"){
        file.open(soubor, ios_base::app);
        
        if (!file.is_open())
        {
            cout << "Nelze otevřít/vytvořit soubor";
            return 0;

        }

        //Zapisování do souboru
        getline(cin, line);

        if (line != ":q"){

            file << line << endl;
        }
        file.close();

        cout << "\x1B[2J\x1B[H";
        vypis();
    }
        return 0;
  
}