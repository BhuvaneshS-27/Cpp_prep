/*
STL uses HALF-OPEN INTERVALS: [start, end)

start -> included
end   -> excluded

By default, end() points one position after the last element.

Examples:

sort(v.begin(), v.end());
=> Since end() is already one past the last element, 
the range includes all actual elements

erase(v.begin()+2, v.begin()+5);
=> removes elements at indices 2, 3, and 4.
   Index 5 is NOT removed.

Rule:
[first, last)
= first included, last excluded

This applies in all STL algorithms
eg :
sort(begin, end);
find(begin, end, value);
reverse(begin, end);
*/