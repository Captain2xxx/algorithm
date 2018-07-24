# cf1005D(dp)

1. 题目大意：把给定的数串任意切分，问最多有几部分可以被3整除
2. 解题思路：s[0...i-1],s[i]要么属于能被三整除的部分中，要么不属于。z[i]表示前缀长度为i的数串的答案。如果不属于则z[i+1]=z[i]，如果属于的话则需要找到s[j...i]即这部分数串组成的数字可以被3整除，此时z[i+1]=max(z[i],z[j]+1)
3. 有意思的点：
   * 如果s[j...i]可以被3整除，则s[0...j-1]代表的数%3==s[0...i-1]代表的数%3
   * vector赋初值的方法