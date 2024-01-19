void max_min(int vec[], int size, int *pmax, int *pmin){
    *pmax = vec[0];
    *pmin = vec[0];
    for(int i = 1; i < size; i++){
        if (vec[i] > *pmax) *pmax = vec[i];
        else if (vec[i] < *pmin) *pmin = vec[i];
    }
}