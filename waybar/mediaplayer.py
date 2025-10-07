#!/usr/bin/env python3
import subprocess, json

try:
    artist = subprocess.check_output(["playerctl", "metadata", "artist"], text=True).strip()
    title = subprocess.check_output(["playerctl", "metadata", "title"], text=True).strip()
    icon = "default"  # Matches config key
    text = f"{artist} - {title}"
    print(json.dumps({"icon": icon, "text": text}))
except subprocess.CalledProcessError:
    print(json.dumps({"icon": "default", "text": "No media"}))
