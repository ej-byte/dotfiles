#!/bin/bash
while true; do
  usage=$(nvidia-smi --query-gpu=utilization.gpu --format=csv,noheader,nounits 2>/dev/null || echo "N/A")
  echo "{\"text\":\"$usage% GPU\"}"
  sleep 2
done
