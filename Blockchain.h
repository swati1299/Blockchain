//
// Created by User on 5/23/2020.
//

#ifndef EXPLO_BLOCKCHAIN_BLOCKCHAIN_H
#define EXPLO_BLOCKCHAIN_BLOCKCHAIN_H
#include <cstdint>
#include <vector>
#include "Block.h"

using namespace std;

class Blockchain {
public:
    Blockchain();

    void AddBlock(Block bNew);

private:
    uint32_t _nDifficulty;
    vector<Block> _vChain;

    Block _GetLastBlock() const;
};
#endif //EXPLO_BLOCKCHAIN_BLOCKCHAIN_H
