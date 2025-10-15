# Step 1: Clone the repo
git clone https://github.com/your-username/git-demo.git
cd git-demo

# Step 2: Create and add a file
echo "This is a sample file" > sample.txt
git add sample.txt
git commit -m "Added sample.txt file"
git push origin main

# Step 3: Fetch and pull from GitHub
git fetch origin
git pull origin main

# Step 4: Create and switch to a new branch
git checkout -b new_feature

# Step 5: Add another file in the new branch
echo "File in new branch" > branch.txt
git add branch.txt
git commit -m "Added branch.txt in new_feature branch"
git push origin new_feature

# Step 6: Switch back to main branch
git checkout main

# Step 7: Reset the last commit (soft reset - keeps changes)
git reset --soft HEAD~1

# Step 8: Delete a file
git rm sample.txt
git commit -m "Deleted sample.txt"
git push origin main

# Step 9: Delete the branch locally and remotely
git branch -d new_feature
git push origin --delete new_feature
