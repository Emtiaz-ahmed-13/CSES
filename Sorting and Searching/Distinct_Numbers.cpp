/**************************************************/
/*           Author : Nightshade Emtiaz           */
/*        Github : github.com/NightshadeEmtiaz    */
/**************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <bitset>
#include <list>
#include <deque>
#include <forward_list>
#include <unordered_map>
#include <unordered_set>
#include <array>
#include <tuple>
#include <functional>
#include <iterator>
#include <memory>
#include <numeric>
#include <utility>
using namespace std;
int main()
{
	int n;
	cin >> n;
	set<int> s;
	int t;
	for(int i=0;i<n;i++)
	{
		cin >> t;
		s.insert(t);
	}
	cout<<s.size()<<endl;
}