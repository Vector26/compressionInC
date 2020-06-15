struct tree{
    int freq;
    unsigned char key;
    struct tree *left;
    struct tree *right;
};

void inputData(struct tree *input,int freq,unsigned char key,struct tree *left,struct tree *right){
    //printf("\nlog:in Data");
    input->freq=freq;
    input->key=key;
    input->left=left;
    input->right=right;
}

void createBranch()
{   struct tree *temp=(struct tree *)malloc(sizeof(struct tree));
    struct tree *left=(struct tree *)malloc(sizeof(struct tree));
    struct tree *right=(struct tree *)malloc(sizeof(struct tree));
    struct list *minLs=getMinLink();
    inputData(left,minLs->freq,minLs->key,NULL,NULL);

    inputData(temp,data->freq,data->key);
}
