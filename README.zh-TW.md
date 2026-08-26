# Texas Hold'em Poker Tournament Event Platform

> 用於德州撲克錦標賽活動、撲克俱樂部、玩家排名、報名、門票與多桌競賽流程的 C++/Tars 伺服器端元件。

[简体中文](README.md) | [繁體中文](README.zh-TW.md) | [English](README.en.md) | [專案網站](https://masterai-top.github.io/Texas-Holdem-Poker-Tournament-Event-Platform/) | [商業授權](#授權與商業用途)

![程式語言](https://img.shields.io/badge/C%2B%2B-95.9%25-00599C?logo=cplusplus&logoColor=white)
![框架](https://img.shields.io/badge/Tars-server-1683FA)
![資料庫](https://img.shields.io/badge/MySQL-supported-4479A1?logo=mysql&logoColor=white)
![授權](https://img.shields.io/badge/license-custom%20commercial-orange)

## 繁體中文

這是一個用於德州撲克線下賽事數位化的伺服器端程式碼儲存庫，涵蓋比賽房間、玩家入座與離桌、賽事設定、俱樂部、排名、報名及票務相關協定。專案主要使用 C++，以 Tars 服務框架為基礎，並整合 Protobuf、MySQL 與 RapidJSON。

### 核心能力

| 模組 | 說明 |
| --- | --- |
| 賽事引擎 | 支援 Sit & Go、MTT、Freezeout 與積分聯賽等賽制擴充 |
| 多桌賽事 | 提供比賽房間、牌桌與玩家狀態相關的伺服器端邏輯 |
| 俱樂部與排名 | 包含俱樂部、活動、好友、積分排名等協定資源 |
| 報名與門票 | 面向線下賽事的報名、資格與門票業務整合 |
| 伺服器端基礎設施 | Tars RPC、Protobuf、MySQL、設定服務與日誌能力 |

### 程式碼結構

```text
.
├── core/                   # 與房間及玩家狀態相關的核心遊戲邏輯
├── 遊戲玩法/              # 玩法說明與時序圖
├── GMServer.*              # Tars 服務入口
├── GMServantImp.*          # 管理服務實作
├── gameserver.*            # 遊戲伺服器元件
├── *.tars                  # Tars 介面定義
├── *.proto.bytes           # 協定資源
├── makefile                # Tars/C++ 建置設定
└── docs/                   # 可透過 GitHub Pages 發布的專案網站
```

### 建置前提

目前的 `makefile` 面向既有的 XGame/Tars Linux 建置環境，並引用外部私有模組路徑。它不是一個可在全新電腦上獨立編譯的最小範例。建置前請準備 Linux、相容的 C++ 工具鏈、Tars、MySQL client、Protobuf、RapidJSON、WBL 程式庫，以及 `makefile` 中列出的 XGame 共用模組和生成後的協定標頭檔。

依賴路徑設定完成後，在專案根目錄執行：

```bash
make
```

請先調整 `makefile` 中的 `/usr/local/cpp_modules`、`/home/tarsproto` 和 Tars 安裝路徑。儲存庫目前的內容不包含所有外部依賴，因此無法保證僅複製本儲存庫即可完成編譯。

### 文件與展示網站

`docs/` 是純靜態網站，不需要 Node.js。提交至 GitHub 後，啟用 Actions 即可透過儲存庫內的 Pages 工作流程發布。預設網址：

`https://masterai-top.github.io/Texas-Holdem-Poker-Tournament-Event-Platform/`

### 使用範圍

本專案用於合法的賽事管理、技術研究與產品展示。使用者應遵守所在地關於牌類賽事、支付、獎品、未成年人保護、隱私與資料安全的法律法規。儲存庫不提供規避監管或組織非法網路賭博的功能指引。

## 技術堆疊

- C++ 遊戲與管理服務
- Tars RPC 與服務執行環境
- Protobuf 協定資源
- MySQL client 整合
- RapidJSON 設定與資料負載處理

## 建置狀態與依賴

隨附的 `makefile` 面向既有的 Linux XGame/Tars 環境。若干必要的共用模組和生成後的標頭檔位於此儲存庫之外。編譯前請檢查上述路徑與前置條件。不應將本儲存庫描述為可一鍵完成的獨立正式環境部署。

## 產品應用情境

- 線下撲克錦標賽報名與營運
- 撲克俱樂部活動與季度排名
- Sit & Go 與多桌錦標賽服務
- 賽事資格與門票整合
- 私有或內部部署的錦標賽基礎設施

## 畫面截圖

| 錦標賽大廳 | 牌桌體驗 | 賽事服務 |
| --- | --- | --- |
| <img src="https://github.com/user-attachments/assets/75205d6e-3965-49c5-88fe-9f9b180e5097" alt="德州撲克錦標賽行動版大廳" width="240"> | <img src="https://github.com/user-attachments/assets/b5619aaa-a50f-4353-9ae5-769b725f187b" alt="德州撲克牌桌介面" width="240"> | <img src="https://github.com/user-attachments/assets/b9516a55-d659-41bd-9cbd-1601203da73f" alt="撲克錦標賽活動服務介面" width="240"> |

## 系統架構

```text
錦標賽用戶端
       |
       v
Tars 服務閘道
       |
       +--> 遊戲與房間服務 --> 錦標賽規則與玩家狀態
       +--> 俱樂部、活動與排名服務
       +--> MySQL / 設定 / 協定服務
```

## 授權與商業用途

本儲存庫採用 [LICENSE](LICENSE) 中的條款。依照這些條款，允許用於學習、研究和展示。正式環境部署、轉售、代管服務或其他商業用途，需要另行向著作權所有者取得商業授權。

- Telegram：`@xuzongbin001`
- Email：`masterai918@gmail.com`

## 關鍵字

Texas Hold'em tournament platform、poker tournament software、live poker event management、poker club system、multi-table tournament server、德州撲克賽事系統、德州錦標賽系統、線下撲克賽事管理、德州俱樂部系統。
