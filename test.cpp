#include "test.h"

#include "animal_atd.h"
#include "beast_atd.h"
#include "bird_atd.h"
#include "container_atd.h"
#include "fish_atd.h"
#include "node_atd.h"

using namespace Animals;

string TestProject::ReadFile(string FileName)
{
    ifstream ifst(FileName);
    if (ifst.is_open())
    {
        string Data;
        string TMP;
        while (getline(ifst, TMP))
        {
            Data += TMP;
        }
        ifst.close();
        return Data;
    }
    else
    {
        ifst.close();
        return NULL;
    }
}

void TestProject::TestContainerOut()
{
    Container * C = new Container();
    C->Size = 3;

    Fish * FirstFish = new Fish();
    FirstFish->Name = "carp";
    FirstFish->Place = RIVER;
    FirstFish->Age = 1;
    Animal * FirstAnimal = (Animal *)FirstFish;
    Node * FirstNode = new Node();
    FirstNode->A = FirstAnimal;
    FirstNode->PrevNode = NULL;

    Bird * FirstBird = new Bird();
    FirstBird->Name = "dove";
    FirstBird->AttitudeFlight = NONMIGRATORY;
    FirstBird->Age = 2;
    Animal * SecondAnimal = (Animal *)FirstBird;
    Node * SecondNode = new Node();
    SecondNode->A = SecondAnimal;
    SecondNode->PrevNode = FirstNode;
    FirstNode->NextNode = SecondNode;

    Beast * FirstBeast = new Beast();
    FirstBeast->Name = "wolf";
    FirstBeast->D = PREDATOR;
    FirstBeast->Age = 3;
    Animal * ThirdAnimal = (Animal *)FirstBeast;
    Node * ThirdNode = new Node();
    ThirdNode->A = ThirdAnimal;
    ThirdNode->PrevNode = SecondNode;
    SecondNode->NextNode = ThirdNode;
    ThirdNode->NextNode = NULL;
    C->LastNode = ThirdNode;

    ofstream ofst("OUT.txt");
    C->Out(ofst);
    ofst.close();

    delete C;

    string Result = ReadFile("OUT.txt");
    string Reference = ReadFile("TestContainerOut.txt");
    QCOMPARE(Result, Reference);
}

void TestProject::TestNodeOut()
{
    Fish * FirstFish = new Fish();
    FirstFish->Name = "carp";
    FirstFish->Place = RIVER;
    FirstFish->Age = 1;
    Animal * FirstAnimal = (Animal *)FirstFish;
    Node * FirstNode = new Node();
    FirstNode->A = FirstAnimal;
    FirstNode->NextNode = NULL;
    FirstNode->PrevNode = NULL;

    ofstream ofst("OUT.txt");
    FirstNode->Out(ofst);
    ofst.close();

    delete FirstFish;
    delete FirstNode;

    string Result = ReadFile("OUT.txt");
    string Reference = ReadFile("TestNodeOut.txt");
    QCOMPARE(Result, Reference);
}

void TestProject::TestAnimalOut()
{
    Fish * FirstFish = new Fish();
    FirstFish->Name = "carp";
    FirstFish->Place = RIVER;
    FirstFish->Age = 1;
    Animal * FirstAnimal = (Animal *)FirstFish;

    ofstream ofst("OUT.txt");
    FirstAnimal->Out(ofst);
    ofst.close();

    delete FirstFish;

    string Result = ReadFile("OUT.txt");
    string Reference = ReadFile("TestAnimalOut.txt");
    QCOMPARE(Result, Reference);
}

void TestProject::TestFishOut()
{
    Fish * FirstFish = new Fish();
    FirstFish->Name = "carp";
    FirstFish->Place = RIVER;
    FirstFish->Age = 1;

    ofstream ofst("OUT.txt");
    FirstFish->Out(ofst);
    ofst.close();

    delete FirstFish;

    string Result = ReadFile("OUT.txt");
    string Reference = ReadFile("TestFishOut.txt");
    QCOMPARE(Result, Reference);
}

