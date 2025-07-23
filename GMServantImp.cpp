#include "GMServantImp.h"
#include "servant/Application.h"
#include "globe.h"
#include "LogComm.h"
#include "CommonStruct.h"
#include "CommonCode.h"
#include "JFGameHttpProto.h"
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include <string>
#include "Define.h"
#include <functional>
#include "./utilityFunction.h"

#include "./player_data_modify/player_data_modify_list.h"
#include "./player_data_modify/player_props_modify.h"
#include "./player_data_modify/player_game_cheat.h"
#include "./room/create_room.h"
#include "./room/modify_room.h"
#include "./room/member_room.h"
#include "./create_message/create_message.h"
#include "./player_quest/player_quest_modify.h"

using namespace std;
using namespace JFGame;
using namespace DaqiGame;
using namespace JFGameHttpProto;
using namespace rapidjson;

//////////////////////////////////////////////////////
void GMServantImp::initialize()
{
    //initialize servant here:
    //...
    initHandlers();
}

//////////////////////////////////////////////////////
void GMServantImp::destroy()
{
    //destroy servant here:
    //...
}

//http请求处理接口 TODO handler里面出错直接抛出异常,这里打印异常信息
tars::Int32 GMServantImp::doRequest(const vector<tars::Char> &reqBuf, const map<std::string, std::string> &extraInfo, vector<tars::Char> &rspBuf, tars::TarsCurrentPtr current)
{
    FUNC_ENTRY("");
    int iRet = 0;

    try
    {
        string postData(reqBuf.begin(), reqBuf.end());
        ROLLLOG_DEBUG << "req json: " << postData << endl;

        GMRequest req;
        req.Deserialize(postData);

        vector<tars::Char> params;
        req.getParams(params);

        int code = req.getCode();
        ROLLLOG_DEBUG << "code: " << code << endl;
        auto it = this->handlers.find(code);
        ROLLLOG_DEBUG << "size: " << this->handlers.size() << endl;
        if (it == this->handlers.end())
            ROLLLOG_DEBUG << "----end: " << endl;
            //throw logic_error("code not exsist: " + I2S(code));

        (it->second)(reqBuf, extraInfo, rspBuf);
        ROLLLOG_DEBUG << "code : " << code << " rspBuf: " << string(rspBuf.begin(), rspBuf.end()) << endl;
    }
    catch(std::exception &e)
    {
        GMResponse rsp(0, e.what(), "", 0, 0);
        std::string resultJson;
        rsp.toString(resultJson);
        rspBuf.assign(resultJson.begin(), resultJson.end());
    }

    FUNC_EXIT("", iRet);
    return iRet;
}

int GMServantImp::onJsonRequest()
{
    FUNC_ENTRY("");

    int iRet = 0;

    //__TRY__

    //const char json[] = " { \"hello\" : \"world\", \"t\" : true , \"f\" : false, \"n\": null, \"i\":123, \"pi\": 3.1416, \"a\":[1, 2, 3, 4] } ";
    //   //printf("Original JSON:\n %s\n", json);

    //Document document;

    //if (document.Parse(json).HasParseError())
    //{
    //  return 1;
    //}

    ////printf("\nAccess values in document:\n");
    //ROLLLOG_DEBUG << "Access values in document : " << endl;
    ////assert(document.IsObject());

    ////assert(document.HasMember("hello"));
    //   //assert(document["hello"].IsString());E_RANBOARD_INSRET_UPDATE

    //ROLLLOG_DEBUG << "assert, " << document.IsObject() << ", " << document.HasMember("hello") << ", " << document["hello"].IsString() << endl;
    //
    ////printf("hello = %s\n", document["hello"].GetString());
    //ROLLLOG_DEBUG << "hello = " << document["hello"].GetString() << endl;

    //__CATCH__

    //FUNC_EXIT("", iRet);

    return iRet;
}

// 这部分的代码是用Python脚本生成的
void GMServantImp::initHandlers()
{
    this->handlers[gm::E_PLAYER_DATA_MODIFY_LIST] = std::bind(&PlayerDataModifyListResponse::handler, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3);
    this->handlers[gm::E_PLAYER_PROPS_MODIFY] = std::bind(&PlayerPropsModifyResponse::handler, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3);
    this->handlers[gm::E_PLAYER_GAME_CHEAT] = std::bind(&PlayerGameCheatResponse::handler, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3);
    this->handlers[gm::E_CREATE_ROOM] = std::bind(&CreateRoomResponse::handler, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3);
    this->handlers[gm::E_MODIFY_ROOM] = std::bind(&ModifyRoomResponse::handler, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3);
    this->handlers[gm::E_CREATE_MESSAGE] = std::bind(&CreateMessageResponse::handler, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3);
    this->handlers[gm::E_PROCESS_QUEST] = std::bind(&PlayerQuestModifyResponse::handler, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3);
    this->handlers[gm::E_MEMBER_ROOM] = std::bind(&MemberRoomResponse::handler, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3);
}

