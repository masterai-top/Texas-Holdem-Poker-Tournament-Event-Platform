# GitHub About 与 Topics 建议

GitHub 的 About 与 Topics 需要仓库管理员在仓库主页右侧手动设置。建议使用以下内容，避免堆砌重复关键词。

## About description

```text
C++/Tars platform for live Texas Hold'em tournaments, poker clubs, rankings, registration, tickets, and multi-table event operations.
```

建议 Website：

```text
https://masterai-top.github.io/Texas-Holdem-Poker-Tournament-Event-Platform/
```

## Topics

```text
texas-holdem
poker-tournament
tournament-management
live-poker
poker-event
poker-club
multi-table-tournament
sit-and-go
ranking-system
event-registration
ticketing-system
game-server
multiplayer-game
tars-framework
cpp
protobuf
mysql
德州扑克
扑克赛事
锦标赛系统
```

不建议继续使用竞品名称或宽泛、意图不明确的 Topics（例如 `ggpoker`、`cpg`、`tjpt`、`offline-game`），除非仓库确实与这些项目存在兼容或集成关系。

## 发布后检查

1. 在仓库 Settings > Pages 中确认 Source 为 GitHub Actions。
2. 在 About 中填写 Website，并保存上方 description 与 Topics。
3. 在 Google Search Console 验证 GitHub Pages 地址并提交 `sitemap.xml`。
4. 为每个正式 Release 写清版本能力、依赖与变更内容。
5. 保持 README 和站点内容真实，避免重复关键词与无法验证的“完整”“商业就绪”等表述。
