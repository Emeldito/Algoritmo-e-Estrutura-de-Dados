/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.techcoreschool.teste;
import java.util.Calendar;
import java.util.GregorianCalendar;
import java.util.Scanner;

/**
 * Faca um programa que peça o nome, idade e cidade de nascimento do usuário
 * imprima a frase abaixo trocando as tag’s <nome>, <idade>, <cidade>, pelo nome, idade e cidade informado pelo usuário
 * 
 * "Ola. Meu nome é <nome>, sou natural de <cidade>, tenho <idade> anos e estou aprendendo a programar."
 * 
 * @author Emeldito Covane
 * Data: 27/09/2022
 */
public class nome-idade-cidade{
    
    //Lendo e imprimindo textos e números
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        // 1) pedir pro usuário informar:
            //1) Nome
        System.out.println("Digite o seu nome: ");
        String nome = in.nextLine();
            //2) Idade
            System.out.println("Informe a sua idade: ");
            int idade = in.nextInt();
            //3) Cidade
            System.out.println("Informe a sua cidade de nascimento: ");
            String cidade = in.next();

        // 2) armazenar as informações do usuário em variáveis
        // 3) alterar a frase do enunciado
        // Ola. Meu nome é <nome>, sou natural de <cidade>,
        //  tenho <idade> anos, e estou aprendendo a programar.
            System.out.print("Ola. Meu nome é "+nome);
            System.out.print(", sou natural de "+cidade);
            System.out.print(", tenho "+idade);
            System.out.print(" anos, e estou aprendendo a programar.");
    }
}