void TestProject::TestBirdOut()
{
    Bird * FirstBird = new Bird;
    FirstBird->Name = "dove";
    FirstBird->AttitudeFlight = NONMIGRATORY;
    FirstBird->Age = 2;

    ofstream ofst("OUT.txt");
    FirstBird->Out(ofst);
    ofst.close();

    delete FirstBird;

    string Result = ReadFile("OUT.txt");
    string Reference = ReadFile("TestBirdOut.txt");
    QCOMPARE(Result, Reference);
}

void TestProject::TestBeastOut()
{
    Beast * FirstBeast = new Beast();
    FirstBeast->Name = "wolf";
    FirstBeast->D = PREDATOR;
    FirstBeast->Age = 3;

    ofstream ofst("OUT.txt");
    FirstBeast->Out(ofst);
    ofst.close();

    delete FirstBeast;

    string Result = ReadFile("OUT.txt");
    string Reference = ReadFile("TestBeastOut.txt");
    QCOMPARE(Result, Reference);
}

void TestProject::TestContainerOutFish()
{
    Container * C = new Container();
    C->Size = 3;

    Fish * FirstFish = new Fish();
    FirstFish->Name = "carp";
    FirstFish->Place = RIVER;
    FirstFish->Age = 1;
    Animal * FirstAnimal = (Animal *)FirstFish;
    Node * FirstNode = new Node();
    FirstNode->A = FirstAnimal;
    FirstNode->PrevNode = NULL;

    Bird * FirstBird = new Bird();
    FirstBird->Name = "dove";
    FirstBird->AttitudeFlight = NONMIGRATORY;
    FirstBird->Age = 2;
    Animal * SecondAnimal = (Animal *)FirstBird;
    Node * SecondNode = new Node();
    SecondNode->A = SecondAnimal;
    SecondNode->PrevNode = FirstNode;
    FirstNode->NextNode = SecondNode;

    Beast * FirstBeast = new Beast();
    FirstBeast->Name = "wolf";
    FirstBeast->D = PREDATOR;
    FirstBeast->Age = 3;
    Animal * ThirdAnimal = (Animal *)FirstBeast;
    Node * ThirdNode = new Node();
    ThirdNode->A = ThirdAnimal;
    ThirdNode->PrevNode = SecondNode;
    SecondNode->NextNode = ThirdNode;
    ThirdNode->NextNode = NULL;
    C->LastNode = ThirdNode;

    ofstream ofst("OUT.txt");
    C->OutFish(ofst);
    ofst.close();

    delete C;

    string Result = ReadFile("OUT.txt");
    string Reference = ReadFile("TestContainerOutFish.txt");
    QCOMPARE(Result, Reference);
}

