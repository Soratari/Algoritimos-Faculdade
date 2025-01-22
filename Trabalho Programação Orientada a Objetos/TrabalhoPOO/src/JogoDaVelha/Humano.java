package JogoDaVelha;

import java.util.Scanner;

public class Humano extends Jogador{ // essa classe herda totalmente a classe jogador 
    public Scanner entrada = new Scanner(System.in);
    
    public Humano(int jogador){
        super(jogador);
        this.jogador = jogador;
        System.out.println("Jogador 'Humano' criado!"); // aqui mostrado como foi denominado o jogador humano 
    }
    
    @Override
    public void jogar(Tabuleiro tabuleiro){
        Tentativa(tabuleiro);
        tabuleiro.setPosicao(tentativa, jogador);
    }
    
    @Override
    public void Tentativa(Tabuleiro tabuleiro){ // aqui é onde guardamos a variaveis de tentativa 
        do{
            do{
                System.out.print("Linha: ");
                tentativa[0] = entrada.nextInt();
                
                if( tentativa[0] > 3 ||tentativa[0] < 1)
                    System.out.println("Linha inválida. É 1, 2 ou 3");// aqui mostramos que somente há 3 linhas no tabuleiro 
                
            }while( tentativa[0] > 3 ||tentativa[0] < 1);
            
            do{
                System.out.print("Coluna: ");
                tentativa[1] = entrada.nextInt();
                
                if(tentativa[1] > 3 ||tentativa[1] < 1)
                    System.out.println("Coluna inválida. É 1, 2 ou 3"); // aqui mostramos que somente há 3 colunas no tabuleiro
                
            }while(tentativa[1] > 3 ||tentativa[1] < 1); 
            
            tentativa[0]--; 
            tentativa[1]--;
            
            if(!checaTentativa(tentativa, tabuleiro))
                System.out.println("Esse local já foi marcado. Sua Anta!.");// aqui é exibido uma mensagem ofensiva caso o jogador tente usar um local ocupado
        }while( !checaTentativa(tentativa, tabuleiro) );
    } 
}

