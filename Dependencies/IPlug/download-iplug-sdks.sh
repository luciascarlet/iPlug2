#!/usr/bin/env bash

rm -r VST3_SDK

git clone --depth 1 https://github.com/steinbergmedia/vst3sdk.git VST3_SDK
cd VST3_SDK
git submodule update --init pluginterfaces
git submodule update --init base
git submodule update --init public.sdk
git submodule update --init doc
cd ..
git checkout ./VST3_SDK/README.md