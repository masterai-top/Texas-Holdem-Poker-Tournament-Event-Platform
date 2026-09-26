[简体中文](README.md) | [繁體中文](README.zh-TW.md) | [English](README.en.md)

# Texas Hold'em Tournament Source Code | SNG, MTT and Live Event C++/Tars Server

[![Server](https://img.shields.io/badge/server-C%2B%2B-00599C)](GMServer.cpp)
[![RPC](https://img.shields.io/badge/RPC-Tars-1683FA)](GMServant.tars)
[![Pages](https://img.shields.io/badge/docs-GitHub%20Pages-1f883d)](https://masterai-top.github.io/Texas-Holdem-Poker-Tournament-Event-Platform/en/)

This repository contains server-side material for **Texas Hold'em tournament source code**, SNG, MTT, online events, and live-event scenarios. Public files include C++/Tars services, room and player lifecycle components, data access, service contracts, compiled Protobuf resources, and sequence diagrams for quick games, SNG, and Private play.

> This is not a verified one-command production release. It depends on an external XGame/Tars environment and lacks some readable protocol sources, complete dependency locking, database migrations, automated tests, and production configuration. Treat public files and reproducible builds as the source of truth.

## Verifiable public scope

| Search intent | Verifiable material | Boundary |
| --- | --- | --- |
| Poker tournament source code | C++/Tars services, room flow, screenshots, and technical docs | Does not prove that the complete client and admin console are public |
| MTT poker source code | MTT product scenarios, tournament table, and server foundations | Verify the full MTT lifecycle against code and builds |
| Texas Hold'em source code | Game services, Tars contracts, data access, and protocol resources | This repository focuses on tournaments rather than a complete general release |
| Live poker events | Registration and on-site service screenshots | Payments, ticketing, and venue systems cannot be confirmed from screenshots alone |

## Public components

| Area | Visible material | Limitation |
| --- | --- | --- |
| Tars services | `GMServer.*`, `GMServantImp.*`, `gameserver.*`, `gameroot.*` | Requires external runtime and configuration |
| Room and player flow | Entry, exit, offline, and game-start components under `core/` | Needs concurrency and failure testing |
| Data access | `DBOperator.*` | Schema, transactions, and connections must be verified |
| Service contracts | `GMServant.tars`, `JFGame.tars`, `Java2RoomProto.tars` | Version compatibility is not documented |
| Gameplay material | Quick-game, SNG, and Private diagrams under `游戏玩法/` | Documentation does not prove a complete implementation |
| Product screenshots | `docs/assets/screenshots/` | Product context is not proof of full reproducibility |

## Tournament scenarios

- SNG single-table tournaments and quick starts
- MTT multi-table tournament and tournament-room scenarios
- Online tournament listings and event content
- Live-event registration and on-site services
- Table, player lifecycle, and game service interfaces

## Screenshots

| Event home | Online tournaments | Tournament table |
| --- | --- | --- |
| ![Texas Hold'em event platform home](docs/assets/screenshots/event-home.jpg) | ![MTT online tournament list](docs/assets/screenshots/online-events.jpg) | ![Texas Hold'em tournament table](docs/assets/screenshots/tournament-table.jpg) |

## Documentation

- [Server architecture](docs/server-architecture.md)
- [Room message flow](docs/room-message-flow.md)
- [Build guide](docs/build-guide.md)
- [Deployment checklist](DEPLOYMENT-CHECKLIST.md)
- [Security and compliance](docs/security-compliance.md)
- [Public scope](PUBLIC-SCOPE.md)

## Fairness and compliance

The repository contains high-risk components related to bot win rates or outcome control. Production use requires restricted access, tamper-evident audit logs, and independent fairness review. It must not be used to manipulate real-player outcomes, conceal probabilities, or evade regulation.

## Contact

- Telegram: [@xuzongbin001](https://t.me/xuzongbin001)
- Email: [masterai918@gmail.com](mailto:masterai918@gmail.com)

Follow applicable laws and platform policies. This repository does not encourage or support illegal gambling or cash wagering.
