#!/usr/bin/env bash
# Regenerate keymap.png from the keymap.json config using keymap-drawer.
#
# Requirements (see README "Regenerate the keymap image"):
#   - keymap-drawer  (Python >=3.12):  pip install keymap-drawer
#   - rsvg-convert   (SVG -> PNG):     brew install librsvg
# Override the tool paths via env vars if they are not on PATH, e.g.:
#   KEYMAP=~/kd-venv/bin/keymap RSVG=/opt/homebrew/bin/rsvg-convert ./tools/draw-keymap.sh
set -euo pipefail

cd "$(dirname "$0")/.."

KEYMAP="${KEYMAP:-keymap}"
RSVG="${RSVG:-rsvg-convert}"

KM="keyboards/bastardkb/charybdis/4x6/keymaps/optimistic5/keymap.json"
INFO="tools/charybdis_4x6.info.json"
CONFIG="keymap_drawer.config.yaml"

tmp="$(mktemp -d)"
trap 'rm -rf "$tmp"' EXIT

"$KEYMAP" -c "$CONFIG" parse -q "$KM" -o "$tmp/keymap.yaml"
"$KEYMAP" -c "$CONFIG" draw -j "$INFO" -l LAYOUT "$tmp/keymap.yaml" -o "$tmp/keymap.svg"
"$RSVG" --background-color '#2c2c2c' "$tmp/keymap.svg" -o keymap.png

echo "Wrote keymap.png"