void TestProject::TestContainerIn()
{
    Container * C = new Container();
    C->Size = 0;
    C->LastNode = NULL;
    ifstream ifst("TestContainerIn.txt");
    C->In(ifst);

    if ((C->Size == 3) && (C->LastNode != NULL))
    {
        ifst.close();

        Container * ContainerReference = new Container();
        ContainerReference->Size = 3;

        Fish * FirstFish = new Fish();
        FirstFish->Name = "carp";
        FirstFish->Place = RIVER;
        FirstFish->Age = 1;
        Animal * FirstAnimal = (Animal *)FirstFish;
        Node * FirstNode = new Node();
        FirstNode->A = FirstAnimal;
        FirstNode->PrevNode = NULL;

        Bird * FirstBird = new Bird();
        FirstBird->Name = "dove";
        FirstBird->AttitudeFlight = NONMIGRATORY;
        FirstBird->Age = 2;
        Animal * SecondAnimal = (Animal *)FirstBird;
        Node * SecondNode = new Node();
        SecondNode->A = SecondAnimal;
        SecondNode->PrevNode = FirstNode;
        FirstNode->NextNode = SecondNode;

        Beast * FirstBeast = new Beast();
        FirstBeast->Name = "wolf";
        FirstBeast->D = PREDATOR;
        FirstBeast->Age = 3;
        Animal * ThirdAnimal = (Animal *)FirstBeast;
        Node * ThirdNode = new Node();
        ThirdNode->A = ThirdAnimal;
        ThirdNode->PrevNode = SecondNode;
        SecondNode->NextNode = ThirdNode;
        ThirdNode->NextNode = NULL;
        ContainerReference->LastNode = ThirdNode;

        Node * TMPNode = C->LastNode;
        Animal * TMPAnimal = TMPNode->A;
        Node * TMPNodeReference = ContainerReference->LastNode;
        Animal * TMPAnimalReference = TMPNodeReference->A;
        while(TMPNodeReference != NULL)
        {
            TMPAnimal = TMPNode->A;
            TMPAnimalReference = TMPNodeReference->A;

            QCOMPARE(TMPAnimal->Name, TMPAnimalReference->Name);
            QCOMPARE(TMPAnimal->Age, TMPAnimalReference->Age);
            switch (TMPAnimalReference->Type())
            {
            case 0:
            {
                Fish * TMPFish = (Fish *)TMPAnimal;
                Fish * TMPFishReference = (Fish *)TMPAnimalReference;
                QCOMPARE(TMPFish->Place, TMPFishReference->Place);
                break;
            }
            case 1:
            {
                Bird * TMPBird = (Bird *)TMPAnimal;
                Bird * TMPBirdReference = (Bird *)TMPAnimalReference;
                QCOMPARE(TMPBird->AttitudeFlight, TMPBirdReference->AttitudeFlight);
                break;
            }
            case 2:
            {
                Beast * TMPBeast = (Beast *)TMPAnimal;
                Beast * TMPBeastReference = (Beast *)TMPAnimalReference;
                QCOMPARE(TMPBeast->D, TMPBeastReference->D);
                break;
            }
            }
            TMPNodeReference = TMPNodeReference->PrevNode;
            TMPNode = TMPNode->PrevNode;
        }

        QVERIFY(TMPNode == NULL);

        delete C;
        delete ContainerReference;
    }
    else
    {
        ifst.close();
        QCOMPARE(true, false);
    }
}

void TestProject::TestNodeIn()
{
    ifstream ifst("TestNodeIn.txt");
    Node * N = new Node();

    if (N->In(ifst))
    {
        ifst.close();

        Fish * FirstFish = new Fish();
        FirstFish->Name = "carp";
        FirstFish->Place = RIVER;
        FirstFish->Age = 1;
        Animal * FirstAnimal = (Animal *)FirstFish;
        Node * FirstNode = new Node();
        FirstNode->A = FirstAnimal;
        FirstNode->NextNode = NULL;
        FirstNode->PrevNode = NULL;

        QCOMPARE(N->A->Name, FirstNode->A->Name);
        QCOMPARE(N->A->Age, FirstNode->A->Age);
        if (N->A->Type() == FirstNode->A->Type())
        {
            Fish * TMPFish = (Fish *)N->A;
            Fish * TMPFishReference = (Fish *)FirstNode->A;
            QCOMPARE(TMPFish->Place, TMPFishReference->Place);
        }
        else
        {
            QCOMPARE(true, false);
        }

        QVERIFY(N->NextNode == NULL);
        QVERIFY(N->PrevNode == NULL);

        delete FirstFish;
        delete FirstNode;

        delete N->A;
        delete N;
    }
    else
    {
        ifst.close();
        QCOMPARE(true, false);
    }
}

void TestProject::TestAnimalIn()
{
    ifstream ifst("TestAnimalIn.txt");
    Animal * A = Animal::In(ifst);
    if(A != NULL)
    {
        ifst.close();

        Fish * FirstFish = new Fish();
        FirstFish->Name = "carp";
        FirstFish->Place = RIVER;
        FirstFish->Age = 1;
        Animal * FirstAnimal = (Animal *)FirstFish;

        QCOMPARE(A->Name, FirstAnimal->Name);
        QCOMPARE(A->Age, FirstAnimal->Age);
        if (A->Type() == FirstAnimal->Type())
        {
            Fish * TMPFish = (Fish *)A;
            Fish * TMPFishReference = (Fish *)FirstAnimal;
            QCOMPARE(TMPFish->Place, TMPFishReference->Place);
        }
        else
        {
            QCOMPARE(true, false);
        }

        delete FirstFish;
        delete A;
    }
    else
    {
        ifst.close();
        QCOMPARE(true, false);
    }
}

