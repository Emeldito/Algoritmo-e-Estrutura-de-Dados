package avaliacao;
/*
 * @author Emeldito Covane
 * Data: 13/07/2023
 */
import java.util.Scanner;

public class AvaliacaoProva {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Solicita o nome do aluno
        System.out.print("Digite o nome do aluno: ");
        String nomeAluno = scanner.nextLine();

        // Solicita as notas nas questões
        double[] notas = new double[10];
        for (int i = 0; i < 10; i++) {
            System.out.printf("Digite a nota da questão %d: ", i + 1);
            notas[i] = scanner.nextDouble();
        }

        // Calcula a nota final
        double notaFinal = calcularNotaFinal(notas);

        // Exibe a nota final
        System.out.printf("A nota final do aluno %s é %.2f\n", nomeAluno, notaFinal);

        // Verifica a situação do aluno
        if (notaFinal >= 60) {
            System.out.println("Aluno aprovado!");
        } else {
            System.out.println("Aluno reprovado!");
        }
    }

    public static double calcularNotaFinal(double[] notas) {
        double notaTotal = 0;
        for (double nota : notas) {
            notaTotal += nota;
        }
        return (notaTotal / 10); // Dividindo pelo número de questões
    }
}

