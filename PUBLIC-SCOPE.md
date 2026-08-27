# Public Repository Scope

This document separates source that can be verified in the public tree from capabilities shown in product material.

## Verified in the public tree

- C++ `GMServer`, `gameserver`, `gameroot`, and `DBOperator` source files.
- Tars interfaces including `GMServant.tars`, `JFGame.tars`, `Java2RoomProto.tars`, `RobotProto.tars`, and `SizzlerProto.tars`.
- Room and player-lifecycle components under `core/`, including entry, exit, offline, and game-start handling.
- Compiled `*.proto.bytes` protocol resources.
- Sequence diagrams and gameplay material for quick game, SNG, and Private scenarios under `游戏玩法/`.
- Product screenshots and existing technical documents under `docs/`.

## Not verified as complete

- Readable original `.proto` definitions corresponding to every `*.proto.bytes` resource.
- A complete standalone client, admin console, database schema, migration set, or production configuration.
- Complete MTT, ranking, registration, ticket, hotel, video, or on-site check-in implementation.
- Reproducible dependency versions and a clean, one-command build.
- Automated unit, integration, reconnect, settlement, concurrency, load, and security tests.
- Signed releases, an SBOM, independent fairness review, or production certification.

## High-risk components

Files named `robotwinrate.*` and `setwincard.*` require explicit ownership and fairness review. Before any production use, document their purpose, restrict access, add tamper-evident logging, and exclude them from production builds unless a lawful and independently reviewed testing requirement exists.

## Recommended description

“C++/Tars Texas Hold'em tournament-related services, room and player-lifecycle components, service interfaces, compiled protocol resources, gameplay diagrams, documentation, and product screenshots.”

Do not describe the public repository as complete, audited, production-ready, or independently fair until those claims are supported by reproducible evidence.
