#include "common/macros.h"
#include "gameroot.h"
#include "logic/roomlogic/core/userconfig.h"
#include "context/context.h"
#include "Comm/ITableGame.h"
#include "context/user.h"
#include "config/gameconfig.h"
#include "utils/tarslog.h"
#include "message/sendroommessage.h"
#include "logic/gamelogic/core/checkbegin.h"
#include "process/process.h"

namespace game
{
    namespace logic
    {
        namespace roomlogic
        {
            void UserConfig(void const *p, GameRoot *root)
            {
                PERFSTATS_ENTRY();
                __TRY__

                using namespace RoomSo;
                using namespace context;
                using namespace config;
                using namespace message;

                //
                RoomSo::TGAME_UserConfig const &userconfig = *static_cast<RoomSo::TGAME_UserConfig const *>(p);

                DLOG_TRACE("roomid:" << root->roomid() << ", " << "TGAME_UserConfig_E" << ", uid: " << userconfig.lPlayerID << ", ltakeCoin: " << userconfig.ltakeCoin
                           << ", bAutoSupplement: " << userconfig.bAutoSupplement << ", lminTakeCoin: " << userconfig.lminTakeCoin << ", lmaxTakeCoin: " << userconfig.lmaxTakeCoin);

                //玩家
                User *user = root->con->getUserByUid(userconfig.lPlayerID);
                if (user == NULL)
                {
                    DLOG_TRACE( "user not exist, uid: " << userconfig.lPlayerID);
                    //return;
                }

                if (NULL != user)
                {
                    DLOG_TRACE("roomid:" << root->roomid() << ", " << " uid: " << userconfig.lPlayerID << ", left:" << user->isLeft());
                }

                if (NULL != user && !user->isLeft())
                {
                    //游戏中货币
                    user->setSHWealth(userconfig.ltakeCoin);

                    //变更货币
                 /*   TGAME_PlayerScoreChange tmm;
                    tmm.info.buyInNum = 0;
                    tmm.info.winNum = 0;
                    tmm.info.buyInCount = 0;
                    tmm.aiInfo.iAiGameRound = 0;
                    tmm.aiInfo.iAiGamePoint = 0;
                    tmm.iNowRound = 0;
                    tmm.changeType = 2;
                    tmm.changePoint.insert(std::make_pair(user->getUid(), -userconfig.ltakeCoin));
                    sendRoomMessage<TGAME_PlayerScoreChange>(TGAME_PlayerScoreChange_E, tmm, root);
                    DLOG_TRACE("roomid:" << root->roomid() << ", " << "TGAME_UserConfig_E" << ", uid: " << userconfig.lPlayerID << ", ltakeCoin: " << user->getSHWealth());*/

                    // if ( root->pro->getProcess() == nil_nnstate)
                    // {
                    //     game::logic::gamelogic::CheckBegin(root);
                    // }

                    return;
                }

                __CATCH__
                PERFSTATS_EXIT();
            }
        }
    }
}
