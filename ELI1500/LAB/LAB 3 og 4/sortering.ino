void sortering(float arr[], int lengde){
    float space;
    for(int i=0; i<lengde;i++){
        for(int j=0; j<lengde;j++){
            if(arr[j+1]>arr[j]){
                space = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = space;
            }
        }
    }
}

float m_speed(float value){
  int speed_value;
  if(value>30.0)
      speed_value = 255;
  else if(value <15.0)
      speed_value = 0;
  else
      speed_value = map(t_mean,15,30,80,255);
  return speed_value;
}
