# Fundamentos de Redes de Computadores

## Trabalho 02

### Prof. Tiago Alves

### Camada de Rede: NAT + DHCP + DNAT

## Introdução

A disciplina de **Fundamentos de Redes de Computadores** trata de diversos tópicos relativos a Sistemas Operacionais, sistemas que provêem uma forma intuitiva de se utilizar as funcionalidades de computadores digitais sem que seja necessário ao usuário ou programador ter profundo conhecimento das interações entre os diferentes hardwares que compõem um computador.

Para construir ou adicionar funcionalidades a esses sistemas computacionais, é necessário conhecimento de linguagens de programação e ferramentas de desenvolvimento.

## Objetivos

1. Exercitar conceitos de configuração de redes de computadores.

## Referências Teóricas

- Wright, Gary R., and W. Richard Stevens. **TCP/IP Illustrated.** Vol. 2. Addison-Wesley Professional, 1995.

## Material Necessário

- Computador com sistema operacional programável e configurável.
- Ferramentas de operação GNU/Linux ou similares: editor de texto, entre outros.

## Roteiro

1. Revisão de técnicas e ferramentas para a configuração de redes de computadores usando as ferramentas tipicamente disponíveis nos sistemas GNU/Linux e *NIX.
2. Realizar as implementações solicitadas no questionário do trabalho.

## Implementações e Questões para Estudo

1. Tomando como base uma rede de acesso de segmento `192.168.133.0/24` (rede cabeada do LDS), com gateway em `192.168.133.1`:
    - Configure um roteador em que a interface de rede **WAN** assuma um IP da rede de acesso e a rede **LAN** provida através deste trabalho seja uma subrede `/16` usando as faixas de IP reservadas na Internet para esse tipo de configuração.
    - Use o serviço de **NAT** para realizar o mapeamento entre o IP da rede de acesso e os IPs da rede privada **LAN** criada como solução a essa demanda.
    - Gere uma lista de testes necessários para validar sua solução:
        - Validar conectividade.
        - Tradução de endereço (**NAT**).
        - Isolamento de segmento (**NAT**).
    
2. Implemente o serviço de **DHCP** para prover as configurações de redes para os clientes da **LAN** recém criada.
    - Parta do princípio que há um servidor **DNS** provido no IP `192.168.133.1`.
    - Para determinada máquina de testes de configurações da **LAN** criada, vincule um endereço IP de forma que aquele equipamento receba sempre o mesmo endereço como oferta do servidor **DHCP**.
    - Indique como conferir as leases providas pelo servidor **DHCP** em arquivos de log.

3. Implemente regra de **DNAT** para um dos equipamentos da **LAN**:
    - A intenção é redirecionar a porta **TCP 80** do lado **WAN** do roteador sendo configurado para uma porta **TCP 8080** de um dos clientes da **LAN** criada.
    - Usando ferramentas como `netcat` e `telnet`, a equipe deverá implementar um servidor **TCP** e conectar um cliente **TCP** à porta `80` do roteador (**WAN**) a partir de um outro equipamento do lado **WAN**.

4. Gere a documentação dos procedimentos necessários para testar e validar os requisitos de configuração demandados nesse trabalho.
    - Em momento oportuno, serão feitos testes de validação da documentação proposta no **LDS**.

## Instruções e Recomendações

A submissão das respostas aos problemas dos trabalhos deverá ser feita através de ponto de submissão no **SIGAA** ou no **Office365**.

Cada resposta a problema desse **Trabalho 02** deverá ser entregue em um pacote **ZIP**. Cada grupo deverá submeter, no ponto de coleta, um pacote com documentação em formato **zip**.

### Entre os artefatos esperados, listam-se:

- **Documentação mínima** do script/roteiro de configuração, correspondendo a **50%** dos escores de pontuação final do trabalho:
    - Qual sistema operacional foi usado na construção do sistema.
    - Quais foram as aplicações demandadas na implementação da **LAN**.
    - Como implementar a rede **LAN**.
    - Como validar a configuração da rede **LAN**.
    - Quais são as limitações conhecidas.

Arquivos de configuração com erros de interpretação serão desconsiderados (**anulados**).

Os outros **50%** de escores virão da execução dos testes de validação da implementação na presença do professor.

Os trabalhos poderão ser realizados em duplas; a identificação de cópia ou **plágio** irá provocar **anulação de todos os artefatos em recorrência**.

### Em relação ao uso dos sistemas operacionais, as equipes deverão atentar-se para a seguinte tabela de limites de escore:

- **BSD**: 100% de escores totais do trabalho.
- **Linux**: 90% de escores totais do trabalho.
- **Outro sistema operacional**: 80% de escores totais do trabalho.

> **Observação:** Derivações de sistemas operacionais (**BSD** ou **Linux**) com pacotes para configuração rápida de rede serão enquadradas nessa categoria.

