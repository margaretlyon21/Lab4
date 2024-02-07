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
    StreamingService();
    //Overloaded constructor
    StreamingService(string Title, string Description);

    virtual void PlayFunctionality();

    void detailsFunctionality(StreamingService obj){
        cout << "Title: " << obj.getTitle() << "\n";
        cout << "Descrpition: " << obj.getDescription() << "\n";
    }
};
