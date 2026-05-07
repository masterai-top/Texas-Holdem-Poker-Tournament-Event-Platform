#ifndef __SYSTEM_INFO_CONFIG_INSERT_UPDATE_H__
#define __SYSTEM_INFO_CONFIG_INSERT_UPDATE_H__
class SystemInfoConfigInsertUpdateRequest
{
    friend class SystemInfoConfigInsertUpdateResponse;
public:
    SystemInfoConfigInsertUpdateRequest() {}
    SystemInfoConfigInsertUpdateRequest(const string &json)
    {
        this->Deserialize(json);
    }
    template <typename Writer>
    void Serialize(Writer &writer) const
    {
        writer.StartObject();
        SERIALIZE_MEMBER(writer, id);
        SERIALIZE_MEMBER(writer, area);
        SERIALIZE_MEMBER(writer, target);
        SERIALIZE_MEMBER(writer, nickName);
        SERIALIZE_MEMBER(writer, title);
        SERIALIZE_MEMBER(writer, content);
        SERIALIZE_MEMBER(writer, beginTime);
        SERIALIZE_MEMBER(writer, optUser);
        SERIALIZE_MEMBER(writer, createDate);

        writer.EndObject();
    }

    void toString(std::string &json)
    {
        StringBuffer sb;
        Writer<StringBuffer> writer(sb);
        Serialize(writer);
        json = sb.GetString();
    }

    void Deserialize(const string &json)
    {
        try
        {
            Document d;
            if (d.Parse(json.c_str()).HasParseError())
            {
                throw logic_error("parse json error. raw data : " + json);
            }
            SET_DOC_MEMBER(d, id);
            SET_DOC_MEMBER(d, area);
            SET_DOC_MEMBER(d, target);
            SET_DOC_MEMBER(d, nickName);
            SET_DOC_MEMBER(d, title);
            SET_DOC_MEMBER(d, content);
            SET_DOC_MEMBER(d, beginTime);
            SET_DOC_MEMBER(d, optUser);
            SET_DOC_MEMBER(d, createDate);
        }
        catch (const std::exception &e)
        {
            std::string errInfo = ::toString(__FILE__, ":", __LINE__, ":SystemInfoConfigInsertUpdateRequest decode error!");
            throw logic_error(errInfo);
        }
    }
    std::vector<int64_t> getInformPlayerList()
    {
        if (_target.isNull())
        {
            std::string errInfo = ::toString(__FILE__, ":", __LINE__, ":Inform player list is null!");
            throw logic_error(errInfo);
        }
        std::string players = _target;
        std::vector<std::string> playersVec = split(players, "|");
        std::vector<int64_t> vec;
        for (auto &item : playersVec)
        {
            int64_t uid = S2L(item);
            vec.push_back(uid);
        }
        return vec;
    }

    std::vector<std::string> getContents()
    {
        std::string rawContent = _content;
        std::vector<std::string> contentVec = split(_content, "|");
        return contentVec;
    }

    static tars::Int32 handler(const vector<tars::Char> &reqBuf, const map<std::string, std::string> &extraInfo, vector<tars::Char> &rspBuf)
    {
        return 0;
    }
private:
    CInteger       	_id             ;  //主键
    CString        	_area           ;  //发送消息的地区：台湾、东南亚、欧洲、大陆等
    CString        	_target         ;  //发送目标（空代表所有人,用户ID代表个人）
    CString        	_nickName       ;  //昵称（发送所有人时，昵称为空）
    CString        	_title          ;  //配置标题，最多显示20个字符
    CString        	_content        ;  //配置内容，最多显示100个字符
    CString        	_beginTime      ;  //生效时间
    CString        	_optUser        ;  //操作者
    CString        	_createDate     ;  //创建时间

};
class SystemInfoConfigInsertUpdateResponse
{
public:
    SystemInfoConfigInsertUpdateResponse() {}
    SystemInfoConfigInsertUpdateResponse(const string &json)
    {
        this->Deserialize(json);
    }
    template <typename Writer>
    void Serialize(Writer &writer) const
    {
        writer.StartObject();
        SERIALIZE_MEMBER(writer, id);
        SERIALIZE_MEMBER(writer, area);
        SERIALIZE_MEMBER(writer, target);
        SERIALIZE_MEMBER(writer, nickName);
        SERIALIZE_MEMBER(writer, title);
        SERIALIZE_MEMBER(writer, content);
        SERIALIZE_MEMBER(writer, beginTime);
        SERIALIZE_MEMBER(writer, optUser);
        SERIALIZE_MEMBER(writer, createDate);

        writer.EndObject();
    }

