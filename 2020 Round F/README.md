#1 Round F Q1: ATM Queue<br/>
The original question page:<br/>
https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff48/00000000003f4ed8<br/><br/>

Problem<br/>
There are N people numbered from 1 to N, standing in a queue to withdraw money from an ATM. The queue is formed in ascending order of their number. The person numbered i wants to withdraw amount Ai. The maximum amount a person can withdraw at a time is X. If they need more money than X, they need to go stand at the end of the queue and wait for their turn in line. A person leaves the queue once they have withdrawn the required amount.<br/>

You need to find the order in which all the people leave the queue.<br/><br/>

Input<br/>
The first line of the input gives the number of test cases T. T test cases follow.<br/> 
The first line of each test case gives two space separated integers: the number of people standing in the queue, N and the maximum amount X that can be withdrawn in one turn.<br/> 
The next line contains N space separated integers Ai.<br/><br/> 

Output<br/>
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the space separated list of integers that denote the order in which the people leave the queue.<br/><br/>

Limits<br/>
Time limit: 20 seconds per test set.<br/>
Memory limit: 1GB.<br/>
1 ≤ T ≤ 100.<br/>

Test set 1<br/>
1 ≤ N ≤ 100.<br/>
1 ≤ Ai ≤ 100.<br/>
1 ≤ X ≤ 100.<br/><br/>

Test set 2<br/>
1 ≤ N ≤ 105 for at most 10 test cases. For the remaining cases, 1 ≤ N ≤ 100<br/>
1 ≤ Ai ≤ 109.<br/>
1 ≤ X ≤ 109.<br/><br/>

Sample<br/>
2<br/>
3 3<br/>
2 7 4               &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Case #1: 1 3 2<br/>
5 6<br/>
9 10 4 7 2              &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Case #2: 3 5 1 2 4<br/>
