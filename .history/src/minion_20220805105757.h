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
    using ptr=std::unique_ptr<Minion>;
    Minion(uint32_t attack,uint32_t health,MinionRace::Race race,bool shield=false,
            bool windfury=false,bool poisonous=false,bool taunt=false);
    ~Minion();

    size_t getPos() const{return m_pos;}

    void setPos(size_t pos){m_pos=pos;}

    bool getShield() const{return m_sheild;}

    bool getWindfury() const{return m_windfury;}

    bool getShield() const{return m_sheild;}

    bool getShield() const{return m_sheild;}

    void fight(ptr minion);


private:
    uint32_t m_attack;
    uint32_t m_health;
    MinionRace::Race m_race;
    size_t m_pos;

    bool m_sheild;
    bool m_windfury; 
    bool m_poisonous;
    bool m_taunt;
};


}

#endif