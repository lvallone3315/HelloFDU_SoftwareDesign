// HelloFDU_SoftwareDesign.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

#define VERSION "Hello CSCI 3315/6620 Version 0.2"

/* 
 * HelloFDU_SoftwareDesign intended as hello world to introduce the class to management of source code being developer concurrently by multiple developers
 * 
 * Process:
 *    Download program from github
 *    Each developer adds a welcome message & updates version number
 *    Developer than uploads to Github
 * 
 * Initially:
 *    Work off of Master branch
 *    Subsequent iterations to use branches, forks and pull requests
 */

int main()
{
    cout << VERSION << "\n\n";
    cout << "Hello FDU Software Design Class from Professor Vallone!\n";
}
