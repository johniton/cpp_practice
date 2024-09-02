#include <iostream>
struct Monster
{
enum class Monster_type
{
ogre, //0
dragon ,
orc,
spider,
slime,
};
Monster_type type;
std::string monster_name{" "};
int health{};
};
std::ostream&operator<< (std::ostream&out, Monster::Monster_type type)
{
switch(type)
{
case Monster::Monster_type::ogre: out<<"orgre";break;
case Monster::Monster_type::dragon: out<<"fode";break;
case Monster::Monster_type::orc:out<<"orc";break;
case Monster::Monster_type::spider: out<<"spider";break;
case Monster::Monster_type::slime:out<<"slime";break;
default: out<<"???";break;
}
return out;
}
void printMonster(const Monster& monster)
{
std::cout<<"This "<<monster.type<<" is named "<<monster.monster_name<<" and has "<<monster.health<<" health" ;
}


int main()
{
int type{};
Monster monster{};

std::cout<<" Enter 0 for ogre , 1 for dragon , 2 for orc , 3 for spider , 4 for slime";
std::cin>>type;
monster.type=static_cast<Monster::Monster_type>(type);
std::cout<<"EnterMonster name and Monster health:";
std::cin>>monster.monster_name>>monster.health;
printMonster(monster);

}
