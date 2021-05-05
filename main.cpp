#include "container_atd.h"
#include "test.h"

using namespace Animals;

int main(int argc, char * argv[])
{
    QTest::qExec(new TestProject);
//    if(argc != 3)
//    {
//        cout << "Incorrect command line! "
//                "Waited: \"command infile outfile\"!" << endl;
//        return 1;
//    }
//    ifstream ifst(argv[1]);
//    if(!ifst)
//    {
//        cout << "No input file found!" << endl;
//        return 1;
//    }
//    ofstream ofst(argv[2]);
//    if(!ofst)
//    {
//        cout << "No output file create!" << endl;
//        return 1;
//    }
//    cout << "Start!" << endl;
//    Container C;
//    if (C.In(ifst))
//    {
//        ofst << "Filled container!" << endl;
//        C.Out(ofst);
//        C.Sort();
//        C.Out(ofst);
//        C.OutFish(ofst);
//        C.Clear();
//        ofst << "Empty container!" << endl;
//        C.Out(ofst);
//    }
//    else
//    {
//       C.Clear();
//    }
//    cout << "End!" << endl;
//    return 0;
}
