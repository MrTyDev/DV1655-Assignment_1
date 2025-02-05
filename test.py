#!/usr/bin/env python3
import subprocess
import os

def run_test(file_path):
    print(f"\nTesting {file_path}:")
    try:
        result = subprocess.run(['./compiler', file_path], 
                              capture_output=True, 
                              text=True)
        print("Output:", result.stdout)
        if result.stderr:
            print("Errors:", result.stderr)
    except Exception as e:
        print(f"Error running test: {e}")

def main():
    # Ensure compiler is built
    subprocess.run(['make', 'clean'])
    subprocess.run(['make'])
    
    # Test directories
    test_dirs = [
        'test_files/lexical_errors',
        'test_files/syntax_errors',
        'test_files/valid'
    ]
    
    # Run tests from each directory
    for test_dir in test_dirs:
        print(f"\n=== Testing files in {test_dir} ===")
        for file in os.listdir(test_dir):
            if file.endswith('.java'):
                run_test(os.path.join(test_dir, file))

if __name__ == "__main__":
    main() 