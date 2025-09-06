#pragma once
#include <Windows.h>
#include <iostream>
#include <random>
#include <numbers>
#include <cstdint>
#include <thread>
#include <mutex>
#include <chrono>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>  

using namespace std;

string genPass(int length, bool useNumbers, bool useUppercase, bool useSymbols) {
    string lowercase = "abcdefghijklmnopqrstuvwxyz";
    string uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string numbers = "0123456789";
    string symbols = "!@#$%^&*()_-+=<>?/{}[]";

    string chars = lowercase;
    if (useUppercase) chars += uppercase;
    if (useNumbers) chars += numbers;
    if (useSymbols) chars += symbols;

    string password = "";
    for (int i = 0; i < length; i++) {
        int index = rand() % chars.size();
        password += chars[index];
    }

    return password;
}