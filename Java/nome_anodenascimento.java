/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.techcoreschool.teste;
import java.util.Scanner;

/**
 * leia pelo teclado o nome e o ano de nascimento de um estudante e em seguida
 * calcule a idade tendo em conta o ano actual.
 * imprimir os dados lidos no seguinte formato: 
 * NOME tem IDADE anos de idade.
 * 
 * @author Emeldito Covane
 * Data: 27/09/2022
 */
public class nome_anodenascimento {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
            // Pedir ao usuário informar:
            //1) Nome completo
            System.out.println("Digite o seu nome completo: ");
            String nome = in.nextLine();
            //2) Ano de nascimento
            System.out.println("Informe o seu ano de nascimento: ");
            int ano = in.nextInt();

           // 2) Imprimir os valores lidos 
            System.out.print(""+nome+"<====>" +ano);

    }
}