void TestProject::TestFishIn()
{
    ifstream ifst("TestFishIn.txt");
    Fish * F = new Fish();

    if (F->InData(ifst))
    {
        ifst.close();

        Fish * FirstFish = new Fish();
        FirstFish->Name = "carp";
        FirstFish->Place = RIVER;
        FirstFish->Age = 1;

        QCOMPARE(F->Name, FirstFish->Name);
        QCOMPARE(F->Age, FirstFish->Age);
        QCOMPARE(F->Place, FirstFish->Place);

        delete FirstFish;
        delete F;
    }
    else
    {
        ifst.close();
        QCOMPARE(true, false);
    }
}

void TestProject::TestBirdIn()
{
    ifstream ifst("TestBirdIn.txt");
    Bird * B = new Bird();

    if (B->InData(ifst))
    {
        ifst.close();

        Bird * FirstBird = new Bird();
        FirstBird->Name = "dove";
        FirstBird->AttitudeFlight = NONMIGRATORY;
        FirstBird->Age = 2;

        QCOMPARE(B->Name, FirstBird->Name);
        QCOMPARE(B->Age, FirstBird->Age);
        QCOMPARE(B->AttitudeFlight, FirstBird->AttitudeFlight);

        delete FirstBird;
        delete B;
    }
    else
    {
        ifst.close();
        QCOMPARE(true, false);
    }
}

void TestProject::TestBeastIn()
{
    ifstream ifst("TestBeastIn.txt");
    Beast * B = new Beast();

    if (B->InData(ifst))
    {
        ifst.close();

        Beast * FirstBeast = new Beast();
        FirstBeast->Name = "wolf";
        FirstBeast->D = PREDATOR;
        FirstBeast->Age = 3;

        QCOMPARE(B->Name, FirstBeast->Name);
        QCOMPARE(B->Age, FirstBeast->Age);
        QCOMPARE(B->D, FirstBeast->D);

        delete FirstBeast;
        delete B;
    }
    else
    {
        ifst.close();
        QCOMPARE(true, false);
    }
}

void TestProject::TestContainerInit()
{
    Container * C = new Container();

    QCOMPARE(C->Size, 0);
    QVERIFY(C->LastNode == NULL);

    delete C;
}

void TestProject::TestContainerClear()
{
    Container * C = new Container();
    C->Size = 3;

    Fish * FirstFish = new Fish();
    FirstFish->Name = "carp";
    FirstFish->Place = RIVER;
    FirstFish->Age = 1;
    Animal * FirstAnimal = (Animal *)FirstFish;
    Node * FirstNode = new Node();
    FirstNode->A = FirstAnimal;
    FirstNode->PrevNode = NULL;

    Bird * FirstBird = new Bird();
    FirstBird->Name = "dove";
    FirstBird->AttitudeFlight = NONMIGRATORY;
    FirstBird->Age = 2;
    Animal * SecondAnimal = (Animal *)FirstBird;
    Node * SecondNode = new Node();
    SecondNode->A = SecondAnimal;
    SecondNode->PrevNode = FirstNode;
    FirstNode->NextNode = SecondNode;

    Beast * FirstBeast = new Beast();
    FirstBeast->Name = "wolf";
    FirstBeast->D = PREDATOR;
    FirstBeast->Age = 3;
    Animal * ThirdAnimal = (Animal *)FirstBeast;
    Node * ThirdNode = new Node();
    ThirdNode->A = ThirdAnimal;
    ThirdNode->PrevNode = SecondNode;
    SecondNode->NextNode = ThirdNode;
    ThirdNode->NextNode = NULL;
    C->LastNode = ThirdNode;

    C->Clear();

    QCOMPARE(C->Size, 0);
    QVERIFY(C->LastNode == NULL);
}

