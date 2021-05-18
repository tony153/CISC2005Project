#include <stdio.h>

void printMemoryData(int memory[]){
  printf("     ");
  for(int j=0;j<10;j++)printf("%2d   ",j);
  printf("\n");
  for(int i=0;i<10;i++){
    printf("%2d   ",i*10);
    for(int j=0;j<10;j++){
      printf("%4d ",memory[j+i*10]);

    }
    printf("\n");
  }
}

void inputData(char path[],int memory[]){
  FILE * fp;
  fp = fopen (path, "r+");

  for(int i=0;i<100;i++){
    fscanf(fp,"%d",&memory[i]);
    

      int m=memory[i];
      if(m==-1||m>9999){
        printf("\n\n***input data error***\n");
        printf("the %d data not a integer or exceed the range\n\n",i);
        return;
      }
      int mh=m/100;
      if(mh!=10&&mh!=11&&mh!=20&&mh!=21&&mh!=30&&mh!=31&&mh!=32&&mh!=33&&mh!=40&&mh!=41&&mh!=42&&mh!=43){
         printf("\n\n***input data error***\n\n");
        printf("the %d data operationCode illegal\n\n",i);
        return;
      }
      int mr=m%100;
      if(mr>10||mr<0){
         printf("\n\n***input data error***\n");
        printf("the %d data operand illegal\n\n",i);
        return;
      }
  }
  fclose(fp);
}
int main(void) {
  int memory[100];
  for(int i=0;i<100;i++) memory[i]=-1;//initialize memory array
  char path[99];

  printf("Enter the file path:");
  scanf("%s",path);
  fflush(stdin);

  inputData(path,memory);
  printMemoryData(memory);
  return 0;
}