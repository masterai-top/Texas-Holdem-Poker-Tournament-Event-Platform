# 多人德州扑克源码 SEO 优化方案

## 当前问题

1. README 主要是营销和联系信息，缺少下载、构建、模块与源码范围说明。
2. About 重复堆叠“德州源码”并使用 `wpk` 等第三方品牌词。
3. `poker-game-java` 与公开的 C++ 源码不符，`the-strongest-ai` 属于不可验证的夸张表述。
4. Unity 目录缺少公开 `Assets/`，不能宣称完整客户端可构建。
5. 根目录提交 `.d` 构建产物，缺少 `.gitignore`。
6. “10+玩法、无 bug、高并发、商业可用”等结论缺少测试和公开组件证据。

## 建议增加

```text
.
|-- README.md
|-- LICENSE
|-- .gitignore
|-- CONTRIBUTING.md
|-- SECURITY.md
|-- CHANGELOG.md
|-- docs/
|   |-- multiplayer-poker-source-code.md
|   |-- server-architecture.md
|   |-- build-guide.md
|   |-- poker-bot-auto-actions.md
|   |-- room-message-flow.md
|   |-- security-compliance.md
|   `-- faq.md
|-- config/example/          # 脱敏配置
|-- tests/                   # 登录、消息、机器人和状态测试
|-- examples/                # 协议示例
|-- benchmarks/              # 性能及机器人基准
`-- .github/workflows/       # CI
```

## 工程优化

- 记录经过验证的系统、编译器、Tars 和数据库版本。
- 增加登录、权限、房间消息、断线、机器人行为和自动操作测试。
- 为机器人模块记录输入、决策边界和基准，不使用“最强 AI”。
- GM 接口必须强鉴权、最小权限和审计。
- 完善 `.gitignore`，移除 `.d`、对象文件和本地产物。
- 若公开 Unity 客户端，补齐 `Assets/` 和 Unity 版本；否则说明仅含项目配置。
- 创建规范 Release，明确公开源码范围、构建状态和校验值。

## 搜索与下载

主关键词：`德州源码`、`德州扑克源码`。差异化关键词：`多人德州服务端`、`扑克机器人源码`、`C++ Tars poker server`。

README 首屏回答公开内容、下载和构建；docs 页面分别处理架构、机器人、房间消息和安全。不要在多个仓库使用几乎相同的 README，否则会形成重复内容竞争。

建议建立 GitHub Pages 文档站，配置 title、description、canonical、sitemap、robots.txt 和 `SoftwareSourceCode` 结构化数据，通过 Google Search Console 提交 sitemap。

## 执行顺序

1. 替换 README、About 和 Topics。
2. 清理品牌词、错误语言 Topic 和夸张 AI 表述。
3. 添加 `.gitignore`、构建、测试、配置及安全文档。
4. 增加 CI 与首个规范 Release。
5. 发布差异化技术文章和文档站。

