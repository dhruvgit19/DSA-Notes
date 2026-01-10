/* TIME COMPLEXITY : 
Rate at which the time taken increases with respect to input size.

- It is expressed using Big-O Notation.

3 Rules for time complexity : 
1 - Always compare time complexity with worst case scenario.
2 - Avoid constants
3 - Avoid lower values
*/




/*
    ---------------- Time Complexity Bounds ----------------

    1) Big-O Notation (O):
       - Represents the UPPER BOUND.
       - Tells the WORST-CASE time complexity.
       - Example: If T(n) = 2n + 3 → O(n)

    2) Theta Notation (Θ):
       - Represents the TIGHT BOUND.
       - Tells the AVERAGE-CASE complexity or exact growth.
       - Example: T(n) = 3n + 2 → Θ(n)

    3) Omega Notation (Ω):
       - Represents the LOWER BOUND.
       - Tells the BEST-CASE time complexity.
       - Example: T(n) = 2n + 1 → Ω(n)

    ---------------------------------------------------------
    Comparison Table:
    ---------------------------------------------------------
    Notation     Meaning        Bound Type
    O(g(n))      Worst-case     Upper Bound
    Θ(g(n))      Average-case   Tight Bound
    Ω(g(n))      Best-case      Lower Bound
    ---------------------------------------------------------

    Practical Usage:
    - Big-O → Guarantees program won't exceed this time.
    - Theta → Exact growth rate (rarely used in analysis).
    - Omega → Minimum time required in the best case.
*/
