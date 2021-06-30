#!/bin/bash
ifconfig -a link | grep ether | awk -F " " '{print $2}'
