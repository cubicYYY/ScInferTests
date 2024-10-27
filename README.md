# README

Handcrafted or modified (un)masked programs used for ScInfer verification.

## Usage: How to Re-run

1. Put these examples into the ScInfer artifact (the virtual machine).
2. Move them to a subfolder (e.g., `/MyTest`) under the ScInfer root folder.
3. Modify the `file.py` and `small.py`: change the folder name and total example counts.
4. Run `python small.py`.

## Notes

+ Insert spaces correctly since the ScInfer parser is super simple.
+ A `(` must follows the `return` with NO space.
+ Only a single operation or declaration for each line.
