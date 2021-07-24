**NOTE** : This analysis is more of an exercise to learn **markdown** on GitHub :computer:.

For problem D, I messed up several test cases due to my initial approach of sorting on the basis of `a[i] + b[i]`.  
See the comparisons given below :
| Test Case | My Output | Correct Output |
| :---:     |   :---:   |      :---:     |
|  #16  | 24428     | 24331    |
|  #17  | 42566     | 41835    |

How my initial comparator looked like --
```Cpp
	bool sortbysum_desc(pair<int, int> &a, pair<int, int> &b)
	{
		if(a == b)
			return false;
		else if((a.second + a.first) == (b.second + b.first))
			return a.first > b.first;

		return (a.second + a.first) > (b.second + b.first);
	}
```
Sample test case explaining why I added the else-if condition,
```
6
5 3 
2 5
6 1
3 3
3 3
3 3 
```


Now, consider the corner case given below. It leads to WA :
```
3
1 4
3 1
2 0
```

This was resolved by changing the comparator and sorting the pairs based on `(2 * a[i]) + b[i]` instead.
```Cpp
	return ((2 * a.first) + a.second) > ((2 * b.first) + b.second);
``` 
This also takes care of the else-if condition inclusively!

Apparently, many people overlooked this corner case and the discussion on CodeForces really helped.
Do refer [these](https://codeforces.com/blog/entry/86254?#comment-742051) threads, especially [this](https://codeforces.com/blog/entry/86254?#comment-742102) comment.