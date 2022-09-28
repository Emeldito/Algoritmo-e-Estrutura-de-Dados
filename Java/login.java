import java.util.Scanner;
/**
 * ====================================
 *           emelditocovane.com
 *          fb.com/emelditocovany
 * ====================================
 */

public class login {


    //Login e senha
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        // 1) Informe o seu login
        System.out.println("login> ");
        String login = in.nextLine();
        // 2) Informe a sua senha
        System.out.println("senha> ");
        String senha = in.nextLine();
        // 3) Armazenar em variaveis o login e a senha
        // 4) Verificar se o login e a senha estão corretos
        // login == "claudio"
        // Estamos comparando uma instância(objeto) com uma string
        if(login.equals("claudio") && senha.equals("123456789-09")){
            System.out.printf("Usuário %s logado com sucesso.", login);
        }else{
            System.out.println("Login ou senha inválidos!");
        }
    }
}