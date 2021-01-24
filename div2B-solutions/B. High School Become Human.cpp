#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef q
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ios_base::sync_with_stdio(false); cin.tie(NULL);


numbers=input().split(' ')
numbers=[int(i) for i in numbers]

def multiply(x,y):
	if y==1:
		return x

	return x*multiply(x,y-1)

if numbers[0]==numbers[1]:
	print('=')

elif multiply(numbers[0],numbers[1])>multiply(numbers[1],numbers[0]):
	print('>')
elif multiply(numbers[0],numbers[1])<multiply(numbers[1],numbers[0]):
	print('<')

	








}