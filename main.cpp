#include <iostream>
using namespace std;
#include <iomanip>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>

class Lego {

public:

    string setNumber;
    string theme;
    string name;
    int miniFigs;
    int pieces;
    double price;
    int maxPrice1;
    int maxPrice2;
    int maxPrice3;

    vector<string> file1ObjectsTemp;
    vector<string> file1Objects;
    vector<string> file1Delim;
    vector<string> setNumber1;
    vector<string> theme1;
    vector<string> name1;
    vector<int> miniFigs1;
    vector<int> pieces1;
    vector<double> price1;

    vector<string> file2ObjectsTemp;
    vector<string> file2Objects;
    vector<string> file2Delim;
    vector<string> setNumber2;
    vector<string> theme2;
    vector<string> name2;
    vector<int> miniFigs2;
    vector<int> pieces2;
    vector<double> price2;

    vector<string> file3ObjectsTemp;
    vector<string> file3Objects;
    vector<string> file3Delim;
    vector<string> setNumber3;
    vector<string> theme3;
    vector<string> name3;
    vector<int> miniFigs3;
    vector<int> pieces3;
    vector<double> price3;

    vector<string> file4ObjectsTemp;
    vector<string> setNumber4;
    vector<string> theme4;
    vector<string> name4;
    vector<int> miniFigs4;
    vector<int> pieces4;
    vector<double> price4;

public:

    void openFile1();
    void openFile2();
    void openFile3();
    void vectorForFile1();
    void vectorForFile2();
    void vectorForFile3();
    void vectorForChoice4();

};

void Lego:: vectorForFile1(){

    for (unsigned int i = 0; i < file1Delim.size(); i+=6){

        setNumber1.push_back(file1Delim.at(i));

    }

    for (unsigned int i = 1; i < file1Delim.size(); i+=6){

        theme1.push_back(file1Delim.at(i));

    }

    for (unsigned int i = 2; i < file1Delim.size(); i+=6){

        name1.push_back(file1Delim.at(i));

    }

    for (unsigned int i = 3; i < file1Delim.size(); i+=6){

        miniFigs1.push_back(stoi(file1Delim.at(i)));

    }

    for (unsigned int i = 4; i < file1Delim.size(); i+=6){

        pieces1.push_back(stoi(file1Delim.at(i)));

    }

    for (unsigned int i = 5; i < file1Delim.size(); i+=6){

        price1.push_back(stod(file1Delim.at(i)));

    }

    for (unsigned int i = 0; i < file1Objects.size(); i++){

        file1ObjectsTemp.push_back(file1Objects.at(i));
    }

}

void Lego:: vectorForFile2(){

    for (unsigned int i = 0; i < file2Delim.size(); i+=6){

        setNumber2.push_back(file2Delim.at(i));

    }

    for (unsigned int i = 1; i < file2Delim.size(); i+=6){

        theme2.push_back(file2Delim.at(i));

    }

    for (unsigned int i = 2; i < file2Delim.size(); i+=6){

        name2.push_back(file2Delim.at(i));

    }

    for (unsigned int i = 3; i < file2Delim.size(); i+=6){

        miniFigs2.push_back(stoi(file2Delim.at(i)));

    }

    for (unsigned int i = 4; i < file2Delim.size(); i+=6){

        pieces2.push_back(stoi(file2Delim.at(i)));

    }

    for (unsigned int i = 5; i < file2Delim.size(); i+=6){

        price2.push_back(stof(file2Delim.at(i)));

    }

    for (unsigned int i = 0; i < file2Objects.size(); i++){

        file2ObjectsTemp.push_back(file2Objects.at(i));
    }

}

void Lego::vectorForFile3() {

    for (unsigned int i = 0; i < file3Delim.size(); i+=6){

        setNumber3.push_back(file3Delim.at(i));

    }

    for (unsigned int i = 1; i < file3Delim.size(); i+=6){

        theme3.push_back(file3Delim.at(i));

    }

    for (unsigned int i = 2; i < file3Delim.size(); i+=6){

        name3.push_back(file3Delim.at(i));

    }

    for (unsigned int i = 3; i < file3Delim.size(); i+=6){

        miniFigs3.push_back(stoi(file3Delim.at(i)));

    }

    for (unsigned int i = 4; i < file3Delim.size(); i+=6){

        pieces3.push_back(stoi(file3Delim.at(i)));

    }

    for (unsigned int i = 5; i < file3Delim.size(); i+=6){

        price3.push_back(stod(file3Delim.at(i)));

    }

    for (unsigned int i = 0; i < file3Objects.size(); i++){

        file3ObjectsTemp.push_back(file3Objects.at(i));
    }

}

