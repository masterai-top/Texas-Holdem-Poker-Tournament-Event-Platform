# 多人德州扑克源码说明

当前仓库公开内容以 C++/Tars 服务端为主，包含登录、GM、数据库、业务处理、房间消息、自动下注/弃牌、保险和机器人相关逻辑。

## 阅读顺序

1. `LoginProto.tars`、`LoginServant.tars` 与登录实现
2. `gameroot.cpp`、`Processor.cpp` 与 `process/`
3. 客户端和房间消息文件
4. `autobet.cpp`、`autofold.cpp` 与 `insure.h`
5. `robotaction.cpp` 与 `robotwinrate.cpp`
6. `GMServer.cpp` 与 `DBOperator.cpp`

[前往 GitHub 下载源码](https://github.com/masterai-top/TexasHoldem-Poker-Multiplayer-Source-Code-Pro)

公开源码范围以实际目录为准，截图及 Unity 配置不能代替完整客户端代码。

