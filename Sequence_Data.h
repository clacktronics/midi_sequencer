int fader_1_sequence[] = {10,10,1,1,30,30};
int fader_2_sequence[] = {5,5,1,1,3,30};


unsigned char Sequence[20][8][8] = {
            
 //seq1     
                          {  
                            {9,0,0,0,0,0,0,0},
                            {0,9,0,0,0,0,0,0},
                            {0,0,9,0,0,0,0,0},
                            {0,0,0,9,0,0,0,0},
                            {0,0,0,0,9,0,0,0},
                            {0,0,0,0,0,9,0,0},
                            {0,0,0,0,0,0,9,0},
                            {0,0,0,0,0,0,0,9}

                          },
//seq2
                          
                          {  
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0}

                          },
 //seq3
                          {  
                            {9,0,0,0,0,0,0,0},
                            {9,9,0,0,0,0,0,0},
                            {0,9,9,0,0,0,0,0},
                            {0,0,9,9,0,0,0,0},
                            {0,0,0,9,9,0,0,0},
                            {0,0,0,0,9,9,0,0},
                            {0,0,0,0,0,9,9,0},
                            {0,0,0,0,0,0,9,9}

                          },
 //seq4                         
                          {  
                            {9,0,0,0,0,0,0,0},
                            {9,9,0,0,0,0,0,0},
                            {0,9,9,0,0,0,0,0},
                            {0,0,9,5,0,0,0,0},
                            {0,0,0,9,9,0,0,0},
                            {0,0,0,5,9,9,0,0},
                            {0,0,0,0,0,9,9,0},
                            {0,0,0,0,0,0,9,9}

                          },
//seq5                         
                          {  
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,9,0,0,0},
                            {0,0,0,0,9,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,9,0,0,0},
                            {0,0,0,0,9,0,0,0},
                            {0,0,0,0,0,0,0,0}

                          },
 //seq6
                          {  
                            {9,0,0,0,0,0,0,0},
                            {9,9,0,0,0,0,0,0},
                            {0,9,9,0,0,0,0,0},
                            {0,0,9,9,0,0,0,0},
                            {0,0,0,9,9,0,0,0},
                            {0,0,0,0,9,9,0,0},
                            {0,0,0,0,0,9,9,0},
                            {0,0,0,0,0,0,9,9}

                          },
//seq7                        
                          {  
                            {9,0,0,0,0,0,0,0},
                            {9,9,0,0,0,0,0,0},
                            {0,9,9,0,0,0,0,0},
                            {0,0,9,5,0,0,0,0},
                            {0,0,0,9,9,0,7,0},
                            {0,0,0,5,9,9,0,0},
                            {0,0,0,0,0,9,9,0},
                            {0,0,0,0,0,0,9,9}

                          },
 //seq8                                                                         
                          {  
                            {0,0,0,0,0,5,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,9,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0}
                          },
  //seq9                                                                         
                          {  
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0}
                          },
 //seq10                         
                           {  
                            {9,0,3,0,0,0,0,0},
                            {9,9,0,4,0,0,0,0},
                            {0,9,9,0,8,0,0,0},
                            {0,0,9,9,0,5,0,0},
                            {0,0,0,9,9,0,7,0},
                            {0,0,0,0,9,9,0,6},
                            {2,8,0,0,0,9,9,0},
                            {0,0,0,0,0,0,9,9}
                          },
 //seq11                      
                          {  
                            
                            {9,0,3,0,0,0,0,0},
                            {9,9,0,4,0,0,0,0},
                            {0,9,9,0,8,2,0,0},
                            {0,0,9,9,0,5,0,0},
                            {0,0,0,9,9,0,7,0},
                            {0,0,0,0,9,9,0,6},
                            {2,8,4,0,0,9,9,0},
                            {0,0,0,0,0,0,9,9}
                           },
                           
 //seq12                        
                          {  
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0}
                          }, 
//seq13                        
                          {  
                            {9,0,0,0,0,0,0,0},
                            {9,9,0,0,0,0,0,0},
                            {0,9,9,0,0,0,0,0},
                            {0,0,9,5,0,0,0,0},
                            {0,0,0,9,9,0,7,0},
                            {0,0,0,5,9,9,0,0},
                            {0,0,0,0,0,9,9,0},
                            {0,0,0,0,0,0,9,9}

                          },
//seq14                        
                          {  
                            {9,0,0,0,0,0,0,0},
                            {9,9,0,0,0,0,0,0},
                            {0,9,9,0,0,0,0,0},
                            {0,0,9,5,0,0,0,0},
                            {0,0,0,9,9,0,0,0},
                            {0,0,0,5,9,9,0,0},
                            {0,0,0,0,0,9,9,0},
                            {0,0,0,0,0,0,9,9}

                          },
//seq15                        
                          {  
                            {9,0,0,0,0,0,0,0},
                            {9,0,0,0,0,0,0,0},
                            {0,0,9,0,0,0,0,0},
                            {0,0,9,5,0,0,0,0},
                            {0,0,0,0,9,0,0,0},
                            {0,0,0,5,9,0,0,0},
                            {0,0,0,0,0,0,9,0},
                            {0,0,0,0,0,0,9,0}

                          },                         
//seq16                        
                          {  
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,5,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,5,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0}

                          },
                          
                           {  
                            {9,0,0,0,0,0,0,0},
                            {9,9,0,0,0,0,0,0},
                            {0,9,9,0,0,0,0,0},
                            {0,0,9,5,0,0,0,0},
                            {0,0,0,9,9,0,0,0},
                            {0,0,0,5,9,9,0,0},
                            {0,0,0,0,0,9,9,0},
                            {0,0,0,0,0,0,9,9}

                          },
//seq15                        
                          {  
                            {9,0,0,0,0,0,0,0},
                            {9,0,0,0,0,0,0,0},
                            {0,0,9,0,0,0,0,0},
                            {0,0,9,5,0,0,0,0},
                            {0,0,0,0,9,0,0,0},
                            {0,0,0,5,9,0,0,0},
                            {0,0,0,0,0,0,9,0},
                            {0,0,0,0,0,0,9,0}

                          },                         
//seq16                        
                          {  
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,5,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,5,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0}

                          },
                          
                           {  
                            {9,0,0,0,0,0,0,0},
                            {9,9,0,0,0,0,0,0},
                            {0,9,9,0,0,0,0,0},
                            {0,0,9,5,0,0,0,0},
                            {0,0,0,9,9,0,0,0},
                            {0,0,0,5,9,9,0,0},
                            {0,0,0,0,0,9,9,0},
                            {0,0,0,0,0,0,9,9}

                          }

                          };
