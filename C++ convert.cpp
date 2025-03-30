// Castillo, Gian G.

#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;

    cout << "Anong gusto mong e-define? ";
    cin >> a;

    if (a == "Abacus") {
        cout << "FIRST MANUAL CALCULATOR USING BEADS USING RODS RODS." << endl;
    } else if (a == "Napier's Bones") {
        cout << "WOODEN/IVORY STIPS FOR MULTIPLICATION/DIVISION, MANUALLY OPERATED CALCULATING DEVICE." << endl;
    } else if (a == "Pascaline") {
        cout << "FIRST MECHANICAL AND AUTOMATIC CALCULATOR." << endl;
    } else if (a == "Leibniz Wheel") {
        cout << "IMPROVED PASCALINE WITH FLUTED DRUMS. CALLED STEPPED RECKONER." << endl;
    } else if (a == "Analytical Engine") {
        cout << "CAPABLE OF SOLVING ANY MATHEMATICAL PROBLEM AND STORING INFORMATION." << endl;
    } else if (a == "Tabulating Machine") {
        cout << "WAS USED BY U.S CENSUS IN THE YEAR 1890." << endl;
    } else if (a == "Mark I") {
        cout << "FIRST PROGRAMMABLE DIGITAL COMPUTER BY AIKEN." << endl;
    } else if (a == "1st Generation of Computers") {
        cout << "SLOW, HUGE, AND EXPENSIVE." << endl;
    } else if (a == "2nd Generation of Computers") {
        cout << "IT WAS THE TIME OF TRANSISTORS COMPUTERS." << endl;
    } else if (a == "3rd Generation of Computers") {
        cout << "USES INTEGRATED CIRCUITS WERE USED INSTEAD OF TRANSISTORS. MORE RELIABLE, EFFICIENT AND SMALLER IN SIZE." << endl;
    } else if (a == "4th Generation of Computers") {
        cout << "USES VLSI 'VERY LARGE SCALE INTEGRATED' — A CHIP THAT CONTAINS MILLIONS OF TRANSISTORS." << endl;
    } else if (a == "5th Generation of Computers") {
        cout << "USES MICROPROCESSOR CHIPS WITH TEN MILLION ELECTRONIC COMPONENTS ARE USED IN THESE COMPUTERS." << endl;
    } else if (a == "ULSI") {
        cout << "ULTRA LARGE SCALE INTEGRATION." << endl;
    } else if (a == "AI") {
        cout << "USED IN 5TH GEN FOR PROBLEM-SOLVING." << endl;
    } else if (a == "Punch Cards") {
        cout << "INPUT FOR EARLY MACHINES." << endl;
    } else if (a == "Amplifier") {
        cout << "AN ELECTRONIC DEVICE THAT INCREASES THE POWER, VOLTAGE, OR CURRENT OF A SIGNAL." << endl;
    } else if (a == "Analog Signal") {
        cout << "A CONTINUOUS SIGNAL THAT REPRESENTS PHYSICAL MEASUREMENTS." << endl;
    } else if (a == "Bandwidth") {
        cout << "THE RANGE OF FREQUENCIES WITHIN WHICH A SIGNAL CAN BE TRANSMITTED OR PROCESSED." << endl;
    } else if (a == "Capacitor") {
        cout << "AN ELECTRONIC COMPONENT THAT STORES AND RELEASES ELECTRICAL ENERGY." << endl;
    } else if (a == "Carrier Signal") {
        cout << "A HIGH-FREQUENCY SIGNAL THAT CARRIES INFORMATION IN MODULATION PROCESSES." << endl;
    } else if (a == "Circuit") {
        cout << "A CLOSED PATH THROUGH WHICH ELECTRIC CURRENT FLOWS." << endl;
    } else if (a == "Decibel") {
        cout << "A UNIT USED TO EXPRESS THE RATIO OF SIGNAL POWER OR INTENSITY." << endl;
    } else if (a == "Digital Signal") {
        cout << "A SIGNAL THAT REPRESENTS DATA IN DISCRETE STEPS, USUALLY AS BINARY." << endl;
    } else if (a == "Frequency") {
        cout << "THE NUMBER OF OSCILLATIONS OR CYCLES PER SECOND OF A SIGNAL, MEASURED IN HERTZ." << endl;
    } else if (a == "Inductor") {
        cout << "A PASSIVE ELECTRONIC COMPONENT THAT STORES ENERGY IN A MAGNETIC FIELD." << endl;
    } else if (a == "Power Supply") {
        cout << "PROVIDES ELECTRICAL POWER TO A DEVICE OR SYSTEM." << endl;
    } else if (a == "Resistor") {
        cout << "A PASSIVE COMPONENT THAT LIMITS OR REGULATES THE FLOW OF ELECTRICAL CURRENT." << endl;
    } else if (a == "Oscillator") {
        cout << "A CIRCUIT THAT GENERATES A REPEATING ELECTRICAL SIGNAL, USUALLY A SINE WAVE OR SQUARE WAVE." << endl;
    } else if (a == "Semiconductor") {
        cout << "A MATERIAL WHOSE ELECTRICAL CONDUCTIVITY FALLS BETWEEN THAT OF A CONDUCTOR AND AN INSULATOR." << endl;
    } else if (a == "Spectrum") {
        cout << "THE RANGE OF FREQUENCIES OF ELECTROMAGNETIC WAVES." << endl;
    } else {
        cout << "Wala pong definition na nahanap." << endl;
    }

    return 0;
}
