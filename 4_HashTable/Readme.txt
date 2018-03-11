This hash table I used a python script to generate the DOT code for the table. The only real colision I ran into was with inserting 25. Pushed it to slot 0 and the rest went in where the hash function
allocated. On each insert we can observe the load factor ratio to increase.

Step 1 = 1/18
Step 2 = 2/18
Step 3 = 3/18 ..... till Load Factor = 10/18


Max Buckets = (N-1)/M = .55 - 1/M
Average Successful Search Buckets = 1 + (.555/2)


