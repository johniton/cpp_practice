#include<iostream>
#include<random>
#include<chrono>
namespace Random
{

	inline std::mt19937 generate()
	{
		std::random_device rd{};

		std::seed_seq ss{
			static_cast<std::seed_seq::result_type>(std::chrono::steady_clock::now().time_since_epoch().count()),
				rd(), rd(), rd(), rd(), rd(), rd(), rd() };

		return std::mt19937{ ss };
	}


	 std::mt19937 mt{ generate() };
	inline int get(int min, int max)
	{
		return std::uniform_int_distribution<int>{min, max}(mt);
	}


	template <typename T>
	T get(T min, T max)
	{
		return std::uniform_int_distribution<T>{min, max}(mt);
	}


	template <typename R, typename S, typename T>
	R get(S min, T max)
	{
		return get<R>(static_cast<R>(min), static_cast<R>(max));
	}
}

class Monster
{
public:

enum Type
{
	dragon,
	goblin,
	ogre,
	orc,
	skeleton,
	troll,
	vampire,
	zombie,
	maxMonsterTypes,
};
std::string getTypeString();
void print();
Monster()=default;
Monster(Type M , std::string n , std::string r , int hp):type{M},name{n},roar{r},hitpoints{hp}
{}
private:
Type type{};
std::string name{"???"};
std::string roar{"???"};
int hitpoints{};


};

std::string Monster::getTypeString()
{
switch(type)
{
case dragon:return("dragon");
case goblin:return("goblin");
case ogre:return("ogre");
case orc:return("orc");
case skeleton:return("skeleton");
case troll:return("troll");
case vampire:return("vampire");
case zombie:return("zombie");
default:return("???");
}
}
void Monster::print()
{
std::cout<<"\n "<<name<<" the "<<getTypeString()<<" has "<<hitpoints<<" hitpoints and says "<<roar;

}

namespace MonsterGenerator
{

std::string getname(int n)
{
switch(n)
{
            case 0:  return "Blarg";
            case 1:  return "Moog";
            case 2:  return "Pksh";
            case 3:  return "Tyrn";
            case 4:  return "Mort";
            case 5:  return "Hans";
            default: return "???";
}
}

std::string getroar(int n)
{
switch (n)
        {
            case 0:  return "ROAR";
            case 1:  return "peep";
            case 2:  return "squeal";
            case 3:  return "whine";
            case 4:  return "growl";
            case 5:  return "burp";
            default: return "???";
        }

}
Monster generate()
{

return Monster{static_cast<Monster::Type>(Random::get(0,Monster::maxMonsterTypes-1)),
getname(Random::get(0,5)),
getroar(Random::get(0,5)),
Random::get(1,100)};
}

};
int main()
{
	Monster m{};
	char ch{};
	do
    {
        std::cout<<"\n Enter g to generate \n d to display and q to quit\n";
        std::cout<<"\n Enter your choice:";
        std::cin>>ch;
        switch(ch)
        {
        case 'g':
        case 'G':m=MonsterGenerator::generate();break;
        case 'd':
        case 'D':m.print();break;
        case 'q':
        case 'Q':break;
        default: std::cout<< "\n wrong choice try again:";

        }
    }while(ch=='g'||ch=='G'||ch=='d'||ch=='D');

	return 0;
}
