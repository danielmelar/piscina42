#!/bin/bash
ip link show | awk '/ether/ {print $2}'
