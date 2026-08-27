# Deployment Checklist

Use this checklist before exposing any service to users or production data.

## Ownership and licensing

- Confirm ownership or redistribution rights for code, art, audio, fonts, SDKs, screenshots, and product names.
- Resolve the current `LICENSE` conflict between MIT permissions, commercial restrictions, and “All Rights Reserved”.
- Make the repository license, sales terms, README, source headers, and third-party notices consistent.

## Build and dependencies

- Record the supported Linux distribution, GCC/G++, Tars, Protobuf, MySQL client, RapidJSON, WBL, and XGame module versions.
- Remove or document absolute developer-machine paths in `makefile` and configuration.
- Restore readable original `.proto` definitions where redistribution rights permit.
- Build from a clean, isolated environment and retain checksums or an SBOM.
- Document every required generated header and external service.

## Secrets and data

- Scan the complete Git history for passwords, keys, tokens, production endpoints, and personal data.
- Rotate any exposed credential, even if it was later deleted.
- Publish sanitized examples instead of production configuration.
- Define retention, export, deletion, encryption, and access-control policies for player and event data.

## Game integrity

- Review `robotwinrate.*`, `setwincard.*`, RNG, card generation, bot controls, and all administrative result controls.
- Remove nonessential outcome-control code from production builds.
- Require least privilege, multi-person approval, and tamper-evident audit logs for sensitive tools.
- Prevent clients from controlling authoritative cards, balances, timing, eligibility, or settlement.
- Test reconnects, duplicate messages, timeouts, concurrent actions, repeated settlement, and invalid state transitions.
- Obtain an independent fairness and security review where required.

## Operations and compliance

- Add health checks, structured logs, metrics, alerts, rate limits, backups, restore tests, and rollback procedures.
- Separate development, staging, and production accounts, networks, keys, and data.
- Review local rules for tournaments, prizes, payments, age limits, privacy, taxation, and consumer protection.
- Review Apple, Google, payment-provider, advertising, and regional distribution policies.

This checklist is not legal, security, fairness, or production certification.
