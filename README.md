question A :
	g++ hw.cpp


question B :

n=1000
sort(): 0.000161 seconds
v1/v2 are different.
insertion_sort(): 0.007756 seconds
v1/v2 are the same.

n=10000
sort(): 0.002104 seconds
v1/v2 are different.
insertion_sort(): 0.833026 seconds
v1/v2 are the same.

n=100000
sort(): 0.025744 seconds
v1/v2 are different.
insertion_sort(): 82.1758 seconds
v1/v2 are the same.

n=1000000
sort(): 0.296522 seconds
v1/v2 are different.
insertion_sort(): 8436.62 seconds
v1/v2 are the same.

第一個的時間複雜度是 n * log(n)
而第二個是 n^2
兩者相比之下 第一個的時間複雜度小了很多
所以用sort()所花費的時間會小很多
