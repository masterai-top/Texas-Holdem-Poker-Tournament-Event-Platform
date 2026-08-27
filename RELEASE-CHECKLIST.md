# Release Checklist

- Tag a reviewed commit built from a clean environment.
- State exactly which server, client, database, admin, and event components are included.
- Publish supported compiler, Tars, Protobuf, database, and shared-module versions.
- Include dependency locks or an SBOM and checksums for distributed artifacts.
- Remove secrets, personal data, endpoints, logs, caches, object files, and build dependencies.
- Record database migration, compatibility, backup, restore, and rollback requirements.
- Publish test results for room flow, reconnects, duplicate messages, timeouts, settlement, and concurrency.
- Document protocol changes, known limits, external dependencies, and upgrade steps.
- Complete fairness review of RNG, bot controls, `robotwinrate.*`, and `setwincard.*`.
- Resolve licensing and third-party notices before distribution.
- Do not call a release production-ready solely because screenshots or binaries exist.
