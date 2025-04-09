# Cliente SNTP (Trabalho de Redes)

**Disciplina:** FGA0211 - FUNDAMENTOS DE REDES DE COMPUTADORES
**Turma:** 02 (2024.2 - 24M34)

**Autor(es):**  
- Kathlyn Lara Murussi - 180042378 - 180042378@aluno.unb.br
- Kauan de Torres Eiras - 232014727 - 232014727@aluno.unb.br

## Descrição

Este projeto consiste em um **cliente SNTP** que envia requisições para um servidor NTP via protocolo UDP (porta 123), obtém a hora atual de acordo com o servidor e exibe no console em formato legível. Segue o padrão definido pela **RFC 1769** (NTP simplificado).

## Sistema Operacional Utilizado

- **Windows** via **WSL** (Windows Subsystem for Linux)  
- **Pop!_OS (baseado em Ubuntu)**

*(Ambos testados com sucesso.)*

## Ambiente de Desenvolvimento

- **Compilador**: GCC (GNU Compiler Collection)  
- **Editor**: Visual Studio Code (VSCode)  
- **Make** (opcional): para compilar via Makefile (caso crie um)

## Como Construir (Compilar) a Aplicação

### Método Direto (linha de comando)

1. Abra o terminal (no WSL, Pop!_OS ou similar).
2. Navegue até a pasta onde está o arquivo fonte, por exemplo `sntpclient.c`.
3. Compile com o GCC:
   ```bash
   gcc -o sntpclient sntpclient.c
   ```
4. Será gerado o executável `sntpclient`.

## Como Executar

- Sintaxe:
  ```bash
  ./sntpclient <IP_do_Servidor_NTP>
  ```
  
  - **Exemplo**:  
    ```bash
    ./sntpclient 200.160.7.186
    ```
    *(Este IP é apenas ilustrativo, substitua por algum servidor NTP real.)*

- O cliente vai enviar uma solicitação SNTP para o servidor:
  - Caso receba resposta, exibirá data/hora no formato:  
    ```
    Data/hora: Qui Mar 28 23:11:16 2019
    ```
  - Caso não haja resposta após 20 segundos, tentará mais uma vez. Se continuar sem resposta, exibirá:  
    ```
    Data/hora: não foi possível contactar servidor
    ```

## Exemplos de Uso

```bash
./sntpclient 192.168.0.10
Data/hora: Seg Fev 13 11:25:42 2023
```
*(Exemplo fictício)*

Ou, se não obtiver resposta:
```bash
./sntpclient 192.168.0.10
Data/hora: não foi possível contactar servidor
```

## Instruções Detalhadas

1. **Instalar o GCC** no sistema:  
   - Em distribuições baseadas em Debian/Ubuntu/Pop!_OS:  
     ```bash
     sudo apt update
     sudo apt install build-essential
     ```
2. **Baixar/clonar o projeto** (ou colocar o `sntpclient.c` em uma pasta do seu usuário).
3. **Compilar**:  
   ```bash
   gcc -o sntpclient sntpclient.c
   ```
4. **Executar**:  
   ```bash
   ./sntpclient <IP_do_Servidor_NTP>
   ```
5. **Observar saída** no console. Se o servidor responder, você verá a data/hora; caso contrário, a mensagem de erro após duas tentativas.

## Limitações Conhecidas

- A comunicação **não funciona** na rede da UnB (provavelmente há bloqueio de portas ou restrições de firewall impedindo o tráfego de pacotes UDP/123).  
- O programa não trata nomes de domínio (e.g., `pool.ntp.org`); ele recebe apenas endereços IP no formato decimal (`x.x.x.x`).  
- Não há verificação de parâmetros na linha de comando (se o usuário não passar IP, pode ocorrer erro de segmentação).

## Telas / Instruções de Uso

**Tela de compilação** (via terminal):
```bash
user@machine:~$ gcc -o sntpclient sntpclient.c
```
**Tela de execução** (via terminal):
```bash
user@machine:~$ ./sntpclient 192.168.0.10
Data/hora: Seg Fev 13 11:25:42 2023
```

Caso o servidor não responda:
```bash
user@machine:~$ ./sntpclient 192.168.0.123
Data/hora: não foi possível contactar servidor
```

## Estrutura de Pastas e Arquivos

```
.
├── sntpclient.c
├── README.md             # Este arquivo de documentação em Markdown
└── (opcional) Makefile
```

## Sobre Licença e Autoria

*(Adicione se for necessário: licença MIT, GPL, etc.)*  
*(Liste todos os integrantes do grupo se for um trabalho em equipe.)*

---

**Fim da documentação.**