#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <chrono>
#include <random>


using namespace std;
using namespace chrono;

void ReadCSV(){
    //from csv
    // TODO MAX
}


void WriteCSV(){
    //to csv
    // TODO MAX
}


vector<int> TaskGeneration(int dim, int density) {
    int max_weight = pow(2, dim * density);
    int sum = 0;
    long long time = duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
    srand(time);
    vector<int> task(dim + 1);
    for (int i = 0; i <= dim; i++) {
        sum += task[i] = rand() % max_weight + 1;
    }
    task[dim] = sum / 2;
    return task;
}

vector<vector<bool>> PopulationGeneration(int PopSize, int dim) {
    // TODO VANES
}


int FitnessFunction(vector<bool> X) {
    // TODO AKELLA
}


vector<vector<bool>> Selection(vector<vector<bool>> Generation) {
    // TODO DIMA
}


vector<bool> Crossingover(vector<vector<bool>> Generation) {
    // TODO DIMA
}


vector<bool> Mutation(vector<bool> Generation) {
    // TODO AKELLA
}


void GeneticAlgo(vector<int> Task) {
    /*
    генерация начальной популяцции
    цикл по i
    TODO VANES
    */
}


void DynamicAlgo(vector<int> Task) {
    /*
    TODO AZA
    */
}


int main() {
    // TODO EGOR
}