void Lego::vectorForChoice4() {

    for (unsigned int i = 0; i < file1Delim.size(); i+=6){

        setNumber4.push_back(file1Delim.at(i));

    }
    for (unsigned int i = 0; i < file2Delim.size(); i+=6){

        setNumber4.push_back(file2Delim.at(i));

    }
    for (unsigned int i = 0; i < file3Delim.size(); i+=6){

        setNumber4.push_back(file3Delim.at(i));

    }


    for (unsigned int i = 1; i < file1Delim.size(); i+=6){

        theme4.push_back(file1Delim.at(i));

    }
    for (unsigned int i = 1; i < file2Delim.size(); i+=6){

        theme4.push_back(file2Delim.at(i));

    }
    for (unsigned int i = 1; i < file3Delim.size(); i+=6){

        theme4.push_back(file3Delim.at(i));

    }


    for (unsigned int i = 2; i < file1Delim.size(); i+=6){

        name4.push_back(file1Delim.at(i));

    }
    for (unsigned int i = 2; i < file2Delim.size(); i+=6){

        name4.push_back(file2Delim.at(i));

    }
    for (unsigned int i = 2; i < file3Delim.size(); i+=6){

        name4.push_back(file3Delim.at(i));

    }


    for (unsigned int i = 3; i < file1Delim.size(); i+=6){

        miniFigs4.push_back(stoi(file1Delim.at(i)));

    }
    for (unsigned int i = 3; i < file2Delim.size(); i+=6){

        miniFigs4.push_back(stoi(file2Delim.at(i)));

    }
    for (unsigned int i = 3; i < file3Delim.size(); i+=6){

        miniFigs4.push_back(stoi(file3Delim.at(i)));

    }


    for (unsigned int i = 4; i < file1Delim.size(); i+=6){

        pieces4.push_back(stoi(file1Delim.at(i)));

    }
    for (unsigned int i = 4; i < file2Delim.size(); i+=6){

        pieces4.push_back(stoi(file2Delim.at(i)));

    }
    for (unsigned int i = 4; i < file3Delim.size(); i+=6){

        pieces4.push_back(stoi(file3Delim.at(i)));

    }


    for (unsigned int i = 5; i < file1Delim.size(); i+=6){

        price4.push_back(stod(file1Delim.at(i)));

    }
    for (unsigned int i = 5; i < file2Delim.size(); i+=6){

        price4.push_back(stod(file2Delim.at(i)));

    }
    for (unsigned int i = 5; i < file3Delim.size(); i+=6){

        price4.push_back(stod(file3Delim.at(i)));

    }

    for (unsigned int i = 0; i < file1Objects.size(); i++){

        file4ObjectsTemp.push_back(file1Objects.at(i));
    }
    for (unsigned int i = 0; i < file2Objects.size(); i++){

        file4ObjectsTemp.push_back(file2Objects.at(i));
    }
    for (unsigned int i = 0; i < file3Objects.size(); i++){

        file4ObjectsTemp.push_back(file3Objects.at(i));
    }


}

void Lego::openFile1(){

    ifstream file1;
    file1.open("Lab 4 - File I_O/lego1.csv");

    if (file1.is_open()){

        string line;
        string newLine;
        getline(file1, line);

        while(getline(file1, line)){

            file1Objects.push_back(line);

        }

    }

    //cout << file1Objects.size() << endl;

    for (unsigned int i = 0; i < file1Objects.size(); i++){

        stringstream ss(file1Objects[i]);

        while(ss.good()){

            string newString;
            getline(ss, newString, ',');
            file1Delim.push_back(newString);

        }

    }

    file1.close();

}

void Lego:: openFile2(){

    ifstream file2;
    file2.open("Lab 4 - File I_O/lego2.csv");

    if (file2.is_open()){

        string line;
        string newLine;
        getline(file2, line);

        while(getline(file2, line)){

            file2Objects.push_back(line);

        }

    }

    for (unsigned int i = 0; i < file2Objects.size(); i++){

        stringstream ss(file2Objects[i]);

        while(ss.good()){

            string newString;
            getline(ss, newString, ',');
            file2Delim.push_back(newString);

        }

    }

    file2.close();

}

void Lego:: openFile3(){

    ifstream file3;
    file3.open("Lab 4 - File I_O/lego3.csv");

    if (file3.is_open()){

        string line;
        string newLine;
        getline(file3, line);

        while(getline(file3, line)){

            file3Objects.push_back(line);

        }

    }

    for (unsigned int i = 0; i < file3Objects.size(); i++){

        stringstream ss(file3Objects[i]);

        while(ss.good()){

            string newString;
            getline(ss, newString, ',');
            file3Delim.push_back(newString);

        }

    }

    file3.close();
}

