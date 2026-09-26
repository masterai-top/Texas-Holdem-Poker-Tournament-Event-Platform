[简体中文](README.md) | [繁體中文](README.zh-TW.md) | [English](README.en.md)

# 德州賽事源碼與德州 MTT 源碼｜SNG、MTT、線上及線下賽事 C++/Tars 服務端

[![Server](https://img.shields.io/badge/server-C%2B%2B-00599C)](GMServer.cpp)
[![RPC](https://img.shields.io/badge/RPC-Tars-1683FA)](GMServant.tars)
[![Pages](https://img.shields.io/badge/docs-GitHub%20Pages-1f883d)](https://masterai-top.github.io/Texas-Holdem-Poker-Tournament-Event-Platform/zh-tw/)

這是一個面向**德州賽事源碼、德州 MTT 源碼、SNG 單桌賽及線上/線下賽事場景**的程式碼倉庫。公開內容主要包括 C++/Tars 服務、房間與玩家生命週期元件、資料操作、服務介面、已編譯 Protobuf 資源，以及快速遊戲、SNG 和 Private 玩法時序資料。

> 目前目錄不是已驗證的一鍵上線發行包。它依賴外部 XGame/Tars 環境，並缺少部分可讀協議原始檔、完整依賴鎖定、資料庫遷移、自動化測試和正式環境設定。實際能力以公開檔案及可重現建置結果為準。

## 搜尋詞與公開內容

| 搜尋主題 | 可核對內容 | 公開邊界 |
| --- | --- | --- |
| 德州賽事源碼 | C++/Tars 服務、房間流程、賽事截圖與技術文件 | 不代表完整客戶端與營運後台均已公開 |
| 德州 MTT 源碼 | MTT 產品場景、賽事牌桌及服務端基礎元件 | 完整 MTT 生命週期仍需依程式碼與建置結果核對 |
| 德州撲克源碼 | 遊戲服務、Tars 介面、資料操作和協議資源 | 倉庫重點是賽事平台，不是完整通用發行包 |
| 線下德州賽事 | 報名、現場服務及配套資訊截圖 | 支付、票務與現場系統不能只憑截圖確認 |

專題介紹：[德州賽事源碼](https://masterai-top.github.io/Texas-Holdem-Poker-Tournament-Event-Platform/zh-tw/texas-holdem-tournament-source-code.html) · [德州 MTT 源碼](https://masterai-top.github.io/Texas-Holdem-Poker-Tournament-Event-Platform/zh-tw/mtt-poker-source-code.html)

## 目前公開範圍

| 範圍 | 可見內容 | 說明 |
| --- | --- | --- |
| Tars 服務 | `GMServer.*`、`GMServantImp.*`、`gameserver.*`、`gameroot.*` | 需要外部執行環境與設定 |
| 房間與牌局 | `core/` 中入桌、離桌、離線、開局等元件 | 上線前需要狀態機、並行與異常測試 |
| 資料操作 | `DBOperator.*` | 需要核對資料庫結構、交易與連線設定 |
| 服務協議 | `GMServant.tars`、`JFGame.tars`、`Java2RoomProto.tars` | 應補充版本與相容策略 |
| 玩法資料 | `游戏玩法/` 中快速遊戲、SNG、Private 時序圖 | 文件不代表對應功能已完整公開 |
| 產品截圖 | `docs/assets/screenshots/` | 展示產品場景，不等同於完整客戶端源碼 |

## 賽事場景

- SNG 單桌賽與快速開賽流程
- MTT 多桌錦標賽及賽事房間場景
- 線上賽事列表、賽事資訊與內容展示
- 線下賽事報名、現場服務及配套資訊
- 牌桌、玩家生命週期及遊戲服務介面

## 產品截圖

| 賽事首頁 | 線上賽事 | 賽事牌桌 |
| --- | --- | --- |
| ![德州賽事源碼產品首頁](docs/assets/screenshots/event-home.jpg) | ![德州 MTT 源碼線上賽事列表](docs/assets/screenshots/online-events.jpg) | ![德州撲克賽事牌桌](docs/assets/screenshots/tournament-table.jpg) |

## 文件

- [服務端架構](docs/server-architecture.md)
- [房間訊息流程](docs/room-message-flow.md)
- [建置指南](docs/build-guide.md)
- [部署檢查清單](DEPLOYMENT-CHECKLIST.md)
- [公開範圍](PUBLIC-SCOPE.md)

## 公平性與合規

倉庫中存在與機器人勝率或牌局結果控制有關的高風險元件。正式環境必須限制存取、記錄不可竄改稽核並接受獨立公平性評估；不得用於操縱真實玩家結果、隱瞞機率或規避監管。

## 聯絡

- Telegram：[@xuzongbin001](https://t.me/xuzongbin001)
- Email：[masterai918@gmail.com](mailto:masterai918@gmail.com)

請遵守所在地法律法規和平台規則。本倉庫不鼓勵或支援任何非法賭博或現金交易。
