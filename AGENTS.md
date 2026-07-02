# AGENTS.md

Guidance for AI coding agents working in this repository.

## What this repo is

A **QMK Userspace overlay** (not a full QMK checkout) for the
**BastardKB Charybdis 4x6** split keyboard with trackball.

- Controller: **Splinky v3** (RP2040), build target `bastardkb/charybdis/4x6`.
- Keymap name: `optimistic5`. 4 layers: base, symbols/num, media/nav, pointer.
- Builds against the **BastardKB QMK fork** (`bkb-master` branch), NOT mainline
  `qmk/qmk_firmware` (mainline dropped the Splinky board definitions).

## Layout

```
qmk.json                                                  # build targets (userspace manifest)
keyboards/bastardkb/charybdis/4x6/keymaps/optimistic5/
    keymap.json                                           # the layers (edit here or via config.qmk.fm)
    source.c                                              # custom C: dragscroll-on-hold, auto pointer layer
    pointing.h                                            # layer enum + pointer aliases
    config.h                                              # keymap options (dragscroll, auto-pointer)
    rules.mk                                              # extra sources / feature toggles
tools/draw-keymap.sh                                      # regenerates keymap.png
tools/charybdis_4x6.info.json                             # physical layout for keymap-drawer
keymap_drawer.config.yaml                                 # keymap-drawer theme/config
keymap.png                                                # generated keymap image (do not hand-edit)
.github/workflows/build.yml                               # CI build -> .uf2 artifact
```

Build artifacts (`*.uf2`, `*.bin`, `*.hex`, `.build/`) are git-ignored.

## Common tasks

### Edit the keymap
Layers live in `.../optimistic5/keymap.json`. Edit by hand or import/export via
<https://config.qmk.fm/> (keyboard = `bastardkb/charybdis/4x6`). Custom behavior
(hold `S`/`L` for trackball drag-scroll) lives in `source.c` via
`process_record_user` on `LT(0, KC_S)` / `LT(0, KC_L)`.

After changing the keymap, regenerate `keymap.png` (see below).

### Regenerate keymap.png
```bash
KEYMAP=~/kd-venv/bin/keymap RSVG=/opt/homebrew/bin/rsvg-convert ./tools/draw-keymap.sh
```
Needs `keymap-drawer` (Python >= 3.12) and `rsvg-convert` (`brew install librsvg`).
The script is self-contained (uses `tools/charybdis_4x6.info.json`), no QMK
checkout or network required.

### Build firmware locally (macOS / Apple Silicon)
Requires one-time setup (see README "Build locally"). Then:
```bash
export PATH="$(brew --prefix arm-none-eabi-gcc@8)/bin:$(brew --prefix arm-none-eabi-binutils)/bin:$PATH"
~/qmk-venv/bin/qmk compile -kb bastardkb/charybdis/4x6 -km optimistic5
```
Prefer this over installing/running full QMK from scratch inside the agent.

### CI
Pushing triggers `.github/workflows/build.yml`, which checks out the BastardKB
fork, builds this keymap, and uploads the `.uf2` as an artifact.

## Conventions & gotchas

- Do NOT switch the build to mainline QMK — Splinky board defs only exist in the
  BastardKB fork. Keep both the README and `build.yml` pointing at `bkb-master`.
- When touching layers, keep `pointing.h`'s `charybdis_keymap_layers` enum in
  sync (`LAYER_POINTER = 3` is referenced by the auto-pointer logic).
- `keymap.png` is generated output — regenerate it, never edit it by hand, and
  regenerate it in the same change whenever `keymap.json` changes.
- RGB matrix is intentionally disabled in `rules.mk` (`RGB_MATRIX_ENABLE = no`)
  to save space.
- The README is the source of truth for setup/flashing steps; keep it and this
  file consistent when workflows change.
