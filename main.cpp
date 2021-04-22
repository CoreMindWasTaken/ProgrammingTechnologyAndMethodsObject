#include "container_atd.h"
using namespace Animals;
int main(int argc, char * argv[]) {
//    if(argc != 3) {
//        cout << "Incorrect command line! "
//                "Waited: command infile outfile" << endl;
//        exit(1);
//    }
//    ifstream ifst(argv[1]);
//    ofstream ofst(argv[2]);
    ifstream ifst("D:\\QT\\Programming technology and methods\\LaboratoryWork1\\ObjectProgram\\Project\\IN.txt");
    ofstream ofst("D:\\QT\\Programming technology and methods\\LaboratoryWork1\\ObjectProgram\\Project\\OUT.txt");
    cout << "Start!" << endl;
    Container C;
    if (C.In(ifst))
    {
        ofst << "Filled container!" << endl;
        C.Out(ofst);
        C.Sort();
        C.Out(ofst);
        C.OutFish(ofst);
        C.Clear();
        ofst << "Empty container!" << endl;
        C.Out(ofst);
    }
    else
    {
       C.Clear();
    }
    cout << "End!" << endl;
    return 0;
}
