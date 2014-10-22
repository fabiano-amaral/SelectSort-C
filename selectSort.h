/*Selection sort é um algoritmo simples de ordenação,
 ele no pior caso tem complexidade O(n^2). É muito 
 útil quando os registros já estão em sua maior parte
 ordenados, como por exemplo em 1 milhão de registros temos
 apenas 10 desordenados, ai a complexidade se resume a O(n) 
 já que ele não entra nos dois loops quando o elemento já se encontra na sua posição*/

void selectSort(int tamanhoVetor, int v[]){
    int j, i, chave;
    for (j=1; j < tamanhoVetor; j++) { //j recebe 1 e não 0 para que eu possa considerar que o primeiro elemento d
        i=j-1;                          //já se encontra ordenado na sua posição natural.
        chave = v[j];
        while (i<=0 && chave>chave[i]) {//isso é feito para que eu saiba aonde tenho de encaixar o elemento que quero colocar na posição dele
            chave[i+1] = chave[i];// aqui o código é feito um deslocamento na posição do
            i--;                    // do vetor para que abra UM espaço para encaixar o novo elemento na sua posição.
        }
        chave[i]=chave;

    }

}