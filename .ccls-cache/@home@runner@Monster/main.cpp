#include <iostream>
using namespace std;
//template<typename  T>

class Monstr
{
private :
 string l;
 int hp;
int count;
public :
  Monstr(){}
  Monstr(string l)
{
  this->l=l;
  this->hp=100;
  count=5;

}
void setname(string l)
{
  this->l=l;
}
auto getname()
{
  return l;  
}
void minus()
{
  hp-=20;
  count--;
}
void sethp(int hp)
{
  this->hp=hp;
}
auto gethp()
{
  return hp;  
}

void printMonster()
{
  if(hp!=100 && hp!=0)
    cout<<"\nName-> "<<l <<" (hp="<<hp<<" % )"<<" залишилося "<<count<<" спроб";
    else if(hp==0)
      cout<<"\nName-> "<<l <<" (hp="<<hp<<" % )"<<"  помер";
  else
    cout<<"\nName-> "<<l <<" (hp="<<hp<<" % )";
}
};

int main() {
  /*В грі мають бути монстри, тому що всім подобається бити їх. Оголосіть клас, який описує монстра. Монстри можуть
бути різними: орки, тролі, зомбі, ґобліни. Можна зробити перелік констант, який відповідатиме типу монстра.
Кожен монстр має мати ім’я (використовуйте std::string) і кількість здоров’я, яке відображає, скільки шкоди він може
отримати, перш ніж помре. Напишіть функцію printMonster(), яка виведе відомості про монстра. Оголосіть монстрів
кількох типів, ініціалізуйте їх (зокрема з використанням auto і присвоєнням конструктора). У випадках оголошення
складних типів даних використовуйте ключове слово auto. При створення нових монстрів використовуйте decltype
для їх оголошення*/

   cout<<"\tМонстри";
   Monstr  monster("Орк");
   decltype(monster) monster1=monster;
   monster1.sethp(100);
   monster1.setname("Троль");
   monster.printMonster();
   monster1.printMonster();
  
   auto monstr= new Monstr("Зомбі");
   decltype(monstr) monstr1=new Monstr("Гоблін");
   monstr->printMonster();
   monstr1->printMonster();
   monstr1->minus();
   monstr1->printMonster();
   
}