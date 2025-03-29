#include <iostream> 
#include <map>     
#include <string>  
using namespace std; 

int main() {
   
    map<string, string> DATA = {
        {"Abacus", "FIRST MANUAL CALCULATOR USING BEADS USING RODS."},
        {"Napier's Bones", "WOODEN/IVORY STRIPS FOR MULTIPLICATION/DIVISION, MANUALLY OPERATED CALCULATING DEVICE."},
        {"Pascaline", "FIRST MECHANICAL AND AUTOMATIC CALCULATOR."},
        {"Leibniz Wheel", "IMPROVED PASCALINE WITH FLUTED DRUMS. CALLED STEPPED RECKONER."},
        {"Analytical Engine", "CAPABLE OF SOLVING ANY MATHEMATICAL PROBLEM AND STORING INFORMATION."},
        {"Tabulating Machine", "WAS USED BY U.S CENSUS IN THE YEAR 1890."},
        {"Mark I", "FIRST PROGRAMMABLE DIGITAL COMPUTER BY AIKEN."},
        {"1st Generation of Computers", "SLOW, HUGE, AND EXPENSIVE."},
        {"2nd Generation of Computers", "IT WAS THE TIME OF TRANSISTORS COMPUTERS."},
        {"3rd Generation of Computers", "USES INTEGRATED CIRCUITS INSTEAD OF TRANSISTORS. MORE RELIABLE, EFFICIENT AND SMALLER IN SIZE."},
        {"4th Generation of Computers", "USES VLSI (VERY LARGE SCALE INTEGRATED) A CHIP THAT CONTAINS MILLIONS OF TRANSISTORS."},
        {"5th Generation of Computers", "USES MICROPROCESSOR CHIPS WITH TEN MILLION ELECTRONIC COMPONENTS."},
        {"ULSI", "ULTRA LARGE SCALE INTEGRATION."},
        {"AI", "USED IN 5TH GEN FOR PROBLEM-SOLVING."},
        {"Punch Cards", "INPUT FOR EARLY MACHINES."},
        {"Amplifier", "AN ELECTRONIC DEVICE THAT INCREASES THE POWER, VOLTAGE, OR CURRENT OF A SIGNAL."},
        {"Analog Signal", "A SIGNAL THAT VARIES CONTINUOUSLY."},
        {"Bandwidth", "THE RANGE OF FREQUENCIES WITHIN WHICH A SIGNAL CAN BE TRANSMITTED."},
        {"Capacitor", "AN ELECTRONIC COMPONENT THAT STORES AND RELEASES ELECTRICAL ENERGY."},
        {"Carrier Signal", "A HIGH-FREQUENCY SIGNAL THAT CARRIES INFORMATION."},
        {"Circuit", "A CLOSED PATH THROUGH WHICH ELECTRIC CURRENT FLOWS."},
        {"Decibel", "A UNIT USED TO EXPRESS THE RATIO OF SIGNAL POWER."},
        {"Digital Signal", "A SIGNAL THAT REPRESENTS DATA IN DISCRETE STEPS, USUALLY AS BINARY."},
        {"Frequency", "THE NUMBER OF OSCILLATIONS OR CYCLES PER SECOND OF A SIGNAL."},
        {"Inductor", "A PASSIVE ELECTRONIC COMPONENT THAT STORES ENERGY IN A MAGNETIC FIELD."},
        {"Power Supply", "A DEVICE THAT PROVIDES POWER TO AN ELECTRONIC CIRCUIT."},
        {"Resistor", "A COMPONENT THAT LIMITS OR REGULATES THE FLOW OF ELECTRICAL CURRENT."},
        {"Oscillator", "A CIRCUIT THAT GENERATES A REPEATING ELECTRICAL SIGNAL."},
        {"Semiconductor", "A MATERIAL WHOSE ELECTRICAL CONDUCTIVITY FALLS BETWEEN THAT OF A CONDUCTOR AND AN INSULATOR."},
        {"Spectrum", "THE RANGE OF FREQUENCIES OF ELECTROMAGNETIC WAVES."}
    };

    
    cout << "Anong gusto mong e-define? "; 
    string term; 
    getline(cin, term); 

    
    auto searchResult = DATA.find(term); 

  
    if (searchResult != DATA.end()) {
        
        cout << term << ": " << searchResult->second << endl; 
    } else {
        
        cout << term << ": Wala yan boss eh." << endl; 
    }

    return 0; 
}