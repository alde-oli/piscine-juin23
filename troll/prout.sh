#!/bin/bash

# Répertoire de destination des captures d'écran
destination_dir="./"

# Intervalles entre les captures (en secondes)
interval=0.1

# Boucle infinie pour les captures d'écran
while true; do
    # Nom du fichier de capture d'écran
    screenshot_file="${destination_dir}/capture_$(date +%Y%m%d_%H%M%S).png"

    # Capture d'écran en utilisant screencapture
    screencapture "$screenshot_file"

    echo "Capture d'écran enregistrée sous : $screenshot_file"

    # Pause avant la prochaine capture
done
