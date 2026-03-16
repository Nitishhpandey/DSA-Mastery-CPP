# Git Setup & Daily Push Commands

## One-time setup (run once)
```bash
git init
git remote add origin https://github.com/Nitishhpandey/DSA-Mastery-CPP.git
git branch -M main
```

## First push (run once to push all folders)
```bash
git add .
git commit -m "chore: add complete A2Z folder structure for all 454 problems"
git push -u origin main
```

## Daily workflow (run after every problem solved)
```bash
git add .
git commit -m "Step-03 Lec-1: solved two_sum - HashMap O(n)"
git push origin main
```

## Commit message format
```
Step-XX Lec-X: solved [problem_name] - [approach] O(time)

Examples:
Step-03 Lec-1: solved largest_element - linear scan O(n)
Step-04 Lec-1: solved binary_search - classic template O(log n)
Step-16 Lec-2: solved climbing_stairs - 1D DP O(n) space O(1)
```
