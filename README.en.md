# Texas Hold'em Poker Tournament Event Platform

> C++/Tars server components for Texas Hold'em tournament events, poker clubs, player rankings, registration, tickets, and multi-table competition workflows.

[简体中文](README.md) | [繁體中文](README.zh-TW.md) | [English](README.en.md) | [Project website](https://masterai-top.github.io/Texas-Holdem-Poker-Tournament-Event-Platform/) | [Commercial license](#license-and-commercial-use)

![Language](https://img.shields.io/badge/C%2B%2B-95.9%25-00599C?logo=cplusplus&logoColor=white)
![Framework](https://img.shields.io/badge/Tars-server-1683FA)
![Database](https://img.shields.io/badge/MySQL-supported-4479A1?logo=mysql&logoColor=white)
![License](https://img.shields.io/badge/license-custom%20commercial-orange)

## English

This server-side code repository is designed to digitize live Texas Hold'em tournaments. It covers tournament rooms, player seating and leaving, event configuration, clubs, rankings, registration, and ticket-related protocols. The project is primarily written in C++, is based on the Tars service framework, and integrates Protobuf, MySQL, and RapidJSON.

### Core capabilities

| Module | Description |
| --- | --- |
| Tournament engine | Supports extensions for Sit & Go, MTT, Freezeout, ranking leagues, and other tournament formats |
| Multi-table tournaments | Provides server-side logic for tournament rooms, tables, and player states |
| Clubs and rankings | Includes protocol resources for clubs, activities, friends, points, and rankings |
| Registration and tickets | Integrates registration, qualification, and ticket workflows for live events |
| Server infrastructure | Provides Tars RPC, Protobuf, MySQL, configuration services, and logging capabilities |

### Code structure

```text
.
├── core/                   # Core game logic related to rooms and player states
├── 游戏玩法/              # Gameplay documentation and sequence diagrams
├── GMServer.*              # Tars service entry point
├── GMServantImp.*          # Management service implementation
├── gameserver.*            # Game server components
├── *.tars                  # Tars interface definitions
├── *.proto.bytes           # Protocol resources
├── makefile                # Tars/C++ build configuration
└── docs/                   # Project website publishable through GitHub Pages
```

### Build prerequisites

The current `makefile` targets an existing XGame/Tars Linux build environment and references paths to external private modules. It is not a minimal example that can be compiled independently on a clean computer. Before building, prepare Linux, a compatible C++ toolchain, Tars, the MySQL client, Protobuf, RapidJSON, the WBL library, the XGame shared modules listed in the `makefile`, and generated protocol headers.

After configuring the dependency paths, run the following command in the project root:

```bash
make
```

First adjust `/usr/local/cpp_modules`, `/home/tarsproto`, and the Tars installation paths in the `makefile`. The current repository does not contain every external dependency, so compilation cannot be guaranteed by cloning this repository alone.

### Documentation and demo site

`docs/` is a fully static website and does not require Node.js. After committing it to GitHub, enable Actions to publish it through the Pages workflow included in the repository. Default URL:

`https://masterai-top.github.io/Texas-Holdem-Poker-Tournament-Event-Platform/`

### Usage boundaries

This project is intended for lawful event management, technical research, and product demonstrations. Users must comply with applicable local laws and regulations concerning card tournaments, payments, prizes, protection of minors, privacy, and data security. This repository does not provide guidance for evading regulation or operating illegal online gambling.

## Technology stack

- C++ game and management services
- Tars RPC and service runtime
- Protobuf protocol resources
- MySQL client integration
- RapidJSON configuration and payload handling

## Build status and dependencies

The included `makefile` targets an existing Linux-based XGame/Tars environment. Several required shared modules and generated headers live outside this repository. Review the paths and prerequisites above before compiling. This repository should not be represented as a standalone, one-command production deployment.

## Product scenarios

- Live poker tournament registration and operations
- Poker club events and seasonal rankings
- Sit & Go and multi-table tournament services
- Event qualification and ticket integration
- Private or on-premise tournament infrastructure

## Screenshots

| Tournament lobby | Table experience | Event services |
| --- | --- | --- |
| <img src="https://github.com/user-attachments/assets/75205d6e-3965-49c5-88fe-9f9b180e5097" alt="Texas Hold'em tournament mobile lobby" width="240"> | <img src="https://github.com/user-attachments/assets/b5619aaa-a50f-4353-9ae5-769b725f187b" alt="Texas Hold'em poker table interface" width="240"> | <img src="https://github.com/user-attachments/assets/b9516a55-d659-41bd-9cbd-1601203da73f" alt="Poker tournament event services interface" width="240"> |

## Architecture

```text
Tournament client
       |
       v
Tars service gateway
       |
       +--> Game and room services --> Tournament rules and player state
       +--> Club, event, and ranking services
       +--> MySQL / configuration / protocol services
```

## License and commercial use

This repository is governed by the terms in [LICENSE](LICENSE). Learning, research, and demonstration use is permitted under those terms. Production deployment, resale, hosted services, or other commercial use requires a separate commercial license from the copyright holder.

- Telegram: `@xuzongbin001`
- Email: `masterai918@gmail.com`

## Keywords

Texas Hold'em tournament platform, poker tournament software, live poker event management, poker club system, multi-table tournament server, Texas Hold'em event system, Texas Hold'em championship system, live poker event management, Texas Hold'em club system.
