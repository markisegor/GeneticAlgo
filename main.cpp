#include <iostream>
#include <string>
#include <vector>
#include <ctime>

#define PopSize 10
#define ChromoDim 10
#define NumIterations 100

using namespace std;


void ReadCSV(){
    //from csv
    // TODO MAX
}


void WriteCSV(){
    //to csv
    // TODO MAX
}


vector<int> TaskGeneration(int dim, int D) {
    // возвращает веса элементов vector<int> (dim + int TargetWeight)
    // TODO MAX
}


vector<vector<bool>> PoulationGeneration(int PSize, int dim) {
    /*generate a random population of chromosomes*/

    srand(time(0));
    vector<vector<bool>> Pop(PSize);

    for (auto Сhromo : Pop) {
        for (int i = 0; i < dim; ++i) {
            Сhromo[i] = rand() % 2;
        }
    }

    return Pop;
}


int FitnessFunction(vector<bool> X, Pop) {
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
    
    unsigned int start_time =  clock();

    //генерация начальной популяцции
    vector<vector<bool>> InitPop = PoulationGeneration(PopSize, ChromoDim);

    for (int i = 0; i < NumIterations; ++i) {

        if (/*validate on exit*/) {
            //
        }
    }
    
    unsigned int end_time = clock();
    unsigned int work_time = end_time - start_time;
    
}


void DynamicAlgo(vector<int> Task) {
    /*
    TODO AZA
    */
}


int main() {
    // TODO EGOR
}
