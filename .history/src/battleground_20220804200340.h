#ifndef __BATTLEGROUND_H__
#define __BATTLEGROUND_H__

#include <vector>
namespace bgm{

class BattleGround{
public:
    BattleGround(size_t minion_number=0);
    ~BattleGround();

    static size_t GetSize() const{return m_size;} 
    size_t GetMinionNumber() const{return m_minion_vector.size();}

    void AddMinion();

    void DeleteMinion(bgm::Minion::ptr minion);

private:
    static size_t m_size=7;
    vector<bgm::Minion::ptr> m_minion_vector;
};


}
#endif