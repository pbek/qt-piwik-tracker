#!/bin/bash
#
# A tool to run clang-format on the entire project
#
# See: https://github.com/eklitzke/clang-format-all
#
# Adapted config from: clang-format -style=Google -dump-config > .clang-format

./scripts/clang-format-all.sh .
