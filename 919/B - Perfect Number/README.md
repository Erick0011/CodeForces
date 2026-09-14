<h2><a href="https://codeforces.com/contest/919/problem/B" target="_blank" rel="noopener noreferrer">919B — Perfect Number</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 919B](https://codeforces.com/contest/919/problem/B) |

## Topics
`binary search` `brute force` `dp` `implementation` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Perfect Number</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>We consider a positive integer perfect, if and only if the sum of its digits is exactly $$$10$$$. Given a positive integer $$$k$$$, your task is to find the $$$k$$$-th smallest perfect positive integer.</p></div><div class="input-specification"><div class="section-title">Input</div><p>A single line with a positive integer $$$k$$$ ($$$1 \leq k \leq 10\,000$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>A single number, denoting the $$$k$$$-th smallest perfect integer.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0031169681997145504" id="id005453528752037389" class="input-output-copier">Copy</div></div><pre id="id0031169681997145504">1<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009212053792919165" id="id008529835743774805" class="input-output-copier">Copy</div></div><pre id="id009212053792919165">19<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00871690970208875" id="id009329682354897586" class="input-output-copier">Copy</div></div><pre id="id00871690970208875">2<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009006639445819254" id="id007111459310827213" class="input-output-copier">Copy</div></div><pre id="id009006639445819254">28<br></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first perfect integer is $$$19$$$ and the second one is $$$28$$$.</p></div>