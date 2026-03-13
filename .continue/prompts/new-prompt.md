---
name: commit
description: Generate a conventional commit message
---
@diff
Write a commit message for the staged changes following the Conventional Commits format: <type>(<scope>): <short summary>

Types: feat, fix, refactor, chore, docs, style, test
- Subject line: 50 chars max, imperative mood, no period.
- Body (if needed): focus on the "why" (the reasoning/motivation) rather than the "what".
- Output ONLY the raw commit message text. No markdown blocks, no "Here is your message," and no extra commentary.