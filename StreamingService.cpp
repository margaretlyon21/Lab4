#include <iostream>
#include <string>

using namespace std;

class StreamingService{
    private:
        string Title;
        string Description;
    public:
    //Getters/Setters
        void setTitle(string newTitle){
            Title = newTitle;
        }
        string getTitle(){
            return Title;
        }
        void setDescription(string newDescription){
            Description = newDescription;
        }
        string getDescription(){
            return Description;
        }
    //Default constructor
    StreamingService() {}
    //Overloaded constructor
    StreamingService(string Title, string Description) : Title(Title), Description(Description){}

    virtual void PlayFunctionality() const = 0;

    void detailsFunctionality(){
        cout << "Title: " << Title << "\n";
        cout << "Descrpition: " << Description << "\n";
    }
};
