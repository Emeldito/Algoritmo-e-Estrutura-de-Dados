/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.techcoreschool.teste;
import java.util.Scanner;

/**
 * Leia pelo teclado dois números inteiros e em seguida ache a soma entre eles.
 * imprimir o 3NUMERO1 + NUMERO2 = RESULTADO 
 * 
 * @author Emeldito Covane
 * Data: 27/09/2022
 */
public class soma {
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
            // Pedir ao usuário informar:
            //1) Introduzir o primeiro numero
            System.out.println("Digite o numero 1: ");
            int n1 = in.nextInt();
            //2) Introduzir o segundo numero
            System.out.println("Digite o numero 2: ");
            int n2 = in.nextInt();
            //3. Soma dos numeros armazenados
            int s =n1+n2; 
            System.out.print(n1+" + " +n2+" = "+s);

    }
}