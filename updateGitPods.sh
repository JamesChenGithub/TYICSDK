#!/bin/sh

script_dir="$( cd "$( dirname "$0"  )" && pwd  )"


#sed -i "" -e  "s/s.version      = */s.version      = \"$1\"/g" TYICSDK.podspec

git status
git add *
git commit -m "更新信息: $2"
git push
git tag "$1"
git push origin --tags

pod trunk push TYICSDK.podspec
