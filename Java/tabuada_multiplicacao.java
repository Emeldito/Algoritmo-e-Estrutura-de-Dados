/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.techcoreschool.teste;
import java.util.Scanner;
/**
 * leia pelo teclado um número inteiro.
 * imprima na tela a tabuada (multiplicação) do valor lido 
 * 
 * @author Emeldito Covane
 * Data: 28/09/2022
 */
public class tabuada_multiplicacao {
   public static void main(String[] args) {
//int tabudas;
//int e=11;
//    int i = 0;
    int j;
    int i;

        Scanner scan = new Scanner (System.in);
        System.out.println("Digite o numero: ");
        int e = scan.nextInt();

        for (i=e;i<=e;i++){

        for (j=1; j<=10; j++){
        System.out.println(e + "x" + j + "=" +(i*j));
        }
       }
   }
}