#!/bin/bash

USERNAME="CodesWithRobi"
INPUT_FILE="all_repos.txt"

echo "Starting clustered consolidation on categorized repos..."

while IFS= read -r repo_name || [ -n "$repo_name" ]; do
    # Skip empty lines
    [ -z "$repo_name" ] && continue
    
    echo "Categorizing $repo_name..."
    
    # Determine the target folder based on naming patterns
    case "$repo_name" in
        *JAVA*|*DS_*) FOLDER="Data-Structures-Java" ;;
        *Cryptography*) FOLDER="Cryptography" ;;
        *ML*|*Machine-Learning*) FOLDER="Machine-Learning" ;;
        *AI*|*Search*|*search*|*Agent*|*Hill-Climbing*|*Minimax*) FOLDER="Artificial-Intelligence" ;;
        *CLOUD*|*19AI541*) FOLDER="Cloud-Computing" ;;
        *UML*) FOLDER="OOAD-UML" ;;
        *NN-*) FOLDER="Neural-Networks" ;;
        *PIot*) FOLDER="Internet-of-Things" ;;
        *WebDataMining*) FOLDER="Web-Data-Mining" ;;
        *CN-*|*Network*) FOLDER="Computer-Networks" ;;
        *de-*|*DE-*) FOLDER="Digital-Electronics" ;;
        *os-*|*OS-*) FOLDER="Operating-Systems" ;;
        *EH-*|*Ethical*) FOLDER="Ethical-Hacking" ;;
        *edm-*|*EDM-*) FOLDER="Engineering-Design" ;;
        *ARM*|*8086*|*keypad-lcd*) FOLDER="Microprocessors-Embedded" ;;
        *Prompting*|*PromptEngineering*|*PythonProgramWithAI*) FOLDER="Prompt-Engineering" ;;
        *Compiler*) FOLDER="Compiler-Design" ;;
        *) FOLDER="Uncategorized-Misc" ;;
    esac

    # The prefix dictates the folder structure (e.g., Cryptography/19CS415-Cryptography-EXP1)
    PREFIX_PATH="$FOLDER/$repo_name"
    REPO_URL="https://github.com/$USERNAME/$repo_name.git"
    
    # Check if the repo uses 'main' or 'master'
    if git ls-remote --heads "$REPO_URL" main | grep -q 'refs/heads/main'; then
        BRANCH="main"
    else
        BRANCH="master"
    fi

    # Fetch and add the subtree into the specific folder
    git fetch "$REPO_URL" $BRANCH
    git subtree add --prefix="$PREFIX_PATH" "$REPO_URL" $BRANCH -m "Merge $repo_name into $FOLDER/"
    
    echo "Successfully merged $repo_name into $FOLDER/"
    echo "-----------------------------------"
done < "$INPUT_FILE"

echo "Clustering complete! Run 'git push origin main' to upload."
