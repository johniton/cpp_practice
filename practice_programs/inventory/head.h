#ifndef HEAD_H
#define HEAD_H

void add();
void display();
void itemprice(int);

struct option
{

};
struct ITEM
{
    std::string name;
    int id_no{};
    int quantity{};
    double price{};
};
 void initialize_item(ITEM &T);

#endif
