#1 Round A Q1: Allocation<br/>
The original question page:<br/>
https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc7/00000000001d3f56<br/><br/>

Problem<br/>
There are N houses for sale. The i-th house costs Ai dollars to buy. You have a budget of B dollars to spend.<br/><br/>

What is the maximum number of houses you can buy?<br/><br/>

Input<br/>
The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a single line containing the two integers N and B.<br/> 
The second line contains N integers. The i-th integer is Ai, the cost of the i-th house.<br/><br/>

Output<br/>
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the maximum number of houses you can buy.<br/><br/>

Limits<br/>
Time limit: 15 seconds per test set.<br/>
Memory limit: 1GB.<br/>
1 ≤ T ≤ 100.<br/>
1 ≤ B ≤ 105.<br/>
1 ≤ Ai ≤ 1000, for all i.<br/><br/>

Test set 1<br/>
1 ≤ N ≤ 100.<br/><br/>

Test set 2<br/>
1 ≤ N ≤ 105.<br/><br/>

Sample<br/>
5<br/>
4 100<br/>
20 90 40 90               &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Case #1: 2<br/>
4 50<br/>
30 30 10 10               &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Case #2: 3<br/>
3 300<br/>
999 999 999               &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Case #3: 0<br/>
10 100<br/>
1 2 3 4 5 6 7 8 9 10      &nbsp;&nbsp;&nbsp;&nbsp;Case #4: 10<br/>
2 1000
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Case #5: 1<br/>
999 2<br/><br/>
