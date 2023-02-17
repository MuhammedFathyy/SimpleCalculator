# Simple Calculator

## Authors

* Muhammed Fathy <mfathy56734@gmail.com>
* Muhammad Ahmad <muhammadathabet@gmail.com>

## GitHub Repository

[GitHub Repo](https://github.com/MuhammedFathyy/SimpleCalculator)

## Steps

1. Initiate git repository using `git init`
2. Create ***getSum.cpp*** and ***prototypes.h.***
3. Commit the current change using `git add getSum.cpp prototype.h && git commit -m "Initial Commit: Adding getSum function and Prototype"`
4. Create ***main.cpp.***
5. Commit the current change using `git add main.cpp && git commit -m "Adding main function"`
6. On GitHub, Create a new repository and copy HTTP link.
7. Run the following command using terminal:

   ```bash
   git remote add origin https://github.com/MuhammedFathyy/SimpleCalculator.git
   git push -u origin main
   ```
8. Create two branches for making getAverage function and getMin function `git branch <branch_name>`
9. Switch to getAverage branch `git switch getAverage`
10. Make a new file and create a getAverage function
11. Update main.cpp and prototypes.h then commit `git commit -am "Adding getAverage function and updating prototypes header and main function"`
12. Switching to getMin branch `git switch getMin`
13. Create a new cpp which is called getMin.cpp and make a getMin function
14. Update main.cpp and prototypes.h then commit `git commit -am ""`
15. Switch to the main branch and merge the getAverage branch to the main branch `git merge getAverage`
16. Merge main branch with getMin branch and resolve the conflicts in the main.cpp and prototypes.h `git merge getMin`
17. Push the new commits in the local repository to the remote github repository