    void toString(std::string &json)
    {
        StringBuffer sb;
        Writer<StringBuffer> writer(sb);
        Serialize(writer);
        json = sb.GetString();
    }

    void Deserialize(const string &json)
    {
        Document d;
        if (d.Parse(json.c_str()).HasParseError())
        {
            throw logic_error("parse json error. raw data : " + json);
        }
        SET_DOC_MEMBER(d, id);
        SET_DOC_MEMBER(d, area);
        SET_DOC_MEMBER(d, target);
        SET_DOC_MEMBER(d, nickName);
        SET_DOC_MEMBER(d, title);
        SET_DOC_MEMBER(d, content);
        SET_DOC_MEMBER(d, beginTime);
        SET_DOC_MEMBER(d, optUser);
        SET_DOC_MEMBER(d, createDate);

    }

    static tars::Int32 handler(const vector<tars::Char> &reqBuf, const map<std::string, std::string> &extraInfo, vector<tars::Char> &rspBuf)
    {
        SystemInfoConfigInsertUpdateRequest request;
        decode(reqBuf, request);

        // 业务处理
        std::vector<int64_t> informPlayers = request.getInformPlayerList();
        for (const auto &uid : informPlayers)
        {
            mail::SysMsgReq  sysMsgReq;
            sysMsgReq.uid = uid;
            sysMsgReq.msgType = mail::E_MSG_DEFALUT;
            sysMsgReq.contents = request.getContents();
            mail::SysMsgResp sysMsgResp;
            int iRet = g_app.getOuterFactoryPtr()->getHallServantPrx(uid)->genSysMsg(sysMsgReq, sysMsgResp);
            if (iRet != 0)
            {
                std::string errInfo = ::toString("send sys info err!", " uid: ", uid);
                ROLLLOG_ERROR << errInfo << endl;
                throw logic_error(errInfo);
            }
        }

        encode(request, rspBuf);
        return 0;
    }

private:
    static void encode(SystemInfoConfigInsertUpdateRequest &request, vector<tars::Char> &rspBuf)
    {
        SystemInfoConfigInsertUpdateResponse response;
        response._id.assign(request._id);
        response._area.assign(request._area);
        response._target.assign(request._target);
        response._nickName.assign(request._nickName);
        response._title.assign(request._title);
        response._content.assign(request._content);
        response._beginTime.assign(request._beginTime);
        response._optUser.assign(request._optUser);
        response._createDate.assign(request._createDate);


        std::string json;
        response.toString(json);
        std::string resultData = "[" + json + "]";


        int64_t totalItems = 1;									//总条数
        int64_t totalPages = 1;									// 总页数
        GMResponse rsp(RESULT_CODE_SUCCESS, "", resultData, totalItems, totalPages);
        std::string resultJson;
        rsp.toString(resultJson);
        rspBuf.assign(resultJson.begin(), resultJson.end());
    }
private:
    CInteger       	_id             ;  //主键
    CString        	_area           ;  //发送消息的地区：台湾、东南亚、欧洲、大陆等
    CString        	_target         ;  //发送目标（空代表所有人,用户ID代表个人）
    CString        	_nickName       ;  //昵称（发送所有人时，昵称为空）
    CString        	_title          ;  //配置标题，最多显示20个字符
    CString        	_content        ;  //配置内容，最多显示100个字符
    CString        	_beginTime      ;  //生效时间
    CString        	_optUser        ;  //操作者
    CString        	_createDate     ;  //创建时间

};
#endif