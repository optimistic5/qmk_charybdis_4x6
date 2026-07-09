# Text editing on macOS — Charybdis cheat sheet

How to move through and edit text on macOS with the `optimistic5` keymap.
Everything here maps standard macOS text shortcuts to the physical keys and
layers of this keyboard. See the layers in
[keymap.json](keyboards/bastardkb/charybdis/4x6/keymaps/optimistic5/keymap.json)
and the visual [keymap.png](keymap.png).

## Key reference

### Modifiers (base layer)

| Modifier | Key | Where |
|---|---|---|
| `⌘` Command | `RGUI` | left hand, bottom row, outer (left of `Z`) |
| `⌥` Option | `RALT`, or hold `Caps` (`LALT`) | left thumb |
| `⇧` Shift | `LSFT`, or hold `Space` (`LSFT_T`) | left hand / left thumb |
| `⌃` Control | `LCTL` | left thumb |

### Navigation layer — hold `DEL` (right thumb) or `F` (left index) → Layer 2

Layer 2 has two triggers: `LT(2,KC_DEL)` on the right thumb and `LT(2,KC_F)`
on the left index. Use whichever frees the hand you need (see the tip below).

| Action | Key |
|---|---|
| `←` Left | `H` |
| `↓` Down | `J` |
| `↑` Up | `K` |
| `→` Right | `L` |
| Home | `A` |
| End | `C` |
| Page Up | `S` |
| Page Down | `D` |

Layer 1 (hold `BSPC` or `ESC`) also has Home / PgUp / PgDn / End on
`A` / `S` / `D` / `C` (but no arrows), plus the two word-delete keys:
`F` = `⌥⌫` (delete word back), `V` = `⌥⌦` (delete word forward).

Copy / Paste / Cut also live on Layer 3 (hold `D` or `K`): `Z` / `X` / `C`.

> How to read the combos below: hold the modifier(s) with the left hand, hold
> the nav layer (`DEL` or `F`), then tap the nav key. Example:
> "word left" = hold `⌥` + hold `DEL`, tap `H`.
>
> Which trigger to use:
> - **Hold `F` (left index)** for the **arrows** (`H`/`J`/`K`/`L`) — opposite
>   hand, so the right hand taps arrows freely.
> - **Hold `DEL` (right thumb)** when you also need modifiers (`⌘`/`⌥`/`⇧`, all
>   left hand) or the left-hand nav keys (`A`/`S`/`D`/`C` = Home/PgUp/PgDn/End),
>   since it keeps the whole left hand free. The tables below use `DEL`, but `F`
>   works anywhere no left-hand key is involved.

## Move the cursor

| Action | macOS shortcut | On this keyboard |
|---|---|---|
| Char left / right | `←` / `→` | `DEL`+`H` / `DEL`+`L` |
| Line up / down | `↑` / `↓` | `DEL`+`K` / `DEL`+`J` |
| Word left / right | `⌥←` / `⌥→` | `⌥` + `DEL`+`H` / `DEL`+`L` |
| Line start / end | `⌘←` / `⌘→` | `⌘` + `DEL`+`H` / `DEL`+`L` |
| Document start / end | `⌘↑` / `⌘↓` | `⌘` + `DEL`+`K` / `DEL`+`J` |
| Page up / down | `⇞` / `⇟` | `DEL`+`S` / `DEL`+`D` |
| Home / End keys | `⇱` / `⇲` | `DEL`+`A` / `DEL`+`C` |

## Select text

Same as moving the cursor, but also hold `⇧` Shift.

| Action | macOS shortcut | On this keyboard |
|---|---|---|
| Select char left / right | `⇧←` / `⇧→` | `⇧` + `DEL`+`H` / `DEL`+`L` |
| Select word left / right | `⇧⌥←` / `⇧⌥→` | `⇧⌥` + `DEL`+`H` / `DEL`+`L` |
| Select to line start / end | `⇧⌘←` / `⇧⌘→` | `⇧⌘` + `DEL`+`H` / `DEL`+`L` |
| Select to doc start / end | `⇧⌘↑` / `⇧⌘↓` | `⇧⌘` + `DEL`+`K` / `DEL`+`J` |
| Select whole line | `⌘←` then `⇧⌘→` | line start, then select to end |
| Select all | `⌘A` | `⌘` + `A` |

## Delete text

| Action | macOS shortcut | On this keyboard |
|---|---|---|
| Delete char back | `⌫` | tap `BSPC` |
| Delete char forward | `⌦` | tap `DEL` (tap, don't hold) |
| Delete word back | `⌥⌫` | Layer 1 `F`, or `⌥`+`BSPC` |
| Delete word forward | `⌥⌦` | Layer 1 `V`, or `⌥`+`DEL` |
| Delete to line start | `⌘⌫` | `⌘` + `BSPC` |
| Delete to line end | `⌃K` | `⌃` + `K` |

## Clipboard & undo

| Action | macOS shortcut | On this keyboard |
|---|---|---|
| Copy | `⌘C` | `⌘`+`C`, or Layer 3 `Z` |
| Cut | `⌘X` | `⌘`+`X`, or Layer 3 `C` |
| Paste | `⌘V` | `⌘`+`V`, or Layer 3 `X` |
| Undo | `⌘Z` | `⌘` + `Z` |
| Redo | `⇧⌘Z` | `⇧⌘` + `Z` |

## macOS Control (emacs-style) extras

These work in most native macOS text fields, using only `⌃` Control (`LCTL`,
left thumb) — no nav layer needed.

| Action | Shortcut |
|---|---|
| Line start / end | `⌃A` / `⌃E` |
| Char forward / back | `⌃F` / `⌃B` |
| Next / previous line | `⌃N` / `⌃P` |
| Delete char forward | `⌃D` |
| Delete to end of line | `⌃K` |

## Notes

- `DEL` and `BSPC` are layer-taps: **tap** = delete, **hold** = layer. To
  combine a modifier with a nav key, hold the modifier(s) and `DEL` first, then
  tap the nav key.
- No AeroSpace conflict: navigation sends arrow **keycodes** with `⌘`/`⌥`, not
  the `alt`+letter chords AeroSpace binds, so word/line jumps don't trigger
  window management.
- macOS `Home`/`End` keys are app-dependent (often document top/bottom, or just
  scroll without moving the cursor). Prefer `⌘←`/`⌘→` for line ends and
  `⌥←`/`⌥→` for word jumps — they behave consistently across apps.
