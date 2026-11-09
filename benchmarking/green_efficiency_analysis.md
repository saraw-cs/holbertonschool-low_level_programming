# Green Efficiency Analysis

## Measurement Methodology

In this project, I measured how much time different programs need to run. I used the `clock()` function in C to measure execution time.

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

The Naive algorithm uses two loops, while the Single-pass algorithm uses only one loop.

I also noticed that the two algorithms gave different results. The Naive result was 625025000, while the Single-pass result was 25000. This means they did not produce the same output.

## Relation Between Runtime and Energy Consumption

In this project, I compared the execution times of different programs. The results showed that the Single-pass algorithm took less time than the Naive algorithm.

However, I did not measure energy consumption or electricity use. I only measured execution time using the `clock()` function.

Because of this, I cannot confirm how much energy either algorithm used. I can only compare their measured execution times.

## Limitations of the Experiment

There are some limitations in this experiment.

First, I ran the instrumentation program only once. Running it several times could provide more measurements for comparison.

Second, I used the `clock()` function to measure execution time, but it does not measure energy consumption.

Third, I tested the programs in one environment, so I did not compare their performance on different computers.

Finally, the two algorithms returned different results, so their outputs were not equivalent.

## Practical Engineering Takeaway

From this project, I learned that measuring program performance is important.

The results showed that the Single-pass algorithm was much faster than the Naive algorithm in my tests.

I also learned that measuring each part of a program helps me understand how much time each phase takes.

In software development, I should test programs and use real measurements before making conclusions about their performance.

I also learned that execution time and energy consumption are different measurements. To understand energy use, I would need to measure it separately.
