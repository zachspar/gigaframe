CC = g++
CFLAGS = -g -Wall -std=c++17
SOURCES = cpp/implementation/*.cpp

mkfile_path := $(abspath $(lastword $(MAKEFILE_LIST)))
current_dir := $(notdir $(patsubst %/,%,$(dir $(mkfile_path))))

all: build

build:
	pip install -e gigaframe_util

clean:
	rm -rf build dist .DS_Store *.egg-info *.so *.pyc gigaframe_util/build gigaframe_util/dist gigaframe_util/__pycache__ gigaframe_util/*.{egg-info,pyc,so}
