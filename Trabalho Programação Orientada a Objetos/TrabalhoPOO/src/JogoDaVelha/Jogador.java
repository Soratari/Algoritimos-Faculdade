package JogoDaVelha;

public abstract class Jogador { // Essa classe é totalmente reposavel pelo jogador seja ela humano ou maquina 
    
    protected int[] tentativa = new int[2]; 
    protected int jogador;

    
    public Jogador(int jogador){
        this.jogador = jogador;
    }
    
    public abstract void jogar(Tabuleiro tabuleiro); 
    
    public abstract void Tentativa(Tabuleiro tabuleiro);

    public boolean checaTentativa(int[] tentativa, Tabuleiro tabuleiro){
        if(tabuleiro.getPosicao(tentativa) == 0)
            return true;
        else
                 return false;
        
    }
}
            // o codigo em si será reposavel pela marcação das linhas tentiva 0 armazena a linha e a tentativa 1 posição da coluna 
    
   

