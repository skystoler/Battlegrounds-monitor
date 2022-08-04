#ifndef __BATTLEGROUND_H__
#define __BATTLEGROUND_H__

namespace bgm{

class BattleGround{
public:
    BattleGround(size_t minion_number=0);
    ~BattleGround();

    static size_t GetSize() const{return m_size;} 
    size_t GetMinionNumber() const{return m_minion_number;}

    
private:
    static size_t m_size=7;
    size_t m_minion_number;
};


}
#endif