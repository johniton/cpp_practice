#include<iostream>

enum class CharacterType
{
warrior, //0
mage,
archer,
};
enum class Action
{
attack, //0
defend,
heal,
};
class Character
{
struct Weapon
{
std::string w_name{""};
int w_damage{};
int w_durablity{};
};
struct Armour
{
std::string a_name;
int a_defence{};
int a_durablity{};
};
std::string c_name{""}; // by user
CharacterType type{};
Action action{};
int c_health{};
Weapon weapon{};
Armour armour{};
public:


void giveAttributes();
void giveWeapon();
void giveArmour();
void get_details();
void display_details();
};



void Character::get_details()
{
int typeinput{};
std::cout<<"\n Enter the name of your character:";
std::getline(std::cin>>std::ws,c_name);
std::cout<<"\n Enter 0=warrior \n 1=mage \n 2= archer:";
std::cin>>typeinput;
type=static_cast<CharacterType>(typeinput);
std::cout<<"\n Enter 0=attacker \n 1=defender \n 2= healer:";
std::cin>>typeinput;
action=static_cast<Action>(typeinput);
giveAttributes();
}



void Character::giveAttributes()
{
switch(type)
{
case CharacterType::warrior:
c_health=2000;
action=Action::attack;
break;
case CharacterType::mage:
c_health=1500;
action=Action::defend;
break;
case CharacterType::archer:
c_health=800;
action=Action::heal;
break;
default :
c_health=0;
action=Action::attack;
}
}


void Character::giveWeapon()
{
std::cout<<"\n Enter the name of your weapon:";
std::getline(std::cin>>std::ws,weapon.w_name);
std::cout<<"\n Enter damage of the weapon:";
std::cin>>weapon.w_damage;
std::cout<<"\n Enter durablity of the weapon:";
std::cin>>weapon.w_durablity;
}



void Character::giveArmour()
{
std::cout<<"\n Enter the name of your armour:";
std::getline(std::cin>>std::ws,armour.a_name);
std::cout<<"\n Enter defence hitpoints of the armour:";
std::cin>>armour.a_defence;
std::cout<<"\n Enter durablity of the armour:";
std::cin>>armour.a_durablity;
}
std::ostream&operator<<(std::ostream&out,CharacterType type)
{
switch(type)
{
case CharacterType::warrior:std::cout<<"WARRIOR";
break;
case CharacterType::mage: std::cout<<"MAGE";
break;
case CharacterType::archer: std::cout<<"ARCHER";
break;
default:std::cout<<"???";
}
return(out);
}


std::ostream&operator<<(std::ostream&out,Action action)
{
switch(action)
{
case Action::attack:std::cout<<"attacking";
break;
case Action::defend: std::cout<<"defending";
break;
case Action::heal: std::cout<<"healing";
break;
default:std::cout<<"???";
}
return(out);
}



void Character::display_details()
{
system("clear");
std::cout<<"\n your character type = "<<type<<"\n its weapon details:\n w_name:"<<weapon.w_name<<"\n w_damage:"<<weapon.w_damage<<"\n w_durablity:"<<weapon.w_durablity;
std::cout<<"\n its armour details:\n a_name:"<<armour.a_name<<"\n a_defence:"<<armour.a_defence<<"\n a_durablity:"<<armour.a_durablity;
std::cout<<"\n Your character is "<<type<<" whose name is "<<c_name<<" and he has weapon "<<weapon.w_name<<" and also an armour "<<armour.a_name<<" and its primary job is a "<<action;
}



int main()
{
Character C{};
C.get_details();
C.giveArmour();
C.giveWeapon();
C.display_details();
}
