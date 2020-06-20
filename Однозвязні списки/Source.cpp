#include<iostream>
#include"list.h"

using namespace std;
int main(){
SList<int> list;



list.addHead(11);
list.print();
list.delHead();
list.print();
list.addTail(250);
list.print();
list.addHead(15);
list.addTail(300);
list.print();
list.addHead(1);
list.print();
list.delTail();
list.print();
list.clear();
list.print();
list.addHead(21);
list.print();
list.addTail(11);
list.print();
cout << endl;
SList<int> list1(list);
list1.print();
list1.insert(23, 2);
list1.addHead(16);
list1.print();
list1.deleteIndex(6);
list1.print();
list1.addHead(77);
list1.addHead(186);
list1.addHead(845);
list1.addHead(54);
list1.print();
list1.reverse();
list1.print();
cout << list1.find(84) << endl;;
list1.print();
system("pause");
return 0;

}