void TestProject::TestContainerSort()
{
    Container * C = new Container();
    C->Size = 3;

    Fish * FirstFish = new Fish();
    FirstFish->Name = "salmon";
    FirstFish->Place = RIVER;
    FirstFish->Age = 1;
    Animal * FirstAnimal = (Animal *)FirstFish;
    Node * FirstNode = new Node();
    FirstNode->A = FirstAnimal;
    FirstNode->PrevNode = NULL;

    Bird * FirstBird = new Bird();
    FirstBird->Name = "eagle";
    FirstBird->AttitudeFlight = NONMIGRATORY;
    FirstBird->Age = 2;
    Animal * SecondAnimal = (Animal *)FirstBird;
    Node * SecondNode = new Node();
    SecondNode->A = SecondAnimal;
    SecondNode->PrevNode = FirstNode;
    FirstNode->NextNode = SecondNode;

    Beast * FirstBeast = new Beast();
    FirstBeast->Name = "wolf";
    FirstBeast->D = PREDATOR;
    FirstBeast->Age = 3;
    Animal * ThirdAnimal = (Animal *)FirstBeast;
    Node * ThirdNode = new Node();
    ThirdNode->A = ThirdAnimal;
    ThirdNode->PrevNode = SecondNode;
    SecondNode->NextNode = ThirdNode;
    ThirdNode->NextNode = NULL;
    C->LastNode = ThirdNode;

    C->Sort();

    Node * TMP = C->LastNode;
    QCOMPARE(TMP->A->Name, "wolf");
    QCOMPARE(TMP->A->Age, 3);
    if (TMP->A->Type() == 2)
    {
        Beast * TMPBeast = (Beast *)TMP->A;
        QCOMPARE(TMPBeast->D, PREDATOR);
    }
    else
    {
        QCOMPARE(true, false);
    }
    TMP = TMP->PrevNode;
    QCOMPARE(TMP->A->Name, "eagle");
    QCOMPARE(TMP->A->Age, 2);
    if (TMP->A->Type() == 1)
    {
        Bird * TMPBird = (Bird *)TMP->A;
        QCOMPARE(TMPBird->AttitudeFlight, NONMIGRATORY);
    }
    else
    {
        QCOMPARE(true, false);
    }
    TMP = TMP->PrevNode;
    QCOMPARE(TMP->A->Name, "salmon");
    QCOMPARE(TMP->A->Age, 1);
    if (TMP->A->Type() == 0)
    {
        Fish * TMPFish = (Fish *)TMP->A;
        QCOMPARE(TMPFish->Place, RIVER);
    }
    else
    {
        QCOMPARE(true, false);
    }

    delete C;
}

void TestProject::TestAnimalCompare()
{
    Fish * FirstFish = new Fish();
    FirstFish->Name = "carp";
    FirstFish->Place = RIVER;
    FirstFish->Age = 1;
    Animal * FirstAnimal = (Animal *)FirstFish;

    Fish * SecondFish = new Fish();
    SecondFish->Name = "salmon";
    SecondFish->Place = RIVER;
    SecondFish->Age = 1;
    Animal * SecondAnimal = (Animal *)SecondFish;

    bool Result = FirstAnimal->Compare(SecondAnimal);
    bool Reference = true;
    QCOMPARE(Result, Reference);

    delete FirstFish;
    delete SecondFish;
}

void TestProject::TestAnimalLengthName()
{
    Fish * FirstFish = new Fish();
    FirstFish->Name = "carp";
    FirstFish->Place = RIVER;
    FirstFish->Age = 1;
    Animal * FirstAnimal = (Animal *)FirstFish;

    int Result = FirstAnimal->LengthName();
    int Reference = 4;
    QCOMPARE(Result, Reference);

    delete FirstFish;
}
