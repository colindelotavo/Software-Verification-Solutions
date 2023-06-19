# Software-Verification-Solutions

This repository contains my Software Verification Solutions for subject 41184 Secure Programming and Penetration Testing [UTS: 41184] during the autumn session of 2023.

## Assignment Details

For detailed information about the assignments, please refer to the following links:

- Subject: [41184 Secure Programming and Penetration Testing](https://handbook.uts.edu.au/subjects/details/41184.html)
- Assignment Wiki: [SVF-tools/Teaching-Software-Verification](https://github.com/SVF-tools/Teaching-Software-Verification/wiki)

### Assignment 1

Implement the methods `printPath` and `DFS` of the `GraphTraversal` class in `Assignment-1.cpp`. Ensure that your code passes the provided test case in `Test1.cpp` without any assertion failures. Submit `Assignment-1.cpp` to Canvas for evaluation. Your implementation will be assessed against our internal tests, and you will receive full marks if your code passes all of them. Although the internal tests are not publicly accessible, you are encouraged to add additional test cases to validate the correctness of your implementation. Remember, you only need to modify `Assignment-1.cpp`, and there is no need to modify other files under the `Assignment-1` folder.

### Assignment 2

Implement the methods `dfs` and `printICFGPath` of the `ICFGTraversal` class in `Assignment-2.cpp`. Ensure that your code passes the provided test cases in `Test2.cpp` without any assertion failures. Submit `Assignment-2.cpp` to Canvas for evaluation. Your implementation will be assessed against our internal tests, and you will receive full marks if your code passes all of them. Although the internal tests are not publicly available, you are encouraged to add additional test cases to validate the correctness of your implementation. Remember, you only need to modify `Assignment-2.cpp`, and there is no need to modify other files under the `Assignment-2` folder.

SVF APIs can be used to assist your implementation. Refer to the SVF CPP API documentation for more information.

### Assignment 3

Implement the methods from `Z3ExampleMgr::test1()` to `Z3ExampleMgr::test7()` in the `Z3ExampleMgr` class within `Assignment-3.cpp`. Ensure that your code passes the provided test cases in `Test3.cpp` without any assertion failures. Submit `Assignment-3.cpp` to Canvas for evaluation. Your implementation will be assessed against our internal tests, and you will receive full marks if your code passes all of them. We have provided `Z3ExampleMgr::test0()` in `Test3.cpp` as an example to help you get started. Remember, you only need to modify `Assignment-3.cpp`, and there is no need to modify other files under the `Assignment-3` folder.

SVF Z3Mgr APIs can be used to assist your implementation. Refer to the SVF Z3Mgr API documentation for more information.

### Assignment 4

Implement the methods `SSE::handleCall`, `SSE::handleRet`, `SSE::handleBranch`, and `SSE::handleNonBranch` of the `SSE` class, which is a subclass of `ICFGTraversal`. The required implementation parts are indicated with TODO comments, and you only need to fill in the code templates if a method is partially implemented. Place your previously implemented `Assignment-2.cpp` file in the appropriate location under the `Assignment-2` folder. Ensure that your code passes the provided tests in the `Test4.cpp` driver program without any assertion failures. Submit `Assignment-
