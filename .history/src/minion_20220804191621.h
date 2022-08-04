#ifndef __MINION_H__
#define __MINION_H__

namespace bgm{

class MinionRace{
public:
    enum Race{
        fishman=0,
        beast=1,
        machine=2,
        demon=3,
        dragon=4,
        boarman=5, //野猪人
        najia=6    //娜迦
    };
private:

};

class Minion{
public:
  
private:
    uint64_t m_attack;
    uint64_t m_health;

};
}

#endif