#!/bin/bash

set -e

if [[ $# -ne 1 ]]; then
    echo "Usage: $0 <new-version>"
    exit 1
fi

REPO_ROOT=$(dirname "$0")/..

CURRENT_VERSION="1.84.0~1"

sed -i "s/$CURRENT_VERSION/$1/" "$REPO_ROOT/idf_component.yml" "$REPO_ROOT/README.md" "$0"
