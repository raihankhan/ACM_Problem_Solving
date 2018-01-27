n := File standardInput readLine asNumber
a := 1
b := 1
c := 0
for(i, 2, n, 
	c := a
	a := b
	b := c+a
)
b println
