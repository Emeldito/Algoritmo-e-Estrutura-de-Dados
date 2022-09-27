/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.techcoreschool.teste;
import java.util.Scanner;

/**
 * Ler pelo teclado 8 caracteres (de forma separada)
 * e imprimir na tela em em formato de palavra
 * 
 * @author Emeldito Covane
 * Data: 27/09/2022
 */
public class teclado_8_caracteres {
    
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
            // 1) pedir o usuário para informar:
            //1) Primeiro caracter
            System.out.println("Digite a primeira letra: ");
            String a1 = tec.nextLine();
            //2) Segundo caracter
            System.out.println("Digite a segunda letra: ");
            String a2 = tec.nextLine();
            //3) Terceiro caracter
            System.out.println("Digite a terceira letra: ");
            String a3 = tec.nextLine();
            //4) Quartto caracter
            System.out.println("Digite a quarta letra: ");
            String a4 = tec.nextLine();
            //5) Quinto
            System.out.println("Digite a quinta letra: ");
            String a5 = tec.nextLine();
            //6) Sexto
            System.out.println("Digite a sexta letra: ");
            String a6 = tec.nextLine();
            //7) Setimo caracter
            System.out.println("Digite a setima letra: ");
            String a7 = tec.nextLine();
            //8) Oitavo caracter
            System.out.println("Digite a oitava letra: ");
            String a8 = tec.nextLine();           

            // 2) Imprimir na tela em em formato de palavra
            System.out.print(""+a1+""+a2+""+a3+""+a4+""+a5+""+a6+""+a7+""+a8);
    }
}