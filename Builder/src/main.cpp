#include <iostream>
#include "Document.hpp"

using namespace std;

int main()
{
    Document pdfFile("PDF");
    pdfFile.addTable("|", "|" , "|", {"1","aa","2","3"});
    pdfFile.addText("", {"line of text", "second line"});
    cout << pdfFile.toStr() << endl;

    Document ePubFile("ePub");
    ePubFile.addTable("{", ",", "}", {"1","aa","2","3"});
    ePubFile.addText(">", {"line of text", "second line"});
    cout << ePubFile.toStr() << endl;

    Document mobiFile("Mobi");
    mobiFile.addTable("{", "}{", "}", {"1","aa","2","3"});
    mobiFile.addText("+", {"line of text", "second line"});
    cout << mobiFile.toStr() << endl;
}
