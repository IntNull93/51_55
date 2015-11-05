/*
 * =============================================================================
 *
 *       Filename:  Mix_Num.cpp
 *
 *    Description:  InterSection 
 *
 *     Created on:  2015Äê10ÔÂ23ÈÕ 
 *
 *     Created by:  Luokj
 *
 * =============================================================================
 */

#include <iostream>
#include <cstring>
#include <set>
#define M 8
#define N 5
using namespace std;
int main(){
    int A[] = {-1, 2 ,39 ,10, 6, 11, 188, 10};
    int B[] = {39 ,8 , 10, 6, -1};
    set<int> sa;
    set<int> sb;
    for(int i=0;i<M;i++){
        sa.insert(A[i]);
    }
    set<int>::iterator it;
    for(int i=0;i<N;i++){
        if(sa.find(B[i])!=sa.end()){
            sb.insert(B[i]);
        }
    }
    for(set<int>::iterator it=sb.begin();it!=sb.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
