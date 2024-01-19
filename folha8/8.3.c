void decompor(int total_seg, int*horas, int *mins, int *segs){
    *horas = total_seg/3600;
    total_seg = total_seg%3600;
    *mins = total_seg/60;
    *segs = total_seg%60;
}