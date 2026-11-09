# Green Efficiency Analysis

## Measurement Methodology

In this project, I measured how much time different programs need to run. I used the `clock()` function in C to measure the execution time.

First, I ran the baseline program three times. The results were 0.234387, 0.237255, and 0.235162 seconds. The average time was 0.235601 seconds.

Next, I compared two algorithms. I ran both algorithms three times and calculated their average execution times.

I also used the `clock()` function to measure the total time and the time of each phase in the instrumentation program.

The results were:
- TOTAL: 0.000763 seconds
- BUILD_DATA: 0.000295 seconds
- PROCESS: 0.000328 seconds
- REDUCE: 0.000135 seconds

## Observed Performance Differences

The results showed a big difference between the two algorithms.

The average time of the Naive algorithm was 2.789996 seconds. The average time of the Single-pass algorithm was 0.000107 seconds.

This means the Naive algorithm was about 26,075 times slower than the Single-pass algorithm.

The reason for this difference is the way each algorithm works. The Naive algorithm uses two loops, while the Single-pass algorithm uses only one loop.

It is also important to mention that the two algorithms gave different results. The Naive result was 625025000, and the Single-pass result was 25000. This means their results were not the same.

## Relation Between Runtime and Energy Consumption

Runtime and energy consumption are connected. A program that takes more time may use more energy because the processor works for a longer time.

A faster program may finish its work sooner, which can help reduce energy use.

However, I only measured execution time in this project. I did not measure electricity or energy directly. Because of this, I cannot say exactly how much energy each program used.

## Limitations of the Experiment

There are some limitations in this experiment.

First, the results may be different on another computer because computers have different processors and speeds.

Second, I ran the instrumentation program only once. Running it more times could help me get more reliable results.

Third, I used `clock()` to measure time, but this function does not measure energy consumption.

Finally, the two algorithms returned different results, so I cannot say they produced the same output.

## Practical Engineering Takeaway

From this project, I learned that choosing the right algorithm is important.

The results showed that the Single-pass algorithm was much faster than the Naive algorithm.

I also learned that measuring each part of a program helps me understand where the program spends its time.

In software development, I should test my programs and compare their performance. I should also remember that a faster program does not always mean that I have measured lower energy use.

Good programming means writing code that works correctly and uses time and computer resources well.
