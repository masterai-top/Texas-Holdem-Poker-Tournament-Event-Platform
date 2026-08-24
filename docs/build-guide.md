# 构建与 Unity 检查

```bash
git clone https://github.com/masterai-top/TexasHoldem-Poker-Multiplayer-Source-Code-Pro.git
cd TexasHoldem-Poker-Multiplayer-Source-Code-Pro
make
```

构建前确认 Linux、GCC/G++、Tars、数据库客户端库、包含目录和链接路径。仓库中不存在的依赖或运行命令不能假设可用。

完整 Unity 项目通常需要 `Assets/`、`Packages/manifest.json` 和 `ProjectSettings/ProjectVersion.txt`。当前根目录未显示 `Assets/`，所以应将 Packages 和 ProjectSettings 描述为配置片段，除非后续补齐客户端资源。

