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
};

class Minion{
public:
    using ptr=std::shared_ptr<Minion>;
    Minion(uint32_t attack,uint32_t health);
    ~Minion();
private:
    uint32_t m_attack;
    uint32_t m_health;
    MinionRace::Race m_race;
};


}

#endif