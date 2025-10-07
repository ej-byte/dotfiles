#!/bin/bash
while true; do
  read cpu user nice system idle iowait irq softirq steal guest < /proc/stat
  prev_idle=$idle
  prev_total=$((user + nice + system + idle + iowait + irq + softirq + steal))
  sleep 2
  read cpu user nice system idle iowait irq softirq steal guest < /proc/stat
  idle_diff=$((idle - prev_idle))
  total=$((user + nice + system + idle + iowait + irq + softirq + steal))
  total_diff=$((total - prev_total))
  usage=$(( (100 * (total_diff - idle_diff)) / total_diff ))
  echo "{\"text\":\"$usage% CPU\"}"
done
