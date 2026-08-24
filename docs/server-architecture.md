# 多人扑克服务端架构

```text
Client / Room Messages
          |
          v
 Login -> Processor -> Game Root
          |             |
          v             v
     DBOperator    Auto Actions / Bot Logic
          |
          v
      GM Service
```

该图是源码阅读索引，不代表完整生产拓扑。实际部署需要确认网络入口、线程模型、对象生命周期、数据库、日志、服务发现、超时和重试。

建议让协议、牌局状态、机器人决策、数据访问和管理接口保持清晰边界，并为跨模块状态变化建立测试。

