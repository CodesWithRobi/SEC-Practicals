while IFS= read -r repo_name; do
    gh repo delete "CodesWithRobi/$repo_name" --yes
done < all_repos.txt
