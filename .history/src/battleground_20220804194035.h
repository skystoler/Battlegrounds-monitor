#ifndef __BATTLEGROUND_H__
#define __BATTLEGROUND_H__

namespace bgm{

class BattleGround{
public:
    BattleGround(size_t size,);
    ~BattleGround();
private:
    static size_t m_size=7;
    size_t m_minion_number;
};


}
#endif