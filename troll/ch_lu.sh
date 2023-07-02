#!/bin/bash

function baisser_luminosite {
    brightness 0
}
function monter_luminosite {
    brightness 1
}
while true; do
	baisser_luminosite
    sleep 0.30
    monter_luminosite
    sleep 0.30
done


