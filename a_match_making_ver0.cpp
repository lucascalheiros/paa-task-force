#include<iostream>

using namespace std;
void quick_sort ( int *v, int left, int right ) {
    int i = left;
    int j = right;
    int pivo = v[right];
    int temp;
    while ( i <= j ) {
        while ( v[i] > pivo ) {
            i++;
        }
        while ( v[j] < pivo ) {
            j--;
        }
        if ( j >= i ) {
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
    if ( i < right ) {
        quick_sort(v, i, right);
    }
    if ( j > left ) {
        quick_sort(v, left, j);
    }
}/*
int binary_prox_search ( int *v, int left, int right, int query ) {
    int middle = ( left + right )/2;
    if ( left == right ) {
      return 0;
    }
    if ( v[left] )


}*/

int main () {
    int i;
    int *bach, *spin, nbach, nspin;
    int output1[25],output2[25];
    int c = 0;

    cin >> nbach >> nspin;
    while (nbach!=0 && nspin!=0){
    bach = new int[nbach];
    spin = new int[nspin];
    for ( i = 0; i < nbach; i++ ) {
        cin >> bach[i];
    }
    for ( i = 0; i < nspin; i++ ) {
        cin >> spin[i];
    }
    quick_sort( bach, 0, nbach-1 );

    if(nbach > nspin){
        output1[c] = nbach - nspin;
        output2[c] = bach[nbach-1];
    }
    if(nbach <= nspin){
        output1[c] = 0;
    }
    c++;
    cin >> nbach >> nspin;
    }
    for ( i = 0; i < c; i++ ) {
        if ( output1[i] != 0 )
            cout <<"Case "<<i+1<<": "<<output1[i]<<" "<<output2[i];
        else
            cout <<"Case "<<i+1<<": 0";
        cout << "\n";
    }

}
