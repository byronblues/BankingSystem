

#include "ATM.hpp"
#include <string>
#include <iostream>
//#include "Card.hpp"
using namespace std;
bool ATM::card_validation(Card& card){
    
    try{
        string bank_id = card.get_bank_id();
        if(bank_associate_id != bank_id) throw bank_id;
        
        
    }catch(exception e){
        cout << "Wrong card for this bank" << endl;
        return false;
    }
    
    return true;
    
}
