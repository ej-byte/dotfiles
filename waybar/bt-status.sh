#!/bin/bash

powered=$(bluetoothctl show | grep "Powered:" | awk '{print $2}')
if [ "$powered" != "yes" ]; then
  echo " Off"
  exit
fi

for mac in $(bluetoothctl devices | awk '{print $2}'); do
  if bluetoothctl info "$mac" | grep -q "Connected: yes"; then
    alias=$(bluetoothctl info "$mac" | grep "Alias:" | cut -d ' ' -f2-)
    echo " $alias"
    exit
  fi
done

echo " Disconnected"