int main(){

    cout << std::fixed << setprecision(2);
    cout << "Which file(s) to open?\n";
    cout << "1. lego1.csv" << endl;
    cout << "2. lego2.csv" << endl;
    cout << "3. lego3.csv" << endl;
    cout << "4. All 3 files" << endl;
    int option;
    cin >> option;

    /*======= Load data from file(s) =======*/

    Lego file;

    if(option == 1){

        file.openFile1();
        file.vectorForFile1();
        //file.print();

    }

    else if(option == 2){

        file.openFile2();
        file.vectorForFile2();
        //file.print();

    }

    else if(option == 3){

        file.openFile3();
        file.vectorForFile3();

    }

    else if(option == 4){

        file.openFile1();
        file.openFile2();
        file.openFile3();
        file.vectorForChoice4();

    }

    else{

        cout << "invalid input" << endl;

    }

    cout << "1. Most Expensive set" << endl;
    cout << "2. Largest piece count" << endl;
    cout << "3. Search for set name containing..." << endl;
    cout << "4. Search themes..." << endl;
    cout << "5. Part count information" << endl;
    cout << "6. Price information" << endl;
    cout << "7. Minifigure information" << endl;
    cout << "8. If you bought one of everything..." << endl;
    cout << "0. Exit" << endl;

    int choice;
    cin >> choice;
    cin.get();  // Clear newline character for any later input
    //cin.clear('/n');

    if(choice == 0){

        cout << "Existing program" << endl;
    }
    else if(choice == 1){

        if(option == 1){

            double max = 0;
            int index;

            for(unsigned int i = 0; i < file.price1.size(); i++){

                if(file.price1.at(i) > max){

                    max = file.price1.at(i);
                    index = i;

                }

            }

            cout << "Total number of sets: " << file.price1.size() << endl;
            cout << endl;
            cout << "The most expensive set is: " << endl;
            cout << "Name: " << file.name1.at(index) << endl;
            cout << "Number: " << file.setNumber1.at(index) << endl;
            cout << "Theme: " << file.theme1.at(index) << endl;
            cout << "Price: $" << file.price1.at(index) << endl;
            cout << "Minifigures: " << file.miniFigs1.at(index) << endl;
            cout << "Piece count: " << file.pieces1.at(index) << endl;

        }
        if(option == 2){

            double max = 0;
            int index;
            for(unsigned int i = 0; i < file.price2.size(); i++){

                if(file.price2.at(i) > max){

                    max = file.price2.at(i);
                    index = i;

                }

            }

            cout << "Total number of sets: " << file.price2.size() << endl;
            cout << endl;
            cout << "The most expensive set is: " << endl;
            cout << "Name: " << file.name2.at(index) << endl;
            cout << "Number: " << file.setNumber2.at(index) << endl;
            cout << "Theme: " << file.theme2.at(index) << endl;
            cout << "Price: $" << file.price2.at(index) << endl;
            cout << "Minifigures: " << file.miniFigs2.at(index) << endl;
            cout << "Piece count: " << file.pieces2.at(index) << endl;
        }
        if(option == 3){

            double max = 0;
            int index;
            for(unsigned int i = 0; i < file.price3.size(); i++){

                if(file.price3.at(i) > max){

                    max = file.price3.at(i);
                    index = i;

                }

            }

            cout << "Total number of sets: " << file.price3.size() << endl;
            cout << endl;
            cout << "The most expensive set is: " << endl;
            cout << "Name: " << file.name3.at(index) << endl;
            cout << "Number: " << file.setNumber3.at(index) << endl;
            cout << "Theme: " << file.theme3.at(index) << endl;
            cout << "Price: $" << file.price3.at(index) << endl;
            cout << "Minifigures: " << file.miniFigs3.at(index) << endl;
            cout << "Piece count: " << file.pieces3.at(index) << endl;
        }
        if(option == 4) {

            double max = 0;
            int index;

            for(unsigned int i = 0; i < file.price4.size(); i++){

                if(file.price4.at(i) > max){

                    max = file.price4.at(i);
                    index = i;

                }

            }

            cout << "Total number of sets: " << file.price4.size() << endl;
            cout << endl;
            cout << "The most expensive set is: " << endl;
            cout << "Name: " << file.name4.at(index) << endl;
            cout << "Number: " << file.setNumber4.at(index) << endl;
            cout << "Theme: " << file.theme4.at(index) << endl;
            cout << "Price: $" << file.price4.at(index) << endl;
            cout << "Minifigures: " << file.miniFigs4.at(index) << endl;
            cout << "Piece count: " << file.pieces4.at(index) << endl;

        }

    }
    else if(choice == 2){

        if(option == 1){

            int max = 0;
            int index;

            for(unsigned int i = 0; i < file.pieces1.size(); i++){

                if(file.pieces1.at(i) > max){

                    max = file.pieces1.at(i);
                    index = i;

                }

            }

            cout << "Total number of sets: " << file.file1Objects.size() << endl;
            cout << endl;
            cout << "The set with the highest parts count: " << endl;
            cout << "Name: " << file.name1.at(index) << endl;
            cout << "Number: " << file.setNumber1.at(index) << endl;
            cout << "Theme: " << file.theme1.at(index) << endl;
            cout << "Price: $" << file.price1.at(index) << endl;
            cout << "Minifigures: " << file.miniFigs1.at(index) << endl;
            cout << "Piece count: " << file.pieces1.at(index) << endl;
        }
        if(option == 2){
            int max = 0;
            int index;
            for(unsigned int i = 0; i < file.pieces2.size(); i++){

                if(file.pieces2.at(i) > max){

                    max = file.pieces2.at(i);
                    index = i;
                }

            }

            cout << "Total number of sets: " << file.file2Objects.size() << endl;
            cout << endl;
            cout << "The set with the highest parts count: " << endl;
            cout << "Name: " << file.name2.at(index) << endl;
            cout << "Number: " << file.setNumber2.at(index) << endl;
            cout << "Theme: " << file.theme2.at(index) << endl;
            cout << "Price: $" << file.price2.at(index) << endl;
            cout << "Minifigures: " << file.miniFigs2.at(index) << endl;
            cout << "Piece count: " << file.pieces2.at(index) << endl;
        }
        if(option == 3){
            int max = 0;
            int index;
            for(unsigned int i = 0; i < file.pieces3.size(); i++){

                if(file.pieces3.at(i) > max){

                    max = file.pieces3.at(i);
                    index = i;

                }

            }

            cout << "Total number of sets: " << file.file3Objects.size() << endl;
            cout << endl;
            cout << "The set with the highest parts count: " << endl;
            cout << "Name: " << file.name3.at(index) << endl;
            cout << "Number: " << file.setNumber3.at(index) << endl;
            cout << "Theme: " << file.theme3.at(index) << endl;
            cout << "Price: $" << file.price3.at(index) << endl;
            cout << "Minifigures: " << file.miniFigs3.at(index) << endl;
            cout << "Piece count: " << file.pieces3.at(index) << endl;
        }
        if(option == 4){

            int max = 0;
            int index;
            for(unsigned int i = 0; i < file.pieces4.size(); i++){

                if(file.pieces4.at(i) > max){

                    max = file.pieces4.at(i);
                    index = i;

                }

            }

            cout << "Total number of sets: " << file.pieces4.size() << endl;
            cout << endl;
            cout << "The set with the highest parts count: " << endl;
            cout << "Name: " << file.name4.at(index) << endl;
            cout << "Number: " << file.setNumber4.at(index) << endl;
            cout << "Theme: " << file.theme4.at(index) << endl;
            cout << "Price: $" << file.price4.at(index) << endl;
            cout << "Minifigures: " << file.miniFigs4.at(index) << endl;
            cout << "Piece count: " << file.pieces4.at(index) << endl;

        }

    }
    else if(choice == 3){

        if(option == 1){

            vector<string> strMatchingInput;
            string userInput;
            cout << "Enter a string to search" << endl;
            getline(cin, userInput);

            for(unsigned int i = 0; i < file.file1ObjectsTemp.size(); i++){

                if(file.file1ObjectsTemp.at(i).find(userInput) != string::npos){

                    strMatchingInput.push_back(file.file1ObjectsTemp.at(i));

                }
            }

            if(strMatchingInput.size() == 0){

                cout << "Total number of sets: " << file.price1.size() << endl;
                cout << "No sets found matching that search term" << endl;

            }
            else{

                cout << "Total number of sets: " << file.price1.size() << endl;
                cout << "Sets matching \"" << userInput << "\":" << endl;

                for(unsigned int i = 0; i < file.file1ObjectsTemp.size(); i++){

                    if(file.file1ObjectsTemp.at(i).find(userInput) != string::npos){

                        cout << file.setNumber1.at(i) << " ";
                        cout << file.name1.at(i) << " ";
                        cout << "$" << file.price1.at(i) << " " << endl;

                    }
                }
            }

        }
        if(option == 2){

            vector<string> strMatchingInput;
            string userInput;
            cout << "Enter a string to search" << endl;
            getline(cin, userInput);

            for(unsigned int i = 0; i < file.file2ObjectsTemp.size(); i++){

                if(file.file2ObjectsTemp.at(i).find(userInput) != string::npos){

                    strMatchingInput.push_back(file.file2ObjectsTemp.at(i));

                }
            }

            if(strMatchingInput.size() == 0){

                cout << "Total number of sets: " << file.price2.size() << endl;
                cout << "No sets found matching that search term" << endl;

            }
            else{

                cout << "Total number of sets: " << file.price2.size() << endl;
                cout << "Sets matching \"" << userInput << "\":" << endl;

                for(unsigned int i = 0; i < file.file2ObjectsTemp.size(); i++){

                    if(file.file2ObjectsTemp.at(i).find(userInput) != string::npos){

                        cout << file.setNumber2.at(i) << " ";
                        cout << file.name2.at(i) << " ";
                        cout << "$" << file.price2.at(i) << " " << endl;

                    }
                }
            }

        }
        if(option == 3){

            vector<string> strMatchingInput;
            string userInput;
            cout << "Enter a string to search" << endl;
            getline(cin, userInput);

            for(unsigned int i = 0; i < file.file3ObjectsTemp.size(); i++){

                if(file.file3ObjectsTemp.at(i).find(userInput) != string::npos){

                    strMatchingInput.push_back(file.file3ObjectsTemp.at(i));

                }
            }

            if(strMatchingInput.size() == 0){

                cout << "Total number of sets: " << file.price3.size() << endl;
                cout << "No sets found matching that search term" << endl;

            }
            else{

                cout << "Total number of sets: " << file.price3.size() << endl;
                cout << "Sets matching \"" << userInput << "\":" << endl;

                for(unsigned int i = 0; i < file.file3ObjectsTemp.size(); i++){

                    if(file.file3ObjectsTemp.at(i).find(userInput) != string::npos){

                        cout << file.setNumber3.at(i) << " ";
                        cout << file.name3.at(i) << " ";
                        cout << "$" << file.price3.at(i) << " " << endl;

                    }
                }
            }


        }
        if(option == 4){

            vector<string> strMatchingInput;
            string userInput;
            cout << "Enter a string to search" << endl;
            getline(cin, userInput);

            for(unsigned int i = 0; i < file.file4ObjectsTemp.size(); i++){

                if(file.file4ObjectsTemp.at(i).find(userInput) != string::npos){

                    strMatchingInput.push_back(file.file4ObjectsTemp.at(i));

                }
            }

            if(strMatchingInput.size() == 0){

                cout << "Total number of sets: " << file.price4.size() << endl;
                cout << "No sets found matching that search term" << endl;

            }
            else{

                cout << "Total number of sets: " << file.price4.size() << endl;
                cout << "Sets matching \"" << userInput << "\":" << endl;

                for(unsigned int i = 0; i < file.file4ObjectsTemp.size(); i++){

                    if(file.file4ObjectsTemp.at(i).find(userInput) != string::npos){

                        cout << file.setNumber4.at(i) << " ";
                        cout << file.name4.at(i) << " ";
                        cout << "$" << file.price4.at(i) << " " << endl;

                    }
                }
            }


        }

    }
    else if(choice == 4){

        if(option == 1){

            vector<string> strMatchingInput;
            string userInput;
            cout << "Enter a string to search" << endl;
            getline(cin, userInput);

            for(unsigned int i = 0; i < file.theme1.size(); i++){

                if(file.theme1.at(i).find(userInput) != string::npos){

                    strMatchingInput.push_back(file.theme1.at(i));

                }
            }

            if(strMatchingInput.size() == 0){

                cout << "Total number of sets: " << file.price1.size() << endl;
                cout << "No sets found matching that search term" << endl;

            }
            else{

                cout << "Total number of sets: " << file.price1.size() << endl;
                cout << "Sets matching \"" << userInput << "\":" << endl;

                for(unsigned int i = 0; i < file.file1ObjectsTemp.size(); i++){

                    if(file.file1ObjectsTemp.at(i).find(userInput) != string::npos){

                        cout << file.setNumber1.at(i) << " ";
                        cout << file.name1.at(i) << " ";
                        cout << "$" << file.price1.at(i) << " " << endl;

                    }
                }
            }


        }
        if(option == 2){

            vector<string> strMatchingInput;
            string userInput;
            cout << "Enter a string to search" << endl;
            getline(cin, userInput);

            for(unsigned int i = 0; i < file.theme2.size(); i++){

                if(file.theme2.at(i).find(userInput) != string::npos){

                    strMatchingInput.push_back(file.theme2.at(i));

                }
            }

            if(strMatchingInput.size() == 0){

                cout << "Total number of sets: " << file.price2.size() << endl;
                cout << "No sets found matching that search term" << endl;

            }
            else{

                cout << "Total number of sets: " << file.price2.size() << endl;
                cout << "Sets matching \"" << userInput << "\":" << endl;

                for(unsigned int i = 0; i < file.file2ObjectsTemp.size(); i++){

                    if(file.file2ObjectsTemp.at(i).find(userInput) != string::npos){

                        cout << file.setNumber2.at(i) << " ";
                        cout << file.name2.at(i) << " ";
                        cout << "$" << file.price2.at(i) << " " << endl;

                    }
                }
            }

        }
        if(option == 3){

            vector<string> strMatchingInput;
            string userInput;
            cout << "Enter a string to search" << endl;
            getline(cin, userInput);

            for(unsigned int i = 0; i < file.theme3.size(); i++){

                if(file.theme3.at(i).find(userInput) != string::npos){

                    strMatchingInput.push_back(file.theme3.at(i));

                }
            }

            if(strMatchingInput.size() == 0){

                cout << "Total number of sets: " << file.price3.size() << endl;
                cout << "No sets found matching that search term" << endl;

            }
            else{

                cout << "Total number of sets: " << file.price3.size() << endl;
                cout << "Sets matching \"" << userInput << "\":" << endl;

                for(unsigned int i = 0; i < file.file3ObjectsTemp.size(); i++){

                    if(file.file3ObjectsTemp.at(i).find(userInput) != string::npos){

                        cout << file.setNumber3.at(i) << " ";
                        cout << file.name3.at(i) << " ";
                        cout << "$" << file.price3.at(i) << " " << endl;

                    }
                }
            }

        }
        if(option == 4){
            vector<string> strMatchingInput;
            string userInput;
            cout << "Enter a string to search" << endl;
            getline(cin, userInput);

            for(unsigned int i = 0; i < file.theme4.size(); i++){

                if(file.theme4.at(i).find(userInput) != string::npos){

                    strMatchingInput.push_back(file.theme4.at(i));

                }
            }

            if(strMatchingInput.size() == 0){

                cout << "Total number of sets: " << file.price4.size() << endl;
                cout << "No sets found matching that search term" << endl;

            }
            else{

                cout << "Total number of sets: " << file.price4.size() << endl;
                cout << "Sets matching \"" << userInput << "\":" << endl;

                for(unsigned int i = 0; i < file.file4ObjectsTemp.size(); i++){

                    if(file.file4ObjectsTemp.at(i).find(userInput) != string::npos){

                        cout << file.setNumber4.at(i) << " ";
                        cout << file.name4.at(i) << " ";
                        cout << "$" << file.price4.at(i) << " " << endl;

                    }
                }
            }

        }

    }
    else if(choice == 5){

        if(option == 1){

            int count = 0;
            int sum = 0;
            int averageCount;

            for(unsigned int i = 0; i < file.pieces1.size(); i++){

                sum += file.pieces1.at(i);
                count++;
            }

            averageCount = sum / count;

            cout << "Total number of sets: " << file.pieces1.size() << endl;

            cout << "Average part count for " << file.pieces1.size() << " sets: " << averageCount << endl;

        }
        if(option == 2){

            int count = 0;
            int sum = 0;
            int averageCount;

            for(unsigned int i = 0; i < file.pieces2.size(); i++){

                sum += file.pieces2.at(i);
                count++;
            }

            averageCount = sum / count;

            cout << "Total number of sets: " << file.pieces2.size() << endl;

            cout << "Average part count for " << file.pieces2.size() << " sets: " << averageCount << endl;

        }
        if(option == 3){

            int count = 0;
            int sum = 0;
            int averageCount;

            for(unsigned int i = 0; i < file.pieces3.size(); i++){

                sum += file.pieces3.at(i);
                count++;
            }

            averageCount = sum / count;

            cout << "Total number of sets: " << file.pieces3.size() << endl;

            cout << "Average part count for " << file.pieces3.size() << " sets: " << averageCount << endl;


        }
        if(option == 4){

            int count = 0;
            int sum = 0;
            int averageCount;

            for(unsigned int i = 0; i < file.pieces4.size(); i++){

                sum += file.pieces4.at(i);
                count++;
            }

            averageCount = sum / count;

            cout << "Total number of sets: " << file.pieces4.size() << endl;

            cout << "Average part count for " << file.pieces4.size() << " sets: " << averageCount << endl;

        }

    }
    else if(choice == 6){

        if(option == 1){

            int count = 0;
            double sum = 0;
            double averagePrice;

            for(unsigned int i = 0; i < file.price1.size(); i++){

                sum += file.price1.at(i);
                count++;
            }

            averagePrice = ((sum) / (count));

            double max = 0;
            int maxIndex;

            for(unsigned int i = 0; i < file.price1.size(); i++){

                if(file.price1.at(i) > max){

                    max = file.price1.at(i);
                    maxIndex = i;
                }
            }

            double min = file.price1.at(maxIndex);
            int minIndex;

            for(unsigned int i = 0; i < file.price1.size(); i++){

                if(file.price1.at(i) < min){

                    min = file.price1.at(i);
                    minIndex = i;
                }
            }

            cout << "Total number of sets: " << file.price1.size() << endl;
            cout << "Average price for " << file.price1.size() << " sets: $" << averagePrice << endl;
            cout << endl;
            cout << "Least expensive set: " << endl;
            cout << "Name: " << file.name1.at(minIndex) << endl;
            cout << "Number: " << file.setNumber1.at(minIndex) << endl;
            cout << "Theme: " << file.theme1.at(minIndex) << endl;
            cout << "Price: $" << file.price1.at(minIndex) << endl;
            cout << "Minifigures: " << file.miniFigs1.at(minIndex) << endl;
            cout << "Piece count: " << file.pieces1.at(minIndex) << endl;
            cout << endl;
            cout << "Most expensive set: " << endl;
            cout << "Name: " << file.name1.at(maxIndex) << endl;
            cout << "Number: " << file.setNumber1.at(maxIndex) << endl;
            cout << "Theme: " << file.theme1.at(maxIndex) << endl;
            cout << "Price: $" << file.price1.at(maxIndex) << endl;
            cout << "Minifigures: " << file.miniFigs1.at(maxIndex) << endl;
            cout << "Piece count: " << file.pieces1.at(maxIndex) << endl;

        }
        if(option == 2){

            int count = 0;
            double sum = 0;
            double averagePrice;

            for(unsigned int i = 0; i < file.price2.size(); i++){

                sum += file.price2.at(i);
                count++;
            }

            averagePrice = ((sum) / (count));

            double max = 0;
            int maxIndex;

            for(unsigned int i = 0; i < file.price2.size(); i++){

                if(file.price2.at(i) > max){

                    max = file.price2.at(i);
                    maxIndex = i;
                }
            }

            double min = file.price2.at(maxIndex);
            int minIndex;

            for(unsigned int i = 0; i < file.price2.size(); i++){

                if(file.price2.at(i) < min){

                    min = file.price2.at(i);
                    minIndex = i;
                }
            }

            cout << "Total number of sets: " << file.price2.size() << endl;
            cout << "Average price for " << file.price2.size() << " sets: $" << averagePrice << endl;
            cout << endl;
            cout << "Least expensive set: " << endl;
            cout << "Name: " << file.name2.at(minIndex) << endl;
            cout << "Number: " << file.setNumber2.at(minIndex) << endl;
            cout << "Theme: " << file.theme2.at(minIndex) << endl;
            cout << "Price: $" << file.price2.at(minIndex) << endl;
            cout << "Minifigures: " << file.miniFigs2.at(minIndex) << endl;
            cout << "Piece count: " << file.pieces2.at(minIndex) << endl;
            cout << endl;
            cout << "Most expensive set: " << endl;
            cout << "Name: " << file.name2.at(maxIndex) << endl;
            cout << "Number: " << file.setNumber2.at(maxIndex) << endl;
            cout << "Theme: " << file.theme2.at(maxIndex) << endl;
            cout << "Price: $" << file.price2.at(maxIndex) << endl;
            cout << "Minifigures: " << file.miniFigs2.at(maxIndex) << endl;
            cout << "Piece count: " << file.pieces2.at(maxIndex) << endl;


        }
        if(option == 3){

            int count = 0;
            double sum = 0;
            double averagePrice;

            for(unsigned int i = 0; i < file.price3.size(); i++){

                sum += file.price3.at(i);
                count++;
            }

            averagePrice = ((sum) / (count));

            double max = 0;
            int maxIndex;

            for(unsigned int i = 0; i < file.price3.size(); i++){

                if(file.price3.at(i) > max){

                    max = file.price3.at(i);
                    maxIndex = i;
                }
            }

            double min = file.price3.at(maxIndex);
            int minIndex;

            for(unsigned int i = 0; i < file.price3.size(); i++){

                if(file.price3.at(i) < min){

                    min = file.price3.at(i);
                    minIndex = i;
                }
            }

            cout << "Total number of sets: " << file.price3.size() << endl;
            cout << "Average price for " << file.price3.size() << " sets: $" << averagePrice << endl;
            cout << endl;
            cout << "Least expensive set: " << endl;
            cout << "Name: " << file.name3.at(minIndex) << endl;
            cout << "Number: " << file.setNumber3.at(minIndex) << endl;
            cout << "Theme: " << file.theme3.at(minIndex) << endl;
            cout << "Price: $" << file.price3.at(minIndex) << endl;
            cout << "Minifigures: " << file.miniFigs3.at(minIndex) << endl;
            cout << "Piece count: " << file.pieces3.at(minIndex) << endl;
            cout << endl;
            cout << "Most expensive set: " << endl;
            cout << "Name: " << file.name3.at(maxIndex) << endl;
            cout << "Number: " << file.setNumber3.at(maxIndex) << endl;
            cout << "Theme: " << file.theme3.at(maxIndex) << endl;
            cout << "Price: $" << file.price3.at(maxIndex) << endl;
            cout << "Minifigures: " << file.miniFigs3.at(maxIndex) << endl;
            cout << "Piece count: " << file.pieces3.at(maxIndex) << endl;



        }
        if(option == 4){

            int count = 0;
            double sum = 0;
            double averagePrice;

            for(unsigned int i = 0; i < file.price4.size(); i++){

                sum += file.price4.at(i);
                count++;
            }

            averagePrice = ((sum) / (count));

            double max = 0;
            int maxIndex;

            for(unsigned int i = 0; i < file.price4.size(); i++){

                if(file.price4.at(i) > max){

                    max = file.price4.at(i);
                    maxIndex = i;
                }
            }

            double min = file.price4.at(maxIndex);
            int minIndex;

            for(unsigned int i = 0; i < file.price4.size(); i++){

                if(file.price4.at(i) < min){

                    min = file.price4.at(i);
                    minIndex = i;
                }
            }

            cout << "Total number of sets: " << file.price4.size() << endl;
            cout << "Average price for " << file.price4.size() << " sets: $" << averagePrice << endl;
            cout << endl;
            cout << "Least expensive set: " << endl;
            cout << "Name: " << file.name4.at(minIndex) << endl;
            cout << "Number: " << file.setNumber4.at(minIndex) << endl;
            cout << "Theme: " << file.theme4.at(minIndex) << endl;
            cout << "Price: $" << file.price4.at(minIndex) << endl;
            cout << "Minifigures: " << file.miniFigs4.at(minIndex) << endl;
            cout << "Piece count: " << file.pieces4.at(minIndex) << endl;
            cout << endl;
            cout << "Most expensive set: " << endl;
            cout << "Name: " << file.name4.at(maxIndex) << endl;
            cout << "Number: " << file.setNumber4.at(maxIndex) << endl;
            cout << "Theme: " << file.theme4.at(maxIndex) << endl;
            cout << "Price: $" << file.price4.at(maxIndex) << endl;
            cout << "Minifigures: " << file.miniFigs4.at(maxIndex) << endl;
            cout << "Piece count: " << file.pieces4.at(maxIndex) << endl;

        }

    }
    else if(choice == 7){

        if(option == 1){

            int count = 0;
            int sum = 0;
            int averageMinifigs;

            for(unsigned int i = 0; i < file.miniFigs1.size(); i++){

                sum += file.miniFigs1.at(i);
                count++;
            }

            averageMinifigs = sum / count;

            double max = 0;
            int maxIndex;

            for(unsigned int i = 0; i < file.miniFigs1.size(); i++){

                if(file.miniFigs1.at(i) > max){

                    max = file.miniFigs1.at(i);
                    maxIndex = i;
                }
            }
            cout << "Total number of sets: " << file.price1.size() << endl;
            cout << "Average number of minifigures " << averageMinifigs << endl;
            cout << endl;
            cout << "Set with the most minifigures: " << endl;
            cout << "Name: " << file.name1.at(maxIndex) << endl;
            cout << "Number: " << file.setNumber1.at(maxIndex) << endl;
            cout << "Theme: " << file.theme1.at(maxIndex) << endl;
            cout << "Price: $" << file.price1.at(maxIndex) << endl;
            cout << "Minifigures: " << file.miniFigs1.at(maxIndex) << endl;
            cout << "Piece count: " << file.pieces1.at(maxIndex) << endl;
        }
        if(option == 2){

            int count = 0;
            int sum = 0;
            int averageMinifigs;

            for(unsigned int i = 0; i < file.miniFigs2.size(); i++){

                sum += file.miniFigs2.at(i);
                count++;
            }

            averageMinifigs = sum / count;

            double max = 0;
            int maxIndex;

            for(unsigned int i = 0; i < file.miniFigs2.size(); i++){

                if(file.miniFigs2.at(i) > max){

                    max = file.miniFigs2.at(i);
                    maxIndex = i;
                }
            }
            cout << "Total number of sets: " << file.price2.size() << endl;
            cout << "Average number of minifigures " << averageMinifigs << endl;
            cout << endl;
            cout << "Set with the most minifigures: " << endl;
            cout << "Name: " << file.name2.at(maxIndex) << endl;
            cout << "Number: " << file.setNumber2.at(maxIndex) << endl;
            cout << "Theme: " << file.theme2.at(maxIndex) << endl;
            cout << "Price: $" << file.price2.at(maxIndex) << endl;
            cout << "Minifigures: " << file.miniFigs2.at(maxIndex) << endl;
            cout << "Piece count: " << file.pieces2.at(maxIndex) << endl;
        }
        if(option == 3){

            int count = 0;
            int sum = 0;
            int averageMinifigs;

            for(unsigned int i = 0; i < file.miniFigs3.size(); i++){

                sum += file.miniFigs3.at(i);
                count++;
            }

            averageMinifigs = sum / count;

            double max = 0;
            int maxIndex;

            for(unsigned int i = 0; i < file.miniFigs3.size(); i++){

                if(file.miniFigs3.at(i) > max){

                    max = file.miniFigs3.at(i);
                    maxIndex = i;
                }
            }
            cout << "Total number of sets: " << file.price3.size() << endl;
            cout << "Average number of minifigures " << averageMinifigs << endl;
            cout << endl;
            cout << "Set with the most minifigures: " << endl;
            cout << "Name: " << file.name3.at(maxIndex) << endl;
            cout << "Number: " << file.setNumber3.at(maxIndex) << endl;
            cout << "Theme: " << file.theme3.at(maxIndex) << endl;
            cout << "Price: $" << file.price3.at(maxIndex) << endl;
            cout << "Minifigures: " << file.miniFigs3.at(maxIndex) << endl;
            cout << "Piece count: " << file.pieces3.at(maxIndex) << endl;



        }
        if(option == 4){

            int count = 0;
            int sum = 0;
            int averageMinifigs;

            for(unsigned int i = 0; i < file.miniFigs4.size(); i++){

                sum += file.miniFigs4.at(i);
                count++;
            }

            averageMinifigs = sum / count;

            double max = 0;
            int maxIndex;

            for(unsigned int i = 0; i < file.miniFigs4.size(); i++){

                if(file.miniFigs4.at(i) > max){

                    max = file.miniFigs4.at(i);
                    maxIndex = i;
                }
            }
            cout << "Total number of sets: " << file.price4.size() << endl;
            cout << "Average number of minifigures: " << averageMinifigs << endl;
            cout << endl;
            cout << "Set with the most minifigures: " << endl;
            cout << "Name: " << file.name4.at(maxIndex) << endl;
            cout << "Number: " << file.setNumber4.at(maxIndex) << endl;
            cout << "Theme: " << file.theme4.at(maxIndex) << endl;
            cout << "Price: $" << file.price4.at(maxIndex) << endl;
            cout << "Minifigures: " << file.miniFigs4.at(maxIndex) << endl;
            cout << "Piece count: " << file.pieces4.at(maxIndex) << endl;

        }

    }
    else if(choice == 8){

        if(option == 1){

            double totalPrice = 0;
            int totalParts = 0;
            int totalMinifigures = 0;

            for(unsigned int i = 0; i < file.price1.size(); i++){

                totalPrice += file.price1.at(i);
                totalParts += file.pieces1.at(i);
                totalMinifigures += file.miniFigs1.at(i);

            }
            cout << endl;
            cout << "Total number of sets: " << file.price1.size() << endl;
            cout << "If you bought one of everything..." << endl;
            cout << "It would cost: $" << totalPrice << endl;
            cout << "You would have " << totalParts << " pieces in your collection" << endl;
            cout << "You would have an army of " << totalMinifigures << " minifigures!" << endl;

        }
        if(option == 2){

            double totalPrice = 0;
            int totalParts = 0;
            int totalMinifigures = 0;

            for(unsigned int i = 0; i < file.price2.size(); i++){

                totalPrice += file.price2.at(i);
                totalParts += file.pieces2.at(i);
                totalMinifigures += file.miniFigs2.at(i);

            }
            cout << endl;
            cout << "Total number of sets: " << file.price2.size() << endl;
            cout << "If you bought one of everything..." << endl;
            cout << "It would cost: $" << totalPrice << endl;
            cout << "You would have " << totalParts << " pieces in your collection" << endl;
            cout << "You would have an army of " << totalMinifigures << " minifigures!" << endl;

        }
        if(option == 3){

            double totalPrice = 0;
            int totalParts = 0;
            int totalMinifigures = 0;

            for(unsigned int i = 0; i < file.price3.size(); i++){

                totalPrice += file.price3.at(i);
                totalParts += file.pieces3.at(i);
                totalMinifigures += file.miniFigs3.at(i);

            }
            cout << endl;
            cout << "Total number of sets: " << file.price3.size() << endl;
            cout << "If you bought one of everything..." << endl;
            cout << "It would cost: $" << totalPrice << endl;
            cout << "You would have " << totalParts << " pieces in your collection" << endl;
            cout << "You would have an army of " << totalMinifigures << " minifigures!" << endl;

        }
        if(option == 4){

            double totalPrice = 0;
            int totalParts = 0;
            int totalMinifigures = 0;

            for(unsigned int i = 0; i < file.price4.size(); i++){

                totalPrice += file.price4.at(i);
                totalParts += file.pieces4.at(i);
                totalMinifigures += file.miniFigs4.at(i);

            }
            cout << endl;
            cout << "Total number of sets: " << file.price4.size() << endl;
            cout << "If you bought one of everything..." << endl;
            cout << "It would cost: $" << totalPrice << endl;
            cout << "You would have " << totalParts << " pieces in your collection" << endl;
            cout << "You would have an army of " << totalMinifigures << " minifigures!" << endl;

        }

    }
    else{

        cout << "invalid input" << endl;

    }

    /*======= Based on the choice, execute the appropriate task and show the results =======*/

    return 0;
}