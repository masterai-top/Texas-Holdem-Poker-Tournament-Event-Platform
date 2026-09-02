[简体中文](README.md) | [繁體中文](README.zh-TW.md) | [English](README.en.md)

# 德州扑克 SNG、MTT 与线下赛事平台|德州比赛源码


## 扑克赛事主仓库 | Texas-Holdem-Poker-Tournament-Event-Platform


> 项目功能、性能、运营记录与部署能力应结合当前版本独立验证；许可证和第三方素材范围以仓库文件为准。


> 一个开源的德州扑克锦标赛系统，支持MTT、SNG及俱乐部排名。


本项目是一套完整的德州扑克竞技赛事系统，支持离线与在线赛事模式，可用于搭建商业比赛平台或进行二次开发。


## 📖 项目简介


本项目是一个**开源的德州扑克锦标赛系统**，旨在为俱乐部和线下赛事提供数字化解决方案。它包含了完整的赛事管理、积分排名和俱乐部系统。


## ✨ 核心功能


| 特色模块 | 功能说明 |
| :--- | :--- |
| 🏆 **赛事系统** | 类似CPG、TJPT的线上比赛模式，支持打门票 |
| 📊 **线下赛事管理** | 离线比赛模式、选手签到、赛程管理 |
| 👥 **俱乐部系统** | 俱乐部创建、内部赛事、排名体系 |
| 🎫 **门票系统** | 在线报名、门票购买、对接国内赛事 |
| 📈 **积分排名** | 选手积分、排行榜、赛季统计 |


## 🎯 赛事模式 | Tournament Types


| 模式 | 说明 |
| :--- | :--- |
| **Sit & Go** | 坐满即玩，快速比赛 |
| **MTT** | 多桌锦标赛，大规模赛事 |
| **Freezeout** | 冻结赛制，无重购 |
| **Ranking League** | 积分联赛，赛季排名 |
## 🏗️ 技术架构


| 组件 | 技术栈 | 说明 |
| :--- | :--- | :--- |
| **前端/客户端** | Unity (C#) / H5 | 跨平台游戏客户端 |
| **服务端** | Node.js | 游戏逻辑与API服务[reference:21] |
| **数据库** | 待补充 | 数据持久化 |


## 🚀 快速开始


```bash
## 克隆项目
git clone https://github.com/masterai-top/Texas-Holdem-Poker-Tournament-Event-Platform.git


## 进入服务端目录
cd server


## 安装依赖
npm install


## 启动服务
npm start
```
## 📁 项目结构
```
poker-tournament-system/
├── server/          # Node.js服务端
├── client/          # 客户端代码 (Unity/H5)
└── docs/            # 文档
```


## MasterAI 相关德州扑克项目


- [MasterAI 项目主页](https://github.com/masterai-top)
- [德州俱乐部完整解决方案](https://github.com/masterai-top/TexasHoldem-Poker-Complete-Solution)
- [德州金币大厅](https://github.com/masterai-top/Texas-Hold-em-Points-Lobby)
- [CFR 德州扑克 AI](https://github.com/masterai-top/cfr-poker-ai-masterai)
- 
## 🤝 贡献与交流
*   **Telegram**：@xuzongbin001
*   **Email**：masterai918@gmail.com

## 📸 界面预览|Screenshots


| 赛事大厅 | 牌桌界面 | 酒店预定 |


<img width="1284" height="2778" alt="2024_01_20_13_00_IMG_6699" src="https://github.com/user-attachments/assets/75205d6e-3965-49c5-88fe-9f9b180e5097" />
<img width="1284" height="2778" alt="2024_01_20_12_59_IMG_6697" src="https://github.com/user-attachments/assets/b5619aaa-a50f-4353-9ae5-769b725f187b" />
<img width="1284" height="2778" alt="2024_01_20_12_59_IMG_6696" src="https://github.com/user-attachments/assets/b9516a55-d659-41bd-9cbd-1601203da73f" />
<img width="1284" height="2778" alt="2024_01_20_12_59_IMG_6695" src="https://github.com/user-attachments/assets/83e1bdf2-7318-4569-a913-aeb544d925c8" />
<img width="1284" height="2778" alt="2024_01_20_12_59_IMG_6694" src="https://github.com/user-attachments/assets/30a5a13e-84e7-404f-bfa9-bf677995c23a" />
<img width="1284" height="2778" alt="2024_01_20_12_59_IMG_6691" src="https://github.com/user-attachments/assets/e4011935-542e-4650-9ac2-ba825c2720db" />
<img width="1280" height="2832" alt="7de0125344fca9b09579d4458230ff6a_720" src="https://github.com/user-attachments/assets/7aa46211-ce9f-41b8-ac5a-e0323c3dd4fc" />





## 公平性與安全


原始碼中出現 `robotwinrate.*`、`setwincard.*` 等與牌局結果控制相關的高風險元件。正式環境必須明確用途、限制存取、加入不可竄改稽核，並接受獨立公平性評估；非合法測試所必需的程式碼應從正式版本移除。不得用於操縱真實玩家結果、隱瞞賠率或規避監管。


## 文件


- [公開範圍說明](PUBLIC-SCOPE.md)
- [部署檢查清單](DEPLOYMENT-CHECKLIST.md)
- [發布檢查清單](RELEASE-CHECKLIST.md)
- [負責任使用](RESPONSIBLE-USE.md)
- [安全報告](SECURITY.md)
- [支援說明](SUPPORT.md)
- [架構頁面](docs/architecture.html)
- [功能與範圍](docs/features.html)


## 授權注意事項


目前倉庫的 `LICENSE` 同時包含 MIT 自由授權、商業限制和 “All Rights Reserved” 表述，可能互相衝突。應在法律審查後確定唯一或清晰的雙重授權方式，並讓 README、About、銷售說明、Release 和程式碼標頭保持一致。本優化包不會覆蓋現有授權檔案。




## ⚠️ 重要声明
本项目代码仅供**技术学习、学术研究**使用。严禁用于任何形式的**非法赌博**或**现金交易**。



