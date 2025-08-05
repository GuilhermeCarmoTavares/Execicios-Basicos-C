float mediaTurma(int numAlunos) {
    float soma = 0, nota;
    
    for (int i = 0; i < numAlunos; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &nota);
        soma += nota;
    }
    
    return soma / numAlunos;
}


float mediaEscola(int numTurmas) {
    int numAlunos;
    float somaMedias = 0, media;
    
    for (int i = 0; i < numTurmas; i++) {
        printf("\nTurma %d\n", i + 1);
        printf("Digite o número de alunos da turma: ");
        scanf("%d", &numAlunos);
        
        media = mediaTurma(numAlunos);
        printf("Média da turma %d: %.2f\n", i + 1, media);
        
        somaMedias += media;
    }
    
    return somaMedias / numTurmas;
}

int main() {
    int numTurmas;
    float mediaGeral;
    
    
    printf("Digite o número de turmas: ");
    scanf("%d", &numTurmas);
    
   
    mediaGeral = mediaEscola(numTurmas);
    
    printf("\nMédia geral da escola: %.2f\n", mediaGeral);
    
    return 0;
}
