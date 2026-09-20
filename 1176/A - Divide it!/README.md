<h2><a href="https://codeforces.com/contest/1176/problem/A" target="_blank" rel="noopener noreferrer">1176A — Divide it!</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1176A](https://codeforces.com/contest/1176/problem/A) |

## Topics
`brute force` `greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Divide it!</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an integer $$$n$$$.</p><p>You can perform any of the following operations with this number an arbitrary (possibly, zero) number of times: </p><ol> <li> Replace $$$n$$$ with $$$\frac{n}{2}$$$ if $$$n$$$ is divisible by $$$2$$$; </li><li> Replace $$$n$$$ with $$$\frac{2n}{3}$$$ if $$$n$$$ is divisible by $$$3$$$; </li><li> Replace $$$n$$$ with $$$\frac{4n}{5}$$$ if $$$n$$$ is divisible by $$$5$$$. </li></ol><p>For example, you can replace $$$30$$$ with $$$15$$$ using the first operation, with $$$20$$$ using the second operation or with $$$24$$$ using the third operation.</p><p>Your task is to find the minimum number of moves required to obtain $$$1$$$ from $$$n$$$ or say that it is impossible to do it.</p><p>You have to answer $$$q$$$ independent queries.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$q$$$ ($$$1 \le q \le 1000$$$) — the number of queries.</p><p>The next $$$q$$$ lines contain the queries. For each query you are given the integer number $$$n$$$ ($$$1 \le n \le 10^{18}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the answer for each query on a new line. If it is impossible to obtain $$$1$$$ from $$$n$$$, print <span class="tex-font-style-tt">-1</span>. Otherwise, print the minimum number of moves required to do it.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008973259892672121" id="id008655574081748041" class="input-output-copier">Copy</div></div><pre id="id008973259892672121">7
1
10
25
30
14
27
1000000000000000000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002607115408631955" id="id000944124523063945" class="input-output-copier">Copy</div></div><pre id="id002607115408631955">0
4
6
6
-1
6
72
</pre></div></div></div>