# The difference between `++n` (pre-increment) and `n++` (post-increment)

The difference between `++n` (pre-increment) and `n++` (post-increment) lies in **when** the variable `n` is incremented relative to its use in an expression:

## 1\. `++n` (Pre-increment)

- **Action**: The variable `n` is incremented **before** it is used in the expression.
- **Effect**: The value of `n` is first increased by 1, and then the incremented value is used.

Example:

```c

int n = 5;
int result = ++n;  // n is incremented first, then assigned
// n is now 6, result is 6
```

### 2\. `n++` (Post-increment)

- **Action**: The variable `n` is incremented **after** it is used in the expression.
- **Effect**: The current value of `n` is used first, and then `n` is incremented afterward.

Example:

```c

int n = 5;
int result = n++;  // n is assigned to result, then incremented
// result is 5, but n is now 6
```

### Summary

- **Pre-increment (`++n`)**: Increments first, then returns the incremented value.
- **Post-increment (`n++`)**: Returns the current value, then increments.

In both cases, the value of `n` will be incremented, but the timing of when that increment happens in relation to the expression evaluation differs.