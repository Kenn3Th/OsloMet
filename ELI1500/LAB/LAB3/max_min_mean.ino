void max_min_mean(float tall[], int lengde, float *minpeker, float *maxpeker, float *mean){
    float sum = 0.0;
    *minpeker = tall[0];
    *maxpeker = tall[0]; 
    for(int i=0; i<lengde; i++){
      sum = sum+tall[i];
      if(tall[i]<*minpeker)
          *minpeker = tall[i];
      if(tall[i]>*maxpeker)
          *maxpeker = tall[i];
    }
    *mean = sum/lengde;
}
